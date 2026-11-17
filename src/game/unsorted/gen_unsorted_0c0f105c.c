/* game/unsorted: functions 0C0F105C-0C0F124C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
int FUN_0c187798(int, int, int);
int FUN_0c0f105c(int a4, int a5, int a6, float f4);

int FUN_0c0f105c(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t8;
    register float u3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x2));
    t8 = t0;
    if (t0 == 1) {
        *(volatile int *)((a4 + 0x10));
        FUN_0c187798(a4, a5, a6);
        u3 = *(float *)0xC0F10BC;
        (((struct o28_float *)(t4))->v) = (((((struct o28_float *)(t4))->v)) - u3);
        (((struct o30_float *)(t4))->v) = (((((struct o30_float *)(t4))->v)) + u3);
        (((struct o2C_float *)(t4))->v) = (((((struct o2C_float *)(t4))->v)) + 50.0f);
        t8 = 0x2C;
    }
    return t8;
}
