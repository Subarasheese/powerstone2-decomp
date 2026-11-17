/* game/player: functions 0C06CBA8-0C06CEBE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
int FUN_0c037bf6(int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c06ce8a(int a4);

int FUN_0c06ce8a(int a4)
{
    int stk[2];
    register int t0;
    register int t4;
    register int t5;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    t4 = *(signed char *)((a4 + 0x15));
    t5 = t4;
    if (t4 == 2) {
        (((struct o3756_uchar *)(a4))->v) = 0x1E;
        (((struct o374A_uchar *)(a4))->v) = 0x1E;
        (((struct o382E_ushort *)(a4))->v) = 0x0;
        t5 = 0x382E;
    }
    return t5;
}
