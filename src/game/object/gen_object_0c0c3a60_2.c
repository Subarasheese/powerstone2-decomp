/* game/object: functions 0C0C3A60-0C0C3EB2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA4_int { char p[0xA4]; int v; };
int math_mat_get_translate(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0c3e3a(int a4, int a5, int a6);

int FUN_0c0c3e3a(int a4, int a5, int a6)
{
    int stk[3];
    int t2;
    register int t12;
    register int t13;
    register int t24;
    register int t25;

    if ((*(signed char *)0xC542237) != 1) {
        t2 = *(signed char *)((a4 + 0x41D));
        if ((t2 != 4) && (t2 != 5)) {
            FUN_0c187798(t2, a5, a6);
            if (((((struct oA4_int *)(a4))->v)) != 0) {
                math_mat_get_translate(((((struct oA4_int *)(a4))->v)), ((int)stk + 0));
            }
            if (!((*(float *)0xC541098) > (*(float *)(((int)stk + 4)))) && ((t12 = *(signed char *)((a4 + 0x41D)), t12 == 11) || (t13 = *(signed char *)0xC540F98, t13 == 0))) {
                return 0x0;
            }
            FUN_0c0c2d56(a4, 0xB, 0x0);
            return 0x1;
        }
        return 0x0;
    }
    FUN_0c187798(a4, a5, a6);
    if (((((struct oA4_int *)(a4))->v)) != 0) {
        math_mat_get_translate(((((struct oA4_int *)(a4))->v)), ((int)stk + 0));
    }
    if (!((*(float *)0xC541098) > (*(float *)(((int)stk + 4)))) && ((t24 = *(signed char *)((a4 + 0x41D)), t24 == 11) || (t25 = *(signed char *)0xC540F98, t25 == 0))) {
        return 0x0;
    }
    FUN_0c0c2d56(a4, 0xB, 0x0);
    return 0x1;
}
