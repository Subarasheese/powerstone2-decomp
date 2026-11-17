/* game/player: functions 0C138C84-0C13A014, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058b06(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c179ac0(void);
int math_vec3_accumulate(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c138fae(int a4);
int FUN_0c139010(int a4, int a5, int a6, int a7);
int FUN_0c1393f4(int a4);
int FUN_0c139446(int a4, int a5, int a6, int a7);
int FUN_0c1394ee(int a4, int a5);

int FUN_0c138fae(int a4)
{
    int stk[1];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t0 + 0x4)) = 0xC138C84;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)((0xC53256C + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938)))) + 0x28);
        t4 = 0xA4;
    }
    return t4;
}

int FUN_0c139010(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        FUN_0c187798(a4, a5, a6);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct o54_float *)(a4))->v) = 60.0f;
        FUN_0c058b06((a4 + 0x4C), (a4 + 0x34), (a4 + 0x4C));
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0xF);
        }
        if (t1 == 0) {
            FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x28);
        }
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x7);
        }
        *(unsigned short *)((a4 + 0x1E)) = t1;
        t0 = 0xFFFFFFFF;
        if ((*(short *)((a4 + 0x1E))) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((int)((int)(FUN_0c179ac0()) % (int)0x5));
            t0 = ((*(short *)((a4 + 0x1E))) + 0x6);
        }
        *(unsigned short *)((a4 + 0x1E)) = t0;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    if ((*(short *)((a4 + 0x1C))) == (*(short *)((a4 + 0x1E)))) {
        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0xA) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c1393f4(int a4)
{
    int stk[5];
    register int t0;
    register int t5;
    register int t3;

    *(unsigned char *)(((int)stk + 16)) = a4;
    t0 = FUN_0c03f444(0x1, 0x0, 0x0);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 16)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1392D8;
        FUN_0c07e2f4(t0, 0x35);
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t3 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t3));
        *(int *)((int)stk + 0) = 0x100;
        t5 = (FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t3)), 0x0, 0x0));
    }
    return t5;
}

int FUN_0c139446(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    if ((int)(*(short *)((a4 + 0x1E))) > (int)0x2) {
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0xC, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
    (((struct o6C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
    (((struct o70_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
    (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = (*(float *)0xC139540);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 > (int)0xA) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c1394ee(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC139446;
        (((struct oA4_uint *)(t0))->v) = (*(int *)(((int)stk + 0)));
        t3 = 0xA4;
    }
    return t3;
}
