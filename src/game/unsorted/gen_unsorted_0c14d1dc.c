/* game/unsorted: functions 0C14D1DC-0C14D34C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059f20(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c14fb3c(int, float, float, float, float, float);
int FUN_0c1512a0(int, int);
int FUN_0c187798(void);
int FUN_0c14d1dc(int a4, int a5, int a6, int a7);

int FUN_0c14d1dc(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t6;
    register int t28;
    register int t31;
    register int t32;
    register int t57;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t57 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.899999976f);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 1.10000002f);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * 1.10000002f);
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 0.5f);
            t6 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t6 - 1);
            t57 = (short)(t6 - 1);
            if ((int)(short)(t6 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t57 = 0x14;
            }
        }
    } else {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        if ((((((struct o4C_float *)(a4))->v)) + 300.0f) > ((((struct o2C_float *)(a4))->v))) {
            (((struct o12E_ushort *)(a4))->v) = 0xF0;
        }
        t28 = FUN_0c064ee4(a4, 0x2);
        if (t28 != 0) {
            FUN_0c187798();
            FUN_0c1512a0(0x1, ((int)stk + 0));
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t57 = 0x14;
        } else {
            t31 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t31 - 1);
            if ((int)(short)(t31 - 1) > 0) {
                t32 = FUN_0c064f80(a4);
                t57 = t32;
                if (t32 != 0) {
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    FUN_0c187798();
                    *(float *)(((int)stk + 4)) = ((((struct o168_float *)(a4))->v));
                    FUN_0c14fb3c(((int)stk + 0), 0.899999976f, 0.829999983f, 0.629999995f, 4.0f, (1.0f + 1.0f));
                    *(unsigned short *)((a4 + 0x1C)) = 0x6;
                    (((struct o12E_ushort *)(a4))->v) = 0x0;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t57 = 0x14;
                }
            } else {
                (((struct o50_float *)(a4))->v) = 0.0f;
                FUN_0c187798();
                *(float *)(((int)stk + 4)) = ((((struct o168_float *)(a4))->v));
                FUN_0c14fb3c(((int)stk + 0), 0.899999976f, 0.829999983f, 0.629999995f, 4.0f, (1.0f + 1.0f));
                *(unsigned short *)((a4 + 0x1C)) = 0x6;
                (((struct o12E_ushort *)(a4))->v) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t57 = 0x14;
            }
        }
    }
    return t57;
}
