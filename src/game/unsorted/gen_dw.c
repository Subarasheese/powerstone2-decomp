/* Straight-line functions with calls and guards (batch gen_dw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o100_int { char p[0x100]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };
int FUN_0c03592a(void);
int FUN_0c036de8(int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c038548(int);
int FUN_0c038566(void);
int FUN_0c038e88(int);
int FUN_0c038f70(void);
int FUN_0c03ea04(int, int);
int FUN_0c03efec(void);
int FUN_0c03eff6(void);
int FUN_0c03f0aa(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f40c(int);
int FUN_0c03f566(int, int);
int FUN_0c042fe0(void);
int FUN_0c043010(void);
int FUN_0c04340c(void);
int FUN_0c04b172(void);
int FUN_0c04b218(void);
int FUN_0c04b648(void);
extern int FUN_0c04b7c4();
int FUN_0c04bb00(void);
int FUN_0c04bc04(void);
int FUN_0c04bddc(void);
int FUN_0c04c0d4(void);
int FUN_0c04c1d4(void);
int FUN_0c04c438(void);
int FUN_0c04c5f4(void);
int FUN_0c04ca56(void);
int FUN_0c04cc64(void);
int FUN_0c04ceb0(void);
int FUN_0c04d6f4(void);
int FUN_0c0522be(int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c0527e6(void);
int FUN_0c056e44(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c54(int);
int FUN_0c059c7a(int, int);
int FUN_0c059d30(void);
int FUN_0c059df2(int, int);
int FUN_0c05aeac(void);
int FUN_0c05af8a(void);
int FUN_0c05af9a(int, int, int);
int FUN_0c05b052(int, int);
int FUN_0c060c00(void);
int FUN_0c063f24(void);
int FUN_0c067784(void);
int FUN_0c067a58(void);
int FUN_0c07bf00(int, int);
int FUN_0c07c19c(int);
int FUN_0c07c436(void);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0b507a(int, int, int);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0cfc04(void);
int FUN_0c0cff28(int, int);
int FUN_0c0d02a6(void);
int FUN_0c0d0378(int, int);
int FUN_0c0d039e(int, int);
int FUN_0c0d0cc8(void);
int FUN_0c0d0dd8(int);
int FUN_0c0d0e88(void);
int FUN_0c0d0e8c(void);
int FUN_0c0d2f38(int);
int FUN_0c0e1080(int);
int FUN_0c0e1096(int);
int FUN_0c0e10a8(int, int, int);
int FUN_0c0e1108(int, int, int);
int FUN_0c0e11ee(int, int, int, int);
int FUN_0c0e1270(int);
int FUN_0c0e12aa(int);
int FUN_0c0e1314(int);
int FUN_0c0e132a(int);
int FUN_0c0e138c(int);
int FUN_0c160d32(int, int, int);
int FUN_0c162f8a(int, int, int, int);
int FUN_0c163116(int, int, int);
int FUN_0c16498c(int, int, int, int);
int FUN_0c166190(int, int, int);
int FUN_0c16757a(int, int, int);
int FUN_0c16844c(int, int, int);
int FUN_0c168978(int, int, int);
int FUN_0c16b9ec(int, int, int, int);
int FUN_0c16c150(int, int, int, int);
int FUN_0c16d2b4(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int res_cockpit_faces_release_all(void);
int thunk_FUN_0c05abb2(int, int);
int thunk_FUN_0c0d0d26(void);
int FUN_0c04a99c(int a4);
float FUN_0c0f3398(int a4, int a5, int a6, int a7);
int FUN_0c140464(int a4, int a5, int a6, int a7);
void FUN_0c0d0ec2(int a4);
int FUN_0c0e1524(int a4, int a5, int a6, int a7);

int FUN_0c04a99c(int a4)
{
    int stk[10];
    register int t2;
    register int t6;
    register int t18;
    register int t35;
    register int t53;
    register int t57;
    register int t65;
    register int t69;
    register int t77;
    register int t83;
    register int t92;
    register int t100;
    register int t104;
    register int t105;
    register int t106;
    register int t107;
    int t108;
    register int t122;
    register int t136;
    register int t146;
    register int t148;
    register int t149;
    register int t153;
    register int t154;
    register int t155;
    register int t239;
    register int t240;
    register int t241;
    register int t242;
    register int t243;
    register int t244;
    register int t251;
    register int t280;
    register int t293;
    register int t312;
    register int t329;
    register int t342;
    register int t355;
    register int t363;
    register int t373;
    register int t386;
    register int t443;
    register int t444;
    register int t450;
    register int t453;
    register int t465;
    register int t488;
    register int t504;
    register int t433;
    register int t36;
    int t40;
    register int t41;
    register int t111;
    register int t112;
    register int t114;
    register int t147;
    register int t237;
    register int t238;
    register int t252;
    register int t253;
    register int t254;

    if ((*(signed char *)0xC5421E1) == 0) {
        t2 = FUN_0c04b218();
        if ((int)(unsigned char)(*(signed char *)0xC541F44) > 0) {
            if ((int)(unsigned char)(*(signed char *)0xC541F44) < (int)0xE) {
                t6 = FUN_0c04b172();
                if (t6 != 0) {
                    (((struct o3_uchar *)0xC541F41)->v) = 0xE;
                    *(unsigned short *)0xC541F4E = 0x1F;
                    FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
                    FUN_0c05b052(0x1E, 0x0);
                    FUN_0c07c436();
                }
            }
        }
        t18 = *(signed char *)0xC541F44;
        if ((unsigned int)(unsigned char)t18 >= (unsigned int)0xF) {
            if ((*(signed char *)0xC5429B4) == 2) {
                (((struct o0_uchar *)0xC541F41)->v) = 0xB;
            } else {
                (((struct o0_uchar *)0xC541F41)->v) = 0x8;
            }
            (((struct o3_uchar *)0xC541F41)->v) = 0x0;
            (((struct o2_uchar *)0xC541F41)->v) = 0x0;
            (((struct o1_uchar *)0xC541F41)->v) = 0x0;
            t433 = 0x0;
        } else {
            switch (((unsigned char)t18 << 1)) {
                case 0:
                {
                    FUN_0c05aeac();
                    FUN_0c05af8a();
                    FUN_0c059c54(0xA);
                    thunk_FUN_0c05abb2(0x58, 0x0);
                    FUN_0c05af9a(0x58, 0x78, 0xF0);
                    t35 = (FUN_0c056e44(0x21, 0x0));
                    if ((int)t2 >= 0) {
                        *(unsigned int *)(((int)stk + 4)) = ((t2 * 0x3938) + 0xC532498);
                        (((struct o3714_uchar *)(((t2 * 0x3938) + 0xC532498)))->v) = 0x1;
                        FUN_0c067784();
                        t35 = (FUN_0c0b507a((*(int *)(((int)stk + 4))), 0x17, 0x0));
                    }
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 4))) >= (int)0x4) {
                            break;
                        }
                        t35 = 0x3714;
                        t36 = (*(signed char *)(((((*(int *)(((int)stk + 4))) * 0x3938) + 0xC532498) + t35)));
                        if ((t36 != 0) && (t40 = *(int *)(((int)stk + 4)), t41 = (t36 == 0), t36 = t40, t36 != t2)) {
                            t35 = (FUN_0c085d0c((((*(int *)(((int)stk + 4))) * 0x3938) + 0xC532498), 0x0, 0x0, 0x0));
                        }
                        t36 = (*(int *)(((int)stk + 4)));
                        t36 = (t36 + 0x1);
                        *(unsigned int *)(((int)stk + 4)) = t36;
                    }
                    *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    t53 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t53 - 1);
                    if ((int)(short)(t53 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        t57 = ((int (*)(void))(FUN_0c04b7c4))();
                        FUN_0c04bb00();
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    }
                }
                    break;
                case 2:
                {
                    t65 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t65 - 1);
                    if ((int)(short)(t65 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        t69 = ((int (*)(int))(FUN_0c04b7c4))(0xC541F4E);
                        FUN_0c04bb00();
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    }
                }
                    break;
                case 4:
                {
                    t77 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t77 - 1);
                    if ((int)(short)(t77 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    }
                }
                    break;
                case 6:
                {
                    t83 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t83 - 1);
                    if ((int)(short)(t83 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        FUN_0c04b648();
                        FUN_0c059c54(0xB);
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        *(int *)((int)stk + 0) = 0x0;
                        FUN_0c05258e(0x3, 0xA, 0x2000, 0xFFFFFFFF, 0x0);
                        t92 = 0xC532498;
                        for (;;) {
                            if ((unsigned int)t92 >= (unsigned int)0xC540978) {
                                break;
                            }
                            FUN_0c07bf00(t92, 0x18);
                            t92 = (t92 + 0x3938);
                        }
                    }
                }
                    break;
                case 8:
                {
                    t100 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t100 - 1);
                    if ((int)(short)(t100 - 1) <= 0) {
                        t104 = *(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1)));
                        *(unsigned short *)0xC541F4E = t104;
                        t105 = ((unsigned char)t18 << 1);
                        t106 = (short)(t100 - 1);
                        t107 = 0xC541F4E;
                        t108 = 0x0;
                        for (;;) {
                            if ((int)t108 >= (int)0x4) {
                                break;
                            }
                            t104 = 0x3714;
                            t107 = (t108 * 0x3938);
                            t107 = (t107 + 0xC532498);
                            if (((*(signed char *)((t107 + t104))) != 0) && (t108 != t2)) {
                                t106 = 0xC085CAC;
                                t104 = (FUN_0c085cac(t107, 0x17, 0x8));
                            } else {
                                t111 = t105;
                                t112 = t106;
                                t114 = t107;
                            }
                            t105 = t111;
                            t108 = (t108 + 0x1);
                            t106 = t112;
                            t107 = t114;
                        }
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    }
                }
                    break;
                case 10:
                {
                    t122 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t122 - 1);
                    if ((int)(short)(t122 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        FUN_0c0573cc(0xFF000000, 0x0, (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1)))));
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    }
                }
                    break;
                case 12:
                {
                    t136 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t136 - 1);
                    if ((int)(short)(t136 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        FUN_0c0573c0(0xFF000000, 0x0, 0x1E);
                        if ((int)t2 >= 0) {
                            (((struct o3714_uchar *)(((t2 * 0x3938) + 0xC532498)))->v) = 0x0;
                        }
                        FUN_0c03f0aa();
                        t146 = (FUN_0c03efec());
                        t148 = 0xC532498;
                        t149 = 0x0;
                        for (;;) {
                            if ((unsigned int)t148 >= (unsigned int)0xC540978) {
                                break;
                            }
                            t146 = 0x3714;
                            t147 = (*(signed char *)((t148 + t146)));
                            t148 = (t148 + 0x3938);
                            if (t147 != 0) {
                                t149 = (t149 + 0x1);
                            }
                        }
                        *(unsigned int *)(((int)stk + 4)) = 0xC540978;
                        if (t149 == 1) {
                            *(unsigned int *)(((int)stk + 4)) = 0xC540978;
                            if ((unsigned int)0xC532498 < (unsigned int)0xC540978) {
                                t153 = 0xC540978;
                                t154 = 0xC532498;
                                t155 = 0xC532498;
                                for (;;) {
                                    if ((*(signed char *)((t154 + 0x3714))) != 0) {
                                        break;
                                    }
                                    t153 = (*(int *)(((int)stk + 4)));
                                    t154 = (t154 + 0x3938);
                                    t155 = (t155 + 0x3938);
                                    if ((unsigned int)t154 >= (unsigned int)t153) {
                                        t154 = 0x40;
                                        thunk_FUN_0c05abb2(t154, 0x0);
                                        t153 = 0xC036DE8;
                                        t154 = 0xC;
                                        FUN_0c036de8(t154);
                                        t154 = 0x4;
                                        FUN_0c03ea04(t154, 0x0);
                                        t154 = 0xC542440;
                                        t153 = 0xFFFFFFFF;
                                        *(unsigned int *)((t154 + 0x8)) = t153;
                                        *(unsigned int *)((t154 + 0x4)) = t153;
                                        *(unsigned int *)((t154 + 0x0)) = t153;
                                        FUN_0c04bc04();
                                        FUN_0c04bddc();
                                        t153 = 0xC056E44;
                                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                                        t154 = 0x21;
                                        FUN_0c056e44(t154, 0x1);
                                        t153 = 0xC067A58;
                                        FUN_0c067a58();
                                        t154 = 0x1;
                                        FUN_0c03f40c(t154);
                                        t153 = 0xC038548;
                                        t154 = 0x1;
                                        FUN_0c038548(t154);
                                        FUN_0c038566();
                                        t153 = 0xC038EA6;
                                        res_cockpit_faces_release_all();
                                        t154 = 0x1;
                                        FUN_0c038e88(t154);
                                        t153 = 0x7;
                                        if ((int)(unsigned char)(*(signed char *)0xC541F44) < (int)t153) {
                                            FUN_0c0cfc04();
                                            FUN_0c038f70();
                                            t153 = 0xC03F40C;
                                        }
                                        t154 = 0x2;
                                        FUN_0c03f40c(t154);
                                        t154 = 0x2;
                                        FUN_0c038548(t154);
                                        t154 = 0x2;
                                        FUN_0c038e88(t154);
                                        t154 = 0x9;
                                        FUN_0c03f40c(t154);
                                        t154 = 0x9;
                                        FUN_0c038548(t154);
                                        t154 = 0x9;
                                        FUN_0c038e88(t154);
                                        t153 = 0xC060C00;
                                        FUN_0c060c00();
                                        t153 = 0x7;
                                        if ((int)(unsigned char)(*(signed char *)0xC541F44) < (int)t153) {
                                            FUN_0c063f24();
                                            res_cockpit_faces_release_all();
                                            t154 = 0x2;
                                            FUN_0c038e88(t154);
                                            t154 = 0x1;
                                            FUN_0c038e88(t154);
                                            t154 = 0x9;
                                            FUN_0c038e88(t154);
                                            t153 = 0xC03F40C;
                                        } else {
                                            res_cockpit_faces_release_all();
                                            t154 = 0x2;
                                            FUN_0c038e88(t154);
                                            t154 = 0x1;
                                            FUN_0c038e88(t154);
                                            t154 = 0x9;
                                            FUN_0c038e88(t154);
                                        }
                                        t154 = 0x5;
                                        FUN_0c03f40c(t154);
                                        t154 = 0x5;
                                        FUN_0c038548(t154);
                                        t154 = 0x5;
                                        FUN_0c038e88(t154);
                                        t154 = 0x8;
                                        FUN_0c03f40c(t154);
                                        t154 = 0x8;
                                        return (FUN_0c038e88(t154));
                                    }
                                }
                                FUN_0c085cac(t155, 0x1D, 0x0);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t155 + 0x28)) = *(struct mv3 *)(0xC1B7D80); }
                                *(unsigned int *)((t155 + 0x38)) = 0x0;
                            }
                        } else {
                            *(unsigned int *)(((int)stk + 4)) = 0xC540978;
                            t239 = t148;
                            t240 = t149;
                            t241 = 0xC1B7D80;
                            t242 = 0xC1B7D8C;
                            t243 = 0xC532498;
                            t244 = 0xC532498;
                            for (;;) {
                                if ((unsigned int)t243 >= (unsigned int)(*(int *)(((int)stk + 4)))) {
                                    break;
                                }
                                t237 = (*(signed char *)((t243 + 0x3714)));
                                t251 = t238;
                                if (t237 != 0) {
                                    t238 = 0xC085CAC;
                                    t240 = 0x1D;
                                    t241 = 0x0;
                                    t239 = t244;
                                    FUN_0c085cac(t239, t240, t241);
                                    t238 = 0xC187798;
                                    t237 = t244;
                                    t237 = (t237 + 0x28);
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t237) = *(struct mv3 *)(t242); }
                                    t242 = (t242 + 0xC);
                                    *(unsigned int *)((t244 + 0x38)) = 0x0;
                                    t251 = 0xC187798;
                                } else {
                                    t252 = t239;
                                    t253 = t240;
                                    t254 = t241;
                                }
                                t243 = (t243 + 0x3938);
                                t238 = t251;
                                t239 = t252;
                                t240 = t253;
                                t241 = t254;
                                t244 = (t244 + 0x3938);
                            }
                        }
                        thunk_FUN_0c05abb2(0x40, 0x0);
                        FUN_0c036de8(0xC);
                        FUN_0c03ea04(0x4, 0x0);
                        (((struct o8_uint *)0xC542440)->v) = 0xFFFFFFFF;
                        (((struct o4_uint *)0xC542440)->v) = 0xFFFFFFFF;
                        (((struct o0_uint *)0xC542440)->v) = 0xFFFFFFFF;
                        FUN_0c04bc04();
                        FUN_0c04bddc();
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        FUN_0c056e44(0x21, 0x1);
                    }
                }
                    break;
                case 14:
                {
                    t280 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t280 - 1);
                    if ((int)(short)(t280 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        FUN_0c0573cc(0xFF000000, 0x0, (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1)))));
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    }
                }
                    break;
                case 16:
                {
                    t293 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t293 - 1);
                    if ((int)(short)(t293 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        FUN_0c03f0aa();
                        FUN_0c0573c0(0xFF000000, 0x0, 0x1E);
                        thunk_FUN_0c05abb2(0x40, 0x0);
                        FUN_0c036de8(0xD);
                        FUN_0c03ea04(0x1, 0x0);
                        (((struct o8_uint *)0xC542440)->v) = 0xFFFFFFFF;
                        (((struct o4_uint *)0xC542440)->v) = 0xFFFFFFFF;
                        (((struct o0_uint *)0xC542440)->v) = 0xFFFFFFFF;
                        FUN_0c04c0d4();
                        FUN_0c04c1d4();
                        FUN_0c04c438();
                        FUN_0c04c5f4();
                        FUN_0c04cc64();
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    }
                }
                    break;
                case 18:
                {
                    t312 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t312 - 1);
                    if ((int)(short)(t312 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        FUN_0c059c54(0xC);
                        FUN_0c04ca56();
                        FUN_0c05af9a(0x58, 0x0, (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1)))));
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        FUN_0c056e44(0x21, 0x2);
                        *(int *)((int)stk + 0) = 0x0;
                        FUN_0c05258e(0x63, 0xA, 0x100, 0x1, 0x0);
                    }
                }
                    break;
                case 20:
                {
                    t329 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t329 - 1);
                    if ((int)(short)(t329 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        FUN_0c0573cc(0xFFFFFFFF, 0x0, (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1)))));
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    }
                }
                    break;
                case 22:
                {
                    t342 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t342 - 1);
                    if ((int)(short)(t342 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        FUN_0c03f0aa();
                        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
                        FUN_0c036de8(0xE);
                        (((struct o8_uint *)0xC542440)->v) = 0xFF568BC8;
                        (((struct o4_uint *)0xC542440)->v) = 0xFF568BC8;
                        (((struct o0_uint *)0xC542440)->v) = 0xFF568BC8;
                        FUN_0c03ea04(0x8, 0x0);
                        FUN_0c04ceb0();
                        FUN_0c056e44(0x21, 0x3);
                        thunk_FUN_0c05abb2(0x46, 0x0);
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        t355 = 0xC532498;
                        for (;;) {
                            if ((unsigned int)t355 >= (unsigned int)0xC540978) {
                                break;
                            }
                            FUN_0c07bf00(t355, 0x19);
                            t355 = (t355 + 0x3938);
                        }
                    }
                }
                    break;
                case 24:
                {
                    t363 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t363 - 1);
                    if ((int)(short)(t363 - 1) <= 0) {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        thunk_FUN_0c05abb2(0x47, 0x0);
                    }
                }
                    break;
                case 26:
                {
                    t373 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t373 - 1);
                    if ((int)(short)(t373 - 1) <= 0) {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        FUN_0c0573cc(0xFFFFFFFF, 0x0, (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1)))));
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    }
                }
                    break;
                default:
                {
                    t386 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t386 - 1);
                    if ((int)(short)(t386 - 1) <= 0) {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D62 + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    }
                }
                    break;
            }
            FUN_0c067a58();
            FUN_0c03f40c(0x1);
            FUN_0c038548(0x1);
            FUN_0c038566();
            res_cockpit_faces_release_all();
            FUN_0c038e88(0x1);
            if ((int)(unsigned char)(*(signed char *)0xC541F44) < (int)0x7) {
                FUN_0c0cfc04();
                FUN_0c038f70();
            }
            FUN_0c03f40c(0x2);
            FUN_0c038548(0x2);
            FUN_0c038e88(0x2);
            FUN_0c03f40c(0x9);
            FUN_0c038548(0x9);
            FUN_0c038e88(0x9);
            FUN_0c060c00();
            if ((int)(unsigned char)(*(signed char *)0xC541F44) < (int)0x7) {
                FUN_0c063f24();
            }
            res_cockpit_faces_release_all();
            FUN_0c038e88(0x2);
            FUN_0c038e88(0x1);
            FUN_0c038e88(0x9);
            FUN_0c03f40c(0x5);
            FUN_0c038548(0x5);
            FUN_0c038e88(0x5);
            FUN_0c03f40c(0x8);
            t433 = (FUN_0c038e88(0x8));
        }
        t504 = t433;
    } else {
        t443 = *(signed char *)0xC541F44;
        if ((unsigned char)t443 != 0) {
            if ((unsigned char)t443 != 1) {
                if ((unsigned char)t443 != 2) {
                    t444 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t444 - 1);
                    if ((int)(short)(t444 - 1) > 0) {
                    } else {
                        *(unsigned char *)0xC3BD447 = 0x0;
                        FUN_0c03eff6();
                        (((struct o0_uchar *)0xC541F41)->v) = 0x6;
                        (((struct o3_uchar *)0xC541F41)->v) = 0x0;
                        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                        (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                        *(unsigned short *)0xC541F4E = 0x0;
                    }
                } else {
                    t450 = FUN_0c04b172();
                    if (t450 != 0) {
                        *(unsigned short *)0xC541F4E = 0x1;
                    }
                    t453 = *(short *)0xC541F4E;
                    *(unsigned short *)0xC541F4E = (t453 - 1);
                    if ((int)(short)(t453 - 1) > 0) {
                    } else {
                        *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D5C + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                        *(unsigned char *)0xC3BD447 = 0x0;
                        (((struct o0_uchar *)0xC541F41)->v) = 0x6;
                        (((struct o3_uchar *)0xC541F41)->v) = 0x0;
                        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                        (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                        *(unsigned short *)0xC541F4E = 0x0;
                    }
                }
            } else {
                t465 = *(short *)0xC541F4E;
                *(unsigned short *)0xC541F4E = (t465 - 1);
                if ((int)(short)(t465 - 1) > 0) {
                } else {
                    *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D5C + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                }
            }
        } else {
            FUN_0c05aeac();
            FUN_0c05af8a();
            FUN_0c03eff6();
            FUN_0c036de8(0x24);
            FUN_0c0527e6();
            FUN_0c03ea04(0x3, 0x0);
            FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x3C);
            *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D5C + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
            FUN_0c04d6f4();
            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
            t488 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t488 - 1);
            if ((int)(short)(t488 - 1) > 0) {
            } else {
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1B7D5C + ((unsigned char)(*(signed char *)0xC541F44) << 1))));
                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
            }
        }
        FUN_0c03f40c(0x5);
        FUN_0c038548(0x5);
        FUN_0c038e88(0x5);
        FUN_0c03f40c(0x8);
        t504 = (FUN_0c038e88(0x8));
    }
    return t504;
}

float FUN_0c0f3398(int a4, int a5, int a6, int a7)
{
    int stk[4];

    register int R1;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_2 = a4;
    v0_1 = a5;
    v0_0 = a6;
    v0_0 = a7;
    v0_3 = *(signed char *)((v0_2 + 0x16));
    v0_1 = (v0_3);
    v0_0 = (v0_2);
    if ((v0_3 == 0)) goto L_C0F33C6;
    if ((v0_1 == 1)) goto L_C0F3422;
    if ((v0_1 == 2)) goto L_C0F3440;
    L_C0F3A18:;
    v0_1 = *(int *)((v0_0 + 0x10));
    v0_2 = (v0_1);
    if (((*(signed char *)((v0_1 + 0x14))) != 1)) goto L_C0F3A2A;
    v0_2 = *(signed char *)((v0_2 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 5)) goto L_C0F3A34;
    L_C0F3A2A:;
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    (((struct o16_uchar *)(v0_0))->v) = 0x0;
    v0_1 = (0x16);
    L_C0F3A34:;
    return F0;
    L_C0F3440:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_2 = *(signed char *)((v0_0 + 0x41C));
    v0_1 = ((unsigned char)v0_2);
    v0_3 = (0xC16B9EC);
    v0_3 = (0xC059DF2);
    v0_3 = (0xC179BF0);
    v0_3 = (0xC179670);
    v0_3 = (0xC16498C);
    w0_3 = (123.0f);
    w0_2 = (15.0f);
    w0_1 = (160.0f);
    w0_0 = (100.0f);
    if (((unsigned char)v0_2 == 1)) goto L_C0F34D4;
    if ((v0_1 == 2)) goto L_C0F3560;
    if ((v0_1 != 13)) goto L_C0F3478;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_0 = (*(float *)(((int)stk + 4)));
    w0_0 = w0_0 + 90.0f * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_0;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 153.0f);
    w0_0 = (*(float *)(((int)stk + 12)));
    w0_0 = w0_0 + 90.0f * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_0;
    v0_1 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    FUN_0c16c150((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1))), (((int)stk + 0) + 0x4), (v0_1 + 0x34), 0x1);
    v0_1 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    FUN_0c160d32((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1))), (((int)stk + 0) + 0x4), (v0_1 + 0x34));
    v0_1 = (0x45);
    L_C0F3A12:;
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), v0_1);
    goto L_C0F3A18;
    L_C0F3478:;
    if ((v0_1 != 28)) goto L_C0F3480;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_1 = (*(float *)(((int)stk + 4)));
    w0_1 = w0_1 + w0_0 * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_1;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 157.0f);
    w0_1 = (*(float *)(((int)stk + 12)));
    w0_1 = w0_1 + w0_0 * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_1;
    FUN_0c16d2b4((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34));
    v0_1 = (0x74);
    goto L_C0F3A12;
    L_C0F3480:;
    if ((v0_1 != 34)) goto L_C0F3488;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_2 = (*(float *)(((int)stk + 4)));
    w0_2 = w0_2 + w0_0 * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_2;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_1);
    w0_1 = (*(float *)(((int)stk + 12)));
    w0_1 = w0_1 + w0_0 * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_1;
    FUN_0c166190(v0_0, (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34));
    L_C0F36D0:;
    v0_1 = (0x41);
    goto L_C0F3A12;
    L_C0F3488:;
    if ((v0_1 != 40)) goto L_C0F3490;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_0 = (*(float *)(((int)stk + 4)));
    w0_0 = w0_0 + 150.0f * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_0;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_1);
    w0_0 = (*(float *)(((int)stk + 12)));
    w0_0 = w0_0 + 150.0f * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_0;
    FUN_0c16757a((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34));
    v0_1 = (0x5A);
    goto L_C0F3A12;
    L_C0F3490:;
    if ((v0_1 != 51)) goto L_C0F3498;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_0 = (*(float *)(((int)stk + 4)));
    w0_0 = w0_0 + w0_2 * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_0;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_3);
    w0_0 = (*(float *)(((int)stk + 12)));
    w0_0 = w0_0 + w0_2 * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_0;
    FUN_0c16844c((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34));
    v0_1 = (0x6E);
    goto L_C0F3A12;
    L_C0F3498:;
    if ((v0_1 != 52)) goto L_C0F34A0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_0 = (*(float *)(((int)stk + 4)));
    w0_0 = w0_0 + w0_2 * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_0;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_3);
    w0_0 = (*(float *)(((int)stk + 12)));
    w0_0 = w0_0 + w0_2 * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_0;
    FUN_0c168978((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34));
    v0_1 = (0x6F);
    goto L_C0F3A12;
    L_C0F34A0:;
    if ((v0_1 != 56)) goto L_C0F34A8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_2 = (*(float *)(((int)stk + 4)));
    w0_2 = w0_2 + w0_0 * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_2;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_1);
    w0_1 = (*(float *)(((int)stk + 12)));
    w0_1 = w0_1 + w0_0 * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_1;
    FUN_0c16b9ec(v0_0, (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34), ((unsigned char)(*(signed char *)((v0_0 + 0x41C))) - 56));
    v0_1 = (0x73);
    goto L_C0F3A12;
    L_C0F34A8:;
    if ((v0_1 != 57)) goto L_C0F34B0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_2 = (*(float *)(((int)stk + 4)));
    w0_2 = w0_2 + w0_0 * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_2;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_1);
    w0_1 = (*(float *)(((int)stk + 12)));
    w0_1 = w0_1 + w0_0 * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_1;
    FUN_0c16b9ec(v0_0, (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34), ((unsigned char)(*(signed char *)((v0_0 + 0x41C))) - 56));
    L_C0F3A10:;
    v0_1 = (0x66);
    goto L_C0F3A12;
    L_C0F34B0:;
    if ((v0_1 != 58)) goto L_C0F34B8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_2 = (*(float *)(((int)stk + 4)));
    w0_2 = w0_2 + w0_0 * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_2;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_1);
    w0_1 = (*(float *)(((int)stk + 12)));
    w0_1 = w0_1 + w0_0 * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_1;
    FUN_0c16b9ec(v0_0, (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34), ((unsigned char)(*(signed char *)((v0_0 + 0x41C))) - 56));
    v0_1 = (0x75);
    goto L_C0F3A12;
    L_C0F34B8:;
    if ((v0_1 != 59)) goto L_C0F34C0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_2 = (*(float *)(((int)stk + 4)));
    w0_2 = w0_2 + w0_0 * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_2;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_1);
    w0_1 = (*(float *)(((int)stk + 12)));
    w0_1 = w0_1 + w0_0 * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_1;
    FUN_0c16498c((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34), 0x0);
    goto L_C0F3A10;
    L_C0F34C0:;
    if ((v0_1 != 60)) goto L_C0F34C8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_2 = (*(float *)(((int)stk + 4)));
    w0_2 = w0_2 + w0_0 * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_2;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_1);
    w0_1 = (*(float *)(((int)stk + 12)));
    w0_1 = w0_1 + w0_0 * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_1;
    FUN_0c16498c((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34), 0x1);
    goto L_C0F3A10;
    L_C0F34C8:;
    if ((v0_1 != 61)) goto L_C0F34D0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_2 = (*(float *)(((int)stk + 4)));
    w0_2 = w0_2 + w0_0 * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_2;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_1);
    w0_1 = (*(float *)(((int)stk + 12)));
    w0_1 = w0_1 + w0_0 * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_1;
    FUN_0c16498c((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34), 0x2);
    goto L_C0F3A10;
    L_C0F34D0:;
    goto L_C0F3A18;
    L_C0F3560:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_2 = (*(float *)(((int)stk + 4)));
    w0_2 = w0_2 + w0_0 * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_2;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_1);
    w0_1 = (*(float *)(((int)stk + 12)));
    w0_1 = w0_1 + w0_0 * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_1;
    FUN_0c163116((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34));
    goto L_C0F36D0;
    L_C0F34D4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_1 = (*(float *)(((int)stk + 4)));
    w0_1 = w0_1 + w0_0 * (math_sin_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 4)) = w0_1;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 156.0f);
    w0_1 = (*(float *)(((int)stk + 12)));
    w0_1 = w0_1 + w0_0 * (math_cos_angle16((*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)))));
    *(float *)(((int)stk + 12)) = w0_1;
    FUN_0c162f8a((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0x4), ((*(int *)((v0_0 + 0x10))) + 0x34), 0x0);
    v0_1 = (0x40);
    goto L_C0F3A12;
    L_C0F3422:;
    v0_2 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_2 - 1);
    v0_1 = (0x20);
    if (((int)(short)(v0_2 - 1) <= 0)) goto L_C0F3434;
    goto L_C0F3A34;
    L_C0F3434:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_1 = (0x16);
    goto L_C0F3A34;
    L_C0F33C6:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_3 = *(signed char *)((v0_0 + 0x41C));
    v0_1 = ((unsigned char)v0_3);
    v0_2 = (0xA);
    if (((unsigned char)v0_3 == 1)) goto L_C0F341E;
    if ((v0_1 == 2)) goto L_C0F3412;
    if ((v0_1 == 13)) goto L_C0F341E;
    if ((v0_1 == 28)) goto L_C0F341E;
    if ((v0_1 == 34)) goto L_C0F341E;
    if ((v0_1 == 40)) goto L_C0F341E;
    if ((v0_1 == 51)) goto L_C0F341E;
    if ((v0_1 == 52)) goto L_C0F341E;
    if ((v0_1 == 56)) goto L_C0F3416;
    if ((v0_1 == 57)) goto L_C0F3416;
    if ((v0_1 == 58)) goto L_C0F3416;
    if ((v0_1 == 59)) goto L_C0F3416;
    if ((v0_1 == 60)) goto L_C0F3416;
    if ((v0_1 == 61)) goto L_C0F3416;
    L_C0F341E:;
    (((struct o20_ushort *)(v0_0))->v) = v0_2;
    goto L_C0F3422;
    L_C0F3416:;
    v0_1 = (0x14);
    L_C0F3418:;
    (((struct o20_ushort *)(v0_0))->v) = v0_1;
    goto L_C0F3422;
    L_C0F3412:;
    v0_1 = (0x12);
    goto L_C0F3418;
}

int FUN_0c140464(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 - 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 - 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 - 0.0500000007f);
                t1 = (((struct oC8_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oCC_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oD0_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oD4_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oD8_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oDC_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oE0_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oE4_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oE8_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oEC_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oF0_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oF4_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oF8_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct oFC_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = (((struct o100_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o88_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o84_float *)(t1))->v) = (u0 + 0.0500000007f);
                u0 = (((struct o20_float *)(t1))->v);
                (((struct o20_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o1C_float *)(t1))->v) = (u0 + 0.0500000007f);
                (((struct o18_float *)(t1))->v) = (u0 + 0.0500000007f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 3) {
                t1 = t0;
                if ((*(signed char *)0xC5421F8) != 0) {
                    t0 = *(signed char *)0xC5421F9;
                    t2 = t0;
                    if (t0 == 6) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t1 = t2;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, 0x1, a7);
        }
    } else {
        t0 = (((struct oC4_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oE4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oE8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oEC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oF4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oF8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oFC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o100_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o8C_float *)(t0))->v);
    (((struct o8C_float *)(t0))->v) = (u0 + 0.0500000007f);
    (((struct o88_float *)(t0))->v) = (u0 + 0.0500000007f);
    (((struct o84_float *)(t0))->v) = (u0 + 0.0500000007f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        t0 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        (((struct o20_float *)(t0))->v) = 1.0f;
        (((struct o1C_float *)(t0))->v) = 1.0f;
        (((struct o18_float *)(t0))->v) = 1.0f;
        t0 = (((struct oC8_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oCC_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A2254); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oD0_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A2260); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oD4_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A226C); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oD8_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A2278); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oDC_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A2284); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oE0_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A2290); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oE4_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A229C); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oE8_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A22A8); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oEC_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A22B4); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oF0_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A22C0); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oF4_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A22CC); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oF8_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A22D8); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct oFC_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A22E4); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        t0 = (((struct o100_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC2A22F0); }
        (((struct o8C_float *)(t0))->v) = 0.0f;
        (((struct o88_float *)(t0))->v) = 0.0f;
        (((struct o84_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o18_float *)(t0))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

void FUN_0c0d0ec2(int a4)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t6;
    register int t15;
    register int t24;
    register int t31;
    register int t45;
    register int t60;
    register int t61;
    register int t65;
    register int t66;
    register int t67;
    register int t68;
    register int t91;
    register int t92;
    register int t110;
    register int t119;
    register int t126;
    register int t138;
    register int t147;
    register int t148;
    register int t149;
    register int t151;
    register int t155;
    register int t156;
    register int t159;
    register int t184;
    register int t191;
    register int t203;
    register int t212;
    register int t213;
    register int t214;
    register int t216;
    register int t220;
    register int t221;
    register int t224;
    register int t248;
    register int t262;
    register int t263;
    register int t264;
    register int t265;
    register int t266;
    register int t292;
    register int t298;
    register int t349;
    register int t353;
    register int t362;
    register int t371;
    register int t378;
    register int t392;
    register int t407;
    register int t408;
    register int t412;
    register int t413;
    register int t414;
    register int t415;
    register int t438;
    register int t439;
    register int t457;
    register int t466;
    register int t473;
    register int t485;
    register int t494;
    register int t495;
    register int t496;
    register int t498;
    register int t502;
    register int t503;
    register int t506;
    register int t531;
    register int t538;
    register int t550;
    register int t559;
    register int t560;
    register int t561;
    register int t563;
    register int t567;
    register int t568;
    register int t571;
    register int t595;
    register int t609;
    register int t610;
    register int t611;
    register int t612;
    register int t613;
    register int t639;
    register int t645;
    register float u69;
    register float u70;
    register int t74;
    register float u75;
    register float u76;
    register float u150;
    register float u215;
    register int t272;
    register int t274;
    register float u416;
    register float u417;
    register int t421;
    register float u422;
    register float u423;
    register float u497;
    register float u562;
    register int t619;
    register int t621;

    t0 = *(signed char *)0xC54098C;
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c0d0cc8();
            t2 = *(signed char *)0xC54098D;
            if ((unsigned int)t2 < (unsigned int)0x10) {
                switch ((t2 << 1)) {
                    case 0:
                    {
                        FUN_0c0d0dd8(0x0);
                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                        t6 = FUN_0c0d0e8c();
                        if (t6 == 0) {
                        } else {
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                            thunk_FUN_0c0d0d26();
                            FUN_0c0d0378(0x0, 0x5);
                            thunk_FUN_0c05abb2(0x58, 0x0);
                            FUN_0c0d2f38(0x0);
                            FUN_0c0d2f38(0x1);
                        }
                    }
                        break;
                    case 2:
                    {
                        t15 = FUN_0c0d0e8c();
                        if (t15 == 0) {
                        } else {
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                            thunk_FUN_0c0d0d26();
                            FUN_0c0d0378(0x0, 0x5);
                            thunk_FUN_0c05abb2(0x58, 0x0);
                            FUN_0c0d2f38(0x0);
                            FUN_0c0d2f38(0x1);
                        }
                    }
                        break;
                    case 4:
                    {
                        t24 = FUN_0c042fe0();
                        if (t24 == 0) {
                        } else {
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                            FUN_0c0d0e88();
                            FUN_0c05af9a(0x58, 0x40, 0x78);
                            (((struct o8_ushort *)0xC54098C)->v) = ((((struct o0_short *)0xC1C74F4)->v));
                        }
                    }
                        break;
                    case 6:
                    {
                        t31 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t31 - 1);
                        if ((int)(short)(t31 - 1) >= 0) {
                        } else {
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                        }
                    }
                        break;
                    case 8:
                    {
                        if ((*(signed char *)((0x14 + ((((struct o0_int *)0xC540DA8)->v))))) != 2) {
                        } else {
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                            FUN_0c07c19c(0x1F);
                            (((struct o8_ushort *)0xC54098C)->v) = ((((struct o2_short *)0xC1C74F4)->v));
                            FUN_0c0d039e(0x0, 0x1);
                        }
                    }
                        break;
                    case 10:
                    {
                        t45 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t45 - 1);
                        if ((int)(short)(t45 - 1) >= 0) {
                        } else {
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                        }
                    }
                        break;
                    case 12:
                    {
                        if ((*(signed char *)((0x14 + ((((struct o4_int *)0xC540DA8)->v))))) != 2) {
                        } else {
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                            FUN_0c07c19c(0x1F);
                            FUN_0c0d039e(0x2, 0x3);
                            (((struct o8_ushort *)0xC54098C)->v) = ((((struct o4_short *)0xC1C74F4)->v));
                            FUN_0c05af9a(0x58, 0x7F, 0x1A4);
                        }
                    }
                        break;
                    case 14:
                    {
                        t60 = FUN_0c042fe0();
                        if (t60 == 0) {
                        } else {
                            t61 = (((struct o8_short *)0xC54098C)->v);
                            (((struct o8_ushort *)0xC54098C)->v) = (t61 - 1);
                            if ((int)(short)(t61 - 1) < 0) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                FUN_0c07c19c(0xD);
                                t65 = (((struct o6_short *)0xC1C74F4)->v);
                                (((struct o8_ushort *)0xC54098C)->v) = t65;
                                t66 = 0xC532498;
                                t67 = 0xC532498;
                                t68 = 0xC532498;
                                for (;;) {
                                    if ((unsigned int)t68 >= (unsigned int)0xC540978) {
                                        break;
                                    }
                                    t65 = 0x160;
                                    u70 = 0.0f;
                                    u69 = (*(float *)((t68 + t65)));
                                    if (u69 > u70) {
                                        t66 = t67;
                                        t65 = (FUN_0c085cac(t66, 0x17, 0x0));
                                    } else {
                                        t74 = t66;
                                        u75 = u69;
                                        u76 = u70;
                                    }
                                    u69 = u75;
                                    u70 = u76;
                                    t68 = (t68 + 0x3938);
                                    t66 = t74;
                                    t67 = (t67 + 0x3938);
                                }
                                FUN_0c05b052(((((struct o8_short *)0xC54098C)->v)), 0x0);
                                FUN_0c059c7a(0x2, 0x0);
                            }
                        }
                    }
                        break;
                    case 16:
                    {
                        t91 = FUN_0c042fe0();
                        if (t91 == 0) {
                        } else {
                            t92 = (((struct o8_short *)0xC54098C)->v);
                            (((struct o8_ushort *)0xC54098C)->v) = (t92 - 1);
                            if ((int)(short)(t92 - 1) >= 0) {
                            } else {
                                FUN_0c0d039e(0x4, 0x5);
                                *(unsigned char *)0xC540F98 = 0x1;
                                FUN_0c0d0dd8(0x1);
                                (((struct o1_uchar *)0xC54098C)->v) = 0x9;
                                thunk_FUN_0c05abb2(0x42, 0x0);
                                thunk_FUN_0c05abb2(0x43, 0x0);
                                (((struct o0_uchar *)0xC542235)->v) = 0x0;
                                FUN_0c05af9a(0x58, 0x0, 0x1);
                                FUN_0c059d30();
                            }
                        }
                    }
                        break;
                    case 18:
                    {
                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                        (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                        thunk_FUN_0c0d0d26();
                        FUN_0c0d0e88();
                        (((struct o8_ushort *)0xC54098C)->v) = ((((struct o8_short *)0xC1C74F4)->v));
                        FUN_0c0d02a6();
                        FUN_0c0d0378(0x6, 0x8);
                        *(unsigned int *)(((int)stk + 4)) = 0xC540978;
                        t110 = 0xC532498;
                        for (;;) {
                            if ((unsigned int)t110 >= (unsigned int)(*(int *)(((int)stk + 4)))) {
                                break;
                            }
                            FUN_0c085cac(t110, 0x1B, 0x0);
                            t110 = (t110 + 0x3938);
                        }
                        thunk_FUN_0c05abb2(0x59, 0x0);
                        if ((*(signed char *)0xC542377) == 0) {
                            (((struct oC_ushort *)0xC54098C)->v) = 0x0;
                        } else {
                            (((struct oC_ushort *)0xC54098C)->v) = 0x1;
                        }
                        FUN_0c03592a();
                        (((struct o0_uchar *)0xC542235)->v) = 0x2;
                        if ((*(signed char *)0xC54098E) != 0) {
                            t119 = (((struct o8_short *)0xC54098C)->v);
                            (((struct o8_ushort *)0xC54098C)->v) = (t119 - 1);
                            if ((int)(short)(t119 - 1) < 0) {
                                *(unsigned char *)0xC540F98 = 0x1;
                                FUN_0c0d0dd8(0x2);
                                (((struct o1_uchar *)0xC54098C)->v) = 0xB;
                                FUN_0c05af9a(0x59, 0x0, 0x1);
                                FUN_0c059d30();
                                (((struct o0_uchar *)0xC542235)->v) = 0x0;
                            }
                            t126 = (((struct o8_short *)0xC54098C)->v);
                            if ((int)t126 >= (int)0x1E) {
                            } else {
                                FUN_0c05b052(t126, 0x0);
                            }
                        } else {
                            (((struct oE_ushort *)0xC54098C)->v) = ((short)((((struct o8_short *)0xC54098C)->v)) * (short)0xD);
                            t148 = *(short *)(((((((struct oC_short *)0xC54098C)->v)) << 1) + 0xC1C74FE));
                            if (((((struct o8_short *)0xC54098C)->v)) == t148) {
                                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                                t138 = (((struct oC_short *)0xC54098C)->v);
                                FUN_0c0c2944(0x19, 0x0, 0x0, ((((t138 << 1) + t138) << 2) + 0xC1C7504), 0xFFFFFFFF);
                                (((struct oC_ushort *)0xC54098C)->v) = (((((struct oC_short *)0xC54098C)->v)) + 0x1);
                            } else {
                            }
                            t147 = 0xC0D133C;
                            t149 = 0x120;
                            for (;;) {
                                if ((unsigned int)t149 > (unsigned int)0x180) {
                                    break;
                                }
                                t147 = 0x59C;
                                t151 = *(int *)((0xC540978 + t147));
                                *(int *)((int)stk + 0) = (0x4 + (t151 + t149));
                                t147 = (nlRand());
                                if ((int)t147 >= 0) {
                                    t147 = (t147 & 0x3F);
                                } else {
                                    t147 = (~t147);
                                    t147 = (t147 + 0x1);
                                    t147 = (t147 & 0x3F);
                                    t147 = (~t147);
                                    t147 = (t147 + 0x1);
                                }
                                t155 = t147;
                                t147 = 0x59C;
                                t148 = (0x4 + (t151 + t149));
                                u150 = (float)t155;
                                u150 = (u150 / 64.0f);
                                u150 = (u150 + -0.5f);
                                u150 = (u150 * 1000.0f);
                                *(float *)((t148 + 0x0)) = u150;
                                t156 = *(int *)((0xC540978 + t147));
                                *(int *)((int)stk + 0) = (0xC + (t156 + t149));
                                t147 = (nlRand());
                                if ((int)t147 >= 0) {
                                    t147 = (t147 & 0x3F);
                                } else {
                                    t147 = (~t147);
                                    t147 = (t147 + 0x1);
                                    t147 = (t147 & 0x3F);
                                    t147 = (~t147);
                                    t147 = (t147 + 0x1);
                                }
                                t149 = (t149 + 0x30);
                                t148 = (0xC + (t156 + t149));
                                u150 = (float)t147;
                                u150 = (u150 / 64.0f);
                                u150 = (u150 + -0.5f);
                                u150 = (u150 * 1000.0f);
                                *(float *)((t148 + 0x0)) = u150;
                            }
                            t159 = (((struct o8_short *)0xC54098C)->v);
                            (((struct o8_ushort *)0xC54098C)->v) = (t159 - 1);
                            if ((int)(short)(t159 - 1) >= 0) {
                            } else {
                                (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                FUN_0c0d02a6();
                                (((struct o8_ushort *)0xC54098C)->v) = 0x78;
                                (((struct o0_uchar *)0xC542235)->v) = 0x0;
                                { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 4) + 0x4)) = *(struct mv5 *)((*(int *)0xC241BB8)); }
                                *(unsigned char *)(((int)stk + 17)) = 0x3;
                                FUN_0c0522be((((int)stk + 4) + 0x4));
                            }
                        }
                    }
                        break;
                    case 20:
                    {
                        if ((*(signed char *)0xC54098E) != 0) {
                            t184 = (((struct o8_short *)0xC54098C)->v);
                            (((struct o8_ushort *)0xC54098C)->v) = (t184 - 1);
                            if ((int)(short)(t184 - 1) < 0) {
                                *(unsigned char *)0xC540F98 = 0x1;
                                FUN_0c0d0dd8(0x2);
                                (((struct o1_uchar *)0xC54098C)->v) = 0xB;
                                FUN_0c05af9a(0x59, 0x0, 0x1);
                                FUN_0c059d30();
                                (((struct o0_uchar *)0xC542235)->v) = 0x0;
                            }
                            t191 = (((struct o8_short *)0xC54098C)->v);
                            if ((int)t191 >= (int)0x1E) {
                            } else {
                                FUN_0c05b052(t191, 0x0);
                            }
                        } else {
                            (((struct oE_ushort *)0xC54098C)->v) = ((short)((((struct o8_short *)0xC54098C)->v)) * (short)0xD);
                            t213 = *(short *)(((((((struct oC_short *)0xC54098C)->v)) << 1) + 0xC1C74FE));
                            if (((((struct o8_short *)0xC54098C)->v)) == t213) {
                                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                                t203 = (((struct oC_short *)0xC54098C)->v);
                                FUN_0c0c2944(0x19, 0x0, 0x0, ((((t203 << 1) + t203) << 2) + 0xC1C7504), 0xFFFFFFFF);
                                (((struct oC_ushort *)0xC54098C)->v) = (((((struct oC_short *)0xC54098C)->v)) + 0x1);
                            } else {
                            }
                            t212 = 0xC0D133C;
                            t214 = 0x120;
                            for (;;) {
                                if ((unsigned int)t214 > (unsigned int)0x180) {
                                    break;
                                }
                                t212 = 0x59C;
                                t216 = *(int *)((0xC540978 + t212));
                                *(int *)((int)stk + 0) = (0x4 + (t216 + t214));
                                t212 = (nlRand());
                                if ((int)t212 >= 0) {
                                    t212 = (t212 & 0x3F);
                                } else {
                                    t212 = (~t212);
                                    t212 = (t212 + 0x1);
                                    t212 = (t212 & 0x3F);
                                    t212 = (~t212);
                                    t212 = (t212 + 0x1);
                                }
                                t220 = t212;
                                t212 = 0x59C;
                                t213 = (0x4 + (t216 + t214));
                                u215 = (float)t220;
                                u215 = (u215 / 64.0f);
                                u215 = (u215 + -0.5f);
                                u215 = (u215 * 1000.0f);
                                *(float *)((t213 + 0x0)) = u215;
                                t221 = *(int *)((0xC540978 + t212));
                                *(int *)((int)stk + 0) = (0xC + (t221 + t214));
                                t212 = (nlRand());
                                if ((int)t212 >= 0) {
                                    t212 = (t212 & 0x3F);
                                } else {
                                    t212 = (~t212);
                                    t212 = (t212 + 0x1);
                                    t212 = (t212 & 0x3F);
                                    t212 = (~t212);
                                    t212 = (t212 + 0x1);
                                }
                                t214 = (t214 + 0x30);
                                t213 = (0xC + (t221 + t214));
                                u215 = (float)t212;
                                u215 = (u215 / 64.0f);
                                u215 = (u215 + -0.5f);
                                u215 = (u215 * 1000.0f);
                                *(float *)((t213 + 0x0)) = u215;
                            }
                            t224 = (((struct o8_short *)0xC54098C)->v);
                            (((struct o8_ushort *)0xC54098C)->v) = (t224 - 1);
                            if ((int)(short)(t224 - 1) >= 0) {
                            } else {
                                (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                FUN_0c0d02a6();
                                (((struct o8_ushort *)0xC54098C)->v) = 0x78;
                                (((struct o0_uchar *)0xC542235)->v) = 0x0;
                                { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 4) + 0x4)) = *(struct mv5 *)((*(int *)0xC241BB8)); }
                                *(unsigned char *)(((int)stk + 17)) = 0x3;
                                FUN_0c0522be((((int)stk + 4) + 0x4));
                            }
                        }
                    }
                        break;
                    case 22:
                    {
                        t248 = FUN_0c0d0e8c();
                        if (t248 != 0) {
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                            thunk_FUN_0c0d0d26();
                            FUN_0c0d0e88();
                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                            FUN_0c0d02a6();
                            if ((*(signed char *)0xC5429B4) == 2) {
                                FUN_0c0d0378(0x9, 0xE);
                            } else {
                                FUN_0c0d0378(0x9, 0x12);
                            }
                            thunk_FUN_0c05abb2(0x5A, 0x0);
                            FUN_0c05af9a(0x5A, 0x40, 0xB4);
                            { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 4) + 0x4)) = *(struct mv5 *)((*(int *)0xC241BB8)); }
                            *(unsigned char *)(((int)stk + 17)) = 0x2;
                            FUN_0c0522be((((int)stk + 4) + 0x4));
                            *(unsigned int *)(((int)stk + 4)) = 0xC540978;
                            t262 = 0xC0D1478;
                            t263 = 0xE4E0;
                            t264 = 0xC532498;
                            t265 = 0xC532498;
                            t266 = 0xC532498;
                            for (;;) {
                                if ((unsigned int)t265 >= (unsigned int)(*(int *)(((int)stk + 4)))) {
                                    break;
                                }
                                t262 = 0x3714;
                                t263 = (*(signed char *)((t265 + t262)));
                                if (t263 != 0) {
                                    t262 = 0x2C;
                                    *(float *)((t266 + t262)) = ((*(float *)((t266 + t262))) + 4000.0f);
                                    t264 = t266;
                                    t262 = (FUN_0c085cac(t264, 0x17, 0x1));
                                } else {
                                    t272 = t263;
                                    t274 = t264;
                                }
                                t263 = t272;
                                t264 = t274;
                                t265 = (t265 + 0x3938);
                                t266 = (t266 + 0x3938);
                            }
                            (((struct o0_uchar *)0xC542235)->v) = 0x2;
                        }
                    }
                        break;
                    case 24:
                    {
                    }
                        break;
                    case 26:
                    {
                        if ((*(signed char *)0xC54223C) == 1) {
                            (((struct o7_uchar *)0xC542235)->v) = 0x0;
                        }
                        FUN_0c0d0dd8((*(signed char *)0xC54223C));
                        (((struct o1_uchar *)0xC54098C)->v) = 0xE;
                        thunk_FUN_0c05abb2(0x4C, 0x0);
                        t292 = FUN_0c0d0e8c();
                        if (t292 != 0) {
                            (((struct o1_uchar *)0xC54098C)->v) = 0xF;
                            FUN_0c0d02a6();
                            FUN_0c0d2f38(0x0);
                            FUN_0c0d2f38(0x1);
                        }
                    }
                        break;
                    case 28:
                    {
                        t298 = FUN_0c0d0e8c();
                        if (t298 != 0) {
                            (((struct o1_uchar *)0xC54098C)->v) = 0xF;
                            FUN_0c0d02a6();
                            FUN_0c0d2f38(0x0);
                            FUN_0c0d2f38(0x1);
                        }
                    }
                        break;
                    default:
                    {
                    }
                        break;
                }
            }
        }
    } else {
        (((struct o0_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098C) + 0x1);
        (((struct o18_uint *)0xC540A20)->v) = 0x0;
        (((struct o0_uchar *)0xC540A20)->v) = 0x0;
        (((struct o1_uchar *)0xC54098C)->v) = 0x0;
        FUN_0c0d0cc8();
        t349 = *(signed char *)0xC54098D;
        if ((unsigned int)t349 < (unsigned int)0x10) {
            switch ((t349 << 1)) {
                case 0:
                {
                    FUN_0c0d0dd8(0x0);
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    t353 = FUN_0c0d0e8c();
                    if (t353 == 0) {
                    } else {
                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                        thunk_FUN_0c0d0d26();
                        FUN_0c0d0378(0x0, 0x5);
                        thunk_FUN_0c05abb2(0x58, 0x0);
                        FUN_0c0d2f38(0x0);
                        FUN_0c0d2f38(0x1);
                    }
                }
                    break;
                case 2:
                {
                    t362 = FUN_0c0d0e8c();
                    if (t362 == 0) {
                    } else {
                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                        thunk_FUN_0c0d0d26();
                        FUN_0c0d0378(0x0, 0x5);
                        thunk_FUN_0c05abb2(0x58, 0x0);
                        FUN_0c0d2f38(0x0);
                        FUN_0c0d2f38(0x1);
                    }
                }
                    break;
                case 4:
                {
                    t371 = FUN_0c042fe0();
                    if (t371 == 0) {
                    } else {
                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                        FUN_0c0d0e88();
                        FUN_0c05af9a(0x58, 0x40, 0x78);
                        (((struct o8_ushort *)0xC54098C)->v) = ((((struct o0_short *)0xC1C74F4)->v));
                    }
                }
                    break;
                case 6:
                {
                    t378 = (((struct o8_short *)0xC54098C)->v);
                    (((struct o8_ushort *)0xC54098C)->v) = (t378 - 1);
                    if ((int)(short)(t378 - 1) >= 0) {
                    } else {
                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    }
                }
                    break;
                case 8:
                {
                    if ((*(signed char *)((0x14 + ((((struct o0_int *)0xC540DA8)->v))))) != 2) {
                    } else {
                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                        FUN_0c07c19c(0x1F);
                        (((struct o8_ushort *)0xC54098C)->v) = ((((struct o2_short *)0xC1C74F4)->v));
                        FUN_0c0d039e(0x0, 0x1);
                    }
                }
                    break;
                case 10:
                {
                    t392 = (((struct o8_short *)0xC54098C)->v);
                    (((struct o8_ushort *)0xC54098C)->v) = (t392 - 1);
                    if ((int)(short)(t392 - 1) >= 0) {
                    } else {
                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    }
                }
                    break;
                case 12:
                {
                    if ((*(signed char *)((0x14 + ((((struct o4_int *)0xC540DA8)->v))))) != 2) {
                    } else {
                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                        FUN_0c07c19c(0x1F);
                        FUN_0c0d039e(0x2, 0x3);
                        (((struct o8_ushort *)0xC54098C)->v) = ((((struct o4_short *)0xC1C74F4)->v));
                        FUN_0c05af9a(0x58, 0x7F, 0x1A4);
                    }
                }
                    break;
                case 14:
                {
                    t407 = FUN_0c042fe0();
                    if (t407 == 0) {
                    } else {
                        t408 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t408 - 1);
                        if ((int)(short)(t408 - 1) < 0) {
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                            FUN_0c07c19c(0xD);
                            t412 = (((struct o6_short *)0xC1C74F4)->v);
                            (((struct o8_ushort *)0xC54098C)->v) = t412;
                            t413 = 0xC532498;
                            t414 = 0xC532498;
                            t415 = 0xC532498;
                            for (;;) {
                                if ((unsigned int)t415 >= (unsigned int)0xC540978) {
                                    break;
                                }
                                t412 = 0x160;
                                u417 = 0.0f;
                                u416 = (*(float *)((t415 + t412)));
                                if (u416 > u417) {
                                    t413 = t414;
                                    t412 = (FUN_0c085cac(t413, 0x17, 0x0));
                                } else {
                                    t421 = t413;
                                    u422 = u416;
                                    u423 = u417;
                                }
                                u416 = u422;
                                u417 = u423;
                                t415 = (t415 + 0x3938);
                                t413 = t421;
                                t414 = (t414 + 0x3938);
                            }
                            FUN_0c05b052(((((struct o8_short *)0xC54098C)->v)), 0x0);
                            FUN_0c059c7a(0x2, 0x0);
                        }
                    }
                }
                    break;
                case 16:
                {
                    t438 = FUN_0c042fe0();
                    if (t438 == 0) {
                    } else {
                        t439 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t439 - 1);
                        if ((int)(short)(t439 - 1) >= 0) {
                        } else {
                            FUN_0c0d039e(0x4, 0x5);
                            *(unsigned char *)0xC540F98 = 0x1;
                            FUN_0c0d0dd8(0x1);
                            (((struct o1_uchar *)0xC54098C)->v) = 0x9;
                            thunk_FUN_0c05abb2(0x42, 0x0);
                            thunk_FUN_0c05abb2(0x43, 0x0);
                            (((struct o0_uchar *)0xC542235)->v) = 0x0;
                            FUN_0c05af9a(0x58, 0x0, 0x1);
                            FUN_0c059d30();
                        }
                    }
                }
                    break;
                case 18:
                {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                    thunk_FUN_0c0d0d26();
                    FUN_0c0d0e88();
                    (((struct o8_ushort *)0xC54098C)->v) = ((((struct o8_short *)0xC1C74F4)->v));
                    FUN_0c0d02a6();
                    FUN_0c0d0378(0x6, 0x8);
                    *(unsigned int *)(((int)stk + 4)) = 0xC540978;
                    t457 = 0xC532498;
                    for (;;) {
                        if ((unsigned int)t457 >= (unsigned int)(*(int *)(((int)stk + 4)))) {
                            break;
                        }
                        FUN_0c085cac(t457, 0x1B, 0x0);
                        t457 = (t457 + 0x3938);
                    }
                    thunk_FUN_0c05abb2(0x59, 0x0);
                    if ((*(signed char *)0xC542377) == 0) {
                        (((struct oC_ushort *)0xC54098C)->v) = 0x0;
                    } else {
                        (((struct oC_ushort *)0xC54098C)->v) = 0x1;
                    }
                    FUN_0c03592a();
                    (((struct o0_uchar *)0xC542235)->v) = 0x2;
                    if ((*(signed char *)0xC54098E) != 0) {
                        t466 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t466 - 1);
                        if ((int)(short)(t466 - 1) < 0) {
                            *(unsigned char *)0xC540F98 = 0x1;
                            FUN_0c0d0dd8(0x2);
                            (((struct o1_uchar *)0xC54098C)->v) = 0xB;
                            FUN_0c05af9a(0x59, 0x0, 0x1);
                            FUN_0c059d30();
                            (((struct o0_uchar *)0xC542235)->v) = 0x0;
                        }
                        t473 = (((struct o8_short *)0xC54098C)->v);
                        if ((int)t473 >= (int)0x1E) {
                        } else {
                            FUN_0c05b052(t473, 0x0);
                        }
                    } else {
                        (((struct oE_ushort *)0xC54098C)->v) = ((short)((((struct o8_short *)0xC54098C)->v)) * (short)0xD);
                        t495 = *(short *)(((((((struct oC_short *)0xC54098C)->v)) << 1) + 0xC1C74FE));
                        if (((((struct o8_short *)0xC54098C)->v)) == t495) {
                            *(int *)((int)stk + 0) = 0xFFFFFFFF;
                            t485 = (((struct oC_short *)0xC54098C)->v);
                            FUN_0c0c2944(0x19, 0x0, 0x0, ((((t485 << 1) + t485) << 2) + 0xC1C7504), 0xFFFFFFFF);
                            (((struct oC_ushort *)0xC54098C)->v) = (((((struct oC_short *)0xC54098C)->v)) + 0x1);
                        } else {
                        }
                        t494 = 0xC0D133C;
                        t496 = 0x120;
                        for (;;) {
                            if ((unsigned int)t496 > (unsigned int)0x180) {
                                break;
                            }
                            t494 = 0x59C;
                            t498 = *(int *)((0xC540978 + t494));
                            *(int *)((int)stk + 0) = (0x4 + (t498 + t496));
                            t494 = (nlRand());
                            if ((int)t494 >= 0) {
                                t494 = (t494 & 0x3F);
                            } else {
                                t494 = (~t494);
                                t494 = (t494 + 0x1);
                                t494 = (t494 & 0x3F);
                                t494 = (~t494);
                                t494 = (t494 + 0x1);
                            }
                            t502 = t494;
                            t494 = 0x59C;
                            t495 = (0x4 + (t498 + t496));
                            u497 = (float)t502;
                            u497 = (u497 / 64.0f);
                            u497 = (u497 + -0.5f);
                            u497 = (u497 * 1000.0f);
                            *(float *)((t495 + 0x0)) = u497;
                            t503 = *(int *)((0xC540978 + t494));
                            *(int *)((int)stk + 0) = (0xC + (t503 + t496));
                            t494 = (nlRand());
                            if ((int)t494 >= 0) {
                                t494 = (t494 & 0x3F);
                            } else {
                                t494 = (~t494);
                                t494 = (t494 + 0x1);
                                t494 = (t494 & 0x3F);
                                t494 = (~t494);
                                t494 = (t494 + 0x1);
                            }
                            t496 = (t496 + 0x30);
                            t495 = (0xC + (t503 + t496));
                            u497 = (float)t494;
                            u497 = (u497 / 64.0f);
                            u497 = (u497 + -0.5f);
                            u497 = (u497 * 1000.0f);
                            *(float *)((t495 + 0x0)) = u497;
                        }
                        t506 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t506 - 1);
                        if ((int)(short)(t506 - 1) >= 0) {
                        } else {
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            FUN_0c0d02a6();
                            (((struct o8_ushort *)0xC54098C)->v) = 0x78;
                            (((struct o0_uchar *)0xC542235)->v) = 0x0;
                            { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 4) + 0x4)) = *(struct mv5 *)((*(int *)0xC241BB8)); }
                            *(unsigned char *)(((int)stk + 17)) = 0x3;
                            FUN_0c0522be((((int)stk + 4) + 0x4));
                        }
                    }
                }
                    break;
                case 20:
                {
                    if ((*(signed char *)0xC54098E) != 0) {
                        t531 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t531 - 1);
                        if ((int)(short)(t531 - 1) < 0) {
                            *(unsigned char *)0xC540F98 = 0x1;
                            FUN_0c0d0dd8(0x2);
                            (((struct o1_uchar *)0xC54098C)->v) = 0xB;
                            FUN_0c05af9a(0x59, 0x0, 0x1);
                            FUN_0c059d30();
                            (((struct o0_uchar *)0xC542235)->v) = 0x0;
                        }
                        t538 = (((struct o8_short *)0xC54098C)->v);
                        if ((int)t538 >= (int)0x1E) {
                        } else {
                            FUN_0c05b052(t538, 0x0);
                        }
                    } else {
                        (((struct oE_ushort *)0xC54098C)->v) = ((short)((((struct o8_short *)0xC54098C)->v)) * (short)0xD);
                        t560 = *(short *)(((((((struct oC_short *)0xC54098C)->v)) << 1) + 0xC1C74FE));
                        if (((((struct o8_short *)0xC54098C)->v)) == t560) {
                            *(int *)((int)stk + 0) = 0xFFFFFFFF;
                            t550 = (((struct oC_short *)0xC54098C)->v);
                            FUN_0c0c2944(0x19, 0x0, 0x0, ((((t550 << 1) + t550) << 2) + 0xC1C7504), 0xFFFFFFFF);
                            (((struct oC_ushort *)0xC54098C)->v) = (((((struct oC_short *)0xC54098C)->v)) + 0x1);
                        } else {
                        }
                        t559 = 0xC0D133C;
                        t561 = 0x120;
                        for (;;) {
                            if ((unsigned int)t561 > (unsigned int)0x180) {
                                break;
                            }
                            t559 = 0x59C;
                            t563 = *(int *)((0xC540978 + t559));
                            *(int *)((int)stk + 0) = (0x4 + (t563 + t561));
                            t559 = (nlRand());
                            if ((int)t559 >= 0) {
                                t559 = (t559 & 0x3F);
                            } else {
                                t559 = (~t559);
                                t559 = (t559 + 0x1);
                                t559 = (t559 & 0x3F);
                                t559 = (~t559);
                                t559 = (t559 + 0x1);
                            }
                            t567 = t559;
                            t559 = 0x59C;
                            t560 = (0x4 + (t563 + t561));
                            u562 = (float)t567;
                            u562 = (u562 / 64.0f);
                            u562 = (u562 + -0.5f);
                            u562 = (u562 * 1000.0f);
                            *(float *)((t560 + 0x0)) = u562;
                            t568 = *(int *)((0xC540978 + t559));
                            *(int *)((int)stk + 0) = (0xC + (t568 + t561));
                            t559 = (nlRand());
                            if ((int)t559 >= 0) {
                                t559 = (t559 & 0x3F);
                            } else {
                                t559 = (~t559);
                                t559 = (t559 + 0x1);
                                t559 = (t559 & 0x3F);
                                t559 = (~t559);
                                t559 = (t559 + 0x1);
                            }
                            t561 = (t561 + 0x30);
                            t560 = (0xC + (t568 + t561));
                            u562 = (float)t559;
                            u562 = (u562 / 64.0f);
                            u562 = (u562 + -0.5f);
                            u562 = (u562 * 1000.0f);
                            *(float *)((t560 + 0x0)) = u562;
                        }
                        t571 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t571 - 1);
                        if ((int)(short)(t571 - 1) >= 0) {
                        } else {
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            FUN_0c0d02a6();
                            (((struct o8_ushort *)0xC54098C)->v) = 0x78;
                            (((struct o0_uchar *)0xC542235)->v) = 0x0;
                            { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 4) + 0x4)) = *(struct mv5 *)((*(int *)0xC241BB8)); }
                            *(unsigned char *)(((int)stk + 17)) = 0x3;
                            FUN_0c0522be((((int)stk + 4) + 0x4));
                        }
                    }
                }
                    break;
                case 22:
                {
                    t595 = FUN_0c0d0e8c();
                    if (t595 != 0) {
                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                        thunk_FUN_0c0d0d26();
                        FUN_0c0d0e88();
                        (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                        FUN_0c0d02a6();
                        if ((*(signed char *)0xC5429B4) == 2) {
                            FUN_0c0d0378(0x9, 0xE);
                        } else {
                            FUN_0c0d0378(0x9, 0x12);
                        }
                        thunk_FUN_0c05abb2(0x5A, 0x0);
                        FUN_0c05af9a(0x5A, 0x40, 0xB4);
                        { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 4) + 0x4)) = *(struct mv5 *)((*(int *)0xC241BB8)); }
                        *(unsigned char *)(((int)stk + 17)) = 0x2;
                        FUN_0c0522be((((int)stk + 4) + 0x4));
                        *(unsigned int *)(((int)stk + 4)) = 0xC540978;
                        t609 = 0xC0D1478;
                        t610 = 0xE4E0;
                        t611 = 0xC532498;
                        t612 = 0xC532498;
                        t613 = 0xC532498;
                        for (;;) {
                            if ((unsigned int)t612 >= (unsigned int)(*(int *)(((int)stk + 4)))) {
                                break;
                            }
                            t609 = 0x3714;
                            t610 = (*(signed char *)((t612 + t609)));
                            if (t610 != 0) {
                                t609 = 0x2C;
                                *(float *)((t613 + t609)) = ((*(float *)((t613 + t609))) + 4000.0f);
                                t611 = t613;
                                t609 = (FUN_0c085cac(t611, 0x17, 0x1));
                            } else {
                                t619 = t610;
                                t621 = t611;
                            }
                            t610 = t619;
                            t611 = t621;
                            t612 = (t612 + 0x3938);
                            t613 = (t613 + 0x3938);
                        }
                        (((struct o0_uchar *)0xC542235)->v) = 0x2;
                    }
                }
                    break;
                case 24:
                {
                }
                    break;
                case 26:
                {
                    if ((*(signed char *)0xC54223C) == 1) {
                        (((struct o7_uchar *)0xC542235)->v) = 0x0;
                    }
                    FUN_0c0d0dd8((*(signed char *)0xC54223C));
                    (((struct o1_uchar *)0xC54098C)->v) = 0xE;
                    thunk_FUN_0c05abb2(0x4C, 0x0);
                    t639 = FUN_0c0d0e8c();
                    if (t639 != 0) {
                        (((struct o1_uchar *)0xC54098C)->v) = 0xF;
                        FUN_0c0d02a6();
                        FUN_0c0d2f38(0x0);
                        FUN_0c0d2f38(0x1);
                    }
                }
                    break;
                case 28:
                {
                    t645 = FUN_0c0d0e8c();
                    if (t645 != 0) {
                        (((struct o1_uchar *)0xC54098C)->v) = 0xF;
                        FUN_0c0d02a6();
                        FUN_0c0d2f38(0x0);
                        FUN_0c0d2f38(0x1);
                    }
                }
                    break;
                default:
                {
                }
                    break;
            }
        }
    }
}

int FUN_0c0e1524(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t2;
    register int t3;
    register int t6;
    register int t10;
    register int t12;
    register int t14;
    register int t26;
    register int t36;
    register int t38;
    register int t40;
    register int t43;
    register int t62;
    register int t63;
    register int t77;
    register int t82;
    register int t83;
    register int t96;
    register int t99;
    register int t107;
    register int t108;
    register int t113;
    register int t131;
    register int t134;
    register int t140;
    register int t148;
    register int t149;
    register int t154;
    register int t172;
    register int t174;
    register int t175;
    register int t191;
    register int t184;
    register int t198;
    register int t209;
    register int t211;
    register int t225;
    register int t227;
    register int t230;
    register int t238;
    register int t242;
    register int t245;
    register int t252;
    register int t255;
    register int t259;
    register int t261;
    register int t268;
    register int t278;
    register int t286;
    register int t291;
    register int t299;
    register int t318;
    register int t320;
    register int t326;
    register int t329;
    register int t333;
    register int t335;
    register int t337;
    register int t349;
    register int t359;
    register int t361;
    register int t363;
    register int t366;
    register int t385;
    register int t386;
    register int t400;
    register int t405;
    register int t406;
    register int t419;
    register int t422;
    register int t430;
    register int t431;
    register int t436;
    register int t454;
    register int t457;
    register int t463;
    register int t471;
    register int t472;
    register int t477;
    register int t495;
    register int t497;
    register int t498;
    register int t514;
    register int t507;
    register int t521;
    register int t532;
    register int t534;
    register int t548;
    register int t550;
    register int t553;
    register int t561;
    register int t565;
    register int t568;
    register int t575;
    register int t578;
    register int t582;
    register int t584;
    register int t591;
    register int t601;
    register int t609;
    register int t614;
    register int t622;
    register int t92;
    register int t48;
    register int t49;
    register int t167;
    register int t283;
    register int t308;
    int t292;
    register int t293;
    int t300;
    register int t301;
    register int t315;
    register int t316;
    register int t317;
    register int t415;
    register int t371;
    register int t372;
    register int t490;
    register int t606;
    register int t631;
    int t615;
    register int t616;
    int t623;
    register int t624;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        t3 = FUN_0c042fe0();
        if (t3 == 0) {
            return t3;
        }
        t6 = *(signed char *)((a4 + 0x15));
        if (t6 != 0) {
            if (t6 != 1) {
                if (t6 == 2) {
                    FUN_0c0e10a8(a4, 0x0, 0x2);
                    t10 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t10 - 1);
                    t12 = (short)(t10 - 1);
                    if ((int)(short)(t10 - 1) > 0) {
                    } else {
                        t12 = (FUN_0c0cff28(a4, 0x3));
                    }
                    return t12;
                }
                if (t6 == 3) {
                    t14 = *(signed char *)((a4 + 0x17));
                    if (t14 != 0) {
                        if (t14 != 1) {
                            if (t14 != 2) {
                                if (t14 != 3) {
                                    t92 = t14;
                                    if (t14 == 4) {
                                        FUN_0c0e1108(a4, 0x0, 0x2);
                                        t92 = 0x22;
                                        if ((int)((((struct o22_short *)(a4))->v)) > 0) {
                                        } else {
                                            FUN_0c0cff28(a4, 0x4);
                                            (((struct o17_uchar *)(a4))->v) = 0x0;
                                            t92 = 0x17;
                                        }
                                    }
                                } else {
                                    FUN_0c0e10a8(a4, 0x2, 0x2);
                                    FUN_0c0e1108(a4, 0x0, 0x1);
                                    t26 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t26 - 1);
                                    t92 = (short)(t26 - 1);
                                    if ((int)(short)(t26 - 1) > 0) {
                                    } else {
                                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                        (((struct o22_ushort *)(a4))->v) = 0x1E;
                                        t92 = (thunk_FUN_0c05abb2(0x57, (a4 + 0x28)));
                                    }
                                }
                            } else {
                                FUN_0c0e10a8(a4, 0x1, 0x2);
                                FUN_0c0e1108(a4, 0x0, 0x0);
                                t36 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t36 - 1);
                                t92 = (short)(t36 - 1);
                                if ((int)(short)(t36 - 1) > 0) {
                                } else {
                                    thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                                    t38 = *(signed char *)((a4 + 0x16));
                                    if ((*(signed char *)(((((t38 << 2) + t38) + 0xC1CA530) + 0x1))) != 0) {
                                        t40 = *(signed char *)((a4 + 0x16));
                                        t48 = (*(int *)((0xC1CA510 + ((*(signed char *)(((((t40 << 2) + t40) + 0xC1CA530) + 0x4))) << 2))));
                                        t49 = 0x2;
                                    } else {
                                        t43 = *(signed char *)((a4 + 0x16));
                                        t48 = (*(int *)((0xC1CA510 + ((*(signed char *)(((((t43 << 2) + t43) + 0xC1CA530) + 0x4))) << 2))));
                                        t49 = 0x0;
                                    }
                                    FUN_0c0e11ee(a4, 0x2, t48, t49);
                                    (((struct o20_ushort *)(a4))->v) = 0x1E;
                                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                    t92 = 0x17;
                                }
                            }
                        } else {
                            FUN_0c0e10a8(a4, 0x0, 0x2);
                            t62 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t62 - 1);
                            t92 = (short)(t62 - 1);
                            if ((int)(short)(t62 - 1) > 0) {
                            } else {
                                t63 = *(signed char *)((a4 + 0x16));
                                FUN_0c0e11ee(a4, 0x1, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t63 << 2) + t63) + 0xC1CA530) + 0x3))) << 2)))), 0x0);
                                *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                                thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                t92 = 0x17;
                            }
                        }
                    } else {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t77 = *(signed char *)((a4 + 0x16));
                        FUN_0c0e11ee(a4, 0x0, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t77 << 2) + t77) + 0xC1CA530) + 0x2))) << 2)))), 0x0);
                        (((struct o22_ushort *)(a4))->v) = 0x0;
                        (((struct o20_ushort *)(a4))->v) = 0x0;
                        *(unsigned short *)((a4 + 0x1E)) = 0x0;
                        FUN_0c0e10a8(a4, 0x0, 0x2);
                        t82 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t82 - 1);
                        t92 = (short)(t82 - 1);
                        if ((int)(short)(t82 - 1) > 0) {
                        } else {
                            t83 = *(signed char *)((a4 + 0x16));
                            FUN_0c0e11ee(a4, 0x1, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t83 << 2) + t83) + 0xC1CA530) + 0x3))) << 2)))), 0x0);
                            *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                            thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            t92 = 0x17;
                        }
                    }
                    return t92;
                }
                if (t6 == 4) {
                    t96 = *(signed char *)((a4 + 0x17));
                    if (t96 != 0) {
                        t167 = t96;
                        if (t96 != 1) {
                        } else {
                            t99 = *(signed char *)((a4 + 0x16));
                            if ((int)(*(signed char *)(((((t99 << 2) + t99) + 0xC1CA530) + 0x0))) >= 0) {
                                FUN_0c0e12aa(a4);
                            }
                            t107 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t107 - 1);
                            t167 = (short)(t107 - 1);
                            if ((int)(short)(t107 - 1) > 0) {
                            } else {
                                (((struct o17_uchar *)(a4))->v) = 0x0;
                                t108 = *(signed char *)((a4 + 0x16));
                                if ((int)(*(signed char *)(((((t108 << 2) + t108) + 0xC1CA530) + 0x0))) < 0) {
                                    FUN_0c0cff28(a4, 0x5);
                                    *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                    t167 = 0x78;
                                } else {
                                    t113 = *(signed char *)((a4 + 0x16));
                                    if ((*(signed char *)((0xC1CA530 + ((t113 << 2) + t113)))) == 4) {
                                        FUN_0c0cff28(a4, 0x7);
                                        *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                        t167 = 0x78;
                                    } else {
                                        t167 = (FUN_0c0cff28(a4, 0x6));
                                    }
                                }
                            }
                        }
                    } else {
                        t131 = *(signed char *)((a4 + 0x16));
                        t134 = 0xA;
                        if ((int)(*(signed char *)(((((t131 << 2) + t131) + 0xC1CA530) + 0x0))) >= 0) {
                            FUN_0c0e1270(a4);
                            t134 = 0x1E;
                        }
                        *(unsigned short *)((a4 + 0x1C)) = t134;
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t140 = *(signed char *)((a4 + 0x16));
                        if ((int)(*(signed char *)(((((t140 << 2) + t140) + 0xC1CA530) + 0x0))) >= 0) {
                            FUN_0c0e12aa(a4);
                        }
                        t148 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t148 - 1);
                        t167 = (short)(t148 - 1);
                        if ((int)(short)(t148 - 1) > 0) {
                        } else {
                            (((struct o17_uchar *)(a4))->v) = 0x0;
                            t149 = *(signed char *)((a4 + 0x16));
                            if ((int)(*(signed char *)(((((t149 << 2) + t149) + 0xC1CA530) + 0x0))) < 0) {
                                FUN_0c0cff28(a4, 0x5);
                                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                t167 = 0x78;
                            } else {
                                t154 = *(signed char *)((a4 + 0x16));
                                if ((*(signed char *)((0xC1CA530 + ((t154 << 2) + t154)))) == 4) {
                                    FUN_0c0cff28(a4, 0x7);
                                    *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                    t167 = 0x78;
                                } else {
                                    t167 = (FUN_0c0cff28(a4, 0x6));
                                }
                            }
                        }
                    }
                    return t167;
                }
                if (t6 == 5) {
                    t172 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t172 - 1);
                    if ((int)(short)(t172 - 1) <= 0) {
                        FUN_0c0cff28(a4, 0x0);
                        return FUN_0c0e1080(a4);
                    }
                    return (short)(t172 - 1);
                }
                if (t6 == 6) {
                    t174 = (((struct oD0_int *)(a4))->v);
                    t175 = *(signed char *)((a4 + 0x17));
                    if (t175 != 0) {
                        if (t175 != 1) {
                            if (t175 != 2) {
                                t191 = t175;
                                if (t175 != 3) {
                                } else {
                                    (((struct o70_float *)(t174))->v) = (((((struct o70_float *)(t174))->v)) - 5.0f);
                                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                                    if ((int)(*(short *)((a4 + 0x1C))) > (int)0x28) {
                                        FUN_0c0e138c(a4);
                                    }
                                    t184 = *(short *)((a4 + 0x1C));
                                    t191 = t184;
                                    if (t184 == 0) {
                                        FUN_0c0cff28(a4, 0x0);
                                        FUN_0c0e1080(a4);
                                        (((struct o17_uchar *)(a4))->v) = 0x0;
                                        t191 = 0x17;
                                    }
                                }
                                return t191;
                            }
                            FUN_0c0e12aa(a4);
                            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                            FUN_0c0e138c(a4);
                            t198 = *(short *)((a4 + 0x1C));
                            if (t198 == 0) {
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                *(unsigned short *)((a4 + 0x1C)) = 0x32;
                                return FUN_0c0e1314(a4);
                            }
                            return t198;
                        }
                        FUN_0c0e12aa(a4);
                        (((struct o70_float *)(t174))->v) = (((((struct o70_float *)(t174))->v)) + 5.0f);
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                        if ((int)(*(short *)((a4 + 0x1C))) < (int)0xA) {
                            FUN_0c0e138c(a4);
                        }
                        t209 = *(short *)((a4 + 0x1C));
                        t211 = t209;
                        if (t209 == 0) {
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            t211 = 0x14;
                        }
                        return t211;
                    }
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x32;
                    FUN_0c0e132a(a4);
                    FUN_0c0e12aa(a4);
                    (((struct o70_float *)(t174))->v) = (((((struct o70_float *)(t174))->v)) + 5.0f);
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    if ((int)(*(short *)((a4 + 0x1C))) < (int)0xA) {
                        FUN_0c0e138c(a4);
                    }
                    t225 = *(short *)((a4 + 0x1C));
                    t227 = t225;
                    if (t225 == 0) {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        t227 = 0x14;
                    }
                    return t227;
                }
                if (t6 == 7) {
                    t230 = *(signed char *)((a4 + 0x17));
                    if (t230 != 0) {
                        if (t230 != 1) {
                            if (t230 != 2) {
                                return t230;
                            }
                            t238 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                            if (t238 != 5) {
                                FUN_0c0cff28(a4, 0x0);
                                return FUN_0c0e1080(a4);
                            }
                            return t238;
                        }
                        FUN_0c0e12aa(a4);
                        t242 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                        t245 = t242;
                        if (t242 == 5) {
                            FUN_0c0e1314(a4);
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            t245 = 0x17;
                        }
                        return t245;
                    }
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    FUN_0c0e12aa(a4);
                    t252 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                    t255 = t252;
                    if (t252 == 5) {
                        FUN_0c0e1314(a4);
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t255 = 0x17;
                    }
                    return t255;
                }
                return t6;
            }
            t259 = *(signed char *)((a4 + 0x17));
            if (t259 != 0) {
                if (t259 != 1) {
                    t283 = t259;
                    if (t259 != 2) {
                    } else {
                        FUN_0c0e10a8(a4, 0x0, 0x1);
                        t261 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t261 - 1);
                        t283 = (short)(t261 - 1);
                        if ((int)(short)(t261 - 1) > 0) {
                        } else {
                            FUN_0c0cff28(a4, 0x2);
                            (((struct o17_uchar *)(a4))->v) = 0x0;
                            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                            t283 = 0x1E;
                        }
                    }
                } else {
                    FUN_0c0e10a8(a4, 0x0, 0x0);
                    t268 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t268 - 1);
                    t283 = (short)(t268 - 1);
                    if ((int)(short)(t268 - 1) > 0) {
                    } else {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0xF;
                        t283 = 0xF;
                    }
                }
            } else {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                FUN_0c0e10a8(a4, 0x0, 0x0);
                t278 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t278 - 1);
                t283 = (short)(t278 - 1);
                if ((int)(short)(t278 - 1) > 0) {
                } else {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0xF;
                    t283 = 0xF;
                }
            }
            return t283;
        }
        t286 = FUN_0c0e1096(a4);
        if (t286 != 0) {
            FUN_0c0cff28(a4, 0x1);
            (((struct o16_uchar *)(a4))->v) = ((int)((int)(nlRand()) % (int)(*(int *)0xC1CA580)));
            t291 = FUN_0c043010();
            if ((t291 != 0) && (t292 = *(signed char *)((a4 + 0x16)), t293 = *(signed char *)((0xC1CA530 + ((t292 << 2) + t292))), t293 == 2)) {
                (((struct o16_uchar *)(a4))->v) = ((*(int *)0xC1CA580) - 1);
            }
            t299 = FUN_0c04340c();
            if ((t299 == 0) && (t300 = *(signed char *)((a4 + 0x16)), t301 = *(signed char *)((0xC1CA530 + ((t300 << 2) + t300))), t301 == 1)) {
                (((struct o16_uchar *)(a4))->v) = ((*(int *)0xC1CA580) - 1);
            }
            (((struct o17_uchar *)(a4))->v) = 0x0;
            (((struct o12C_ushort *)(a4))->v) = 0x0;
            t308 = 0x12C;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
            t308 = (FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0))));
        }
        return t308;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03f566(a4, 0x4);
    t318 = 0xC1CA4E0;
    t320 = 0x0;
    for (;;) {
        if ((unsigned int)t320 >= (unsigned int)0x10) {
            break;
        }
        t315 = 0xC4;
        t317 = 0xC4B410C;
        t315 = (t315 + a4);
        t315 = (t315 + t320);
        t316 = 0xC03744A;
        t315 = (*(int *)((t315 + 0x0)));
        FUN_0c03744a(t315, 0x0, (*(int *)((t320 + 0xC1CA4C4))), (*(int *)((t317 + 0x0))));
        t317 = 0xC187798;
        t316 = t318;
        t315 = (t315 + 0x6C);
        t318 = (t318 + 0xC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t315) = *(struct mv3 *)(t316); }
        t320 = (t320 + 0x4);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oBC_float *)(a4))->v) = 1.0f;
    (((struct oB8_float *)(a4))->v) = 1.0f;
    (((struct oB4_float *)(a4))->v) = 1.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1CA4D4); }
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    (((struct o12E_ushort *)(a4))->v) = 0x0;
    FUN_0c0e1080(a4);
    t326 = FUN_0c042fe0();
    if (t326 == 0) {
        return t326;
    }
    t329 = *(signed char *)((a4 + 0x15));
    if (t329 != 0) {
        if (t329 != 1) {
            if (t329 == 2) {
                FUN_0c0e10a8(a4, 0x0, 0x2);
                t333 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t333 - 1);
                t335 = (short)(t333 - 1);
                if ((int)(short)(t333 - 1) > 0) {
                } else {
                    t335 = (FUN_0c0cff28(a4, 0x3));
                }
                return t335;
            }
            if (t329 == 3) {
                t337 = *(signed char *)((a4 + 0x17));
                if (t337 != 0) {
                    if (t337 != 1) {
                        if (t337 != 2) {
                            if (t337 != 3) {
                                t415 = t337;
                                if (t337 == 4) {
                                    FUN_0c0e1108(a4, 0x0, 0x2);
                                    t415 = 0x22;
                                    if ((int)((((struct o22_short *)(a4))->v)) > 0) {
                                    } else {
                                        FUN_0c0cff28(a4, 0x4);
                                        (((struct o17_uchar *)(a4))->v) = 0x0;
                                        t415 = 0x17;
                                    }
                                }
                            } else {
                                FUN_0c0e10a8(a4, 0x2, 0x2);
                                FUN_0c0e1108(a4, 0x0, 0x1);
                                t349 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t349 - 1);
                                t415 = (short)(t349 - 1);
                                if ((int)(short)(t349 - 1) > 0) {
                                } else {
                                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                    (((struct o22_ushort *)(a4))->v) = 0x1E;
                                    t415 = (thunk_FUN_0c05abb2(0x57, (a4 + 0x28)));
                                }
                            }
                        } else {
                            FUN_0c0e10a8(a4, 0x1, 0x2);
                            FUN_0c0e1108(a4, 0x0, 0x0);
                            t359 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t359 - 1);
                            t415 = (short)(t359 - 1);
                            if ((int)(short)(t359 - 1) > 0) {
                            } else {
                                thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                                t361 = *(signed char *)((a4 + 0x16));
                                if ((*(signed char *)(((((t361 << 2) + t361) + 0xC1CA530) + 0x1))) != 0) {
                                    t363 = *(signed char *)((a4 + 0x16));
                                    t371 = (*(int *)((0xC1CA510 + ((*(signed char *)(((((t363 << 2) + t363) + 0xC1CA530) + 0x4))) << 2))));
                                    t372 = 0x2;
                                } else {
                                    t366 = *(signed char *)((a4 + 0x16));
                                    t371 = (*(int *)((0xC1CA510 + ((*(signed char *)(((((t366 << 2) + t366) + 0xC1CA530) + 0x4))) << 2))));
                                    t372 = 0x0;
                                }
                                FUN_0c0e11ee(a4, 0x2, t371, t372);
                                (((struct o20_ushort *)(a4))->v) = 0x1E;
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                t415 = 0x17;
                            }
                        }
                    } else {
                        FUN_0c0e10a8(a4, 0x0, 0x2);
                        t385 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t385 - 1);
                        t415 = (short)(t385 - 1);
                        if ((int)(short)(t385 - 1) > 0) {
                        } else {
                            t386 = *(signed char *)((a4 + 0x16));
                            FUN_0c0e11ee(a4, 0x1, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t386 << 2) + t386) + 0xC1CA530) + 0x3))) << 2)))), 0x0);
                            *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                            thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            t415 = 0x17;
                        }
                    }
                } else {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t400 = *(signed char *)((a4 + 0x16));
                    FUN_0c0e11ee(a4, 0x0, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t400 << 2) + t400) + 0xC1CA530) + 0x2))) << 2)))), 0x0);
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    FUN_0c0e10a8(a4, 0x0, 0x2);
                    t405 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t405 - 1);
                    t415 = (short)(t405 - 1);
                    if ((int)(short)(t405 - 1) > 0) {
                    } else {
                        t406 = *(signed char *)((a4 + 0x16));
                        FUN_0c0e11ee(a4, 0x1, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t406 << 2) + t406) + 0xC1CA530) + 0x3))) << 2)))), 0x0);
                        *(unsigned short *)((a4 + 0x1E)) = 0x1E;
                        thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t415 = 0x17;
                    }
                }
                return t415;
            }
            if (t329 == 4) {
                t419 = *(signed char *)((a4 + 0x17));
                if (t419 != 0) {
                    t490 = t419;
                    if (t419 != 1) {
                    } else {
                        t422 = *(signed char *)((a4 + 0x16));
                        if ((int)(*(signed char *)(((((t422 << 2) + t422) + 0xC1CA530) + 0x0))) >= 0) {
                            FUN_0c0e12aa(a4);
                        }
                        t430 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t430 - 1);
                        t490 = (short)(t430 - 1);
                        if ((int)(short)(t430 - 1) > 0) {
                        } else {
                            (((struct o17_uchar *)(a4))->v) = 0x0;
                            t431 = *(signed char *)((a4 + 0x16));
                            if ((int)(*(signed char *)(((((t431 << 2) + t431) + 0xC1CA530) + 0x0))) < 0) {
                                FUN_0c0cff28(a4, 0x5);
                                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                t490 = 0x78;
                            } else {
                                t436 = *(signed char *)((a4 + 0x16));
                                if ((*(signed char *)((0xC1CA530 + ((t436 << 2) + t436)))) == 4) {
                                    FUN_0c0cff28(a4, 0x7);
                                    *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                    t490 = 0x78;
                                } else {
                                    t490 = (FUN_0c0cff28(a4, 0x6));
                                }
                            }
                        }
                    }
                } else {
                    t454 = *(signed char *)((a4 + 0x16));
                    t457 = 0xA;
                    if ((int)(*(signed char *)(((((t454 << 2) + t454) + 0xC1CA530) + 0x0))) >= 0) {
                        FUN_0c0e1270(a4);
                        t457 = 0x1E;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = t457;
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t463 = *(signed char *)((a4 + 0x16));
                    if ((int)(*(signed char *)(((((t463 << 2) + t463) + 0xC1CA530) + 0x0))) >= 0) {
                        FUN_0c0e12aa(a4);
                    }
                    t471 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t471 - 1);
                    t490 = (short)(t471 - 1);
                    if ((int)(short)(t471 - 1) > 0) {
                    } else {
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        t472 = *(signed char *)((a4 + 0x16));
                        if ((int)(*(signed char *)(((((t472 << 2) + t472) + 0xC1CA530) + 0x0))) < 0) {
                            FUN_0c0cff28(a4, 0x5);
                            *(unsigned short *)((a4 + 0x1C)) = 0x78;
                            t490 = 0x78;
                        } else {
                            t477 = *(signed char *)((a4 + 0x16));
                            if ((*(signed char *)((0xC1CA530 + ((t477 << 2) + t477)))) == 4) {
                                FUN_0c0cff28(a4, 0x7);
                                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                                t490 = 0x78;
                            } else {
                                t490 = (FUN_0c0cff28(a4, 0x6));
                            }
                        }
                    }
                }
                return t490;
            }
            if (t329 == 5) {
                t495 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t495 - 1);
                if ((int)(short)(t495 - 1) <= 0) {
                    FUN_0c0cff28(a4, 0x0);
                    return FUN_0c0e1080(a4);
                }
                return (short)(t495 - 1);
            }
            if (t329 == 6) {
                t497 = (((struct oD0_int *)(a4))->v);
                t498 = *(signed char *)((a4 + 0x17));
                if (t498 != 0) {
                    if (t498 != 1) {
                        if (t498 != 2) {
                            t514 = t498;
                            if (t498 != 3) {
                            } else {
                                (((struct o70_float *)(t497))->v) = (((((struct o70_float *)(t497))->v)) - 5.0f);
                                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                                if ((int)(*(short *)((a4 + 0x1C))) > (int)0x28) {
                                    FUN_0c0e138c(a4);
                                }
                                t507 = *(short *)((a4 + 0x1C));
                                t514 = t507;
                                if (t507 == 0) {
                                    FUN_0c0cff28(a4, 0x0);
                                    FUN_0c0e1080(a4);
                                    (((struct o17_uchar *)(a4))->v) = 0x0;
                                    t514 = 0x17;
                                }
                            }
                            return t514;
                        }
                        FUN_0c0e12aa(a4);
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                        FUN_0c0e138c(a4);
                        t521 = *(short *)((a4 + 0x1C));
                        if (t521 == 0) {
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            *(unsigned short *)((a4 + 0x1C)) = 0x32;
                            return FUN_0c0e1314(a4);
                        }
                        return t521;
                    }
                    FUN_0c0e12aa(a4);
                    (((struct o70_float *)(t497))->v) = (((((struct o70_float *)(t497))->v)) + 5.0f);
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    if ((int)(*(short *)((a4 + 0x1C))) < (int)0xA) {
                        FUN_0c0e138c(a4);
                    }
                    t532 = *(short *)((a4 + 0x1C));
                    t534 = t532;
                    if (t532 == 0) {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        t534 = 0x14;
                    }
                    return t534;
                }
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x32;
                FUN_0c0e132a(a4);
                FUN_0c0e12aa(a4);
                (((struct o70_float *)(t497))->v) = (((((struct o70_float *)(t497))->v)) + 5.0f);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                if ((int)(*(short *)((a4 + 0x1C))) < (int)0xA) {
                    FUN_0c0e138c(a4);
                }
                t548 = *(short *)((a4 + 0x1C));
                t550 = t548;
                if (t548 == 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    t550 = 0x14;
                }
                return t550;
            }
            if (t329 == 7) {
                t553 = *(signed char *)((a4 + 0x17));
                if (t553 != 0) {
                    if (t553 != 1) {
                        if (t553 != 2) {
                            return t553;
                        }
                        t561 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                        if (t561 != 5) {
                            FUN_0c0cff28(a4, 0x0);
                            return FUN_0c0e1080(a4);
                        }
                        return t561;
                    }
                    FUN_0c0e12aa(a4);
                    t565 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                    t568 = t565;
                    if (t565 == 5) {
                        FUN_0c0e1314(a4);
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t568 = 0x17;
                    }
                    return t568;
                }
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                FUN_0c0e12aa(a4);
                t575 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                t578 = t575;
                if (t575 == 5) {
                    FUN_0c0e1314(a4);
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t578 = 0x17;
                }
                return t578;
            }
            return t329;
        }
        t582 = *(signed char *)((a4 + 0x17));
        if (t582 != 0) {
            if (t582 != 1) {
                t606 = t582;
                if (t582 != 2) {
                } else {
                    FUN_0c0e10a8(a4, 0x0, 0x1);
                    t584 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t584 - 1);
                    t606 = (short)(t584 - 1);
                    if ((int)(short)(t584 - 1) > 0) {
                    } else {
                        FUN_0c0cff28(a4, 0x2);
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                        t606 = 0x1E;
                    }
                }
            } else {
                FUN_0c0e10a8(a4, 0x0, 0x0);
                t591 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t591 - 1);
                t606 = (short)(t591 - 1);
                if ((int)(short)(t591 - 1) > 0) {
                } else {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0xF;
                    t606 = 0xF;
                }
            }
        } else {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0xF;
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            FUN_0c0e10a8(a4, 0x0, 0x0);
            t601 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t601 - 1);
            t606 = (short)(t601 - 1);
            if ((int)(short)(t601 - 1) > 0) {
            } else {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                t606 = 0xF;
            }
        }
        return t606;
    }
    t609 = FUN_0c0e1096(a4);
    if (t609 != 0) {
        FUN_0c0cff28(a4, 0x1);
        (((struct o16_uchar *)(a4))->v) = ((int)((int)(nlRand()) % (int)(*(int *)0xC1CA580)));
        t614 = FUN_0c043010();
        if ((t614 != 0) && (t615 = *(signed char *)((a4 + 0x16)), t616 = *(signed char *)((0xC1CA530 + ((t615 << 2) + t615))), t616 == 2)) {
            (((struct o16_uchar *)(a4))->v) = ((*(int *)0xC1CA580) - 1);
        }
        t622 = FUN_0c04340c();
        if ((t622 == 0) && (t623 = *(signed char *)((a4 + 0x16)), t624 = *(signed char *)((0xC1CA530 + ((t623 << 2) + t623))), t624 == 1)) {
            (((struct o16_uchar *)(a4))->v) = ((*(int *)0xC1CA580) - 1);
        }
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        t631 = 0x12C;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
        t631 = (FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0))));
    }
    return t631;
}
