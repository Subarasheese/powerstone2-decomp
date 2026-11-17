/* game/unsorted: functions 0C0C4CE4-0C0C5094, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o383A_short { char p[0x383A]; short v; };
struct o383C_short { char p[0x383C]; short v; };
int FUN_0c0c25c4(int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c3ae8(int);
int FUN_0c0cb1e4(int, int);
int FUN_0c0c4ce4(int a4, int a5, int a6, int a7);

int FUN_0c0c4ce4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))), a6, a7);
    FUN_0c0c25c4(a4);
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    FUN_0c0c3ae8(a4);
    t1 = *(signed char *)((a4 + 0x41C));
    if ((unsigned char)t1 != 72) {
        if ((unsigned char)t1 != 41) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t1 = 0x383C;
            if ((int)((((struct o383A_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) > (int)((((struct o383C_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))) {
                t1 = 0x383A;
            }
            *(unsigned short *)((a4 + 0x1E)) = (*(short *)(((((short)t0 * (short)0x3938) + 0xC532498) + t1)));
        }
    } else {
        FUN_0c0cb1e4(a4, 0x1);
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}
