/* game/unsorted: functions 0C0F2628-0C0F2936, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c07d1fc(int, int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c0f2628(int a4, int a5, int a6, int a7);
int FUN_0c0f26a0(int a4);

int FUN_0c0f2628(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c07d1fc(a4, a5, a6, a7);
    if (t0 == 0) {
        t0 = *(signed char *)((a4 + 0x2));
        FUN_0c0e2700((a4 + 0x28), (*(int *)((0xC1CE014 + ((((t0 << 1) + t0) << 2) << 1)))), 0xFFFFFFFF, 0x2);
    }
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
}

int FUN_0c0f26a0(int a4)
{
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}
