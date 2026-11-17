/* game/ai: functions 0C0BD4AC-0C0BD512, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int FUN_0c0bd4ac(int a4, int a5, int a6, int a7);

int FUN_0c0bd4ac(int a4, int a5, int a6, int a7)
{
    register int t2;

    (((struct o0_uint *)0xC47245C)->v) = (*(int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)));
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    for (;;) {
        if (((((struct o4_short *)0xC47245C)->v)) == 0) {
            break;
        }
        t2 = (*(int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)));
        t2 = (t2 + 0x2);
        (((struct o0_uint *)0xC47245C)->v) = t2;
        t2 = (t2 - 2);
        t2 = (*(short *)((t2 + 0x0)));
        t2 = (unsigned short)t2;
        t2 = (t2 << 2);
        t2 = (((int (*)(int, int, int, int))((*(int *)((0xC25DBBC + t2)))))(a4, a5, a6, a7));
    }
    return t2;
}
