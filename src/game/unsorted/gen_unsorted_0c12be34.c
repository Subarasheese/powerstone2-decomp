/* game/unsorted: functions 0C12BE34-0C12C36E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c12c388(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c12be34(int a4);
int FUN_0c12bee6(int a4, int a5, int a6, int a7);
int FUN_0c12c1a8(int a4, int a5);


int FUN_0c12bee6(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t1 = *(int *)((a4 + 0x10));
    if (((int)(*(signed char *)((t1 + 0x17))) <= (int)0x2) && (t0 = *(signed char *)((t1 + 0x3715)), t0 == 26)) {
    } else {
        *(unsigned short *)((a4 + 0x1E)) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x3);
                    t1 = (((struct oC4_int *)(a4))->v);
                    u0 = (((math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f))) + 1.0f) / (1.0f + 1.0f));
                    u1 = 0.300000012f;
                    u1 = u1 + 0.699999988f * u0;
                    (((struct o18_float *)(t1))->v) = u1;
                    u0 = (((math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f))) + 1.0f) / (1.0f + 1.0f));
                    u1 = 0.300000012f;
                    u1 = u1 + 0.699999988f * u0;
                    (((struct o20_float *)(t1))->v) = u1;
                    u0 = (((math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f))) + 1.0f) / (1.0f + 1.0f));
                    u1 = 0.300000012f;
                    u1 = u1 + 0.699999988f * u0;
                    (((struct o1C_float *)(t1))->v) = u1;
                    t1 = (int)((int)(*(short *)((a4 + 0x1C))) % (int)0x168);
                    t2 = t1;
                    if (t1 == 90) {
                        t1 = *(short *)((a4 + 0x1E));
                        t2 = t1;
                        if (t1 != 0) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t2 = 0x14;
                        }
                    }
                    return t2;
                }
                if (t0 == 4) {
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x3);
                    t1 = (((struct oC4_int *)(a4))->v);
                    u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
                    (((struct o18_float *)(t1))->v) = (((u0 + 1.0f) / (1.0f + 1.0f)) * 1.0f);
                    u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
                    (((struct o1C_float *)(t1))->v) = (((u0 + 1.0f) / (1.0f + 1.0f)) * 1.0f);
                    u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
                    (((struct o20_float *)(t1))->v) = (((u0 + 1.0f) / (1.0f + 1.0f)) * 1.0f);
                    t1 = (int)((int)(*(short *)((a4 + 0x1C))) % (int)0x168);
                    t2 = t1;
                    if (t1 == 0x10E) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    return t2;
                }
                if (t0 == 5) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                if (t0 == 6) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return t0;
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x3);
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
            (((struct o18_float *)(t0))->v) = (((u0 + 1.0f) / (1.0f + 1.0f)) * 1.0f);
            u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
            (((struct o1C_float *)(t0))->v) = (((u0 + 1.0f) / (1.0f + 1.0f)) * 1.0f);
            u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
            (((struct o20_float *)(t0))->v) = (((u0 + 1.0f) / (1.0f + 1.0f)) * 1.0f);
            t0 = *(short *)((a4 + 0x1C));
            t1 = t0;
            if (t0 != 0x1C2) {
            } else {
                if ((*(short *)((a4 + 0x1E))) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x4;
                }
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        FUN_0c12c388(a4);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o18_float *)(t0))->v) = 0.0f;
        (((struct o1C_float *)(t0))->v) = 0.0f;
        (((struct o20_float *)(t0))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x10E;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}


