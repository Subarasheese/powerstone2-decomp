/* game/menu/option: functions 0C0584F0-0C058854, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c058542(int, int);
int math_atan2_angle16(int, int, int, float, float);
int FUN_0c05879c(int a4, int a5, int a6, float f4);

int FUN_0c05879c(int a4, int a5, int a6, float f4)
{
    int stk[5];
    register float u4;
    register float u5;
    int t11;
    register int t13;
    register int t16;
    register int t19;
    register int t22;

    *(float *)(((int)stk + 4)) = f4;
    *(unsigned int *)(((int)stk + 0)) = a6;
    (((struct o8_float *)(((int)stk + 0)))->v) = ((*(float *)((a5 + 0x0))) - ((((struct o28_float *)(a4))->v)));
    (((struct o4_float *)((((int)stk + 0) + 0x8)))->v) = (((((struct o4_float *)(a5))->v)) - ((((struct o2C_float *)(a4))->v)));
    u4 = (((struct o30_float *)(a4))->v);
    u5 = (((struct o8_float *)(a5))->v);
    (((struct o8_float *)((((int)stk + 0) + 0x8)))->v) = (u5 - u4);
    if ((u5 - u4) == 0.0f) {
        (((struct o8_float *)((((int)stk + 0) + 0x8)))->v) = (*(float *)0xC0588A8);
    }
    t11 = math_atan2_angle16(a4, a5, a6, ((((struct o8_float *)(((int)stk + 0)))->v)), ((((struct o8_float *)((((int)stk + 0) + 0x8)))->v)));
    t13 = (0xFFFF & t11);
    if ((int)((0xFFFF & t11) - (*(int *)((a4 + 0x38)))) > (int)0x8000) {
        t13 = ((0xFFFF & t11) - 0x10000);
    }
    t16 = t13;
    if ((int)(t13 - (*(int *)((a4 + 0x38)))) < (int)0xFFFF8000) {
        t16 = (t13 + 0x10000);
    }
    t19 = *(int *)((a4 + 0x38));
    if ((int)(t16 - (*(int *)((a4 + 0x38)))) >= 0) {
        t22 = (*(int *)(((int)stk + 0)));
    } else {
        t22 = (-(*(int *)(((int)stk + 0))));
    }
    *(unsigned int *)((a4 + 0x38)) = ((t19 + t22) & 0xFFFF);
    *(volatile float *)(((int)stk + 4));
    return (FUN_0c058542(a4, 0x10000));
}
