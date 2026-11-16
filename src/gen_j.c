/* Straight-line functions with calls and guards (batch gen_j): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c148d04(int, int);
int FUN_0c148d64(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c149000(int a4, int a5, int a6);
int FUN_0c0dffcc(int a4, int a5, int a6, int a7);

int FUN_0c149000(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x16));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        t1 = *(short *)((a4 + 0x1C));
        if (t1 == 0) {
            return FUN_0c148d64(a4, 0x2, 0x0);
        }
        return t1;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798(0x0, a5, a6);
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o40_float *)(a4))->v) = 0.0f;
    (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = t0;
    (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = t0;
    (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = t0;
    FUN_0c148d04(a4, 0x1);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (t0 == 0) {
        return FUN_0c148d64(a4, 0x2, 0x0);
    }
    return t0;
}

int FUN_0c0dffcc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)0xC54223C) != 1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = 0x15;
            if ((*(signed char *)((a4 + 0x15))) == 0) {
                t2 = *(signed char *)0xC54098D;
                t3 = t2;
                if (t2 == 9) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o12E_ushort *)(a4))->v) = 0xF;
                    t3 = 0x12E;
                }
                t0 = t3;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(volatile int *)0xC540D94;
        FUN_0c187798(a4, a5, a6);
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t1 = t2;
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
            t2 = (t2 + 0x1);
        }
        t1 = 0x15;
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            t2 = *(signed char *)0xC54098D;
            t3 = t2;
            if (t2 == 9) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o12E_ushort *)(a4))->v) = 0xF;
                t3 = 0x12E;
            }
            t1 = t3;
        }
        t0 = t1;
    }
    return t0;
}
