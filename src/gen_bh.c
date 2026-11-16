/* Straight-line functions with calls and guards (batch gen_bh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_short { char p[0x24]; short v; };
struct o30_float { char p[0x30]; float v; };
int FUN_0c03f346(int);
int FUN_0c10add4(void);
int FUN_0c10ae02(int);
int FUN_0c187798(int, int, int);
int thunk_FUN_0c10b050(void);
int FUN_0c10af02(int a4, int a5, int a6, int a7);
void FUN_0c0ced40(int a4, int a5, int a6);

int FUN_0c10af02(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 99) {
                    return t0;
                }
                thunk_FUN_0c10b050();
                return FUN_0c03f346(a4);
            }
            return FUN_0c10ae02(a4);
        }
        return ((int (*)(int, int, int, int))(0xC10ADE4))(a4, a5, a6, a7);
    }
    return FUN_0c10add4();
}

void FUN_0c0ced40(int a4, int a5, int a6)
{
    register int t2;

    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(a4, a5, a6);
    if ((*(short *)((t2 + 0x1C))) == (unsigned short)((((struct o24_short *)((*(int *)((t2 + 0x10)))))->v))) {
        if ((*(signed char *)((t2 + 0x2))) == 0) {
            if ((*(signed char *)(((*(int *)((t2 + 0x10))) + 0x1B))) != 0) {
                if (((((struct o30_float *)(t2))->v)) > (*(float *)0xC0CEE28)) {
                    FUN_0c03f346(t2);
    return;
                }
                return;
            }
            return;
        }
        return;
    }
    FUN_0c03f346(t2);
}
