/* $Id: sr_old_lsysmib.c,v 3.9.6.9 1996/09/10 01:07:40 snyder Exp $
 * $Source: /release/112/cvs/Xsys/snmp/sr_old_lsysmib.c,v $
 *------------------------------------------------------------------
 * SNMP/SNMPv2 bi-lingual agent code.
 *
 * April 1994, Chifei W. Cheng (via the SNMP Research MIB Compiler)
 *
 * Copyright (c) 1994-1997 by cisco Systems, Inc.
 * All rights reserved.
 *
 *------------------------------------------------------------------
 * $Log: sr_old_lsysmib.c,v $
 * Revision 3.9.6.9  1996/09/10  01:07:40  snyder
 * CSCdi68568:  more constant opportuniites
 *              140 from image, 52 from data
 * Branch: California_branch
 *
 * Revision 3.9.6.8  1996/08/28  13:10:01  thille
 * CSCdi67083: Message externs need a cleanup.
 * Branch: California_branch
 * Get rid of all extern msgsym()s in .c files, rework logger.h and
 * msg_foo.c files so they are included and provide the externs.  Clean up
 * other random externs in .c files.
 *
 * Revision 3.9.6.7  1996/07/03  20:43:35  thille
 * CSCdi61860: Implement Jeffs glass of slim-fast for snmp
 * Branch: California_branch
 * Take hunk of common code from many mib files, make it a procedure in
 * snmp_util.c and call it from the mibs.  Save 1640 bytes.
 *
 * Revision 3.9.6.6  1996/07/01  18:46:12  hampton
 * Remove gratuitous casting.  [CSCdi61655]
 * Branch: California_branch
 *
 * Revision 3.9.6.5  1996/05/21  10:02:33  thille
 * CSCdi51599:  multiple /interface/ literals bloat code.
 * Branch: California_branch
 * Save another 392 bytes by doing away with duplicate literals.
 *
 * Revision 3.9.6.4  1996/05/04  01:45:48  wilber
 * Branch: California_branch
 *
 * Name Access List
 *
 * Revision 3.9.6.3  1996/04/19  17:46:44  jjohnson
 * CSCdi55117:  Need to support the Draft Standard SNMPv2 SMI
 * Branch: California_branch
 * Prototypes for the <foo>_free functions are auto-generated by the
 * SR 14.0 MIB Compiler.  Make the declarations match the prototypes.
 *
 * Revision 3.9.6.2  1996/04/15  15:00:01  widmer
 * CSCdi47180:  No Single Command to Collect General Router Data
 * Branch: California_branch
 * Add "show tech-support" command
 * Change references to encryption types to uint
 * Change tt_soc to use password_struct
 *
 * Revision 3.9.6.1  1996/03/18  21:48:48  gstovall
 * Branch: California_branch
 * Elvis has left the building.  He headed out to California, and took the
 * port ready changes with him.
 *
 * Revision 3.8.2.2  1996/03/16  07:30:29  gstovall
 * Branch: DeadKingOnAThrone_branch
 * Make the king aware of V111_1_3.
 *
 * Revision 3.8.2.1  1996/03/07  12:33:52  mdb
 * Branch: DeadKingOnAThrone_branch
 * cisco and ANSI/POSIX libraries.
 *
 * Revision 3.9  1996/03/01  14:42:20  bstewart
 * CSCdi48325:  SNMP MIBs need modularized translation tables
 *
 * Revision 3.8  1996/01/22  07:15:25  mdb
 * CSCdi47065:  misuse of NULL macro in IOS sources
 *
 * Revision 3.7  1996/01/11  02:31:40  jenny
 * CSCdi46513:  TCP/IP need code clean up (part 2)
 * changed registry function ip_tuba_move_address to inline
 * ip_copy_address().
 *
 * Revision 3.6  1995/12/17  18:37:14  thille
 * CSCdi45760: Parser needs to go on a diet.
 * Move object files that are not part of parser to os_exec or libutil.a
 * as appropriate.  Rename parser files to make it clear what is part of
 * parser and avoid other stuff accumulating.  Modify files that include
 * parser .h files to deal with new names.
 *
 * Revision 3.5  1995/12/14  08:27:38  jjohnson
 * CSCdi44148:  rationalize snmp library services
 *
 * Revision 3.4  1995/11/18  06:32:22  thille
 * CSCdi37049:  Console output from SNMP WriteNet SET confuses console user
 * Use new disable_io() routine to turn off input and output while doing
 * configuration tftp operations.  Use new restore_io() routine to
 * restore input and output after operation completes.
 *
 * Revision 3.3  1995/11/17  19:00:27  hampton
 * Remove old entries from the RCS header logs.
 *
 * Revision 3.2  1995/11/17  00:28:22  gstovall
 * Ladies and gentlemen, I introduce to you, the port ready commit.
 *
 * Revision 3.1  1995/11/09  13:17:32  shaker
 * Bump version numbers from 2.x to 3.x.
 *
 * Revision 2.8  1995/11/08  21:26:00  shaker
 * Merge Arkansas_branch into 11.1 mainline.
 *
 * Revision 2.7  1995/07/22  06:05:21  thille
 * CSCdi37049:  Console output from SNMP WriteNet SET confuses console user
 * Fix over-zealousness in limiting output of "Building Configuration..."
 *
 * Revision 2.6  1995/07/17  07:34:04  bchan
 * CSCdi34760:  Ifindex usage incorrect
 *
 * Revision 2.5  1995/07/16  18:04:24  thille
 * CSCdi37049:  Console output from SNMP WriteNet SET confuses console user
 * Bad programmer, no doggie biscuit.
 *
 * Revision 2.4  1995/07/15  02:37:15  thille
 * CSCdi37049:  Console output from SNMP WriteNet SET confuses console user
 * Add a silent_mode parameter to some routines and registries and set it
 * to TRUE when making the calls from SNMP WriteNet, netConfigSet, or
 * hostConfigSet.  Also, add an errmsg for each so the event can still get
 * logged, and make it clear what caused the event.  Fix other callers to
 * pass FALSE so current behavior will be maintained.
 *
 * Revision 2.3  1995/06/13  21:35:49  thille
 * CSCdi35746:  More control needed over tftp from SNMP
 * Modularity fixes.  Too much vacation...
 *
 * Revision 2.2  1995/06/13  04:45:18  thille
 * CSCdi35746:  More control needed over tftp from SNMP
 * Add access-list checking to SNMP sets which cause tftp reads or writes
 * of config files.
 *
 * Revision 2.1  1995/06/07  22:50:04  hampton
 * Bump version numbers from 1.x to 2.x.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

/*
 *
 * Copyright (C) 1994 by SNMP Research, Incorporated.
 *
 * This software is furnished under a license and may be used and copied
 * only in accordance with the terms of such license and with the
 * inclusion of the above copyright notice. This software or any other
 * copies thereof may not be provided or otherwise made available to any
 * other person. No title to and ownership of the software is hereby
 * transferred.
 *
 * The information in this software is subject to change without notice
 * and should not be construed as a commitment by SNMP Research, Incorporated.
 *
 * Restricted Rights Legend:
 *  Use, duplication, or disclosure by the Government is subject to
 *  restrictions as set forth in subparagraph (c)(1)(ii) of the Rights
 *  in Technical Data and Computer Software clause at DFARS 52.227-7013
 *  and in similar clauses in the FAR and NASA FAR Supplement.
 *
 */

#include "master.h"
#include "../ui/common_strings.h"
#include <ciscolib.h>
#include "sys_registry.h"
#include "../h/interface_private.h"
#include "../h/interface.h"
#include "../h/packet.h"
#include "../h/config.h"
#include "../h/file.h"
#include "../os/boot.h"
#include "../os/hostname.h"
#include "../os/nv.h"
#include "../dev/monitor1.h"
#include "../dev/file_io.h"
#include "../if/network.h"
#include "../if/arp.h"
#include "../ip/ip.h"
#include "../ip/ip_registry.h"
#include "access.h"
#include "../ip/ipaccess.h"
#include "snmp_api.h"
#include "sr_old_lsysmib.h"
#include "snmp_registry.h"
#include "sr_old_lsysmib-mib.h"
#include "../parser/parser_actions.h"
#include "logger.h"
#include "../os/msg_system.c"		/* Not a typo, see logger.h */
#include "ttysrv.h"
#include "config_history.h"

/*
 * Network configuration protocols
 */

#define MIB_CONFIG_TFTP         1
#define MIB_CONFIG_MOP          2

static OctetString	*romId;

void
init_old_lsysmib (void)
{
    char *vstring;

    if (mon_version() < 0x200)
	vstring = "";
    else
	vstring = mon_vstring();
    romId = MakeOctetString(vstring, strlen(vstring));
    ConvertToDisplayString(romId);
    load_mib(old_lsysmib_OidList, old_lsysmib_OidListNum);
    load_oid(old_lsysmib_oid_table);
}








/*---------------------------------------------------------------------
 * Retrieve data from the lsystem family. This is
 * performed in 3 steps:
 *
 *   1) Test the validity of the object instance.
 *   2) Retrieve the data.
 *   3) Build the variable binding (VarBind) that will be returned.
 *---------------------------------------------------------------------*/
VarBind        *
lsystem_get(
    OID            *incoming,
    ObjectInfo     *object,
    int             searchType,
    ContextInfo    *contextInfo,
    int             serialNum)
{
    int             arg;
    void           *dp;
    lsystem_t      *data = NULL;


    arg = snmp_scalar_instance(incoming, object, searchType);

    /*
     * Retrieve the data from the kernel-specific routine.
     */
    if ((arg == -1) || (data = k_lsystem_get(serialNum, contextInfo, arg)) == NULL) {
	arg = -1;
    }
    /*
     * Build the the variable binding for the variable that will be returned.
     */

    switch (arg) {

#ifdef I_romId
      case I_romId:
	dp = MakeOctetString(data->romId->octet_ptr, data->romId->length);
	break;
#endif				       /* I_romId */

#ifdef I_whyReload
      case I_whyReload:
	dp = MakeOctetString(data->whyReload->octet_ptr, data->whyReload->length);
	break;
#endif				       /* I_whyReload */

#ifdef I_hostName
      case I_hostName:
	dp = MakeOctetString(data->hostName->octet_ptr, data->hostName->length);
	break;
#endif				       /* I_hostName */

#ifdef I_domainName
      case I_domainName:
	dp = MakeOctetString(data->domainName->octet_ptr, data->domainName->length);
	break;
#endif				       /* I_domainName */

#ifdef I_authAddr
      case I_authAddr:
	dp = IPToOctetString(data->authAddr);
	break;
#endif				       /* I_authAddr */

#ifdef I_bootHost
      case I_bootHost:
	dp = IPToOctetString(data->bootHost);
	break;
#endif				       /* I_bootHost */

#ifdef I_netConfigAddr
      case I_netConfigAddr:
	dp = IPToOctetString(data->netConfigAddr);
	break;
#endif				       /* I_netConfigAddr */

#ifdef I_netConfigName
      case I_netConfigName:
	dp = MakeOctetString(data->netConfigName->octet_ptr, data->netConfigName->length);
	break;
#endif				       /* I_netConfigName */

#ifdef I_hostConfigAddr
      case I_hostConfigAddr:
	dp = IPToOctetString(data->hostConfigAddr);
	break;
#endif				       /* I_hostConfigAddr */

#ifdef I_hostConfigName
      case I_hostConfigName:
	dp = MakeOctetString(data->hostConfigName->octet_ptr, data->hostConfigName->length);
	break;
#endif				       /* I_hostConfigName */

#ifdef I_ciscoContactInfo
      case I_ciscoContactInfo:
	dp = MakeOctetString(data->ciscoContactInfo->octet_ptr, data->ciscoContactInfo->length);
	break;
#endif				       /* I_ciscoContactInfo */

#ifdef I_netConfigProto
      case I_netConfigProto:
	dp = &data->netConfigProto;
	break;
#endif				       /* I_netConfigProto */

#ifdef I_hostConfigProto
      case I_hostConfigProto:
	dp = &data->hostConfigProto;
	break;
#endif				       /* I_hostConfigProto */

#ifdef I_sysConfigAddr
      case I_sysConfigAddr:
	dp = IPToOctetString(data->sysConfigAddr);
	break;
#endif				       /* I_sysConfigAddr */

#ifdef I_sysConfigName
      case I_sysConfigName:
	dp = MakeOctetString(data->sysConfigName->octet_ptr, data->sysConfigName->length);
	break;
#endif				       /* I_sysConfigName */

#ifdef I_sysConfigProto
      case I_sysConfigProto:
	dp = &data->sysConfigProto;
	break;
#endif				       /* I_sysConfigProto */

      default:
	return ((VarBind *) NULL);

    }				       /* switch */

    return (MakeVarBind(object, &ZeroOid, dp));

}

#ifdef SETS

/*----------------------------------------------------------------------
 * Free the lsystem data object.
 *---------------------------------------------------------------------*/
void
lsystem_free(lsystem_t *data)
{
    if (data != NULL) {
	if (data->netConfigSet != NULL) {
	    FreeOctetString(data->netConfigSet);
	}
	if (data->hostConfigSet != NULL) {
	    FreeOctetString(data->hostConfigSet);
	}
	if (data->writeNet != NULL) {
	    FreeOctetString(data->writeNet);
	}
	free((char *) data);
    }
}


/*----------------------------------------------------------------------
 * cleanup after lsystem set/undo
 *---------------------------------------------------------------------*/
static int
lsystem_cleanup(doList_t *trash)
{
    lsystem_free(trash->data);
#ifdef SR_SNMPv2
    lsystem_free(trash->undodata);
#endif				       /* SR_SNMPv2 */
    return NO_ERROR;
}


/* 
 * temp solution to support Set Request on netConfigSet, hostConfigSet, writeNet.
 * can't support multi-set for now.
 */
static unsigned long	netCfg_IPaddr;
static unsigned long	hostCfg_IPaddr;
static unsigned long	writeNet_IPaddr;

/*---------------------------------------------------------------------
 * Determine if this SET request is valid. If so, add it to the do-list.
 * This operation is performed in 4 steps:
 *
 *   1) Validate the object instance.
 *   2) Locate a "related" do-list element, or create a new do-list
 *      element.
 *   3) Add the SET request to the selected do-list element.
 *   4) Finally, determine if the do-list element (all "related" set
 *      requests) is completely valid.
 *---------------------------------------------------------------------*/
int
lsystem_test(
    OID            *incoming,
    ObjectInfo     *object,
    ObjectSyntax   *value,
    doList_t       *doHead,
    doList_t       *doCur,
    ContextInfo    *contextInfo)
{
    int             instLength = incoming->length - object->oid.length;
    doList_t       *dp;
    int             found;
    int             carry = 0;
    hwidbtype	   *idb = NULL;
    addrtype        addr;
#define	FILESIZE 132

    found = 0;
    if (!found) {
	dp = doCur;
	if ((dp->data = malloc(sizeof(lsystem_t))) == NULL) {
	    DPRINTF((APALWAYS, "snmpd: Cannot allocate memory\n"));
	    return (RESOURCE_UNAVAILABLE_ERROR);
	}
	memset(dp->data, 0, sizeof(lsystem_t));

	dp->setMethod = lsystem_set;
	dp->cleanupMethod = lsystem_cleanup;
#ifdef SR_SNMPv2
	dp->undoMethod = NULL;
#endif				       /* SR_SNMPv2 */
	dp->state = UNKNOWN;
    }

    switch (object->nominator) {

#ifdef I_netConfigSet

      case I_netConfigSet:
	if (instLength != 4 || InstToIP(incoming, 0 + object->oid.length, 
					&netCfg_IPaddr, EXACT, &carry) < 0)
	    return (NO_CREATION_ERROR);
	if (snmp_tftp_server_acl) {
	    addr.ip_addr = netCfg_IPaddr;
	    if (!reg_invoke_snmp_access_check(ADDR_IP, snmp_tftp_server_acl, 
					      &addr))
		return(GEN_ERROR);
	}
	if (value->os_value->length > SYSSIZE)
	    return (WRONG_LENGTH_ERROR);
	if (value->os_value->length > FILESIZE)
	    return (GEN_ERROR);
	if (!IsDisplayString(value->os_value))
	    return (WRONG_VALUE_ERROR);

	SET_VALID(I_netConfigSet, ((lsystem_t *) (dp->data))->valid);
	if (((lsystem_t *) (dp->data))->netConfigSet != NULL) {
	    FreeOctetString(((lsystem_t *) (dp->data))->netConfigSet);
	}
	((lsystem_t *) (dp->data))->netConfigSet =
	    MakeOctetString(value->os_value->octet_ptr, value->os_value->length);

	break;
#endif				       /* I_netConfigSet */

#ifdef I_hostConfigSet

      case I_hostConfigSet:
	if (instLength != 4 || InstToIP(incoming, 0 + object->oid.length, 
					&hostCfg_IPaddr, EXACT, &carry) < 0)
	    return (NO_CREATION_ERROR);
	if (snmp_tftp_server_acl) {
	    addr.ip_addr = hostCfg_IPaddr;
	    if (!reg_invoke_snmp_access_check(ADDR_IP, snmp_tftp_server_acl, 
					      &addr))
		return(GEN_ERROR);
	}
	if (value->os_value->length > SYSSIZE)
	    return (WRONG_LENGTH_ERROR);
	if (value->os_value->length > FILESIZE)
	    return (GEN_ERROR);
	if (!IsDisplayString(value->os_value))
	    return (WRONG_VALUE_ERROR);

	SET_VALID(I_hostConfigSet, ((lsystem_t *) (dp->data))->valid);

	if (((lsystem_t *) (dp->data))->hostConfigSet != NULL) {
	    FreeOctetString(((lsystem_t *) (dp->data))->hostConfigSet);
	}
	((lsystem_t *) (dp->data))->hostConfigSet =
	    MakeOctetString(value->os_value->octet_ptr, value->os_value->length);

	break;
#endif				       /* I_hostConfigSet */

#ifdef I_writeMem
      case I_writeMem:

	/*
	 * Validate the object instance: 1) It must be of length 1  2) and the
	 * instance must be 0.
	 */
	if (instLength != 1 || incoming->oid_ptr[incoming->length - 1] != 0)
	    return (NO_CREATION_ERROR);
	SET_VALID(I_writeMem, ((lsystem_t *) (dp->data))->valid);

	((lsystem_t *) (dp->data))->writeMem = value->sl_value;
	break;
#endif				       /* I_writeMem */

#ifdef I_writeNet

      case I_writeNet:

	if (instLength != 4 || InstToIP(incoming, 0 + object->oid.length,
					&writeNet_IPaddr, EXACT, &carry) < 0)
	    return (NO_CREATION_ERROR);
	if (snmp_tftp_server_acl) {
	    addr.ip_addr = writeNet_IPaddr;
	    if (!reg_invoke_snmp_access_check(ADDR_IP, snmp_tftp_server_acl, 
					      &addr))
		return(GEN_ERROR);
	}
	if (value->os_value->length > SYSSIZE)
	    return (WRONG_LENGTH_ERROR);
	if (value->os_value->length > FILESIZE)
	    return (GEN_ERROR);
	if (!IsDisplayString(value->os_value))
	    return (WRONG_VALUE_ERROR);

	SET_VALID(I_writeNet, ((lsystem_t *) (dp->data))->valid);

	if (((lsystem_t *) (dp->data))->writeNet != NULL) {
	    FreeOctetString(((lsystem_t *) (dp->data))->writeNet);
	}
	((lsystem_t *) (dp->data))->writeNet =
	    MakeOctetString(value->os_value->octet_ptr, value->os_value->length);

	break;
#endif				       /* I_writeNet */

#ifdef I_sysClearARP
      case I_sysClearARP:
	/*
	 * Validate the object instance: 1) It must be of length 1  2) and the
	 * instance must be 0.
	 */
	if (instLength != 1 || incoming->oid_ptr[incoming->length - 1] != 0)
	    return (NO_CREATION_ERROR);
	SET_VALID(I_sysClearARP, ((lsystem_t *) (dp->data))->valid);

	((lsystem_t *) (dp->data))->sysClearARP = value->sl_value;
	break;
#endif				       /* I_sysClearARP */

#ifdef I_sysClearInt

      case I_sysClearInt:
	/*
	 * Validate the object instance: 1) It must be of length 1  2) and the
	 * instance must be 0.
	 */
	if (instLength != 1 || incoming->oid_ptr[incoming->length - 1] != 0)
	    return (NO_CREATION_ERROR);
	FOR_ALL_HWIDBS(idb)
	    if (value->sl_value == idb->snmp_if_index)
		break;
	if (idb == NULL)
	    return (WRONG_VALUE_ERROR);
	SET_VALID(I_sysClearInt, ((lsystem_t *) (dp->data))->valid);

	((lsystem_t *) (dp->data))->sysClearInt = value->sl_value;
	break;
#endif				       /* I_sysClearInt */

      default:
	DPRINTF((APALWAYS, "snmpd: Internal error (invalid nominator in lsystem_test)\n"));
	return (GEN_ERROR);

    }				       /* switch */
    dp->state = ADD_MODIFY;

    return (NO_ERROR);

}

/*---------------------------------------------------------------------
 * Perform the kernel-specific set function for this group of
 * related objects.
 *---------------------------------------------------------------------*/
int
lsystem_set(
    doList_t       *doHead,
    doList_t       *doCur,
    ContextInfo    *contextInfo)
{
    return (k_lsystem_set((lsystem_t *) (doCur->data),
			  contextInfo, doCur->state));
}

#endif				       /* SETS */



/*
 **********************************************************************
 *
 * KERNEL CODE begins here.  Above is all generated by SNMP Research
 * compiler.  Below code does the real work in getting the router
 * information.  
 *
 * First come the utility helper routines.
 *
 **********************************************************************
 */

/* This string is identical to vendor_string declared in snmp_sysmib.c */
static const char vendor_info[] = "\
cisco Systems, Inc.\n\
170 West Tasman Dr.\n\
San Jose, CA  95134-1706\n\
U.S.A.\n\
Ph +1-408-526-4000\n\
Customer service 1-800-553-6387 or +1-408-526-7208\n\
24HR Emergency 1-800-553-2447 or +1-408-526-7209\n\
Email Address tac@cisco.com\n\
World Wide Web http://www.cisco.com";


lsystem_t      *
k_lsystem_get(
    int             serialNum,
    ContextInfo    *contextInfo,
    int             nominator)
{
    static lsystem_t lsystemData;
    static OctetString whyReload, hostName, domainName, netConfigName,
		hostConfigName, ciscoContactInfo, sysConfigName;

    lsystemData.romId = romId;
    lsystemData.whyReload = &whyReload;
    lsystemData.whyReload->octet_ptr = (unsigned char *)boot_reason;
    lsystemData.whyReload->length = (long)strlen(boot_reason);
    lsystemData.hostName = &hostName;
    lsystemData.hostName->octet_ptr = (unsigned char *)hostname;
    lsystemData.hostName->length = (long)strlen(hostname);
    lsystemData.domainName = &domainName;
    lsystemData.domainName->octet_ptr = (unsigned char *)default_domain;
    lsystemData.domainName->length = (long)strlen(default_domain);
    lsystemData.authAddr = snmp_bad_addr;
    lsystemData.bootHost = mon_bootipaddr();
    lsystemData.netConfigAddr = netconfg.responder && netconfg.proto == FILE_ACCESS_TFTP ?
				netconfg.ps.tuba.respondent.ip_addr: 0;
    lsystemData.netConfigName = &netConfigName;
    lsystemData.netConfigName->octet_ptr = netconfg.filename;
    lsystemData.netConfigName->length = (long)strlen(netconfg.filename);
    lsystemData.netConfigProto = netconfg.responder && netconfg.proto == FILE_ACCESS_TFTP ?
				 MIB_CONFIG_TFTP: 0;
    lsystemData.hostConfigAddr = hostconfg.responder && hostconfg.proto == FILE_ACCESS_TFTP ?
				 hostconfg.ps.tuba.respondent.ip_addr: 0;
    lsystemData.hostConfigName = &hostConfigName;
    lsystemData.hostConfigName->octet_ptr = hostconfg.filename;
    lsystemData.hostConfigName->length = (long)strlen(hostconfg.filename);
    lsystemData.hostConfigProto = hostconfg.responder && hostconfg.proto == FILE_ACCESS_TFTP ?
				 MIB_CONFIG_TFTP: 0;
    lsystemData.ciscoContactInfo = &ciscoContactInfo;
    lsystemData.ciscoContactInfo->octet_ptr = (unsigned char *)vendor_info;
    lsystemData.ciscoContactInfo->length = (long)strlen(vendor_info);
    lsystemData.sysConfigAddr = sysconfg.responder && sysconfg.proto == FILE_ACCESS_TFTP ?
			(unsigned long)sysconfg.ps.tuba.respondent.ip_addr: 0;
    lsystemData.sysConfigName = &sysConfigName;
    lsystemData.sysConfigName->octet_ptr = sysconfg.filename;
    lsystemData.sysConfigName->length = (long)strlen(sysconfg.filename);

    if (sysconfg.responder) {
	switch (sysconfg.proto) {
	case FILE_ACCESS_TFTP:
	    lsystemData.sysConfigProto = D_sysConfigProto_tftp;
	    break;
	case FILE_ACCESS_FLASH:
	    lsystemData.sysConfigProto = D_sysConfigProto_flash;
	    break;
	default:
	    lsystemData.sysConfigProto = 0;
	}
    } else {
	lsystemData.sysConfigProto = D_sysConfigProto_rom;
    }

    /* treat write-only as read-write here */
    lsystemData.sysClearARP = 0;
    lsystemData.sysClearInt = 0;

    return (&lsystemData);
}


#ifdef SETS

int
k_lsystem_set(
    lsystem_t      *data,
    ContextInfo    *contextInfo,
    int             function)
{
    tt_soc *saved_stdio;
    unsigned char *curcfg;
    char filename[132];
    filetype file;
    unsigned int size, buffsize;
    hwidbtype *idb;

#ifdef I_netConfigSet
    if (VALID(I_netConfigSet, data->valid)) {
	size = data->netConfigSet->length;
	bcopy(data->netConfigSet->octet_ptr, filename, size);
	filename[size] = '\0';
	file.filename = filename;
	file.proto = FILE_ACCESS_TFTP;
	file.ps.tuba.boothost.type = ADDR_IP;
	file.ps.tuba.boothost.ip_addr = (ipaddrtype)netCfg_IPaddr;
	file.resetsubr = NULL;
 	errmsg(&msgsym(SNMP_NETCONFIGSET, SYS), netCfg_IPaddr);
	reg_invoke_config_history_event(CONFIG_COMMAND_SOURCE_SNMP,
					CONFIG_MEDIUM_NETWORKTFTP,
					CONFIG_MEDIUM_RUNNING,
					file.ps.tuba.boothost.ip_addr,
					file.filename,
					NULL);
	saved_stdio = disable_io();
	if (read_config_file(&file, FALSE, PRIV_ROOT)) {
	    restore_io(saved_stdio);
	    netconfg.proto = FILE_ACCESS_TFTP;
            netconfg.responder = TRUE;
            netconfg.ps.tuba.respondent = file.ps.tuba.respondent;
            setstring(&netconfg.filename, file.filename);
	} else {
	    restore_io(saved_stdio);
	    return (GEN_ERROR);
	}
    }
#endif

#ifdef I_hostConfigSet
    if (VALID(I_hostConfigSet, data->valid)) {
	size = data->hostConfigSet->length;
	bcopy(data->hostConfigSet->octet_ptr, filename, size);
	filename[size] = '\0';
	file.filename = filename;
	file.proto = FILE_ACCESS_TFTP;
	file.ps.tuba.boothost.type = ADDR_IP;
	file.ps.tuba.boothost.ip_addr = (ipaddrtype)hostCfg_IPaddr;
	file.resetsubr = reset_host;
 	errmsg(&msgsym(SNMP_HOSTCONFIGSET, SYS), hostCfg_IPaddr);
	reg_invoke_config_history_event(CONFIG_COMMAND_SOURCE_SNMP,
					CONFIG_MEDIUM_NETWORKTFTP,
					CONFIG_MEDIUM_RUNNING,
					file.ps.tuba.boothost.ip_addr,
					file.filename,
					NULL);
	saved_stdio = disable_io();
	if (read_config_file(&file, FALSE, PRIV_ROOT)) {
	    restore_io(saved_stdio);
	    hostconfg.proto = FILE_ACCESS_TFTP;
            hostconfg.responder = TRUE;
            hostconfg.ps.tuba.respondent = file.ps.tuba.respondent;
            setstring(&hostconfg.filename, file.filename);
	} else {
	    restore_io(saved_stdio);
	    return (GEN_ERROR);
	}
    }
#endif

#ifdef I_writeMem
    if (VALID(I_writeMem, data->valid)) {
	if (data->writeMem != 0) {
	    reg_invoke_config_history_event(CONFIG_COMMAND_SOURCE_SNMP,
					    CONFIG_MEDIUM_RUNNING,
					    CONFIG_MEDIUM_STARTUP,
					    0, NULL, NULL);
	    nv_current_to_nv(FALSE);
	} else {
	    reg_invoke_config_history_event(CONFIG_COMMAND_SOURCE_SNMP,
					    CONFIG_MEDIUM_ERASE,
					    CONFIG_MEDIUM_STARTUP,
					    0, NULL, NULL);
	    nv_erase(FALSE);
	}
    }
#endif

#ifdef I_writeNet
    if (VALID(I_writeNet, data->valid)) {
	size = data->writeNet->length;
	bcopy(data->writeNet->octet_ptr, filename, size);
	filename[size] = '\0';
	buffsize = nv_get_config_size();
	if ((curcfg = malloc(buffsize)) != NULL) {
            size = nv_current_to_buffer((char *)curcfg, buffsize, FALSE,
					PRIV_ROOT, FALSE);
            file.proto = FILE_ACCESS_TFTP;
            file.filename = filename;
            file.ps.tuba.boothost.type = ADDR_IP;
            ip_copy_address(writeNet_IPaddr, &file.ps.tuba.boothost);
 	    errmsg(&msgsym(SNMP_WRITENET, SYS), writeNet_IPaddr);
	    reg_invoke_config_history_event(CONFIG_COMMAND_SOURCE_SNMP,
					    CONFIG_MEDIUM_RUNNING,
					    CONFIG_MEDIUM_NETWORKTFTP,
					    file.ps.tuba.boothost.ip_addr,
					    file.filename, NULL);

	    saved_stdio = disable_io();
	    if (!reg_invoke_file_write(file.proto, &file, curcfg, size)) {
		restore_io(saved_stdio);
		free(curcfg);
		return (GEN_ERROR);
	    }
	    restore_io(saved_stdio);
	    free(curcfg);
	} else
	    return (GEN_ERROR);
    }
#endif

#ifdef I_sysClearARP
    if (VALID(I_sysClearARP, data->valid))
	arp_clear_command(NULL);
#endif

#ifdef I_sysClearInt
    if (VALID(I_sysClearInt, data->valid)) {
	idb = NULL;
	FOR_ALL_HWIDBS(idb) {
	    if (data->sysClearInt == idb->snmp_if_index) {
		reset_if(idb);
		break;
	    }
	}
	if (idb == NULL)	/* safety */
	    return (GEN_ERROR);
    }
#endif

    return (NO_ERROR);
}

#endif				       /* SETS */
      
