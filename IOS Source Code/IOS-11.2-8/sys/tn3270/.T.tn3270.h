
tn3270.h,4871
#define __DATA_LOADED	45,1495
#define TN3270_MOD2	49,1543
#define TN3270_MOD3	50,1567
#define TN3270_MOD4	51,1591
#define TN3270_MOD5	52,1615
#define TELNET_PROTOCOL56,1642
#define IAC	60,1719
#define EOR	61,1735
#define MAX_SCREEN_SIZE 73,1852
#define SCREEN_INPUT_BUFF_SIZE 75,1882
#define TN3270_MEMWAIT_SLEEP_SECS 76,1949
#define TN3270_TYPEAHEAD_BUF_SIZE 77,2024
struct interface_attribute_type interface_attribute_type84,2199
#define INTERFACE_HIGHLIGHT_BLINK	94,2454
#define INTERFACE_HIGHLIGHT_REVERSE	95,2495
#define INTERFACE_HIGHLIGHT_INTENSIFY	96,2538
#define INTERFACE_HIGHLIGHT_UNDERSCORE	97,2583
#define INTERFACE_HIGHLIGHT_INVISIBLE	98,2629
struct character_attribute_type character_attribute_type102,2677
#define COMP_CHAR_ATT(COMP_CHAR_ATT110,2900
struct field_attribute_type field_attribute_type120,3286
struct field_type field_type131,3617
typedef struct field_type *FieldPtr;FieldPtr141,3883
#define FIELD_NEW	143,3921
#define FIELD_OLD	144,3946
#define FIELD_NORMAL	146,3972
#define FIELD_FIRST	147,4000
#define FIELD_LAST	148,4027
#define FIELD_NEXT_FIELD(FIELD_NEXT_FIELD153,4057
#define FIELD_PREV_FIELD(FIELD_PREV_FIELD154,4101
#define FIELD_END_ADDRESS(FIELD_END_ADDRESS155,4145
#define FIELD_START_ADDRESS(FIELD_START_ADDRESS156,4205
#define FIELD_ATTRIBUTE(FIELD_ATTRIBUTE157,4255
#define FIELD_LAST_FIELD(FIELD_LAST_FIELD159,4314
#define FIELD_FIRST_FIELD(FIELD_FIRST_FIELD160,4366
#define FIELD_ATT_TO_COLOR(FIELD_ATT_TO_COLOR163,4422
#define FIELD_ATT_DATA_INVISIBLE(FIELD_ATT_DATA_INVISIBLE171,4674
#define FIELD_ATT_DATA_INTENSIFIED(FIELD_ATT_DATA_INTENSIFIED174,4763
#define COMPARE_EQUAL 187,5132
#define COMPARE_DISPLAY_SAME 188,5163
#define COMPARE_DISPLAY_TEXT 189,5202
#define COMPARE_DISPLAY_ALL 190,5241
#define DYN_SEGMENT	195,5284
#define SEGMENT_INVISIBLE_MASK 196,5312
#define SEGMENT_HIGHLIGHT_MASK 197,5355
#define SEGMENT_UNCHAINED_MASK 198,5398
#define SEGMENT_PROLOGUE_MASK 199,5441
#define SEGMENT_NEWSEGMENT_MASK 200,5484
#define SEGMENT_NS_NEW	201,5527
#define SEGMENT_NS_APPEND 202,5564
#define SEGMENT_DATA_MASK 203,5602
struct segment_type segment_type206,5644
struct point_type point_type219,5937
struct graphics_contex_type graphics_contex_type224,6007
struct screen_type_ screen_type_229,6079
#define ON	324,9650
#define OFF	325,9666
#define INSERT_TYPE_3277 326,9683
#define INSERT_TYPE_3278 327,9712
typedef struct screen_type_ *ScreenPtr;ScreenPtr329,9742
#define TRANS_OFF	331,9783
#define TRANS_READ	332,9805
#define TRANS_WRITE	333,9828
#define MSG_CURSOR	335,9853
#define MSG_STATUS	336,9876
#define CURSOR_NORMAL	338,9900
#define CURSOR_INSERT 339,9926
#define STATUS_NORMAL	341,9954
#define STATUS_PROT_FIELD	342,9981
#define STATUS_INSERT_OVERFLOW	343,10011
#define STATUS_SLOCK	344,10046
#define INSERT_OFF	346,10094
#define INSERT_ON	347,10118
#define KEYBOARD_UNLOCKED	349,10142
#define KEYBOARD_LOCKED	350,10172
#define YALE_ON	352,10202
#define YALE_OFF 353,10223
#define ERROR_NONE	355,10245
#define ERROR_INSERT_OVERFLOW 356,10269
#define ERROR_PROT_FIELD	357,10305
#define ERROR_DATASTREAM	358,10334
#define ERROR_EMULATOR	359,10363
#define DEBUG_BUGS	365,10396
#define DEBUG_INFO	366,10430
#define DEBUG_DATASTREAM	367,10464
#define DEBUG_TELNET	368,10503
#define PARTITION_MODE_IMPLICIT	371,10541
#define PARTITION_MODE_EXPLICIT	372,10581
#define EM_BASE	375,10623
#define EM_GRAPHICS	376,10693
#define	EM_16_COLORS	377,10747
#define COLOR_MODE_BASE	386,10943
#define COLOR_MODE_EXTENDED	387,10976
#define COLOR_MODE_EXTENDED_DIRTY	388,11012
#define SCREEN_CLEAR	391,11055
#define SCREEN_NOT_CLEAR	392,11084
#define PT_CONTEX_LAST_DATA	395,11118
#define PT_CONTEX_LAST_ORDER	396,11153
#define PT_CONTEX_NULL_INSERT	397,11189
#define ADDRESS_MODE_1214	407,11478
#define ADDRESS_MODE_16	408,11511
#define ADDRESS_14_BIT_MASK	409,11543
#define BUFFER_TO_ADDRESS(BUFFER_TO_ADDRESS411,11579
#define ADDRESS_TO_3270_0(ADDRESS_TO_3270_0417,11778
#define ADDRESS_TO_3270_1(ADDRESS_TO_3270_1425,12091
#define RESET_CHAR_ATTRIBUTE(RESET_CHAR_ATTRIBUTE435,12382
#define INCREMENT_ADDRESS(INCREMENT_ADDRESS448,12775
#define DECREMENT_ADDRESS(DECREMENT_ADDRESS449,12845
#define ADDRESS_TO_ROW(ADDRESS_TO_ROW451,12923
#define ADDRESS_TO_COL(ADDRESS_TO_COL452,12978
struct packet_type packet_type457,13079
typedef struct packet_type *PacketPtr;PacketPtr465,13244
#define QUEUE_BYTE(QUEUE_BYTE486,13776
#define QUEUE_BYTE(QUEUE_BYTE499,14059
#define QUEUE_SHORT(QUEUE_SHORT508,14310
#define QUEUE_LONG(QUEUE_LONG514,14446
#define QUEUE_END_OF_TRANS 521,14684
#define QUEUE_FLUSH 537,15057
#define QUEUE_START_SF(QUEUE_START_SF538,15099
#define QUEUE_START_SDP(QUEUE_START_SDP539,15151
#define QUEUE_END_SF	540,15205
#define QUEUE_END_SDP	541,15249
