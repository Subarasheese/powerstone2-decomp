/* game/unsorted: functions 0C1684C0-0C1689DE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c058b06(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c16868c(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c1684c0(int a4, int a5, int a6, int a7);
int FUN_0c1686ca(int a4, int a5, int a6, int a7, int a8);
int FUN_0c168978(int a4, int a5, int a6);

int FUN_0c1684c0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A3768, 0xC2A375C, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        }
        t2 = *(short *)((a4 + 0x1C));
        if (((int)t2 >= (int)0x4) && ((int)t2 <= (int)0xC)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A372C, 0xC2A371C, (*(short *)((a4 + 0x1C))), 0xC, 0x4);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xC) {
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3780, 0xC2A3774, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        }
        t2 = *(short *)((a4 + 0x1C));
        if (((int)t2 >= (int)0x8) && ((int)t2 <= (int)0x10)) {
            FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A374C, 0xC2A373C, (*(short *)((a4 + 0x1C))), 0x10, 0x8);
        }
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 + 0x1);
        t3 = (short)(t2 + 0x1);
        if ((int)(short)(t2 + 0x1) > (int)0x28) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t3 = 0x14;
        }
        return t3;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x3D, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x2, 0x3D, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
    *(volatile int *)((a4 + 0xC4));
    FUN_0c187798(0x1, 0x21F);
    *(volatile int *)((a4 + 0xC4));
    FUN_0c18778c();
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = t0;
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = t1;
    *(volatile int *)((a4 + 0xC8));
    FUN_0c187798(t0, t1);
    *(volatile int *)((a4 + 0xC8));
    return (FUN_0c18778c());
}

int FUN_0c1686ca(int a4, int a5, int a6, int a7, int a8)
{
    int stk[10];
    register int t2;
    register int t24;
    register int t4;
    register int t5;
    register int t15;
    register float u16;

    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    t5 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t5 = 0xF;
    }
    t2 = FUN_0c03f444(0x1, 0x0, 0x2);
    t24 = 0x0;
    if (t2 != 0) {
        FUN_0c07e3ae(t2, 0x48);
        *(int *)((int)stk + 12) = 0xFFFFFEF0;
        t4 = t5;
        *(int *)((int)stk + 8) = t4;
        *(int *)((int)stk + 4) = t5;
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t2, 0x3, 0x9, 0x0, 0x100, t5, t4, 0xFFFFFEF0);
        *(unsigned char *)((t2 + 0x1)) = a4;
        FUN_0c058b06((((int)stk + 16) + 0xC), (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))));
        *(volatile int *)(((int)stk + 24));
        FUN_0c187798();
        FUN_0c17c130((t2 + 0x28), (t2 + 0x28), (((int)stk + 16) + 0xC));
        *(volatile int *)(((int)stk + 16));
        FUN_0c187798();
        t15 = *(int *)((t2 + 0x38));
        *(unsigned int *)((t2 + 0x38)) = (t15 + a8);
        u16 = *(float *)0xC2A3718;
        (((struct o4C_float *)(t2))->v) = (u16 * (math_sin_angle16((t15 + a8))));
        (((struct o54_float *)(t2))->v) = (u16 * (math_cos_angle16((*(int *)((t2 + 0x38))))));
        (((struct o50_float *)(t2))->v) = 0.0f;
        (((struct o5C_float *)(t2))->v) = 0.0f;
        FUN_0c187798();
        FUN_0c16868c((*(signed char *)((t2 + 0x1))), (t2 + 0x28), (*(int *)((t2 + 0x38))));
        t24 = t2;
    }
    return t24;
}

int FUN_0c168978(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t4;
    register int t5;

    t0 = 0xC2A36DC;
    t1 = 0xC2A36C8;
    for (;;) {
        t4 = FUN_0c1686ca(a4, a5, a6, t0, ((*(int *)((t1 + 0x0)))));
        t5 = t4;
        if (t4 != 0) {
            *(unsigned char *)((t4 + 0x1)) = a4;
            *(unsigned int *)((t4 + 0x4)) = 0xC1687DC;
            *(unsigned short *)((t4 + 0x1C)) = 0x5A;
            t5 = 0x5A;
        }
        t1 = (t1 + 0x4);
        t0 = (t0 + 0xC);
        if ((unsigned int)t1 >= (unsigned int)0xC2A36DC) {
            break;
        }
    }
    return t5;
}
