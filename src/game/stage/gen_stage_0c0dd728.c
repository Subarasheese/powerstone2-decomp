/* game/stage: functions 0C0DD728-0C0DDDE2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c187798(int, int, int);
int FUN_0c0dd728(int a4, int a5, int a6);
int FUN_0c0dd746(int a4, int a5, int a6);
int FUN_0c0dd78a(int a4, int a5, int a6);
int FUN_0c0dd7d2(int a4, int a5, int a6);

int FUN_0c0dd728(int a4, int a5, int a6)
{
    (((struct o15_uchar *)(a4))->v) = a5;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return (FUN_0c187798(a4, a5, a6));
}

int FUN_0c0dd746(int a4, int a5, int a6)
{
    if ((*(signed char *)((a4 + 0x18))) != 0) {
        FUN_0c0dd728(a4, 0x2, a6);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o18_uchar *)(a4))->v) = 0x0;
    } else {
        FUN_0c0dd728(a4, 0x3, a6);
    }
    FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    return 0x12A;
}

int FUN_0c0dd78a(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t10;

    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t1 = *(short *)((a4 + 0x1E));
    t10 = t1;
    if ((t1 & 3) == 0) {
        FUN_0c187798(a4, a5, a6);
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o0_float *)0xC0DD858)->v)));
        t10 = (FUN_0c150010(((int)stk + 0), ((((struct o10_float *)0xC0DD858)->v)), ((((struct oC_float *)0xC0DD858)->v)), ((((struct o8_float *)0xC0DD858)->v)), ((((struct o4_float *)0xC0DD858)->v))));
    }
    return t10;
}

int FUN_0c0dd7d2(int a4, int a5, int a6)
{
    int stk[3];

    FUN_0c187798(a4, a5, a6);
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o0_float *)0xC0DD858)->v)));
    return (FUN_0c150010(((int)stk + 0), ((((struct o10_float *)0xC0DD858)->v)), ((((struct oC_float *)0xC0DD858)->v)), ((((struct o8_float *)0xC0DD858)->v)), ((((struct o4_float *)0xC0DD858)->v))));
}
