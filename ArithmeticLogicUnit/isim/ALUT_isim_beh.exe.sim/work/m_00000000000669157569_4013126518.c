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
static const char *ng0 = "C:/Xilinx/New folder/ArithmeticLogicUnit/MB.v";
static int ng1[] = {0, 0};
static int ng2[] = {5, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {31, 0};
static int ng6[] = {127, 0};
static int ng7[] = {30, 0};
static int ng8[] = {23, 0};
static int ng9[] = {8, 0};
static int ng10[] = {4, 0};
static int ng11[] = {22, 0};
static int ng12[] = {14, 0};
static int ng13[] = {13, 0};
static int ng14[] = {32, 0};
static int ng15[] = {2, 0};



static void Initial_39_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_50_1(char *t0)
{
    char t6[8];
    char t15[8];
    char t22[8];
    char t49[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
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
    int t48;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4376);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    xsi_set_current_line(55, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t13, 32, 1);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t14);
    t48 = (!(t8));
    if (t48 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    t13 = (t0 + 1928);
    t14 = (t13 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng7)));
    t18 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t15, t22, t49, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1);
    t19 = (t15 + 4);
    t8 = *((unsigned int *)t19);
    t48 = (!(t8));
    t20 = (t22 + 4);
    t9 = *((unsigned int *)t20);
    t50 = (!(t9));
    t51 = (t48 && t50);
    t21 = (t49 + 4);
    t10 = *((unsigned int *)t21);
    t52 = (!(t10));
    t53 = (t51 && t52);
    if (t53 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 10, 10, 2U, t4, 5, t3, 5);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 10);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(81, ng0);

LAB22:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 32, t5, 32);
    memset(t15, 0, 8);
    xsi_vlog_signed_greater(t15, 32, t4, 32, t6, 32);
    t7 = (t15 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(92, ng0);

LAB28:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 32, t5, 32);
    memset(t15, 0, 8);
    xsi_vlog_signed_greater(t15, 32, t4, 32, t6, 32);
    t7 = (t15 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t13 = (t7 + 72U);
    t14 = *((char **)t13);
    t16 = ((char*)((ng11)));
    t17 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t6, t15, t22, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t18 = (t6 + 4);
    t8 = *((unsigned int *)t18);
    t48 = (!(t8));
    t19 = (t15 + 4);
    t9 = *((unsigned int *)t19);
    t50 = (!(t9));
    t51 = (t48 && t50);
    t20 = (t22 + 4);
    t10 = *((unsigned int *)t20);
    t52 = (!(t10));
    t53 = (t51 && t52);
    if (t53 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t13 = (t7 + 72U);
    t14 = *((char **)t13);
    t16 = ((char*)((ng13)));
    t17 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t6, t15, t22, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t18 = (t6 + 4);
    t8 = *((unsigned int *)t18);
    t48 = (!(t8));
    t19 = (t15 + 4);
    t9 = *((unsigned int *)t19);
    t50 = (!(t9));
    t51 = (t48 && t50);
    t20 = (t22 + 4);
    t10 = *((unsigned int *)t20);
    t52 = (!(t10));
    t53 = (t51 && t52);
    if (t53 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t13 = (t7 + 72U);
    t14 = *((char **)t13);
    t16 = ((char*)((ng2)));
    t17 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t6, t15, t22, ((int*)(t14)), 2, t16, 32, 1, t17, 32, 1);
    t18 = (t6 + 4);
    t8 = *((unsigned int *)t18);
    t48 = (!(t8));
    t19 = (t15 + 4);
    t9 = *((unsigned int *)t19);
    t50 = (!(t9));
    t51 = (t48 && t50);
    t20 = (t22 + 4);
    t10 = *((unsigned int *)t20);
    t52 = (!(t10));
    t53 = (t51 && t52);
    if (t53 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t5);
    t25 = (t11 ^ t12);
    t26 = (t10 | t25);
    t27 = *((unsigned int *)t2);
    t28 = *((unsigned int *)t5);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB43;

LAB40:    if (t29 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t6) = 1;

LAB43:    t13 = (t6 + 4);
    t32 = *((unsigned int *)t13);
    t33 = (~(t32));
    t34 = *((unsigned int *)t6);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(115, ng0);

LAB48:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB46:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(126, ng0);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB49:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng14)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_signed_mod(t6, 32, t4, 32, t5, 32);
    t7 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t6, 32, t7, 32);
    t13 = (t15 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(143, ng0);

LAB65:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB63:    goto LAB2;

LAB7:    xsi_set_current_line(56, ng0);

LAB9:    xsi_set_current_line(58, ng0);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    t13 = (t0 + 1008U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2248);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t15, 32, t14, t17, 2, t20, 32, 1);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    t23 = (t15 + 4);
    t24 = (t21 + 4);
    t25 = *((unsigned int *)t15);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB13;

LAB10:    if (t34 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t22) = 1;

LAB13:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB12:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(59, ng0);

LAB17:    xsi_set_current_line(61, ng0);
    t44 = (t0 + 2248);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t0 + 2568);
    xsi_vlogvar_assign_value(t47, t46, 0, 0, 32);
    goto LAB16;

LAB18:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB19;

LAB20:    t11 = *((unsigned int *)t49);
    t54 = (t11 + 0);
    t12 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t22);
    t55 = (t12 - t25);
    t56 = (t55 + 1);
    xsi_vlogvar_assign_value(t7, t6, t54, *((unsigned int *)t22), t56);
    goto LAB21;

LAB23:    xsi_set_current_line(82, ng0);

LAB25:    xsi_set_current_line(84, ng0);
    t13 = (t0 + 2888);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t0 + 2888);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2248);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    xsi_vlog_generic_get_index_select_value(t22, 1, t16, t19, 2, t23, 32, 1);
    t24 = (t0 + 2728);
    t37 = (t0 + 2728);
    t38 = (t37 + 72U);
    t44 = *((char **)t38);
    t45 = (t0 + 2408);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    xsi_vlog_generic_convert_bit_index(t49, t44, 2, t47, 32, 1);
    t57 = (t49 + 4);
    t25 = *((unsigned int *)t57);
    t48 = (!(t25));
    if (t48 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB22;

LAB26:    xsi_vlogvar_assign_value(t24, t22, 0, *((unsigned int *)t49), 1);
    goto LAB27;

LAB29:    xsi_set_current_line(92, ng0);

LAB31:    xsi_set_current_line(94, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 2728);
    t16 = (t0 + 2728);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2408);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_bit_index(t22, t18, 2, t21, 32, 1);
    t23 = (t22 + 4);
    t25 = *((unsigned int *)t23);
    t48 = (!(t25));
    if (t48 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB28;

LAB32:    xsi_vlogvar_assign_value(t14, t13, 0, *((unsigned int *)t22), 1);
    goto LAB33;

LAB34:    t11 = *((unsigned int *)t22);
    t54 = (t11 + 0);
    t12 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t15);
    t55 = (t12 - t25);
    t56 = (t55 + 1);
    xsi_vlogvar_assign_value(t5, t4, t54, *((unsigned int *)t15), t56);
    goto LAB35;

LAB36:    t11 = *((unsigned int *)t22);
    t54 = (t11 + 0);
    t12 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t15);
    t55 = (t12 - t25);
    t56 = (t55 + 1);
    xsi_vlogvar_assign_value(t5, t4, t54, *((unsigned int *)t15), t56);
    goto LAB37;

LAB38:    t11 = *((unsigned int *)t22);
    t54 = (t11 + 0);
    t12 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t15);
    t55 = (t12 - t25);
    t56 = (t55 + 1);
    xsi_vlogvar_assign_value(t5, t4, t54, *((unsigned int *)t15), t56);
    goto LAB39;

LAB42:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(108, ng0);

LAB47:    xsi_set_current_line(110, ng0);
    t14 = ((char*)((ng3)));
    t16 = (t0 + 1768);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 1);
    goto LAB46;

LAB50:    xsi_set_current_line(126, ng0);

LAB52:    xsi_set_current_line(128, ng0);
    t13 = (t0 + 1928);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t0 + 1928);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2248);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    xsi_vlog_generic_get_index_select_value(t15, 32, t16, t19, 2, t23, 32, 1);
    t24 = ((char*)((ng3)));
    memset(t22, 0, 8);
    t37 = (t15 + 4);
    t38 = (t24 + 4);
    t25 = *((unsigned int *)t15);
    t26 = *((unsigned int *)t24);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t37);
    t29 = *((unsigned int *)t38);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t37);
    t33 = *((unsigned int *)t38);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB56;

LAB53:    if (t34 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t22) = 1;

LAB56:    t45 = (t22 + 4);
    t39 = *((unsigned int *)t45);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB49;

LAB55:    t44 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(128, ng0);

LAB60:    xsi_set_current_line(129, ng0);
    t46 = (t0 + 2088);
    t47 = (t46 + 56U);
    t57 = *((char **)t47);
    t58 = ((char*)((ng3)));
    memset(t49, 0, 8);
    xsi_vlog_signed_add(t49, 32, t57, 32, t58, 32);
    t59 = (t0 + 2088);
    xsi_vlogvar_assign_value(t59, t49, 0, 0, 32);
    goto LAB59;

LAB61:    xsi_set_current_line(136, ng0);

LAB64:    xsi_set_current_line(138, ng0);
    t14 = ((char*)((ng3)));
    t16 = (t0 + 1608);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 1);
    goto LAB63;

}


extern void work_m_00000000000669157569_4013126518_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Always_50_1};
	xsi_register_didat("work_m_00000000000669157569_4013126518", "isim/ALUT_isim_beh.exe.sim/work/m_00000000000669157569_4013126518.didat");
	xsi_register_executes(pe);
}
