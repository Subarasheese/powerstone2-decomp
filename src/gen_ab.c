/* Straight-line functions with calls and guards (batch gen_ab): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c14f6a0(int a4, int a5, int a6, float f4);
int FUN_0c14f8aa(int a4, int a5, int a6);
int FUN_0c1501f2(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c150160(int a4, int a5, int a6, float f4, float f5, float f6, float f7);

int FUN_0c14f6a0(int a4, int a5, int a6, float f4)
{
    int stk[7];
    register int t1;
    register int t3;
    register int t14;
    register int t6;

    *(unsigned char *)(((int)stk + 12)) = a5;
    *(float *)(((int)stk + 8)) = f4;
    FUN_0c187798(a4, a5, a6);
    t1 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = 0x0;
    t3 = FUN_0c1502e8(0x2, 0x1, 0x1, (((int)stk + 0) + 0x10), 0x0, (((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC2030D8));
    t14 = t3;
    if (t3 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
        t6 = *(signed char *)(((int)stk + 12));
        (((struct o18_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((0xC202D84 + (((t6 << 1) + t6) << 2)) + 0x0)));
        (((struct o1C_float *)(((((struct oC4_int *)(t3))->v))))->v) = ((((struct o4_float *)((0xC202D84 + (((t6 << 1) + t6) << 2))))->v));
        (((struct o20_float *)(((((struct oC4_int *)(t3))->v))))->v) = ((((struct o8_float *)((0xC202D84 + (((t6 << 1) + t6) << 2))))->v));
        (((struct o4_float *)((0x41C + t3)))->v) = (*(float *)(((int)stk + 8)));
        *(unsigned short *)((t3 + 0x1E)) = 0x0;
        t14 = 0x0;
    }
    return t14;
}

int FUN_0c14f8aa(int a4, int a5, int a6)
{
    int stk[7];
    register int t1;
    register int t5;
    register int t8;
    register int t14;
    register int t12;
    register int t13;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    FUN_0c187798(a4, a5, a6);
    t1 = *(int *)0xC542260;
    FUN_0c17c130((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x8), (((((0x7 & ((unsigned int)t1 >> 1)) << 1) + (0x7 & ((unsigned int)t1 >> 1))) << 2) + 0xC202DA8));
    t5 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t5 & 0x3) << 1) + (t5 & 0x3)) << 2) + 0xC202E08);
    *(int *)((int)stk + 0) = 0x0;
    t8 = FUN_0c1502e8((*(signed char *)(((int)stk + 12))), 0x1, 0x1, (((int)stk + 0) + 0x10), 0x0, (((((t5 & 0x3) << 1) + (t5 & 0x3)) << 2) + 0xC202E08));
    t14 = t8;
    if (t8 != 0) {
        *(volatile int *)(((int)stk + 8));
        *(volatile int *)((t8 + 0xC4));
        FUN_0c18778c(t8, (0x41C + t8));
        (((struct o4_float *)(t12))->v) = 1.0f;
        *(unsigned short *)((t13 + 0x1E)) = 0x0;
        t14 = 0x0;
    }
    return t14;
}

int FUN_0c1501f2(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    int stk[10];
    register int t1;
    register int t3;
    register int t13;

    *(float *)(((int)stk + 24)) = f4;
    *(float *)(((int)stk + 20)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(float *)(((int)stk + 12)) = f7;
    *(unsigned int *)(((int)stk + 8)) = a5;
    FUN_0c187798(a4, a5, a6);
    t1 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = 0x0;
    t3 = FUN_0c1502e8(0x0, 0x1, 0x1, (((int)stk + 0) + 0x1C), 0x0, (((((t1 & 0x3) << 1) + (t1 & 0x3)) << 2) + 0xC2030D8));
    t13 = t3;
    if (t3 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 24)));
        (((struct o1C_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 20)));
        (((struct o20_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o4_float *)((0x41C + t3)))->v) = (*(float *)(((int)stk + 12)));
        t13 = *(int *)(((int)stk + 8));
        *(unsigned short *)((t3 + 0x1E)) = t13;
    }
    return t13;
}

int FUN_0c150160(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    int stk[11];
    register int t4;
    register int t6;
    register int t15;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    *(float *)(((int)stk + 20)) = f4;
    *(float *)(((int)stk + 16)) = f5;
    *(float *)(((int)stk + 12)) = f6;
    *(float *)(((int)stk + 8)) = f7;
    *(volatile int *)0xC542260;
    FUN_0c187798(a4, a5, a6);
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x18);
    t4 = (*(int *)(((int)stk + 28)));
    *(int *)((int)stk + 0) = t4;
    t6 = FUN_0c1502e8(0x0, 0x1, 0x1, (*(int *)(((int)stk + 24))), t4, (((int)stk + 8) + 0x18));
    t15 = t6;
    if (t6 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t6))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t6))->v))))->v) = (*(float *)(((int)stk + 20)));
        (((struct o1C_float *)(((((struct oC4_int *)(t6))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o20_float *)(((((struct oC4_int *)(t6))->v))))->v) = (*(float *)(((int)stk + 12)));
        (((struct o4_float *)((0x41C + t6)))->v) = (*(float *)(((int)stk + 8)));
        *(unsigned short *)((t6 + 0x1E)) = 0x0;
        t15 = 0x0;
    }
    return t15;
}
