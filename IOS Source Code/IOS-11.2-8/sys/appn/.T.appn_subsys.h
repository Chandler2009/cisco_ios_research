
appn_subsys.h,24081
#define APPN_SUBSYS_H_INCLUDED107,3809
typedef enum {DEL_ACTION_MODIFY, DEL_ACTION_DELETE} del_action_e;del_action_e111,3861
#define EXEC_SYSTEM 115,3975
#define EXEC_LINK 116,4002
#define EXEC_APPN_PORT 117,4029
#define EXEC_CPNAME 118,4056
#define EXEC_NETID 119,4083
#define EXEC_APING 120,4110
#define APPN_SHOW_CN 124,4184
#define APPN_SHOW_COS	125,4215
#define APPN_SHOW_DEF	126,4244
#define APPN_SHOW_DIR	127,4273
#define APPN_SHOW_ISR	128,4302
#define APPN_SHOW_LINK_DEF 129,4331
#define APPN_SHOW_LINK	130,4362
#define APPN_SHOW_LU62	131,4392
#define APPN_SHOW_MODE	132,4422
#define APPN_SHOW_NODE	133,4452
#define APPN_SHOW_SESS	134,4482
#define APPN_SHOW_SNA	135,4512
#define APPN_SHOW_TRS 136,4541
#define APPN_SHOW_PORT 137,4571
#define APPN_SHOW_DLUS 138,4601
#define APPN_SHOW_DLUR_PU 139,4631
#define APPN_SHOW_DLUR_LU 140,4661
#define APPN_SHOW_STATS 141,4691
#define APPN_SHOW_MAX 142,4721
#define DUMP_APPN_DS 146,4798
#define DUMP_APPN_ISR 147,4825
#define DUMP_APPN_LINKS 148,4852
#define DUMP_APPN_MEMORY 149,4879
#define DUMP_APPN_NODE 150,4906
#define DUMP_APPN_PROC 151,4933
#define DUMP_APPN_SESS 152,4960
#define DUMP_APPN_TRS 153,4987
#define DUMP_APPN_DEBUG 154,5014
#define DUMP_APPN_TREE 155,5041
#define DUMP_APPN_BUFFER 156,5068
#define DEBUG_ALL 160,5149
#define DEBUG_RM 161,5191
#define DEBUG_TRS 162,5230
#define DEBUG_PS 163,5269
#define DEBUG_SS 164,5308
#define DEBUG_DS 165,5347
#define DEBUG_PC 166,5386
#define DEBUG_SCM 167,5425
#define DEBUG_NOF 168,5464
#define DEBUG_CS 169,5503
#define DEBUG_SM 170,5542
#define DEBUG_HS 171,5581
#define DEBUG_DLC 172,5620
#define DEBUG_MS 173,5659
#define DEBUG_EGPE_TIMER 174,5698
#define DEBUG_EGPE_NONTIMER 175,5737
#define DEBUG_SSA 176,5776
#define DEBUG_LSR 177,5815
#define DEBUG_API 178,5854
#define DEBUG_LU 179,5901
#define DEBUG_MODULE_TRACE 180,5940
#define DEBUG_ACS 181,5979
#define DEBUG_PSNAV 182,6018
#define DEBUG_DLUR 183,6057
#define APPN_NAME_CP 189,6150
#define APPN_NAME_LINK 190,6194
#define APPN_NAME_PORT 191,6237
#define APPN_NAME_CN 192,6272
#define APPN_NAME_PLOC 193,6321
#define APPN_NAME_COS 194,6371
#define APPN_NAME_MODE 195,6418
#define APPN_NAME_START 196,6453
#define PROMPT_APPN_CP 199,6524
#define PROMPT_APPN_LINK 200,6566
#define PROMPT_APPN_PORT 201,6610
#define PROMPT_APPN_CN 202,6654
#define PROMPT_APPN_PLOC 203,6696
#define PROMPT_APPN_COS 204,6743
#define PROMPT_APPN_MODE 205,6786
#define APPN_NAME 220,7118
#define APPN_COMPLETE 221,7149
#define APPN_CP_XID 223,7183
#define APPN_CP_BLOCK 224,7215
#define APPN_CP_RESIST 225,7247
#define APPN_CP_CACHE 226,7279
#define APPN_CP_STORE 227,7311
#define APPN_CP_TREES 228,7343
#define APPN_CP_INTR_SW 229,7375
#define APPN_CP_BUF_PERCENT 230,7407
#define APPN_CP_MEM 231,7439
#define APPN_TRACE_FLAGS 232,7471
#define APPN_CP_CYCLES 233,7503
#define APPN_CP_HOST 234,7535
#define APPN_CP_DLUR	235,7567
#define APPN_CP_DLUS	236,7596
#define APPN_CP_BKUP_DLUS 237,7625
#define APPN_CP_MIN 238,7657
#define APPN_CP_CRR 239,7689
#define APPN_CP_DLUS_RETRY_INT 240,7721
#define APPN_CP_PREFER_ACT 241,7755
#define APPN_CP_COMP 243,7788
#define APPN_CP_XID_KEY 245,7832
#define APPN_CP_BLOCK_KEY 246,7878
#define APPN_CP_RESIST_KEY 247,7926
#define APPN_CP_CACHE_KEY 248,7985
#define APPN_CP_STORE_KEY 249,8035
#define APPN_CP_TREES_KEY 250,8086
#define APPN_CP_INTR_SW_KEY 251,8144
#define APPN_CP_BUF_PERCENT_KEY 252,8194
#define APPN_CP_MEM_KEY 253,8244
#define APPN_CP_MIN_KEY 254,8294
#define APPN_TRACE_FLAGS_KEY 255,8344
#define APPN_CP_CYCLES_KEY 256,8393
#define APPN_CP_HOST_KEY 257,8442
#define APPN_CP_HOST_IP_KEY 258,8489
#define APPN_CP_HOST_DIR_KEY 259,8531
#define APPN_CP_DLUR_KEY	260,8572
#define APPN_CP_DLUS_KEY	261,8604
#define APPN_CP_BKUP_DLUS_KEY	262,8636
#define APPN_DLUR_MAXPUS_KEY 263,8680
#define APPN_CP_DLUS_RETRY_INT_KEY 264,8722
#define APPN_CP_PREFER_ACT_KEY 265,8780
#define APPN_CP_XID_KEY_HELP 267,8834
#define APPN_CP_BLOCK_KEY_HELP 268,8898
#define APPN_CP_RESIST_KEY_HELP 269,8961
#define APPN_CP_CACHE_KEY_HELP 270,9037
#define APPN_CP_STORE_KEY_HELP 271,9117
#define APPN_CP_TREES_KEY_HELP 272,9193
#define APPN_CP_XID_VAL_HELP 273,9270
#define APPN_CP_INTR_SW_KEY_HELP 274,9334
#define APPN_CP_BUF_PERCENT_KEY_HELP 275,9403
#define APPN_CP_MEM_KEY_HELP 276,9492
#define APPN_CP_MIN_KEY_HELP 277,9567
#define APPN_TRACE_FLAGS_KEY_HELP 278,9634
#define APPN_CP_CYCLES_KEY_HELP 279,9708
#define APPN_CP_HOST_KEY_HELP 280,9777
#define APPN_CP_HOST_IP_KEY_HELP 281,9841
#define APPN_CP_HOST_DIR_KEY_HELP 282,9907
#define APPN_CP_DLUR_KEY_HELP	283,9980
#define APPN_CP_DLUS_KEY_HELP	284,10042
#define APPN_CP_BKUP_DLUS_KEY_HELP	285,10105
#define APPN_DLUR_MAXPUS_KEY_HELP 286,10179
#define APPN_CP_DLUS_RETRY_INT_KEY_HELP 287,10263
#define APPN_CP_PREFER_ACT_KEY_HELP 288,10352
#define APPN_CP_XID_VAL_HELP 290,10444
#define APPN_CP_BLOCK_VAL_HELP 291,10508
#define APPN_CP_RESIST_VAL_HELP 292,10571
#define APPN_CP_CACHE_VAL_HELP 293,10647
#define APPN_CP_STORE_VAL_HELP 294,10727
#define APPN_CP_TREES_VAL_HELP 295,10803
#define APPN_CP_BUF_PERCENT_VAL_HELP 296,10880
#define APPN_CP_MEM_VAL_HELP 297,10951
#define APPN_CP_MIN_VAL_HELP 298,11024
#define APPN_TRACE_FLAGS_VAL_HELP 299,11097
#define APPN_CP_CYCLES_VAL_HELP 300,11134
#define APPN_CP_HOST_IP_VAL_HELP 301,11213
#define APPN_CP_HOST_DIR_VAL_HELP 302,11280
#define APPN_CP_DLUS_VAL_HELP	303,11354
#define APPN_CP_BKUP_DLUS_VAL_HELP	304,11417
#define APPN_DLUR_MAXPUS_VAL_HELP 305,11491
#define APPN_CP_DLUS_RETRY_INT_VAL_HELP 306,11575
#define APPN_LINK_CPCP 309,11656
#define APPN_LINK_NODTYP 310,11690
#define APPN_LINK_LANADDR 311,11724
#define APPN_LINK_SMDSADDR 312,11758
#define APPN_LINK_PPPADDR 313,11792
#define APPN_LINK_ATMADDR 314,11826
#define APPN_LINK_FRADDR 315,11860
#define APPN_LINK_SDLCADDR 316,11895
#define APPN_LINK_CPNM 317,11929
#define APPN_LINK_EFFCAP 318,11963
#define APPN_LINK_BYTE 319,11997
#define APPN_LINK_CONNECT 320,12031
#define APPN_LINK_DELAY 321,12065
#define APPN_LINK_SECUR 322,12099
#define APPN_LINK_USER1 323,12135
#define APPN_LINK_USER2 324,12169
#define APPN_LINK_USER3 325,12203
#define APPN_LINK_LIMIT 326,12237
#define APPN_LINK_ROLE 327,12271
#define APPN_LINK_TGNUM 328,12305
#define APPN_LINK_RETRY 329,12339
#define APPN_LINK_CALL 330,12373
#define APPN_LINK_PORT 331,12407
#define APPN_LINK_ADAPT 332,12441
#define APPN_LINK_COMP 334,12476
#define APPN_LINK_RCVBTU 335,12521
#define APPN_LINK_SNDBTU 336,12555
#define APPN_LINK_DLUS 337,12589
#define APPN_LINK_BKUP_DLUS 338,12623
#define APPN_LINK_DSPU	339,12657
#define APPN_LINK_PU_TYPE_20 340,12690
#define APPN_LINK_QLLCADDR 341,12724
#define APPN_LINK_QUEUING 342,12758
#define APPN_LINK_AUTO 343,12792
#define APPN_LINK_CPCP_KEY 345,12827
#define APPN_LINK_NODTYP_KEY 346,12885
#define APPN_LINK_NODTYP_LEARN 347,12944
#define APPN_LINK_NODTYP_NN 348,12983
#define APPN_LINK_NODTYP_EN 349,13019
#define APPN_LINK_NODTYP_LEN 350,13055
#define APPN_LINK_LANADDR_KEY 351,13092
#define APPN_LINK_SMDSADDR_KEY 352,13145
#define APPN_LINK_PPPADDR_KEY 353,13199
#define APPN_LINK_ATMADDR_KEY 354,13252
#define APPN_LINK_FRADDR_KEY 355,13302
#define APPN_LINK_SDLCADDR_KEY 356,13351
#define APPN_LINK_QLLCADDR_KEY 357,13402
#define APPN_LINK_QLLC_PVC_KEY 358,13452
#define APPN_LINK_QLLC_SVC_KEY 359,13493
#define APPN_LINK_CPNM_KEY 360,13534
#define APPN_LINK_EFFCAP_KEY 361,13584
#define APPN_LINK_BYTE_KEY 362,13636
#define APPN_LINK_CONNECT_KEY 363,13683
#define APPN_LINK_DELAY_KEY 364,13741
#define APPN_LINK_DELAY_MIN 365,13792
#define APPN_LINK_DELAY_LAN 366,13833
#define APPN_LINK_DELAY_PHONE 367,13870
#define APPN_LINK_DELAY_PACK 368,13913
#define APPN_LINK_DELAY_SAT 369,13962
#define APPN_LINK_DELAY_MAX 370,14005
#define APPN_LINK_SECUR_KEY 371,14046
#define APPN_LINK_SECUR_NON 372,14088
#define APPN_LINK_SECUR_PUB 373,14131
#define APPN_LINK_SECUR_UND 374,14180
#define APPN_LINK_SECUR_SEC 375,14231
#define APPN_LINK_SECUR_GUA 376,14279
#define APPN_LINK_SECUR_ENC 377,14328
#define APPN_LINK_SECUR_RAD 378,14371
#define APPN_LINK_USER1_KEY 379,14422
#define APPN_LINK_USER2_KEY 380,14470
#define APPN_LINK_USER3_KEY 381,14519
#define APPN_LINK_LIMIT_KEY 382,14567
#define APPN_LINK_LIMIT_YES 383,14617
#define APPN_LINK_LIMIT_NO 384,14654
#define APPN_LINK_AUTO_KEY 385,14690
#define APPN_LINK_ROLE_KEY 386,14747
#define APPN_LINK_ROLE_PRI 387,14785
#define APPN_LINK_ROLE_SEC 388,14826
#define APPN_LINK_ROLE_NEG 389,14869
#define APPN_LINK_TGNUM_KEY 390,14913
#define APPN_LINK_QUEUING_KEY 391,14956
#define APPN_LINK_QUEUING_PRIORITY_KEY 392,15002
#define APPN_LINK_QUEUING_CUSTOM_KEY 393,15053
#define APPN_LINK_RETRY_KEY 394,15102
#define APPN_LINK_RETRY_INF 395,15147
#define APPN_LINK_CALL_KEY 396,15189
#define APPN_LINK_PORT_KEY 397,15241
#define APPN_LINK_ADAPT_KEY 398,15279
#define APPN_LINK_RCVBTU_KEY 399,15320
#define APPN_LINK_SNDBTU_KEY 400,15370
#define APPN_LINK_DLUS_KEY 401,15429
#define APPN_LINK_BKUP_DLUS_KEY 402,15471
#define APPN_LINK_PU_TYPE_20_KEY 403,15520
#define APPN_LINK_DSPU_KEY 404,15568
#define APPN_LINK_CPCP_KEY_HELP 406,15621
#define APPN_LINK_NODTYP_KEY_HELP 407,15719
#define APPN_LINK_NODTYP_LEARN_KEY_HELP 408,15819
#define APPN_LINK_NODTYP_NN_KEY_HELP 409,15883
#define APPN_LINK_NODTYP_EN_KEY_HELP 410,15970
#define APPN_LINK_NODTYP_LEN_KEY_HELP 411,16057
#define APPN_LINK_LANADDR_KEY_HELP 412,16145
#define APPN_LINK_SMDSADDR_KEY_HELP 413,16237
#define APPN_LINK_ATMADDR_KEY_HELP 414,16330
#define APPN_LINK_FRADDR_KEY_HELP 415,16416
#define APPN_LINK_SDLCADDR_KEY_HELP 416,16511
#define APPN_LINK_PPPADDR_KEY_HELP 417,16595
#define APPN_LINK_CPNM_KEY_HELP 418,16679
#define APPN_LINK_EFFCAP_KEY_HELP 419,16768
#define APPN_LINK_BYTE_KEY_HELP 420,16843
#define APPN_LINK_CONNECT_KEY_HELP 421,16931
#define APPN_LINK_DELAY_KEY_HELP 422,17027
#define APPN_LINK_DELAY_MIN_KEY_HELP 423,17110
#define APPN_LINK_DELAY_LAN_KEY_HELP 424,17154
#define APPN_LINK_DELAY_PHONE_KEY_HELP 425,17198
#define APPN_LINK_DELAY_PACK_KEY_HELP 426,17242
#define APPN_LINK_DELAY_SAT_KEY_HELP 427,17286
#define APPN_LINK_DELAY_MAX_KEY_HELP 428,17330
#define APPN_LINK_SECUR_KEY_HELP 429,17374
#define APPN_LINK_SECUR_NON_KEY_HELP 430,17418
#define APPN_LINK_SECUR_PUB_KEY_HELP 431,17462
#define APPN_LINK_SECUR_UND_KEY_HELP 432,17506
#define APPN_LINK_SECUR_SEC_KEY_HELP 433,17550
#define APPN_LINK_SECUR_GUA_KEY_HELP 434,17594
#define APPN_LINK_SECUR_ENC_KEY_HELP 435,17638
#define APPN_LINK_SECUR_RAD_KEY_HELP 436,17682
#define APPN_LINK_USER1_KEY_HELP 437,17726
#define APPN_LINK_USER2_KEY_HELP 438,17826
#define APPN_LINK_USER3_KEY_HELP 439,17926
#define APPN_LINK_LIMIT_KEY_HELP 440,18026
#define APPN_LINK_LIMIT_YES_KEY_HELP 441,18110
#define APPN_LINK_LIMIT_NO_KEY_HELP 442,18154
#define APPN_LINK_AUTO_KEY_HELP 443,18198
#define APPN_LINK_AUTO_YES_KEY_HELP 444,18295
#define APPN_LINK_AUTO_NO_KEY_HELP 445,18339
#define APPN_LINK_ROLE_KEY_HELP 446,18383
#define APPN_LINK_ROLE_PRI_KEY_HELP 447,18469
#define APPN_LINK_ROLE_SEC_KEY_HELP 448,18533
#define APPN_LINK_ROLE_NEG_KEY_HELP 449,18599
#define APPN_LINK_TGNUM_KEY_HELP 450,18690
#define APPN_LINK_QUEUING_KEY_HELP 451,18764
#define APPN_LINK_QUEUING_PRIORITY_KEY_HELP 452,18870
#define APPN_LINK_QUEUING_CUSTOM_KEY_HELP 453,18943
#define APPN_LINK_RETRY_KEY_HELP 454,19004
#define APPN_LINK_RETRY_INF_KEY_HELP 455,19105
#define APPN_LINK_CALL_KEY_HELP 456,19167
#define APPN_LINK_PORT_KEY_HELP 457,19257
#define APPN_LINK_RCVBTU_KEY_HELP 458,19346
#define APPN_LINK_SNDBTU_KEY_HELP 459,19444
#define APPN_LINK_DLUS_KEY_HELP	461,19539
#define APPN_LINK_BKUP_DLUS_KEY_HELP	462,19606
#define APPN_LINK_PU_TYPE_20_KEY_HELP 463,19684
#define APPN_LINK_DSPU_KEY_HELP 464,19761
#define APPN_LINK_LANADDR_VAL_HELP 466,19823
#define APPN_LINK_LANSAP_VAL_HELP 467,19899
#define APPN_LINK_SMDSADDR_VAL_HELP 468,19992
#define APPN_LINK_ATMADDR_VAL_HELP 469,20070
#define APPN_LINK_FRADDR_VAL_HELP 470,20152
#define APPN_LINK_SDLCADDR_VAL_HELP 471,20244
#define APPN_LINK_CPNM_VAL_HELP 472,20313
#define APPN_LINK_EFFCAP_VAL_HELP 473,20376
#define APPN_LINK_BYTE_VAL_HELP 474,20448
#define APPN_LINK_CONNECT_VAL_HELP 475,20489
#define APPN_LINK_USER1_VAL_HELP 476,20530
#define APPN_LINK_USER2_VAL_HELP 477,20571
#define APPN_LINK_USER3_VAL_HELP 478,20612
#define APPN_LINK_TGNUM_VAL_HELP 479,20653
#define APPN_LINK_QUEUING_CUSTOM_VAL_HELP 480,20694
#define APPN_LINK_RETRY_VAL_HELP 481,20760
#define APPN_LINK_RETRY_TRIES_HELP 482,20842
#define APPN_LINK_RETRY_TIME_HELP 483,20923
#define APPN_LINK_PORT_VAL_HELP 484,21000
#define APPN_LINK_ADAPT_VAL_HELP 485,21041
#define APPN_LINK_RCVBTU_VAL_HELP 486,21082
#define APPN_LINK_SNDBTU_VAL_HELP 487,21123
#define APPN_LINK_DLUS_VAL_HELP	488,21164
#define APPN_LINK_BKUP_DLUS_VAL_HELP 489,21238
#define APPN_LINK_DSPU_VAL_HELP	490,21319
#define APPN_LINK_QLLC_KEY_HELP 491,21391
#define APPN_LINK_QLLC_PVC_KEY_HELP 492,21430
#define APPN_LINK_QLLC_SVC_KEY_HELP 493,21473
#define APPN_LINK_QLLC_PVC_VAL_HELP 494,21516
#define APPN_LINK_QLLC_SVC_VAL_HELP 495,21559
#define APPN_PORT_SAP 498,21604
#define APPN_PORT_RCVBTU 499,21638
#define APPN_PORT_SNDBTU 500,21678
#define APPN_PORT_MAXL 501,21718
#define APPN_PORT_INB 502,21756
#define APPN_PORT_OUTB 503,21793
#define APPN_PORT_ANY 504,21831
#define APPN_PORT_EFFCAP 505,21868
#define APPN_PORT_BYTE 506,21902
#define APPN_PORT_CONNECT 507,21936
#define APPN_PORT_DELAY 508,21970
#define APPN_PORT_SECUR 509,22004
#define APPN_PORT_USER1 510,22040
#define APPN_PORT_USER2 511,22074
#define APPN_PORT_USER3 512,22108
#define APPN_PORT_LIMIT 513,22142
#define APPN_PORT_ROLE 514,22176
#define APPN_PORT_TGNUM 515,22210
#define APPN_PORT_RETRY 516,22244
#define APPN_PORT_ADAPT 517,22278
#define APPN_PORT_RSRB 518,22312
#define APPN_PORT_SDLC 519,22346
#define APPN_PORT_QLLC 520,22380
#define APPN_PORT_VDLC 521,22414
#define APPN_PORT_AUTO 522,22448
#define APPN_PORT_IDLE 523,22482
#define APPN_PORT_LLC2_DELAY 524,22516
#define APPN_PORT_ACKMAX 525,22550
#define APPN_PORT_LWIN 526,22584
#define APPN_PORT_T1 527,22618
#define APPN_PORT_LEN 528,22652
#define APPN_PORT_ACTIVATE 529,22686
#define APPN_PORT_COMP 530,22720
#define APPN_PORT_SAP_KEY 532,22766
#define APPN_PORT_RCVBTU_KEY 533,22809
#define APPN_PORT_SNDBTU_KEY 534,22859
#define APPN_PORT_MAXL_KEY 535,22918
#define APPN_PORT_INB_KEY 536,22969
#define APPN_PORT_OUTB_KEY 537,23019
#define APPN_PORT_ANY_KEY 538,23070
#define APPN_PORT_EFFCAP_KEY 539,23115
#define APPN_PORT_BYTE_KEY 540,23167
#define APPN_PORT_CONNECT_KEY 541,23214
#define APPN_PORT_DELAY_KEY 542,23272
#define APPN_PORT_DELAY_MIN 543,23323
#define APPN_PORT_DELAY_LAN 544,23364
#define APPN_PORT_DELAY_PHONE 545,23401
#define APPN_PORT_DELAY_PACK 546,23444
#define APPN_PORT_DELAY_SAT 547,23493
#define APPN_PORT_DELAY_MAX 548,23536
#define APPN_PORT_SECUR_KEY 549,23577
#define APPN_PORT_SECUR_NON 550,23619
#define APPN_PORT_SECUR_PUB 551,23662
#define APPN_PORT_SECUR_UND 552,23711
#define APPN_PORT_SECUR_SEC 553,23762
#define APPN_PORT_SECUR_GUA 554,23810
#define APPN_PORT_SECUR_ENC 555,23859
#define APPN_PORT_SECUR_RAD 556,23902
#define APPN_PORT_USER1_KEY 557,23953
#define APPN_PORT_USER2_KEY 558,24001
#define APPN_PORT_USER3_KEY 559,24050
#define APPN_PORT_LIMIT_KEY 560,24098
#define APPN_PORT_LEN_KEY 561,24148
#define APPN_PORT_AUTO_KEY 562,24196
#define APPN_PORT_ROLE_KEY 563,24253
#define APPN_PORT_ROLE_PRI 564,24291
#define APPN_PORT_ROLE_SEC 565,24332
#define APPN_PORT_ROLE_NEG 566,24375
#define APPN_PORT_TGNUM_KEY 567,24419
#define APPN_PORT_RETRY_KEY 568,24462
#define APPN_PORT_RETRY_INF 569,24507
#define APPN_PORT_RSRB_KEY 570,24549
#define APPN_PORT_SDLC_KEY 571,24603
#define APPN_PORT_QLLC_KEY 572,24650
#define APPN_PORT_QLLC_PVC_KEY 573,24698
#define APPN_PORT_QLLC_SVC_KEY 574,24735
#define APPN_PORT_VDLC_KEY 575,24772
#define APPN_PORT_IDLE_KEY 576,24810
#define APPN_PORT_LLC2_DELAY_KEY 577,24858
#define APPN_PORT_ACKMAX_KEY 578,24913
#define APPN_PORT_LWIN_KEY 579,24959
#define APPN_PORT_T1_KEY 580,25010
#define APPN_PORT_ACTIVATE_KEY 581,25056
#define APPN_PORT_SAP_KEY_HELP 583,25105
#define APPN_PORT_RCVBTU_KEY_HELP 584,25179
#define APPN_PORT_SNDBTU_KEY_HELP 585,25272
#define APPN_PORT_MAXL_KEY_HELP 586,25369
#define APPN_PORT_INB_KEY_HELP 587,25471
#define APPN_PORT_OUTB_KEY_HELP 588,25565
#define APPN_PORT_ANY_KEY_HELP 589,25660
#define APPN_PORT_EFFCAP_KEY_HELP 590,25753
#define APPN_PORT_BYTE_KEY_HELP 591,25829
#define APPN_PORT_CONNECT_KEY_HELP 592,25907
#define APPN_PORT_DELAY_KEY_HELP 593,25996
#define APPN_PORT_DELAY_MIN_KEY_HELP 594,26070
#define APPN_PORT_DELAY_LAN_KEY_HELP 595,26113
#define APPN_PORT_DELAY_PHONE_KEY_HELP 596,26156
#define APPN_PORT_DELAY_PACK_KEY_HELP 597,26201
#define APPN_PORT_DELAY_SAT_KEY_HELP 598,26245
#define APPN_PORT_DELAY_MAX_KEY_HELP 599,26288
#define APPN_PORT_SECUR_KEY_HELP 600,26331
#define APPN_PORT_SECUR_NON_KEY_HELP 601,26396
#define APPN_PORT_SECUR_PUB_KEY_HELP 602,26440
#define APPN_PORT_SECUR_UND_KEY_HELP 603,26484
#define APPN_PORT_SECUR_SEC_KEY_HELP 604,26528
#define APPN_PORT_SECUR_GUA_KEY_HELP 605,26572
#define APPN_PORT_SECUR_ENC_KEY_HELP 606,26616
#define APPN_PORT_SECUR_RAD_KEY_HELP 607,26660
#define APPN_PORT_USER1_KEY_HELP 608,26704
#define APPN_PORT_USER2_KEY_HELP 609,26804
#define APPN_PORT_USER3_KEY_HELP 610,26904
#define APPN_PORT_LIMIT_KEY_HELP 611,27004
#define APPN_PORT_LEN_KEY_HELP 612,27112
#define APPN_PORT_AUTO_KEY_HELP 613,27213
#define APPN_PORT_ROLE_KEY_HELP 614,27329
#define APPN_PORT_ROLE_PRI_KEY_HELP 615,27429
#define APPN_PORT_ROLE_SEC_KEY_HELP 616,27471
#define APPN_PORT_ROLE_NEG_KEY_HELP 617,27513
#define APPN_PORT_TGNUM_KEY_HELP 618,27555
#define APPN_PORT_ADAPT_KEY_HELP 619,27642
#define APPN_PORT_RETRY_INF_KEY_HELP 620,27733
#define APPN_PORT_RETRY_KEY_HELP 621,27794
#define APPN_PORT_IDLE_KEY_HELP 622,27906
#define APPN_PORT_LLC2_DELAY_KEY_HELP 623,27994
#define APPN_PORT_ACKMAX_KEY_HELP 624,28105
#define APPN_PORT_LWIN_KEY_HELP 625,28213
#define APPN_PORT_T1_KEY_HELP 626,28319
#define APPN_PORT_ACTIVATE_KEY_HELP 627,28425
#define APPN_PORT_SAP_VAL_HELP 629,28519
#define APPN_PORT_RCVBTU_VAL_HELP 630,28599
#define APPN_PORT_SNDBTU_VAL_HELP 631,28638
#define APPN_PORT_MAXL_VAL_HELP 632,28677
#define APPN_PORT_INB_VAL_HELP 633,28716
#define APPN_PORT_OUTB_VAL_HELP 634,28755
#define APPN_PORT_ANY_VAL_HELP 635,28794
#define APPN_PORT_EFFCAP_VAL_HELP 636,28833
#define APPN_PORT_BYTE_VAL_HELP 637,28873
#define APPN_PORT_CONNECT_VAL_HELP 638,28911
#define APPN_PORT_USER1_VAL_HELP 639,28952
#define APPN_PORT_USER2_VAL_HELP 640,28991
#define APPN_PORT_USER3_VAL_HELP 641,29030
#define APPN_PORT_TGNUM_VAL_HELP 642,29069
#define APPN_PORT_RETRY_VAL_HELP 643,29108
#define APPN_PORT_RETRY_TRIES_HELP 644,29198
#define APPN_PORT_RETRY_TIME_HELP 645,29288
#define APPN_PORT_RSRB_KEY_HELP 646,29377
#define APPN_PORT_RSRB_VADDR_VAL_HELP 647,29445
#define APPN_PORT_RSRB_LRING_VAL_HELP 648,29521
#define APPN_PORT_RSRB_BRIDGE_NUM_VAL_HELP 649,29595
#define APPN_PORT_RSRB_RRING_VAL_HELP 650,29667
#define APPN_PORT_SDLC_KEY_HELP 651,29734
#define APPN_PORT_SDLC_ADDR_VAL_HELP 652,29804
#define APPN_PORT_QLLC_KEY_HELP 653,29866
#define APPN_PORT_QLLC_PVC_KEY_HELP 654,29936
#define APPN_PORT_QLLC_SVC_KEY_HELP 655,30012
#define APPN_PORT_QLLC_PVC_VAL_HELP 656,30090
#define APPN_PORT_QLLC_SVC_VAL_HELP 657,30153
#define APPN_PORT_VDLC_KEY_HELP 658,30216
#define APPN_PORT_VDLC_VADDR_VAL_HELP 659,30290
#define APPN_PORT_VDLC_RING_VAL_HELP 660,30358
#define APPN_PORT_IDLE_VAL_HELP 661,30424
#define APPN_PORT_LLC2_DELAY_VAL_HELP 662,30497
#define APPN_PORT_ACKMAX_VAL_HELP 663,30571
#define APPN_PORT_LWIN_VAL_HELP 664,30628
#define APPN_PORT_T1_VAL_HELP 665,30685
#define APPN_PLOC_COMP 667,30748
#define APPN_PLOC_OWNNN 668,30794
#define APPN_PLOC_LOCAL 669,30829
#define APPN_PLOC_OWNCP 670,30864
#define APPN_PLOC_WILD 671,30899
#define APPN_PLOC_OWNNN_KEY 673,30935
#define APPN_PLOC_LOCAL_KEY 674,30980
#define APPN_PLOC_OWNCP_KEY 675,31030
#define APPN_PLOC_WILD_KEY 676,31074
#define APPN_PLOC_OWNNN_VAL_HELP 678,31118
#define APPN_PLOC_OWNNN_KEY_HELP 679,31155
#define APPN_PLOC_LOCAL_KEY_HELP 680,31238
#define APPN_PLOC_OWNCP_VAL_HELP 681,31316
#define APPN_PLOC_OWNCP_KEY_HELP 682,31353
#define APPN_PLOC_WILD_KEY_HELP 683,31435
#define APPN_MODE_COMP 685,31516
#define APPN_MODE_COS 686,31561
#define APPN_MODE_COS_KEY 688,31596
#define APPN_MODE_COS_KEY_HELP 690,31647
#define APPN_MODE_COS_VAL_HELP 691,31727
#define APPN_COS_COMP 693,31763
#define APPN_COS_TG 694,31809
#define APPN_COS_NODE 695,31845
#define APPN_COS_PRIOR 696,31880
#define APPN_COS_USER3_KEY 698,31916
#define APPN_COS_USER2_KEY 699,31961
#define APPN_COS_USER1_KEY 700,32006
#define APPN_COS_SECURITY_KEY 701,32051
#define APPN_COS_DELAY_KEY 702,32099
#define APPN_COS_CAPACITY_KEY 703,32144
#define APPN_COS_TIME_KEY 704,32192
#define APPN_COS_BYTE_KEY 705,32236
#define APPN_COS_WEIGHT_KEY 706,32280
#define APPN_COS_TG_KEY 707,32326
#define APPN_COS_ROUTE_KEY 708,32372
#define APPN_COS_YES_KEY 709,32439
#define APPN_COS_NO_KEY 710,32482
#define APPN_COS_CONGEST_KEY 711,32524
#define APPN_COS_NODE_KEY 712,32574
#define APPN_COS_PRIOR_LOW 713,32622
#define APPN_COS_PRIOR_MED 714,32665
#define APPN_COS_PRIOR_HIGH 715,32711
#define APPN_COS_PRIOR_NET 716,32755
#define APPN_COS_PRIOR_KEY 717,32802
#define APPN_COS_USER3_HI_VAL_HELP 719,32864
#define APPN_COS_USER3_LOW_VAL_HELP 720,32944
#define APPN_COS_USER3_KEY_HELP 721,33024
#define APPN_COS_USER2_HI_VAL_HELP 722,33116
#define APPN_COS_USER2_LOW_VAL_HELP 723,33196
#define APPN_COS_USER2_KEY_HELP 724,33276
#define APPN_COS_USER1_HI_VAL_HELP 725,33368
#define APPN_COS_USER1_LOW_VAL_HELP 726,33448
#define APPN_COS_USER1_KEY_HELP 727,33528
#define APPN_COS_SECURITY_HI_VAL_HELP 728,33620
#define APPN_COS_SECURITY_LOW_VAL_HELP 729,33694
#define APPN_COS_SECURITY_KEY_HELP 730,33768
#define APPN_COS_DELAY_HI_VAL_HELP 731,33857
#define APPN_COS_DELAY_LOW_VAL_HELP 732,33943
#define APPN_COS_DELAY_KEY_HELP 733,34029
#define APPN_COS_CAPACITY_HI_VAL_HELP 734,34127
#define APPN_COS_CAPACITY_LOW_VAL_HELP 735,34214
#define APPN_COS_CAPACITY_KEY_HELP 736,34301
#define APPN_COS_TIME_HI_VAL_HELP 737,34400
#define APPN_COS_TIME_LOW_VAL_HELP 738,34490
#define APPN_COS_TIME_KEY_HELP 739,34580
#define APPN_COS_BYTE_HI_VAL_HELP 740,34682
#define APPN_COS_BYTE_LOW_VAL_HELP 741,34764
#define APPN_COS_BYTE_KEY_HELP 742,34846
#define APPN_COS_TG_WEIGHT_VAL_HELP 743,34948
#define APPN_COS_TG_WEIGHT_KEY_HELP 744,35042
#define APPN_COS_TG_INDEX_VAL_HELP 745,35136
#define APPN_COS_TG_KEY_HELP 746,35204
#define APPN_COS_ROUTE_HI_VAL_HELP 747,35280
#define APPN_COS_ROUTE_LOW_VAL_HELP 748,35377
#define APPN_COS_ROUTE_KEY_HELP 749,35474
#define APPN_COS_CONGEST_HI_YES_KEY_HELP 750,35579
#define APPN_COS_CONGEST_HI_NO_KEY_HELP 751,35666
#define APPN_COS_CONGEST_LOW_YES_KEY_HELP 752,35753
#define APPN_COS_CONGEST_LOW_NO_KEY_HELP 753,35840
#define APPN_COS_CONGEST_KEY_HELP 754,35925
#define APPN_COS_NODE_WEIGHT_VAL_HELP 755,36022
#define APPN_COS_NODE_WEIGHT_KEY_HELP 756,36121
#define APPN_COS_NODE_INDEX_VAL_HELP 757,36220
#define APPN_COS_NODE_KEY_HELP 758,36296
#define APPN_COS_PRIOR_LOW_KEY_HELP 759,36374
#define APPN_COS_PRIOR_MED_KEY_HELP 760,36423
#define APPN_COS_PRIOR_HIGH_KEY_HELP 761,36472
#define APPN_COS_PRIOR_NET_KEY_HELP 762,36521
#define APPN_COS_PRIOR_KEY_HELP 763,36570
#define APPN_CN_COMP 765,36659
#define APPN_CN_PORT 766,36707
#define APPN_CN_PORT_KEY 768,36745
#define APPN_CN_PORT_VAL_HELP 770,36787
#define APPN_CN_PORT_KEY_HELP 771,36824
