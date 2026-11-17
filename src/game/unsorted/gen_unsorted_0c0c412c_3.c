/* game/unsorted: functions 0C0C412C-0C0C43A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o386C_uchar { char p[0x386C]; unsigned char v; };
struct o3874_uchar { char p[0x3874]; unsigned char v; };
struct o387C_uchar { char p[0x387C]; unsigned char v; };
struct o3884_uchar { char p[0x3884]; unsigned char v; };
int FUN_0c0c418c(int);
int FUN_0c179ac0(void);
int FUN_0c0c42c4(int a4);

int FUN_0c0c42c4(int a4)
{
    int t0;
    register int t1;

    t0 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x5);
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && ((t0 != 3) && (t0 != 4))) {
            } else {
                (((struct o386C_uchar *)(a4))->v) = (*(signed char *)((0xC27337C + ((int)((int)(FUN_0c179ac0()) % (int)0x6)))));
                t0 = FUN_0c179ac0();
                t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
                if ((int)t0 >= 0) {
                    t1 = (t0 & 0x3);
                }
                (((struct o3874_uchar *)(a4))->v) = (*(signed char *)(((t1 + 0xC27337C) + 0x6)));
                t0 = FUN_0c179ac0();
                t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
                if ((int)t0 >= 0) {
                    t1 = (t0 & 0x3);
                }
                (((struct o387C_uchar *)(a4))->v) = (*(signed char *)(((t1 + 0xC27337C) + 0xC)));
                t0 = FUN_0c179ac0();
                t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
                if ((int)t0 >= 0) {
                    t1 = (t0 & 0x3);
                }
                (((struct o3884_uchar *)(a4))->v) = (*(signed char *)((((0xC27337C + t1) + 0x12) + 0x0)));
            }
        } else {
            (((struct o386C_uchar *)(a4))->v) = 0x5D;
            (((struct o3874_uchar *)(a4))->v) = 0x5E;
            (((struct o387C_uchar *)(a4))->v) = 0x5F;
            (((struct o3884_uchar *)(a4))->v) = 0x6E;
        }
    } else {
        (((struct o386C_uchar *)(a4))->v) = 0x59;
        (((struct o3874_uchar *)(a4))->v) = 0x5A;
        (((struct o387C_uchar *)(a4))->v) = 0x5B;
        (((struct o3884_uchar *)(a4))->v) = 0x5C;
    }
    return FUN_0c0c418c((*(signed char *)((a4 + 0x1))));
}
