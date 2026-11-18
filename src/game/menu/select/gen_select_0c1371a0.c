/* game/menu/select: functions 0C1371A0-0C137408, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c1371a0(int a4, int a5, int a6);
int FUN_0c137258(int a4, int a5, int a6, int a7);
int FUN_0c1373e2(int a4);


int FUN_0c137258(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t4;
    register int t22;
    register float t27;
    register float t31;
    register int t35;
    register int t48;
    register int t75;
    register float t80;
    register float t84;
    register int t88;
    register int t101;
    register int t124;
    int t6;

    if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 26) {
        t124 = (FUN_0c03f346(a4, a5, a6, a7));
    } else {
        t4 = *(signed char *)((a4 + 0x14));
        if (t4 != 0) {
            if (t4 != 1) {
                if (t4 == 2) {
                    if (((*(int *)((a4 + 0x10))) != 0) && (t6 = *(int *)((a4 + 0x10)), t124 = *(signed char *)((0x14 + t6)), t124 != 2)) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t124 = 0x14;
                    }
                } else {
                    t124 = (FUN_0c03f346(a4, a5, a6, a7));
                }
            } else {
                if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o4_int *)0xC2A1830)->v)))) == 0) {
                    t22 = (((struct o8_int *)0xC2A1830)->v);
                    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = ((int)((int)(((int)((int)(FUN_0c179ac0()) % (int)t22)) * 0x168) / (int)t22));
                    t27 = math_sin_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    *(unsigned int *)(((int)stk + 0)) = 0xC2A183C;
                    *(float *)(((int)stk + 16)) = (t27 * ((((struct oC_float *)0xC2A1830)->v)));
                    *(float *)(((int)stk + 20)) = 0.0f;
                    t31 = math_cos_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    *(float *)(((int)stk + 24)) = (t31 * (*(float *)(((*(int *)(((int)stk + 0))) + 0x0))));
                    t35 = FUN_0c1371a0((*(signed char *)((a4 + 0x1))), (((int)stk + 0) + 0x10), a4);
                    if (t35 != 0) {
                        *(unsigned int *)((a4 + 0x10)) = t35;
                    }
                }
                if ((int)(*(signed char *)((0xC5324AD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) <= (int)0x2) {
                    t48 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t48 + 0x1);
                    t124 = (short)(t48 + 0x1);
                    if ((int)(short)(t48 + 0x1) > (int)((((struct o0_int *)0xC2A1830)->v))) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t124 = 0x14;
                    }
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t124 = 0x14;
                }
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o4_int *)0xC2A1830)->v)))) == 0) {
                t75 = (((struct o8_int *)0xC2A1830)->v);
                *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = ((int)((int)(((int)((int)(FUN_0c179ac0()) % (int)t75)) * 0x168) / (int)t75));
                t80 = math_sin_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                *(unsigned int *)(((int)stk + 0)) = 0xC2A183C;
                *(float *)(((int)stk + 16)) = (t80 * ((((struct oC_float *)0xC2A1830)->v)));
                *(float *)(((int)stk + 20)) = 0.0f;
                t84 = math_cos_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                *(float *)(((int)stk + 24)) = (t84 * (*(float *)(((*(int *)(((int)stk + 0))) + 0x0))));
                t88 = FUN_0c1371a0((*(signed char *)((a4 + 0x1))), (((int)stk + 0) + 0x10), a4);
                if (t88 != 0) {
                    *(unsigned int *)((a4 + 0x10)) = t88;
                }
            }
            if ((int)(*(signed char *)((0xC5324AD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) <= (int)0x2) {
                t101 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t101 + 0x1);
                t124 = (short)(t101 + 0x1);
                if ((int)(short)(t101 + 0x1) > (int)((((struct o0_int *)0xC2A1830)->v))) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t124 = 0x14;
                }
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t124 = 0x14;
            }
        }
    }
    return t124;
}

int FUN_0c1373e2(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t2 = t0;
    if (t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x1)) = t2;
        *(unsigned int *)((t0 + 0x4)) = 0xC137258;
    }
    return t2;
}


