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
static const char *ng0 = "C:/Users/khagesh/fft32/fft32.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {15, 0};



static void Cont_30_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 6664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4944);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 15U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = (t0 + 8104);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 15U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 3);
    t27 = (t0 + 7976);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Initial_32_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 6, 0LL);

LAB1:    return;
}

static void Cont_46_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 7160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8168);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 7992);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_47_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 8008);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_49_4(char *t0)
{
    char t13[8];
    char t31[8];
    char t32[8];
    char t33[8];
    char t71[8];
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
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    int t41;
    int t42;
    int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;

LAB0:    t1 = (t0 + 7656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 8024);
    *((int *)t2) = 1;
    t3 = (t0 + 7688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4224U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 6, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(54, ng0);

LAB13:    xsi_set_current_line(55, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(58, ng0);

LAB17:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4784);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB21;

LAB18:    if (t18 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t13) = 1;

LAB21:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t13) = 1;

LAB33:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB24:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB41;

LAB38:    if (t18 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t13) = 1;

LAB41:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB46;

LAB45:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB47;

LAB48:    t22 = (t13 + 4);
    t6 = *((unsigned int *)t22);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB56;

LAB53:    if (t18 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t13) = 1;

LAB56:    memset(t31, 0, 8);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t22) != 0)
        goto LAB59;

LAB60:    t29 = (t31 + 4);
    t50 = *((unsigned int *)t31);
    t51 = *((unsigned int *)t29);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB61;

LAB62:    memcpy(t71, t31, 8);

LAB63:    t97 = (t71 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t71);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB75;

LAB76:
LAB77:    goto LAB16;

LAB20:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(60, ng0);

LAB25:    xsi_set_current_line(61, ng0);
    t28 = (t0 + 3584U);
    t29 = *((char **)t28);
    t28 = (t0 + 3264U);
    t30 = *((char **)t28);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t29, 32, t30, 32);
    t28 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t28, t31, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3744U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 5744);
    xsi_vlogvar_wait_assign_value(t2, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3584U);
    t3 = *((char **)t2);
    t2 = (t0 + 3264U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 5104);
    t5 = (t0 + 5104);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = (t0 + 5104);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 4944);
    t30 = (t29 + 56U);
    t34 = *((char **)t30);
    memset(t33, 0, 8);
    t35 = (t33 + 4);
    t36 = (t34 + 4);
    t6 = *((unsigned int *)t34);
    t7 = (t6 >> 0);
    *((unsigned int *)t33) = t7;
    t8 = *((unsigned int *)t36);
    t9 = (t8 >> 0);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t10 & 15U);
    t14 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t14 & 15U);
    xsi_vlog_generic_convert_array_indices(t31, t32, t12, t28, 2, 1, t33, 4, 2);
    t37 = (t31 + 4);
    t15 = *((unsigned int *)t37);
    t38 = (!(t15));
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t39);
    t40 = (!(t16));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3744U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 5264);
    t5 = (t0 + 5264);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = (t0 + 5264);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 4944);
    t30 = (t29 + 56U);
    t34 = *((char **)t30);
    memset(t33, 0, 8);
    t35 = (t33 + 4);
    t36 = (t34 + 4);
    t6 = *((unsigned int *)t34);
    t7 = (t6 >> 0);
    *((unsigned int *)t33) = t7;
    t8 = *((unsigned int *)t36);
    t9 = (t8 >> 0);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t10 & 15U);
    t14 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t14 & 15U);
    xsi_vlog_generic_convert_array_indices(t31, t32, t12, t28, 2, 1, t33, 4, 2);
    t37 = (t31 + 4);
    t15 = *((unsigned int *)t37);
    t38 = (!(t15));
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t39);
    t40 = (!(t16));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB28;

LAB29:    goto LAB24;

LAB26:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t32);
    t42 = (t17 - t18);
    t43 = (t42 + 1);
    xsi_vlogvar_wait_assign_value(t2, t13, 0, *((unsigned int *)t32), t43, 0LL);
    goto LAB27;

LAB28:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t32);
    t42 = (t17 - t18);
    t43 = (t42 + 1);
    xsi_vlogvar_wait_assign_value(t2, t13, 0, *((unsigned int *)t32), t43, 0LL);
    goto LAB29;

LAB32:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(66, ng0);

LAB37:    xsi_set_current_line(67, ng0);
    t28 = (t0 + 5104);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t34 = (t0 + 5104);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 5104);
    t39 = (t37 + 64U);
    t44 = *((char **)t39);
    t45 = (t0 + 4944);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t32, 0, 8);
    t48 = (t32 + 4);
    t49 = (t47 + 4);
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 0);
    *((unsigned int *)t32) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & 15U);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 & 15U);
    xsi_vlog_generic_get_array_select_value(t31, 32, t30, t36, t44, 2, 1, t32, 4, 2);
    t56 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t56, t31, 0, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5264);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = (t0 + 5264);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 4944);
    t30 = (t29 + 56U);
    t34 = *((char **)t30);
    memset(t31, 0, 8);
    t35 = (t31 + 4);
    t36 = (t34 + 4);
    t6 = *((unsigned int *)t34);
    t7 = (t6 >> 0);
    *((unsigned int *)t31) = t7;
    t8 = *((unsigned int *)t36);
    t9 = (t8 >> 0);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t10 & 15U);
    t14 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t14 & 15U);
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t28, 2, 1, t31, 4, 2);
    t37 = (t0 + 5744);
    xsi_vlogvar_wait_assign_value(t37, t13, 0, 0, 32, 0LL);
    goto LAB36;

LAB40:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(71, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    goto LAB44;

LAB46:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB48;

LAB47:    *((unsigned int *)t13) = 1;
    goto LAB48;

LAB50:    xsi_set_current_line(73, ng0);
    t28 = (t0 + 4944);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t34 = ((char*)((ng3)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t30, 6, t34, 32);
    t35 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t35, t31, 0, 0, 6, 0LL);
    goto LAB52;

LAB55:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t31) = 1;
    goto LAB60;

LAB59:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB60;

LAB61:    t30 = (t0 + 5424);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    memset(t32, 0, 8);
    t37 = (t35 + 4);
    t39 = (t36 + 4);
    t53 = *((unsigned int *)t35);
    t54 = *((unsigned int *)t36);
    t55 = (t53 ^ t54);
    t57 = *((unsigned int *)t37);
    t58 = *((unsigned int *)t39);
    t59 = (t57 ^ t58);
    t60 = (t55 | t59);
    t61 = *((unsigned int *)t37);
    t62 = *((unsigned int *)t39);
    t63 = (t61 | t62);
    t64 = (~(t63));
    t65 = (t60 & t64);
    if (t65 != 0)
        goto LAB67;

LAB64:    if (t63 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t32) = 1;

LAB67:    memset(t33, 0, 8);
    t45 = (t32 + 4);
    t66 = *((unsigned int *)t45);
    t67 = (~(t66));
    t68 = *((unsigned int *)t32);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t45) != 0)
        goto LAB70;

LAB71:    t72 = *((unsigned int *)t31);
    t73 = *((unsigned int *)t33);
    t74 = (t72 & t73);
    *((unsigned int *)t71) = t74;
    t47 = (t31 + 4);
    t48 = (t33 + 4);
    t49 = (t71 + 4);
    t75 = *((unsigned int *)t47);
    t76 = *((unsigned int *)t48);
    t77 = (t75 | t76);
    *((unsigned int *)t49) = t77;
    t78 = *((unsigned int *)t49);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB63;

LAB66:    t44 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t33) = 1;
    goto LAB71;

LAB70:    t46 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB71;

LAB72:    t80 = *((unsigned int *)t71);
    t81 = *((unsigned int *)t49);
    *((unsigned int *)t71) = (t80 | t81);
    t56 = (t31 + 4);
    t82 = (t33 + 4);
    t83 = *((unsigned int *)t31);
    t84 = (~(t83));
    t85 = *((unsigned int *)t56);
    t86 = (~(t85));
    t87 = *((unsigned int *)t33);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (~(t89));
    t38 = (t84 & t86);
    t40 = (t88 & t90);
    t91 = (~(t38));
    t92 = (~(t40));
    t93 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t93 & t91);
    t94 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t94 & t92);
    t95 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t95 & t91);
    t96 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t96 & t92);
    goto LAB74;

LAB75:    xsi_set_current_line(75, ng0);
    t103 = ((char*)((ng3)));
    t104 = (t0 + 4784);
    xsi_vlogvar_wait_assign_value(t104, t103, 0, 0, 1, 0LL);
    goto LAB77;

}


extern void work_m_00000000001988889891_1240071104_init()
{
	static char *pe[] = {(void *)Cont_30_0,(void *)Initial_32_1,(void *)Cont_46_2,(void *)Cont_47_3,(void *)Always_49_4};
	xsi_register_didat("work_m_00000000001988889891_1240071104", "isim/fft32_TB_isim_beh.exe.sim/work/m_00000000001988889891_1240071104.didat");
	xsi_register_executes(pe);
}
