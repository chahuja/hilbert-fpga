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
static const char *ng0 = "C:/Users/khagesh/fft32/mpuc707.v";
static int ng1[] = {2, 0};
static int ng2[] = {4, 0};
static int ng3[] = {1, 0};
static int ng4[] = {12, 0};



static void Always_34_0(char *t0)
{
    char t13[16];
    char t14[16];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 5544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 6360);
    *((int *)t2) = 1;
    t3 = (t0 + 5576);
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
    t11 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3824);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
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

LAB11:    xsi_set_current_line(48, ng0);

LAB18:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3344);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t21 = ((char*)((ng1)));
    xsi_vlog_signed_lshift(t13, 37, t12, 35, t21, 32);
    xsi_vlog_signed_add(t14, 37, t4, 35, t13, 37);
    t23 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t23, t14, 0, 0, 37, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 16);
    t5 = (t4 + 8);
    t8 = *((unsigned int *)t5);
    t9 = (t8 & 4U);
    t6 = t9;
    t11 = (t4 + 12);
    t10 = *((unsigned int *)t11);
    t15 = (t10 & 4U);
    t7 = t15;
    t16 = (t9 != 0);
    if (t16 == 1)
        goto LAB19;

LAB20:    t18 = (t15 != 0);
    if (t18 == 1)
        goto LAB21;

LAB22:    t23 = (t13 + 8);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t20 & 15U);
    t24 = (t13 + 12);
    t22 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t22 & 15U);
    t25 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t25, t13, 0, 0, 36, 0LL);

LAB12:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2304U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlog_signed_arith_rshift(t13, 39, t3, 39, t2, 32);
    t4 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t4, t13, 0, 0, 35, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4624);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 35, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB23;

LAB24:
LAB25:    goto LAB8;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t4 = (t0 + 1824U);
    t11 = *((char **)t4);
    t4 = ((char*)((ng1)));
    xsi_vlog_signed_lshift(t13, 37, t11, 35, t4, 32);
    xsi_vlog_signed_add(t14, 37, t5, 35, t13, 37);
    t12 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 37, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memcpy(t13, t3, 16);
    t2 = (t3 + 8);
    t8 = *((unsigned int *)t2);
    t9 = (t8 & 4U);
    t6 = t9;
    t4 = (t3 + 12);
    t10 = *((unsigned int *)t4);
    t15 = (t10 & 4U);
    t7 = t15;
    t16 = (t9 != 0);
    if (t16 == 1)
        goto LAB14;

LAB15:    t18 = (t15 != 0);
    if (t18 == 1)
        goto LAB16;

LAB17:    t12 = (t13 + 8);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 15U);
    t21 = (t13 + 12);
    t22 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t22 & 15U);
    t23 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t23, t13, 0, 0, 36, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 35, 0LL);
    goto LAB12;

LAB14:    t5 = (t13 + 8);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 | 4294967288U);
    goto LAB15;

LAB16:    t11 = (t13 + 12);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 | 4294967288U);
    goto LAB17;

LAB19:    t12 = (t13 + 8);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 | 4294967288U);
    goto LAB20;

LAB21:    t21 = (t13 + 12);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t19 | 4294967288U);
    goto LAB22;

LAB23:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 4304);
    t12 = (t11 + 56U);
    t21 = *((char **)t12);
    t23 = (t21 + 4);
    t15 = *((unsigned int *)t23);
    t16 = (~(t15));
    t17 = *((unsigned int *)t21);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(58, ng0);

LAB30:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 35, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 35, 0LL);

LAB28:    goto LAB25;

LAB26:    xsi_set_current_line(55, ng0);

LAB29:    xsi_set_current_line(56, ng0);
    t24 = (t0 + 4464);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 35, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlog_unsigned_unary_minus(t13, 35, t4, 35);
    t5 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 35, 0LL);
    goto LAB28;

}

static void Cont_64_1(char *t0)
{
    char t6[16];
    char t11[16];
    char t12[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    xsi_vlog_signed_lshift(t6, 38, t4, 37, t5, 32);
    t7 = (t0 + 3024);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    xsi_vlog_signed_arith_rshift(t11, 38, t9, 37, t10, 32);
    xsi_vlog_signed_add(t12, 38, t6, 38, t11, 38);
    t13 = (t0 + 6472);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t12, 0, 38);
    xsi_driver_vfirst_trans(t13, 0, 37);
    t18 = (t0 + 6376);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_66_2(char *t0)
{
    char t7[16];
    char t8[16];
    char t13[16];
    char t14[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 6040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3184);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    xsi_vlog_signed_arith_rshift(t7, 39, t5, 36, t6, 32);
    xsi_vlog_signed_add(t8, 39, t3, 38, t7, 39);
    t9 = (t0 + 3024);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_signed_arith_rshift(t13, 39, t11, 37, t12, 32);
    xsi_vlog_signed_add(t14, 39, t8, 39, t13, 39);
    t15 = (t0 + 6536);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t14, 0, 39);
    xsi_driver_vfirst_trans(t15, 0, 38);
    t20 = (t0 + 6392);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000002394374992_3226596986_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Cont_64_1,(void *)Cont_66_2};
	xsi_register_didat("work_m_00000000002394374992_3226596986", "isim/hilbert_isim_beh.exe.sim/work/m_00000000002394374992_3226596986.didat");
	xsi_register_executes(pe);
}
