#ifndef __MEMORY_H_
#define __MEMORY_H_

#define	 Disc_ID		((vu32*)0x80000000)
#define	 Disc_Region	((vu32*)0x80000003)
#define	 Disc_Magic		((vu32*)0x80000018)
#define	 Sys_Magic		((vu32*)0x80000020)
#define	 Sys_Version	((vu32*)0x80000024)
#define	 Mem_Size		((vu32*)0x80000028)
#define	 Board_Model	((vu32*)0x8000002C)
#define	 Arena_L		((vu32*)0x80000030)
#define	 Arena_H		((vu32*)0x80000034)
#define	 FST			((vu32*)0x80000038)
#define	 Max_FST		((vu32*)0x8000003C)
#define	 Assembler		((vu32*)0x80000060)
#define	 Video_Mode		((vu32*)0x800000CC)
#define  OS_Thread		((vu32*)0x800000E4)
#define	 Dev_Debugger	((vu32*)0x800000EC)
#define	 Simulated_Mem	((vu32*)0x800000F0)
#define	 BI2			((vu32*)0x800000F4)
#define	 Bus_Speed		((vu32*)0x800000F8)
#define	 CPU_Speed		((vu32*)0x800000FC)
#define  Current_IOS	((vu32*)0x80003140)
#define	 Online_Check	((vu32*)0x80003180)
#define	 GameID_Address	((vu32*)0x80003184)
#define  Apploader_IOS	((vu32*)0x80003188)

#define Priiloader_CFG1	((vu32*)0x8132FFFB)
#define Priiloader_CFG2	((vu32*)0x817FEFF0)

#define IOS_Patch_Start	((vu32*)0x93400000)
#define IOS_Patch_End	((vu32*)0x94000000)

#define HW_PPCSPEED		((vu32*)0xCD800018)
#define HW_GPIO_OUT		((vu32*)0xCD8000E0)
#define HW_GPIOB_OUT	((vu32*)0xCD8000C0)
#define HW_AHBPROT		((vu32*)0xCD800064)
#define MEM_PROT		((vu32)0xCD8B420A)

#define HW_AES_CMD		((vu32)0x0D020000)
#define HW_AES_SRC		((vu32)0x0D020004)
#define HW_AES_DEST		((vu32)0x0D020008)
#define HW_AES_KEY		((vu32)0x0D02000C)
#define HW_AES_IV		((vu32)0x0D020010)

#define HW_SHA1_CMD		((vu32)0x0D030000)
#define HW_SHA1_SRC		((vu32)0x0D030004)
#define HW_SHA1_H0		((vu32)0x0D030008)
#define HW_SHA1_H1		((vu32)0x0D03000C)
#define HW_SHA1_H2		((vu32)0x0D030010)
#define HW_SHA1_H3		((vu32)0x0D030014)
#define HW_SHA1_H4		((vu32)0x0D030018)

#endif
