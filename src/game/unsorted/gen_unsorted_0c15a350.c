/* game/unsorted: functions 0C15A350-0C15A3EE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c158f5a(int, int, int, int);
int FUN_0c15a350(int a4, int a5, int a6, int a7);

int FUN_0c15a350(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    int t3;
    int t4;
    register int t5;

    t2 = *(signed char *)((a4 + 0x1));
    t3 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x15));
    if ((t3 != 0) && (t3 != 2)) {
        return FUN_0c03f346(a4, 0xC532498, t3, a7);
    }
    if ((*(signed char *)((0x15 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))) != 2) {
        t4 = *(signed char *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x3715));
        if ((t4 != 7) && ((t4 != 26) && ((t4 != 12) && ((t4 != 19) && (t4 != 20))))) {
            return FUN_0c03f346(a4, 0xC532498, t4, a7);
        }
        t5 = 0xC532498;
        if ((((((struct o20_short *)(a4))->v)) != (unsigned char)(*(signed char *)((((((struct o118_int *)((((short)t2 * (short)0x3938) + 0xC532498)))->v)) + 0x82)))) && (t0 = *(short *)((a4 + 0x1E)), (int)t0 > (int)0x8)) {
            *(unsigned short *)((a4 + 0x1E)) = 0x8;
            (((struct o20_ushort *)(a4))->v) = (unsigned char)(*(signed char *)((((((struct o118_int *)((((short)t2 * (short)0x3938) + 0xC532498)))->v)) + 0x82)));
            t5 = 0x8;
        }
        return FUN_0c158f5a(a4, t5, t4, a7);
    }
    t0 = 0xC532498;
    if ((((((struct o20_short *)(a4))->v)) != (unsigned char)(*(signed char *)((((((struct o118_int *)((((short)t2 * (short)0x3938) + 0xC532498)))->v)) + 0x82)))) && (t1 = *(short *)((a4 + 0x1E)), (int)t1 > (int)0x8)) {
        *(unsigned short *)((a4 + 0x1E)) = 0x8;
        (((struct o20_ushort *)(a4))->v) = (unsigned char)(*(signed char *)((((((struct o118_int *)((((short)t2 * (short)0x3938) + 0xC532498)))->v)) + 0x82)));
        t0 = 0x8;
    }
    return FUN_0c158f5a(a4, t0, t3, a7);
}
