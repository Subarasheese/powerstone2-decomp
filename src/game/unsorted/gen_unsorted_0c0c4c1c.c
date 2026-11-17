/* game/unsorted: functions 0C0C4C1C-0C0C4CAE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
int FUN_0c0c25c4(int);
int FUN_0c0c2870(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3ae8(int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c4c1c(int a4, int a5, int a6);

int FUN_0c0c4c1c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c0c3e3a(a4, a5, a6);
    if (t1 == 0) {
        t2 = FUN_0c0c2870(a4);
        if (t2 != 0) {
            return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
        }
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        FUN_0c0c25c4(a4);
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        FUN_0c0c3ae8(a4);
        FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
        if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 34) {
            *(unsigned int *)((a4 + 0x10)) = 0x0;
        }
        (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    return t1;
}
