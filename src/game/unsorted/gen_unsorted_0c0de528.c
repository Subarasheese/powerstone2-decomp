/* game/unsorted: functions 0C0DE528-0C0DE61E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int FUN_0c05258e(int, int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c064f80(int);
int FUN_0c0d04c4(int, int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c0de528(int a4, int a5, int a6, int a7);

int FUN_0c0de528(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC54223C) == 0) {
        t0 = *(signed char *)((a4 + 0x14));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 30.0f);
            (((struct oAA_uchar *)(a4))->v) = 0x1;
            (((struct oAB_uchar *)(a4))->v) = 0x5;
            FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
            t0 = 0x0;
            for (;;) {
                if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                    break;
                }
                t1 = t0;
                t1 = (t1 << 2);
                t1 = (t1 + (0xC4 + a4));
                t1 = (*(int *)((t1 + 0x0)));
                FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
                t0 = (t0 + 0x1);
            }
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 20.0f);
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            thunk_FUN_0c05abb2(0x41, (a4 + 0x28));
            FUN_0c0e2700((a4 + 0x28), 0x0, 0x0, 0x0);
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        if ((*(float *)0xC541098) > ((((struct o2C_float *)(a4))->v))) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        return 0x2C;
    }
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
}
