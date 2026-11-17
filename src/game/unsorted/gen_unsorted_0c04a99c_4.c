/* game/unsorted: functions 0C04A99C-0C04CC56, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int);
int FUN_0c04b23c(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c187798(int);
int FUN_0c04c6c4(int a4, int a5, int a6, int a7, float f4);

int FUN_0c04c6c4(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c04b23c(a4, 0x0, a6, a7);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 45.0f);
            t0 = *(signed char *)((a4 + 0x16));
            if (t0 != 0) {
                if (t0 != 1) {
                } else {
                    if ((int)(*(short *)0xC541F4E) <= (int)0xA) {
                        thunk_FUN_0c05abb2(0x45, (a4 + 0x28));
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    }
                }
            } else {
                if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0xB) {
                    FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x36, (a4 + 0x28));
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                }
            }
            t0 = *(signed char *)0xC541F44;
            if ((int)(unsigned char)t0 > (int)0xB) {
                return FUN_0c03f346(a4);
            }
            return (unsigned char)t0;
        }
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x35, (a4 + 0x28));
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 45.0f);
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0333333351f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0333333351f);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0333333351f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t1 = 0x16;
        }
        return t1;
    }
    t0 = *(signed char *)0xC541F44;
    t1 = (unsigned char)t0;
    if ((int)(unsigned char)t0 < (int)0xA) {
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(volatile int *)((a4 + 0x10));
        FUN_0c187798(0xA);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 585.0f);
        (((struct o48_float *)(a4))->v) = f4;
        (((struct o44_float *)(a4))->v) = f4;
        (((struct o40_float *)(a4))->v) = f4;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        *(unsigned short *)((a4 + 0x1E)) = 0x5;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
