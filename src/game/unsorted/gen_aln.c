/* Straight-line functions with calls and guards (batch gen_aln): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c07c1ca(int);
int FUN_0c0f4f28(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0f4fb8(int a4, int a5, int a6, int a7);

int FUN_0c0f4fb8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t1 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1CE304 + (((t1 << 1) + t1) << 2))); }
        *(unsigned short *)((a4 + 0x1C)) = (*(short *)((0xC1CE328 + ((*(signed char *)((a4 + 0x2))) << 1))));
    }
    if ((t0 == 0) || (t0 == 1)) {
        t0 = *(signed char *)((a4 + 0x15));
        switch (t0) {
        case 0:
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)(t0 - 1) > 0) {
                return (short)(t0 - 1);
            }
            break;
        case 1:
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 100.0f);
            t0 = *(signed char *)((a4 + 0x2));
            if (((((struct o2C_float *)(a4))->v)) > (((((struct o4_float *)(((((t0 << 1) + t0) << 2) + 0xC1CE304)))->v)) + -1000.0f)) {
                return 0x2C;
            }
            t0 = *(signed char *)((a4 + 0x2));
            (((struct o2C_float *)(a4))->v) = (((((struct o4_float *)((0xC1CE304 + (((t0 << 1) + t0) << 2))))->v)) + -1000.0f);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            thunk_FUN_0c05abb2(0x4C, (a4 + 0x28));
            FUN_0c05258e(0x2, 0x1E, 0x100, 0x1E, 0x0);
            FUN_0c07c1ca(0x15);
            return FUN_0c0f4f28(a4);
        case 2:
            t0 = *(signed char *)((a4 + 0x2));
            if ((int)(*(signed char *)0xC54098F) <= (int)t0) {
                return t0;
            }
            break;
        default:
            if (t0 != 3) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
                return 0x15;
            }
            t0 = *(signed char *)((a4 + 0x16));
            if (t0 != 0) {
                if (t0 != 1) {
                    t1 = t0;
                    if (t0 != 2) {
                    } else {
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                        if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                            t0 = (((struct oC4_int *)(a4))->v);
                            t2 = t0;
                            u0 = (((((struct o6C_float *)(t0))->v)) + 0.5f);
                        } else {
                            t0 = (((struct oC4_int *)(a4))->v);
                            t2 = t0;
                            u0 = (((((struct o6C_float *)(t0))->v)) - 0.5f);
                        }
                        (((struct o6C_float *)(t2))->v) = u0;
                        if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                            t0 = (((struct oC4_int *)(a4))->v);
                            t2 = t0;
                            u0 = (((((struct o74_float *)(t0))->v)) + 0.5f);
                        } else {
                            t0 = (((struct oC4_int *)(a4))->v);
                            t2 = t0;
                            u0 = (((((struct o74_float *)(t0))->v)) - 0.5f);
                        }
                        (((struct o74_float *)(t2))->v) = u0;
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 5.0f);
                        t0 = 0x2C;
                        if (((((struct o2C_float *)(a4))->v)) > 5000.0f) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t2 = (((struct oC4_int *)(a4))->v);
                            (((struct o74_float *)(t2))->v) = 0.0f;
                            (((struct o6C_float *)(t2))->v) = 0.0f;
                            t0 = 0x6C;
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o6C_float *)(t1))->v)) + 0.5f);
                    } else {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o6C_float *)(t1))->v)) - 0.5f);
                    }
                    (((struct o6C_float *)(t2))->v) = u0;
                    if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o74_float *)(t1))->v)) + 0.5f);
                    } else {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o74_float *)(t1))->v)) - 0.5f);
                    }
                    (((struct o74_float *)(t2))->v) = u0;
                    t1 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = 0x0;
                        t1 = (((struct oC4_int *)(a4))->v);
                        (((struct o74_float *)(t1))->v) = 0.0f;
                        (((struct o6C_float *)(t1))->v) = 0.0f;
                    }
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 2.5f);
                    t0 = 0x2C;
                }
                return t0;
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x78;
            return thunk_FUN_0c05abb2(0x4B, (a4 + 0x28));
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        return 0x16;
    } else {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
