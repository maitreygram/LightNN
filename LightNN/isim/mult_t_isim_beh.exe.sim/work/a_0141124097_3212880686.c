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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/youknowwho/Desktop/LightNN/LightNN/shift_unit.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_0141124097_3212880686_p_0(char *t0)
{
    char t8[16];
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t15 = xsi_signal_has_event(t1);
    if (t15 == 1)
        goto LAB12;

LAB13:    t4 = (unsigned char)0;

LAB14:    if (t4 == 1)
        goto LAB9;

LAB10:    t3 = (unsigned char)0;

LAB11:    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 3784);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 6280);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t9 = ((IEEE_P_2592010699) + 4000);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 32;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (32 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t0 + 6080U);
    t6 = xsi_base_array_concat(t6, t8, t9, (char)97, t1, t10, (char)97, t7, t12, (char)101);
    t14 = (33U + 32U);
    t15 = (65U != t14);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 3864);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t6, 65U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(54, ng0);
    t1 = xsi_get_transient_memory(65U);
    memset(t1, 0, 65U);
    t2 = t1;
    memset(t2, (unsigned char)2, 65U);
    t5 = (t0 + 3928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 65U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 3992);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(56, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)2, 6U);
    t5 = (t0 + 4056);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_size_not_matching(65U, t14, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2152U);
    t7 = *((char **)t2);
    t2 = (t0 + 6128U);
    t9 = (t0 + 1352U);
    t11 = *((char **)t9);
    t9 = (t0 + 6096U);
    t25 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t2, t11, t9);
    if (t25 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t14 = (64 - 63);
    t26 = (t14 * 1U);
    t27 = (0 + t26);
    t1 = (t2 + t27);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t10 + 0U);
    t9 = (t7 + 0U);
    *((int *)t9) = 63;
    t9 = (t7 + 4U);
    *((int *)t9) = 0;
    t9 = (t7 + 8U);
    *((int *)t9) = -1;
    t13 = (0 - 63);
    t28 = (t13 * -1);
    t28 = (t28 + 1);
    t9 = (t7 + 12U);
    *((unsigned int *)t9) = t28;
    t5 = xsi_base_array_concat(t5, t8, t6, (char)97, t1, t10, (char)99, (unsigned char)2, (char)101);
    t28 = (64U + 1U);
    t3 = (65U != t28);
    if (t3 == 1)
        goto LAB18;

LAB19:    t9 = (t0 + 3864);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 65U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 6128U);
    t5 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t8, t2, t1, 1);
    t6 = (t8 + 12U);
    t14 = *((unsigned int *)t6);
    t26 = (1U * t14);
    t3 = (6U != t26);
    if (t3 == 1)
        goto LAB20;

LAB21:    t7 = (t0 + 4056);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t5, 6U);
    xsi_driver_first_trans_fast(t7);

LAB16:    goto LAB3;

LAB9:    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t23 = *((unsigned char *)t6);
    t24 = (t23 == (unsigned char)3);
    t3 = t24;
    goto LAB11;

LAB12:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t21 = *((unsigned char *)t5);
    t22 = (t21 == (unsigned char)3);
    t4 = t22;
    goto LAB14;

LAB15:    xsi_set_current_line(59, ng0);
    t12 = (t0 + 2312U);
    t16 = *((char **)t12);
    t12 = (t0 + 3928);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 65U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3992);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB18:    xsi_size_not_matching(65U, t28, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(6U, t26, 0);
    goto LAB21;

}


extern void work_a_0141124097_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0141124097_3212880686_p_0};
	xsi_register_didat("work_a_0141124097_3212880686", "isim/mult_t_isim_beh.exe.sim/work/a_0141124097_3212880686.didat");
	xsi_register_executes(pe);
}
