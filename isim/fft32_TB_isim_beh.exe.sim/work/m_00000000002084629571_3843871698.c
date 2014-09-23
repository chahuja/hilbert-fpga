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
static const char *ng0 = "C:/Users/khagesh/fft32/mpuc541.v";
static int ng1[] = {2, 0};
static int ng2[] = {1, 0};
static int ng3[] = {3, 0};
static int ng4[] = {7, 0};
static int ng5[] = {11, 0};



static void Always_33_0(char *t0)
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
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 5704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 6520);
    *((int *)t2) = 1;
    t3 = (t0 + 5736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
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

LAB6:    xsi_set_current_line(35, ng0);

LAB9:    xsi_set_current_line(36, ng0);
    t11 = (t0 + 1344U);
    t12 = *((char **)t11);
    t11 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3824);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
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

LAB14:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3344);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng1)));
    xsi_vlog_signed_arith_rshift(t13, 36, t12, 35, t15, 32);
    xsi_vlog_signed_add(t14, 36, t4, 35, t13, 36);
    t16 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t16, t14, 0, 0, 36, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3344);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng2)));
    xsi_vlog_signed_arith_rshift(t13, 36, t12, 35, t15, 32);
    xsi_vlog_signed_add(t14, 36, t4, 35, t13, 36);
    t16 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t16, t14, 0, 0, 36, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 35, 0LL);

LAB12:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2304U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlog_signed_arith_rshift(t13, 37, t3, 37, t2, 32);
    t4 = (t0 + 4624);
    xsi_vlogvar_wait_assign_value(t4, t13, 0, 0, 35, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4784);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 35, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:    goto LAB8;

LAB10:    xsi_set_current_line(42, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t4 = (t0 + 1824U);
    t11 = *((char **)t4);
    t4 = ((char*)((ng1)));
    xsi_vlog_signed_arith_rshift(t13, 36, t11, 35, t4, 32);
    xsi_vlog_signed_add(t14, 36, t5, 35, t13, 36);
    t12 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 36, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = (t0 + 1824U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlog_signed_arith_rshift(t13, 36, t4, 35, t2, 32);
    xsi_vlog_signed_add(t14, 36, t3, 35, t13, 36);
    t5 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t5, t14, 0, 0, 36, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 35, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 35, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(56, ng0);
    t11 = (t0 + 4464);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(59, ng0);

LAB22:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 35, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 35, 0LL);

LAB20:    goto LAB17;

LAB18:    xsi_set_current_line(56, ng0);

LAB21:    xsi_set_current_line(57, ng0);
    t22 = (t0 + 4624);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 35, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlog_unsigned_unary_minus(t13, 35, t4, 35);
    t5 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 35, 0LL);
    goto LAB20;

}

static void Cont_65_1(char *t0)
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

LAB0:    t1 = (t0 + 5952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    xsi_vlog_signed_lshift(t6, 37, t4, 35, t5, 32);
    t7 = (t0 + 3024);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    xsi_vlog_signed_arith_rshift(t11, 37, t9, 36, t10, 32);
    xsi_vlog_signed_add(t12, 37, t6, 37, t11, 37);
    t13 = (t0 + 6632);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_bit_copy(t17, 0, t12, 0, 37);
    xsi_driver_vfirst_trans(t13, 0, 36);
    t18 = (t0 + 6536);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_68_2(char *t0)
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

LAB0:    t1 = (t0 + 6200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3504);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    xsi_vlog_signed_arith_rshift(t7, 37, t5, 35, t6, 32);
    xsi_vlog_signed_add(t8, 37, t3, 37, t7, 37);
    t9 = (t0 + 3184);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_signed_arith_rshift(t13, 37, t11, 36, t12, 32);
    xsi_vlog_signed_add(t14, 37, t8, 37, t13, 37);
    t15 = (t0 + 6696);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t14, 0, 37);
    xsi_driver_vfirst_trans(t15, 0, 36);
    t20 = (t0 + 6552);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000002084629571_3843871698_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Cont_65_1,(void *)Cont_68_2};
	xsi_register_didat("work_m_00000000002084629571_3843871698", "isim/fft32_TB_isim_beh.exe.sim/work/m_00000000002084629571_3843871698.didat");
	xsi_register_executes(pe);
}
