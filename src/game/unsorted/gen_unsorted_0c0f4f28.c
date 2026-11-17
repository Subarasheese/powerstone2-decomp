/* game/unsorted: functions 0C0F4F28-0C0F5252, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int math_mat_get_translate(int, int);
int FUN_0c150160(int, int, float, float, float, float);
int FUN_0c187798(void);
int FUN_0c0f4f28(int a4);

int FUN_0c0f4f28(int a4)
{
    int stk[10];
    register float u2;
    register float u3;
    register int t4;
    register int t10;

    *(unsigned int *)(((int)stk + 0)) = a4;
    math_mat_get_translate((((((struct oC4_int *)(a4))->v)) + 0x28), (((int)stk + 0) + 0x4));
    u2 = (((struct o0_float *)0xC0F503C)->v);
    u3 = (((struct o4_float *)0xC0F503C)->v);
    t4 = 0x0;
    for (;;) {
        FUN_0c187798();
        *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + ((float)t4 + u2));
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = 1.0f;
        t10 = FUN_0c150160((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), ((((struct o14_float *)0xC0F503C)->v)), ((((struct o10_float *)0xC0F503C)->v)), ((((struct oC_float *)0xC0F503C)->v)), u3);
        t4 = (t4 + 0x6F);
        if ((int)t4 >= (int)0x456) {
            break;
        }
    }
    return t10;
}
