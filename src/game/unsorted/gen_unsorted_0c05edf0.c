/* game/unsorted: functions 0C05EDF0-0C05F3AA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
int FUN_0c02da2e(void);
int FUN_0c03036c(void);
extern int FUN_0c036de8();
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03eff6(void);
extern int FUN_0c03f40c();
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05a292(int, int, int, int, int);
int FUN_0c05aab6(int, int);
int game_reset_objects(void);
int FUN_0c05b1d4(void);
int FUN_0c05c774(void);
int FUN_0c05f7a0(int);
int FUN_0c0fa57a(int);
int FUN_0c0fe4ec(int);
int FUN_0c101e4c(void);
int FUN_0c102350(void);
int FUN_0c1213d8(int);
int FUN_0c05edf0(void);
int FUN_0c05ee64(void);
int FUN_0c05ee84(void);
int FUN_0c05eeb0(int a4, int a5, int a6, int a7);
int FUN_0c05f222(void);
int FUN_0c05f22c(int a4);
int FUN_0c05f254(int a4);
int FUN_0c05f298(int a4, int a5, int a6);
int FUN_0c05f2e2(int a4, int a5);
int FUN_0c05f2fa(void);
int FUN_0c05f332(int a4, int a5);

int FUN_0c05edf0(void)
{
    (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
    (((struct o1_uchar *)0xC541F40)->v) = 0x0;
    return FUN_0c05b1d4();
}

int FUN_0c05ee64(void)
{
    register int t0;

    t0 = *(signed char *)0xC541F40;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return ((int (*)(void))(0xC05EE5E))();
        }
        return ((int (*)(void))(0xC05EE00))();
    }
    FUN_0c05edf0();
    return ((int (*)(void))(0xC05EE00))();
}

int FUN_0c05ee84(void)
{
    (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    *(unsigned short *)0xC541F4E = 0x0;
    *(unsigned short *)0xC541F4C = 0x0;
    game_reset_objects();
    return FUN_0c05c774();
}


int FUN_0c05f222(void)
{
    (((struct o0_uchar *)0xC541F41)->v) = 0x1;
    (((struct o2_uchar *)0xC541F41)->v) = 0x1;
    return 0x1;
}

int FUN_0c05f22c(int a4)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC542854 < (unsigned int)0xC5428F4) {
        t0 = 0xC542854;
        t1 = 0x1;
        for (;;) {
            if (((unsigned short)(*(short *)((t0 + 0x14))) & a4) != 0) {
                break;
            }
            t0 = (t0 + 0x28);
            t1 = (t1 + 0x1);
            if ((unsigned int)t0 >= (unsigned int)0xC5428F4) {
                return 0x0;
            }
        }
        return t1;
    }
    return 0x0;
}

int FUN_0c05f254(int a4)
{
    register int t0;

    if ((unsigned int)0xC542854 < (unsigned int)0xC5428F4) {
        t0 = 0xC542854;
        for (;;) {
            if (((unsigned short)(*(short *)((t0 + 0x10))) & a4) != 0) {
                break;
            }
            t0 = (t0 + 0x28);
            if ((unsigned int)t0 >= (unsigned int)0xC5428F4) {
                return 0x0;
            }
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c05f298(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c05f22c(0x2000);
    t1 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        t0 = FUN_0c05f22c(0x1000);
        t2 = 0x0;
        if (t0 != 0) {
            t2 = 0x1;
        }
        t1 = t2;
    }
    t0 = a6;
    if ((int)(a4 + t1) < (int)a5) {
    } else {
        t2 = (a4 + t1);
        if ((int)(a4 + t1) > (int)a6) {
            t2 = a5;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c05f2e2(int a4, int a5)
{
    (((struct o0_uchar *)0xC541F41)->v) = a4;
    (((struct o1_uchar *)0xC541F41)->v) = a5;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o4_uchar *)0xC541F41)->v) = 0x0;
    return 0x0;
}

int FUN_0c05f2fa(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if (((unsigned short)(*(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC542854) + 0x14))) & 0x8101) != 0) {
            t1 = (t1 | ((int)0x1 << (int)t0));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c05f332(int a4, int a5)
{
    int stk[2];
    register int t15;
    register int t2;
    register int t3;
    register int t8;
    register int t1;
    register int t11;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t15 = (FUN_0c03036c());
    if ((unsigned int)0xC541CDC < (unsigned int)0xC541F3C) {
        t2 = 0xC541CDC;
        for (;;) {
            t3 = (((struct o78_int *)(t2))->v);
            if (((*(int *)(((int)stk + 0))) & ((int)0x1 << (int)t3)) != 0) {
                t1 = (*(signed char *)0xC3BD444);
                t1 = (t1 | ((int)0x1 << (int)t3));
                (((struct o0_uchar *)0xC3BD444)->v) = t1;
                (((struct o1_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD445) | ((int)0x1 << (int)t3));
                (((struct o2_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD446) | ((int)0x1 << (int)t3));
                (((struct o7C_uint *)(t2))->v) = 0x2;
                t8 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t8 - 1);
                if ((int)(t8 - 1) > 0) {
                    t2 = (t2 + 0x98);
                    if ((unsigned int)t2 >= (unsigned int)0xC541F3C) {
                        t11 = 0x7C; break;
                    }
                    continue;
                }
                t11 = 0x7C; break;
            }
            t2 = (t2 + 0x98);
            if ((unsigned int)t2 >= (unsigned int)0xC541F3C) {
                t11 = 0x78; break;
            }
        }
        t15 = t11;
    }
    return t15;
}
