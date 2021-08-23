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
static const char *ng0 = "C:/Users/gusta/Desktop/2021_1/DLP/Prova 1/Prova 1/SSI/master.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0626639344_3212880686_p_0(char *t0)
{
    char t19[16];
    char t20[16];
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
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t21;
    char *t22;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4112);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(29, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 4192);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 7057);
    t5 = (t0 + 4256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 4320);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 4384);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(36, ng0);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t11 = *((unsigned char *)t7);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 4320);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB7;

LAB9:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t15 = (7 - 7);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 4448);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t16 = (7 - 6);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t6 = ((IEEE_P_1242562249) + 3000);
    t7 = (t20 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 6;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t15 = (0 - 6);
    t21 = (t15 * -1);
    t21 = (t21 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t21;
    t5 = xsi_base_array_concat(t5, t19, t6, (char)97, t1, t20, (char)99, (unsigned char)2, (char)101);
    t21 = (7U + 1U);
    t3 = (8U != t21);
    if (t3 == 1)
        goto LAB14;

LAB15:    t8 = (t0 + 4192);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t16 = (7 - 6);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t3 = *((unsigned char *)t6);
    t7 = ((IEEE_P_1242562249) + 3000);
    t8 = (t20 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 6;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t15 = (0 - 6);
    t21 = (t15 * -1);
    t21 = (t21 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t21;
    t5 = xsi_base_array_concat(t5, t19, t7, (char)97, t1, t20, (char)99, t3, (char)101);
    t21 = (7U + 1U);
    t4 = (8U != t21);
    if (t4 == 1)
        goto LAB16;

LAB17:    t9 = (t0 + 4512);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t22 = *((char **)t14);
    memcpy(t22, t5, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 4384);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7000U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t2, t1, 1);
    t6 = (t19 + 12U);
    t16 = *((unsigned int *)t6);
    t17 = (1U * t16);
    t3 = (4U != t17);
    if (t3 == 1)
        goto LAB18;

LAB19:    t7 = (t0 + 4256);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7000U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t2, t1, 1);
    t6 = (t0 + 7061);
    t8 = (t20 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t5, t19, t6, t20);
    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 4320);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB21:    goto LAB7;

LAB10:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 4384);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 4320);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB11:    xsi_set_current_line(37, ng0);
    t6 = (t0 + 1672U);
    t8 = *((char **)t6);
    t6 = (t0 + 4192);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 4320);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_size_not_matching(8U, t21, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(8U, t21, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(4U, t17, 0);
    goto LAB19;

LAB20:    xsi_set_current_line(49, ng0);
    t9 = (t0 + 4320);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t22 = *((char **)t14);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);
    goto LAB21;

}


extern void work_a_0626639344_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0626639344_3212880686_p_0};
	xsi_register_didat("work_a_0626639344_3212880686", "isim/test_isim_beh.exe.sim/work/a_0626639344_3212880686.didat");
	xsi_register_executes(pe);
}
