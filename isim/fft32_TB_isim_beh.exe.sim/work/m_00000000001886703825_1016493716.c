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

/* This file is designed for use with ISim build 0xc4ca3437 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/khagesh/fft32/mpuc924_383.v";
static int ng1[] = {2, 0};
static int ng2[] = {1, 0};
static int ng3[] = {5, 0};
static int ng4[] = {3, 0};
static int ng5[] = {11, 0};
static int ng6[] = {7, 0};
static int ng7[] = {13, 0};



static void Always_34_0(char *t0)
{
    char t13[16];
    char t14[16];
    char t15[16];
    char t19[8];
    char t24[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;

LAB0:    t1 = (t0 + 6344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 7160);
    *((int *)t2) = 1;
    t3 = (t0 + 6376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);

LAB9:    xsi_set_current_line(37, ng0);
    t11 = (t0 + 1344U);
    t12 = *((char **)t11);
    t11 = (t0 + 3824);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4624);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = (t0 + 4784);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(52, ng0);

LAB14:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    xsi_vlog_signed_lshift(t13, 37, t4, 35, t5, 32);
    t11 = (t0 + 3504);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng2)));
    xsi_vlog_signed_arith_rshift(t14, 37, t16, 35, t17, 32);
    xsi_vlog_signed_minus(t15, 37, t13, 37, t14, 37);
    t18 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t18, t15, 0, 0, 37, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3504);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t16 = ((char*)((ng2)));
    xsi_vlog_signed_arith_rshift(t13, 36, t12, 35, t16, 32);
    xsi_vlog_signed_add(t14, 36, t4, 35, t13, 36);
    t17 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t17, t14, 0, 0, 36, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 35, 0LL);

LAB12:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t19, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t5) != 0)
        goto LAB17;

LAB18:    t12 = (t19 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB19;

LAB20:    memcpy(t32, t19, 8);

LAB21:    t60 = (t32 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t32);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2464U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlog_signed_arith_rshift(t13, 37, t3, 37, t2, 32);
    t4 = (t0 + 5264);
    xsi_vlogvar_wait_assign_value(t4, t13, 0, 0, 35, 0LL);

LAB31:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 35, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB8;

LAB10:    xsi_set_current_line(46, ng0);

LAB13:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1984U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    xsi_vlog_signed_lshift(t13, 37, t5, 35, t4, 32);
    t11 = (t0 + 1984U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    xsi_vlog_signed_arith_rshift(t14, 37, t12, 35, t11, 32);
    xsi_vlog_signed_minus(t15, 37, t13, 37, t14, 37);
    t16 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 37, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t0 + 1984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlog_signed_arith_rshift(t13, 36, t4, 35, t2, 32);
    xsi_vlog_signed_add(t14, 36, t3, 35, t13, 36);
    t5 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t5, t14, 0, 0, 36, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 35, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 35, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB17:    t11 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    t16 = (t0 + 4944);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t24, 0, 8);
    t25 = (t18 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t18);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t25) != 0)
        goto LAB24;

LAB25:    t33 = *((unsigned int *)t19);
    t34 = *((unsigned int *)t24);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = (t19 + 4);
    t37 = (t24 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB21;

LAB22:    *((unsigned int *)t24) = 1;
    goto LAB25;

LAB24:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB25;

LAB26:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t19 + 4);
    t47 = (t24 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (~(t48));
    t50 = *((unsigned int *)t19);
    t51 = (t50 & t49);
    t52 = *((unsigned int *)t47);
    t53 = (~(t52));
    t54 = *((unsigned int *)t24);
    t55 = (t54 & t53);
    t56 = (~(t51));
    t57 = (~(t55));
    t58 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t58 & t56);
    t59 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t59 & t57);
    goto LAB28;

LAB29:    xsi_set_current_line(57, ng0);
    t66 = (t0 + 2464U);
    t67 = *((char **)t66);
    t66 = ((char*)((ng1)));
    xsi_vlog_signed_arith_rshift(t13, 37, t67, 37, t66, 32);
    t68 = (t0 + 5264);
    xsi_vlogvar_wait_assign_value(t68, t13, 0, 0, 35, 0LL);
    goto LAB31;

LAB32:    xsi_set_current_line(62, ng0);
    t11 = (t0 + 4624);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    t17 = (t16 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t16);
    t23 = (t22 & t21);
    t26 = (t23 != 0);
    if (t26 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(65, ng0);

LAB39:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 35, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 35, 0LL);

LAB37:    goto LAB34;

LAB35:    xsi_set_current_line(62, ng0);

LAB38:    xsi_set_current_line(63, ng0);
    t18 = (t0 + 5264);
    t25 = (t18 + 56U);
    t31 = *((char **)t25);
    t36 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t36, t31, 0, 0, 35, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlog_unsigned_unary_minus(t13, 35, t4, 35);
    t5 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 35, 0LL);
    goto LAB37;

}

static void Cont_71_1(char *t0)
{
    char t3[16];
    char t4[8];
    char t7[8];
    char t23[8];
    char t31[8];
    char t74[16];
    char t78[16];
    char t90[16];
    char t91[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;

LAB0:    t1 = (t0 + 6592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4784);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    memcpy(t31, t7, 8);

LAB10:    memset(t4, 0, 8);
    t59 = (t31 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t31);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t59) != 0)
        goto LAB20;

LAB21:    t66 = (t4 + 4);
    t67 = *((unsigned int *)t4);
    t68 = *((unsigned int *)t66);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB22;

LAB23:    t79 = *((unsigned int *)t4);
    t80 = (~(t79));
    t81 = *((unsigned int *)t66);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t66) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t91, 16);

LAB30:    t92 = (t0 + 7272);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    xsi_vlog_bit_copy(t96, 0, t3, 0, 37);
    xsi_driver_vfirst_trans(t92, 0, 36);
    t97 = (t0 + 7176);
    *((int *)t97) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 4944);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t24) != 0)
        goto LAB13;

LAB14:    t32 = *((unsigned int *)t7);
    t33 = *((unsigned int *)t23);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = (t7 + 4);
    t36 = (t23 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB13:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB14;

LAB15:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t7 + 4);
    t46 = (t23 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (~(t47));
    t49 = *((unsigned int *)t7);
    t50 = (t49 & t48);
    t51 = *((unsigned int *)t46);
    t52 = (~(t51));
    t53 = *((unsigned int *)t23);
    t54 = (t53 & t52);
    t55 = (~(t50));
    t56 = (~(t54));
    t57 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t57 & t55);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t56);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t65 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB21;

LAB22:    t70 = (t0 + 3664);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng3)));
    xsi_vlog_signed_arith_rshift(t74, 37, t72, 35, t73, 32);
    t75 = (t0 + 3344);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    xsi_vlog_signed_add(t78, 37, t74, 37, t77, 36);
    goto LAB23;

LAB24:    t83 = (t0 + 3184);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t0 + 3344);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = ((char*)((ng4)));
    xsi_vlog_signed_arith_rshift(t90, 37, t88, 36, t89, 32);
    xsi_vlog_signed_add(t91, 37, t85, 37, t90, 37);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 37, t78, 37, t91, 37);
    goto LAB30;

LAB28:    memcpy(t3, t78, 16);
    goto LAB30;

}

static void Cont_75_2(char *t0)
{
    char t3[16];
    char t4[8];
    char t7[8];
    char t23[8];
    char t31[8];
    char t75[16];
    char t76[16];
    char t86[16];
    char t91[16];
    char t92[16];
    char t93[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;

LAB0:    t1 = (t0 + 6840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4784);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    memcpy(t31, t7, 8);

LAB10:    memset(t4, 0, 8);
    t59 = (t31 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t31);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t59) != 0)
        goto LAB20;

LAB21:    t66 = (t4 + 4);
    t67 = *((unsigned int *)t4);
    t68 = *((unsigned int *)t66);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB22;

LAB23:    t77 = *((unsigned int *)t4);
    t78 = (~(t77));
    t79 = *((unsigned int *)t66);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t66) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t93, 16);

LAB30:    t94 = (t0 + 7336);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    xsi_vlog_bit_copy(t98, 0, t3, 0, 37);
    xsi_driver_vfirst_trans(t94, 0, 36);
    t99 = (t0 + 7192);
    *((int *)t99) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 4944);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t24) != 0)
        goto LAB13;

LAB14:    t32 = *((unsigned int *)t7);
    t33 = *((unsigned int *)t23);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = (t7 + 4);
    t36 = (t23 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB13:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB14;

LAB15:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t7 + 4);
    t46 = (t23 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (~(t47));
    t49 = *((unsigned int *)t7);
    t50 = (t49 & t48);
    t51 = *((unsigned int *)t46);
    t52 = (~(t51));
    t53 = *((unsigned int *)t23);
    t54 = (t53 & t52);
    t55 = (~(t50));
    t56 = (~(t54));
    t57 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t57 & t55);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t56);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t65 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB21;

LAB22:    t70 = (t0 + 2304U);
    t71 = *((char **)t70);
    t70 = (t0 + 3664);
    t72 = (t70 + 56U);
    t73 = *((char **)t72);
    t74 = ((char*)((ng5)));
    xsi_vlog_signed_arith_rshift(t75, 37, t73, 35, t74, 32);
    xsi_vlog_signed_minus(t76, 37, t71, 37, t75, 37);
    goto LAB23;

LAB24:    t81 = (t0 + 2304U);
    t82 = *((char **)t81);
    t81 = (t0 + 3664);
    t83 = (t81 + 56U);
    t84 = *((char **)t83);
    t85 = ((char*)((ng6)));
    xsi_vlog_signed_arith_rshift(t86, 37, t84, 35, t85, 32);
    t87 = (t0 + 3344);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = ((char*)((ng7)));
    xsi_vlog_signed_arith_rshift(t91, 37, t89, 36, t90, 32);
    xsi_vlog_signed_add(t92, 37, t86, 37, t91, 37);
    xsi_vlog_signed_add(t93, 37, t82, 37, t92, 37);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 37, t76, 37, t93, 37);
    goto LAB30;

LAB28:    memcpy(t3, t76, 16);
    goto LAB30;

}


extern void work_m_00000000001886703825_1016493716_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Cont_71_1,(void *)Cont_75_2};
	xsi_register_didat("work_m_00000000001886703825_1016493716", "isim/fft32_TB_isim_beh.exe.sim/work/m_00000000001886703825_1016493716.didat");
	xsi_register_executes(pe);
}
