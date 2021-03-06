/* $Id: c4000_atmzr_sunilite.h,v 3.2 1995/11/17 18:45:05 hampton Exp $
 * $Source: /swtal/cherf.111/ios/sys/src-c4000/c4000_atmzr_sunilite.h,v $
 *------------------------------------------------------------------
 * C4000 router family ATM NIM SUNI-LITE PLIM register definitions.
 *
 * October, 1994  Walter R. Friedrich
 *
 * Copyright (c) 1994-1995 by cisco Systems, Inc.
 * All rights reserved.
 *
 *------------------------------------------------------------------
 * $Log: c4000_atmzr_sunilite.h,v $
 * Revision 3.2  1995/11/17  18:45:05  hampton
 * Remove old entries from the RCS header logs.
 *
 * Revision 3.1  1995/11/09  13:26:19  shaker
 * Bump version numbers from 2.x to 3.x.
 *
 * Revision 2.1  1995/06/07  22:56:08  hampton
 * Bump version numbers from 1.x to 2.x.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

#ifndef	__C4000_ATMZR_SUNILITE_H__
#define	__C4000_ATMZR_SUNILITE_H__


/*******************************************************************
			Global Definitions
 *******************************************************************/

#define LITE_OC3_LINERATE	156250		/* OC-3 line rate (kbps) */


/*******************************************************************
			Register Bit Definitions
 *******************************************************************/

/*
 * Master Reset and Identity / Load Meters Register (0x00)
 */
#define	LITE_MR_RESET		0x80		/* Software reset */
#define	LITE_MR_TYPE_MSK	0xE0		/* PL device type */
#define	LITE_MR_ID_MSK		0x0F		/* PL device ID (rev) */

/*
 * Master Configuration Register (0x01)
 */
#define	LITE_MCFG_AUTOFEBE	0x40		/* Far end block error */
#define	LITE_MCFG_AUTOLRDI	0x20		/* Line remote defect ind */
#define	LITE_MCFG_AUTOPRDI	0x10		/* SDS path remote defect ind */
#define	LITE_MCFG_TCAINV	0x08		/* TCA signal polarity Low */
#define	LITE_MCFG_RCAINV	0x04		/* RCA signal polarity Low */
#define	LITE_MCFG_RXDINV	0x02		/* RXD signal polarity Low */

/*
 * Master Interrupt Status Register (0x02)
 */
#define	LITE_MIS_TROOLI		0x80		/* Tx reference out of lock */
#define	LITE_MIS_LCDI		0x40		/* Loss of cell delineation */
#define	LITE_MIS_RDOOLI		0x20		/* Rx data out of lock */
#define	LITE_MIS_TACPI		0x10		/* TACP block intr req */
#define	LITE_MIS_RACPI		0x08		/* RACP block intr req */
#define	LITE_MIS_RPOPI		0x04		/* RPOP block intr req */
#define	LITE_MIS_RLOPI		0x02		/* RLOP block intr req */
#define	LITE_MIS_RSOPI		0x01		/* RSOP block intr req */

/*
 * Master Clock Monitor Register (0x04)
 */
#define	LITE_MCM_RRCLKA		0x08		/* RRCLK L->H transition */
#define	LITE_MCM_TRCLKA		0x04		/* TRCLK L->H transition */
#define	LITE_MCM_RCLKA		0x02		/* RCLK L->H transition */
#define	LITE_MCM_TCLKA		0x01		/* TCLK L->H transition */

/*
 * Master Control Register (0x05)
 */
#define	LITE_MCTL_LCDE		0x80		/* Loss Cell Delin intr en */
#define	LITE_MCTL_LCDV		0x40		/* Loss of Cell Delin */
#define	LITE_MCTL_FIXPTR	0x20		/* Dis tx payload ptr adjust */
#define	LITE_MCTL_LLE		0x04		/* Line loopback enable */
#define	LITE_MCTL_DLE		0x02		/* Diagnostic loopback enable */
#define	LITE_MCTL_LOOPT		0x01		/* Select TxClk = RxClk */

/*
 * Clock Synthesis Control and Status Register (0x06)
 */
#define	LITE_CSCS_TROOLV	0x08		/* Tx reference out of lock */
#define	LITE_CSCS_TROOLE	0x02		/* Tx ref out of lock intr en */
#define	LITE_CSCS_TREFSEL	0x01		/* Tx ref select = 6.46MHz */

/*
 * Clock Recovery Control and Status Register (0x07)
 */
#define	LITE_CRCS_RDOOLV	0x08		/* Rx data out of lock */
#define	LITE_CRCS_RDOOLE	0x02		/* Rx data out lock intr en */
#define	LITE_CRCS_RREFSEL	0x01		/* Select RxClk = 6.48MHz */

/*
 * RSOP Control/Interrupt Enable Register (0x10)
 */
#define	LITE_RSOP_CIE_DDS	0x40		/* Dis STS-3c descrambling */
#define	LITE_RSOP_CIE_FOOF	0x20		/* Force out of frame */
#define	LITE_RSOP_CIE_BIPEE	0x08		/* BIP-8 section intr enable */
#define	LITE_RSOP_CIE_LOSE	0x04		/* Loss of sign alarm intr en */
#define	LITE_RSOP_CIE_LOFE	0x02		/* Loss of frame alarm int en */
#define	LITE_RSOP_CIEOLOFE	0x01		/* Out of frame alarm intr en */

/*
 * RSOP Status/Interrupt Status Register (0x11)
 */
#define	LITE_RSOP_SIS_BIPEI	0x40		/* BIP-8 section intr */
#define	LITE_RSOP_SIS_LOSI	0x20		/* Loss of signal intr */
#define	LITE_RSOP_SIS_LOFI	0x10		/* Loss of frame intr */
#define	LITE_RSOP_SIS_OOFI	0x08		/* Out of frame intr */
#define	LITE_RSOP_SIS_LOSV	0x04		/* Loss of signal state */
#define	LITE_RSOP_SIS_LOFV	0x02		/* Loss of frame state */
#define	LITE_RSOP_SIS_OOFV	0x01		/* Out of frame state */

/*
 * TSOP Control Register (0x14)
 */
#define	LITE_TSOP_CTL_DS	0x40		/* Dis STS-3c/STS-1 descrambl */
#define	LITE_TSOP_CTL_LAIS	0x01		/* Insert alarm ind signal */

/*
 * TSOP Diagnostic Register (0x15)
 */
#define	LITE_RSOP_DIAG_DLOS	0x04		/* Transmit all zeros */
#define	LITE_RSOP_DIAG_DBIP8	0x02		/* Insert cont byte errors */
#define	LITE_RSOP_DIAG_DFP	0x01		/* Insert cont bit errors */

/*
 * RLOP Control/Status Register (0x18)
 */
#define	LITE_RLOP_CS_LAISV	0x02		/* Alarm ind signal state */
#define	LITE_RLOP_CS_RDIV	0x01		/* Rmt defect ind sign state */

/*
 * RLOP Interrupt Enable/Interrupt Status Register (0x19)
 */
#define	LITE_RLOP_IEIS_FEBEE	0x80		/* Far end block err intr en */
#define	LITE_RLOP_IEIS_BIPEE	0x40		/* BIP-24 error intr enable */
#define	LITE_RLOP_IEIS_LAISE	0x20		/* Alarm ind signal intr en */
#define	LITE_RLOP_IEIS_RDIE	0x10		/* Far end recv fail intr en */
#define	LITE_RLOP_IEIS_FEBEI	0x08		/* Far end block error intr */
#define	LITE_RLOP_IEIS_BIPEI	0x04		/* BIP-24 error intr */
#define	LITE_RLOP_IEIS_LAISI	0x02		/* Alarm ind signal intr */
#define	LITE_RLOP_IEIS_RDII	0x01		/* Far end recv failure intr */

/*
 * TLOP Control Register (0x20)
 */
#define	LITE_TLOP_CTL_RDI	0x01		/* Transmit line RDI */

/*
 * TLOP Diagnostic Register (0x21)
 */
#define	LITE_TLOP_DIAG_DBIP	0x01		/* Insert cont bit errors */

/*
 * RPOP Status/Control Register (0x30)
 */
#define	LITE_RPOP_SC_LOP	0x20		/* LOP alarm state */
#define	LITE_RPOP_SC_PAIS	0x08		/* PAIS alarm state */
#define	LITE_RPOP_SC_PRDI	0x04		/* PRDI alarm state */

/*
 * RPOP Interrupt Status Register (0x31)
 */
#define	LITE_RPOP_IS_PSLI	0x80		/* Path sign label reg intr */
#define	LITE_RPOP_IS_LOPI	0x20		/* LOP state change intr */
#define	LITE_RPOP_IS_PAISI	0x08		/* PAIS state change intr */
#define	LITE_RPOP_IS_PRDII	0x04		/* PRDI state change intr */
#define	LITE_RPOP_IS_BIPEI	0x02		/* BIP-8 error intr */
#define	LITE_RPOP_IS_FEBEI	0x01		/* Far end block error intr */

/*
 * RPOP Interrupt Enable Register (0x33)
 */
#define	LITE_RPOP_IE_PSLE	0x80		/* Path sign label reg int en */
#define	LITE_RPOP_IE_LOPE	0x20		/* LOP state change intr en */
#define	LITE_RPOP_IE_PAISE	0x08		/* PAIS state change intr en */
#define	LITE_RPOP_IE_PRDIE	0x04		/* PRDI state change intr en */
#define	LITE_RPOP_IE_BIPEE	0x02		/* BIP-8 error intr en */
#define	LITE_RPOP_IE_FEBEE	0x01		/* Far end block error int en */

/*
 * TPOP Control/Diagnostic Register (0x40)
 */
#define	LITE_TPOP_CD_DB3	0x02		/* Invert byte B3 value */
#define	LITE_TPOP_CD_PAIS	0x01		/* Insert STS path alarm ind */

/*
 * TPOP Pointer Control Register (0x41)
 */
#define	LITE_TPOP_PC_FTPTR	0x40		/* En insertion of ptr value */
#define	LITE_TPOP_PC_SOS	0x20		/* Stuff events at max rate */
#define	LITE_TPOP_PC_PLD	0x10		/* Load new pointer value */
#define	LITE_TPOP_PC_NDF	0x08		/* Insert new data flags */
#define	LITE_TPOP_PC_NSE	0x04		/* En insertion neg ptr justi */
#define	LITE_TPOP_PC_PSE	0x02		/* En insertion pos ptr justi */

/*
 * TPOP Arbitrary Pointer MSB Register (0x46)
 */
#define	LITE_TPOP_AP1_NDF_MSK	0xF0		/* Payload NDF field mask */
#define	LITE_TPOP_AP1_S_0	0x00		/* Payload offset 0 */
#define	LITE_TPOP_AP1_S_1	0x04		/* Payload offset 1 */
#define	LITE_TPOP_AP1_S_2	0x08		/* Payload offset 2 */
#define	LITE_TPOP_AP1_S_3	0x0C		/* Payload offset 3 */
#define	LITE_TPOP_AP1_S_MSK	0x0C		/* Payload offset field mask */
#define	LITE_TPOP_AP1_APTR_MSK	0x03		/* Hi Payload ptr field mask */

/*
 * TPOP Path Status Register (0x49)
 */
#define	LITE_TPOP_PS_FEBE_MSK	0xF0		/* Far end block error bits */
#define	LITE_TPOP_PS_PRDI	0x08		/* Insert path remote def ind */
#define	LITE_TPOP_PS_G1_MSK	0x07		/* Path stat byte unused bits */

/*
 * RACP Control/Status Register (0x50)
 */
#define	LITE_RACP_CS_OOCDV	0x80		/* Cell delineation state */
#define	LITE_RACP_CS_RXPTYPE	0x40		/* Select RXPTYP even parity */
#define	LITE_RACP_CS_PASS	0x20		/* Ignore cell hdr match filt */
#define	LITE_RAOP_CS_DISCOR	0x10		/* Disable HCS error correct */
#define	LITE_RACP_CS_HCSPASS	0x08		/* Pass cells with HCS errors */
#define	LITE_RAOP_CS_HCSADD	0x04		/* Add coset polyn to HCS */
#define	LITE_RACP_CS_DDSCR	0x02		/* Dis cell payload discrambl */
#define	LITE_RACP_CS_FIFORST	0x01		/* Reset 4 cell recv FIFO */

/*
 * RACP Interrupt Enable/Status Register (0x51)
 */
#define	LITE_RACP_IES_OOCDE	0x80		/* Cell delineation intr en */
#define	LITE_RACP_IES_HCSE	0x40		/* HCS error intr enable */
#define	LITE_RACP_IES_FIFOE	0x20		/* FIFO overrun intr enable */
#define	LITE_RACP_IES_OOCDI	0x10		/* Cell delineation intr */
#define	LITE_RACP_IES_CHCSI	0x08		/* Correctable HCS error intr */
#define	LITE_RACP_IES_UHCSI	0x04		/* Uncorrect HCS error intr */
#define	LITE_RACP_IES_FOVRI	0x02		/* FIFO overrun intr */

/*
 * RACP Match Header Pattern Register (0x52)
 */
#define	LITE_RACP_MHP_GFC_MSK	0xF0		/* Cell hdr GFC pattern mask */
#define	LITE_RACP_MHP_PTI_MSK	0x0E		/* Cell hdr PTI pattern mask */
#define	LITE_RACP_MHP_CLP_MSK	0x01		/* Cell hdr CLP pattern */

/*
 * RACP Match Header Mask Register (0x53)
 */
#define	LITE_RACP_MHM_MGFC_MSK	0xF0		/* Cell hdr GFC msk pat mask */
#define	LITE_RACP_MHM_MPTI_MSK	0x0E		/* Cell hdr PTI msk pat mask */
#define	LITE_RACP_MHM_MCLP_MSK	0x01		/* Cell hdr CLP mask pattern */

/*
 * RACP Configuration Register (0x59)
 */
#define	LITE_RACP_CFG_RGFCE_MSK	0xF0		/* Recv GFC enable bits mask */
#define	LITE_RACP_CFG_FSEN	0x08		/* Use FS to ident stuff col */
#define	LITE_RACP_CFG_RCALEVEL0	0x04		/* H->L recv FIFO empty pol */
#define	LITE_RACP_CFG_HCSFT_1	0x00		/* Cor md 1 error free cell */
#define	LITE_RACP_CFG_HCSFT_2	0x01		/* Cor md 2 error free cells */
#define	LITE_RACP_CFG_HCSFT_4	0x02		/* Cor md 4 error free cells */
#define	LITE_RACP_CFG_HCSFT_8	0x03		/* Cor md 8 error free cells */
#define	LITE_RACP_CFG_HCSFT_MSK	0x03		/* Cor mode cells cntr mask */

/*
 * TACP Control/Status Register (0x60)
 */
#define	LITE_TACP_CS_FIFOE	0x80		/* FIFO overrun intr enable */
#define	LITE_TACP_CS_TSOCI	0x40		/* !First byte TSOC input set */
#define	LITE_TACP_CS_FOVRI	0x20		/* FIFO overrun intr */
#define	LITE_TACP_CS_DHCS	0x10		/* Invert HCS field */
#define	LITE_TACP_CS_HCSB	0x08		/* Transparent HCS mode */
#define	LITE_TACP_CS_HCSADD	0x04		/*  Add coset polyn to HCS */
#define	LITE_TACP_CS_DSCR	0x02		/*  Dis cell payload discramb */
#define	LITE_TACP_CS_FIFORST	0x01		/* Reset 4 cell tx FIFO */

/*
 * TACP Idle/Unassigned Cell Header Pattern Register (0x61)
 */
#define	LITE_TACP_IUCHP_GFC_MSK	0xF0		/* Idle/unas cell GFC pattern */
#define	LITE_TACP_IUCHP_PTI_MSK	0x0E		/* Idle/unas cell PTI pattern */
#define	LITE_TACP_IUCHP_CLP	0x01		/* Idle/unas cell CLP pattern */

/*
 * TACP FIFO Control Register (0x63)
 */
#define	LITE_TACP_FCTL_TXPTYP	0x80		/* TXPTYP even parity */
#define	LITE_TACP_FCTL_TXPRTYE	0x40		/* Tx parity error intr en */
#define	LITE_TACP_FCTL_TXPRTYI	0x10		/* TXPRTY parity error intr */
#define	LITE_TACP_FCTL_FFDP_1	0x0C		/* Tx FIFO cell depth = 1 */
#define	LITE_TACP_FCTL_FFDP_2	0x08		/* Tx FIFO cell depth = 2 */
#define	LITE_TACP_FCTL_FFDP_3	0x04		/* Tx FIFO cell depth = 3 */
#define	LITE_TACP_FCTL_FFDP_4	0x00		/* Tx FIFO cell depth = 4 */
#define	LITE_TACP_FCTL_FFDP_MSK	0x0C		/* Tx FIFO cell depth mask */
#define	LITE_TACP_FCTL_TCALVL0	0x02		/* Set TCA = TxFIFOFull */

/*
 * TACP Configuration Register (0x67)
 */
#define	LITE_TACP_CFG_TGFCE_MSK	0xF0		/* GFC insertion en bits mask */
#define	LITE_TACP_CFG_FSEN	0x08		/* Use FS to ident stuff col */
#define	LITE_TACP_CFG_H4INSB	0x04		/* Set H4 byte = 0 */
#define	LITE_TACP_CFG_FIXBY_00H	0x00		/* Fixed byte pattern = 00H */
#define	LITE_TACP_CFG_FIXBY_55H	0x01		/* Fixed byte pattern = 55H */
#define	LITE_TACP_CFG_FIXBY_AAH	0x02		/* Fixed byte pattern = AAH */
#define	LITE_TACP_CFG_FIXBY_FFH	0x03		/* Fixed byte pattern = FFH */
#define	LITE_TACP_CFG_FIXBY_MSK	0x03		/* Fixed byte pattern mask */

/*
 * Master Test Register (0x80)
 */
#define	LITE_MTEST_PMCTST	0x10		/* PMC's manufacturing tests */
#define	LITE_MTEST_DBCTRL	0x08		/* CSB pin ctrls data bus out */
#define	LITE_MTEST_IOTST	0x04		/* Allow access to test regs */
#define	LITE_MTEST_HIZDATA	0x02		/* All ! data bus pins = HiZ */
#define	LITE_MTEST_HIZIO	0x01		/* Set data bus = HiZ */



/*******************************************************************
			Register Map
 *******************************************************************/

typedef struct suni_lite_t_ {
    vshort mr;			/* Master Rst and Ident/Load Meters Register */
    vshort mcfgr;		/* Master Configuration Register */
    vshort misr;		/* Master Interrupt Status Register */
    vshort res0r;		/* Reserved Register */
    vshort mcmr;		/* Master Clock Monitor Register */
    vshort mctlr;		/* Master Control Register */
    vshort cscsr;		/* Clock Synthesis Ctrl and Status Register */
    vshort crcsr;		/* Clock Recovery Ctrl and Status Register */
    vshort res1r[8];		/* Reserved Registers */
    vshort rsop_cier;		/* RSOP Control/Interrupt Enable Register */
    vshort rsop_sisr;		/* RSOP Status/Interrupt Status Register */
    vshort rsop_bip80r;		/* RSOP Section BIP-8 LSB Register */
    vshort rsop_bip81r;		/* RSOP Section BIP-8 MSB Register */
    vshort tsop_ctlr;		/* TSOP Control Register */
    vshort tsop_diagr;		/* TSOP Diagnostic Register */
    vshort tsop_resr[2];	/* TSOP Reserved Registers */
    vshort rlop_csr;		/* RLOP Control/Status Register */
    vshort rlop_ieisr;		/* RLOP Intr Enable/Intr Status Register */
    vshort rlop_bip8_240r;	/* RLOP Line BIP-8/24 LSB Register */
    vshort rlop_bip8_241r;	/* RLOP Line BIP-8/24 Register */
    vshort rlop_bip8_242r;	/* RLOP Line BIP-8/24 MSB Register */
    vshort rlop_febe0r;		/* RLOP Line FEBE LSB Register */
    vshort rlop_febe1r;		/* RLOP Line FEBE Register */
    vshort rlop_febe2r;		/* RLOP Line FEBE MSB Register */
    vshort tlop_ctlr;		/* TLOP Control Register */
    vshort tlop_diagr;		/* TLOP Diagnostic Register */
    vshort tlop_resr[2];	/* TLOP Reserved Registers */
    vshort res2r[4];		/* Reserved Registers */
    vshort res3r[4];		/* Reserved Registers */
    vshort res4r[4];		/* Reserved Registers */
    vshort rpop_scr;		/* RPOP Status/Control Register */
    vshort rpop_isr;		/* RPOP Interrupt Status Register */
    vshort rpop_resr;		/* RPOP Reserved Register */
    vshort rpop_ier;		/* RPOP Interrupt Enable Register */
    vshort rpop_res1r;		/* RPOP Reserved Register */
    vshort rpop_res2r;		/* RPOP Reserved Register */
    vshort rpop_res3r;		/* RPOP Reserved Register */
    vshort rpop_pslr;		/* RPOP Path Signal Label Register */
    vshort rpop_pbip80r;	/* RPOP Path BIP-8 LSB Register */
    vshort rpop_pbip81r;	/* RPOP Path BIP-8 MSB Register */
    vshort rpop_pfebe0r;	/* RPOP Path FEBE LSB Register */
    vshort rpop_pfebe1r;	/* RPOP Path FEBE MSB Register */
    vshort rpop_res4r[4];	/* RPOP Reserved Registers */
    vshort tpop_cdr;		/* TPOP Control/Diagnostic Register */
    vshort tpop_pcr;		/* TPOP Pointer Control Register */
    vshort tpop_res1r;		/* TPOP Reserved Register */
    vshort tpop_res2r;		/* TPOP Reserved Register */
    vshort tpop_res3r;		/* TPOP Reserved Register */
    vshort tpop_ap0r;		/* TPOP Arbitrary Pointer LSB Register */
    vshort tpop_ap1r;		/* TPOP Arbitrary Pointer MSB Register */
    vshort tpop_res4r;		/* TPOP Reserved Register */
    vshort tpop_pslr;		/* TPOP Path Signal Label Register */
    vshort tpop_psr;		/* TPOP Path Status Register */
    vshort tpop_res5r;		/* TPOP Reserved Register */
    vshort tpop_res6r[5];	/* TPOP Reserved Registers */
    vshort racp_csr;		/* RACP Control/Status Register */
    vshort racp_iesr;		/* RACP Interrupt Enable/Status Register */
    vshort racp_mhpr;		/* RACP Match Header Pattern Register */
    vshort racp_mhmr;		/* RACP Match Header Mask Register */
    vshort racp_checr;		/* RACP Correctable HCS Error Count Register */
    vshort racp_uhecr;		/* RACP Uncorrectable HCS Error Cnt Register */
    vshort racp_rcc0r;		/* RACP Receive Cell Counter LSB Register */
    vshort racp_rcc1r;		/* RACP Receive Cell Counter Register */
    vshort racp_rcc2r;		/* RACP Receive Cell Counter MSB Register */
    vshort racp_cfgr;		/* RACP Configuration Register */
    vshort racp_resr[6];	/* RACP Reserved Registers */
    vshort tacp_csr;		/* TACP Control/Status Register */
    vshort tacp_iuchpr;		/* TACP Idle/Unassign Cell Hdr Pattern Reg */
    vshort tacp_iucpopr;	/* TACP Idle/Unas Cell Payload Octet Pat Reg */
    vshort tacp_fctlr;		/* TACP FIFO Control Register */
    vshort tacp_tcc0r;		/* TACP Transmit Cell Counter LSB Register */
    vshort tacp_tcc1r;		/* TACP Transmit Cell Counter Register */
    vshort tacp_tcc2r;		/* TACP Transmit Cell Counter MSB Register */
    vshort tacp_cfgr;		/* TACP Configuration Register */
    vshort tcap_resr[24];	/* TACP Reserved Registers */
    vshort res5r[128];		/* Reserved Test Registers */
    vshort res6r[1280];		/* Reserved addresses to pad 3KB PLIM area */
} suni_lite_t;



/*******************************************************************
			Function prototypes
 *******************************************************************/

extern void atmzr_sunilite_init (hwidbtype *idb);
extern void atmzr_sunilite_reset (hwidbtype *idb);
extern void atmzr_sunilite_show_regs (hwidbtype *idb);
extern void atmzr_sunilite_inthand (hwidbtype *idb);


#endif	__C4000_ATMZR_SUNILITE_H__

