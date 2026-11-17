/* game/unsorted: functions 0C0E82FC-0C0E8364, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_short { char p[0x24]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_ushort { char p[0x41C]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f444(int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c187798(int);
int FUN_0c0e82fc(int a4);

int FUN_0c0e82fc(int a4)
{
    register int t0;
    register int t2;
    register int t4;

    t0 = FUN_0c03f444(0x2, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0E8190;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c187798(t0);
        FUN_0c187798(t2);
        *(unsigned int *)((t4 + 0x10)) = a4;
        (((struct oAC_ushort *)(t4))->v) = 0xF;
        (((struct o41C_ushort *)(t4))->v) = ((((struct o24_short *)(a4))->v));
        return FUN_0c064d5a(t4, 0xC1CC124);
    }
    return t0;
}
