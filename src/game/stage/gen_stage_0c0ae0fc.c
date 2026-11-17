/* game/stage: functions 0C0AE0FC-0C0AE4EE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c1402c4(int);
int FUN_0c0ae0fc(int a4);
int FUN_0c0ae1ae(int a4, int a5, int a6, int a7);
int FUN_0c0ae1ec(int a4, int a5, int a6, int a7);
int FUN_0c0ae1f8(int a4);
int FUN_0c0ae2b0(int a4);

int FUN_0c0ae0fc(int a4)
{
    register int t1;

    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + -0.100000001f);
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0ae1ae(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    return ((int (*)(int, int, int, int))(0xC0AE168))(a4, a5, a6, a7);
}

int FUN_0c0ae1ec(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC0AE1B8))(a4, a5, a6, a7);
}

int FUN_0c0ae1f8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t0;
    }
    if ((*(signed char *)((a4 + 0x17))) != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0x0;
        t2 = (t0);
        t3 = t0;
        t0 = 0x0;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0x1;
        t2 = (t3);
        t0 = 0x1;
    }
    FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0ae2b0(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            return FUN_0c037bf6(a4);
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x17));
    switch (t0) {
    case 0:
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x2, (t0), 0x6, 0x2);
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0xB, (t0), 0x6, 0xB);
            (((struct o78_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x2D0)))->v) = (int)((70.0f * 65536.0f) / 360.0f);
            (((struct o78_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x360)))->v) = (int)((70.0f * 65536.0f) / 360.0f);
            (((struct o7C_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x2D0)))->v) = 0xFFFFF1C8;
            (((struct o7C_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x360)))->v) = (int)((20.0f * 65536.0f) / 360.0f);
        }
        break;
    case 1:
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x3, (t0), 0x6, 0x3);
            FUN_0c1402c4(a4);
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0xD, (t0), 0x6, 0xD);
            (((struct o78_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x2D0)))->v) = (int)((70.0f * 65536.0f) / 360.0f);
            (((struct o78_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x360)))->v) = (int)((70.0f * 65536.0f) / 360.0f);
            (((struct o7C_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x2D0)))->v) = 0xFFFFF1C8;
            (((struct o7C_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x360)))->v) = (int)((20.0f * 65536.0f) / 360.0f);
        }
        break;
    case 2:
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x6, 0x4, (t1), 0x6, 0x4);
        break;
    case 3:
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x6, 0x5, (t0), 0x6, 0x5);
        break;
    }
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    FUN_0c037bf6(a4);
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}
