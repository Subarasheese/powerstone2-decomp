/* game/unsorted: functions 0C1041F0-0C10446C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c1041f0(int a4);

int FUN_0c1041f0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - 3.0f);
    if (-480.0f > ((((struct o6C_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 960.0f);
    }
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - 3.0f);
    if (-480.0f > ((((struct o6C_float *)(((((struct oCC_int *)(a4))->v))))->v))) {
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 960.0f);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                if (((((struct o1C_int *)0xC472CEC)->v)) != 0) {
                    t1 = 0x1;
                    if ((*(signed char *)0xC541F44) == 0) {
                        t1 = 0x0;
                    }
                    t2 = t0;
                    t3 = t1;
                } else {
                    t1 = t0;
                    t0 = 0x1;
                    if ((*(signed char *)0xC541F44) == 0) {
                        t4 = 0x0;
                        if ((int)((((struct o0_int *)0xC472CEC)->v)) <= (int)0x1) {
                            t4 = 0x1;
                        }
                        t1 = 0x1;
                        t0 = t4;
                    }
                    t2 = t1;
                    t3 = t0;
                }
                t0 = t2;
                if (t3 != 0) {
                    t1 = (((struct oC8_int *)(a4))->v);
                    *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x400);
                    t1 = (((struct oCC_int *)(a4))->v);
                    *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x400);
                    t1 = (((struct oC4_int *)(a4))->v);
                    *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
                    t1 = (((struct oC4_int *)(a4))->v);
                    t2 = *(int *)(((0xC4 + a4) + 0x8));
                    t3 = *(int *)(((0xC4 + a4) + 0x4));
                    (((struct o20_float *)(t1))->v) = 1.0f;
                    (((struct o1C_float *)(t1))->v) = 1.0f;
                    (((struct o18_float *)(t1))->v) = 1.0f;
                    (((struct o14_float *)(t2))->v) = 1.0f;
                    (((struct o14_float *)(t3))->v) = 1.0f;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t0 = 0x15;
                }
                t1 = t0;
            } else {
                t0 = (((struct oC8_int *)(a4))->v);
                (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.100000001f);
                if (0.0f > ((((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                }
                t0 = (((struct oC4_int *)(a4))->v);
                u0 = (((struct o14_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v);
                t2 = *(int *)(((0xC4 + a4) + 0x8));
                (((struct o20_float *)(t0))->v) = u0;
                (((struct o1C_float *)(t0))->v) = u0;
                (((struct o18_float *)(t0))->v) = u0;
                (((struct o14_float *)(t2))->v) = u0;
                t1 = 0x14;
            }
            t0 = t1;
        } else {
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o14_float *)(t1))->v) = (((((struct o14_float *)(t1))->v)) + 0.100000001f);
            if (((((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 1.0f) {
                t1 = (((struct oC8_int *)(a4))->v);
                *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) & 0xFBFF);
                t1 = (((struct oCC_int *)(a4))->v);
                *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) & 0xFBFF);
                t1 = (((struct oC4_int *)(a4))->v);
                *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) & 0xFDFF);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            t1 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o14_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v);
            t2 = *(int *)(((0xC4 + a4) + 0x8));
            (((struct o20_float *)(t1))->v) = u0;
            (((struct o1C_float *)(t1))->v) = u0;
            (((struct o18_float *)(t1))->v) = u0;
            (((struct o14_float *)(t2))->v) = u0;
            t0 = 0x14;
        }
        t1 = t0;
    } else {
        if (((((struct o1C_int *)0xC472CEC)->v)) != 0) {
            t0 = *(signed char *)0xC541F43;
            t2 = t0;
            t3 = 0x0;
            if (t0 == 0) {
                t0 = *(signed char *)0xC541F44;
                t4 = 0x1;
                if (t0 != 0) {
                    t4 = 0x0;
                }
                t2 = t0;
                t3 = t4;
            }
            t0 = t2;
            t2 = t3;
        } else {
            t3 = *(signed char *)0xC541F43;
            t4 = t3;
            t2 = 0x0;
            if (t3 == 0) {
                t3 = *(signed char *)0xC541F44;
                t4 = t3;
                t2 = 0x0;
                if (t3 == 0) {
                    t3 = (((struct o0_int *)0xC472CEC)->v);
                    t2 = 0x0;
                    if ((int)t3 > (int)0x1) {
                        t2 = 0x1;
                    }
                    t4 = t3;
                }
            }
            t0 = t4;
        }
        t3 = t0;
        if (t2 == 0) {
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t0 = (((struct oC8_int *)(a4))->v);
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
            t0 = (((struct oCC_int *)(a4))->v);
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
            t0 = (((struct oC4_int *)(a4))->v);
            t2 = *(int *)(((0xC4 + a4) + 0x8));
            t4 = *(int *)(((0xC4 + a4) + 0x4));
            (((struct o20_float *)(t0))->v) = 0.0f;
            (((struct o1C_float *)(t0))->v) = 0.0f;
            (((struct o18_float *)(t0))->v) = 0.0f;
            (((struct o14_float *)(t2))->v) = 0.0f;
            (((struct o14_float *)(t4))->v) = 0.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t3 = 0x15;
        }
        t1 = t3;
    }
    return t1;
}
