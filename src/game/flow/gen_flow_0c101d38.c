/* game/flow: functions 0C101D38-0C103FB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03f346(int);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c059c54(int);
int FUN_0c05aab6(int, int);
int FUN_0c05f22c(int);
int FUN_0c0cff96(int, int);
int FUN_0c1020e8(void);
int FUN_0c1023cc(void);
int FUN_0c103fdc(int);
int FUN_0c104146(int);
int FUN_0c104650(void);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c101d38(int a4);
int FUN_0c101d52(int a4, int a5);
int FUN_0c101d72(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
void FUN_0c101dce(int a4);
int FUN_0c101e1a(int a4);
void FUN_0c102086(void);
int FUN_0c10208a(void);
int FUN_0c102350(void);
int FUN_0c102690(void);
int FUN_0c102d68(void);
int FUN_0c10302a(int a4);
int FUN_0c1030c0(int a4);
int FUN_0c10314a(int a4);
int FUN_0c10324c(int a4);
int FUN_0c1034ba(int a4);
int FUN_0c10356c(int a4);
int FUN_0c1035c2(int a4);
int FUN_0c10368c(int a4);
int FUN_0c103716(int a4);
int FUN_0c10384a(void);
int FUN_0c1038e8(int a4, int a5, int a6);
int FUN_0c1039c4(void);
int FUN_0c103ba2(int a4);
int FUN_0c103d00(void);

int FUN_0c101d38(int a4)
{
    return ((((*(int *)((0xC5426C4 + ((((a4 << 2) + a4) << 2) << 1)))) == 1)) ? 1 : 0);
}

int FUN_0c101d52(int a4, int a5)
{
    if (((unsigned short)(*(short *)(((((((a4 << 2) + a4) << 2) << 1) + 0xC5426C4) + 0x14))) & a5) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c101d72(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    register int t0;
    register int t2;

    t0 = FUN_0c101d52(a4, a5);
    t2 = 0x0;
    if (t0 != 0) {
        t0 = *(int *)((a7 + 0x0));
        *(unsigned int *)((a7 + 0x0)) = (t0 - a8);
        if ((int)(t0 - a8) < (int)a9) {
            *(unsigned int *)((a7 + 0x0)) = a10;
        }
        t2 = 0x1;
    }
    t0 = FUN_0c101d52(a4, a6);
    if (t0 != 0) {
        t0 = *(int *)((a7 + 0x0));
        *(unsigned int *)((a7 + 0x0)) = (t0 + a8);
        if ((int)(t0 + a8) > (int)a10) {
            *(unsigned int *)((a7 + 0x0)) = a9;
        }
        t2 = 0x1;
    }
    return t2;
}

void FUN_0c101dce(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t0;

    *(unsigned int *)0xC472D20 = 0x0;
    t1 = 0xC1FC4F4;
    t2 = 0xC1FC4F4;
    t3 = 0x0;
    for (;;) {
        t3 = (t3 + 0x1);
        if ((((int)0x1 << (int)(*(signed char *)((t2 + 0x0)))) & (unsigned short)a4) != 0) {
            t0 = 0xC472CEC;
            t0 = (t0 + 0x24);
            t0 = (t0 + (*(int *)0xC472D20));
            *(unsigned char *)((t0 + 0x0)) = (*(signed char *)((t1 + 0x0)));
            *(unsigned int *)0xC472D20 = ((*(int *)0xC472D20) + 0x1);
        }
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x1);
        if ((unsigned int)t3 >= (unsigned int)0x10) {
            break;
        }
    }
}

int FUN_0c101e1a(int a4)
{
    if (((int)(*(int *)0xC472D20) > (int)0x1) && (((unsigned short)a4 & 0xFFF) == 0xFFF)) {
        return 0x1;
    }
    return 0x0;
}

void FUN_0c102086(void)
{
    
}

int FUN_0c10208a(void)
{
    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        FUN_0c1023cc();
    }
    FUN_0c1020e8();
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038e88(0x8);
}

int FUN_0c102350(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC472DA8) + 0x0)) = 0x0;
        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC472DA8) + 0x4)) = t0;
        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC472DA8) + 0x10)) = 0x0;
        (((struct o44_ushort *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        t1 = ((((t0 << 2) + t0) << 2) + 0xC472DA8);
        t3 = t0;
        t0 = (t0 + 0x1);
        *(unsigned int *)((t1 + 0xC)) = (*(signed char *)((0xC1FC504 + t3)));
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t3;
}

int FUN_0c102690(void)
{
    int stk[8];

    register int R1;
    register int R2;
    register int R7;
    int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_3 = *(signed char *)0xC541F45;
    v0_6 = ((unsigned char)v0_3);
    v0_0 = (0x2);
    R11 = (0x1);
    v0_4 = (0x0);
    v0_1 = (0xC472CEC);
    v0_5 = (0xC541F45);
    v0_2 = (0xC05AAB6);
    v0_2 = (0x23);
    if (((unsigned char)v0_3 == 0)) goto L_C1026C0;
    if ((v0_6 == 1)) goto L_C1026CC;
    *(unsigned int *)((v0_1 + 0x20)) = ((*(int *)((v0_1 + 0x20))) - 1);
    v0_3 = (v0_4);
    L_C102718:;
    v0_5 = (((v0_3 * v0_2) + 0xC83C590));
    if (((*(signed char *)((((v0_3 * v0_2) + 0xC83C590) + 0x1))) != 0)) goto L_C102768;
    *(unsigned int *)((((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x0)) = (*(signed char *)((v0_5 + 0x0)));
    L_C102780:;
    if (!(((*(int *)((((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x0))) != 0))) goto L_C102A5C;
    if (((*(int *)((((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x8))) == 0)) goto L_C1027B0;
    goto L_C10298C;
    L_C102A5C:;
    v0_5 = (int)(v0_3 + 0x1) >= (int)0x4;
    v0_3 = ((v0_3 + 0x1));
    if (v0_5) goto L_C102A68;
    goto L_C102718;
    L_C102A68:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_4;
    v0_3 = (0x50);
    v0_5 = (v0_4);
    v0_6 = (v0_4);
    L_C102A8E:;
    if (((unsigned int)v0_6 < (unsigned int)v0_3)) goto L_C102A72;
    v0_6 = (0x4);
    L_C102AB0:;
    if ((v0_6 != 0)) goto L_C102AA0;
    *(unsigned int *)(((int)stk + 16)) = v0_4;
    if (((*(int *)((v0_1 + 0x1C))) == 0)) goto L_C102AF0;
    if (((int)(*(int *)((v0_1 + 0x18))) >= (int)(*(int *)((v0_1 + 0x14))))) goto L_C102B2A;
    if (((int)(*(int *)((v0_1 + 0x20))) > 0)) goto L_C102B3C;
    *(unsigned int *)(((int)stk + 16)) = R11;
    if (((*(int *)((v0_1 + 0x10))) != -1)) goto L_C102B3C;
    v0_5 = FUN_0c179ac0();
    v0_6 = (v0_5);
    if (((int)v0_5 < 0)) goto L_C102AE0;
    v0_6 = ((v0_6 & 0x1));
    L_C102AEA:;
    *(unsigned int *)((v0_1 + 0x10)) = (v0_6 << 1);
    L_C102B3C:;
    v0_5 = *(int *)(((int)stk + 16));
    v0_6 = (v0_5);
    if (!((v0_5 == 1))) goto L_C102D54;
    (((struct o0_uchar *)0xC541F44)->v) = R11;
    (((struct o1_uchar *)0xC541F44)->v) = v0_4;
    (((struct oC_ushort *)0xC541F44)->v) = 0x1E;
    *(unsigned int *)((v0_1 + 0x4)) = v0_4;
    *(unsigned int *)((v0_1 + 0x8)) = v0_4;
    *(unsigned int *)((v0_1 + 0xC)) = v0_4;
    FUN_0c103fdc((*(int *)((v0_1 + 0x10))));
    if (((*(int *)((v0_1 + 0x1C))) == 0)) goto L_C102BD4;
    *(unsigned int *)(((int)stk + 16)) = v0_4;
    goto L_C102BCA;
    L_C102D54:;
    return v0_6;
    L_C102BCA:;
    if (!(((unsigned int)(*(int *)(((int)stk + 16))) < (unsigned int)v0_3))) goto L_C102C28;
    v0_5 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 12)) = ((0xBC + v0_1) + v0_5);
    if (((*(int *)((((0xBC + v0_1) + v0_5) + 0x0))) == 2)) goto L_C102BC4;
    v0_6 = *(int *)(((*(int *)(((int)stk + 12))) + 0x10));
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C102BA4;
    if ((v0_5 != 2)) goto L_C102BC4;
    goto L_C102BA4;
    L_C102C28:;
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    v0_5 = (v0_4);
    L_C102C42:;
    if (((unsigned int)v0_5 < (unsigned int)v0_3)) goto L_C102C2E;
    FUN_0c187a88(0xC472CC0, 0xC1FC508, 0x1C);
    FUN_0c187a88(0xC472CDC, 0xC1FC524, 0xA);
    (((struct o0_uint *)0xC472CE8)->v) = 0x5;
    *(unsigned int *)(((int)stk + 20)) = 0xC472CC0;
    v0_3 = (0xC472CC0);
    v0_5 = (v0_4);
    v0_6 = (0xC472CE8);
    L_C102D18:;
    if (!(((unsigned int)v0_5 < (unsigned int)0x6))) goto L_C102D1E;
    if (((int)(*(signed char *)((((*(int *)((v0_1 + 0x10))) * v0_2) + 0xC83C598))) < (int)(v0_5 + 0x5))) goto L_C102D1E;
    v0_7 = ((((v0_5 << 1) + v0_5) + 0xC1FC52E));
    if (((*(signed char *)(((((v0_5 << 1) + v0_5) + 0xC1FC52E) + 0x0))) == 0)) goto L_C102CC2;
    if (((int)(*(int *)(((int)stk + 12))) > (int)v0_0)) goto L_C102D16;
    if ((((((struct o20_int *)0xC472CE8)->v)) != 0)) goto L_C102D16;
    goto L_C102CC2;
    L_C102D1E:;
    *(unsigned int *)((v0_1 + 0x20)) = 0x4B0;
    if (((int)(*(signed char *)((((*(int *)((v0_1 + 0x10))) * v0_2) + 0xC83C598))) < (int)0x8)) goto L_C102D38;
    FUN_0c104650();
    L_C102D38:;
    FUN_0c103d00();
    return FUN_0c104146((*(int *)((v0_1 + 0xC))));
    L_C102CC2:;
    *(unsigned int *)(((int)stk + 24)) = v0_7;
    v0_4 = *(signed char *)(((v0_7 + 0x1) + 0x0));
    *(unsigned int *)(((int)stk + 16)) = (v0_7 + 0x2);
    v0_8 = *(signed char *)(((v0_7 + 0x2) + 0x0));
    (((struct o10_uchar *)(((int)stk + 12)))->v) = (v0_5 + 0x5);
    *(unsigned char *)((v0_8 + ((((v0_4 << 2) << 1) - v0_4) + v0_3))) = (v0_5 + 0x5);
    v0_4 = *(signed char *)(((v0_7 + 0x1) + 0x0));
    *(unsigned char *)((((((v0_4 << 2) << 1) - v0_4) + v0_3) + 0x0)) = ((*(signed char *)((((((v0_4 << 2) << 1) - v0_4) + v0_3) + 0x0))) + 0x1);
    v0_4 = *(int *)(((int)stk + 20));
    v0_7 = *(signed char *)(((*(int *)(((int)stk + 16))) + 0x0));
    *(unsigned char *)((v0_7 + v0_4)) = ((*(signed char *)((v0_7 + v0_4))) + 0x1);
    *(unsigned char *)(((*(int *)((v0_6 + 0x0))) + 0xC472CDC)) = (*(signed char *)(((int)stk + 28)));
    *(unsigned int *)((v0_6 + 0x0)) = ((*(int *)((v0_6 + 0x0))) + 0x1);
    L_C102D16:;
    v0_5 = ((v0_5 + 0x1));
    goto L_C102D18;
    L_C102C2E:;
    v0_6 = (*(int *)((((0xBC + v0_1) + v0_5) + 0x0))) == 2;
    v0_5 = ((v0_5 + 0x14));
    if (v0_6) goto L_C102C42;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    goto L_C102C42;
    L_C102BA4:;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x10)) = v0_0;
    v0_5 = *(int *)(((int)stk + 12));
    *(int *)((int)stk + 8) = (0x8 + v0_5);
    *(unsigned int *)(((0x8 + v0_5) + 0x0)) = (*(signed char *)((0xC1FC504 + ((int)((int)(FUN_0c179ac0()) % (int)(*(int *)((v0_1 + 0x34))))))));
    L_C102BC4:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x14);
    goto L_C102BCA;
    L_C102BD4:;
    *(unsigned int *)(((int)stk + 16)) = v0_4;
    L_C102C22:;
    if (((unsigned int)(*(int *)(((int)stk + 16))) < (unsigned int)v0_3)) goto L_C102BD8;
    goto L_C102C28;
    L_C102BD8:;
    v0_5 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 12)) = ((0xBC + v0_1) + v0_5);
    if (((*(int *)((((0xBC + v0_1) + v0_5) + 0x10))) != 0)) goto L_C102BEC;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = v0_0;
    L_C102BEC:;
    if (((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) == 2)) goto L_C102C1C;
    if (((*(int *)(((*(int *)(((int)stk + 12))) + 0x10))) != 2)) goto L_C102C1C;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x10)) = v0_0;
    v0_5 = *(int *)(((int)stk + 12));
    *(int *)((int)stk + 8) = (0x8 + v0_5);
    *(unsigned int *)(((0x8 + v0_5) + 0x0)) = (*(signed char *)((0xC1FC504 + ((int)((int)(FUN_0c179ac0()) % (int)(*(int *)((v0_1 + 0x34))))))));
    L_C102C1C:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x14);
    goto L_C102C22;
    L_C102AE0:;
    v0_6 = (((~(((~v0_6) + 0x1) & 0x1)) + 0x1));
    goto L_C102AEA;
    L_C102B2A:;
    *(unsigned int *)(((int)stk + 16)) = R11;
    goto L_C102B3C;
    L_C102AF0:;
    if (((int)(*(int *)((v0_1 + 0x0))) < (int)v0_0)) goto L_C102B3C;
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    L_C102B34:;
    if (((int)(*(int *)(((int)stk + 12))) < (int)0x4)) goto L_C102AFA;
    goto L_C102B3C;
    L_C102AFA:;
    v0_6 = *(int *)(((int)stk + 12));
    v0_5 = (((((v0_6 << 2) + v0_6) << 2) + (0xBC + v0_1)));
    if (((*(int *)((((((v0_6 << 2) + v0_6) << 2) + (0xBC + v0_1)) + 0x0))) == 2)) goto L_C102B2E;
    if (((*(int *)((v0_5 + 0x10))) == 0)) goto L_C102B2E;
    v0_5 = (FUN_0c101d52((*(int *)(((int)stk + 12))), 0x8000)) == 0;
    if (v0_5) goto L_C102B2E;
    *(unsigned int *)((v0_1 + 0x10)) = (*(int *)(((int)stk + 12)));
    FUN_0c05aab6((*(int *)(((int)stk + 12))), 0x3);
    goto L_C102B2A;
    L_C102B2E:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    goto L_C102B34;
    L_C102AA0:;
    if (((v0_5 & R11) == 0)) goto L_C102AAC;
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) + 0x1);
    L_C102AAC:;
    v0_5 = ((v0_5 >> 1));
    v0_6 = ((v0_6 - 1));
    goto L_C102AB0;
    L_C102A72:;
    v0_7 = (((0xBC + v0_1) + v0_6));
    if (((*(int *)((((0xBC + v0_1) + v0_6) + 0x0))) == 2)) goto L_C102A8C;
    if (((*(int *)((v0_7 + 0x10))) == 0)) goto L_C102A8C;
    v0_5 = ((v0_5 | ((int)R11 << (int)(*(int *)((v0_7 + 0x4))))));
    L_C102A8C:;
    v0_6 = ((v0_6 + 0x14));
    goto L_C102A8E;
    L_C10298C:;
    if (((*(int *)((v0_1 + 0x1C))) == 0)) goto L_C102A5C;
    if (((*(int *)((((((v0_3 << 2) + v0_3) << 2) + (0xBC + v0_1)) + 0x10))) == 0)) goto L_C102A5C;
    v0_5 = (FUN_0c101d52(v0_3, 0x8100)) == 0;
    if (v0_5) goto L_C102A08;
    if (((*(int *)((((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x8))) != 0)) goto L_C102A5C;
    *(unsigned int *)((((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x8)) = R11;
    if (((*(int *)((v0_1 + 0x18))) != 0)) goto L_C1029DE;
    *(unsigned int *)((v0_1 + 0x10)) = v0_3;
    L_C1029DE:;
    *(unsigned int *)((v0_1 + 0x18)) = ((*(int *)((v0_1 + 0x18))) + 0x1);
    v0_7 = *(signed char *)(((v0_3 * v0_2) + 0xC83C599));
    v0_5 = (v0_7);
    v0_6 = (0x2);
    if (((int)v0_7 < 0)) goto L_C102A00;
    *(unsigned int *)((((((v0_5 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x8)) = R11;
    v0_5 = (((((v0_5 << 2) << 2) << 1) + (v0_1 + 0x3C)));
    L_C102A00:;
    FUN_0c05aab6(v0_3, v0_6);
    goto L_C102A5C;
    L_C102A08:;
    v0_5 = (FUN_0c101d52(v0_3, 0x40)) == 0;
    if (v0_5) goto L_C102A5C;
    if (((*(int *)((((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x8))) == 0)) goto L_C102A5C;
    *(unsigned int *)((((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x8)) = v0_4;
    *(unsigned int *)((v0_1 + 0x18)) = ((*(int *)((v0_1 + 0x18))) - 1);
    v0_7 = *(signed char *)(((v0_3 * v0_2) + 0xC83C599));
    v0_5 = (v0_7);
    v0_6 = (0x4);
    if (((int)v0_7 < 0)) goto L_C102A58;
    *(unsigned int *)((((((v0_5 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x8)) = v0_4;
    v0_5 = (((((v0_5 << 2) << 2) << 1) + (v0_1 + 0x3C)));
    L_C102A58:;
    FUN_0c05aab6(v0_3, v0_6);
    goto L_C102A5C;
    L_C1027B0:;
    *(unsigned int *)(((int)stk + 12)) = ((v0_3 * v0_2) + 0xC83C590);
    v0_5 = (*(signed char *)((((v0_3 * v0_2) + 0xC83C590) + 0x6)));
    *(int *)((int)stk + 8) = v0_5;
    v0_6 = (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x5)));
    *(int *)((int)stk + 4) = v0_6;
    *(int *)((int)stk + 0) = 0x1;
    v0_5 = (FUN_0c101d72(v0_3, 0x800, 0x400, (((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0xC), 0x1, v0_6, v0_5)) == 0;
    if (v0_5) goto L_C1027EC;
    FUN_0c05aab6(v0_3, 0x5);
    L_C1027EC:;
    v0_5 = *(int *)((((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0xC));
    *(unsigned int *)(((int)stk + 12)) = ((((v0_5 << 2) + v0_5) << 2) + (0xBC + v0_1));
    if (((*(signed char *)(((v0_3 * v0_2) + 0xC83C594))) == 0)) goto L_C102860;
    if (((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) != 2)) goto L_C102834;
    *(unsigned int *)((((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x10)) = v0_4;
    L_C102860:;
    v0_5 = *(int *)((((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x10));
    v0_6 = (v0_5);
    if ((v0_5 == 0)) goto L_C102894;
    if ((v0_6 == 1)) goto L_C1028AE;
    if ((v0_6 == 2)) goto L_C1028D2;
    goto L_C10298C;
    L_C1028D2:;
    if (((*(int *)((v0_1 + 0x1C))) != 0)) goto L_C1028F2;
    v0_5 = (*(int *)((v0_1 + 0x34)));
    *(int *)((int)stk + 8) = v0_5;
    v0_6 = v0_4;
    *(int *)((int)stk + 4) = v0_6;
    v0_7 = R11;
    *(int *)((int)stk + 0) = v0_7;
    v0_5 = ((FUN_0c101d72(v0_3, 0x40, 0x100, ((*(int *)(((int)stk + 12))) + 0xC), v0_7, v0_6, v0_5)));
    L_C102916:;
    v0_6 = *(int *)(((int)stk + 12));
    *(unsigned int *)((v0_6 + 0x8)) = (*(signed char *)((((v0_1 + 0x24) + (*(int *)((v0_6 + 0xC)))) + 0x0)));
    if ((v0_5 == 0)) goto L_C10298C;
    v0_5 = (v0_3);
    if (((*(int *)((v0_1 + 0x34))) != 1)) goto L_C102936;
    v0_6 = (0x4);
    L_C102938:;
    FUN_0c05aab6(v0_5, v0_6);
    if (((*(int *)(((*(int *)(((int)stk + 12))) + 0x10))) != 0)) goto L_C10296C;
    v0_5 = *(int *)(((int)stk + 12));
    *(unsigned int *)((v0_5 + 0x10)) = R11;
    v0_6 = *(signed char *)(((*(int *)((((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0xC))) + 0xC1FC504));
    *(unsigned int *)((v0_5 + 0xC)) = v0_6;
    *(unsigned int *)((v0_5 + 0x8)) = (*(signed char *)((((v0_1 + 0x24) + v0_6) + 0x0)));
    v0_5 = (v0_5);
    goto L_C10298C;
    L_C10296C:;
    if (((*(int *)(((*(int *)(((int)stk + 12))) + 0xC))) != (*(int *)((v0_1 + 0x34))))) goto L_C102988;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x10)) = v0_0;
    goto L_C10298C;
    L_C102988:;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x10)) = R11;
    goto L_C10298C;
    L_C102936:;
    v0_6 = (0x5);
    goto L_C102938;
    L_C1028F2:;
    if (((*(int *)((v0_1 + 0x38))) == 0)) goto L_C1028FC;
    v0_5 = ((*(int *)((v0_1 + 0x34))));
    L_C102900:;
    v0_5 = v0_5;
    *(int *)((int)stk + 8) = v0_5;
    v0_6 = v0_4;
    *(int *)((int)stk + 4) = v0_6;
    v0_7 = R11;
    *(int *)((int)stk + 0) = v0_7;
    v0_5 = ((FUN_0c101d72(v0_3, 0x800, 0x400, ((*(int *)(((int)stk + 12))) + 0xC), v0_7, v0_6, v0_5)));
    goto L_C102916;
    L_C1028FC:;
    v0_5 = (((*(int *)((v0_1 + 0x34))) - 1));
    goto L_C102900;
    L_C1028AE:;
    *(int *)((int)stk + 8) = 0x3;
    v0_5 = v0_4;
    *(int *)((int)stk + 4) = v0_5;
    v0_6 = R11;
    *(int *)((int)stk + 0) = v0_6;
    v0_5 = (FUN_0c101d72(v0_3, 0x40, 0x100, ((*(int *)(((int)stk + 12))) + 0x4), v0_6, v0_5, 0x3)) == 0;
    if (v0_5) goto L_C10298C;
    L_C1028C8:;
    FUN_0c05aab6(v0_3, 0x5);
    goto L_C10298C;
    L_C102894:;
    v0_5 = v0_0;
    *(int *)((int)stk + 8) = v0_5;
    v0_6 = v0_4;
    *(int *)((int)stk + 4) = v0_6;
    v0_7 = R11;
    *(int *)((int)stk + 0) = v0_7;
    v0_5 = (FUN_0c101d72(v0_3, 0x40, 0x100, (*(int *)(((int)stk + 12))), v0_7, v0_6, v0_5)) != 0;
    if (v0_5) goto L_C1028C8;
    goto L_C10298C;
    L_C102834:;
    v0_5 = v0_0;
    *(int *)((int)stk + 8) = v0_5;
    v0_6 = v0_4;
    *(int *)((int)stk + 4) = v0_6;
    *(int *)((int)stk + 0) = 0x1;
    v0_5 = (FUN_0c101d72(v0_3, 0x2000, 0x1000, (((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x10), 0x1, v0_6, v0_5)) == 0;
    if (v0_5) goto L_C102860;
    FUN_0c05aab6(v0_3, 0x6);
    goto L_C102860;
    L_C102768:;
    *(int *)((int)stk + 8) = ((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C));
    *(unsigned int *)((((((v0_3 << 2) << 2) << 1) + (v0_1 + 0x3C)) + 0x0)) = (FUN_0c101d38(v0_3));
    goto L_C102780;
    L_C1026CC:;
    v0_0 = FUN_0c05f22c(0x8000);
    v0_6 = (v0_0);
    if ((v0_0 == 0)) goto L_C1026DC;
    (((struct oC_ushort *)0xC541F44)->v) = R11;
    L_C1026DC:;
    v0_0 = (((struct oC_short *)0xC541F44)->v);
    (((struct oC_ushort *)0xC541F44)->v) = (v0_0 - 1);
    if (((short)(v0_0 - 1) == 0)) goto L_C1026EE;
    goto L_C102D54;
    L_C1026EE:;
    (((struct o1_uchar *)0xC541F44)->v) = ((*(signed char *)0xC541F45) + 0x1);
    v0_6 = (0xC541F45);
    v0_3 = (v0_4);
    L_C102706:;
    if (((int)v0_3 < (int)0x4)) goto L_C1026FA;
    goto L_C102D54;
    L_C1026FA:;
    FUN_0c10368c(v0_3);
    v0_6 = ((FUN_0c103ba2(v0_3)));
    v0_3 = ((v0_3 + 0x1));
    goto L_C102706;
    L_C1026C0:;
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_5 + 0x0))) + 0x1);
    FUN_0c059c54(0x0);
    goto L_C1026CC;
}

int FUN_0c102d68(void)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_3 = *(signed char *)0xC541F45;
    v0_6 = ((unsigned char)v0_3);
    v0_0 = (0xC541F3C);
    v0_1 = (0x0);
    v0_2 = (0xC472CEC);
    v0_4 = (0xC541F45);
    v0_5 = (0xC05AAB6);
    if (((unsigned char)v0_3 == 0)) goto L_C102DBC;
    if ((v0_6 == 1)) goto L_C102DC8;
    *(unsigned int *)((v0_2 + 0x20)) = ((*(int *)((v0_2 + 0x20))) - 1);
    v0_3 = *(int *)(((v0_2 + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = (((v0_3 << 1) + (v0_3 << 2)) + (*(int *)(((v0_2 + 0x4) + 0x4))));
    v0_3 = (0xC472CC0);
    v0_4 = (v0_1);
    v0_5 = (0x3);
    v0_6 = ((v0_2 + 0x8));
    L_C102E1A:;
    if (((int)(*(signed char *)(((((((v0_4 << 2) << 1) - v0_4) + v0_3) + (*(int *)((v0_6 + 0x0)))) + 0x8))) < 0)) goto L_C102E34;
    R10 = (v0_4);
    L_C102E3A:;
    v0_4 = (R10);
    if (((int)R10 >= (int)v0_5)) goto L_C102E5E;
    L_C102E40:;
    if (((int)(*(signed char *)(((((((v0_4 << 2) << 1) - v0_4) + v0_3) + (*(int *)((v0_6 + 0x0)))) + 0x8))) < 0)) goto L_C102E5E;
    v0_7 = (int)(v0_4 + 0x1) < (int)v0_5;
    v0_8 = v0_4;
    v0_4 = ((v0_4 + 0x1));
    R9 = v0_8;
    if (v0_7) goto L_C102E40;
    L_C102E5E:;
    v0_4 = R9;
    *(int *)((int)stk + 8) = v0_4;
    v0_5 = R10;
    *(int *)((int)stk + 4) = v0_5;
    *(int *)((int)stk + 0) = 0x1;
    FUN_0c101d72((*(int *)((v0_2 + 0x10))), 0x2000, 0x1000, (v0_2 + 0x4), 0x1, v0_5, v0_4);
    v0_4 = (v0_1);
    v0_5 = (0x6);
    v0_6 = ((v0_2 + 0x4));
    v0_7 = (v0_3);
    L_C102E80:;
    v0_8 = *(int *)((v0_6 + 0x0));
    if (((int)(*(signed char *)(((((((v0_8 << 2) << 1) - v0_8) + v0_7) + v0_4) + 0x8))) < 0)) goto L_C102EB0;
    R10 = (v0_4);
    L_C102EB6:;
    v0_4 = (R10);
    if (((int)R10 >= (int)v0_5)) goto L_C102ED8;
    L_C102EBC:;
    v0_8 = *(int *)((v0_6 + 0x0));
    if (((int)(*(signed char *)(((((((v0_8 << 2) << 1) - v0_8) + v0_7) + v0_4) + 0x8))) < 0)) goto L_C102ED8;
    v0_8 = (int)(v0_4 + 0x1) < (int)v0_5;
    v0_9 = v0_4;
    v0_4 = ((v0_4 + 0x1));
    R9 = v0_9;
    if (v0_8) goto L_C102EBC;
    L_C102ED8:;
    v0_4 = R9;
    *(int *)((int)stk + 8) = v0_4;
    v0_5 = R10;
    *(int *)((int)stk + 4) = v0_5;
    *(int *)((int)stk + 0) = 0x1;
    FUN_0c101d72((*(int *)((v0_2 + 0x10))), 0x800, 0x400, (v0_2 + 0x8), 0x1, v0_5, v0_4);
    v0_5 = *(int *)(((v0_2 + 0x4) + 0x0));
    v0_6 = *(int *)(((v0_2 + 0x4) + 0x4));
    R10 = ((((v0_5 << 1) + (v0_5 << 2)) + v0_6));
    v0_4 = ((v0_2 + 0x4));
    if (((((v0_5 << 1) + (v0_5 << 2)) + v0_6) == (*(int *)(((int)stk + 12))))) goto L_C102F0E;
    FUN_0c05aab6(0x0, 0x1);
    L_C102F0E:;
    v0_4 = ((v0_2 + 0x4));
    if (((*(int *)(((v0_2 + 0x4) + 0x0))) != 1)) goto L_C102F5C;
    if (((*(int *)((v0_4 + 0x4))) != 2)) goto L_C102F5C;
    v0_4 = ((v0_0 + 0x16));
    if ((R10 == (*(int *)(((int)stk + 12))))) goto L_C102F2E;
    *(unsigned short *)((v0_4 + 0x0)) = 0x5;
    L_C102F74:;
    v0_3 = (v0_1);
    if (((*(int *)((v0_2 + 0x1C))) != 0)) goto L_C102FAC;
    v0_4 = FUN_0c101d52((*(int *)((v0_2 + 0x10))), 0x8101);
    v0_6 = (v0_4);
    if ((v0_4 != 0)) goto L_C102FBE;
    L_C102FC0:;
    if ((v0_3 == 0)) goto L_C102FDC;
    *(unsigned char *)((v0_0 + 0x7)) = ((*(signed char *)((v0_0 + 0x7))) + 0x1);
    *(unsigned char *)((v0_0 + 0x8)) = v0_1;
    *(unsigned char *)((v0_0 + 0x9)) = v0_1;
    v0_6 = ((FUN_0c05aab6(0x0, 0x2)));
    L_C103016:;
    return v0_6;
    L_C102FDC:;
    if (((*(int *)((v0_2 + 0x1C))) != 0)) goto L_C103016;
    v0_3 = FUN_0c101d52((*(int *)((v0_2 + 0x10))), 0x40);
    v0_6 = (v0_3);
    if ((v0_3 == 0)) goto L_C103016;
    *(unsigned char *)((v0_0 + 0x8)) = v0_1;
    *(unsigned char *)((v0_0 + 0x9)) = v0_1;
    *(unsigned short *)((v0_0 + 0x14)) = 0x1E;
    v0_6 = ((FUN_0c05aab6((*(int *)((v0_2 + 0x10))), 0x4)));
    v0_4 = (v0_1);
    v0_5 = (0x80);
    L_C103010:;
    if (((unsigned int)v0_4 < (unsigned int)v0_5)) goto L_C103006;
    *(unsigned int *)((v0_2 + 0x18)) = v0_1;
    goto L_C103016;
    L_C103006:;
    *(unsigned int *)((((v0_2 + 0x3C) + v0_4) + 0x8)) = v0_1;
    v0_4 = ((v0_4 + 0x20));
    goto L_C103010;
    L_C102FBE:;
    v0_3 = (0x1);
    goto L_C102FC0;
    L_C102FAC:;
    v0_4 = FUN_0c101d52((*(int *)((v0_2 + 0x10))), 0x8101);
    v0_6 = (v0_4);
    if ((v0_4 != 0)) goto L_C102FBE;
    if (((int)(*(int *)((v0_2 + 0x20))) > 0)) goto L_C102FC0;
    goto L_C102FBE;
    L_C102F2E:;
    v0_3 = *(short *)((v0_4 + 0x0));
    *(unsigned short *)((v0_4 + 0x0)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C102F44;
    *(unsigned short *)((v0_0 + 0x16)) = 0xA;
    FUN_0c05aab6(0x0, 0x6);
    L_C102F44:;
    *(unsigned int *)((v0_2 + 0xC)) = (*(signed char *)((0xC472CDC + ((int)((int)(FUN_0c179ac0()) % (int)(*(int *)0xC472CE8))))));
    goto L_C102F74;
    L_C102F5C:;
    v0_4 = *(int *)(((v0_2 + 0x4) + 0x0));
    *(unsigned int *)((v0_2 + 0xC)) = (*(signed char *)((((v0_3 + (((v0_4 << 2) << 1) - v0_4)) + (*(int *)(((v0_2 + 0x4) + 0x4)))) + 0x8)));
    v0_4 = ((v0_2 + 0x4));
    goto L_C102F74;
    L_C102EB0:;
    v0_8 = (int)(v0_4 + 0x1) < (int)v0_5;
    v0_4 = ((v0_4 + 0x1));
    if (v0_8) goto L_C102E80;
    goto L_C102EB6;
    L_C102E34:;
    v0_7 = (int)(v0_4 + 0x1) < (int)v0_5;
    v0_4 = ((v0_4 + 0x1));
    if (v0_7) goto L_C102E1A;
    goto L_C102E3A;
    L_C102DC8:;
    v0_2 = (FUN_0c05f22c(0x8000)) == 0;
    if (v0_2) goto L_C102DD8;
    *(unsigned short *)((v0_0 + 0x14)) = 0x1;
    L_C102DD8:;
    v0_2 = *(short *)((v0_0 + 0x14));
    *(unsigned short *)((v0_0 + 0x14)) = (v0_2 - 1);
    v0_6 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) == 0)) goto L_C102DE8;
    goto L_C103016;
    L_C102DE8:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    *(unsigned short *)((v0_0 + 0x16)) = v0_1;
    v0_6 = (v0_1);
    goto L_C103016;
    L_C102DBC:;
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    FUN_0c059c54(0x1);
    goto L_C102DC8;
}

int FUN_0c10302a(int a4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t2 = *(signed char *)((a4 + 0x2));
        if (t2 != 0) {
            if (t2 == 1) {
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 10.0f);
            }
            t2 = *(signed char *)((a4 + 0x2));
            if (t2 != 0) {
                t3 = t2;
                if (t2 == 1) {
                    if (((*(signed char *)0xC541F43) == 0) && (t0 = *(signed char *)0xC541F44, t0 == 0)) {
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                    } else {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    t3 = 0xA8;
                }
                return t3;
            }
        }
    } else {
        t0 = *(signed char *)((a4 + 0x2));
        if (t0 != 0) {
            t2 = t0;
            if (t0 == 1) {
                if (((*(signed char *)0xC541F43) == 0) && (t1 = *(signed char *)0xC541F44, t1 == 0)) {
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                } else {
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                }
                t2 = 0xA8;
            }
            return t2;
        }
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x5B);
    return FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1FC604);
}

int FUN_0c1030c0(int a4)
{
    register int t1;
    register int t4;
    register int t5;
    register int t9;

    t1 = 0x0;
    for (;;) {
        t4 = FUN_0c037320((*(int *)(((((a4 << 2) << 1) + 0xC290818) + (t1 << 2)))), (*(int *)0xC4B410C));
        t5 = FUN_0c03f444(0x5, 0x0, t4);
        t9 = t5;
        if (t5 != 0) {
            FUN_0c03733c(t5, (*(int *)(((((a4 << 2) << 1) + 0xC290818) + (t1 << 2)))), (*(int *)0xC4B410C));
            (((struct oA8_uchar *)(t5))->v) = 0x1;
            (((struct oAC_ushort *)(t5))->v) = 0xF;
            (((struct oA9_uchar *)(t5))->v) = 0x80;
            *(unsigned char *)((t5 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t5 + 0x2)) = t1;
            *(unsigned int *)((t5 + 0x4)) = 0xC10302A;
            t9 = t1;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x2) {
            break;
        }
    }
    return t9;
}

int FUN_0c10314a(int a4)
{
    register int t0;
    register int t1;

    FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + ((((struct o4_int *)0xC290898)->v))))), (*(int *)0xC4B410C));
    t0 = *(int *)0xC4B410C;
    if ((*(short *)((a4 + 0x1C))) == 2) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((((((struct o0_int *)0xC290898)->v)) + 0x10))), t0);
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
    } else {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)((a4 + 0x1E))) << 2) + ((((struct o0_int *)0xC290898)->v))))), t0);
        FUN_0c037498(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)((a4 + 0x1E))) << 2) + ((((struct o8_int *)0xC290898)->v))))), (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
        t0 = *(int *)0xC4B410C;
        if (((((struct o22_short *)(a4))->v)) == 0) {
            FUN_0c037498(((((struct oD0_int *)(a4))->v)), 0x0, 0x82, t0);
        } else {
            t1 = 0x83;
            if (((((struct o22_short *)(a4))->v)) == 2) {
            } else {
                t1 = (*(int *)(((((((struct o20_short *)(a4))->v)) << 2) + ((((struct oC_int *)0xC290898)->v)))));
            }
            FUN_0c037498(((((struct oD0_int *)(a4))->v)), 0x0, t1, t0);
        }
        *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    return 0xD0;
}

int FUN_0c10324c(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register float u0;

    t6 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = (*(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x0)));
        *(unsigned short *)((a4 + 0x1E)) = (*(short *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x4)));
        (((struct o20_ushort *)(a4))->v) = (*(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x8)));
        (((struct o22_ushort *)(a4))->v) = (*(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x10)));
        (((struct oB4_float *)(a4))->v) = 0.5f;
        (((struct oB8_float *)(a4))->v) = 0.5f;
        (((struct oBC_float *)(a4))->v) = 0.5f;
        FUN_0c10314a(a4);
    }
    t7 = *(signed char *)((a4 + 0x15));
    if (t7 != 0) {
        if (t7 != 1) {
            if (t7 == 2) {
                t7 = *(signed char *)0xC541F43;
                t8 = t7;
                if (t7 == 0) {
                    t7 = *(signed char *)0xC541F44;
                    t9 = t7;
                    if (t7 == 0) {
                        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t9 = 0x15;
                    }
                    t8 = t9;
                }
                t7 = t8;
            } else {
                t8 = 0x0;
                t9 = 0x0;
                for (;;) {
                    u0 = (((struct o10_float *)((0xC2908B8 + t8)))->v);
                    t9 = (t9 + 0x1);
                    (((struct o70_float *)((*(int *)((((0xC4 + a4) + t8) + 0x0)))))->v) = ((((((*(float *)((t8 + 0xC2908B8))) - u0) * (float)((-(*(short *)0xC541F50)) + 0x1E)) / 30.0f)) + u0);
                    t8 = (t8 + 0x4);
                    if ((int)t9 >= (int)0x4) {
                        break;
                    }
                }
                (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((((((struct o0_float *)0xC103550)->v)) * (float)((-(*(short *)0xC541F50)) + 0x1E)) / 30.0f)) + ((((struct o4_float *)0xC103550)->v)));
                t8 = *(short *)0xC541F50;
                t9 = t8;
                if ((int)t8 <= 0) {
                    if ((*(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x0))) != 2) {
                        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                    }
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t9 = 0x15;
                }
                t7 = t9;
            }
            t8 = t7;
        } else {
            t7 = 0x0;
            t9 = 0x0;
            for (;;) {
                u0 = *(float *)((t7 + 0xC2908B8));
                t9 = (t9 + 0x1);
                (((struct o70_float *)((*(int *)((((0xC4 + a4) + t7) + 0x0)))))->v) = (((((((((struct o10_float *)((0xC2908B8 + t7)))->v)) - u0) * (float)((-(*(short *)0xC541F50)) + 0x1E)) / 30.0f)) + u0);
                t7 = (t7 + 0x4);
                if ((int)t9 >= (int)0x4) {
                    break;
                }
            }
            u0 = (float)((-(*(short *)0xC541F50)) + 0x1E);
            u0 *= -0.449999988f;
            (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((u0 / 30.0f) + 1.0f);
            t7 = *(short *)0xC541F50;
            t9 = t7;
            if ((int)t7 <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t9 = 0x15;
            }
            t8 = t9;
        }
        t7 = t8;
    } else {
        if (((*(short *)((a4 + 0x1C))) == (*(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x0)))) && ((t0 = *(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x4)), t7 = *(short *)((a4 + 0x1E)), t7 == t0) && ((t2 = *(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x8)), t3 = (((struct o20_short *)(a4))->v), t3 == t2) && (t4 = *(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x10)), t5 = (((struct o22_short *)(a4))->v), t5 == t4)))) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = (*(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x0)));
            *(unsigned short *)((a4 + 0x1E)) = (*(short *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x4)));
            (((struct o20_ushort *)(a4))->v) = (*(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x8)));
            (((struct o22_ushort *)(a4))->v) = (*(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x10)));
            FUN_0c10314a(a4);
        }
        if ((*(int *)((0xC472D30 + ((((*(signed char *)((a4 + 0x1))) << 2) << 2) << 1)))) == 1) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        } else {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
        }
        t0 = *(signed char *)0xC541F44;
        t7 = (unsigned char)t0;
        if ((unsigned char)t0 != 1) {
        } else {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
            *(unsigned short *)((a4 + 0x1C)) = (*(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x0)));
            *(unsigned short *)((a4 + 0x1E)) = (*(short *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x4)));
            (((struct o20_ushort *)(a4))->v) = (*(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x8)));
            (((struct o22_ushort *)(a4))->v) = (*(int *)(((0xC472DA8 + (((t6 << 2) + t6) << 2)) + 0x10)));
            FUN_0c10314a(a4);
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o8C_float *)(t0))->v) = 1.0f;
            (((struct o88_float *)(t0))->v) = 1.0f;
            (((struct o84_float *)(t0))->v) = 1.0f;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t7 = 0x15;
        }
    }
    return t7;
}

int FUN_0c1034ba(int a4)
{
    register int t0;
    register int t10;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t10 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            (((struct o6C_float *)((*(int *)((((0xC4 + t0) + t1) + 0x0)))))->v) = (*(float *)((((a4 << 2) + 0xC2908A8) + 0x0)));
            (((struct o70_float *)((*(int *)((((0xC4 + t0) + t1) + 0x0)))))->v) = (*(float *)((t1 + 0xC2908B8)));
            t2 = (t2 + 0x1);
            (((struct o74_float *)((*(int *)((((0xC4 + t0) + t1) + 0x0)))))->v) = (*(float *)((0xC2908D8 + t1)));
            t1 = (t1 + 0x4);
            if ((int)t2 >= (int)0x4) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC10324C;
        t10 = a4;
    }
    return t10;
}

int FUN_0c10356c(int a4)
{
    FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x0, (*(int *)(((((int)((int)(*(short *)((a4 + 0x1C))) / (int)0xA)) << 2) + ((((struct o0_int *)0xC290918)->v))))), (*(int *)0xC4B410C));
    return FUN_0c037498(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)(((((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xA)) << 2) + ((((struct o4_int *)0xC290918)->v))))), (*(int *)0xC4B410C));
}

int FUN_0c1035c2(int a4)
{
    register int t15;
    register int t18;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)(((*(int *)0xC290914) + 0x0))), (*(int *)0xC4B410C));
        *(unsigned short *)((a4 + 0x1C)) = (*(short *)((0xC541D20 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x98))));
        FUN_0c10356c(a4);
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        t15 = *(signed char *)0xC541F44;
        t18 = (unsigned char)t15;
        if ((unsigned char)t15 == 1) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            (((struct oB0_float *)(a4))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t18 = 0x15;
        }
        return t18;
    }
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0333333351f);
    if (0.0f > ((((struct oB0_float *)(a4))->v))) {
        return FUN_0c03f346(a4);
    }
    return 0xB0;
}

int FUN_0c10368c(int a4)
{
    register int t0;
    register int t11;
    register float u1;
    register float u3;
    register int t4;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t11 = t0;
    if (t0 != 0) {
        u1 = (((struct o0_float *)0xC10379C)->v);
        u3 = (((struct o4_float *)0xC10379C)->v);
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            (((struct o6C_float *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = (*(float *)((t4 + ((((a4 << 1) + a4) << 2) + 0xC290920))));
            t5 = (t5 + 0x1);
            (((struct o70_float *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = u1;
            (((struct o74_float *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = u3;
            t4 = (t4 + 0x4);
            if ((int)t5 >= (int)0x3) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC1035C2;
        t11 = a4;
    }
    return t11;
}

int FUN_0c103716(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_4 = (0x0);
    if (((*(signed char *)((v0_0 + 0x14))) != 0)) goto L_C10374C;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C103736;
    if ((v0_1 == 1)) goto L_C103742;
    L_C10374C:;
    if (((*(signed char *)0xC541F43) == 0)) goto L_C103764;
    if (((int)(*(signed char *)((v0_0 + 0x15))) >= (int)0xA)) goto L_C103764;
    (((struct o15_uchar *)(v0_0))->v) = 0xA;
    L_C103764:;
    v0_5 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_5);
    v0_2 = (0xC541F44);
    v0_3 = (0xC290950);
    w0_0 = (1.0f);
    w0_1 = (0.0500000007f);
    if ((v0_5 == 0)) goto L_C1037B8;
    if ((v0_1 == 1)) goto L_C10382A;
    if ((v0_1 == 2)) goto L_C1037CA;
    if ((v0_1 == 3)) goto L_C1037F2;
    if ((v0_1 == 10)) goto L_C103810;
    if ((v0_1 == 11)) goto L_C10382A;
    L_C103846:;
    return v0_1;
    L_C10382A:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - w0_1);
    v0_1 = (0xB0);
    if ((!(0.0f > ((((struct oB0_float *)(v0_0))->v))))) goto L_C103846;
    (((struct oA8_uchar *)(v0_0))->v) = v0_4;
    L_C10383E:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C103846;
    L_C103810:;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x400);
    (((struct oB0_float *)(v0_0))->v) = w0_0;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x14;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C10382A;
    L_C1037F2:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) + w0_1);
    v0_1 = (0xB0);
    if ((!(((((struct oB0_float *)(v0_0))->v)) > w0_0))) goto L_C103846;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) & 0xFBFF);
    (((struct o15_uchar *)(v0_0))->v) = v0_4;
    v0_1 = (0x15);
    goto L_C103846;
    L_C1037CA:;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_1 = ((v0_4 << 2));
    if (((unsigned char)(*(signed char *)((v0_2 + 0x0))) != (*(int *)((v0_3 + (v0_4 << 2)))))) goto L_C103846;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    L_C1037DE:;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x400);
    (((struct oB0_float *)(v0_0))->v) = w0_0;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x14;
    goto L_C10383E;
    L_C1037B8:;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_1 = ((v0_4 << 2));
    if (((unsigned char)(*(signed char *)((v0_2 + 0x0))) != (*(int *)((v0_3 + (v0_4 << 2)))))) goto L_C1037DE;
    goto L_C103846;
    L_C103742:;
    (((struct o15_uchar *)(v0_0))->v) = 0x2;
    (((struct oA8_uchar *)(v0_0))->v) = v0_4;
    goto L_C10374C;
    L_C103736:;
    (((struct o15_uchar *)(v0_0))->v) = v0_4;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    goto L_C10374C;
}

int FUN_0c10384a(void)
{
    register int t0;
    register int t3;
    register int t4;
    register int t8;

    t0 = 0x0;
    for (;;) {
        t3 = FUN_0c037320((*(int *)((0xC290958 + (t0 << 2)))), (*(int *)0xC4B410C));
        t4 = FUN_0c03f444(0x5, 0x0, t3);
        t8 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, (*(int *)((0xC290958 + (t0 << 2)))), (*(int *)0xC4B410C));
            (((struct oAC_ushort *)(t4))->v) = 0xF;
            (((struct oA9_uchar *)(t4))->v) = 0x80;
            *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t4 + 0x2)) = t0;
            *(unsigned int *)((t4 + 0x4)) = 0xC103716;
            t8 = t0;
        }
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)0x2) {
            break;
        }
    }
    return t8;
}

int FUN_0c1038e8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = a4;
    t3 = 0x0;
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        FUN_0c187798(a4, 0x0, a6);
        (((struct oA8_uchar *)(t0))->v) = t1;
        t2 = t0;
        t3 = t1;
    }
    t0 = *(signed char *)((t2 + 0x15));
    t1 = *(int *)0xC472CEC;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct oB0_float *)(t2))->v) = (((((struct oB0_float *)(t2))->v)) - 0.0333333351f);
                t0 = 0xB0;
                if (0.0f > ((((struct oB0_float *)(t2))->v))) {
                    (((struct oA8_uchar *)(t2))->v) = t3;
                    (((struct oAC_ushort *)(t2))->v) = (((((struct oAC_short *)(t2))->v)) & 0xFBFF);
                    (((struct o15_uchar *)(t2))->v) = t3;
                    t0 = 0x15;
                }
                t3 = t0;
            } else {
                t0 = *(signed char *)((t2 + 0x2));
                t4 = t0;
                if (t1 != t0) {
                    (((struct oAC_ushort *)(t2))->v) = (((((struct oAC_short *)(t2))->v)) | 0x400);
                    (((struct oB0_float *)(t2))->v) = 1.0f;
                    (((struct o15_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x15))) + 0x1);
                    t4 = 0x15;
                }
                t3 = t4;
            }
            t0 = t3;
        } else {
            (((struct oB0_float *)(t2))->v) = (((((struct oB0_float *)(t2))->v)) + 0.0333333351f);
            t3 = 0xB0;
            if (((((struct oB0_float *)(t2))->v)) > 1.0f) {
                (((struct oAC_ushort *)(t2))->v) = (((((struct oAC_short *)(t2))->v)) & 0xFBFF);
                (((struct o15_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t0 = t3;
        }
        t3 = t0;
    } else {
        t0 = *(signed char *)((t2 + 0x2));
        t4 = t0;
        if (t1 == t0) {
            (((struct oA8_uchar *)(t2))->v) = 0x1;
            (((struct oAC_ushort *)(t2))->v) = (((((struct oAC_short *)(t2))->v)) | 0x400);
            (((struct oB0_float *)(t2))->v) = 0.0f;
            (((struct o15_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x15))) + 0x1);
            t4 = 0x15;
        }
        t3 = t4;
    }
    return t3;
}

int FUN_0c1039c4(void)
{
    register int t0;
    register int t3;
    register int t4;
    register int t8;

    t0 = 0x0;
    for (;;) {
        t3 = FUN_0c037320((*(int *)((0xC290960 + (t0 << 2)))), (*(int *)0xC4B410C));
        t4 = FUN_0c03f444(0x5, 0x0, t3);
        t8 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, (*(int *)((0xC290960 + (t0 << 2)))), (*(int *)0xC4B410C));
            (((struct oAC_ushort *)(t4))->v) = 0xF;
            (((struct oA9_uchar *)(t4))->v) = 0x80;
            *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t4 + 0x2)) = (t0 + 0x2);
            *(unsigned int *)((t4 + 0x4)) = 0xC1038E8;
            t8 = (t0 + 0x2);
        }
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)0x3) {
            break;
        }
    }
    return t8;
}

int FUN_0c103ba2(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((*(int *)(((a4 << 2) + 0xC29096C))), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)(((a4 << 2) + 0xC29096C))), (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = a4;
        *(unsigned int *)((t1 + 0x4)) = 0xC103A3E;
        (((struct o30_float *)(t1))->v) = 10.0f;
        t0 = 0x30;
    }
    return t0;
}

int FUN_0c103d00(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x9);
    t1 = t0;
    if (t0 != 0) {
        u0 = *(float *)0xC103E5C;
        t2 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))), 0x0, (*(int *)((0xC29097C + (t2 << 2)))), (*(int *)0xC4B410C));
            t3 = (int)((int)t2 / (int)0x3);
            t4 = (int)((int)t2 % (int)0x3);
            if ((int)(*(signed char *)((((0xC472CC0 + (((t3 << 2) << 1) - t3)) + t4) + 0x8))) >= 0) {
                *(unsigned char *)(((*(int *)((((t2 << 2) + (0xC4 + t0)) + 0x0))) + 0x0)) = 0x1;
            } else {
                *(unsigned char *)(((*(int *)((((t2 << 2) + (0xC4 + t0)) + 0x0))) + 0x0)) = 0x0;
            }
            (((struct o6C_float *)((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0)))))->v) = (*(float *)((((((((t3 << 1) + t3) << 2) << 1) + 0xC1FC68C) + ((t4 << 2) << 1)) + 0x0)));
            (((struct o70_float *)((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0)))))->v) = ((((struct o4_float *)(((((((t3 << 1) + t3) << 2) << 1) + 0xC1FC68C) + ((t4 << 2) << 1))))->v));
            t3 = *(int *)((((t2 << 2) + (0xC4 + t0)) + 0x0));
            t2 = (t2 + 0x1);
            (((struct o74_float *)(t3))->v) = u0;
            if ((int)t2 >= (int)0x9) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned int *)((t0 + 0x4)) = 0xC103C44;
        t1 = 0xA9;
    }
    return t1;
}
