/* game/unsorted: functions 0C0B4B20-0C0B5C28, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3774_uint { char p[0x3774]; unsigned int v; };
struct o414_int { char p[0x414]; int v; };
struct o418_int { char p[0x418]; int v; };
struct o418_uint { char p[0x418]; unsigned int v; };
int FUN_0c073448(int, int);
int thunk_FUN_0c0385e0(int);
int FUN_0c0b4b20(void);
int FUN_0c0b4b7a(int, int, float);
int FUN_0c0b5398(int);
int FUN_0c0b562a(int, int, int, int);
int FUN_0c0b6a18(int);
int FUN_0c0b711a(int);
float FUN_0c0bb2e0(int, int, float);
int FUN_0c14c1b4(int, int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0b4f06(int a4, int a5);
int FUN_0c0b551e(int a4);
int FUN_0c0b5b8e(int a4, int a5, int a6);

int FUN_0c0b4f06(int a4, int a5)
{
    register float t23;
    register int t9;

    if ((*(signed char *)((a4 + 0x134))) == 0) {
        if ((*(signed char *)((a4 + 0x0))) == 0) {
            t9 = ((*(int *)((0xC25ACBC + ((*(signed char *)((0xC53249A + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) << 2)))) + 0x14);
        } else {
            t9 = ((*(int *)0xC25AD1C) + 0xA0);
        }
        (((struct o418_uint *)(a5))->v) = t9;
    } else {
        (((struct o418_uint *)(a5))->v) = ((((struct o414_int *)(a4))->v));
    }
    (((struct o3774_uint *)(a5))->v) = a4;
    FUN_0c073448(a5, 0x0);
    t23 = FUN_0c0bb2e0(a5, (*(signed char *)((a4 + 0x1))), (float)(*(short *)((((((struct o418_int *)(a5))->v)) + 0x2))));
    return FUN_0c0b4b7a(a5, 0x0, t23);
}

int FUN_0c0b551e(int a4)
{
    int stk[10];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t13;
    register int t16;
    register int t31;
    register int t1;
    register int t2;
    register float u8;
    register int t23;
    register int t25;

    (((struct o30_float *)(a4))->v) = 0.0f;
    (((struct o2C_float *)(a4))->v) = 0.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    t0 = 0xC0B55F8;
    t3 = a4;
    t4 = ((0x38F8 + a4) + 0xC);
    t5 = 0x0;
    t6 = (0x38F8 + a4);
    t7 = 0x0;
    for (;;) {
        if (!((*(float *)(((((0x38F8 + a4) + 0xC) + (t7 << 2)) + 0x0))) > 0.0f)) {
            t2 = (0x38F8 + a4);
            t2 = (t2 + (t7 << 2));
            *(float *)((t2 + 0x0)) = ((*(float *)((t2 + 0x0))) + 0.416666657f);
            u8 = (*(float *)((((0x38F8 + a4) + (t7 << 2)) + 0x0)));
            t0 = (FUN_0c0b4b20());
            t2 = 0xC25D654;
            t0 = (t0 << 2);
            t1 = t7;
            t1 = (t1 << 2);
            t13 = *(int *)((t2 + t0));
            t1 = (t1 << 2);
            t0 = 0x8;
            t1 = (t1 + t13);
            if (u8 > (*(float *)((t1 + t0)))) {
                t0 = (FUN_0c0b4b20());
                t1 = 0xC25D654;
                t0 = (t0 << 2);
                t16 = *(int *)((t1 + t0));
                t0 = 0x8;
                *(float *)((t6 + 0x0)) = (*(float *)(((t16 + t5) + t0)));
            } else {
                t23 = t2;
            }
        } else {
            *(float *)((t4 + 0x0)) = ((*(float *)((t4 + 0x0))) - 1.0f);
            t23 = t2;
            t25 = t3;
        }
        t2 = t23;
        t3 = t25;
        t7 = (t7 + 0x1);
        t4 = (t4 + 0x4);
        t5 = (t5 + 0x10);
        t6 = (t6 + 0x4);
        if ((int)t7 >= (int)0x3) {
            break;
        }
    }
    t31 = *(signed char *)((a4 + 0x14));
    switch (t31) {
    case 0:
        FUN_0c0b562a(a4, 0x0, 0x0, 0x0);
        break;
    case 1:
        FUN_0c0b6a18(a4);
        break;
    case 2:
        FUN_0c0b711a(a4);
        break;
    }
    FUN_0c0b5398(a4);
    return thunk_FUN_0c0385e0(a4);
}

int FUN_0c0b5b8e(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t3;

    t0 = 0xF4;
    if (a5 == 0) {
        t0 = 0xE4;
    }
    t3 = *(int *)((a4 + t0));
    FUN_0c187798(a4, a5, a6);
    *(int *)((int)stk + 8) = 0x0;
    FUN_0c14c1b4(a4, (t3 + 0x28), (((int)stk + 8) + 0x4), ((0x38F8 + a4) + 0x1C), 0x0);
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 50.0f);
    *(int *)((int)stk + 4) = 0x1;
    FUN_0c14c1b4(a4, (t3 + 0x28), (((int)stk + 4) + 0x8), ((0x38F8 + a4) + 0x1C), 0x1);
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - 130.0f);
    *(int *)((int)stk + 0) = 0x2;
    return (FUN_0c14c1b4(a4, (t3 + 0x28), (((int)stk + 0) + 0xC), ((0x38F8 + a4) + 0x1C), 0x2));
}
