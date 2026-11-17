/* game/unsorted: functions 0C095E00-0C095E4A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
int FUN_0c037bf6(int);
int FUN_0c059df2(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c095e00(int a4);

int FUN_0c095e00(int a4)
{
    register int t3;
    register int t7;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t3 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
    t7 = (short)(t3 - 1);
    if ((short)(t3 - 1) == 0) {
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x7);
        *(unsigned short *)((a4 + 0x1C)) = 0x2;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t7 = 0x16;
    }
    return t7;
}
