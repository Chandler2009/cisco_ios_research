# Cisco IOS Overview

IOS is an OS for Cisco routers and switches. It's a monolithic OS that means
that the OS is a big ELF binary file.
The is a big heap, the stack is implemented as top of the heap.

The memory layout inside the IOS os is splitted to 2, process memory and the I/O memory.
The memory are splitted to tiny things called blocks which block is a format to place the data inside the heap.
The memory blocks are organized as a doubly linked list which each memory block has pointer to the next heap memory block and the last memory block. 

The IOS provides a command line interface to control the IOS operation system. Using the IOS�s CLI you can configure the network settings, start up/down servers for controlling the router/switch remotely, support esoteric Cisco protocols, managing the file system and etc..

Cisco routers use flash memory (similar to NVRAM but not exactly) for loading the IOS operation system and non-volatile RAM (NVRAM) for storing the local configuration. 

In order to provide security hierarchy for users within the Cisco router, IOS provides privilege level that represents how privilege the user is.

There are 16 privilege levels starting from 0 to 15 where is 0 is the most lowest privilege and 15 is the most highest privilege and all privilege levels between 1 to 14 are user specified.

For illustration only, what about an organization who want to give privilege of specific group of the IT department to set the IOS configurations and the other only to view the applied configurations. 

-	User EXEC(privilege 1) � This is the default privilege when first connecting to the Cisco router and it provide only few commands to execute (no authentication inside is required). List of commands are:
-	connect: Opens a terminal session to another switch or router.
-	disconnect: Closes a session that was opened from a remote switch or router.
-	enable: Enters Privileged EXEC mode or enables privileged commands.
-	ping: Sends ping or Internet Control Message Protocol (ICMP) echo request packets to a remote IP host, which could be a switch or router.
-	show: Displays configuration information. The information that can be viewed at this level is very limited.
-	systat: Displays information regarding management connections.
-	telnet: Opens a Telnet connection to a remote device, which could be a router or switch.
-	traceroute: Traces a route to a destination displaying connectivity results along the path.

You can notice the user privilege by the greater-than sign:
	Router>

-	Privileged EXEC(privilege 15) � This mode provide mode provide more privileged commands to execute like: cd, clear, clock, copy, debug, delete, disable, erase, exit, no, ping, write, show etc.. 
To notice the privilege EXEC mode, an hash/pound sign is placed inside the CLI:
	Router#

# Memory managment

The heap in IOS is a separated by memory blocks that each block has a format that always needed to be valid (because a watchdog process called CheckHeap). There is no a real stack. The stack is allocated on top of the heap.

The heap is represented in memory as a double linked list of the specified format:
- The RED ZONE element inside the memory block is a static fixed value that whenever this value is changed
	in cause of any reason (from a security research point of view, a buffer overflow occurred ;) a message
	is popped out to the user says that a buffer overflow is detected and a restart is done.
- The size element has the MSB (most signficant bit) set to 1 and its size is a word (2 bytes).
- The refcount element is used to track the usage of all processes that interacts with this memory block,
	this element has not seemed to be used and it's either 1 or 0.

When a memory block is not used, more management data is placed at the point 
where the real data was stored before.
The free block are then placed in 2 linked list, one for the regular memory linked list (because it's was
there and now is freed) and in another linked list (the free linked list memory blocks).
If the block was used at least once, the data inside will be 0x0D0D0D0D.
IOS actually overwrites the block data when free is used!

There is a process called CheckHeaps which is runs every minute and check the validity of the double linked lists.
The process check the double linked lists blocks from the bottom to the top.
What the process checks is:
 - Does the block have the MAGIC ?
 - 	If the block size is in use (check if the MSB is 1) and if the red zone is there and check it�s value.
 - If the prev pointer is not null 
 - Check if the next pointer is point right after the end of this block (and not point to some invalid memory or another block which is in the middle of the linked list) and
	Check if the prev pointer in the block has a next pointer which is point to the this block. 
	<Block A> ---- > <--- <Block B> <Block C>
 - Check if the next pointer is NULL.
- Does the size make sense

If one of those checks are not valid, the IOS will make the all system crash.
You can understand which test is failed by look at the console output line that says 
�validblock_diagnose = 1�, The number is an enum which 1 is MAGIC was incorrect, 3 means address is not in any memory pool and 5 is a like in the check list (4).

# IOS Firmware

The IOS firmware is compressed using pkzip which is a zip and can be decompress 
By Winrar (etc..). The IOS binary is modified in order to prevent researchers from	 reverse engineering the firmware. Actually what they did was to change the e_machine field in the ELF header which denotes the architecture of the binary that can be run on. They set this field to a SPARK architecture but, the routers and switches have PowerPC CPU.

# Exploitation

In order to exploit an heap overflow in IOS environment, we should control
The next pointer of the memory block double linked list and satisfied the �CheckHeap� process. 
The �CheckHeap� is run also when the memory block is already built (every periodic time) and when creating a memory block or freeing a used block. Which then all of the situations make us come across CheckHeap process.
In order to satisfy CheckHeap process we should fake a memory block object(setup a red zone canary, magic, info etc..) in memory so the CheckHeap process will verify the override fake object in memory.

Problems Exploitation:
  - The IOS firmware build number is changed radically which means that even I have a vulnerability inside, I can�t know the address of the current place or the stack (because the stack is built on top of the heap) and there is small chance of getting the address right (because the build version number that changes very fast)
	-	ASLR on new version of IOS
	-	Every memory corruption will fucked up everything because there is only one heap for all the monolithic OS, which means If I fucked up in some process I fucked up the entire system.
	-	If there are any exceptions, the ALL system is restarted.
	-	If there is a process hog and the process execution time is blocking, the scheduler (there is timers for each process) will shut down the all router.

IOS-XR � is an Cisco IOS OS which is based on QNX microkernel that implements virual memory, concurrent scheduling, real process etc..

Things need to know about IOS:
-	My trick should work when I try to bypass CheckHeaps  - 
Racing with the CheckHeaps process, find it in memory and disable it.

# Cisco Router Services Statistics 

Common services that are open for WAN (by Shodan � scan of 20 cisco routers/switches):
![](shodan.png)

