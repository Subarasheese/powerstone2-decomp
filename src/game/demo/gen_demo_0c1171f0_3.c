/* game/demo: functions 0C1171F0-0C11855A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c05aab6(int, int);
int bgm_stop_slot(int);
int FUN_0c104cc8(int);
int FUN_0c1171f0(int);
int FUN_0c117a6e(int, ...);
int FUN_0c117b58(int, int, int, int, int, int, int, int, int, int, int, int);
int nlAddVector3op(int, int, int);
int FUN_0c187798(int);
int FUN_0c117d14(void);
int FUN_0c117d5a(int a4);

int FUN_0c117d14(void)
{
    int stk[4];
    register int t0;
    register int t3;

    t0 = FUN_0c03f444(0x8, 0x1, 0x1);
    t3 = 0x0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC117B58;
        (((struct o4_uint *)0xC474720)->v) = 0xFFFFFFFF;
        (((struct o0_uint *)0xC474720)->v) = 0xFFFFFFFF;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c117a6e(0xFFFFFFFF);
        FUN_0c117b58(t0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        t3 = t0;
    }
    return t3;
}

