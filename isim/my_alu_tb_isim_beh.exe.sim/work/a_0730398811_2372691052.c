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
static const char *ng0 = "/home/csmajs/svill017/BCD_alu/my_alu_tb.vhd";



static void work_a_0730398811_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3232);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3232);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0730398811_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned int t11;
    unsigned char t12;

LAB0:    t1 = (t0 + 3672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6888);
    t5 = (t0 + 4120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 6892);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 6924);
    t5 = (t0 + 4248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(105, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 6956);
    t10 = 1;
    if (36U == 36U)
        goto LAB18;

LAB19:    t10 = 0;

LAB20:    if (t10 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)3);
    if (t12 == 0)
        goto LAB24;

LAB25:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB26;

LAB27:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB28;

LAB29:    xsi_set_current_line(111, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t8 = (t0 + 6992);
    xsi_report(t8, 24U, (unsigned char)1);
    goto LAB17;

LAB18:    t11 = 0;

LAB21:    if (t11 < 36U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB19;

LAB23:    t11 = (t11 + 1);
    goto LAB21;

LAB24:    t2 = (t0 + 7016);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB25;

LAB26:    t2 = (t0 + 7042);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB27;

LAB28:    t2 = (t0 + 7068);
    xsi_report(t2, 22U, (unsigned char)1);
    goto LAB29;

LAB30:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 7090);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 7122);
    t5 = (t0 + 4248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(115, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

LAB34:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 7154);
    t10 = 1;
    if (36U == 36U)
        goto LAB40;

LAB41:    t10 = 0;

LAB42:    if (t10 == 0)
        goto LAB38;

LAB39:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB46;

LAB47:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB48;

LAB49:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)3);
    if (t12 == 0)
        goto LAB50;

LAB51:    xsi_set_current_line(121, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    t8 = (t0 + 7190);
    xsi_report(t8, 24U, (unsigned char)1);
    goto LAB39;

LAB40:    t11 = 0;

LAB43:    if (t11 < 36U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB41;

LAB45:    t11 = (t11 + 1);
    goto LAB43;

LAB46:    t2 = (t0 + 7214);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB47;

LAB48:    t2 = (t0 + 7240);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB49;

LAB50:    t2 = (t0 + 7266);
    xsi_report(t2, 22U, (unsigned char)1);
    goto LAB51;

LAB52:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 7288);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 7320);
    t5 = (t0 + 4248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(125, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 7352);
    t10 = 1;
    if (36U == 36U)
        goto LAB62;

LAB63:    t10 = 0;

LAB64:    if (t10 == 0)
        goto LAB60;

LAB61:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB68;

LAB69:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB70;

LAB71:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB72;

LAB73:    xsi_set_current_line(131, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB76:    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB60:    t8 = (t0 + 7388);
    xsi_report(t8, 24U, (unsigned char)1);
    goto LAB61;

LAB62:    t11 = 0;

LAB65:    if (t11 < 36U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB63;

LAB67:    t11 = (t11 + 1);
    goto LAB65;

LAB68:    t2 = (t0 + 7412);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB69;

LAB70:    t2 = (t0 + 7438);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB71;

LAB72:    t2 = (t0 + 7464);
    xsi_report(t2, 22U, (unsigned char)1);
    goto LAB73;

LAB74:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 7486);
    t5 = (t0 + 4120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 7490);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 7522);
    t5 = (t0 + 4248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(136, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB80:    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB75:    goto LAB74;

LAB77:    goto LAB75;

LAB78:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 7554);
    t10 = 1;
    if (36U == 36U)
        goto LAB84;

LAB85:    t10 = 0;

LAB86:    if (t10 == 0)
        goto LAB82;

LAB83:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB90;

LAB91:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB94;

LAB95:    xsi_set_current_line(142, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB98:    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB79:    goto LAB78;

LAB81:    goto LAB79;

LAB82:    t8 = (t0 + 7590);
    xsi_report(t8, 24U, (unsigned char)1);
    goto LAB83;

LAB84:    t11 = 0;

LAB87:    if (t11 < 36U)
        goto LAB88;
    else
        goto LAB86;

LAB88:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB85;

LAB89:    t11 = (t11 + 1);
    goto LAB87;

LAB90:    t2 = (t0 + 7614);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB91;

LAB92:    t2 = (t0 + 7640);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB93;

LAB94:    t2 = (t0 + 7666);
    xsi_report(t2, 22U, (unsigned char)1);
    goto LAB95;

LAB96:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 7688);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 7720);
    t5 = (t0 + 4248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(146, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB97:    goto LAB96;

LAB99:    goto LAB97;

LAB100:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 7752);
    t10 = 1;
    if (36U == 36U)
        goto LAB106;

LAB107:    t10 = 0;

LAB108:    if (t10 == 0)
        goto LAB104;

LAB105:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB112;

LAB113:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB114;

LAB115:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)3);
    if (t12 == 0)
        goto LAB116;

LAB117:    xsi_set_current_line(152, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB120:    *((char **)t1) = &&LAB121;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    t8 = (t0 + 7788);
    xsi_report(t8, 24U, (unsigned char)1);
    goto LAB105;

LAB106:    t11 = 0;

LAB109:    if (t11 < 36U)
        goto LAB110;
    else
        goto LAB108;

LAB110:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB107;

LAB111:    t11 = (t11 + 1);
    goto LAB109;

LAB112:    t2 = (t0 + 7812);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB113;

LAB114:    t2 = (t0 + 7838);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB115;

LAB116:    t2 = (t0 + 7864);
    xsi_report(t2, 22U, (unsigned char)1);
    goto LAB117;

LAB118:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 7886);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 7918);
    t5 = (t0 + 4248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(156, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB124:    *((char **)t1) = &&LAB125;
    goto LAB1;

LAB119:    goto LAB118;

LAB121:    goto LAB119;

LAB122:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 7950);
    t10 = 1;
    if (36U == 36U)
        goto LAB128;

LAB129:    t10 = 0;

LAB130:    if (t10 == 0)
        goto LAB126;

LAB127:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB134;

LAB135:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB136;

LAB137:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB138;

LAB139:    xsi_set_current_line(162, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB142:    *((char **)t1) = &&LAB143;
    goto LAB1;

LAB123:    goto LAB122;

LAB125:    goto LAB123;

LAB126:    t8 = (t0 + 7986);
    xsi_report(t8, 24U, (unsigned char)1);
    goto LAB127;

LAB128:    t11 = 0;

LAB131:    if (t11 < 36U)
        goto LAB132;
    else
        goto LAB130;

LAB132:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB129;

LAB133:    t11 = (t11 + 1);
    goto LAB131;

LAB134:    t2 = (t0 + 8010);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB135;

LAB136:    t2 = (t0 + 8036);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB137;

LAB138:    t2 = (t0 + 8062);
    xsi_report(t2, 22U, (unsigned char)1);
    goto LAB139;

LAB140:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 8084);
    t5 = (t0 + 4120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 8088);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 8120);
    t5 = (t0 + 4248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(167, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB146:    *((char **)t1) = &&LAB147;
    goto LAB1;

LAB141:    goto LAB140;

LAB143:    goto LAB141;

LAB144:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 8152);
    t10 = 1;
    if (36U == 36U)
        goto LAB150;

LAB151:    t10 = 0;

LAB152:    if (t10 == 0)
        goto LAB148;

LAB149:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB156;

LAB157:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB158;

LAB159:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB160;

LAB161:    xsi_set_current_line(173, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB164:    *((char **)t1) = &&LAB165;
    goto LAB1;

LAB145:    goto LAB144;

LAB147:    goto LAB145;

LAB148:    t8 = (t0 + 8188);
    xsi_report(t8, 24U, (unsigned char)1);
    goto LAB149;

LAB150:    t11 = 0;

LAB153:    if (t11 < 36U)
        goto LAB154;
    else
        goto LAB152;

LAB154:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB151;

LAB155:    t11 = (t11 + 1);
    goto LAB153;

LAB156:    t2 = (t0 + 8212);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB157;

LAB158:    t2 = (t0 + 8238);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB159;

LAB160:    t2 = (t0 + 8264);
    xsi_report(t2, 22U, (unsigned char)1);
    goto LAB161;

LAB162:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 8286);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 8318);
    t5 = (t0 + 4248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(177, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB168:    *((char **)t1) = &&LAB169;
    goto LAB1;

LAB163:    goto LAB162;

LAB165:    goto LAB163;

LAB166:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 8350);
    t10 = 1;
    if (36U == 36U)
        goto LAB172;

LAB173:    t10 = 0;

LAB174:    if (t10 == 0)
        goto LAB170;

LAB171:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB178;

LAB179:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB180;

LAB181:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)3);
    if (t12 == 0)
        goto LAB182;

LAB183:    xsi_set_current_line(183, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB186:    *((char **)t1) = &&LAB187;
    goto LAB1;

LAB167:    goto LAB166;

LAB169:    goto LAB167;

LAB170:    t8 = (t0 + 8386);
    xsi_report(t8, 24U, (unsigned char)1);
    goto LAB171;

LAB172:    t11 = 0;

LAB175:    if (t11 < 36U)
        goto LAB176;
    else
        goto LAB174;

LAB176:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB173;

LAB177:    t11 = (t11 + 1);
    goto LAB175;

LAB178:    t2 = (t0 + 8410);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB179;

LAB180:    t2 = (t0 + 8436);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB181;

LAB182:    t2 = (t0 + 8462);
    xsi_report(t2, 22U, (unsigned char)1);
    goto LAB183;

LAB184:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 8484);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 8516);
    t5 = (t0 + 4248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(187, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB190:    *((char **)t1) = &&LAB191;
    goto LAB1;

LAB185:    goto LAB184;

LAB187:    goto LAB185;

LAB188:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB192;

LAB193:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)3);
    if (t12 == 0)
        goto LAB194;

LAB195:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB196;

LAB197:    xsi_set_current_line(194, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB200:    *((char **)t1) = &&LAB201;
    goto LAB1;

LAB189:    goto LAB188;

LAB191:    goto LAB189;

LAB192:    t2 = (t0 + 8548);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB193;

LAB194:    t2 = (t0 + 8574);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB195;

LAB196:    t2 = (t0 + 8600);
    xsi_report(t2, 22U, (unsigned char)1);
    goto LAB197;

LAB198:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 8622);
    t5 = (t0 + 4120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 8626);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 8658);
    t5 = (t0 + 4248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(199, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB204:    *((char **)t1) = &&LAB205;
    goto LAB1;

LAB199:    goto LAB198;

LAB201:    goto LAB199;

LAB202:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 8690);
    t10 = 1;
    if (36U == 36U)
        goto LAB208;

LAB209:    t10 = 0;

LAB210:    if (t10 == 0)
        goto LAB206;

LAB207:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB214;

LAB215:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB216;

LAB217:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB218;

LAB219:    xsi_set_current_line(205, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB222:    *((char **)t1) = &&LAB223;
    goto LAB1;

LAB203:    goto LAB202;

LAB205:    goto LAB203;

LAB206:    t8 = (t0 + 8726);
    xsi_report(t8, 25U, (unsigned char)1);
    goto LAB207;

LAB208:    t11 = 0;

LAB211:    if (t11 < 36U)
        goto LAB212;
    else
        goto LAB210;

LAB212:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB209;

LAB213:    t11 = (t11 + 1);
    goto LAB211;

LAB214:    t2 = (t0 + 8751);
    xsi_report(t2, 27U, (unsigned char)1);
    goto LAB215;

LAB216:    t2 = (t0 + 8778);
    xsi_report(t2, 27U, (unsigned char)1);
    goto LAB217;

LAB218:    t2 = (t0 + 8805);
    xsi_report(t2, 23U, (unsigned char)1);
    goto LAB219;

LAB220:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 8828);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 8860);
    t5 = (t0 + 4248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(209, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB226:    *((char **)t1) = &&LAB227;
    goto LAB1;

LAB221:    goto LAB220;

LAB223:    goto LAB221;

LAB224:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 8892);
    t10 = 1;
    if (36U == 36U)
        goto LAB230;

LAB231:    t10 = 0;

LAB232:    if (t10 == 0)
        goto LAB228;

LAB229:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB236;

LAB237:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB238;

LAB239:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)3);
    if (t12 == 0)
        goto LAB240;

LAB241:    xsi_set_current_line(215, ng0);
    t3 = (30 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB244:    *((char **)t1) = &&LAB245;
    goto LAB1;

LAB225:    goto LAB224;

LAB227:    goto LAB225;

LAB228:    t8 = (t0 + 8928);
    xsi_report(t8, 25U, (unsigned char)1);
    goto LAB229;

LAB230:    t11 = 0;

LAB233:    if (t11 < 36U)
        goto LAB234;
    else
        goto LAB232;

LAB234:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB231;

LAB235:    t11 = (t11 + 1);
    goto LAB233;

LAB236:    t2 = (t0 + 8953);
    xsi_report(t2, 27U, (unsigned char)1);
    goto LAB237;

LAB238:    t2 = (t0 + 8980);
    xsi_report(t2, 27U, (unsigned char)1);
    goto LAB239;

LAB240:    t2 = (t0 + 9007);
    xsi_report(t2, 23U, (unsigned char)1);
    goto LAB241;

LAB242:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 9030);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 9062);
    t5 = (t0 + 4248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(219, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3480);
    xsi_process_wait(t2, t3);

LAB248:    *((char **)t1) = &&LAB249;
    goto LAB1;

LAB243:    goto LAB242;

LAB245:    goto LAB243;

LAB246:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 9094);
    t10 = 1;
    if (36U == 36U)
        goto LAB252;

LAB253:    t10 = 0;

LAB254:    if (t10 == 0)
        goto LAB250;

LAB251:    xsi_set_current_line(221, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB258;

LAB259:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB260;

LAB261:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB262;

LAB263:    xsi_set_current_line(225, ng0);

LAB266:    *((char **)t1) = &&LAB267;
    goto LAB1;

LAB247:    goto LAB246;

LAB249:    goto LAB247;

LAB250:    t8 = (t0 + 9130);
    xsi_report(t8, 25U, (unsigned char)1);
    goto LAB251;

LAB252:    t11 = 0;

LAB255:    if (t11 < 36U)
        goto LAB256;
    else
        goto LAB254;

LAB256:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB253;

LAB257:    t11 = (t11 + 1);
    goto LAB255;

LAB258:    t2 = (t0 + 9155);
    xsi_report(t2, 27U, (unsigned char)1);
    goto LAB259;

LAB260:    t2 = (t0 + 9182);
    xsi_report(t2, 27U, (unsigned char)1);
    goto LAB261;

LAB262:    t2 = (t0 + 9209);
    xsi_report(t2, 23U, (unsigned char)1);
    goto LAB263;

LAB264:    goto LAB2;

LAB265:    goto LAB264;

LAB267:    goto LAB265;

}


extern void work_a_0730398811_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0730398811_2372691052_p_0,(void *)work_a_0730398811_2372691052_p_1};
	xsi_register_didat("work_a_0730398811_2372691052", "isim/my_alu_tb_isim_beh.exe.sim/work/a_0730398811_2372691052.didat");
	xsi_register_executes(pe);
}
