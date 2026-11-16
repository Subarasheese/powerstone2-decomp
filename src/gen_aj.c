/* Straight-line functions with calls and guards (batch gen_aj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c135b00(int, int, int, int, float);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(int, int);
int FUN_0c187798(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c14f824(int a4, int a5, int a6);
int FUN_0c0a18ec(int a4);

int FUN_0c14f824(int a4, int a5, int a6)
{
    int stk[6];
    register int t1;
    register int t5;
    register int t8;
    register int t13;
    register int t11;
    register int t12;

    *(unsigned char *)(((int)stk + 8)) = a4;
    FUN_0c187798(a4, a5, a6);
    t1 = *(int *)0xC542260;
    FUN_0c17c130((((int)stk + 8) + 0x4), (((int)stk + 8) + 0x4), (((((0x7 & ((unsigned int)t1 >> 1)) << 1) + (0x7 & ((unsigned int)t1 >> 1))) << 2) + 0xC202DA8));
    t5 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t5 & 0x3) << 1) + (t5 & 0x3)) << 2) + 0xC202E08);
    *(int *)((int)stk + 0) = 0x0;
    t8 = FUN_0c1502e8((*(signed char *)(((int)stk + 8))), 0x1, 0x1, (((int)stk + 0) + 0xC), 0x0, (((((t5 & 0x3) << 1) + (t5 & 0x3)) << 2) + 0xC202E08));
    t13 = t8;
    if (t8 != 0) {
        *(volatile int *)((t8 + 0xC4));
        FUN_0c18778c(t8, (0x41C + t8));
        (((struct o4_float *)(t11))->v) = 1.0f;
        *(unsigned short *)((t12 + 0x1E)) = 0x0;
        t13 = 0x0;
    }
    return t13;
}

int FUN_0c0a18ec(int a4)
{
    int stk[5];
    register float u10;
    register int t20;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), ((int)stk + 0));
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x3)) == 0) {
            u10 = ((((struct o0_float *)0xC0A19C4)->v));
            u10 = u10 + ((((struct o4_float *)0xC0A19C4)->v)) * (float)(*(short *)((a4 + 0x1E)));
            FUN_0c135b00(a4, ((int)stk + 0), 0xF, 0x0, u10);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
    }
    t20 = FUN_0c037bf6(a4);
    if ((unsigned char)t20 != 0) {
        return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    return (FUN_0c038362(a4));
}
