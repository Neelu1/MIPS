/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/work/fpga/MIPS/tb_alu.v";
static unsigned int ng1[] = {34897U, 0U};
static unsigned int ng2[] = {2389U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};



static void Initial_45_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB1;

}


extern void work_m_00000000002812770124_2521077532_init()
{
	static char *pe[] = {(void *)Initial_45_0};
	xsi_register_didat("work_m_00000000002812770124_2521077532", "isim/tb_alu_isim_beh.exe.sim/work/m_00000000002812770124_2521077532.didat");
	xsi_register_executes(pe);
}
