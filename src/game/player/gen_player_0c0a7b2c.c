/* game/player: functions 0C0A7B2C-0C0A80A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o38F8_int { char p[0x38F8]; int v; };
struct o38F8_uint { char p[0x38F8]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a7b2c(int a4, int a5, int a6);
int FUN_0c0a7d5c(int a4, int a5, int a6);
int FUN_0c0a804e(int a4);

int FUN_0c0a7b2c(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t1 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0xC);
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        (((struct oA0_float *)(t3))->v) = 1.0f;
        (((struct o9C_float *)(t3))->v) = 1.0f;
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o98_float *)(t3))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t3))->v) = 1.0f;
        FUN_0c037bf6(a4, t3, t2);
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        t2 = FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x18));
        if ((t2 != 0) && (t0 = *(signed char *)((a4 + 0x1)), (t0 + 0x1) != t2)) {
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        }
        return FUN_0c07043c(a4, 35.0f, -3.5f, 500.0f, 1.0f);
    }
    return (unsigned char)t1;
}

int FUN_0c0a7d5c(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t1 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x17);
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        (((struct oA0_float *)(t3))->v) = 1.0f;
        (((struct o9C_float *)(t3))->v) = 1.0f;
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o98_float *)(t3))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t3))->v) = 1.0f;
        FUN_0c037bf6(a4, t3, t2);
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        t2 = FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x18));
        if ((t2 != 0) && (t0 = *(signed char *)((a4 + 0x1)), (t0 + 0x1) != t2)) {
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        }
        return FUN_0c07043c(a4, ((((struct o8_float *)0xC0A7E60)->v)), ((((struct o4_float *)0xC0A7E60)->v)), ((((struct o0_float *)0xC0A7E60)->v)), 1.0f);
    }
    return (unsigned char)t1;
}

int FUN_0c0a804e(int a4)
{
    register int t0;
    register int t1;

    if ((int)((((struct o38F8_int *)(a4))->v)) >= (int)0x1) {
        t0 = *(int *)(((0x38F8 + a4) + 0x4));
        *(unsigned int *)(((0x38F8 + a4) + 0x4)) = (t0 - 1);
        if ((int)(t0 - 1) < 0) {
            *(unsigned int *)(((0x38F8 + a4) + 0x4)) = 0x2D;
            (((struct o38F8_uint *)(a4))->v) = 0x0;
        }
    }
    t0 = 0x371A;
    if ((*(signed char *)((a4 + 0x371A))) != 0) {
        *(unsigned short *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x6)) = 0xF;
        t1 = *(signed char *)((a4 + 0x371A));
        (((struct o78_uint *)((((short)t1 * (short)0x10E0) + (0x468 + a4))))->v) = (((((struct o78_int *)((((short)t1 * (short)0x10E0) + (0x468 + a4))))->v)) + 0x300);
        t0 = 0x78;
    }
    return t0;
}
