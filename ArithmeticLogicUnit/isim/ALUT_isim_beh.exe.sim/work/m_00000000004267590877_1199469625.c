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
static const char *ng0 = "C:/Xilinx/New folder/ArithmeticLogicUnit/count1.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {8U, 0U};
static int ng3[] = {5, 0};
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {0U, 0U};
static int ng9[] = {28, 0};



static void Always_35_0(char *t0)
{
    char t6[8];
    char t28[8];
    char t34[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t26 = ((char*)((ng1)));
    t27 = (t0 + 2088);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 32);

LAB14:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(55, ng0);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB26:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 10);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB38:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_mod(t6, 32, t4, 32, t5, 32);
    t19 = ((char*)((ng1)));
    memset(t28, 0, 8);
    xsi_vlog_signed_equal(t28, 32, t6, 32, t19, 32);
    t20 = (t28 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t28);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(91, ng0);

LAB54:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB52:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t5 = (t28 + 4);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t28) = t8;
    t9 = *((unsigned int *)t19);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t11 & 15U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 15U);
    t20 = ((char*)((ng9)));
    t26 = (t0 + 2408);
    t27 = (t26 + 56U);
    t29 = *((char **)t27);
    memset(t48, 0, 8);
    t30 = (t48 + 4);
    t31 = (t29 + 4);
    t13 = *((unsigned int *)t29);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t48) = t15;
    t16 = *((unsigned int *)t31);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t30) = t18;
    xsi_vlog_mul_concat(t34, 28, 1, t20, 1U, t48, 1);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t34, 28, t28, 4);
    t32 = (t0 + 1928);
    xsi_vlogvar_assign_value(t32, t6, 0, 0, 32);
    goto LAB12;

LAB15:    xsi_set_current_line(44, ng0);

LAB17:    xsi_set_current_line(46, ng0);
    t20 = (t0 + 1048U);
    t26 = *((char **)t20);
    t20 = (t0 + 1008U);
    t27 = (t20 + 72U);
    t29 = *((char **)t27);
    t30 = (t0 + 2088);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_index_select_value(t28, 32, t26, t29, 2, t32, 32, 1);
    t33 = ((char*)((ng4)));
    memset(t34, 0, 8);
    t35 = (t28 + 4);
    t36 = (t33 + 4);
    t12 = *((unsigned int *)t28);
    t13 = *((unsigned int *)t33);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t35);
    t16 = *((unsigned int *)t36);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t21 = *((unsigned int *)t35);
    t22 = *((unsigned int *)t36);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB21;

LAB18:    if (t23 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t34) = 1;

LAB21:    t38 = (t34 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 32);
    goto LAB14;

LAB20:    t37 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(47, ng0);

LAB25:    xsi_set_current_line(49, ng0);
    t44 = (t0 + 2088);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng4)));
    memset(t48, 0, 8);
    xsi_vlog_signed_add(t48, 32, t46, 32, t47, 32);
    t49 = (t0 + 2088);
    xsi_vlogvar_assign_value(t49, t48, 0, 0, 32);
    goto LAB24;

LAB27:    xsi_set_current_line(56, ng0);

LAB29:    xsi_set_current_line(58, ng0);
    t20 = (t0 + 1208U);
    t26 = *((char **)t20);
    t20 = (t0 + 1168U);
    t27 = (t20 + 72U);
    t29 = *((char **)t27);
    t30 = (t0 + 2088);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_index_select_value(t28, 32, t26, t29, 2, t32, 32, 1);
    t33 = ((char*)((ng4)));
    memset(t34, 0, 8);
    t35 = (t28 + 4);
    t36 = (t33 + 4);
    t12 = *((unsigned int *)t28);
    t13 = *((unsigned int *)t33);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t35);
    t16 = *((unsigned int *)t36);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t21 = *((unsigned int *)t35);
    t22 = *((unsigned int *)t36);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB33;

LAB30:    if (t23 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t34) = 1;

LAB33:    t38 = (t34 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 32);
    goto LAB26;

LAB32:    t37 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(59, ng0);

LAB37:    xsi_set_current_line(61, ng0);
    t44 = (t0 + 2248);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng4)));
    memset(t48, 0, 8);
    xsi_vlog_signed_add(t48, 32, t46, 32, t47, 32);
    t49 = (t0 + 2248);
    xsi_vlogvar_assign_value(t49, t48, 0, 0, 32);
    goto LAB36;

LAB39:    xsi_set_current_line(73, ng0);

LAB41:    xsi_set_current_line(74, ng0);
    t20 = (t0 + 2408);
    t26 = (t20 + 56U);
    t27 = *((char **)t26);
    t29 = (t0 + 2408);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 2088);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    xsi_vlog_generic_get_index_select_value(t28, 32, t27, t31, 2, t35, 32, 1);
    t36 = ((char*)((ng4)));
    memset(t34, 0, 8);
    t37 = (t28 + 4);
    t38 = (t36 + 4);
    t12 = *((unsigned int *)t28);
    t13 = *((unsigned int *)t36);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t37);
    t16 = *((unsigned int *)t38);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t21 = *((unsigned int *)t37);
    t22 = *((unsigned int *)t38);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB45;

LAB42:    if (t23 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t34) = 1;

LAB45:    t45 = (t34 + 4);
    t39 = *((unsigned int *)t45);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 32);
    goto LAB38;

LAB44:    t44 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(75, ng0);

LAB49:    xsi_set_current_line(77, ng0);
    t46 = (t0 + 2248);
    t47 = (t46 + 56U);
    t49 = *((char **)t47);
    t50 = ((char*)((ng4)));
    memset(t48, 0, 8);
    xsi_vlog_signed_add(t48, 32, t49, 32, t50, 32);
    t51 = (t0 + 2248);
    xsi_vlogvar_assign_value(t51, t48, 0, 0, 32);
    goto LAB48;

LAB50:    xsi_set_current_line(84, ng0);

LAB53:    xsi_set_current_line(86, ng0);
    t26 = ((char*)((ng7)));
    t27 = (t0 + 1768);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB52;

}


extern void work_m_00000000004267590877_1199469625_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_00000000004267590877_1199469625", "isim/ALUT_isim_beh.exe.sim/work/m_00000000004267590877_1199469625.didat");
	xsi_register_executes(pe);
}
