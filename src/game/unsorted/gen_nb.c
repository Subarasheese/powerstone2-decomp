/* Straight-line functions with calls and guards (batch gen_nb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
extern int FUN_0c03f346();
int FUN_0c059e9a(int, int, int);
int FUN_0c064f80(int);
int FUN_0c1272a8(int, int);
int FUN_0c12764c(int, int);
int FUN_0c127448(int a4, int a5, int a6, int a7);

int FUN_0c127448(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0xB;
    }
    if ((t2 == 0) || (t2 == 1)) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        } else {
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x4000;
        }
        if (((*(short *)((a4 + 0x1E))) & 2) != 0) {
            u0 = (((((struct o40_float *)(a4))->v)) + 0.200000003f);
        } else {
            u0 = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
        }
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o48_float *)(a4))->v) = u0;
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                t3 = t2;
                if (t2 == 2) {
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + (*(float *)(((((((struct o20_short *)(a4))->v)) << 2) + 0xC201BBC))));
                    (((struct o48_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t4 = (short)(t2 - 1);
                    if ((short)(t2 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t4 = 0x14;
                    }
                    t3 = t4;
                }
                t2 = t3;
            } else {
                (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                t3 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                t4 = (short)(t3 - 1);
                if ((short)(t3 - 1) == 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x3;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    t4 = 0x12A;
                }
                t2 = t4;
            }
            return t2;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 30.0f);
        if ((int)((((struct o22_short *)(a4))->v)) > 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                FUN_0c059e9a((*(int *)((a4 + 0x10))), 0x20, (a4 + 0x28));
            }
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1C))) > (int)0x1) {
            (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = 30.0f;
        }
        if (((int)((((struct o20_short *)(a4))->v)) > (int)0x1) && (t0 = *(short *)((a4 + 0x1C)), t0 == 10)) {
            FUN_0c1272a8((*(int *)((a4 + 0x10))), (((((struct o20_short *)(a4))->v)) - 1));
        }
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            if (((int)(*(short *)((a4 + 0x1C))) < (int)0xA) && (t1 = (((struct o20_short *)(a4))->v), (int)t1 > (int)0x1)) {
                FUN_0c1272a8((*(int *)((a4 + 0x10))), (((((struct o20_short *)(a4))->v)) - 1));
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3;
            FUN_0c12764c(a4, ((((struct o20_short *)(a4))->v)));
            if ((int)((((struct o22_short *)(a4))->v)) > 0) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
                FUN_0c059e9a((*(int *)((a4 + 0x10))), 0x20, (a4 + 0x28));
            }
        }
        if ((*(float *)0xC541098) > ((((struct o2C_float *)(a4))->v))) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        return 0x2C;
    } else {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
}
