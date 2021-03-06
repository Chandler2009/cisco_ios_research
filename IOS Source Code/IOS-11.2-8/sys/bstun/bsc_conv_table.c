/* $Id: bsc_conv_table.c,v 3.2.60.5 1996/07/30 20:39:17 jbalestr Exp $
 * $Source: /release/112/cvs/Xsys/bstun/bsc_conv_table.c,v $
 *------------------------------------------------------------------
 * bsc_conv_table.c - BSC conversion table
 *
 * August 1994, James Balestriere
 *
 * Copyright (c) 1994-1997 by cisco Systems, Inc.
 * Prepared by Metaplex.
 * All rights reserved.
 * 
 * Converts EBCDIC and ASCII characters to inputs for the RBB FSM.
 * 
 *------------------------------------------------------------------
 * $Log: bsc_conv_table.c,v $
 * Revision 3.2.60.5  1996/07/30  20:39:17  jbalestr
 * CSCdi62962:  bsc discards frames from Fujitsu ACT4000 ATM
 * Branch: California_branch
 *
 * Revision 3.2.60.4  1996/07/22  18:22:12  snyder
 * CSCdi63677:  fix a pointer problem, and move more text to data
 *              moves 2692 bytes to data, 16 out of image completely
 * Branch: California_branch
 *
 * Revision 3.2.60.3  1996/06/17  08:29:40  jhernand
 * Commit Modular Cobra to California_branch
 *
 * Revision 3.2.60.2  1996/05/17  10:40:09  ppearce
 * Merge IbuMod into Calif
 *
 * Revision 3.2.48.2  1996/04/10  08:26:10  jbalestr
 * CSCdi54180:  bsc framing does not see some poll sequences
 * Branch: IbuMod_Calif_branch
 *
 * Revision 3.2.48.1  1996/04/03  13:49:56  ppearce
 * Sync to IbuMod_Calif_baseline_960402
 *
 * Revision 3.2.60.1  1996/03/18  19:01:09  gstovall
 * Branch: California_branch
 * Elvis has left the building.  He headed out to California, and took the
 * port ready changes with him.
 *
 * Revision 3.2.26.2  1996/03/07  08:38:55  mdb
 * Branch: DeadKingOnAThrone_branch
 * cisco and ANSI/POSIX libraries.
 *
 * Revision 3.2.26.1  1996/02/20  13:38:06  dstine
 * Branch: DeadKingOnAThrone_branch
 *         Sync from DeadKingOnAThrone_baseline_960122 to
 *                   DeadKingOnAThrone_baseline_960213
 *
 * Revision 3.2  1995/11/17  08:48:09  hampton
 * Remove old entries from the RCS header logs.
 *
 * Revision 3.1  1995/11/09  11:03:26  shaker
 * Bump version numbers from 2.x to 3.x.
 *
 * Revision 2.2  1995/06/16  06:24:23  arothwel
 * CSCdi35957:  BSTUN/BSC cleanup.
 *
 * Revision 2.1  1995/06/07  20:13:34  hampton
 * Bump version numbers from 1.x to 2.x.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */


#include "types.h"
#include "bsc.h"
#include "bsc_conv_table.h"

/*----------------------------------------------------------------------------*/
/* Ascii & abcdic literal values for various BSC control characters. */
/* Please keep these tables in sync with the enumerated list of BSC control */
/* character mnemonics found in bsc_conv_table.h. */

const uchar bsc_to_ascii[] = {
      0x16, 0x01, 0x02, 0x05, 0x03, 0x17, 0x04, 0x30,
      0x31, 0x3B, 0x0C, 0x10, 0x15, 0x1B, 0x20,
      0x25, 0x42, 0x52, 0x22, 0xFF, 0x1F
      };

const uchar bsc_to_ebcdic[] = {
      0x32, 0x01, 0x02, 0x2D, 0x03, 0x26, 0x37, 0x70,
      0x61, 0x6B, 0x7C, 0x10, 0x3D, 0x27, 0x40,
      0x6C, 0xC2, 0xD9, 0x7F, 0xFF, 0x1F
      };

/*----------------------------------------------------------------------------*/
/* ASCII set of valid BSC control characters. 
 * this table does odd parity checking
 */

const uchar ascii_to_bsc[] = {

/* 00 - 07 */ BAD  , SOH  , STX  , BAD  , EOT  , BAD  , BAD  , OTHER, 
/* 08 - 0F */ OTHER, BAD  , BAD  , OTHER, BAD  , OTHER, OTHER, BAD  , 
/* 10 - 17 */ DLE  , BAD  , BAD  , OTHER, BAD  , NAK  , SYN  , BAD  , 
/* 18 - 1F */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , ITB  , 
/* 20 - 27 */ OTHER, BAD  , BAD  , OTHER, BAD  , OTHER, OTHER, BAD  , 
/* 28 - 2F */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , PAD  , 
/* 30 - 37 */ BAD  , ACK12, OTHER, BAD  , OTHER, BAD  , BAD  , OTHER, 
/* 38 - 3F */ OTHER, BAD  , BAD  , WACK2, BAD  , OTHER, OTHER, BAD  , 
/* 40 - 47 */ OTHER, BAD  , BAD  , OTHER, BAD  , OTHER, OTHER, BAD  , 
/* 48 - 4F */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , PAD  , 
/* 50 - 57 */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , OTHER, 
/* 58 - 5F */ OTHER, BAD  , BAD  , OTHER, BAD  , OTHER, OTHER, BAD  , 
/* 60 - 67 */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , OTHER, 
/* 68 - 6F */ OTHER, BAD  , BAD  , OTHER, BAD  , OTHER, OTHER, BAD  , 
/* 70 - 77 */ OTHER, BAD  , BAD  , OTHER, BAD  , OTHER, OTHER, BAD  , 
/* 78 - 7F */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , PAD  , 
/* 80 - 87 */ OTHER, BAD  , BAD  , ETX  , BAD  , ENQ  , OTHER, BAD  , 
/* 88 - 8F */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , PAD  , 
/* 90 - 97 */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , ETB  , 
/* 98 - 9F */ OTHER, BAD  , BAD  , OTHER, BAD  , OTHER, OTHER, BAD  , 
/* A0 - A7 */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , OTHER, 
/* A8 - AF */ OTHER, BAD  , BAD  , OTHER, BAD  , OTHER, OTHER, BAD  , 
/* B0 - B7 */ ACK02, BAD  , BAD  , OTHER, BAD  , OTHER, OTHER, BAD  , 
/* B8 - BF */ BAD  , OTHER, OTHER, BAD  , RVI2 , BAD  , BAD  , PAD  , 
/* C0 - C7 */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , OTHER, 
/* C8 - CF */ OTHER, BAD  , BAD  , OTHER, BAD  , OTHER, OTHER, BAD  , 
/* D0 - D7 */ OTHER, BAD  , BAD  , OTHER, BAD  , SNCH , OTHER, BAD  , 
/* D8 - DF */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , PAD  , 
/* E0 - E7 */ OTHER, BAD  , BAD  , OTHER, BAD  , OTHER, OTHER, BAD  , 
/* E8 - EF */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , PAD  , 
/* F0 - F7 */ BAD  , OTHER, OTHER, BAD  , OTHER, BAD  , BAD  , OTHER, 
/* F8 - FF */ OTHER, BAD  , BAD  , OTHER, BAD  , OTHER, OTHER, OTHER

};  /* ascii_to_bsc[]. */

/*----------------------------------------------------------------------------*/
/* ASCII transparent set of valid BSC control characters. 
 * this table does not do parity checking
 */

const uchar ascii_transparent_to_bsc[] = {

/* 00 - 07 */ OTHER, SOH  , STX  , ETX  , EOT  , ENQ  , OTHER, OTHER, 
/* 08 - 0F */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD  , 
/* 10 - 17 */ DLE  , OTHER, OTHER, OTHER, OTHER, NAK  , SYN  , ETB  , 
/* 18 - 1F */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, ITB  , 
/* 20 - 27 */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, 
/* 28 - 2F */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD  , 
/* 30 - 37 */ ACK02, ACK12, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, 
/* 38 - 3F */ OTHER, OTHER, OTHER, WACK2, RVI2 , OTHER, OTHER, PAD, 
/* 40 - 47 */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, 
/* 48 - 4F */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD  , 
/* 50 - 57 */ OTHER, OTHER, OTHER, OTHER, OTHER, SNCH , OTHER, OTHER, 
/* 58 - 5F */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD  , 
/* 60 - 67 */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, 
/* 68 - 6F */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD  , 
/* 70 - 77 */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, 
/* 78 - 7F */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD  , 
/* 80 - 87 */ OTHER, OTHER, OTHER, ETX  , OTHER, ENQ  , OTHER, OTHER, 
/* 88 - 8F */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD  , 
/* 90 - 97 */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, ETB  , 
/* 98 - 9F */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD  , 
/* A0 - A7 */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, 
/* A8 - AF */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD  , 
/* B0 - B7 */ ACK02, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, 
/* B8 - BF */ OTHER, OTHER, OTHER, OTHER, RVI2 , OTHER, OTHER, PAD  , 
/* C0 - C7 */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, 
/* C8 - CF */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD  , 
/* D0 - D7 */ OTHER, OTHER, OTHER, OTHER, OTHER, SNCH , OTHER, OTHER, 
/* D8 - DF */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD  , 
/* E0 - E7 */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, 
/* E8 - EF */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD  , 
/* F0 - F7 */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, 
/* F8 - FF */ OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, OTHER, PAD

};  /* ascii_transparent_to_bsc[]. */


/*----------------------------------------------------------------------------*/
/* EBCDIC set of valid BSC control characters. */

const uchar ebcdic_to_bsc[] = {

/* 00 - 07 */ OTHER , SOH   , STX   , ETX   , OTHER , OTHER , OTHER , OTHER , 
/* 08 - 0F */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , PAD   , 
/* 10 - 17 */ DLE   , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , 
/* 18 - 1F */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , ITB   , 
/* 20 - 27 */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , ETB   , OTHER , 
/* 28 - 2F */ OTHER , OTHER , OTHER , OTHER , OTHER , ENQ   , OTHER , PAD   , 
/* 30 - 37 */ OTHER , OTHER , SYN   , OTHER , OTHER , OTHER , OTHER , EOT   , 
/* 38 - 3F */ OTHER , OTHER , OTHER , OTHER , OTHER , NAK   , OTHER , PAD   ,
/* 40 - 47 */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , 
/* 48 - 4F */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , PAD   ,
/* 50 - 57 */ OTHER , OTHER , OTHER , OTHER , OTHER , SNCH  , OTHER , OTHER , 
/* 58 - 5F */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , PAD   ,
/* 60 - 67 */ OTHER , ACK12 , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , 
/* 68 - 6F */ OTHER , OTHER , OTHER , WACK2 , OTHER , OTHER , OTHER , PAD   ,
/* 70 - 77 */ ACK02 , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , 
/* 78 - 7F */ OTHER , OTHER , OTHER , OTHER , RVI2  , OTHER , OTHER , PAD   ,
/* 80 - 87 */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , 
/* 88 - 8F */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , PAD   ,
/* 90 - 97 */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , 
/* 98 - 9F */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , PAD   ,
/* A0 - A7 */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , 
/* A8 - AF */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , PAD   ,
/* B0 - B7 */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , 
/* B8 - BF */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , PAD   ,
/* C0 - C7 */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , 
/* C8 - CF */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , PAD   ,
/* D0 - D7 */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , 
/* D8 - DF */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , PAD   ,
/* E0 - E7 */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , 
/* E8 - EF */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , PAD   ,
/* F0 - F7 */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , 
/* F8 - FF */ OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , OTHER , PAD 

};  /* ebcdic_to_bsc[]. */


/*----------------------------------------------------------------------------*/
/* ASCII select -> poll address translation table. */

const uchar ascii_selpol_table[] = {

/* 00 - 07 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 08 - 0F */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 10 - 17 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 18 - 1F */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 20 - 27 */ 0x20,0x21,0x5E,0x24,0x24,0x3C,0x26,0x29, 
/* 28 - 2F */ 0x28,0x29,0x2A,0x2B,0x2E,0x20,0x2E,0x41, 
/* 30 - 37 */ 0x26,0x4A,0x4B,0x4C,0x4D,0x4E,0x4F,0x50, 
/* 38 - 3F */ 0x51,0x52,0x5D,0x3B,0x3C,0x3B,0x2B,0x21, 
/* 40 - 47 */ 0x2A,0x41,0x42,0x43,0x44,0x45,0x46,0x47, 
/* 48 - 4F */ 0x48,0x49,0x4A,0x4B,0x4C,0x4D,0x4E,0x4F, 
/* 50 - 57 */ 0x50,0x51,0x52,0x42,0x43,0x44,0x45,0x46, 
/* 58 - 5F */ 0x47,0x48,0x49,0x5B,0x0, 0x5D,0x5E,0x28, 
/* 60 - 67 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 68 - 6F */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 70 - 77 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 78 - 7F */ 0x0, 0x0, 0x0, 0x0, 0x5B,0x0, 0x0, 0x0, 
/* 80 - 87 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 88 - 8F */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 90 - 97 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 98 - 9F */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* A0 - A7 */ 0x20,0x21,0x5E,0x24,0x24,0x3C,0x26,0x29, 
/* A8 - AF */ 0x28,0x29,0x2A,0x2B,0x2E,0x20,0x2E,0x41, 
/* B0 - B7 */ 0x26,0x4A,0x4B,0x4C,0x4D,0x4E,0x4F,0x50, 
/* B8 - BF */ 0x51,0x52,0x5D,0x3B,0x3C,0x3B,0x2B,0x21, 
/* C0 - C7 */ 0x2A,0x41,0x42,0x43,0x44,0x45,0x46,0x47, 
/* C8 - CF */ 0x48,0x49,0x4A,0x4B,0x4C,0x4D,0x4E,0x4F, 
/* D0 - D7 */ 0x50,0x51,0x52,0x42,0x43,0x44,0x45,0x46, 
/* D8 - DF */ 0x47,0x48,0x49,0x5B,0x0, 0x5D,0x5E,0x28, 
/* E0 - E7 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* E8 - EF */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* F0 - F7 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* F8 - FF */ 0x0, 0x0, 0x0, 0x0, 0x5B,0x0, 0x0, 0x0

};  /* ascii_selpol_table[]. */


/*----------------------------------------------------------------------------*/
/* EBCDIC select -> poll address translation table. */

const uchar ebcdic_selpol_table[] = {

/* 00 - 07 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 08 - 0F */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 10 - 17 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 18 - 1F */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 20 - 27 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 28 - 2F */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 30 - 37 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 38 - 3F */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 40 - 47 */ 0x40,0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 48 - 4F */ 0x0, 0x0, 0x4A,0x4B,0x4C,0x4D,0x4E,0x4F, 
/* 50 - 57 */ 0x50,0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 58 - 5F */ 0x0, 0x0, 0x5A,0x5B,0x5C,0x5D,0x5E,0x5F, 
/* 60 - 67 */ 0x40,0xC1,0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 68 - 6F */ 0x0, 0x0, 0x4A,0x4B,0x4C,0x4D,0x4E,0x4F, 
/* 70 - 77 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 78 - 7F */ 0x0, 0x0, 0x5A,0x5B,0x5C,0x5D,0x5E,0x5F, 
/* 80 - 87 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 88 - 8F */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 90 - 97 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* 98 - 9F */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* A0 - A7 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* A8 - AF */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* B0 - B7 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* B8 - BF */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* C0 - C7 */ 0x0, 0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7, 
/* C8 - CF */ 0xC8,0xC9,0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* D0 - D7 */ 0x0, 0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7, 
/* D8 - DF */ 0xD8,0xD9,0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* E0 - E7 */ 0x0, 0x0, 0xC2,0xC3,0xC4,0xC5,0xC6,0xC7, 
/* E8 - EF */ 0xC8,0xC9,0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
/* F0 - F7 */ 0x50,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7, 
/* F8 - FF */ 0xD8,0xD9,0x0, 0x0, 0x0, 0x0, 0x0, 0x0

};  /* ebcdic_selpol_table[]. */


/*----------------------------------------------------------------------------*/
/* ASCII poll -> select address translation table. */

const uchar ascii_polsel_table[] = {

/* 00 - 07 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 08 - 0F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 10 - 17 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 18 - 1F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 20 - 27 */ 0x2D, 0x3F, 0x0,  0x0,  0x23, 0x0,  0x30, 0x0, 
/* 28 - 2F */ 0x5F, 0x27, 0x40, 0x3E, 0x0,  0x0,  0x2C, 0x0, 
/* 30 - 37 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 38 - 3F */ 0x0,  0x0,  0x3D, 0x0,  0x25, 0x0,  0x0,  0x0, 
/* 40 - 47 */ 0x0,  0x2F, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 
/* 48 - 4F */ 0x59, 0x5A, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 
/* 50 - 57 */ 0x37, 0x38, 0x39, 0x0,  0x0,  0x0,  0x0,  0x0, 
/* 58 - 5F */ 0x0,  0x0,  0x0,  0x7C, 0x0,  0x3A, 0x22, 0x0, 
/* 60 - 67 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 68 - 6F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 70 - 77 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 78 - 7F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 80 - 87 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 88 - 8F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 90 - 97 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 98 - 9F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* A0 - A7 */ 0x2D, 0x3F, 0x0,  0x0,  0x23, 0x0,  0x30, 0x0, 
/* A8 - AF */ 0x5F, 0x27, 0x40, 0x3E, 0x0,  0x0,  0x2C, 0x0, 
/* B0 - B7 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* B8 - BF */ 0x0,  0x0,  0x3D, 0x0,  0x25, 0x0,  0x0,  0x0, 
/* C0 - C7 */ 0x0,  0x2F, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 
/* C8 - CF */ 0x59, 0x5A, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 
/* D0 - D7 */ 0x37, 0x38, 0x39, 0x0,  0x0,  0x0,  0x0,  0x0, 
/* D8 - DF */ 0x0,  0x0,  0x0,  0x7C, 0x0,  0x3A, 0x22, 0x0, 
/* E0 - E7 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* E8 - EF */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* F0 - F7 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* F8 - FF */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0

};  /* ascii_polsel_table[]. */


/*----------------------------------------------------------------------------*/
/* EBCDIC poll -> select address translation table. */

const uchar ebcdic_polsel_table[] = {

/* 00 - 07 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 08 - 0F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 10 - 17 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 18 - 1F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 20 - 27 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 28 - 2F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 30 - 37 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 38 - 3F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 40 - 47 */ 0x60, 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 48 - 4F */ 0x0,  0x0,  0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 
/* 50 - 57 */ 0xF0, 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 58 - 5F */ 0x0,  0x0,  0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7F, 
/* 60 - 67 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 68 - 6F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 70 - 77 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 78 - 7F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 80 - 87 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 88 - 8F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 90 - 97 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* 98 - 9F */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* A0 - A7 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* A8 - AF */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* B0 - B7 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* B8 - BF */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* C0 - C7 */ 0x0,  0x61, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 
/* C8 - CF */ 0xE8, 0xE9, 0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* D0 - D7 */ 0x0,  0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 
/* D8 - DF */ 0xF8, 0xF9, 0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* E0 - E7 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* E8 - EF */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* F0 - F7 */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0, 
/* F8 - FF */ 0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0,  0x0

};  /* ebcdic_polsel_table[]. */

/*****
 * BCC calculation codes
 ******/

/*
 * combining-value lookup table for CRC-16 reverse polynomial
 */
static const unsigned short bsc_crc16tbl[256] = {
  0x0000, 0xc0c1, 0xc181, 0x0140, 0xc301, 0x03c0, 0x0280, 0xc241,
  0xc601, 0x06c0, 0x0780, 0xc741, 0x0500, 0xc5c1, 0xc481, 0x0440,
  0xcc01, 0x0cc0, 0x0d80, 0xcd41, 0x0f00, 0xcfc1, 0xce81, 0x0e40,
  0x0a00, 0xcac1, 0xcb81, 0x0b40, 0xc901, 0x09c0, 0x0880, 0xc841,
  0xd801, 0x18c0, 0x1980, 0xd941, 0x1b00, 0xdbc1, 0xda81, 0x1a40, 
  0x1e00, 0xdec1, 0xdf81, 0x1f40, 0xdd01, 0x1dc0, 0x1c80, 0xdc41,
  0x1400, 0xd4c1, 0xd581, 0x1540, 0xd701, 0x17c0, 0x1680, 0xd641,
  0xd201, 0x12c0, 0x1380, 0xd341, 0x1100, 0xd1c1, 0xd081, 0x1040,
  0xf001, 0x30c0, 0x3180, 0xf141, 0x3300, 0xf3c1, 0xf281, 0x3240,
  0x3600, 0xf6c1, 0xf781, 0x3740, 0xf501, 0x35c0, 0x3480, 0xf441, 
  0x3c00, 0xfcc1, 0xfd81, 0x3d40, 0xff01, 0x3fc0, 0x3e80, 0xfe41,
  0xfa01, 0x3ac0, 0x3b80, 0xfb41, 0x3900, 0xf9c1, 0xf881, 0x3840,
  0x2800, 0xe8c1, 0xe981, 0x2940, 0xeb01, 0x2bc0, 0x2a80, 0xea41,
  0xee01, 0x2ec0, 0x2f80, 0xef41, 0x2d00, 0xedc1, 0xec81, 0x2c40,
  0xe401, 0x24c0, 0x2580, 0xe541, 0x2700, 0xe7c1, 0xe681, 0x2640, 
  0x2200, 0xe2c1, 0xe381, 0x2340, 0xe101, 0x21c0, 0x2080, 0xe041,
  0xa001, 0x60c0, 0x6180, 0xa141, 0x6300, 0xa3c1, 0xa281, 0x6240,
  0x6600, 0xa6c1, 0xa781, 0x6740, 0xa501, 0x65c0, 0x6480, 0xa441,
  0x6c00, 0xacc1, 0xad81, 0x6d40, 0xaf01, 0x6fc0, 0x6e80, 0xae41,
  0xaa01, 0x6ac0, 0x6b80, 0xab41, 0x6900, 0xa9c1, 0xa881, 0x6840, 
  0x7800, 0xb8c1, 0xb981, 0x7940, 0xbb01, 0x7bc0, 0x7a80, 0xba41,
  0xbe01, 0x7ec0, 0x7f80, 0xbf41, 0x7d00, 0xbdc1, 0xbc81, 0x7c40,
  0xb401, 0x74c0, 0x7580, 0xb541, 0x7700, 0xb7c1, 0xb681, 0x7640,
  0x7200, 0xb2c1, 0xb381, 0x7340, 0xb101, 0x71c0, 0x7080, 0xb041,
  0x5000, 0x90c1, 0x9181, 0x5140, 0x9301, 0x53c0, 0x5280, 0x9241,
  0x9601, 0x56c0, 0x5780, 0x9741, 0x5500, 0x95c1, 0x9481, 0x5440,
  0x9c01, 0x5cc0, 0x5d80, 0x9d41, 0x5f00, 0x9fc1, 0x9e81, 0x5e40,
  0x5a00, 0x9ac1, 0x9b81, 0x5b40, 0x9901, 0x59c0, 0x5880, 0x9841,
  0x8801, 0x48c0, 0x4980, 0x8941, 0x4b00, 0x8bc1, 0x8a81, 0x4a40,
  0x4e00, 0x8ec1, 0x8f81, 0x4f40, 0x8d01, 0x4dc0, 0x4c80, 0x8c41,
  0x4400, 0x84c1, 0x8581, 0x4540, 0x8701, 0x47c0, 0x4680, 0x8641,
  0x8201, 0x42c0, 0x4380, 0x8341, 0x4100, 0x81c1, 0x8081, 0x4040
};

/*
 * function to accumulate crc-16 value
 * used when configured for EBCDIC
 */
void
bsc_crc16_rev_update (
  ushort data ,
  ushort *accum  /* accumulator passed by reference */
  )
{
  *accum = ((*accum >> 8)^(bsc_crc16tbl[(*accum^data)&0x00FF]));
}

/*
 * function to accumulate lrc value
 * usd when configured for ASCII
 */
void
bsc_lrc_update (
  ushort data ,
  ushort *accum  /* accumulator passed by reference */
  )
{
  *accum ^= data^0x0080; /* keep parity even in the bcc */
}

/*
 * Tables to return the full device address given the
 * value in range 0..31
 */

const uchar ascii_dev_address_table[] = {
  0x20 , 0x41 , 0x42 , 0x43 , 0x44 , 0x45 , 0x46 , 0x47 ,
  0x48 , 0x49 , 0x5B , 0x2E , 0x3C , 0x28 , 0x2B , 0x21 ,
  0x27 , 0x4A , 0x4B , 0x4C , 0x4D , 0x4E , 0x4F , 0x50,
  0x51 , 0x52 , 0x5D , 0x24 , 0x2A , 0x29 , 0x3B , 0x5E,
};

const uchar ebcdic_dev_address_table[] = {
  0x40 , 0xC1 , 0xC2 , 0xC3 , 0xC4 , 0xC5 , 0xC6 , 0xC7,
  0xC8 , 0xC9 , 0x4A , 0x4B , 0x4C , 0x4D , 0x4E , 0x4F,
  0x50 , 0xD1 , 0xD2 , 0xD3 , 0xD4 , 0xD5 , 0xD6 , 0xD7,
  0xD8 , 0xD9 , 0x5A , 0x5B , 0x5C , 0x5D , 0x5E , 0x5F,
};

const uchar ascii_dev_to_unit[] = {
/* 00 - 0F*/   0,  0,  0, 0,  0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
/* 10 - 1F*/   0,  0,  0, 0,  0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
/* 20 - 2F*/   0, 15,  0, 0, 27, 0, 0, 16, 13, 29, 28, 14,  0,  0, 11,  0,
/* 30 - 3F*/   0,  0,  0, 0,  0, 0, 0,  0,  0,  0,  0, 30, 12,  0,  0,  0,
/* 40 - 4F*/   0,  1,  2, 3,  4, 5, 6,  7,  8,  9, 17, 18, 19, 20, 21, 22,
/* 50 - 5F*/  23, 24, 25, 0,  0, 0, 0,  0,  0,  0,  0, 10,  0, 26, 31,  0
};

/*----------------------------------------------------------------------------*/
/* ODD parity table */

const uchar bsc_odd_parity_table[] = {
/* x00 - x07 */ 0x80, 0x01, 0x02, 0x83, 0x04, 0x85, 0x86, 0x07,
/* x08 - x0F */ 0x08, 0x89, 0x8A, 0x0B, 0x8C, 0x0D, 0x0E, 0x8F,
/* x10 - x17 */ 0x10, 0x91, 0x92, 0x13, 0x94, 0x15, 0x16, 0x97,
/* x18 - x1F */ 0x98, 0x19, 0x1A, 0x9B, 0x1C, 0x9D, 0x9E, 0x1F,
/* x20 - x27 */ 0x20, 0xA1, 0xA2, 0x23, 0xA4, 0x25, 0x26, 0xA7,
/* x28 - x2F */ 0xA8, 0x29, 0x2A, 0xAB, 0x2C, 0xAD, 0xAE, 0x2F,
/* x30 - x37 */ 0xB0, 0x31, 0x32, 0xB3, 0x34, 0xB5, 0xB6, 0x37,
/* x38 - x3F */ 0x38, 0xB9, 0xBA, 0x3B, 0xBC, 0x3D, 0x3E, 0xBF,
/* x40 - x47 */ 0x40, 0xC1, 0xC2, 0x43, 0xC4, 0x45, 0x46, 0xC7,
/* x48 - x4F */ 0xC8, 0x49, 0x4A, 0xCB, 0x4C, 0xCD, 0xCE, 0x4F,
/* x50 - x57 */ 0xD0, 0x51, 0x52, 0xD3, 0x54, 0xD5, 0xD6, 0x57,
/* x58 - x5F */ 0x58, 0xD9, 0xDA, 0x5B, 0xDC, 0x5D, 0x5E, 0xDF,
/* x60 - x67 */ 0xE0, 0x61, 0x62, 0xE3, 0x64, 0xE5, 0xE6, 0x67,
/* x68 - x6F */ 0x68, 0xE9, 0xEA, 0x6B, 0xEC, 0x6D, 0x6E, 0xEF,
/* x70 - x77 */ 0x70, 0xF1, 0xF2, 0x73, 0xF4, 0x75, 0x76, 0xF7,
/* x78 - x7F */ 0xF8, 0x79, 0x7A, 0xFB, 0x7C, 0xFD, 0xFE, 0x7F,
/* x80 - x87 */ 0x80, 0x01, 0x02, 0x83, 0x04, 0x85, 0x86, 0x07,
/* x88 - x8F */ 0x08, 0x89, 0x8A, 0x0B, 0x8C, 0x0D, 0x0E, 0x8F,
/* x90 - x97 */ 0x10, 0x91, 0x92, 0x13, 0x94, 0x15, 0x16, 0x97,
/* x98 - x9F */ 0x98, 0x19, 0x1A, 0x9B, 0x1C, 0x9D, 0x9E, 0x1F,
/* xA0 - xA7 */ 0x20, 0xA1, 0xA2, 0x23, 0xA4, 0x25, 0x26, 0xA7,
/* xA8 - xAF */ 0xA8, 0x29, 0x2A, 0xAB, 0x2C, 0xAD, 0xAE, 0x2F,
/* xB0 - xB7 */ 0xB0, 0x31, 0x32, 0xB3, 0x34, 0xB5, 0xB6, 0x37,
/* xB8 - xBF */ 0x38, 0xB9, 0xBA, 0x3B, 0xBC, 0x3D, 0x3E, 0xBF,
/* xC0 - xC7 */ 0x40, 0xC1, 0xC2, 0x43, 0xC4, 0x45, 0x46, 0xC7,
/* xC8 - xCF */ 0xC8, 0x49, 0x4A, 0xCB, 0x4C, 0xCD, 0xCE, 0x4F,
/* xD0 - xD7 */ 0xD0, 0x51, 0x52, 0xD3, 0x54, 0xD5, 0xD6, 0x57,
/* xD8 - xDF */ 0x58, 0xD9, 0xDA, 0x5B, 0xDC, 0x5D, 0x5E, 0xDF,
/* xE0 - xE7 */ 0xE0, 0x61, 0x62, 0xE3, 0x64, 0xE5, 0xE6, 0x67,
/* xE8 - xEF */ 0x68, 0xE9, 0xEA, 0x6B, 0xEC, 0x6D, 0x6E, 0xEF,
/* xF0 - xF7 */ 0x70, 0xF1, 0xF2, 0x73, 0xF4, 0x75, 0x76, 0xF7,
/* xF8 - xFF */ 0xF8, 0x79, 0x7A, 0xFB, 0x7C, 0xFD, 0xFE, 0x7F
};  /* bsc_odd_parity_table[]. */
