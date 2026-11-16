/* Straight-line functions with calls and guards (batch gen_bb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c056e44(int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0a0702(int);
int FUN_0c0a083a(int);
int FUN_0c0a0906(int);
int FUN_0c10c7ec(void);
int FUN_0c10c84a(int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c187798(int);
int thunk_FUN_0c10ca7e(void);
int FUN_0c1070c4(int a4, int a5, int a6, int a7);
int FUN_0c15f9b4(int a4, int a5, int a6, int a7);
int FUN_0c0a098c(int a4, int a5, int a6, int a7);
int FUN_0c10c950(int a4, int a5, int a6, int a7);

int FUN_0c1070c4(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    t1 = ((int (*)(void))(FUN_0c187798))();
    FUN_0c115120(0x8, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    t3 = (((struct o0_int *)0xC5325B0)->v);
    (((struct o98_float *)(t3))->v) = 8.0f;
    (((struct o94_float *)(t3))->v) = 8.0f;
    t4 = (((struct o4_int *)0xC5325B0)->v);
    (((struct o98_float *)(t4))->v) = 8.0f;
    (((struct o94_float *)(t4))->v) = 8.0f;
    FUN_0c056e44(0x23, 0x6);
    (((struct o1C_uint *)0xC473CE0)->v) = 0x0;
    (((struct o0_uint *)0xC473CE0)->v) = 0x0;
    (((struct o10_uint *)0xC473CE0)->v) = 0x0;
    return ((int (*)(int, int, int, int))(0xC107084))(0x0, a5, a6, a7);
}

int FUN_0c15f9b4(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t9;
    register int t5;
    register int t8;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC15F6EC;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798(t5);
        (((struct oAC_ushort *)(t8))->v) = 0xF;
        (((struct oA9_uchar *)(t8))->v) = 0x21;
        t9 = 0xA9;
    }
    return t9;
}

int FUN_0c0a098c(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x15))) < (int)0x2) && (t0 = (((struct o3770_int *)(a4))->v), t0 == 0)) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        FUN_0c0a0702(a4);
        break;
    case 1:
        FUN_0c0a083a(a4);
        break;
    case 2:
        FUN_0c0a0906(a4);
        break;
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c10c950(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 99) {
                        return t0;
                    }
                    thunk_FUN_0c10ca7e();
                    return FUN_0c03f346(a4);
                }
                return ((int (*)(int, int, int, int))(0xC10C8E0))(a4, a5, a6, a7);
            }
            return FUN_0c10c84a(a4);
        }
        return ((int (*)(int, int, int, int))(0xC10C820))(a4, a5, a6, a7);
    }
    return FUN_0c10c7ec();
}
