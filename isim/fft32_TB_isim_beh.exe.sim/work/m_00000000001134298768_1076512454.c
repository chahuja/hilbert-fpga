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
static const char *ng0 = "C:/Users/khagesh/fft32/odd_RAM.v";
static int ng1[] = {16, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};



static void Always_21_0(char *t0)
{
    char t13[8];
    char t39[8];
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
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;

LAB0:    t1 = (t0 + 4264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 5080);
    *((int *)t2) = 1;
    t3 = (t0 + 4296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(22, ng0);
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

LAB7:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB37;

LAB38:
LAB39:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(22, ng0);

LAB9:    xsi_set_current_line(23, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 5, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(26, ng0);

LAB13:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 3344);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB17;

LAB14:    if (t25 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB17:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3344);
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
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB25;

LAB22:    if (t20 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t13) = 1;

LAB25:    t15 = (t13 + 4);
    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3344);
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
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB32;

LAB29:    if (t20 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t13) = 1;

LAB32:    t15 = (t13 + 4);
    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB33;

LAB34:
LAB35:
LAB28:
LAB20:    goto LAB12;

LAB16:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(27, ng0);

LAB21:    xsi_set_current_line(28, ng0);
    t35 = ((char*)((ng3)));
    t36 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 2, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB20;

LAB24:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(32, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    goto LAB28;

LAB31:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(33, ng0);

LAB36:    xsi_set_current_line(34, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB35;

LAB37:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 3184);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB41;

LAB40:    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB41;

LAB44:    if (*((unsigned int *)t11) < *((unsigned int *)t12))
        goto LAB42;

LAB43:    t29 = (t13 + 4);
    t16 = *((unsigned int *)t29);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB45;

LAB46:
LAB47:    goto LAB39;

LAB41:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB43;

LAB42:    *((unsigned int *)t13) = 1;
    goto LAB43;

LAB45:    xsi_set_current_line(39, ng0);

LAB48:    xsi_set_current_line(40, ng0);
    t35 = (t0 + 3184);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng3)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 32, t37, 5, t38, 32);
    t40 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 5, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t0 + 2864);
    t4 = (t0 + 2864);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2864);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t28 = (t0 + 3184);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t13, t39, t11, t15, 2, 1, t35, 5, 2);
    t36 = (t13 + 4);
    t6 = *((unsigned int *)t36);
    t41 = (!(t6));
    t37 = (t39 + 4);
    t7 = *((unsigned int *)t37);
    t42 = (!(t7));
    t43 = (t41 && t42);
    if (t43 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3024);
    t4 = (t0 + 3024);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3024);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t28 = (t0 + 3184);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t13, t39, t11, t15, 2, 1, t35, 5, 2);
    t36 = (t13 + 4);
    t6 = *((unsigned int *)t36);
    t41 = (!(t6));
    t37 = (t39 + 4);
    t7 = *((unsigned int *)t37);
    t42 = (!(t7));
    t43 = (t41 && t42);
    if (t43 == 1)
        goto LAB51;

LAB52:    goto LAB47;

LAB49:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t39);
    t44 = (t8 - t9);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t39), t45, 0LL);
    goto LAB50;

LAB51:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t39);
    t44 = (t8 - t9);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t39), t45, 0LL);
    goto LAB52;

}

static void Cont_47_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2864);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2864);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1824U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 4, 2);
    t12 = (t0 + 5192);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5096);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_48_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3024);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3024);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1824U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 4, 2);
    t12 = (t0 + 5256);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5112);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001134298768_1076512454_init()
{
	static char *pe[] = {(void *)Always_21_0,(void *)Cont_47_1,(void *)Cont_48_2};
	xsi_register_didat("work_m_00000000001134298768_1076512454", "isim/fft32_TB_isim_beh.exe.sim/work/m_00000000001134298768_1076512454.didat");
	xsi_register_executes(pe);
}
