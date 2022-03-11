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
static const char *ng0 = "C:/Users/Vlad/Desktop/tema2_tester (3)/tema2_tester/build/bin/maze.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {4, 0};
static int ng5[] = {3, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {63, 0};
static int ng9[] = {7, 0};



static void Always_36_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 4584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 5152);
    *((int *)t2) = 1;
    t3 = (t0 + 4616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);
    t30 = (t0 + 3024);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 3, 0LL);
    goto LAB12;

}

static void Always_42_1(char *t0)
{
    char t9[8];
    char t33[8];
    char t45[8];
    char t61[8];
    char t69[8];
    char t96[8];
    char t113[8];
    char t129[8];
    char t137[8];
    char t165[8];
    char t182[8];
    char t198[8];
    char t206[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    char *t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t240;
    char *t241;

LAB0:    t1 = (t0 + 4832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5168);
    *((int *)t2) = 1;
    t3 = (t0 + 4864);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(52, ng0);

LAB26:    xsi_set_current_line(53, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2384);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 2064);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 6);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 2224);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 6);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 3344);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 6);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 3504);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 6);
    goto LAB25;

LAB9:    xsi_set_current_line(65, ng0);

LAB27:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2384);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB31;

LAB28:    if (t19 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t9) = 1;

LAB31:    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(71, ng0);

LAB36:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB34:    goto LAB25;

LAB11:    xsi_set_current_line(78, ng0);

LAB37:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 3184);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);

LAB38:    t8 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 2, t8, 32);
    if (t30 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 32);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 32);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 32);
    if (t6 == 1)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB25;

LAB13:    xsi_set_current_line(100, ng0);

LAB48:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2384);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 3664);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 6);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 2064);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 6);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 3344);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 6);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 3664);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 6);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 2224);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 6);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 3504);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 6);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB25;

LAB15:    xsi_set_current_line(115, ng0);

LAB49:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2544);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB25;

LAB17:    xsi_set_current_line(123, ng0);

LAB50:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2384);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB51:    t8 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t8, 32);
    if (t6 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB58;

LAB59:
LAB60:    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB25;

LAB19:    xsi_set_current_line(165, ng0);

LAB65:    xsi_set_current_line(166, ng0);
    t3 = (t0 + 2064);
    t8 = (t3 + 56U);
    t22 = *((char **)t8);
    t28 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t29 = (t22 + 4);
    t31 = (t28 + 4);
    t10 = *((unsigned int *)t22);
    t11 = *((unsigned int *)t28);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t29);
    t14 = *((unsigned int *)t31);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t29);
    t18 = *((unsigned int *)t31);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB69;

LAB66:    if (t19 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t9) = 1;

LAB69:    memset(t33, 0, 8);
    t34 = (t9 + 4);
    t23 = *((unsigned int *)t34);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t34) != 0)
        goto LAB72;

LAB73:    t36 = (t33 + 4);
    t37 = *((unsigned int *)t33);
    t38 = (!(t37));
    t39 = *((unsigned int *)t36);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB74;

LAB75:    memcpy(t69, t33, 8);

LAB76:    memset(t96, 0, 8);
    t97 = (t69 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t69);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t97) != 0)
        goto LAB90;

LAB91:    t104 = (t96 + 4);
    t105 = *((unsigned int *)t96);
    t106 = (!(t105));
    t107 = *((unsigned int *)t104);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB92;

LAB93:    memcpy(t137, t96, 8);

LAB94:    memset(t165, 0, 8);
    t166 = (t137 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t137);
    t170 = (t169 & t168);
    t171 = (t170 & 1U);
    if (t171 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t166) != 0)
        goto LAB108;

LAB109:    t173 = (t165 + 4);
    t174 = *((unsigned int *)t165);
    t175 = (!(t174));
    t176 = *((unsigned int *)t173);
    t177 = (t175 || t176);
    if (t177 > 0)
        goto LAB110;

LAB111:    memcpy(t206, t165, 8);

LAB112:    t234 = (t206 + 4);
    t235 = *((unsigned int *)t234);
    t236 = (~(t235));
    t237 = *((unsigned int *)t206);
    t238 = (t237 & t236);
    t239 = (t238 != 0);
    if (t239 > 0)
        goto LAB124;

LAB125:    xsi_set_current_line(171, ng0);

LAB128:    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB126:    goto LAB25;

LAB21:    xsi_set_current_line(176, ng0);

LAB129:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng2)));
    t8 = (t0 + 2704);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    goto LAB25;

LAB30:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(67, ng0);

LAB35:    xsi_set_current_line(68, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 3024);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 3);
    goto LAB34;

LAB39:    xsi_set_current_line(81, ng0);
    t22 = ((char*)((ng3)));
    t28 = (t0 + 3184);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 2);
    goto LAB47;

LAB41:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 3184);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    goto LAB47;

LAB43:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3184);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    goto LAB47;

LAB45:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3184);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    goto LAB47;

LAB52:    xsi_set_current_line(128, ng0);

LAB61:    xsi_set_current_line(129, ng0);
    t22 = (t0 + 2224);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t31 = (t0 + 3504);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 6);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t22 = (t0 + 3344);
    xsi_vlogvar_assign_value(t22, t8, 0, 0, 6);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t22 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t8, 6, t22, 32);
    t28 = (t0 + 2224);
    xsi_vlogvar_assign_value(t28, t9, 0, 0, 6);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB60;

LAB54:    xsi_set_current_line(135, ng0);

LAB62:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 2224);
    t8 = (t3 + 56U);
    t22 = *((char **)t8);
    t28 = (t0 + 3504);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 6);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t22 = (t0 + 3344);
    xsi_vlogvar_assign_value(t22, t8, 0, 0, 6);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t22 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t8, 6, t22, 32);
    t28 = (t0 + 2064);
    xsi_vlogvar_assign_value(t28, t9, 0, 0, 6);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB60;

LAB56:    xsi_set_current_line(142, ng0);

LAB63:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 2064);
    t8 = (t3 + 56U);
    t22 = *((char **)t8);
    t28 = (t0 + 3344);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 6);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t22 = (t0 + 3504);
    xsi_vlogvar_assign_value(t22, t8, 0, 0, 6);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t22 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t8, 6, t22, 32);
    t28 = (t0 + 2224);
    xsi_vlogvar_assign_value(t28, t9, 0, 0, 6);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB60;

LAB58:    xsi_set_current_line(150, ng0);

LAB64:    xsi_set_current_line(151, ng0);
    t3 = (t0 + 2224);
    t8 = (t3 + 56U);
    t22 = *((char **)t8);
    t28 = (t0 + 3504);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 6);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t22 = (t0 + 3344);
    xsi_vlogvar_assign_value(t22, t8, 0, 0, 6);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t22 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t8, 6, t22, 32);
    t28 = (t0 + 2064);
    xsi_vlogvar_assign_value(t28, t9, 0, 0, 6);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB60;

LAB68:    t32 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t33) = 1;
    goto LAB73;

LAB72:    t35 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB73;

LAB74:    t41 = (t0 + 2224);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = ((char*)((ng1)));
    memset(t45, 0, 8);
    t46 = (t43 + 4);
    t47 = (t44 + 4);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB80;

LAB77:    if (t57 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t45) = 1;

LAB80:    memset(t61, 0, 8);
    t62 = (t45 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t45);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t62) != 0)
        goto LAB83;

LAB84:    t70 = *((unsigned int *)t33);
    t71 = *((unsigned int *)t61);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = (t33 + 4);
    t74 = (t61 + 4);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB76;

LAB79:    t60 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t61) = 1;
    goto LAB84;

LAB83:    t68 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB84;

LAB85:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t69) = (t81 | t82);
    t83 = (t33 + 4);
    t84 = (t61 + 4);
    t85 = *((unsigned int *)t83);
    t86 = (~(t85));
    t87 = *((unsigned int *)t33);
    t30 = (t87 & t86);
    t88 = *((unsigned int *)t84);
    t89 = (~(t88));
    t90 = *((unsigned int *)t61);
    t91 = (t90 & t89);
    t92 = (~(t30));
    t93 = (~(t91));
    t94 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t94 & t92);
    t95 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t95 & t93);
    goto LAB87;

LAB88:    *((unsigned int *)t96) = 1;
    goto LAB91;

LAB90:    t103 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB91;

LAB92:    t109 = (t0 + 2064);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    t112 = ((char*)((ng8)));
    memset(t113, 0, 8);
    t114 = (t111 + 4);
    t115 = (t112 + 4);
    t116 = *((unsigned int *)t111);
    t117 = *((unsigned int *)t112);
    t118 = (t116 ^ t117);
    t119 = *((unsigned int *)t114);
    t120 = *((unsigned int *)t115);
    t121 = (t119 ^ t120);
    t122 = (t118 | t121);
    t123 = *((unsigned int *)t114);
    t124 = *((unsigned int *)t115);
    t125 = (t123 | t124);
    t126 = (~(t125));
    t127 = (t122 & t126);
    if (t127 != 0)
        goto LAB98;

LAB95:    if (t125 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t113) = 1;

LAB98:    memset(t129, 0, 8);
    t130 = (t113 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t113);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t130) != 0)
        goto LAB101;

LAB102:    t138 = *((unsigned int *)t96);
    t139 = *((unsigned int *)t129);
    t140 = (t138 | t139);
    *((unsigned int *)t137) = t140;
    t141 = (t96 + 4);
    t142 = (t129 + 4);
    t143 = (t137 + 4);
    t144 = *((unsigned int *)t141);
    t145 = *((unsigned int *)t142);
    t146 = (t144 | t145);
    *((unsigned int *)t143) = t146;
    t147 = *((unsigned int *)t143);
    t148 = (t147 != 0);
    if (t148 == 1)
        goto LAB103;

LAB104:
LAB105:    goto LAB94;

LAB97:    t128 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB98;

LAB99:    *((unsigned int *)t129) = 1;
    goto LAB102;

LAB101:    t136 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB102;

LAB103:    t149 = *((unsigned int *)t137);
    t150 = *((unsigned int *)t143);
    *((unsigned int *)t137) = (t149 | t150);
    t151 = (t96 + 4);
    t152 = (t129 + 4);
    t153 = *((unsigned int *)t151);
    t154 = (~(t153));
    t155 = *((unsigned int *)t96);
    t156 = (t155 & t154);
    t157 = *((unsigned int *)t152);
    t158 = (~(t157));
    t159 = *((unsigned int *)t129);
    t160 = (t159 & t158);
    t161 = (~(t156));
    t162 = (~(t160));
    t163 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t163 & t161);
    t164 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t164 & t162);
    goto LAB105;

LAB106:    *((unsigned int *)t165) = 1;
    goto LAB109;

LAB108:    t172 = (t165 + 4);
    *((unsigned int *)t165) = 1;
    *((unsigned int *)t172) = 1;
    goto LAB109;

LAB110:    t178 = (t0 + 2224);
    t179 = (t178 + 56U);
    t180 = *((char **)t179);
    t181 = ((char*)((ng8)));
    memset(t182, 0, 8);
    t183 = (t180 + 4);
    t184 = (t181 + 4);
    t185 = *((unsigned int *)t180);
    t186 = *((unsigned int *)t181);
    t187 = (t185 ^ t186);
    t188 = *((unsigned int *)t183);
    t189 = *((unsigned int *)t184);
    t190 = (t188 ^ t189);
    t191 = (t187 | t190);
    t192 = *((unsigned int *)t183);
    t193 = *((unsigned int *)t184);
    t194 = (t192 | t193);
    t195 = (~(t194));
    t196 = (t191 & t195);
    if (t196 != 0)
        goto LAB116;

LAB113:    if (t194 != 0)
        goto LAB115;

LAB114:    *((unsigned int *)t182) = 1;

LAB116:    memset(t198, 0, 8);
    t199 = (t182 + 4);
    t200 = *((unsigned int *)t199);
    t201 = (~(t200));
    t202 = *((unsigned int *)t182);
    t203 = (t202 & t201);
    t204 = (t203 & 1U);
    if (t204 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t199) != 0)
        goto LAB119;

LAB120:    t207 = *((unsigned int *)t165);
    t208 = *((unsigned int *)t198);
    t209 = (t207 | t208);
    *((unsigned int *)t206) = t209;
    t210 = (t165 + 4);
    t211 = (t198 + 4);
    t212 = (t206 + 4);
    t213 = *((unsigned int *)t210);
    t214 = *((unsigned int *)t211);
    t215 = (t213 | t214);
    *((unsigned int *)t212) = t215;
    t216 = *((unsigned int *)t212);
    t217 = (t216 != 0);
    if (t217 == 1)
        goto LAB121;

LAB122:
LAB123:    goto LAB112;

LAB115:    t197 = (t182 + 4);
    *((unsigned int *)t182) = 1;
    *((unsigned int *)t197) = 1;
    goto LAB116;

LAB117:    *((unsigned int *)t198) = 1;
    goto LAB120;

LAB119:    t205 = (t198 + 4);
    *((unsigned int *)t198) = 1;
    *((unsigned int *)t205) = 1;
    goto LAB120;

LAB121:    t218 = *((unsigned int *)t206);
    t219 = *((unsigned int *)t212);
    *((unsigned int *)t206) = (t218 | t219);
    t220 = (t165 + 4);
    t221 = (t198 + 4);
    t222 = *((unsigned int *)t220);
    t223 = (~(t222));
    t224 = *((unsigned int *)t165);
    t225 = (t224 & t223);
    t226 = *((unsigned int *)t221);
    t227 = (~(t226));
    t228 = *((unsigned int *)t198);
    t229 = (t228 & t227);
    t230 = (~(t225));
    t231 = (~(t229));
    t232 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t232 & t230);
    t233 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t233 & t231);
    goto LAB123;

LAB124:    xsi_set_current_line(167, ng0);

LAB127:    xsi_set_current_line(168, ng0);
    t240 = ((char*)((ng9)));
    t241 = (t0 + 3024);
    xsi_vlogvar_assign_value(t241, t240, 0, 0, 3);
    goto LAB126;

}


extern void uut_m_00000000001801625555_3878886709_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Always_42_1};
	xsi_register_didat("uut_m_00000000001801625555_3878886709", "isim/tester.exe.sim/uut/m_00000000001801625555_3878886709.didat");
	xsi_register_executes(pe);
}
