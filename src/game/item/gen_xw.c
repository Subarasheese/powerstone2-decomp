/* Straight-line functions with calls and guards (batch gen_xw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c150010(int, float, float, float, float);
int nlAddVector3op(int, int, int);
int FUN_0c16bf02(int a4, int a5, int a6, int a7, float f4);

int FUN_0c16bf02(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register float u0;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 == 0) {
        (((struct o14_uchar *)(a4))->v) = 0x1;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A393C); }
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A3968); }
    }
    if ((t1 == 0) || (t1 == 1)) {
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)((t0 - 1) + 0x1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x2;
                return 0x14;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)((t0 + 0x1) - 1) < (int)0x3C) {
                u0 = *(float *)0xC16C070;
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
            }
            return nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
        FUN_0c150010((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
        (((struct o14_uchar *)(a4))->v) = 0x2;
        return 0x14;
    } else {
        if (t1 != 2) {
            return t1;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
