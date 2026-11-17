/* game/unsorted: functions 0C0F3AEC-0C0F3B9E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c241a(int, int, int, float);
int FUN_0c0f3aec(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0f3aec(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    t3 = *(int *)((a4 + 0x10));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((int)(*(signed char *)((t3 + 0x14))) <= (int)0x1) && (t0 = *(int *)((t3 + 0x4)), t0 != 0)) {
            t0 = *(signed char *)((a4 + 0x15));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        return t0;
                    }
                    t0 = *(int *)((((unsigned char)(*(signed char *)((a4 + 0x41C))) << 2) + 0xC288390));
                    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c0c241a(a4, a5, a6, f4);
            }
            t0 = *(signed char *)((t3 + 0x14));
            t2 = t0;
            if (t0 == 1) {
                t0 = *(signed char *)((t3 + 0x15));
                t2 = t0;
                if (t0 == 5) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    t2 = 0x17;
                }
            }
            return t2;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if (((int)(*(signed char *)((t3 + 0x14))) <= (int)0x1) && (t1 = *(int *)((t3 + 0x4)), t1 != 0)) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                t0 = *(int *)((((unsigned char)(*(signed char *)((a4 + 0x41C))) << 2) + 0xC288390));
                return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
            }
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c0c241a(a4, a5, a6, f4);
        }
        t0 = *(signed char *)((t3 + 0x14));
        t1 = t0;
        if (t0 == 1) {
            t0 = *(signed char *)((t3 + 0x15));
            t2 = t0;
            if (t0 == 5) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
                t2 = 0x17;
            }
            t1 = t2;
        }
        return t1;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}
