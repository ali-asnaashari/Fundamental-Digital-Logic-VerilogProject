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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Xilinx/New folder/ArithmeticLogicUnit/multipliction.v";
static unsigned int ng1[] = {4U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {10, 0};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {0U, 0U};
static int ng8[] = {22, 0};



static void Always_36_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t36[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    t28 = (t0 + 1208U);
    t30 = *((char **)t28);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 10, t29, 5, t30, 5);
    t28 = (t0 + 2408);
    xsi_vlogvar_assign_value(t28, t31, 0, 0, 10);
    xsi_set_current_line(42, ng0);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_mod(t6, 32, t4, 32, t5, 32);
    t7 = ((char*)((ng2)));
    memset(t31, 0, 8);
    xsi_vlog_signed_equal(t31, 32, t6, 32, t7, 32);
    t8 = (t31 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t31);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(60, ng0);

LAB30:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB28:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t31 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 1023U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1023U);
    t8 = ((char*)((ng8)));
    t21 = (t0 + 2408);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t50, 0, 8);
    t29 = (t50 + 4);
    t30 = (t28 + 4);
    t15 = *((unsigned int *)t28);
    t16 = (t15 >> 9);
    t17 = (t16 & 1);
    *((unsigned int *)t50) = t17;
    t18 = *((unsigned int *)t30);
    t19 = (t18 >> 9);
    t20 = (t19 & 1);
    *((unsigned int *)t29) = t20;
    xsi_vlog_mul_concat(t36, 22, 1, t8, 1U, t50, 1);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t36, 22, t31, 10);
    t32 = (t0 + 1928);
    xsi_vlogvar_assign_value(t32, t6, 0, 0, 32);
    goto LAB12;

LAB15:    xsi_set_current_line(43, ng0);

LAB17:    xsi_set_current_line(44, ng0);
    t8 = (t0 + 2408);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = (t0 + 2408);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t32 = (t0 + 2248);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_index_select_value(t31, 32, t22, t30, 2, t34, 32, 1);
    t35 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t37 = (t31 + 4);
    t38 = (t35 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t35);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t37);
    t18 = *((unsigned int *)t38);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t37);
    t24 = *((unsigned int *)t38);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB21;

LAB18:    if (t25 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t36) = 1;

LAB21:    t40 = (t36 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB20:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(45, ng0);

LAB25:    xsi_set_current_line(47, ng0);
    t46 = (t0 + 2248);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng4)));
    memset(t50, 0, 8);
    xsi_vlog_signed_add(t50, 32, t48, 32, t49, 32);
    t51 = (t0 + 2248);
    xsi_vlogvar_assign_value(t51, t50, 0, 0, 32);
    goto LAB24;

LAB26:    xsi_set_current_line(53, ng0);

LAB29:    xsi_set_current_line(55, ng0);
    t21 = ((char*)((ng6)));
    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB28;

}


extern void work_m_00000000002773817613_0497885701_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000002773817613_0497885701", "isim/ALUT_isim_beh.exe.sim/work/m_00000000002773817613_0497885701.didat");
	xsi_register_executes(pe);
}
