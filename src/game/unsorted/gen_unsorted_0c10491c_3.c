/* game/unsorted: functions 0C10491C-0C1066DC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c105cf4(int);
int thunk_FUN_0c115dc8(void);
int FUN_0c105d08(int, int, float);
int FUN_0c105e8c(int);
int FUN_0c1061e8(int);
int FUN_0c106414(int a4, int a5, int a6, int a7, float f4);

int FUN_0c106414(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return FUN_0c1061e8(a4);
            }
            return FUN_0c105e8c(a4);
        }
        return FUN_0c105d08(a4, a5, f4);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = FUN_0c105cf4(a4);
    if (t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = 0x0;
    } else {
        t0 = thunk_FUN_0c115dc8();
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct o15_uchar *)(a4))->v) = 0x2;
        }
    }
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}
