/* game/unsorted: functions 0C095D9C-0C095E00, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c037bf6(int);
int math_vec3_accumulate(int, int);
int FUN_0c095d9c(int a4);

int FUN_0c095d9c(int a4)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = (((struct oE0_int *)(a4))->v);
    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 1.5f);
    (((struct o8C_float *)((*(int *)(((0xC4 + a4) + 0x20)))))->v) = (1.0f / ((((struct o88_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x2;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}
