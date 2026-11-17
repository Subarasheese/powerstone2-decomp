/* game/flow: functions 0C03FD58-0C041E2A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
int FUN_0c03fef2(int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c0b2888(int, int, int, int);
int FUN_0c040838(int a4, int a5, int a6, int a7);

int FUN_0c040838(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t26;
    register int t29;

    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = 0xC532498;
    t1 = 0xC532498;
    t2 = 0x0;
    t3 = 0xC532498;
    t4 = 0xC532498;
    for (;;) {
        t26 = 0x3714;
        t29 = t0;
        if ((*(signed char *)((((t2 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            if ((*(signed char *)((((t2 * 0x3938) + 0xC532498) + 0x2))) == 12) {
                *(unsigned int *)((((t2 * 0x3938) + 0xC532498) + 0x38)) = 0x0;
                (((struct o30_float *)(((t2 * 0x3938) + 0xC532498)))->v) = 0.0f;
                (((struct o2C_float *)(((t2 * 0x3938) + 0xC532498)))->v) = 0.0f;
                (((struct o28_float *)(((t2 * 0x3938) + 0xC532498)))->v) = 0.0f;
                t0 = ((t2 * 0x3938) + 0xC532498);
                FUN_0c0b2888(t0, 0x13, 0x0, a7);
                t0 = ((t2 * 0x3938) + 0xC532498);
                t26 = (FUN_0c059e60(t0, 0x10));
            } else {
                if ((*(signed char *)((t1 + 0x2))) == 13) {
                    *(unsigned int *)((t4 + 0x38)) = 0x0;
                    (((struct o30_float *)(t4))->v) = 0.0f;
                    (((struct o2C_float *)(t4))->v) = 0.0f;
                    (((struct o28_float *)(t4))->v) = 0.0f;
                    t26 = 0x28;
                    t29 = t0;
                } else {
                    t0 = (*(int *)(((int)stk + 0)));
                    t26 = FUN_0c03fef2(t0, (t3 + 0x28), a6, a7);
                    *(unsigned int *)((t3 + 0x38)) = t26;
                    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                }
            }
        }
        t0 = t29;
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x3938);
        t4 = (t4 + 0x3938);
        t1 = (t1 + 0x3938);
        if ((int)t2 >= (int)0x4) {
            break;
        }
    }
    return t26;
}
