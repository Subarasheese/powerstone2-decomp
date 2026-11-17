/* game/effect: functions 0C14E8D0-0C14F040, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o41C_float { char p[0x41C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int FUN_0c03796e(int, int);
int FUN_0c0379b6(int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int, int, int);
int memset(int, int, int);
int FUN_0c14e8d0(void);
int FUN_0c14ea40(int a4);
int FUN_0c14eb2c(int a4);

int FUN_0c14e8d0(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = FUN_0c03f444(0x5, 0x1, 0x8);
    t2 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x1;
        *(unsigned int *)((t1 + 0x4)) = 0xC14EB84;
        t3 = ((int (*)(void))(FUN_0c187798))();
        t3 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t1) + (t3 << 2)) + 0x0))), 0x0, t3, (*(int *)0xC4B410C));
            *(unsigned char *)(((*(int *)((((0xC4 + t1) + (t3 << 2)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0xC4 + t1) + (t3 << 2)) + 0x0))) + 0x6)) = 0xF;
            *(volatile int *)((((0xC4 + t1) + (t3 << 2)) + 0x0));
            t4 = ((int (*)(int))(FUN_0c187798))((((t3 << 1) + t3) << 2));
            *(volatile int *)((((0xC4 + t1) + (t3 << 2)) + 0x0));
            t4 = ((int (*)(int))(FUN_0c187798))(t0);
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x6) {
                break;
            }
        }
        t0 = 0x48;
        t3 = 0x18;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t1) + t3) + 0x0))), 0x0, 0x3, (*(int *)0xC4B410C));
            *(unsigned char *)(((*(int *)((((0xC4 + t1) + t3) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0xC4 + t1) + t3) + 0x0))) + 0x6)) = 0xF;
            *(volatile int *)((((0xC4 + t1) + t3) + 0x0));
            t4 = ((int (*)(void))(FUN_0c187798))();
            *(volatile int *)((((0xC4 + t1) + t3) + 0x0));
            t4 = ((int (*)(void))(FUN_0c187798))();
            t3 = (t3 + 0x4);
            t0 = (t0 + 0xC);
            if ((unsigned int)t3 >= (unsigned int)0x20) {
                break;
            }
        }
        memset((t1 + 0x41C), 0x0, 0x14);
        *(unsigned char *)(((t1 + 0x41C) + 0x5)) = 0x1;
        (((struct o41C_float *)(t1))->v) = 0.0f;
        t2 = 0x1;
    }
    return t2;
}

int FUN_0c14ea40(int a4)
{
    int stk[4];
    register int t8;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (a4 + 0xC4);
    mdl_vtx_iter_begin((*(int *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x14))) + 0x8))), (*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))));
    (((struct o41C_float *)(a4))->v) = (((((struct o41C_float *)(a4))->v)) - (*(float *)0xC14EB6C));
    for (;;) {
        t8 = mdl_vtx_iter_next();
        if (t8 != 0) {
            break;
        }
        FUN_0c03796e(((int)stk + 0), (((int)stk + 0) + 0x4));
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((((struct o41C_float *)(a4))->v)));
        FUN_0c0379b6(((int)stk + 0), (((int)stk + 0) + 0x4));
    }
    return t8;
}

int FUN_0c14eb2c(int a4)
{
    register int t0;
    register int t1;
    register int t4;
    register float u3;

    t0 = 0xC14EB80;
    t1 = 0x18;
    for (;;) {
        t4 = *(int *)((((0xC4 + a4) + t1) + 0x0));
        if ((*(signed char *)((t4 + 0x0))) != 0) {
            t0 = 0x14;
            u3 = (*(float *)((t4 + t0)));
            u3 = (u3 - 0.100000001f);
            *(float *)((t4 + t0)) = u3;
            if (!(u3 > (0.0f))) {
                *(unsigned char *)((t4 + 0x0)) = 0x0;
            }
        }
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x20) {
            break;
        }
    }
    return t0;
}
