/* Straight-line functions with calls and guards (batch gen_na): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o84_int { char p[0x84]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int);
int FUN_0c064d5a(int, int);
int FUN_0c0d04c4(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0e72e4(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };


int FUN_0c0e72e4(int a4)
{
    int t1;
    int t2;
    int t0;
    int t3;

    t1 = *(signed char *)(a4 + 0x14);
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)(a4 + 0x1B)) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)(a4 + 0x1B)) << 2) + 0xC540D94) + 0x0))) + 0x64);
        }
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 150.0f);
        FUN_0c064d5a(a4, 0xC1CC074);
        (((struct oAC_ushort *)(a4))->v) = 0x3;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = (*(int *)((((t1 << 2) + (0xC4 + a4)) + 0x0)));
            FUN_0c0d04c4((t2 + 0x6), (t2 + 0x78));
            t1 = (t1 + 0x1);
        }
    }
    if ((*(int *)(((((*(signed char *)(a4 + 0x1B)) << 2) + 0xC540D94) + 0x0))) == 0) {
        return FUN_0c03f346(a4);
    }
    t1 = *(signed char *)(a4 + 0x15);
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    t2 = t1;
                    if (t1 == 4) {
                        t3 = (((struct o34_int *)(a4))->v);
                        (((struct o34_uint *)(a4))->v) = (t3 + 0x199);
                        t2 = t1;
                        if ((int)(t3 + 0x199) >= 0) {
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                            t2 = (FUN_0c064d5a(a4, 0xC1CC074));
                        }
                    }
                    t1 = t2;
                } else {
                    t2 = *(signed char *)((0x15 + ((((struct o84_int *)((((*(signed char *)(a4 + 0x2)) << 2) + 0xC540D94)))->v))));
                    t3 = t2;
                    if (t2 == 5) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                        t3 = (FUN_0c064d5a(a4, 0xC1CC080));
                    }
                    t1 = t3;
                }
                t2 = t1;
            } else {
                (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
                t1 = 0x132;
                if (((int)((((struct o1C_short *)(a4))->v)) > 0) && (t0 = *(signed char *)(a4 + 0x132), t0 == 0)) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                    t1 = (FUN_0c064d5a(a4, 0xC1CC098));
                }
                t2 = t1;
            }
            t0 = t2;
        } else {
            t1 = (((struct o34_int *)(a4))->v);
            (((struct o34_uint *)(a4))->v) = (t1 - 0x333);
            t2 = (t1 - 0x333);
            if ((int)(t1 - 0x333) <= (int)0xFFFFC000) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                (((struct o1C_ushort *)(a4))->v) = 0x78;
                FUN_0c064d5a(a4, 0xC1CC08C);
                (((struct o132_uchar *)(a4))->v) = 0x0;
                (((struct o131_uchar *)(a4))->v) = 0x0;
                t2 = 0x131;
            }
            t0 = t2;
        }
        return t0;
    }
    t0 = *(signed char *)((0x17 + (*(int *)((0xC540D94 + ((*(signed char *)(a4 + 0x1B)) << 2))))));
    if (t0 == 1) {
        t1 = *(signed char *)(a4 + 0x2);
        if (((t1 + 0x1) & (*(signed char *)(((0x18 + (*(int *)(((((*(signed char *)(((0x1B + a4) + 0x0))) << 2) + 0xC540D94) + 0x0)))) + 0x0)))) != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            FUN_0c064d5a(a4, 0xC1CC080);
            return thunk_FUN_0c05abb2(0x4B, (a4 + 0x28));
        }
        return (t1 + 0x1);
    }
    return t0;
}
