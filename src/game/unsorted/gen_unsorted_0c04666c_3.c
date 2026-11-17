/* game/unsorted: functions 0C04666C-0C0472CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
extern int FUN_0c03aeec();
int FUN_0c047064(int a4, int a5, int a6, int a7);

int FUN_0c047064(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = ((int (*)(int, int, int, int))(FUN_0c03aeec))(a4, a5, a6, a7);
    t1 = t0;
    if (t0 != -1) {
        if ((int)(unsigned char)(*(signed char *)0xC40F820) < (int)0x2) {
            t0 = ((int (*)(void))(FUN_0c03aeec))();
            if ((t0 & 0x1) == 0) {
                t0 = ((int (*)(void))(FUN_0c03aeec))();
                if ((t0 & 2) != 0) {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x1;
                } else {
                    (((struct o0_uchar *)0xC40F820)->v) = 0x0;
                }
            } else {
                (((struct o0_uchar *)0xC40F820)->v) = 0x1;
            }
        }
        if ((int)(unsigned char)(*(signed char *)0xC40F821) < (int)0x2) {
            t0 = ((int (*)(void))(FUN_0c03aeec))();
            t1 = 0x1;
            if ((t0 & 4) == 0) {
                t0 = ((int (*)(void))(FUN_0c03aeec))();
                t3 = 0x0;
                if ((t0 & 8) != 0) {
                    t3 = 0x1;
                }
                t1 = t3;
            }
            (((struct o1_uchar *)0xC40F820)->v) = t1;
        }
        if ((int)(unsigned char)(*(signed char *)0xC40F822) < (int)0x2) {
            t0 = ((int (*)(void))(FUN_0c03aeec))();
            t1 = 0x1;
            if ((t0 & 16) == 0) {
                t0 = ((int (*)(void))(FUN_0c03aeec))();
                t3 = 0x0;
                if ((t0 & 32) != 0) {
                    t3 = 0x1;
                }
                t1 = t3;
            }
            (((struct o2_uchar *)0xC40F820)->v) = t1;
        }
        t0 = *(signed char *)0xC40F823;
        t1 = (unsigned char)t0;
        if ((int)(unsigned char)t0 < (int)0x2) {
            t0 = ((int (*)(void))(FUN_0c03aeec))();
            t3 = 0x1;
            if ((t0 & 64) == 0) {
                t0 = ((int (*)(void))(FUN_0c03aeec))();
                t3 = 0x0;
                if ((t0 & 128) != 0) {
                    t3 = 0x1;
                }
            }
            (((struct o3_uchar *)0xC40F820)->v) = t3;
            t1 = t3;
        }
    }
    return t1;
}
