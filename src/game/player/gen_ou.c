/* Straight-line functions with calls and guards (batch gen_ou): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1818_uchar { char p[0x1818]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o738_uchar { char p[0x738]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c125cd0(int);
int FUN_0c126618(int);
int FUN_0c126c4c(int);
int FUN_0c127068(int);
int pl_ryoma_cue_table_next(int, int, int, int);
int FUN_0c091164(int a4, int a5, int a6, float f4);

int FUN_0c091164(int a4, int a5, int a6, float f4)
{
    int t0;
    int t3;
    int t1;
    int t2;
    int t5;
    int t4;

    t0 = *(signed char *)(a4 + 0x15);
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = a5;
            t2 = a6;
        } else {
            return t0;
        }
    } else {
        t0 = *(signed char *)(a4 + 0x17);
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    t0 = *(signed char *)(a4 + 0x1);
                    t3 = 0x5;
                    t4 = (t0);
                    t5 = t0;
                    t0 = 0x5;
                } else {
                    t5 = *(signed char *)(a4 + 0x1);
                    t3 = 0x4;
                    t4 = (t5);
                    t0 = 0x4;
                }
                FUN_0c07e79c(a4, t5, 0x6, t0, t4, 0x6, t3);
                (((struct o447_uchar *)(a4))->v) = 0x1;
            } else {
                if ((*(signed char *)(a4 + 0x371A)) == 0) {
                    t0 = *(signed char *)(a4 + 0x1);
                    FUN_0c07e79c(a4, t0, 0x6, 0x3, (t0), 0x6, 0x3);
                    (((struct o446_uchar *)(a4))->v) = 0x3;
                    (((struct o447_uchar *)(a4))->v) = 0x2;
                    *(unsigned char *)(((((short)(*(signed char *)(a4 + 0x371A)) * (short)0x10E0) + (0x468 + a4)) + 0x0)) = 0x0;
                    t0 = 0xC;
                    for (;;) {
                        if (t0 == 0) {
                            break;
                        }
                        FUN_0c125cd0(a4);
                        t0 = (t0 - 1);
                    }
                } else {
                    t0 = *(signed char *)(a4 + 0x1);
                    FUN_0c07e79c(a4, t0, 0x6, 0xD, (t0), 0x6, 0xD);
                }
            }
        } else {
            if ((*(signed char *)(a4 + 0x371A)) == 0) {
                t0 = *(signed char *)(a4 + 0x1);
                FUN_0c07e79c(a4, t0, 0x6, 0x2, (t0), 0x6, 0x2);
                (((struct o447_uchar *)(a4))->v) = 0x1;
                FUN_0c126c4c(a4);
                t0 = 0xC;
                for (;;) {
                    if (t0 == 0) {
                        break;
                    }
                    FUN_0c125cd0(a4);
                    t0 = (t0 - 1);
                }
            } else {
                t0 = *(signed char *)(a4 + 0x1);
                FUN_0c07e79c(a4, t0, 0x6, 0xD, (t0), 0x6, 0xD);
            }
        }
        (((struct o738_uchar *)(a4))->v) = 0x1;
        (((struct o1818_uchar *)(a4))->v) = 0x1;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t3))->v) = 1.0f;
        (((struct o9C_float *)(t3))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t3))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t3))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
        (((struct o19_uchar *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        t1 = t3;
        t2 = (0x118 + a4);
    }
    FUN_0c037bf6(a4, t1, t2);
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    t0 = *(signed char *)(a4 + 0x17);
    t1 = *(signed char *)0xC5429A8;
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = t0;
            if (t0 != 2) {
            } else {
                t0 = (((struct o20_short *)(a4))->v);
                t3 = t0;
                if (t0 == 34) {
                    if (t1 != 3) {
                        FUN_0c126618(a4);
                    }
                    t0 = 0x1818;
                    if ((*(signed char *)(a4 + 0x371A)) == 0) {
                        t0 = 0x738;
                    }
                    *(unsigned char *)((a4 + t0)) = 0x0;
                    t3 = t0;
                }
                t2 = t3;
            }
            return t2;
        }
        if ((*(signed char *)(a4 + 0x371A)) == 0) {
            t0 = 0x20;
            if (((((struct o20_short *)(a4))->v)) == 0x9F) {
                t2 = t1;
                if (t1 != 3) {
                    t1 = 0x19C4;
                    if ((*(signed char *)(a4 + 0x371A)) == 0) {
                        t1 = 0xA94;
                    }
                    *(float *)((a4 + t1)) = 0.0f;
                    t2 = t1;
                }
                t0 = t2;
            }
            return t0;
        }
    } else {
        if ((*(signed char *)(a4 + 0x371A)) == 0) {
            t0 = (((struct o22_short *)(a4))->v);
            return pl_ryoma_cue_table_next(a4, (((t0 << 1) + t0) + 0xC1C6142), ((((struct o20_short *)(a4))->v)), (a4 + 0x22));
        }
    }
    t0 = (((struct o20_short *)(a4))->v);
    if (t0 == 30) {
        return FUN_0c127068(a4);
    }
    return t0;
}
