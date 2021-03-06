
if_fci.h,27285
#define __IF_FCI_H__157,5545
#define FCISTART 159,5567
#define FCI_INTLEVEL 160,5605
#define HOTSTALL_INTLEVEL	161,5631
#define EOIR_BUFFER_RETURN_TIME	162,5660
#define FCI_MAX_CTRLR_NUMBER 163,5734
#define CBUS1_MAX_INTERFACES	164,5767
#define CBUS1_MAX_CTRLR_INTERFACES	165,5831
#define CBUS2_MAX_INTERFACES	168,5931
#define CBUS2_NUM_EXT_INTERFACES 169,5964
#define PA_MAX_BAYS 170,6047
#define CBUS2_MAX_INTERFACES	172,6096
#define CBUS2_NUM_EXT_INTERFACES 173,6129
#define PA_MAX_BAYS 174,6212
#define CBUS2_MAX_CTRLR_INTERFACES	176,6264
#define CBUS2_NON_EXT_INTERFACES 179,6352
#define PA_MAX_INTERFACES 182,6452
#define CBUSII_HARD_RESET_TIME	187,6565
#define FCI_HARD_RESET_TIME	188,6623
#define FCI_SOFT_RESET_TIME	189,6678
#define FCI_MEMA_BASE	192,6747
#define FCI_MEMD_BASE 193,6804
#define FCI_MEMA_BASE	195,6878
#define FCI_MEMD_BASE 196,6907
typedef enum ctrlr_type_ ctrlr_type_205,7261
} ctrlr_type_t;ctrlr_type_t239,8438
#define IFTYPE_BITS 241,8455
#define IFTYPE_MASK 242,8479
#define FCITYPE(FCITYPE244,8506
#define FCI_TYPE_VIP_FETHER 245,8546
#define FCI_TYPE_VIP_ETHER8 246,8619
#define FCI_TYPE_VIP_FETHER_TX_NISL 247,8692
#define FCI_TYPE_VIP_FETHER_TX_ISL 248,8771
#define FCI_TYPE_VIP_FETHER_FX_ISL 249,8850
#define FCI_TYPE_VIP_SERIAL4 250,8929
#define FCI_TYPE_VIP_TRING4 251,9002
#define FCI_TYPE_VIP_FDDI 252,9075
#define FCI_TYPE_VIP_ESA 253,9146
#define FCI_TYPE_RSP(FCI_TYPE_RSP255,9216
#define HSSI_DISABLE_TIME	264,9496
#define FDDI_RECEIVE_OFFSET	271,9609
#define FDDI_RECEIVE_WORD_OFFSET	274,9726
#define FDDI_RECEIVE_BYTE_OFFSET	275,9790
#define FDDI_BUFFERSIZE_WORDS	284,9974
#define CTR_RECEIVE_OFFSET	291,10153
#define CTR_RECEIVE_WORD_OFFSET	292,10226
#define CTR_RECEIVE_BYTE_OFFSET	293,10288
#define CTR_FRAME_PAYLOAD	295,10346
#define CTR_SDEL	297,10411
#define CTR_AC	298,10431
#define CTR_FC	299,10450
#define CTR_DA	300,10469
#define CTR_SA	301,10488
#define CTR_LLC	302,10511
#define CTR_SNAP	303,10531
#define CTR_FCS	304,10551
#define CTR_EDEL	305,10571
#define CTR_STATUS	306,10591
#define CTR_RIF 307,10613
#define CTR_INFO_SIZE 309,10648
#define CTR_BAGGAGE 311,10695
#define CTR_BUFFERSIZE_BYTES 313,10748
#define CTR_OVERHEAD_BYTES 323,10973
#define CTR_BUFFERSIZE_WORDS	327,11086
#define CHANNEL_RECEIVE_OFFSET	336,11261
#define MCI_CHANNEL_OFFSET 337,11338
#define FCI_BUF_POOL_0	344,11451
#define FCI_BUF_POOL_1	345,11477
#define FCI_BUF_POOL_2	346,11503
#define FCI_BUF_POOL_3	347,11529
#define FCI_BUF_POOL_4	348,11555
#define FCI_BUF_POOL_5	349,11581
#define FCI_BUF_POOL_6	350,11607
#define FCI_BUF_POOL_7	351,11633
#define FCI_MINI_BUF_POOL	353,11660
#define FCI_SYSTEM_BUF_POOL	354,11702
#define FCI_RX_POOL_0	355,11746
#define FCI_RX_POOL_1	356,11792
#define FCI_RX_POOL_2	357,11838
#define FCI_RX_POOL_3	358,11884
#define FDDI_CLAIM_BEACON_POOL	359,11930
#define FCI_RX_ERROR_POOL	360,11977
#define FCI_MINI_BUF_SIZE 362,12021
#define FCI_MINI_BUF_COUNT 363,12057
#define FCI_MINI_BUF_COUNT_LOW 364,12093
#define FCI_SYSTEM_BUF_SIZE 365,12129
#define FCI_SYSTEM_BUF_COUNT 366,12165
#define FCI_BUF_POOL_MAX 372,12317
#define FCI_CMD_VERSION	380,12534
# define FCI_VERSION_SW	381,12580
# define FCI_VERSION_HW	382,12638
#define FCI_CMD_RESET	383,12711
# define FCI_HARD_RESET	384,12759
# define FCI_SOFT_RESET	385,12818
#define FCI_CMD_MEMSIZE	386,12877
#define FCI_CMD_SELECT	387,12936
#define FCI_CMD_MEMD_SELECT	388,12988
#define FCI_CMD_RX_SELECT	389,13044
#define FCI_CMD_TX0_SELECT	390,13100
#define FCI_CMD_TX1_SELECT	391,13165
#define FCI_CMD_RX_SETUP	392,13230
#define FCI_CMD_ASR	393,13279
# define FCI_CMD_BRIDGE_FLUSH	394,13325
#define FCI_CMD_CONDITIONS	395,13396
#define FCI_CMD_RX_MOVE	396,13464
#define FCI_CMD_INTERRUPT	397,13527
#define FCI_CMD_RX_FLUSH	398,13585
#define FCI_CMD_TX0_RESERVE	399,13651
#define FCI_CMD_TX1_RESERVE	400,13719
#define FCI_CMD_RX_CHECK	401,13787
#define FCI_CMD_CAPABILITY	402,13848
#define FCI_CMD_MEMA_READ	403,13913
#define FCI_CMD_MEMA_WRITE	404,13984
#define FCI_CMD_MEMA_SELECT	405,14055
#define FCI_CMD_OVERHEAD	406,14128
#define FCI_CMD_ARGUMENT	407,14193
#define FCI_CMD_BUFFERSIZE	408,14256
#define FCI_CMD_TX_ALLOCATE	409,14287
#define FCI_CMD_LIGHTS	410,14351
#define FCI_CMD_BRIDGE	411,14396
#define FCI_CMD_BRIDGEPROTOCOL	412,14455
#define FCI_CMD_MEMX_SELECT_HIGH 413,14526
#define FCI_CMD_STATISTICS	414,14597
#define FCI_CMD_MEMX_SELECT_LOW	415,14664
#define FCI_CMD_GET_ICB	416,14733
#define FCI_CMD_SET_MTU	417,14795
#define FCI_CMD_STATUS	428,15147
#  define FCI_STATUS_ENABLE	429,15213
#  define FCI_STATUS_DISABLE	430,15270
#  define FCI_STATUS_LOOPLOCAL	431,15329
#  define FCI_STATUS_NOLOOP	432,15362
#  define FCI_STATUS_QUIESCE	433,15392
#  define FCI_STATUS_UNQUIESCE 434,15423
#  define FCI_STATUS_THROTTLE	435,15457
#  define FCI_IF_THROTTLE	436,15518
#  define FCI_IF_UNTHROTTLE	437,15546
#  define FCI_STATUS_LOOPREMOTE	438,15576
#define FCI_CMD_STATION	439,15638
#define FCI_CMD_AF_SELECT	440,15702
#define FCI_CMD_AF_READ	441,15766
#define FCI_CMD_AF_WRITE	442,15825
#define FCI_CMD_CARRIER	443,15885
#define FCI_CMD_ERRORS	444,15943
#define FCI_CMD_TX0_START	445,16005
#define FCI_CMD_TX1_START	446,16063
#define FCI_CMD_EXECUTE	447,16121
# define FCI_ASSIGN_POOLINDEX 448,16178
# define FCI_MAX_BUFFERSIZE	449,16211
# define FCI_RX_OFFSET	450,16241
# define FCI_RX_BUFFER_LIMIT	451,16267
# define FCI_RX_ERROR	452,16298
# define FCI_FDDI_HACK	453,16323
#define FCI_CMD_APPLIQUE	454,16372
#define FCI_CMD_CLOCKRATE	455,16437
#define FCI_CMD_CLOCKTYPE	456,16502
#define FCI_CMD_DELAY	457,16565
#define FCI_CMD_QUEUE	458,16623
#define FCI_CMD_SLIMIT	459,16683
#define FDDI_CMD_FM_SELECT	465,16868
#define FDDI_CMD_FM_WRITE	466,16922
#define FDDI_CMD_FM_READ	467,16977
#define FDDI_CMD_EN_SELECT	468,17027
#define FDDI_CMD_EN_WRITE	469,17080
#define FDDI_CMD_EN_READ	470,17131
#define FDDI_CMD_CLAIM_BEACON	471,17180
#define FCI_CMD_AF_SIZE	472,17250
#define FCI_CMD_HS_OP	473,17311
#  define FCI_HS_NORMAL_MODE	474,17376
#  define FCI_HS_DONOTHING_MODE 475,17445
#  define FCI_HS_STALL_SENSE	476,17526
#  define FCI_HS_OIR_RESET	477,17586
#define FCI_CMD_READ_ICB	478,17656
#  define FCI_ICB_IFTYPE	479,17699
#  define FCI_ICB_RXQCOUNT	480,17755
#  define FCI_ICB_TXQHEAD	481,17784
#  define FCI_ICB_TXQTAIL	482,17812
#  define FCI_ICB_TXQCOUNT	483,17840
#define	FCI_CMD_AIP_PROC_SELECT	488,17954
#define	FCI_CMD_AIP_ADDR_SELECT	489,18025
#define	FCI_CMD_AIP_MEM_WRITE	490,18083
#define	FCI_CMD_AIP_MEM_READ	491,18137
#define	FCI_CMD_AIP_CMDBLOCK	492,18189
#define FCI_CMD_AIP_CMDPARSE	493,18258
#define	FCI_CMD_AIP_FRAMING	494,18324
#define	FCI_CMD_AIP_SONET	495,18378
#define	FCI_CMD_AIP_DS3SCRAMBLE	496,18428
#define	FCI_CMD_AIP_SETVER	497,18489
#define FCI_CMD_VC_SELECT	502,18579
#define	FCI_CMD_VC_STATUS	503,18638
#define	FCI_CMD_VC_ERRORS	504,18702
#define	FCI_CMD_VC_MAP	505,18731
#define	FCI_CMD_HOMOL_TYPE	506,18787
#define	FCI_CMD_VC_UNMAP_ALL	507,18817
#define	FCI_CMD_FRAME_TYPE	508,18849
#define	FCI_CMD_VC_SUBRATE	509,18879
#define	FCI_CMD_LINECODE_TYPE	510,18909
#define	FCI_CMD_CHANNEL_STATUS	511,18942
#define	FCI_CMD_CABLE_LENGTH	512,19013
#define	FCI_CMD_MIPCARRIER	513,19045
#define	FCI_CMD_VC_ENCAP	514,19075
#define	FCI_CMD_VC_MAPENABLE	515,19140
#define	FCI_CMD_VC_MTU	516,19203
#define	FCI_CMD_VC_TX_LIMIT	517,19230
#define FCI_CMD_CLR_COUNTS	518,19261
#define	FCI_CMD_NO_LOVELETTERS	519,19320
#define	FCI_CMD_OK_LOVELETTERS	520,19386
#define	FCI_CMD_ALT_IDLE	521,19450
#define FCI_CMD_TXQLENGTH	522,19511
#define FCI_CMD_SHORT_TXQ_LOCALBUF	523,19540
#define FCI_CMD_VC_TXACCUM	525,19635
#define FCI_CMD_VIP_4R_TEST 530,19733
#define FCI_CMD_VIP_4R_START_BLOCK 531,19776
#define FCI_CMD_VIP_4R_WRITE_BLOCK 532,19819
#define FCI_CMD_VIP_4R_END_BLOCK 533,19862
#define FCI_CMD_VIP_4R_REQUEST_STATS 534,19905
#define FCI_CMD_VIP_REQUEST_CONFIG 539,19984
#define FCI_CMD_CTRLR_MEMA_SELECT 544,20053
#define FCI_CMD_CTRLR_MEMA_WRITE 545,20122
#define FCI_CMD_CTRLR_MEMA_READ 546,20190
#define FCI_CMD_TX0_ENQUEUE	547,20257
#define FCI_CMD_TX1_ENQUEUE	548,20319
#define FDDI_CMD_APPLIQUE_SELECT 550,20382
#define FDDI_CMD_APPLIQUE_WRITE 551,20458
#define FDDI_CMD_APPLIQUE_READ 552,20532
#define FCI_CMD_CTRLR_SELECT	557,20636
#define FCI_CTRLR_CMD	558,20673
#define FCI_CTRLR_ARGUMENT	559,20704
#define FCI_CMD_CTRLR_WHO	560,20739
#define FCI_CMD_CTRLR_LOAD	561,20773
#define FCI_CMD_CTRLR_RESET	562,20815
#define	FCI_AS_CAPABILITY	568,20894
#define	FCI_CACHE_FREE_DYNAMIC	569,20928
#define	FCI_CACHE_SELECT_ABS	570,20967
#define FCI_ALLOCATE_CACHE	571,21004
#define FCI_LOOKUP_CACHE	572,21039
#define FCI_KEY_SELECT 573,21072
#define FCI_CACHE_SELECT	574,21106
#define FCI_CACHE_ENTER 575,21139
#define FCI_CACHE_DELETE	576,21172
#define FCI_CACHE_INVALIDATE	577,21205
#define FCI_CACHE_GET_NEXT	578,21242
#define FCI_CACHE_VERSION_UPDATE	579,21277
#define FCI_SRB_RING_BRIDGE_RING	584,21364
#define FCI_SRB_TARGET_INDEX	585,21437
#define   FCI_SRB_NO_TARGET	586,21512
#define FCI_SRB_VRING_CREATE	587,21550
#define FCI_SRB_KEY_INDEX	588,21619
#define FCI_SRB_VRING_DESTROY	589,21688
#define FCI_SRB_BRIDGING_TYPE	590,21757
#define	FCI_CACHE_ALLOC_DYNAMIC	591,21823
#define	FCI_SELECT_HASH_TABLE	592,21896
#define	FCI_MEMA_READ_CLEAR_LONG	593,21966
#define	FCI_BRIDGE_GROUP_NUMBER	597,22065
#define	FCI_BRIDGE_GROUP_NEXT	598,22137
#define	FCI_BRIDGE_GROUP_FLAGS	599,22205
#define	FCI_BRIDGE_AUTO_FLOOD	600,22275
#define	FCI_CACHE_INSERT	601,22323
#define FCI_SSE_CONTROL	602,22356
#define FCI_SSE_DIAG_START	603,22414
#define FCI_SSE_DIAG_READ	604,22479
#define FCI_SSE_DIAG_DONE	605,22545
#define FCI_SSE_BRIDGE_CONTROL	606,22603
#define FCI_CTRLR_ARGUMENT2	607,22667
#define FCI_CTRLR_CMD_EXT	608,22703
#define	FCI_IP_HASH_TABLE	613,22784
#define	FCI_IP_CACHE_UPDATE	614,22815
#define	FCI_IPX_HASH_TABLE	615,22848
#define	FCI_IPX_CACHE_UPDATE	616,22880
#define	FCI_AB_HASH_TABLE	617,22914
#define	FCI_CAP_IP_AUTO	622,23009
#define	FCI_CAP_IPX_AUTO	623,23039
#define	FCI_CAP_BRIDGE_AUTO	624,23104
#define	FCI_CAP_BRIDGE_FLOOD_AUTO	625,23137
#define	FCI_CAP_IPX_AUTO_NEW	626,23175
#define FCI_CAP_OIR_RESET	627,23244
#define	FCI_IPX_AUTO(FCI_IPX_AUTO629,23277
#define	FCI_OTHER_AUTO(FCI_OTHER_AUTO631,23371
#define BCE_MAC_OFFSET 636,23453
#define BCE_IFA_OFFSET 637,23497
#define BCE_ACTION_OFFSET 638,23541
#define BCE_PERMIT_IN_OFFSET 639,23624
#define BCE_PERMIT_OUT_OFFSET 640,23668
#define BCE_RX_OFFSET 641,23712
#define BCE_TX_OFFSET 642,23756
#define BCE_LENGTH 643,23800
#define BCE_ACTION_RECEIVE 644,23844
#define BCE_ACTION_DISCARD 645,23879
#define BCE_ACTION_FORWARD 646,23943
#define BCE_ACTION_CHKPERM 647,24005
#define IFA_SPAN_ACTION_BLOCK 653,24131
#define IFA_SPAN_ACTION_LISTEN 654,24180
#define IFA_SPAN_ACTION_LEARN 655,24229
#define IFA_SPAN_ACTION_FORWARD 656,24278
#define IFA_SPAN_ACTION_BURP 657,24327
#define FCI_BRIDGE_NONE	662,24411
#define FCI_BRIDGE_TRANS	663,24439
#define FCI_BRIDGE_SRB	664,24501
#define FCI_BRIDGE_SRT_STRICT	665,24543
#define FCI_BRIDGE_SRT_LOOSE	666,24576
#define FCI_CTRLR_VERSION	672,24689
#define FCI_CTRLR_RESET	673,24718
#define FCI_CTRLR_SELECT_INT	674,24746
#define FCI_CTRLR_PAGE_SELECT	675,24778
#define FCI_CTRLR_REG_SELECT	676,24811
#define FCI_CTRLR_REG_WRITE	677,24843
#define FCI_CTRLR_REG_READ	678,24878
#define FCI_CTRLR_TX_START	679,24912
#define FCI_CTRLR_MEMD_SELECT	680,24942
#define FCI_CTRLR_MEMD_WRITE	681,24975
#define FCI_CTRLR_MEMD_READ	682,25007
#define FCI_FDDI_HOLD_REG	683,25039
#define FCI_FDDI_HEARSELF	684,25069
#define FCI_FDDI_BURST_MODE	685,25099
#define FCI_CTRLR_CMDSYNC	693,25348
#define FCI_FDDI_CAM_CMD	756,27505
#define FCI_FDDI_CAM_RD_ARG	757,27534
#define FCI_FDDI_CAM_WR_ARG	758,27566
#define FDDI_CAM_NOP	760,27599
#define FDDI_CAM_CLR	761,27624
#define FDDI_CAM_INSERT	762,27649
#define FDDI_CAM_REMOVE	763,27677
#define FDDI_CAM_CHECK	764,27705
#define FDDI_CAM_SET_MODIFIER	765,27732
#  define FCSM_DISABLE	767,27766
#  define FCSM_VALID	768,27797
#  define FCSM_EMPTY	769,27826
#  define FCSM_SKIP	770,27855
#  define FCSM_RANDOM	771,27883
#  define FCSM_AR	773,27914
#  define FCSM_HM	774,27940
#  define FCSM_NFA	775,27966
#define FDDI_CAM_RD_CAM	777,27994
#define FDDI_CAM_WR_CAM	778,28022
#define FDDI_CAM_RD_CTL	779,28050
#define FDDI_CAM_WR_CTL	780,28078
#  define FCRWC_CTL	781,28106
#  define FCRWC_PA	782,28134
#  define FCRWC_SEG	783,28161
#  define FCRWC_NFA	784,28189
#  define FCRWC_AR	785,28217
#  define FCRWC_DS	786,28244
#  define FCRWC_PS	787,28271
#  define FCRWC_PD	788,28298
#  define FCRWC_STATUS	789,28325
#  define FCRWC_INSTR	790,28358
#define FDDI_CAM_RD_DATA	791,28390
#define FDDI_CAM_WR_DATA	792,28419
#define FDDI_CAM_LOCK_CAM	793,28448
#define FDDI_CAM_UNLOCK_CAM	794,28478
#define FDDI_CAM_LEARN_MA	795,28510
#define FDDI_CAM_INSERT_MC	796,28540
# define FCI_POSIP_SPECIFIC 802,28598
# define POSIP_LOOP_NONE 804,28644
# define POSIP_LOOP_INTERNAL 805,28713
# define POSIP_LOOP_EXTERNAL 806,28758
# define POSIP_CLOCK_EXTERNAL 807,28803
# define POSIP_CLOCK_INTERNAL 808,28848
# define POSIP_SDH_ON 809,28893
# define POSIP_SDH_OFF 810,28938
# define POSIP_GET_MEM_SIZE 811,28983
# define FCI_FEIP_SPECIFIC 818,29055
# define FEIP_LOOP_NONE 820,29100
# define FEIP_LOOP_MOTOROLA 821,29168
# define FEIP_LOOP_DEC 822,29212
# define FEIP_LOOP_MICRO_LINEAR 823,29256
# define FEIP_RJ45 824,29300
# define FEIP_MII 825,29369
# define FEIP_FULL_DUPLEX 826,29413
# define FEIP_HALF_DUPLEX 827,29478
# define FEIP_INIT_AF 828,29522
# define FEIP_RCVS_POLL0 829,29595
# define FEIP_RCVS_POLL1 830,29664
# define FEIP_TXPOLL0 831,29733
# define FEIP_TXPOLL1 832,29802
# define FCI_PA_READ_RST 836,29911
# define FCI_PA_EEPROM_READ 837,29954
# define FEIP_ISL_COLOUR_ENTRY 850,30452
#define FCI_FSIP_TX_INVERT_CLK 856,30522
#define FCI_FSIP_NRZI 857,30566
#define FCI_FSIP_HALFDUPLEX 858,30610
#define FCI_FSIP_SIGNAL_STS 859,30654
#define FCI_SERIAL_SETUP_G703 860,30698
#define FCI_SERIAL_READ_G703 861,30742
#define FCI_SERIAL_START_SLOT_G703 862,30786
#define FCI_SERIAL_STOP_SLOT_G703 863,30830
#define FCI_SERIAL_CRC4 864,30874
#define FCI_SERIAL_TS16 865,30918
#define FCI_SERIAL_CLOCKSOURCE 866,30962
#define FCI_SERIAL_IGNORE_DCD	867,31006
#define MAX_MTU_SUPPORTED 869,31042
#define FCI_SERIAL_CRC_32	876,31213
#define FSIP_MASK_CTS 881,31272
#define FSIP_MASK_RTS 882,31316
#define FSIP_MASK_DTR 883,31360
#define FSIP_MASK_DSR 884,31404
#define FSIP_MASK_DCD 885,31448
#define FSIP_MASK_BER 886,31493
#define FSIP_MASK_NELR	887,31527
#define FSIP_MASK_FELR	888,31564
#define	FCI_AIP_PROC_SELECT	893,31625
#define	FCI_AIP_ADDR_SELECT	894,31657
#define	FCI_AIP_MEM_WRITE	895,31689
#define	FCI_AIP_MEM_READ	896,31719
#define FCI_HSCI_TA 901,31773
#define FCI_HSCI_ICLK 902,31816
# define HSSI_CLK_EXTERNAL 903,31859
# define HSSI_CLK_INTERNAL 904,31901
#define FCI_HSCI_LOOPBACK 909,31974
# define HSSI_LOOP_OFF 910,32017
# define HSSI_LOOP_LINE 911,32046
# define HSSI_LOOP_REMOTE 912,32075
# define HSSI_LOOP_DTE 913,32104
#define FCI_CBUS_BUFFER_PARK 915,32134
#define FCI_HSCI_READ_LOOP 916,32177
#define FCI_HSCI_CMD_XMIT 917,32220
#define FCI_HSCI_CRC_HACK 918,32263
# define ULTRA_CRC_ENABLE 919,32306
# define ULTRA_CRC_DISABLE 920,32348
#define FCI_HSCI_LC_INHIBIT 921,32390
# define HSSI_LCI_ON 922,32433
# define HSSI_LCI_OFF 923,32475
#define FCI_HSCI_SEND_BREAK 924,32517
#define FCI_FDDI_PHY_A_INT_MASK	926,32561
#define FCI_FDDI_PHY_B_INT_MASK	927,32597
#define FCI_FDDI_PHY_A_LEM	928,32633
#define FCI_FDDI_PHY_B_LEM	929,32664
# define FDDI_LEM_ON	930,32695
# define FDDI_LEM_OFF	931,32720
#define FCI_FDDI_DUP_ADDRESS 948,33371
#define FCI_FDDI_START_TRACE 949,33414
#define FCI_FDDI_GET_STATE 950,33457
# define FCI_PHYA_STATE 951,33500
# define FCI_PHYB_STATE 952,33543
#define FCI_FDDI_GET_RVAL	953,33586
# define FCI_PHYA_RVAL	954,33616
# define FCI_PHYB_RVAL	955,33643
#define FCI_FDDI_SET_TVAL	956,33670
# define FCI_FDDI_PHY_B	957,33700
#define FCI_FDDI_SET_TL_MIN	958,33733
#define FCI_FDDI_KICK_PHY	959,33765
# define FCI_FDDI_STOP_PHY	960,33795
# define FCI_FDDI_START_PHY	961,33825
#define FCI_FDDI_SET_CMT_MODE	962,33856
# define CMT_MODE_MON	963,33890
# define CMT_MODE_IMMED	964,33916
# define CMT_MODE_CMT	965,33944
#define FCI_FDDI_PHY_GET_LS	966,33970
# define GET_PHYA_LS	967,34033
# define GET_PHYB_LS	968,34058
#define FCI_FDDI_AF_MASK	969,34083
#define HSCI_BURST_COUNT_DEF 974,34177
#define CTR_BURST_COUNT_DEF 975,34219
#define CIP_BURST_COUNT_DEF	976,34261
#define FDDI_REG_FRINC	981,34373
#define FDDI_FM_REG_0	986,34448
#define FDDI_FM_REG_1	987,34475
#define FDDI_FM_REG_2	988,34500
#define FDDI_FM_REG_3	989,34525
#define FDDI_FM_REG_4	990,34550
#define FDDI_FM_REG_5	991,34575
#define FDDI_FM_REG_6	992,34600
#define FDDI_FM_REG_7	993,34625
#define FDDI_FM_REG_8	994,34650
#define FDDI_FM_REG_9	995,34675
#define FDDI_FM_REG_10	996,34700
#define FDDI_FM_REG_11	997,34727
#define FDDI_FM_REG_12	998,34754
#define FDDI_FM_REG_13	999,34781
#define FDDI_FM_REG_14	1000,34808
#define FDDI_FM_REG_15	1001,34835
#define FDDI_FM_W_RESET	1006,34924
#define FDDI_FM_W_IDLE_LISTEN	1007,34963
#define FDDI_FM_W_CLAIM_LISTEN	1008,35007
#define FDDI_FM_W_BEACON_LISTEN	1009,35052
#define FDDI_FM_W_RESTRICT_CTRL	1010,35098
#define FDDI_FM_W_SEND_NOW	1011,35144
#define FDDI_FM_W_RESET_ADDRPTR	1012,35185
#define FDDI_FM_R_LSBS	1017,35292
#define FDDI_FM_R_TNEG	1018,35330
#define FDDI_FM_R_MIR1	1019,35368
#define FDDI_FM_R_MIR0	1020,35406
#define FDDI_FM_R_STATES	1021,35444
#define FDDI_FM_R_STATUS	1022,35483
#define FDDI_FM_R_TVX_TIMER	1023,35523
#define FDDI_FM_RW_THT	1029,35636
#define FDDI_FM_RW_TRT	1030,35674
#define FDDI_FM_RW_TMAX	1031,35712
#define FDDI_FM_RW_TVX	1032,35751
#define FDDI_FM_RW_MODE_REG	1033,35789
#define FDDI_FM_RW_INT_MASK	1034,35832
#define FDDI_FM_RW_ADDR_REG	1035,35875
#define FDDI_FM_RW_TPRI	1036,35918
#define ENDEC_QLS	1039,35993
#define ENDEC_MLS	1040,36013
#define ENDEC_HLS	1041,36033
#define ENDEC_ILS	1042,36053
#define ENDECA	1048,36120
#define ENDECB	1049,36139
#define ENDEC_CMD	1051,36159
#define ENDEC_DATA	1052,36185
#define BYPASS_SWITCH	1054,36213
#define APPLIQUE_BYPASS	1055,36245
#define BYPASS_BYPASS	1056,36272
#define APPLIQUE_CONNECT 1057,36301
#define BYPASS_CONNECT	1058,36335
#define FDDI_EN_REG_0	1060,36365
#define FDDI_EN_REG_1	1061,36390
#define FDDI_EN_REG_2	1062,36415
#define FDDI_EN_REG_3	1063,36440
#define FDDI_EN_REG_4	1064,36465
#define FDDI_EN_RW_CR0	1066,36491
# define ENDEC_FORCE_QUIET	1067,36529
# define ENDEC_FORCE_MASTER	1068,36562
# define ENDEC_FORCE_HALT	1069,36596
# define ENDEC_FORCE_IDLE	1070,36628
# define ENDEC_ENABLE_REPEAT_FILTER	1071,36660
# define ENDEC_FORCE_JKILS	1072,36701
# define ENDEC_FORCE_IQ	1073,36734
# define ENDEC_UNFILTERED_ENCODE	1074,36765
#define FDDI_EN_RW_CR1	1075,36803
# define ENDEC_TB_BUS	1076,36841
# define ENDEC_TA_BUS	1077,36870
# define ENDEC_THROUGH	1078,36899
# define ENDEC_LOOPBACK	1079,36929
# define ENDEC_SHORT_LOOPBACK	1080,36960
# define ENDEC_REPEAT	1081,36996
#define FDDI_EN_RW_CR2	1082,37025
# define ENDEC_PARCON	1083,37063
# define ENDEC_FORCE_ODD	1084,37092
# define ENDEC_RESET	1085,37123
#define FDDI_EN_R_STATUS	1086,37151
#define FDDI_EN_RW_CR3	1087,37190
# define ENDEC_SMRESET	1088,37228
# define ENDEC_EXTENSION1	1089,37258
# define ENDEC_EXTENSION2	1090,37290
#define FCI_RSP_OKAY	1095,37385
#define FCI_RSP_ERR_UNK 1096,37442
#define FCI_RSP_ERR_ILR 1097,37495
#define FCI_RSP_ERR_ILW 1098,37556
#define FCI_RSP_ERR_UNIT 1099,37618
#define FCI_RSP_ERR_NPRS 1100,37680
#define FCI_RSP_ERR_FNV 1101,37736
#define FCI_RSP_ERR_IVO 1102,37794
#define FCI_RSP_ERR_NBF 1103,37848
#define FCI_RSP_ERR_CMD 1104,37908
#define FCI_RSP_ERR_MEM 1105,37968
#define FCI_RSP_ERR_VLD 1106,38022
#define FCI_RSP_ERR_CHK 1107,38077
#define FCI_RSP_ERR_TTL 1108,38146
#define FCI_RSP_ERR_BFR 1109,38215
#define FCI_RSP_ERR_QFL 1110,38279
#define FCI_RSP_ERR_NCP 1111,38336
#define FCI_RSP_ERR_TMOUT 1112,38397
#define FCI_RSP_ERR_HSA	1113,38446
#define FCI_RSP_ERR_SSE 1114,38503
#define FCI_RSP_ERR_FRAG 1115,38551
#define FCI_SW_VERSION	1120,38649
#define FCI_HW_VERSION	1121,38700
#define FCI_PLD_VERSION	1122,38751
#define FCI_ROM_VERSION 1123,38810
#define MCI_HARDWARE	1129,39011
#define SCI_HARDWARE	1130,39059
#define CBUS_HARDWARE	1131,39107
#define FDDI_HARDWARE	1132,39164
#define MEC_HARDWARE	1133,39219
#define CBUSII_HARDWARE	1134,39265
#define FDDIT_HARDWARE	1135,39312
#define CBUS_HW_UNUSED	1136,39364
#define CTR_HARDWARE	1137,39434
#define ULTRA_HARDWARE	1138,39492
#define FCI_MEMSIZE_MEMA	1143,39579
#define FCI_MEMSIZE_MEMD	1144,39626
#define FCI_TYPE_OUT_OF_RANGE 1151,39896
#define FCI_TYPE_UNKNOWN 1152,39946
#define FCI_TYPE_BASE_FLAG	1153,39996
#define FCI_TYPE_ETHER	1154,40030
#define FCI_TYPE_SERIAL	1155,40056
#define FCI_TYPE_FDDI	1156,40083
#define FCI_TYPE_ULTRA	1157,40108
#define FCI_TYPE_HSSI	1158,40134
#define FCI_TYPE_CTR	1159,40159
#define FCI_TYPE_FDDIT	1160,40183
#define	FCI_TYPE_ATM	1161,40209
#define FCI_TYPE_ESA	1162,40233
#define FCI_TYPE_POS	1163,40257
#define FCI_TYPE_C5 1164,40281
#define FCI_TYPE_MAX 1165,40349
#define FCI_COND_PANIC 1170,40493
#define FCI_COND_DCD	1171,40558
#define FCI_COND_PHY_B	1172,40622
#define FCI_COND_PHY_A	1173,40682
#define FCI_COND_FDDI_PHYA_JOIN	1174,40743
#define FCI_COND_FDDI_PHYB_JOIN	1175,40809
#define FCI_COND_FDDI_PHYA_SEND_BREAK 1176,40875
#define FCI_COND_FDDI_PHYB_SEND_BREAK 1177,40919
#define FCI_COND_FDDI_DUP_ADDRESS 1178,40963
#define FCI_COND_LOOP 1179,41002
#define FCI_COND_STATUS 1180,41076
#define FCI_COND_MASK	1181,41147
#define FCI_ERR_GIANTS	1186,41266
#define FCI_ERR_NOBUFFERS	1187,41295
#define FCI_ERR_ACQUIRE	1188,41326
#define FCI_ERR_COLLISIONS	1189,41356
#define FCI_ERR_RX_OVERRUN	1190,41388
#define FCI_ERR_CRC	1191,41420
#define FCI_ERR_FRAME	1192,41446
#define FCI_ERR_RUNT	1193,41474
#define FCI_ERR_TX_UNDERFLOW	1194,41501
#define FCI_ERR_FDDI_LEM_A	1195,41535
#define FCI_ERR_FDDI_LEM_B	1196,41567
#define FCI_ERR_APPLIQUE	1197,41599
#define FCI_ERR_PARITY	1198,41629
#define FCI_ERR_RX_THROTTLE	1199,41658
#define FCI_ERR_FRAMES_SEEN	1200,41691
#define FCI_ERR_CLAIMS	1201,41724
#define FCI_ERR_BEACONS	1202,41753
#define FCI_ERR_MAC_GIANTS	1203,41783
#define FCI_ERR_MAC_IGNORED	1204,41815
#define FCI_ERR_RX_RFED	1205,41848
#define FCI_ERR_RX_REDI	1206,41878
#define FCI_ERR_RX_NULL_RCP	1207,41908
#define FCI_ERR_RX_EXPLICIT_ABORT 1208,41941
#define FCI_ERR_RX_IMPLICIT_ABORT 1209,41978
#define FCI_ERR_TX_SFED	1210,42015
#define FCI_ERR_TX_SEDI	1211,42045
#define FCI_ERR_TX_FALSE_TOKEN	1212,42075
#define FCI_ERR_TX_DMA_PARITY	1213,42111
#define FCI_ERR_TX_NEXT_BUFFER	1214,42146
#define FCI_ERR_TX_STRIP_ABORT	1215,42182
#define FCI_ERR_TX_PTT_EXPIRED	1216,42218
#define FCI_ERR_RX_RECOVER_RCP	1217,42254
#define FCI_ERR_RX_AIS 1221,42322
#define FCI_ERR_RX_RAI 1222,42351
#define FCI_ERR_RX_LOS 1223,42380
#define FCI_ERR_RX_LOF 1224,42409
#define FCI_ERR_AIP_TX_DROP 1226,42439
#define FCI_STATION_ADDRESS	1234,42648
#define FCI_MULTICAST_ADDRESS	1235,42678
#define FCI_BRIDGING_ADDRESS	1236,42710
#define FCI_MAC_ADDRESS	1237,42741
#define FCI_HSRP_STATION_ADDR	1238,42788
#define FCI_DOD_IP_PROTOCOL	1239,42844
#define FCI_DECNET_PROTOCOL	1240,42874
#define FCI_XNS_PROTOCOL	1241,42904
#define FCI_CLNS_PROTOCOL	1242,42931
#define FCI_STATION_MASK	1244,42960
#define FCI_MULTICAST_MASK	1245,43013
#define FCI_BRIDGING_MASK	1246,43070
#define FCI_MAC_MASK	1247,43125
#define FCI_HSRP_STATION_MASK	1248,43171
#define FCI_DOD_IP_PROTOCOL_MASK	1249,43231
#define FCI_DECNET_PROTOCOL_MASK	1250,43291
#define FCI_XNS_PROTOCOL_MASK	1251,43351
#define FCI_CLNS_PROTOCOL_MASK	1252,43406
#define FCI_ISL_VLAN_MASK	1254,43464
#define FCI_PROTOCOL_BIT_MASK 1256,43495
#define FDDIT_AF_FC_PAGE	1274,44306
#define FDDIT_AF_RIF_PAGE	1275,44338
#define   AF_RIF_FLRN	1276,44371
#define   AF_RIF_FLRBN	1277,44440
#define	  AF_RIF_FTRN	1278,44504
#define	  AF_RIF_FTRNE	1279,44572
#define	  AF_RIF_RTRN	1280,44630
#define   AF_RIF_RTRBN	1281,44697
#define	  AF_RIF_RLRN	1282,44761
#define	  AF_RIF_RLRNE	1283,44829
#define IPSTAT_ADDR_MASK	1288,44951
#define IPSTAT_STATION_MASK	1289,44984
#define IPSTAT_MULTICAST_MASK	1290,45046
#define IPSTAT_BRIDGING_MASK	1291,45112
#define IPSTAT_MAC_MASK	1292,45176
#define IPSTAT_HSRP_STATION_MASK	1293,45231
#define IPSTAT_DOD_IP_PROTO_MASK	1294,45299
#define IPSTAT_DECNET_PROTO_MASK	1295,45362
#define IPSTAT_XNS_PROTO_MASK	1296,45425
#define IPSTAT_CLNS_PROTO_MASK	1297,45483
#define FCI_IP_RX_PKTS	1303,45635
#define FCI_IP_RX_BYTES	1304,45661
#define FCI_IP_TX_PKTS	1305,45688
#define FCI_IP_TX_BYTES	1306,45714
#define FCI_IP_TX_DROPS	1307,45741
#define FCI_IP_CKS_ERRS	1308,45768
#define FCI_SRB_RX_PKTS	1313,45810
#define FCI_SRB_RX_BYTES	1314,45837
#define FCI_SRB_TX_PKTS	1315,45864
#define FCI_SRB_TX_BYTES	1316,45891
#define FCI_SRB_TX_DROPS	1317,45918
#define	FCI_IPX_RX_PKTS	1322,45961
#define	FCI_IPX_RX_BYTES	1323,45989
#define	FCI_IPX_TX_PKTS	1324,46017
#define	FCI_IPX_TX_BYTES	1325,46045
#define	FCI_IPX_TX_DROPS	1326,46073
#define	FCI_IPX_CKS_ERRS	1327,46101
#define	FCI_AB_RX_BYTES	1332,46161
#define	FCI_AB_TX_BYTES	1333,46189
#define	FCI_AB_TX_DROPS	1334,46217
#define FCI_CLNP_RX_BYTES	1339,46262
#define FCI_CLNP_RX_PKTS	1340,46291
#define FCI_CLNP_TX_BYTES	1341,46319
#define FCI_CLNP_TX_PKTS	1342,46348
#define FCI_CLNP_TX_DROPS	1343,46376
#define CBUS	1348,46458
#define CBUSII	1349,46479
#define CXBUS	1350,46502
#define EOIR_INIT	1351,46524
#define CBUS1_ICB_BASE	1356,46620
#define CBUS2_ICB_BASE 1357,46646
#define CBUS1_ICB_SIZE	1358,46673
#define CBUS2_ICB_SIZE	1359,46698
#define FCI_RXSRB_PRESENT 1366,46830
#define FCI_RXSRB_MATCHED 1367,46896
#define FCI_RXSRB_DIR 1368,46952
#define FCI_RXSRB_EXPLORER 1369,47007
#define FCI_RXSRB_RDOFFSET 1370,47061
#define FCI_RXSRB_LENGTH 1371,47123
#define FCI_SET_IP_MTU	1376,47236
#define FCI_SET_IPX_MTU 1377,47262
#define FCI_SET_CLNP_MTU	1378,47289
#define CACHE_LINK	1384,47452
#define CACHE_VERSION	1385,47474
#define CACHE_MACSIZE	1386,47499
#define CACHE_OUTPUT	1387,47524
#define CACHE_DSTADR	1388,47548
#define CACHE_MODE	1389,47576
#define NO_CACHE_ENTRY 1390,47620
#define CBUSI_CACHE_BUCKET_MAX 1391,47664
#define CBUSII_CACHE_BUCKET_MAX 1392,47739
#define SP_CACHE_BUCKET_MAX	1393,47774
#define	SNAP_SIZE	1395,47806
#define	ETHER_ISO1_SIZE	1396,47838
#define	FDDI_ISO1_SIZE	1397,47876
#define	ISO2_SIZE	1398,47913
#define	ISO3_SIZE	1399,47946
#define FDDI_SNAP_SIZE	1401,47979
#define TR_SNAP_SIZE	1402,48016
#define SP_CCB_WORD_OFFSET 1404,48052
#define SP_LOWCORE_WORDS 1405,48086
#define FCI_SEND_IPC_SLAVE 1407,48121
