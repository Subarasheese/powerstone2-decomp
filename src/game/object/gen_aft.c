/* Straight-line functions with calls and guards (batch gen_aft): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct oA4_int { char p[0xA4]; int v; };
int FUN_0c0c2d56(int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c0c3e3a(int a4);

int FUN_0c0c3e3a(int a4)
{
    int stk[3];
    register int t1;
    register int t13;
    register int t14;

    if (((*(signed char *)0xC542237) != 1) && ((t1 = *(signed char *)((a4 + 0x41D)), t1 == 4) || (t1 == 5))) {
        return 0x0;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
    if (((((struct oA4_int *)(a4))->v)) != 0) {
        math_mat_get_translate(((((struct oA4_int *)(a4))->v)), ((int)stk + 0));
    }
    if (!((*(float *)0xC541098) > (*(float *)(((int)stk + 4)))) && ((t13 = *(signed char *)((a4 + 0x41D)), t13 == 11) || (t14 = *(signed char *)0xC540F98, t14 == 0))) {
        return 0x0;
    }
    FUN_0c0c2d56(a4, 0xB, 0x0);
    return 0x1;
}
