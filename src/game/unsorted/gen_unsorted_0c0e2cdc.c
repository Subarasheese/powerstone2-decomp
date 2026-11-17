/* game/unsorted: functions 0C0E2CDC-0C0E33B2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oC_float { char p[0xC]; float v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int FUN_0c03796e(int, int);
int FUN_0c0379b6(int, int);
int FUN_0c03ea04(int, int);
int FUN_0c052c00(int, int, int);
int FUN_0c0cfecc(int, int, int);
int FUN_0c0cff96(int, int);
int FUN_0c0d04b4(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0e2cdc(void);
int FUN_0c0e2dae(int a4);
void FUN_0c0e2dee(void);
int FUN_0c0e2e30(int a4);
int FUN_0c0e2e60(void);
int FUN_0c0e2e64(void);
int FUN_0c0e2e9a(void);
void FUN_0c0e33ae(void);

int FUN_0c0e2cdc(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    if ((*(signed char *)0xC54223C) == 0) {
        t1 = *(int *)((((*(signed char *)0xC54098E) << 2) + 0xC1CB974));
        t2 = (((((t1 << 1) + t1) << 2) << 2) + 0xC1CB8B4);
        t3 = (((t1 << 2) << 2) + 0xC1CB9B4);
        t1 = 0x0;
        t4 = 0x0;
        for (;;) {
            FUN_0c187798(t2, 0xC1CB8B4, 0x0);
            t2 = (*(int *)((t3 + 0x0)));
            t3 = (t3 + 0x4);
            t2 = (t2 << 2);
            t2 = (t2 + (0xC288050 + (((*(signed char *)0xC54098E) << 2) << 2)));
            t2 = (*(int *)((((*(int *)((t2 + 0x0))) << 2) + 0xC1CB9A4)));
            t6 = *(int *)((((t2 << 2) + 0xC540D94) + 0x0));
            t5 = 0xC1CB9A4;
            if (t6 != 0) {
                t7 = 0x6F0;
                t7 = (t7 + 0xC540978);
                t7 = (t7 + t1);
                t2 = t7;
                t5 = (FUN_0c17c130(t2, t7, (t6 + 0x28)));
            } else {
                t6 = t2;
            }
            t4 = (t4 + 0xC);
            t2 = t6;
            t1 = (t1 + 0xC);
            if ((unsigned int)t4 >= (unsigned int)0x30) {
                break;
            }
        }
        t1 = t5;
    } else {
        t2 = 0x0;
        for (;;) {
            t3 = FUN_0c187798(t2, 0xC1CB8B4, 0x90);
            t2 = (t0 + 0xC);
            if ((unsigned int)t2 >= (unsigned int)0x30) {
                break;
            }
        }
        t1 = t3;
    }
    return t1;
}

int FUN_0c0e2dae(int a4)
{
    register int t0;
    register int t1;

    *(unsigned char *)0xC54223C = a4;
    *(unsigned short *)0xC540996 = 0x0;
    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t0 << 2) << 1) + t0) << 2) + 0xC286D34) + (((t1 << 1) + t1) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

void FUN_0c0e2dee(void)
{
    
}

int FUN_0c0e2e30(int a4)
{
    *(volatile signed char *)0xC54223C;
    
    return (FUN_0c052c00(0x2000, 0x1555, a4));
}

int FUN_0c0e2e60(void)
{
    return FUN_0c0e2e30(0xA);
}

int FUN_0c0e2e64(void)
{
    register int t0;
    register int t4;

    t0 = *(signed char *)0xC54223C;
    t4 = FUN_0c0cfecc((*(int *)(((((t0 << 2) << 1) + 0xC1CB89C) + 0x0))), 0xC540996, (*(int *)(((((t0 << 2) << 1) + 0xC1CB89C) + 0x4))));
    if ((int)t4 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0e2e9a(void)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t4;
    register int t7;
    register int t14;
    register int t16;
    register float u17;
    register float u18;
    register int t19;
    register int t20;

    t0 = *(int *)0xC4B410C;
    t1 = *(int *)((((t0 + 0x10) + 0x520) + 0x1C));
    *(unsigned int *)(((int)stk + 0)) = t1;
    FUN_0c0cff96((*(int *)((t1 + 0x0))), 0xC1CB9E4);
    t4 = *(int *)((((t0 + 0x10) + 0x500) + 0x1C));
    *(unsigned int *)(((int)stk + 0)) = t4;
    FUN_0c0cff96((*(int *)((t4 + 0x0))), 0xC1CB9E4);
    t7 = *(int *)((((t0 + 0x10) + 0x4E0) + 0x1C));
    *(unsigned int *)(((int)stk + 0)) = t7;
    FUN_0c0cff96((*(int *)((t7 + 0x0))), 0xC1CB9E4);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((t0 + 0x10) + 0x800) + 0x1C)));
    *(unsigned int *)(((int)stk + 0)) = (((unsigned int)(*(int *)0xC542260) >> 1) & 0x3);
    t14 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = t14;
    mdl_vtx_iter_begin(t14, t14);
    t16 = *(int *)(((int)stk + 0));
    u17 = ((float)t16 * 0.25f);
    u18 = ((float)t16 * 0.25f);
    t19 = 0x0;
    for (;;) {
        t20 = mdl_vtx_iter_next();
        if (t20 != 0) {
            break;
        }
        FUN_0c03796e((((int)stk + 0) + 0xC), ((((int)stk + 0) + 0xC) + 0x4));
        if ((*(signed char *)((0xC1CBBA0 + t19))) == 0) {
            (((struct oC_float *)(((int)stk + 0)))->v) = (u17 + 0.0078125f);
        } else {
            (((struct oC_float *)(((int)stk + 0)))->v) = (u18 + 0.2421875f);
        }
        FUN_0c0379b6((((int)stk + 0) + 0xC), ((((int)stk + 0) + 0xC) + 0x4));
        t19 = (t19 + 0x1);
        if ((int)t19 < (int)(*(int *)0xC1CBBAC)) continue;
        break;
    }
    return 0x0;
}

void FUN_0c0e33ae(void)
{
    
}
