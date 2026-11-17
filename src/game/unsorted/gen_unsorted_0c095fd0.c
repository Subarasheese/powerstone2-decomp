/* game/unsorted: functions 0C095FD0-0C09601C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07ecc6(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c095fd0(int a4);

int FUN_0c095fd0(int a4)
{
    register int t0;
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 == 0) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        t1 = t0;
        if (t0 != 0) {
            (((struct o5C_float *)(a4))->v) = (*(float *)0xC096090);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t1 = 0x16;
        }
        t0 = t1;
    } else {
        (((struct o5C_float *)(a4))->v) = (*(float *)0xC096090);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t0 = 0x16;
    }
    return t0;
}
