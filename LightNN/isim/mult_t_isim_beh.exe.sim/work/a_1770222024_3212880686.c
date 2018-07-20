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
static const char *ng0 = "/home/youknowwho/Desktop/LightNN/LightNN/shift_mult.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_1770222024_3212880686_p_0(char *t0)
{
    char t21[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t11 = xsi_signal_has_event(t1);
    if (t11 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5024);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t1 = xsi_get_transient_memory(65U);
    memset(t1, 0, 65U);
    t5 = t1;
    memset(t5, (unsigned char)2, 65U);
    t6 = (t0 + 5104);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 65U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(72, ng0);
    t1 = xsi_get_transient_memory(65U);
    memset(t1, 0, 65U);
    t2 = t1;
    memset(t2, (unsigned char)2, 65U);
    t5 = (t0 + 5168);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 65U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 5232);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(74, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)2, 6U);
    t5 = (t0 + 5296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 5360);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 5424);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2312U);
    t7 = *((char **)t2);
    t2 = (t0 + 8280U);
    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t8 = (t0 + 8248U);
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t2, t9, t8);
    if (t16 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 8296U);
    t5 = (t0 + 8572);
    t7 = (t21 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 5;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t22 = (5 - 0);
    t23 = (t22 * 1);
    t23 = (t23 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t23;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t21);
    if (t3 != 0)
        goto LAB16;

LAB17:
LAB14:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t1 = (t0 + 8296U);
    t22 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t5, t1);
    t24 = (t22 - 31);
    t23 = (t24 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t22);
    t25 = (1U * t23);
    t26 = (0 + t25);
    t6 = (t2 + t26);
    t3 = *((unsigned char *)t6);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 8296U);
    t5 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t21, t2, t1, 1);
    t6 = (t21 + 12U);
    t23 = *((unsigned int *)t6);
    t25 = (1U * t23);
    t3 = (6U != t25);
    if (t3 == 1)
        goto LAB33;

LAB34:    t7 = (t0 + 5488);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    memcpy(t17, t5, 6U);
    xsi_driver_first_trans_fast(t7);

LAB19:    goto LAB3;

LAB7:    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    t3 = t15;
    goto LAB9;

LAB10:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t4 = t13;
    goto LAB12;

LAB13:    xsi_set_current_line(79, ng0);
    t10 = (t0 + 5424);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 5104);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 65U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(82, ng0);
    t8 = (t0 + 5424);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 5104);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 65U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB14;

LAB18:    xsi_set_current_line(86, ng0);
    t7 = (t0 + 2632U);
    t8 = *((char **)t7);
    t11 = *((unsigned char *)t8);
    t12 = (t11 == (unsigned char)2);
    if (t12 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 5360);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB25:
LAB22:    goto LAB19;

LAB21:    xsi_set_current_line(87, ng0);
    t7 = (t0 + 5360);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5232);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB24:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t1 = (t0 + 8280U);
    t6 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t21, t5, t1, 1);
    t7 = (t21 + 12U);
    t23 = *((unsigned int *)t7);
    t25 = (1U * t23);
    t11 = (6U != t25);
    if (t11 == 1)
        goto LAB27;

LAB28:    t8 = (t0 + 5296);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 6U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 8296U);
    t5 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t21, t2, t1, 1);
    t6 = (t21 + 12U);
    t23 = *((unsigned int *)t6);
    t25 = (1U * t23);
    t3 = (6U != t25);
    if (t3 == 1)
        goto LAB29;

LAB30:    t7 = (t0 + 5488);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    memcpy(t17, t5, 6U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 5232);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 8328U);
    t5 = (t0 + 2792U);
    t6 = *((char **)t5);
    t5 = (t0 + 8312U);
    t7 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t21, t2, t1, t6, t5);
    t8 = (t21 + 12U);
    t23 = *((unsigned int *)t8);
    t25 = (1U * t23);
    t3 = (65U != t25);
    if (t3 == 1)
        goto LAB31;

LAB32:    t9 = (t0 + 5168);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 65U);
    xsi_driver_first_trans_fast(t9);
    goto LAB25;

LAB27:    xsi_size_not_matching(6U, t25, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(6U, t25, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(65U, t25, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(6U, t25, 0);
    goto LAB34;

}


extern void work_a_1770222024_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1770222024_3212880686_p_0};
	xsi_register_didat("work_a_1770222024_3212880686", "isim/mult_t_isim_beh.exe.sim/work/a_1770222024_3212880686.didat");
	xsi_register_executes(pe);
}
