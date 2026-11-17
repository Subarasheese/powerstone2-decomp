/* game/player: functions 0C085CAC-0C085F5A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
int FUN_0c085d0c(int, int, int, int);
int FUN_0c085cac(int a4, int a5, int a6, int a7);

int FUN_0c085cac(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t3;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    (((struct o14_uchar *)(a4))->v) = 0x0;
    (((struct o19_uchar *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o3716_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3715)));
    if ((*(signed char *)(((int)stk + 0))) != 64) {
        t3 = *(int *)((((*(signed char *)(((int)stk + 0))) << 2) + 0xC259504));
        t4 = *(signed char *)(((int)stk + 4));
        return ((int (*)(int, int, int, int))(t3))(a4, t4, a6, a7);
    }
    return FUN_0c085d0c(a4, 0x0, a6, a7);
}
