/* game/menu/option: functions 0C018E44-0C01A00A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c012c34(int);
int FUN_0c01c62a(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int thunk_FUN_0c03f346(int);
int FUN_0c01cd2c(int);
int FUN_0c02b342(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int strcpy(int, int);
int FUN_0c187d88(int);
int FUN_0c018e44(void);
int FUN_0c018e74(int a4);
int FUN_0c018e9c(int a4, int a5);
int FUN_0c018f0a(int a4);
int FUN_0c018f40(int a4, int a5, int a6, int a7);
int FUN_0c018f90(int a4, int a5, int a6);
void FUN_0c018fd2(int a4);
int FUN_0c018fd8(int a4);
int FUN_0c01966e(int a4);
int FUN_0c019954(int a4);
int FUN_0c019a06(int a4);
int FUN_0c019a32(int a4);
int FUN_0c019c66(int a4, int a5, int a6);

int FUN_0c018e44(void)
{
    register int t0;
    register int t1;

    (((struct o0_uchar *)0xC30A51A)->v) = 0xFFFFFFFF;
    (((struct o2_ushort *)0xC30A51A)->v) = 0x0;
    t0 = FUN_0c01cc56(0xB, 0xC018B28);
    t1 = FUN_0c01cc56(0x1B, 0xC018CCC);
    *(unsigned int *)((t1 + 0x10)) = t0;
    return t1;
}

int FUN_0c018e74(int a4)
{
    int stk[1];
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned char *)0xC30503C = 0xFFFFFFFF;
    *(unsigned char *)0xC30EFA2 = 0x1;
    t1 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)(((FUN_0c01cc56(0x8, 0xC018FD8)) + 0x3)) = t1;
    return t1;
}

int FUN_0c018e9c(int a4, int a5)
{
    register int t1;
    register int t2;

    *(unsigned char *)0xC30503C = 0xFFFFFFFF;
    *(unsigned char *)0xC30EFA2 = 0x1;
    *(unsigned char *)(((FUN_0c01cc56(0x8, 0xC018FD8)) + 0x3)) = a4;
    t1 = 0x1A;
    if (((unsigned char)a4 != 28) && (((unsigned char)a4 != 33) && (((unsigned char)a4 != 59) && (((unsigned char)a4 != 32) && (((unsigned char)a4 != 61) && (((unsigned char)a4 != 63) && ((unsigned char)a4 != 78))))))) {
        t1 = 0x15;
    }
    t2 = FUN_0c01cc56(t1, 0xC01966E);
    *(unsigned char *)((t2 + 0x3)) = a4;
    *(unsigned int *)((t2 + 0x10)) = a5;
    return a4;
}

int FUN_0c018f0a(int a4)
{
    register int t1;

    *(unsigned char *)0xC30503C = 0xFFFFFFFF;
    *(unsigned char *)0xC30EFA2 = 0x1;
    *(unsigned int *)(((FUN_0c01cc56(0x37, 0xC0197BC)) + 0x10)) = a4;
    t1 = FUN_0c01cc56(0x1B, 0xC019820);
    *(unsigned int *)((t1 + 0x10)) = a4;
    return t1;
}

int FUN_0c018f40(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    *(unsigned char *)(((int)stk + 0)) = a7;
    *(unsigned char *)0xC30503C = 0xFFFFFFFF;
    *(unsigned char *)0xC30EFA2 = 0x1;
    t0 = FUN_0c01cc56(0x8, 0xC018FD8);
    *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 12)));
    (((struct o18_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 8)));
    (((struct o19_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 4)));
    (((struct o1A_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 0)));
    return 0x1A;
}

int FUN_0c018f90(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned char *)0xC30503C = 0xFFFFFFFF;
    *(unsigned char *)0xC30EFA2 = 0x1;
    t0 = FUN_0c01cc56(0x8, 0xC018FD8);
    *(unsigned char *)((t0 + 0x3)) = (*(signed char *)(((int)stk + 0)));
    *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 4)));
    t3 = FUN_0c01cc56(0x1A, 0xC01966E);
    t4 = *(signed char *)(((int)stk + 0));
    *(unsigned char *)((t3 + 0x3)) = t4;
    *(unsigned int *)((t3 + 0x10)) = (*(int *)(((int)stk + 8)));
    return t4;
}

void FUN_0c018fd2(int a4)
{
    *(unsigned char *)0xC30503C = a4;
}

int FUN_0c018fd8(int a4)
{
    int stk[32];
    register int t0;
    register int t1;
    register float t4;
    register float u6;
    register int t9;
    register float t26;
    register float u28;
    register int t31;
    register float u55;
    register int t58;
    int t72;
    register int t88;
    register int t96;
    register int t97;
    register int t99;
    register int t105;
    register int t109;
    register int t126;
    register int t127;
    register int t129;
    register int t135;
    register int t139;
    register int t156;
    register int t157;
    register int t159;
    register int t165;
    register int t169;
    register int t186;
    register int t187;
    register int t189;
    register int t195;
    register int t199;
    register int t212;
    register int t215;
    register int t218;
    register int t221;
    register int t224;
    register int t228;
    register int t283;
    register int t285;
    register int t288;
    register int t325;
    register int t378;
    register int t697;
    register float u390;
    register int t393;
    int t407;
    register int t423;
    register int t431;
    register int t432;
    register int t434;
    register int t440;
    register int t444;
    register int t461;
    register int t462;
    register int t464;
    register int t470;
    register int t474;
    register int t491;
    register int t492;
    register int t494;
    register int t500;
    register int t504;
    register int t521;
    register int t522;
    register int t524;
    register int t530;
    register int t534;
    register int t547;
    register int t550;
    register int t553;
    register int t556;
    register int t559;
    register int t563;
    register int t618;
    register int t620;
    register int t623;
    register int t660;
    register int t726;
    register int t1063;
    register int t731;
    register int t1050;
    register float u743;
    register int t746;
    int t760;
    register int t776;
    register int t784;
    register int t785;
    register int t787;
    register int t793;
    register int t797;
    register int t814;
    register int t815;
    register int t817;
    register int t823;
    register int t827;
    register int t844;
    register int t845;
    register int t847;
    register int t853;
    register int t857;
    register int t874;
    register int t875;
    register int t877;
    register int t883;
    register int t887;
    register int t900;
    register int t903;
    register int t906;
    register int t909;
    register int t912;
    register int t916;
    register int t971;
    register int t973;
    register int t976;
    register int t1013;
    register int t1094;
    register int t1431;
    register int t1099;
    register int t1418;
    register float u1111;
    register int t1114;
    int t1128;
    register int t1144;
    register int t1152;
    register int t1153;
    register int t1155;
    register int t1161;
    register int t1165;
    register int t1182;
    register int t1183;
    register int t1185;
    register int t1191;
    register int t1195;
    register int t1212;
    register int t1213;
    register int t1215;
    register int t1221;
    register int t1225;
    register int t1242;
    register int t1243;
    register int t1245;
    register int t1251;
    register int t1255;
    register int t1268;
    register int t1271;
    register int t1274;
    register int t1277;
    register int t1280;
    register int t1284;
    register int t1339;
    register int t1341;
    register int t1344;
    register int t1381;
    register int t1444;
    register int t1076;
    register int t710;
    register int t362;
    register int t293;
    register float u294;
    register int t628;
    register float u629;
    register int t981;
    register float u982;
    register int t1349;
    register float u1350;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t362 = t0;
                    if (t0 == 4) {
                        t1 = *(signed char *)((a4 + 0x15));
                        if (t1 != 0) {
                            t362 = t1;
                            if (t1 != 1) {
                            } else {
                                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                                t4 = math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555));
                                u6 = 1.0f;
                                u6 = u6 + (*(float *)0xC01971C) * t4;
                                (((struct o40_float *)(a4))->v) = u6;
                                (((struct o44_float *)(a4))->v) = ((-(math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555)))) + 1.0f);
                                t9 = *(short *)((a4 + 0x1C));
                                t362 = t9;
                                if (t9 == 0) {
                                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    if ((*(signed char *)0xC30503C) != -1) {
                                        *(unsigned char *)0xC30EFA2 = 0x0;
                                    }
                                    t362 = (thunk_FUN_0c03f346(a4));
                                }
                            }
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
                            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
                            (((struct o44_float *)(a4))->v) = 1.0f;
                            (((struct o40_float *)(a4))->v) = 1.0f;
                            *(unsigned short *)((a4 + 0x1C)) = 0xC;
                            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                            t26 = math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555));
                            u28 = 1.0f;
                            u28 = u28 + (*(float *)0xC01971C) * t26;
                            (((struct o40_float *)(a4))->v) = u28;
                            (((struct o44_float *)(a4))->v) = ((-(math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555)))) + 1.0f);
                            t31 = *(short *)((a4 + 0x1C));
                            t362 = t31;
                            if (t31 == 0) {
                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                if ((*(signed char *)0xC30503C) != -1) {
                                    *(unsigned char *)0xC30EFA2 = 0x0;
                                }
                                t362 = (thunk_FUN_0c03f346(a4));
                            }
                        }
                    }
                } else {
                    if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    u55 = 0.899999976f;
                    u55 = u55 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                    (((struct oB0_float *)(a4))->v) = u55;
                    t58 = (*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC20DDFC)));
                    for (;;) {
                        if ((*(short *)((t58 + 0x10))) != 0) {
                            break;
                        }
                        FUN_0c02b502((unsigned short)(*(short *)((t58 + 0x0))));
                        FUN_0c02b3ba((*(int *)((t58 + 0xC))), ((((struct o4_float *)(t58))->v)), ((((struct o8_float *)(t58))->v)), (1.0f + 1.0f));
                        t58 = (t58 + 0x14);
                    }
                    FUN_0c02b502((unsigned short)(*(short *)((t58 + 0x0))));
                    FUN_0c02b3ba((*(int *)((t58 + 0xC))), ((((struct o4_float *)(t58))->v)), ((((struct o8_float *)(t58))->v)), (1.0f + 1.0f));
                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                    t72 = *(signed char *)((a4 + 0x3));
                    if (t72 != 23) {
                        if (t72 != 24) {
                            if ((t72 != 26) && (t72 != 67)) {
                                if (t72 != 55) {
                                    if (t72 == 60) {
                                        t88 = *(int *)((a4 + 0x10));
                                        FUN_0c02b342(t88, (*(int *)(((int)stk + 0))));
                                        FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                                        FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t58 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f));
                                        t96 = FUN_0c187d88((t88 + 0x8));
                                        t97 = ((~(((~(unsigned char)t96) + 0x1) & 0x1)) + 0x1);
                                        if ((int)(unsigned char)t96 >= 0) {
                                            t97 = ((unsigned char)t96 & 0x1);
                                        }
                                        t99 = t96;
                                        if (t97 != 0) {
                                            t99 = (t96 + 0x1);
                                        }
                                        FUN_0c02b502(0x3);
                                        t105 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t99 << 1) + (unsigned char)t99) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t99 << 1) + (unsigned char)t99) << 2) << 1))) ? 1u : 0u));
                                        t109 = (int)((unsigned int)((int)((unsigned int)(t105 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t105 >> 1))) ? 1u : 0u));
                                        FUN_0c02b3ba((t88 + 0x8), ((float)(0x140 - (t109 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                        FUN_0c02b502(0x7);
                                        t362 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t99 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t99 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t109 >> 1))), 180.0f, (1.0f + 1.0f)));
                                    } else {
                                        if (t72 == 32) {
                                            FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                            FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                                            FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t58 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f));
                                            t126 = FUN_0c187d88(0xC30A354);
                                            t127 = ((~(((~(unsigned char)t126) + 0x1) & 0x1)) + 0x1);
                                            if ((int)(unsigned char)t126 >= 0) {
                                                t127 = ((unsigned char)t126 & 0x1);
                                            }
                                            t129 = t126;
                                            if (t127 != 0) {
                                                t129 = (t126 + 0x1);
                                            }
                                            FUN_0c02b502(0x3);
                                            t135 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t129 << 1) + (unsigned char)t129) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t129 << 1) + (unsigned char)t129) << 2) << 1))) ? 1u : 0u));
                                            t139 = (int)((unsigned int)((int)((unsigned int)(t135 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t135 >> 1))) ? 1u : 0u));
                                            FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t139 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                            FUN_0c02b502(0x7);
                                            t362 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t129 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t129 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t139 >> 1))), 180.0f, (1.0f + 1.0f)));
                                        } else {
                                            if (t72 == 22) {
                                                FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                                                FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t58 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f));
                                                t156 = FUN_0c187d88(0xC30A354);
                                                t157 = ((~(((~(unsigned char)t156) + 0x1) & 0x1)) + 0x1);
                                                if ((int)(unsigned char)t156 >= 0) {
                                                    t157 = ((unsigned char)t156 & 0x1);
                                                }
                                                t159 = t156;
                                                if (t157 != 0) {
                                                    t159 = (t156 + 0x1);
                                                }
                                                FUN_0c02b502(0x3);
                                                t165 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t159 << 1) + (unsigned char)t159) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t159 << 1) + (unsigned char)t159) << 2) << 1))) ? 1u : 0u));
                                                t169 = (int)((unsigned int)((int)((unsigned int)(t165 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t165 >> 1))) ? 1u : 0u));
                                                FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t169 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                                FUN_0c02b502(0x7);
                                                t362 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t159 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t159 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t169 >> 1))), 180.0f, (1.0f + 1.0f)));
                                            } else {
                                                if (t72 == 21) {
                                                    FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                    FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                                                    FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t58 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f));
                                                    t186 = FUN_0c187d88(0xC30A354);
                                                    t187 = ((~(((~(unsigned char)t186) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)(unsigned char)t186 >= 0) {
                                                        t187 = ((unsigned char)t186 & 0x1);
                                                    }
                                                    t189 = t186;
                                                    if (t187 != 0) {
                                                        t189 = (t186 + 0x1);
                                                    }
                                                    FUN_0c02b502(0x3);
                                                    t195 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t189 << 1) + (unsigned char)t189) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t189 << 1) + (unsigned char)t189) << 2) << 1))) ? 1u : 0u));
                                                    t199 = (int)((unsigned int)((int)((unsigned int)(t195 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t195 >> 1))) ? 1u : 0u));
                                                    FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t199 >> 1)) + -24.0f), (((((struct o8_float *)((t58 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f));
                                                    FUN_0c02b502(0x7);
                                                    t362 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t189 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t189 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t199 >> 1))), (((((struct o8_float *)((t58 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f)));
                                                } else {
                                                    if (t72 == 70) {
                                                        FUN_0c02b502(0x3);
                                                        t212 = 0xC1A75A0;
                                                        if ((*(signed char *)((a4 + 0x18))) == 0) {
                                                            t212 = 0xC1A7598;
                                                        }
                                                        FUN_0c02b3ba(t212, 416.0f, 204.0f, (1.0f + 1.0f));
                                                        t215 = *(signed char *)((a4 + 0x19));
                                                        t218 = 0xC1A7598;
                                                        if (t215 != 0) {
                                                            t218 = 0xC1A75A0;
                                                            if (t215 != 1) {
                                                                t218 = 0xC1A75A8;
                                                            }
                                                        }
                                                        FUN_0c02b3ba(t218, 416.0f, 228.0f, (1.0f + 1.0f));
                                                        t221 = *(signed char *)((a4 + 0x1A));
                                                        t224 = 0xC1A7598;
                                                        if (t221 != 0) {
                                                            t224 = 0xC1A75B0;
                                                            if (t221 != 1) {
                                                                t224 = 0xC1A75B8;
                                                            }
                                                        }
                                                        t362 = (FUN_0c02b3ba(t224, 416.0f, 252.0f, (1.0f + 1.0f)));
                                                    } else {
                                                        t362 = t72;
                                                        if (t72 == 28) {
                                                            t228 = 0x13;
                                                            if ((*(int *)0xC5426EC) != 0) {
                                                                t228 = 0x7;
                                                            }
                                                            FUN_0c02b502(t228);
                                                            t362 = (FUN_0c02b3ba((*(int *)(((t58 + 0x14) + 0xC))), ((((struct o4_float *)((t58 + 0x14)))->v)), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t283 = *(int *)0xC3BABB4;
                                    t285 = (0x16C + t283);
                                    if (((*(int *)((t283 + 0x0))) & 1) == 0) {
                                        t285 = (t283 + 0x8);
                                    }
                                    strcpy((((int)stk + 0) + 0x30), t285);
                                    t288 = FUN_0c187d88((((int)stk + 0) + 0x30));
                                    if ((int)(unsigned char)t288 <= (int)0x14) {
                                        FUN_0c02b502(0x7);
                                        t293 = (((int)stk + 0) + 0x30);
                                        u294 = 262.0f;
                                    } else {
                                        (((struct o14_uchar *)((((int)stk + 0) + 0x30)))->v) = 0x0;
                                        FUN_0c02b502(0x7);
                                        FUN_0c02b3ba((((int)stk + 0) + 0x30), 262.0f, 228.0f, (1.0f + 1.0f));
                                        t293 = 0xC1A758C;
                                        u294 = 502.0f;
                                    }
                                    t362 = (FUN_0c02b3ba(t293, u294, 228.0f, (1.0f + 1.0f)));
                                }
                            } else {
                                FUN_0c02b342(0xC30A404, (*(int *)(((int)stk + 0))));
                                FUN_0c02b502(0x3);
                                t362 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), 248.0f, 156.0f, (1.0f + 1.0f)));
                            }
                        } else {
                            strcpy((((int)stk + 0) + 0x8), 0xC3051C4);
                            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                            FUN_0c02b342((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x30));
                            *(unsigned char *)(((int)stk + 4)) = (FUN_0c187d88((((int)stk + 0) + 0x8)));
                            FUN_0c02b502(0x6);
                            t325 = *(signed char *)(((int)stk + 4));
                            t362 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(((((unsigned char)t325 << 1) + (unsigned char)t325) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t325 << 1) + (unsigned char)t325) << 2) << 1))) ? 1u : 0u))) >> 1)), 180.0f, (1.0f + 1.0f)));
                        }
                    } else {
                        FUN_0c02b342(0xC30999E, (*(int *)(((int)stk + 0))));
                        FUN_0c02b502((unsigned short)(*(short *)(((t58 + 0x14) + 0x0))));
                        t362 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), ((((struct o4_float *)((t58 + 0x14)))->v)), ((((struct o8_float *)((t58 + 0x14)))->v)), (1.0f + 1.0f)));
                    }
                }
                t710 = t362;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                t378 = *(short *)((a4 + 0x1C));
                t697 = t378;
                if (t378 != 0) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
                    if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    u390 = 0.899999976f;
                    u390 = u390 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                    (((struct oB0_float *)(a4))->v) = u390;
                    t393 = (*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC20DDFC)));
                    for (;;) {
                        if ((*(short *)((t393 + 0x10))) != 0) {
                            break;
                        }
                        FUN_0c02b502((unsigned short)(*(short *)((t393 + 0x0))));
                        FUN_0c02b3ba((*(int *)((t393 + 0xC))), ((((struct o4_float *)(t393))->v)), ((((struct o8_float *)(t393))->v)), (1.0f + 1.0f));
                        t393 = (t393 + 0x14);
                    }
                    FUN_0c02b502((unsigned short)(*(short *)((t393 + 0x0))));
                    FUN_0c02b3ba((*(int *)((t393 + 0xC))), ((((struct o4_float *)(t393))->v)), ((((struct o8_float *)(t393))->v)), (1.0f + 1.0f));
                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                    t407 = *(signed char *)((a4 + 0x3));
                    if (t407 != 23) {
                        if (t407 != 24) {
                            if ((t407 != 26) && (t407 != 67)) {
                                if (t407 != 55) {
                                    if (t407 == 60) {
                                        t423 = *(int *)((a4 + 0x10));
                                        FUN_0c02b342(t423, (*(int *)(((int)stk + 0))));
                                        FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                                        FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t393 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f));
                                        t431 = FUN_0c187d88((t423 + 0x8));
                                        t432 = ((~(((~(unsigned char)t431) + 0x1) & 0x1)) + 0x1);
                                        if ((int)(unsigned char)t431 >= 0) {
                                            t432 = ((unsigned char)t431 & 0x1);
                                        }
                                        t434 = t431;
                                        if (t432 != 0) {
                                            t434 = (t431 + 0x1);
                                        }
                                        FUN_0c02b502(0x3);
                                        t440 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t434 << 1) + (unsigned char)t434) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t434 << 1) + (unsigned char)t434) << 2) << 1))) ? 1u : 0u));
                                        t444 = (int)((unsigned int)((int)((unsigned int)(t440 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t440 >> 1))) ? 1u : 0u));
                                        FUN_0c02b3ba((t423 + 0x8), ((float)(0x140 - (t444 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                        FUN_0c02b502(0x7);
                                        t697 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t434 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t434 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t444 >> 1))), 180.0f, (1.0f + 1.0f)));
                                    } else {
                                        if (t407 == 32) {
                                            FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                            FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                                            FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t393 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f));
                                            t461 = FUN_0c187d88(0xC30A354);
                                            t462 = ((~(((~(unsigned char)t461) + 0x1) & 0x1)) + 0x1);
                                            if ((int)(unsigned char)t461 >= 0) {
                                                t462 = ((unsigned char)t461 & 0x1);
                                            }
                                            t464 = t461;
                                            if (t462 != 0) {
                                                t464 = (t461 + 0x1);
                                            }
                                            FUN_0c02b502(0x3);
                                            t470 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t464 << 1) + (unsigned char)t464) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t464 << 1) + (unsigned char)t464) << 2) << 1))) ? 1u : 0u));
                                            t474 = (int)((unsigned int)((int)((unsigned int)(t470 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t470 >> 1))) ? 1u : 0u));
                                            FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t474 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                            FUN_0c02b502(0x7);
                                            t697 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t464 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t464 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t474 >> 1))), 180.0f, (1.0f + 1.0f)));
                                        } else {
                                            if (t407 == 22) {
                                                FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                                                FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t393 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f));
                                                t491 = FUN_0c187d88(0xC30A354);
                                                t492 = ((~(((~(unsigned char)t491) + 0x1) & 0x1)) + 0x1);
                                                if ((int)(unsigned char)t491 >= 0) {
                                                    t492 = ((unsigned char)t491 & 0x1);
                                                }
                                                t494 = t491;
                                                if (t492 != 0) {
                                                    t494 = (t491 + 0x1);
                                                }
                                                FUN_0c02b502(0x3);
                                                t500 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t494 << 1) + (unsigned char)t494) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t494 << 1) + (unsigned char)t494) << 2) << 1))) ? 1u : 0u));
                                                t504 = (int)((unsigned int)((int)((unsigned int)(t500 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t500 >> 1))) ? 1u : 0u));
                                                FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t504 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                                FUN_0c02b502(0x7);
                                                t697 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t494 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t494 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t504 >> 1))), 180.0f, (1.0f + 1.0f)));
                                            } else {
                                                if (t407 == 21) {
                                                    FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                    FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                                                    FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t393 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f));
                                                    t521 = FUN_0c187d88(0xC30A354);
                                                    t522 = ((~(((~(unsigned char)t521) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)(unsigned char)t521 >= 0) {
                                                        t522 = ((unsigned char)t521 & 0x1);
                                                    }
                                                    t524 = t521;
                                                    if (t522 != 0) {
                                                        t524 = (t521 + 0x1);
                                                    }
                                                    FUN_0c02b502(0x3);
                                                    t530 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t524 << 1) + (unsigned char)t524) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t524 << 1) + (unsigned char)t524) << 2) << 1))) ? 1u : 0u));
                                                    t534 = (int)((unsigned int)((int)((unsigned int)(t530 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t530 >> 1))) ? 1u : 0u));
                                                    FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t534 >> 1)) + -24.0f), (((((struct o8_float *)((t393 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f));
                                                    FUN_0c02b502(0x7);
                                                    t697 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t524 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t524 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t534 >> 1))), (((((struct o8_float *)((t393 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f)));
                                                } else {
                                                    if (t407 == 70) {
                                                        FUN_0c02b502(0x3);
                                                        t547 = 0xC1A75A0;
                                                        if ((*(signed char *)((a4 + 0x18))) == 0) {
                                                            t547 = 0xC1A7598;
                                                        }
                                                        FUN_0c02b3ba(t547, 416.0f, 204.0f, (1.0f + 1.0f));
                                                        t550 = *(signed char *)((a4 + 0x19));
                                                        t553 = 0xC1A7598;
                                                        if (t550 != 0) {
                                                            t553 = 0xC1A75A0;
                                                            if (t550 != 1) {
                                                                t553 = 0xC1A75A8;
                                                            }
                                                        }
                                                        FUN_0c02b3ba(t553, 416.0f, 228.0f, (1.0f + 1.0f));
                                                        t556 = *(signed char *)((a4 + 0x1A));
                                                        t559 = 0xC1A7598;
                                                        if (t556 != 0) {
                                                            t559 = 0xC1A75B0;
                                                            if (t556 != 1) {
                                                                t559 = 0xC1A75B8;
                                                            }
                                                        }
                                                        t697 = (FUN_0c02b3ba(t559, 416.0f, 252.0f, (1.0f + 1.0f)));
                                                    } else {
                                                        t697 = t407;
                                                        if (t407 == 28) {
                                                            t563 = 0x13;
                                                            if ((*(int *)0xC5426EC) != 0) {
                                                                t563 = 0x7;
                                                            }
                                                            FUN_0c02b502(t563);
                                                            t697 = (FUN_0c02b3ba((*(int *)(((t393 + 0x14) + 0xC))), ((((struct o4_float *)((t393 + 0x14)))->v)), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t618 = *(int *)0xC3BABB4;
                                    t620 = (0x16C + t618);
                                    if (((*(int *)((t618 + 0x0))) & 1) == 0) {
                                        t620 = (t618 + 0x8);
                                    }
                                    strcpy((((int)stk + 0) + 0x30), t620);
                                    t623 = FUN_0c187d88((((int)stk + 0) + 0x30));
                                    if ((int)(unsigned char)t623 <= (int)0x14) {
                                        FUN_0c02b502(0x7);
                                        t628 = (((int)stk + 0) + 0x30);
                                        u629 = 262.0f;
                                    } else {
                                        (((struct o14_uchar *)((((int)stk + 0) + 0x30)))->v) = 0x0;
                                        FUN_0c02b502(0x7);
                                        FUN_0c02b3ba((((int)stk + 0) + 0x30), 262.0f, 228.0f, (1.0f + 1.0f));
                                        t628 = 0xC1A758C;
                                        u629 = 502.0f;
                                    }
                                    t697 = (FUN_0c02b3ba(t628, u629, 228.0f, (1.0f + 1.0f)));
                                }
                            } else {
                                FUN_0c02b342(0xC30A404, (*(int *)(((int)stk + 0))));
                                FUN_0c02b502(0x3);
                                t697 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), 248.0f, 156.0f, (1.0f + 1.0f)));
                            }
                        } else {
                            strcpy((((int)stk + 0) + 0x8), 0xC3051C4);
                            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                            FUN_0c02b342((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x30));
                            *(unsigned char *)(((int)stk + 4)) = (FUN_0c187d88((((int)stk + 0) + 0x8)));
                            FUN_0c02b502(0x6);
                            t660 = *(signed char *)(((int)stk + 4));
                            t697 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(((((unsigned char)t660 << 1) + (unsigned char)t660) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t660 << 1) + (unsigned char)t660) << 2) << 1))) ? 1u : 0u))) >> 1)), 180.0f, (1.0f + 1.0f)));
                        }
                    } else {
                        FUN_0c02b342(0xC30999E, (*(int *)(((int)stk + 0))));
                        FUN_0c02b502((unsigned short)(*(short *)(((t393 + 0x14) + 0x0))));
                        t697 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), ((((struct o4_float *)((t393 + 0x14)))->v)), ((((struct o8_float *)((t393 + 0x14)))->v)), (1.0f + 1.0f)));
                    }
                }
                t710 = t697;
            }
            t1076 = t710;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            (((struct o40_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
            t726 = *(short *)((a4 + 0x1C));
            t1063 = t726;
            if (t726 != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x10;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                t731 = *(short *)((a4 + 0x1C));
                t1050 = t731;
                if (t731 != 0) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
                    if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    u743 = 0.899999976f;
                    u743 = u743 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                    (((struct oB0_float *)(a4))->v) = u743;
                    t746 = (*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC20DDFC)));
                    for (;;) {
                        if ((*(short *)((t746 + 0x10))) != 0) {
                            break;
                        }
                        FUN_0c02b502((unsigned short)(*(short *)((t746 + 0x0))));
                        FUN_0c02b3ba((*(int *)((t746 + 0xC))), ((((struct o4_float *)(t746))->v)), ((((struct o8_float *)(t746))->v)), (1.0f + 1.0f));
                        t746 = (t746 + 0x14);
                    }
                    FUN_0c02b502((unsigned short)(*(short *)((t746 + 0x0))));
                    FUN_0c02b3ba((*(int *)((t746 + 0xC))), ((((struct o4_float *)(t746))->v)), ((((struct o8_float *)(t746))->v)), (1.0f + 1.0f));
                    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                    t760 = *(signed char *)((a4 + 0x3));
                    if (t760 != 23) {
                        if (t760 != 24) {
                            if ((t760 != 26) && (t760 != 67)) {
                                if (t760 != 55) {
                                    if (t760 == 60) {
                                        t776 = *(int *)((a4 + 0x10));
                                        FUN_0c02b342(t776, (*(int *)(((int)stk + 0))));
                                        FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                                        FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t746 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f));
                                        t784 = FUN_0c187d88((t776 + 0x8));
                                        t785 = ((~(((~(unsigned char)t784) + 0x1) & 0x1)) + 0x1);
                                        if ((int)(unsigned char)t784 >= 0) {
                                            t785 = ((unsigned char)t784 & 0x1);
                                        }
                                        t787 = t784;
                                        if (t785 != 0) {
                                            t787 = (t784 + 0x1);
                                        }
                                        FUN_0c02b502(0x3);
                                        t793 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t787 << 1) + (unsigned char)t787) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t787 << 1) + (unsigned char)t787) << 2) << 1))) ? 1u : 0u));
                                        t797 = (int)((unsigned int)((int)((unsigned int)(t793 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t793 >> 1))) ? 1u : 0u));
                                        FUN_0c02b3ba((t776 + 0x8), ((float)(0x140 - (t797 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                        FUN_0c02b502(0x7);
                                        t1050 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t787 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t787 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t797 >> 1))), 180.0f, (1.0f + 1.0f)));
                                    } else {
                                        if (t760 == 32) {
                                            FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                            FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                                            FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t746 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f));
                                            t814 = FUN_0c187d88(0xC30A354);
                                            t815 = ((~(((~(unsigned char)t814) + 0x1) & 0x1)) + 0x1);
                                            if ((int)(unsigned char)t814 >= 0) {
                                                t815 = ((unsigned char)t814 & 0x1);
                                            }
                                            t817 = t814;
                                            if (t815 != 0) {
                                                t817 = (t814 + 0x1);
                                            }
                                            FUN_0c02b502(0x3);
                                            t823 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t817 << 1) + (unsigned char)t817) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t817 << 1) + (unsigned char)t817) << 2) << 1))) ? 1u : 0u));
                                            t827 = (int)((unsigned int)((int)((unsigned int)(t823 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t823 >> 1))) ? 1u : 0u));
                                            FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t827 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                            FUN_0c02b502(0x7);
                                            t1050 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t817 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t817 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t827 >> 1))), 180.0f, (1.0f + 1.0f)));
                                        } else {
                                            if (t760 == 22) {
                                                FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                                                FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t746 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f));
                                                t844 = FUN_0c187d88(0xC30A354);
                                                t845 = ((~(((~(unsigned char)t844) + 0x1) & 0x1)) + 0x1);
                                                if ((int)(unsigned char)t844 >= 0) {
                                                    t845 = ((unsigned char)t844 & 0x1);
                                                }
                                                t847 = t844;
                                                if (t845 != 0) {
                                                    t847 = (t844 + 0x1);
                                                }
                                                FUN_0c02b502(0x3);
                                                t853 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t847 << 1) + (unsigned char)t847) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t847 << 1) + (unsigned char)t847) << 2) << 1))) ? 1u : 0u));
                                                t857 = (int)((unsigned int)((int)((unsigned int)(t853 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t853 >> 1))) ? 1u : 0u));
                                                FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t857 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                                FUN_0c02b502(0x7);
                                                t1050 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t847 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t847 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t857 >> 1))), 180.0f, (1.0f + 1.0f)));
                                            } else {
                                                if (t760 == 21) {
                                                    FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                    FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                                                    FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t746 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f));
                                                    t874 = FUN_0c187d88(0xC30A354);
                                                    t875 = ((~(((~(unsigned char)t874) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)(unsigned char)t874 >= 0) {
                                                        t875 = ((unsigned char)t874 & 0x1);
                                                    }
                                                    t877 = t874;
                                                    if (t875 != 0) {
                                                        t877 = (t874 + 0x1);
                                                    }
                                                    FUN_0c02b502(0x3);
                                                    t883 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t877 << 1) + (unsigned char)t877) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t877 << 1) + (unsigned char)t877) << 2) << 1))) ? 1u : 0u));
                                                    t887 = (int)((unsigned int)((int)((unsigned int)(t883 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t883 >> 1))) ? 1u : 0u));
                                                    FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t887 >> 1)) + -24.0f), (((((struct o8_float *)((t746 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f));
                                                    FUN_0c02b502(0x7);
                                                    t1050 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t877 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t877 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t887 >> 1))), (((((struct o8_float *)((t746 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f)));
                                                } else {
                                                    if (t760 == 70) {
                                                        FUN_0c02b502(0x3);
                                                        t900 = 0xC1A75A0;
                                                        if ((*(signed char *)((a4 + 0x18))) == 0) {
                                                            t900 = 0xC1A7598;
                                                        }
                                                        FUN_0c02b3ba(t900, 416.0f, 204.0f, (1.0f + 1.0f));
                                                        t903 = *(signed char *)((a4 + 0x19));
                                                        t906 = 0xC1A7598;
                                                        if (t903 != 0) {
                                                            t906 = 0xC1A75A0;
                                                            if (t903 != 1) {
                                                                t906 = 0xC1A75A8;
                                                            }
                                                        }
                                                        FUN_0c02b3ba(t906, 416.0f, 228.0f, (1.0f + 1.0f));
                                                        t909 = *(signed char *)((a4 + 0x1A));
                                                        t912 = 0xC1A7598;
                                                        if (t909 != 0) {
                                                            t912 = 0xC1A75B0;
                                                            if (t909 != 1) {
                                                                t912 = 0xC1A75B8;
                                                            }
                                                        }
                                                        t1050 = (FUN_0c02b3ba(t912, 416.0f, 252.0f, (1.0f + 1.0f)));
                                                    } else {
                                                        t1050 = t760;
                                                        if (t760 == 28) {
                                                            t916 = 0x13;
                                                            if ((*(int *)0xC5426EC) != 0) {
                                                                t916 = 0x7;
                                                            }
                                                            FUN_0c02b502(t916);
                                                            t1050 = (FUN_0c02b3ba((*(int *)(((t746 + 0x14) + 0xC))), ((((struct o4_float *)((t746 + 0x14)))->v)), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t971 = *(int *)0xC3BABB4;
                                    t973 = (0x16C + t971);
                                    if (((*(int *)((t971 + 0x0))) & 1) == 0) {
                                        t973 = (t971 + 0x8);
                                    }
                                    strcpy((((int)stk + 0) + 0x30), t973);
                                    t976 = FUN_0c187d88((((int)stk + 0) + 0x30));
                                    if ((int)(unsigned char)t976 <= (int)0x14) {
                                        FUN_0c02b502(0x7);
                                        t981 = (((int)stk + 0) + 0x30);
                                        u982 = 262.0f;
                                    } else {
                                        (((struct o14_uchar *)((((int)stk + 0) + 0x30)))->v) = 0x0;
                                        FUN_0c02b502(0x7);
                                        FUN_0c02b3ba((((int)stk + 0) + 0x30), 262.0f, 228.0f, (1.0f + 1.0f));
                                        t981 = 0xC1A758C;
                                        u982 = 502.0f;
                                    }
                                    t1050 = (FUN_0c02b3ba(t981, u982, 228.0f, (1.0f + 1.0f)));
                                }
                            } else {
                                FUN_0c02b342(0xC30A404, (*(int *)(((int)stk + 0))));
                                FUN_0c02b502(0x3);
                                t1050 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), 248.0f, 156.0f, (1.0f + 1.0f)));
                            }
                        } else {
                            strcpy((((int)stk + 0) + 0x8), 0xC3051C4);
                            *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                            FUN_0c02b342((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x30));
                            *(unsigned char *)(((int)stk + 4)) = (FUN_0c187d88((((int)stk + 0) + 0x8)));
                            FUN_0c02b502(0x6);
                            t1013 = *(signed char *)(((int)stk + 4));
                            t1050 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1013 << 1) + (unsigned char)t1013) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1013 << 1) + (unsigned char)t1013) << 2) << 1))) ? 1u : 0u))) >> 1)), 180.0f, (1.0f + 1.0f)));
                        }
                    } else {
                        FUN_0c02b342(0xC30999E, (*(int *)(((int)stk + 0))));
                        FUN_0c02b502((unsigned short)(*(short *)(((t746 + 0x14) + 0x0))));
                        t1050 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), ((((struct o4_float *)((t746 + 0x14)))->v)), ((((struct o8_float *)((t746 + 0x14)))->v)), (1.0f + 1.0f)));
                    }
                }
                t1063 = t1050;
            }
            t1076 = t1063;
        }
        t1444 = t1076;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x410);
        (((struct o44_float *)(a4))->v) = 0.0199999996f;
        (((struct o40_float *)(a4))->v) = 0.0199999996f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oB0_float *)(a4))->v) = 0.899999976f;
        *(unsigned short *)((a4 + 0x1C)) = 0x10;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        (((struct o40_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
        t1094 = *(short *)((a4 + 0x1C));
        t1431 = t1094;
        if (t1094 != 0) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x10;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
            t1099 = *(short *)((a4 + 0x1C));
            t1418 = t1099;
            if (t1099 != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
                if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
                    (((struct o14_uchar *)(a4))->v) = 0x4;
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                }
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                u1111 = 0.899999976f;
                u1111 = u1111 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
                (((struct oB0_float *)(a4))->v) = u1111;
                t1114 = (*(int *)((((*(signed char *)((a4 + 0x3))) << 2) + 0xC20DDFC)));
                for (;;) {
                    if ((*(short *)((t1114 + 0x10))) != 0) {
                        break;
                    }
                    FUN_0c02b502((unsigned short)(*(short *)((t1114 + 0x0))));
                    FUN_0c02b3ba((*(int *)((t1114 + 0xC))), ((((struct o4_float *)(t1114))->v)), ((((struct o8_float *)(t1114))->v)), (1.0f + 1.0f));
                    t1114 = (t1114 + 0x14);
                }
                FUN_0c02b502((unsigned short)(*(short *)((t1114 + 0x0))));
                FUN_0c02b3ba((*(int *)((t1114 + 0xC))), ((((struct o4_float *)(t1114))->v)), ((((struct o8_float *)(t1114))->v)), (1.0f + 1.0f));
                *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                t1128 = *(signed char *)((a4 + 0x3));
                if (t1128 != 23) {
                    if (t1128 != 24) {
                        if ((t1128 != 26) && (t1128 != 67)) {
                            if (t1128 != 55) {
                                if (t1128 == 60) {
                                    t1144 = *(int *)((a4 + 0x10));
                                    FUN_0c02b342(t1144, (*(int *)(((int)stk + 0))));
                                    FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                                    FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t1114 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f));
                                    t1152 = FUN_0c187d88((t1144 + 0x8));
                                    t1153 = ((~(((~(unsigned char)t1152) + 0x1) & 0x1)) + 0x1);
                                    if ((int)(unsigned char)t1152 >= 0) {
                                        t1153 = ((unsigned char)t1152 & 0x1);
                                    }
                                    t1155 = t1152;
                                    if (t1153 != 0) {
                                        t1155 = (t1152 + 0x1);
                                    }
                                    FUN_0c02b502(0x3);
                                    t1161 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1155 << 1) + (unsigned char)t1155) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1155 << 1) + (unsigned char)t1155) << 2) << 1))) ? 1u : 0u));
                                    t1165 = (int)((unsigned int)((int)((unsigned int)(t1161 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1161 >> 1))) ? 1u : 0u));
                                    FUN_0c02b3ba((t1144 + 0x8), ((float)(0x140 - (t1165 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                    FUN_0c02b502(0x7);
                                    t1418 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t1155 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t1155 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t1165 >> 1))), 180.0f, (1.0f + 1.0f)));
                                } else {
                                    if (t1128 == 32) {
                                        FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                        FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                                        FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t1114 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f));
                                        t1182 = FUN_0c187d88(0xC30A354);
                                        t1183 = ((~(((~(unsigned char)t1182) + 0x1) & 0x1)) + 0x1);
                                        if ((int)(unsigned char)t1182 >= 0) {
                                            t1183 = ((unsigned char)t1182 & 0x1);
                                        }
                                        t1185 = t1182;
                                        if (t1183 != 0) {
                                            t1185 = (t1182 + 0x1);
                                        }
                                        FUN_0c02b502(0x3);
                                        t1191 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1185 << 1) + (unsigned char)t1185) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1185 << 1) + (unsigned char)t1185) << 2) << 1))) ? 1u : 0u));
                                        t1195 = (int)((unsigned int)((int)((unsigned int)(t1191 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1191 >> 1))) ? 1u : 0u));
                                        FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t1195 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                        FUN_0c02b502(0x7);
                                        t1418 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t1185 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t1185 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t1195 >> 1))), 180.0f, (1.0f + 1.0f)));
                                    } else {
                                        if (t1128 == 22) {
                                            FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                            FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                                            FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t1114 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f));
                                            t1212 = FUN_0c187d88(0xC30A354);
                                            t1213 = ((~(((~(unsigned char)t1212) + 0x1) & 0x1)) + 0x1);
                                            if ((int)(unsigned char)t1212 >= 0) {
                                                t1213 = ((unsigned char)t1212 & 0x1);
                                            }
                                            t1215 = t1212;
                                            if (t1213 != 0) {
                                                t1215 = (t1212 + 0x1);
                                            }
                                            FUN_0c02b502(0x3);
                                            t1221 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1215 << 1) + (unsigned char)t1215) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1215 << 1) + (unsigned char)t1215) << 2) << 1))) ? 1u : 0u));
                                            t1225 = (int)((unsigned int)((int)((unsigned int)(t1221 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1221 >> 1))) ? 1u : 0u));
                                            FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t1225 >> 1)) + -24.0f), 180.0f, (1.0f + 1.0f));
                                            FUN_0c02b502(0x7);
                                            t1418 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t1215 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t1215 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t1225 >> 1))), 180.0f, (1.0f + 1.0f)));
                                        } else {
                                            if (t1128 == 21) {
                                                FUN_0c02b342(0xC30A34C, (*(int *)(((int)stk + 0))));
                                                FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                                                FUN_0c02b3ba((*(int *)(((int)stk + 0))), (((((struct o4_float *)((t1114 + 0x14)))->v)) + 168.0f), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f));
                                                t1242 = FUN_0c187d88(0xC30A354);
                                                t1243 = ((~(((~(unsigned char)t1242) + 0x1) & 0x1)) + 0x1);
                                                if ((int)(unsigned char)t1242 >= 0) {
                                                    t1243 = ((unsigned char)t1242 & 0x1);
                                                }
                                                t1245 = t1242;
                                                if (t1243 != 0) {
                                                    t1245 = (t1242 + 0x1);
                                                }
                                                FUN_0c02b502(0x3);
                                                t1251 = (int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1245 << 1) + (unsigned char)t1245) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1245 << 1) + (unsigned char)t1245) << 2) << 1))) ? 1u : 0u));
                                                t1255 = (int)((unsigned int)((int)((unsigned int)(t1251 >> 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1251 >> 1))) ? 1u : 0u));
                                                FUN_0c02b3ba(0xC30A354, ((float)(0x140 - (t1255 >> 1)) + -24.0f), (((((struct o8_float *)((t1114 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f));
                                                FUN_0c02b502(0x7);
                                                t1418 = (FUN_0c02b3ba(0xC1A7590, ((float)(((((((unsigned int)(unsigned char)t1245 >> 1) - 1) << 1) + (((unsigned int)(unsigned char)t1245 >> 1) - 1)) << 2) << 1) + (float)(0x140 - (t1255 >> 1))), (((((struct o8_float *)((t1114 + 0x14)))->v)) + 72.0f), (1.0f + 1.0f)));
                                            } else {
                                                if (t1128 == 70) {
                                                    FUN_0c02b502(0x3);
                                                    t1268 = 0xC1A75A0;
                                                    if ((*(signed char *)((a4 + 0x18))) == 0) {
                                                        t1268 = 0xC1A7598;
                                                    }
                                                    FUN_0c02b3ba(t1268, 416.0f, 204.0f, (1.0f + 1.0f));
                                                    t1271 = *(signed char *)((a4 + 0x19));
                                                    t1274 = 0xC1A7598;
                                                    if (t1271 != 0) {
                                                        t1274 = 0xC1A75A0;
                                                        if (t1271 != 1) {
                                                            t1274 = 0xC1A75A8;
                                                        }
                                                    }
                                                    FUN_0c02b3ba(t1274, 416.0f, 228.0f, (1.0f + 1.0f));
                                                    t1277 = *(signed char *)((a4 + 0x1A));
                                                    t1280 = 0xC1A7598;
                                                    if (t1277 != 0) {
                                                        t1280 = 0xC1A75B0;
                                                        if (t1277 != 1) {
                                                            t1280 = 0xC1A75B8;
                                                        }
                                                    }
                                                    t1418 = (FUN_0c02b3ba(t1280, 416.0f, 252.0f, (1.0f + 1.0f)));
                                                } else {
                                                    t1418 = t1128;
                                                    if (t1128 == 28) {
                                                        t1284 = 0x13;
                                                        if ((*(int *)0xC5426EC) != 0) {
                                                            t1284 = 0x7;
                                                        }
                                                        FUN_0c02b502(t1284);
                                                        t1418 = (FUN_0c02b3ba((*(int *)(((t1114 + 0x14) + 0xC))), ((((struct o4_float *)((t1114 + 0x14)))->v)), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                t1339 = *(int *)0xC3BABB4;
                                t1341 = (0x16C + t1339);
                                if (((*(int *)((t1339 + 0x0))) & 1) == 0) {
                                    t1341 = (t1339 + 0x8);
                                }
                                strcpy((((int)stk + 0) + 0x30), t1341);
                                t1344 = FUN_0c187d88((((int)stk + 0) + 0x30));
                                if ((int)(unsigned char)t1344 <= (int)0x14) {
                                    FUN_0c02b502(0x7);
                                    t1349 = (((int)stk + 0) + 0x30);
                                    u1350 = 262.0f;
                                } else {
                                    (((struct o14_uchar *)((((int)stk + 0) + 0x30)))->v) = 0x0;
                                    FUN_0c02b502(0x7);
                                    FUN_0c02b3ba((((int)stk + 0) + 0x30), 262.0f, 228.0f, (1.0f + 1.0f));
                                    t1349 = 0xC1A758C;
                                    u1350 = 502.0f;
                                }
                                t1418 = (FUN_0c02b3ba(t1349, u1350, 228.0f, (1.0f + 1.0f)));
                            }
                        } else {
                            FUN_0c02b342(0xC30A404, (*(int *)(((int)stk + 0))));
                            FUN_0c02b502(0x3);
                            t1418 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), 248.0f, 156.0f, (1.0f + 1.0f)));
                        }
                    } else {
                        strcpy((((int)stk + 0) + 0x8), 0xC3051C4);
                        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x30);
                        FUN_0c02b342((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x30));
                        *(unsigned char *)(((int)stk + 4)) = (FUN_0c187d88((((int)stk + 0) + 0x8)));
                        FUN_0c02b502(0x6);
                        t1381 = *(signed char *)(((int)stk + 4));
                        t1418 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), (float)(0x140 - (((int)((unsigned int)((int)((unsigned int)(((((unsigned char)t1381 << 1) + (unsigned char)t1381) << 2) << 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((((unsigned char)t1381 << 1) + (unsigned char)t1381) << 2) << 1))) ? 1u : 0u))) >> 1)), 180.0f, (1.0f + 1.0f)));
                    }
                } else {
                    FUN_0c02b342(0xC30999E, (*(int *)(((int)stk + 0))));
                    FUN_0c02b502((unsigned short)(*(short *)(((t1114 + 0x14) + 0x0))));
                    t1418 = (FUN_0c02b3ba((*(int *)(((int)stk + 0))), ((((struct o4_float *)((t1114 + 0x14)))->v)), ((((struct o8_float *)((t1114 + 0x14)))->v)), (1.0f + 1.0f)));
                }
            }
            t1431 = t1418;
        }
        t1444 = t1431;
    }
    return t1444;
}

int FUN_0c01966e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t2 = t0;
                if (t0 == 3) {
                    t0 = FUN_0c01c62a(a4);
                    t2 = (signed char)t0;
                    if ((signed char)t0 != 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                }
                return t2;
            }
            (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF3C + ((unsigned char)(*(signed char *)((t1 + 0x0))) << 2))));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            u0 = 0.200000003f;
            u0 = u0 + 0.200000003f * (math_sin_angle16(((((short)(t0 + 0x1) << 8) << 2) << 1)));
            (((struct oBC_float *)(a4))->v) = u0;
            (((struct oB8_float *)(a4))->v) = u0;
            (((struct oB4_float *)(a4))->v) = u0;
            t0 = FUN_0c01cd2c(0x101);
            if ((short)t0 != 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            t0 = *(signed char *)((a4 + 0x3));
            if ((*(signed char *)0xC30503C) == t0) {
                return thunk_FUN_0c03f346(a4);
            }
            return t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t2 = 0xA8;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x210);
    (((struct oBC_float *)(a4))->v) = 0.200000003f;
    (((struct oB8_float *)(a4))->v) = 0.200000003f;
    (((struct oB4_float *)(a4))->v) = 0.200000003f;
    (((struct o40_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 0.699999988f;
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF3C + ((unsigned char)(*(signed char *)((t1 + 0x0))) << 2))));
    (((struct o30_float *)(a4))->v) = 7.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x20;
    return 0x20;
}

int FUN_0c019954(int a4)
{
    register int t0;

    *(unsigned char *)(((FUN_0c01cc56(0xD, 0xC019C66)) + 0x3)) = 0x3;
    t0 = FUN_0c01cc56(0x15, 0xC019C66);
    *(unsigned char *)((t0 + 0x3)) = 0x4;
    *(unsigned int *)((t0 + 0x10)) = a4;
    t0 = *(signed char *)0xC30AA32;
    if (t0 != 0) {
        if (t0 != 2) {
        } else {
            t0 = FUN_0c01cc56(0x18, 0xC019C66);
            *(unsigned char *)((t0 + 0x3)) = 0x3;
            (((struct o28_float *)(t0))->v) = 0.0f;
            (((struct o2C_float *)(t0))->v) = ((((struct o4_float *)0xC019B1C)->v));
        }
    } else {
        t0 = FUN_0c01cc56(0x18, 0xC019C66);
        *(unsigned char *)((t0 + 0x3)) = 0x3;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = ((((struct o0_float *)0xC019B1C)->v));
        t0 = FUN_0c01cc56(0x18, 0xC019C66);
        *(unsigned char *)((t0 + 0x3)) = 0x3;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = ((((struct o4_float *)0xC019B1C)->v));
    }
    return FUN_0c01cb7c();
}

int FUN_0c019a06(int a4)
{
    register int t1;

    *(unsigned char *)(((FUN_0c01cc56(0x10, 0xC019C66)) + 0x3)) = 0x3;
    t1 = FUN_0c01cc56(0x15, 0xC019C66);
    *(unsigned char *)((t1 + 0x3)) = 0x5;
    *(unsigned int *)((t1 + 0x10)) = a4;
    return FUN_0c01cb7c();
}

int FUN_0c019a32(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x0));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 == 2) {
                t1 = 0x0;
                if ((*(signed char *)((a4 + 0x9))) != 0) {
                    *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                    t2 = *(signed char *)((a4 + 0x1));
                    if ((unsigned char)t2 != 0) {
                        if ((unsigned char)t2 != 1) {
                            t3 = 0x0;
                            if ((unsigned char)t2 != 2) {
                            } else {
                                t3 = ((unsigned char)(*(signed char *)((a4 + 0xA))) + 0x1);
                            }
                            t2 = t3;
                        } else {
                            t3 = *(signed char *)((a4 + 0x4));
                            *(unsigned char *)((a4 + 0x4)) = (t3 - 1);
                            t4 = 0x0;
                            if ((signed char)(t3 - 1) == 0) {
                                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                t4 = ((unsigned char)(*(signed char *)((a4 + 0xA))) + 0x1);
                            }
                            t2 = t4;
                        }
                        t3 = t2;
                    } else {
                        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                        t2 = 0xFFFFFFFF;
                        if ((*(signed char *)((a4 + 0xA))) == 0) {
                            t2 = 0xFF000000;
                        }
                        FUN_0c0573cc(t2, 0x0, 0x14);
                        *(unsigned char *)((a4 + 0x4)) = 0x14;
                        t2 = *(signed char *)((a4 + 0x4));
                        *(unsigned char *)((a4 + 0x4)) = (t2 - 1);
                        t4 = 0x0;
                        if ((signed char)(t2 - 1) == 0) {
                            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                            t4 = ((unsigned char)(*(signed char *)((a4 + 0xA))) + 0x1);
                        }
                        t3 = t4;
                    }
                    t1 = t3;
                }
                t2 = t1;
            } else {
                t1 = 0x0;
                if ((unsigned char)t0 == 3) {
                    t0 = *(signed char *)((a4 + 0x1));
                    if ((unsigned char)t0 != 0) {
                        if ((unsigned char)t0 != 1) {
                            t3 = 0x0;
                            if ((unsigned char)t0 != 2) {
                            } else {
                                t3 = ((unsigned char)(*(signed char *)((a4 + 0xA))) + 0x1);
                            }
                            t0 = t3;
                        } else {
                            t3 = *(signed char *)((a4 + 0x4));
                            *(unsigned char *)((a4 + 0x4)) = (t3 - 1);
                            t4 = 0x0;
                            if ((signed char)(t3 - 1) == 0) {
                                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                t4 = ((unsigned char)(*(signed char *)((a4 + 0xA))) + 0x1);
                            }
                            t0 = t4;
                        }
                        t3 = t0;
                    } else {
                        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                        t0 = 0xFFFFFFFF;
                        if ((*(signed char *)((a4 + 0xA))) == 0) {
                            t0 = 0xFF000000;
                        }
                        FUN_0c0573cc(t0, 0x0, 0x14);
                        *(unsigned char *)((a4 + 0x4)) = 0x14;
                        t0 = *(signed char *)((a4 + 0x4));
                        *(unsigned char *)((a4 + 0x4)) = (t0 - 1);
                        t4 = 0x0;
                        if ((signed char)(t0 - 1) == 0) {
                            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                            t4 = ((unsigned char)(*(signed char *)((a4 + 0xA))) + 0x1);
                        }
                        t3 = t4;
                    }
                    t1 = t3;
                }
                t2 = t1;
            }
            t0 = t2;
        } else {
            t1 = *(signed char *)((a4 + 0x1));
            if ((unsigned char)t1 != 0) {
                if ((unsigned char)t1 != 1) {
                    if ((unsigned char)t1 != 2) {
                        if ((unsigned char)t1 != 3) {
                            if ((unsigned char)t1 != 4) {
                            } else {
                                t1 = FUN_0c01cd2c(0x2000);
                                if ((short)t1 != 0) {
                                    *(unsigned char *)((a4 + 0x1)) = 0x1;
                                    *(unsigned char *)((a4 + 0x8)) = 0x3;
                                    *(unsigned char *)((a4 + 0x9)) = 0x0;
                                    FUN_0c05aab6(0x0, 0x6);
                                } else {
                                    t1 = FUN_0c01cd2c(0x40);
                                    if ((short)t1 != 0) {
                                        *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                                        *(unsigned char *)((a4 + 0x9)) = 0x1;
                                        *(unsigned char *)((a4 + 0xA)) = 0x1;
                                        FUN_0c05aab6(0x0, 0x4);
                                    } else {
                                        t1 = FUN_0c01cd2c(0x101);
                                        if ((short)t1 != 0) {
                                            *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                                            *(unsigned char *)((a4 + 0x8)) = 0x4;
                                            *(unsigned char *)((a4 + 0x9)) = 0x0;
                                            FUN_0c05aab6(0x0, 0x3);
                                        } else {
                                            FUN_0c01c714((a4 + 0xA), 0x1, 0x3);
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((unsigned char)(*(signed char *)((a4 + 0x9))) == 3) {
                                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                                *(unsigned char *)((a4 + 0x8)) = 0x0;
                            }
                        }
                    } else {
                        t1 = FUN_0c01cd2c(0x1000);
                        if ((short)t1 != 0) {
                            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                            *(unsigned char *)((a4 + 0x8)) = 0x2;
                            *(unsigned char *)((a4 + 0x9)) = 0x0;
                            FUN_0c05aab6(0x0, 0x6);
                        } else {
                            t1 = FUN_0c01cd2c(0x40);
                            if ((short)t1 == 0) {
                            } else {
                                *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
                                *(unsigned char *)((a4 + 0x9)) = 0x1;
                                *(unsigned char *)((a4 + 0xA)) = 0x1;
                                FUN_0c05aab6(0x0, 0x4);
                            }
                        }
                    }
                } else {
                    if ((unsigned char)(*(signed char *)((a4 + 0x9))) != 3) {
                    } else {
                        *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                        *(unsigned char *)((a4 + 0x8)) = 0x0;
                    }
                }
            } else {
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
                *(unsigned char *)((a4 + 0xA)) = 0x1;
                t1 = FUN_0c01cc56(0xB, 0xC019C66);
                *(unsigned char *)((t1 + 0x3)) = 0x0;
                *(unsigned int *)((t1 + 0x10)) = a4;
                t1 = FUN_0c01cc56(0xC, 0xC019C66);
                *(unsigned char *)((t1 + 0x3)) = 0x1;
                *(unsigned int *)((t1 + 0x10)) = a4;
                t1 = FUN_0c01cc56(0x15, 0xC019C66);
                *(unsigned char *)((t1 + 0x3)) = 0x2;
                *(unsigned int *)((t1 + 0x10)) = a4;
                *(unsigned char *)((a4 + 0x8)) = 0x1;
                *(unsigned char *)((a4 + 0x9)) = 0x0;
            }
            t0 = 0x0;
        }
        t1 = t0;
    } else {
        if ((*(signed char *)((a4 + 0x1))) == 0) {
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
            FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x14);
            *(unsigned char *)((a4 + 0x4)) = 0x14;
            FUN_0c01cb7c();
        }
        t0 = *(signed char *)((a4 + 0x4));
        *(unsigned char *)((a4 + 0x4)) = (t0 - 1);
        if ((signed char)(t0 - 1) != 0) {
        } else {
            *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
            *(unsigned char *)((a4 + 0x1)) = 0x0;
        }
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c019c66(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register float u0;

    t0 = *(signed char *)((a4 + 0x3));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = *(signed char *)((a4 + 0x14));
            if (t2 != 0) {
                t3 = t2;
                if (t2 != 1) {
                } else {
                    t2 = *(signed char *)((a4 + 0x15));
                    if (t2 != 0) {
                        if (t2 != 1) {
                            t4 = t2;
                            if (t2 == 2) {
                                t2 = *(signed char *)((t1 + 0x8));
                                t5 = t2;
                                if (t2 != 0) {
                                } else {
                                    (((struct o15_uchar *)(a4))->v) = 0x0;
                                    t5 = 0x15;
                                }
                                t4 = t5;
                            }
                            t2 = t4;
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = *(signed char *)((t1 + 0x8));
                            t5 = (unsigned char)t4;
                            if ((unsigned char)t4 == 4) {
                            } else {
                                *(unsigned char *)((t1 + 0x9)) = ((*(signed char *)((t1 + 0x9))) + 0x1);
                                if ((unsigned char)(*(signed char *)((t1 + 0x8))) == 2) {
                                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                                }
                                t4 = *(signed char *)((t1 + 0x8));
                                t6 = (unsigned char)t4;
                                if ((unsigned char)t4 != 3) {
                                } else {
                                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                                    t6 = 0xA8;
                                }
                                t5 = t6;
                            }
                            t2 = t5;
                        }
                        t4 = t2;
                    } else {
                        t2 = *(signed char *)((t1 + 0x8));
                        t5 = t2;
                        if (t2 == 0) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t5 = 0x15;
                        }
                        t4 = t5;
                    }
                    t3 = t4;
                }
                t2 = t3;
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                (((struct o2C_float *)(a4))->v) = 0.0f;
                (((struct o30_float *)(a4))->v) = 0.0f;
                t2 = 0x30;
            }
            t3 = t2;
        } else {
            if (t0 == 2) {
                u0 = 128.0f;
                if ((*(signed char *)((t1 + 0xA))) == 0) {
                    u0 = -128.0f;
                }
                (((struct o28_float *)(a4))->v) = u0;
                t2 = *(signed char *)((a4 + 0x14));
                if (t2 != 0) {
                    if (t2 != 1) {
                        t4 = t2;
                        if (t2 != 2) {
                        } else {
                            t2 = FUN_0c01c62a(a4);
                            *(unsigned char *)((t1 + 0x9)) = t2;
                            t4 = t2;
                        }
                        t2 = t4;
                    } else {
                        FUN_0c012c34(a4);
                        t4 = *(signed char *)((a4 + 0x15));
                        if (t4 != 0) {
                            if (t4 != 1) {
                                t5 = t4;
                                if (t4 != 2) {
                                } else {
                                    t4 = *(signed char *)((t1 + 0x8));
                                    t6 = t4;
                                    if (t4 != 0) {
                                    } else {
                                        (((struct o15_uchar *)(a4))->v) = 0x0;
                                        t6 = 0x15;
                                    }
                                    t5 = t6;
                                }
                                t4 = t5;
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                *(unsigned char *)((t1 + 0x9)) = ((*(signed char *)((t1 + 0x9))) + 0x1);
                                if ((unsigned char)(*(signed char *)((t1 + 0x8))) != 2) {
                                    t5 = *(signed char *)((t1 + 0x8));
                                    if ((unsigned char)t5 == 3) {
                                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                                        t6 = 0xA8;
                                    } else {
                                        t7 = (unsigned char)t5;
                                        if ((unsigned char)t5 != 4) {
                                        } else {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            (((struct o1B_uchar *)(a4))->v) = 0x0;
                                            *(unsigned char *)((t1 + 0x9)) = 0x0;
                                            (((struct o22_ushort *)(a4))->v) = 0x0;
                                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                                            t7 = 0xA8;
                                        }
                                        t6 = t7;
                                    }
                                    t5 = t6;
                                } else {
                                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                                    t5 = 0xA8;
                                }
                                t4 = t5;
                            }
                            t5 = t4;
                        } else {
                            t4 = *(signed char *)((t1 + 0x8));
                            t6 = t4;
                            if (t4 == 0) {
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t6 = 0x15;
                            }
                            t5 = t6;
                        }
                        t2 = t5;
                    }
                    t4 = t2;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                    (((struct o2C_float *)(a4))->v) = -176.0f;
                    (((struct o30_float *)(a4))->v) = 3.0f;
                    t4 = 0x30;
                }
                t2 = t4;
            } else {
                if (t0 == 3) {
                    t4 = 0x14;
                    if ((*(signed char *)((a4 + 0x14))) != 0) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                        t4 = 0xA8;
                    }
                    t5 = t4;
                } else {
                    if (t0 == 4) {
                        t4 = *(signed char *)((a4 + 0x14));
                        t6 = *(int *)((a4 + 0x10));
                        if (t4 != 0) {
                            if (t4 != 1) {
                                if (t4 != 2) {
                                    t7 = t4;
                                    if (t4 != 3) {
                                    } else {
                                        t4 = FUN_0c01c62a(a4);
                                        t8 = (signed char)t4;
                                        if ((signed char)t4 != 0) {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            t8 = 0x14;
                                        }
                                        t7 = t8;
                                    }
                                    t4 = t7;
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF54 + ((unsigned char)(*(signed char *)((t6 + 0x0))) << 2))));
                                    FUN_0c012c34(a4);
                                    t7 = FUN_0c01cd2c(0x101);
                                    t8 = (short)t7;
                                    if ((short)t7 != 0) {
                                        t9 = (short)t7;
                                        if ((*(signed char *)0xC30EFA2) != 0) {
                                        } else {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            (((struct o1B_uchar *)(a4))->v) = 0x0;
                                            (((struct o22_ushort *)(a4))->v) = 0x0;
                                            t9 = 0x22;
                                        }
                                        t8 = t9;
                                    }
                                    t4 = t8;
                                }
                                t7 = t4;
                            } else {
                                (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF54 + ((unsigned char)(*(signed char *)((t6 + 0x0))) << 2))));
                                FUN_0c012c34(a4);
                                t4 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                                t8 = (short)(t4 - 1);
                                if ((short)(t4 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t8 = 0x14;
                                }
                                t7 = t8;
                            }
                            t4 = t7;
                        } else {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF54 + ((unsigned char)(*(signed char *)((t6 + 0x0))) << 2))));
                            FUN_0c012c34(a4);
                            t6 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t6 - 1);
                            t7 = (short)(t6 - 1);
                            if ((short)(t6 - 1) == 0) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t7 = 0x14;
                            }
                            t4 = t7;
                        }
                        t6 = t4;
                    } else {
                        t4 = t0;
                        if (t0 == 5) {
                            t0 = *(signed char *)((a4 + 0x14));
                            t7 = *(int *)((a4 + 0x10));
                            if (t0 != 0) {
                                if (t0 != 1) {
                                    if (t0 != 2) {
                                        t8 = t0;
                                        if (t0 != 3) {
                                        } else {
                                            t0 = FUN_0c01c62a(a4);
                                            t9 = (signed char)t0;
                                            if ((signed char)t0 != 0) {
                                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                                t9 = 0x14;
                                            }
                                            t8 = t9;
                                        }
                                        t0 = t8;
                                    } else {
                                        (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF64 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
                                        FUN_0c012c34(a4);
                                        t8 = FUN_0c01cd2c(0x101);
                                        t9 = (short)t8;
                                        if ((short)t8 != 0) {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            (((struct o1B_uchar *)(a4))->v) = 0x0;
                                            (((struct o22_ushort *)(a4))->v) = 0x0;
                                            t9 = 0x22;
                                        }
                                        t0 = t9;
                                    }
                                    t8 = t0;
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF64 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
                                    FUN_0c012c34(a4);
                                    t0 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                                    t9 = (short)(t0 - 1);
                                    if ((short)(t0 - 1) == 0) {
                                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                        t9 = 0x14;
                                    }
                                    t8 = t9;
                                }
                                t0 = t8;
                            } else {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                (((struct oA8_uchar *)(a4))->v) = 0x1;
                                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                                (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20DF64 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
                                FUN_0c012c34(a4);
                                t7 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t7 - 1);
                                t8 = (short)(t7 - 1);
                                if ((short)(t7 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t8 = 0x14;
                                }
                                t0 = t8;
                            }
                            t4 = t0;
                        }
                        t6 = t4;
                    }
                    t5 = t6;
                }
                t2 = t5;
            }
            t3 = t2;
        }
        t0 = t3;
    } else {
        t2 = *(signed char *)((a4 + 0x14));
        if (t2 != 0) {
            t3 = t2;
            if (t2 != 1) {
            } else {
                t2 = *(signed char *)((a4 + 0x15));
                if (t2 != 0) {
                    if (t2 != 1) {
                        if (t2 != 2) {
                            t4 = t2;
                            if (t2 != 3) {
                            } else {
                                t2 = *(signed char *)((t1 + 0x8));
                                t5 = t2;
                                if (t2 != 0) {
                                } else {
                                    (((struct o15_uchar *)(a4))->v) = 0x0;
                                    t5 = 0x15;
                                }
                                t4 = t5;
                            }
                            t2 = t4;
                        } else {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                            t4 = 0x2C;
                            if (((((struct o4C_float *)(a4))->v)) > ((((struct o2C_float *)(a4))->v))) {
                            } else {
                                (((struct o2C_float *)(a4))->v) = ((((struct o4C_float *)(a4))->v));
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t5 = *(signed char *)((t1 + 0x9));
                                *(unsigned char *)((t1 + 0x9)) = (t5 + 0x1);
                                t4 = (t5 + 0x1);
                            }
                            t2 = t4;
                        }
                        t4 = t2;
                    } else {
                        t2 = *(signed char *)((t1 + 0x8));
                        if ((unsigned char)t2 != 1) {
                            if ((unsigned char)t2 != 2) {
                                if ((unsigned char)t2 != 3) {
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x2);
                                    t2 = 0x15;
                                } else {
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x2);
                                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                                    t5 = *(signed char *)((t1 + 0x9));
                                    *(unsigned char *)((t1 + 0x9)) = (t5 + 0x1);
                                    t2 = (t5 + 0x1);
                                }
                                t5 = t2;
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x2);
                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                                t2 = *(signed char *)((t1 + 0x9));
                                *(unsigned char *)((t1 + 0x9)) = (t2 + 0x1);
                                t5 = (t2 + 0x1);
                            }
                            t2 = t5;
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct o50_float *)(a4))->v) = 10.0f;
                            (((struct o4C_float *)(a4))->v) = 0.0f;
                            t2 = 0x4C;
                        }
                        t4 = t2;
                    }
                    t2 = t4;
                } else {
                    t4 = *(signed char *)((t1 + 0x8));
                    t1 = t4;
                    if (t4 == 0) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    }
                    t2 = t1;
                }
                t3 = t2;
            }
            t1 = t3;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o2C_float *)(a4))->v) = -400.0f;
            (((struct o30_float *)(a4))->v) = 0.0f;
            t1 = 0x30;
        }
        t0 = t1;
    }
    return t0;
}
