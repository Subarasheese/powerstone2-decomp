/* game/unsorted: functions 0C0E2700-0C0E2838, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c14fb3c(int, float, float, float, float, float);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c0e2700(int a4, int a5, int a6, int a7);

int FUN_0c0e2700(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t16;
    register float u21;
    register int t23;
    register int t25;
    register int t38;
    register int t26;
    register int t31;
    register int t32;
    register int t35;
    register float u37;
    register int t11;
    register int t12;
    register int t13;

    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((int)stk + 0)) = (((a5 << 2) << 1) + 0xC1CAFB4);
    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((((a5 << 2) << 1) + 0xC1CAFB4) + 0x0)));
    if ((int)(*(int *)(((*(int *)(((int)stk + 0))) + 0x4))) >= 0) {
        thunk_FUN_0c05abb2((*(int *)(((*(int *)(((int)stk + 0))) + 0x4))), a4);
    } else {
        t11 = a4;
        t12 = (((a5 << 2) << 1) + 0xC1CAFB4);
        t13 = a6;
    }
    t16 = ((int (*)(int, int, int))(FUN_0c187798))(t11, t12, t13);
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - 100.0f);
    FUN_0c14fb3c((((int)stk + 0) + 0x10), 0.899999976f, 0.829999983f, 0.629999995f, 4.0f, (1.0f + 1.0f));
    u21 = *(float *)(((((*(int *)(((int)stk + 4))) << 2) << 1) + 0xC1CA750));
    t23 = (int)((int)(FUN_0c179ac0()) % (int)0x28);
    *(unsigned int *)(((int)stk + 0)) = (int)(((float)(((t23 << 2) << 1) + t23) * 65536.0f) / 360.0f);
    t25 = FUN_0c03f444(0x5, 0x0, 0x8);
    t38 = t25;
    if (t25 != 0) {
        *(unsigned int *)((t25 + 0x4)) = 0xC0E25AC;
        *(unsigned char *)((t25 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t25))->v) = 0xF;
        (((struct oA9_uchar *)(t25))->v) = 0x21;
        t26 = ((int (*)(void))(FUN_0c187798))();
        *(unsigned int *)((t25 + 0x38)) = (*(int *)(((int)stk + 0)));
        (((struct o50_float *)(t25))->v) = u21;
        *(unsigned short *)((t25 + 0x1E)) = (*(short *)(((int)stk + 8)));
        (((struct o20_ushort *)(t25))->v) = (*(int *)(((int)stk + 4)));
        t31 = (*(int *)(((int)stk + 12)));
        t32 = 0x0;
        for (;;) {
            t35 = *(int *)((((0xC4 + t25) + t32) + 0x0));
            FUN_0c03744a(t35, 0x0, (*(int *)((t31 + 0x0))), (*(int *)0xC4B410C));
            *(unsigned short *)((t35 + 0x6)) = 0x1F;
            u37 = (((struct o4_float *)(t31))->v);
            t32 = (t32 + 0x4);
            (((struct o8C_float *)(t35))->v) = u37;
            (((struct o88_float *)(t35))->v) = u37;
            (((struct o84_float *)(t35))->v) = u37;
            t31 = (t31 + 0x8);
            if ((unsigned int)t32 >= (unsigned int)0x20) {
                break;
            }
        }
        t38 = 0x84;
    }
    return t38;
}
