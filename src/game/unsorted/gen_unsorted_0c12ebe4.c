/* game/unsorted: functions 0C12EBE4-0C12F2EA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c187798(void);
int FUN_0c12ebe4(int a4, int a5);
int FUN_0c12ed48(int a4, int a5, int a6, int a7);
int FUN_0c12f292(int a4);
int FUN_0c12f2c6(int a4);



int FUN_0c12f292(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x10));
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(t0))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(t0))->v));
    return 0x30;
}

int FUN_0c12f2c6(int a4)
{
    return thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (a4 + 0x28));
}


