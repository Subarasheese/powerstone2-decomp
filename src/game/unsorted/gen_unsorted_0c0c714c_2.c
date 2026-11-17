/* game/unsorted: functions 0C0C714C-0C0C7A72, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o420_short { char p[0x420]; short v; };
int FUN_0c059df2(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c166270(int, int);
int FUN_0c168bb8(int, int, int, int);
int FUN_0c168fa8(int, int, int, int);
int FUN_0c16944a(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c0c7664(int a4);
int FUN_0c0c78a0(int a4, int a5, int a6);

int FUN_0c0c7664(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t5;
    register float t10;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u17;
    register float t19;
    register float u20;
    register float u22;
    register float u23;
    register int t35;
    register int t45;
    register float t48;
    register float u50;
    register float u51;
    register float u52;
    register float u53;
    register float u55;
    register float t57;
    register float u58;
    register float u60;
    register float u61;
    register float t72;
    register float u74;
    register float u75;
    register float u76;
    register float u77;
    register float u79;
    register float t81;
    register float u82;
    register float u84;
    register float u85;
    register int t97;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c0c283a(a4);
    if (t1 != 0) {
        t97 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
    } else {
        t5 = *(signed char *)((a4 + 0x15));
        if (t5 != 0) {
            if (t5 == 1) {
                if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x3)) == 0) {
                    FUN_0c187798();
                    t10 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u12 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u13 = (t10 * u12);
                    u14 = (*(float *)(((int)stk + 0)));
                    u14 = u14 + 80.0f * u13;
                    *(float *)(((int)stk + 0)) = u14;
                    u15 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u17 = (*(float *)(((int)stk + 4)));
                    u17 = u17 + 100.0f * u15;
                    *(float *)(((int)stk + 4)) = u17;
                    t19 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u20 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u22 = (t19 * u20);
                    u23 = (*(float *)(((int)stk + 8)));
                    u23 = u23 + 80.0f * u22;
                    *(float *)(((int)stk + 8)) = u23;
                    if ((*(short *)((a4 + 0x1E))) == 0) {
                        FUN_0c168fa8((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    } else {
                        FUN_0c168fa8((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x0);
                    }
                }
                t35 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t35 - 1);
                if ((int)(short)(t35 - 1) <= 0) {
                    FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
                }
            }
        } else {
            FUN_0c0c213c(a4);
            t45 = *(signed char *)((a4 + 0x41C));
            if ((unsigned char)t45 != 66) {
                if ((unsigned char)t45 != 67) {
                } else {
                    FUN_0c187798();
                    t48 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u50 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u51 = (t48 * u50);
                    u52 = (*(float *)(((int)stk + 0)));
                    u52 = u52 + 80.0f * u51;
                    *(float *)(((int)stk + 0)) = u52;
                    u53 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u55 = (*(float *)(((int)stk + 4)));
                    u55 = u55 + 115.0f * u53;
                    *(float *)(((int)stk + 4)) = u55;
                    t57 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u58 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u60 = (t57 * u58);
                    u61 = (*(float *)(((int)stk + 8)));
                    u61 = u61 + 80.0f * u60;
                    *(float *)(((int)stk + 8)) = u61;
                    FUN_0c16944a((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34));
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x70);
                    FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
                }
            } else {
                FUN_0c187798();
                t72 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u74 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u75 = (t72 * u74);
                u76 = (*(float *)(((int)stk + 0)));
                u76 = u76 + 80.0f * u75;
                *(float *)(((int)stk + 0)) = u76;
                u77 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u79 = (*(float *)(((int)stk + 4)));
                u79 = u79 + 100.0f * u77;
                *(float *)(((int)stk + 4)) = u79;
                t81 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u82 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u84 = (t81 * u82);
                u85 = (*(float *)(((int)stk + 8)));
                u85 = u85 + 80.0f * u84;
                *(float *)(((int)stk + 8)) = u85;
                FUN_0c168fa8((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x0);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x67);
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
        (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
        t97 = 0x376C;
    }
    return t97;
}

int FUN_0c0c78a0(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t3;
    register int t15;
    register int t16;
    register float t18;
    register float u20;
    register float u21;
    register float u22;
    register float u23;
    register float u25;
    register float t27;
    register float u28;
    register float u30;
    register float u31;
    register int t34;
    register int t50;
    register int t51;
    register float t53;
    register float u55;
    register float u56;
    register float u57;
    register float u58;
    register float u60;
    register float t62;
    register float u63;
    register float u65;
    register float u66;
    register int t85;
    register int t10;
    register int t11;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
            (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
            t85 = 0x376C;
        } else {
            t3 = FUN_0c0c283a(a4);
            if (t3 != 0) {
                if ((int)((((struct o420_short *)(a4))->v)) <= 0) {
                    t10 = 0x6;
                    t11 = (*(signed char *)((a4 + 0x1)));
                } else {
                    t10 = 0x5;
                    t11 = (*(signed char *)((a4 + 0x1)));
                }
                t85 = (FUN_0c0c2d56(a4, t10, t11));
            } else {
                if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 63) {
                    t15 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t15 - 1);
                    if ((int)(short)(t15 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x6;
                        t16 = ((int (*)(void))(FUN_0c187798))();
                        t18 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                        u20 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                        u21 = (t18 * u20);
                        u22 = (*(float *)(((int)stk + 0)));
                        u22 = u22 + 100.0f * u21;
                        *(float *)(((int)stk + 0)) = u22;
                        u23 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                        u25 = (*(float *)(((int)stk + 4)));
                        u25 = u25 + 140.0f * u23;
                        *(float *)(((int)stk + 4)) = u25;
                        t27 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                        u28 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                        u30 = (t27 * u28);
                        u31 = (*(float *)(((int)stk + 8)));
                        u31 = u31 + 100.0f * u30;
                        *(float *)(((int)stk + 8)) = u31;
                        FUN_0c168bb8((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x0);
                        t34 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t34 - 1);
                        if ((short)(t34 - 1) == 0) {
                            FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
                        }
                    }
                }
                (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
                t85 = 0x376C;
            }
        }
    } else {
        t50 = *(signed char *)((a4 + 0x41C));
        if ((unsigned char)t50 != 62) {
            if ((unsigned char)t50 != 63) {
            } else {
                t51 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
                t53 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u55 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u56 = (t53 * u55);
                u57 = (*(float *)(((int)stk + 0)));
                u57 = u57 + 100.0f * u56;
                *(float *)(((int)stk + 0)) = u57;
                u58 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u60 = (*(float *)(((int)stk + 4)));
                u60 = u60 + 140.0f * u58;
                *(float *)(((int)stk + 4)) = u60;
                t62 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u63 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u65 = (t62 * u63);
                u66 = (*(float *)(((int)stk + 8)));
                u66 = u66 + 100.0f * u65;
                *(float *)(((int)stk + 8)) = u66;
                FUN_0c168bb8((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), 0x1);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x53);
                *(unsigned short *)((a4 + 0x1C)) = 0x5;
                *(unsigned short *)((a4 + 0x1E)) = 0x6;
            }
        } else {
            FUN_0c166270(a4, (*(signed char *)((a4 + 0x41F))));
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x50);
        }
        FUN_0c0c213c(a4);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
        t85 = 0x376C;
    }
    return t85;
}
