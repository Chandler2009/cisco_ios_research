
lzsd.c,2756
#define MAX_BLOCK_SIZE_TYPE 216,5780
#define SIZEOF_tOrigByteIndex 218,5814
#define MAX_BUFFR_SIZE_TYPE 220,5847
	#define _FAST_226,5907
	#define _Small_Blocks_228,5924
	#define MAX_ORIG_INDEX 230,5949
	#define LZS_SMALL_BUFFERS234,6009
	#define MAX_ORIG_CNT_FAST 242,6078
	#define _EARLY_OUT_ 246,6120
	#define MAX_ORIG_CNT_FAST 248,6144
#define MAX_INDEX	254,6189
	#define MAX_ORIG_INDEX 260,6261
	#define MAX_BLOCK_SIZE_TYPE 273,6441
	#define SIZEOF_tOrigByteIndex 275,6478
	#define MAX_BUFFR_SIZE_TYPE 285,6585
	#define MAX_BUFFER_SIZE 287,6622
typedef unsigned MAX_BUFFR_SIZE_TYPE tMaxBfrSz;tMaxBfrSz293,6668
typedef unsigned MAX_BLOCK_SIZE_TYPE tOrigByteIndex;tOrigByteIndex295,6717
#define FP_Off(FP_Off299,6773
#define dREG303,6798
#define pREG 305,6812
#define	MEM_COPY_S(MEM_COPY_S311,6839
#define	COPY_PREV_STRING(COPY_PREV_STRING313,6915
#define COPY_TO_STRING_END 318,7015
#define RAW_TKN_SZ 322,7062
#define EOCD_TKN_SZ 324,7088
#define KEY_LENGTH 326,7118
#define MAX_OFFSET	328,7144
#define SPAN_CMPRS_BFR 332,7178
#define SPLITTING_STRING	334,7210
#define SPLITTING_UNIQUE_BYTE	336,7242
#define SPLITTING_ENDS	338,7278
#define SPAN_ORIG_BFR	340,7309
#define ORIG_BLK_START	342,7339
#define ENGN_SOURCE_EXHAUSTED 344,7370
#define INIT_HASH	348,7425
#define NOT_ORIG_BFR	350,7452
#define MAX_LOOK_AHEAD 354,7483
#define DUM_DUM_SZ	356,7513
	#define LZS_FAR362,7596
#define MAX_OVERRUN 368,7624
#define DUMDUM_SZ 372,7654
struct RestartData RestartData376,7712
struct SaveData SaveData392,7869
#define	LZS_STOPPED_AT_TOKEN	436,8447
#define	LZS_STOPPED_GETTING_LEN	438,8482
#define	SPANNING_CMPRS_BFRS 440,8520
#define	LZS_OVERRUNNN	442,8555
#define	TINY_EXPAND_BFR	444,8585
#define	LZS_EXPANDING_STR 446,8617
#define	SAVED_CMPRS_BYTES	448,8651
#define	LZS_END_OF_CMPRS_DATA	450,8684
#define ENGN_STOPPED_AT_TOKEN	454,8722
#define	ENGN_STOPPED_GETTING_LEN 456,8774
#define	ENGN_PARTIAL_TOKEN 458,8832
#define ENGN_OVERRUNNN 460,8870
#define	ENGN_EXPANDING_STR 462,8911
#define	ENGN_NEW_BFR 464,8959
#define	ENGN_END_OF_CMPRS_DATA	466,8997
#define SVD_SOURCE_VALID	470,9053
#define SVD_DEST_VALID	472,9085
#define SVD_INIT	474,9116
#define tExpndWrkSpcPtr 510,9672
	#define	_Lzs_Mem_R_H516,9737
#define EXP_SIGNATURE 574,10534
static void Init_Expand_Data(586,10783
unsigned short LZS_FAR LZS_InitDecompressionHistory(614,11233
unsigned short LZS_FAR LZS_SizeOfDecompressionHistory 686,12531
#define S_FIELD 796,15178
#define T_FIELD	798,15254
#define EOCD_MARK 800,15318
unsigned int LZS_FAR Expand_Lzs_Engine(804,15346
static unsigned int EocdToken(1554,24898
unsigned short LZS_FAR	LZS_Decompress(1712,28118
unsigned int LZS_FAR Expand_Null_Engine(3136,49173
