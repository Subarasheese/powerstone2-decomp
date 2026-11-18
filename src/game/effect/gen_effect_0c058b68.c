/* game/effect: functions 0C058B68-0C059C54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_short { char p[0x28]; short v; };
struct o30_float { char p[0x30]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05950c(void);
int FUN_0c05aab6(int, int);
int FUN_0c05ae28(int);
int FUN_0c05f42a(int);
int FUN_0c05f71a(void);
int FUN_0c05f76a(void);
int FUN_0c05f770(void);
int FUN_0c101d38(int);
int FUN_0c104e26(int, int);
int FUN_0c10547c(int, int, int);
int FUN_0c105536(int, int, int);
int FUN_0c10558c(int);
int FUN_0c1055b4(int);
int FUN_0c1171f0(int);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(void);
int FUN_0c058b68(void);
int FUN_0c058bd4(void);
int FUN_0c058c32(void);
int FUN_0c058c90(int a4);
int FUN_0c058cdc(void);
int FUN_0c058d44(int a4);
int FUN_0c0593b8(int a4, int a5);
int FUN_0c0593ee(int a4, int a5, int a6, int a7);
int FUN_0c059536(int a4);
int FUN_0c0595a4(int a4);
int FUN_0c059946(int a4);
int FUN_0c059a28(int a4);
int FUN_0c059bd6(int a4);
int FUN_0c059c16(int a4, int a5);

int FUN_0c058b68(void)
{

    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = R12;
    v0_1 = R11;
    v0_2 = R10;
    v0_3 = R9;
    v0_4 = R8;
    R10 = (0xC413CB8);
    R11 = (0x7);
    R12 = (0x2);
    v0_0 = (0x0);
    v0_1 = (0x0);
    R8 = (0x4);
    R9 = (0xC5429C8);
    L_C058BC0:;
    if (((int)v0_1 < (int)R8)) goto L_C058B84;
    v0_0 = (0x0);
    L_C058BC6:;
    return v0_0;
    L_C058B84:;
    v0_2 = ((v0_1 * 0xE));
    v0_3 = (v0_0);
    L_C058BBA:;
    if (((int)v0_3 < (int)R11)) goto L_C058B8E;
    v0_1 = ((v0_1 + 0x1));
    goto L_C058BC0;
    L_C058B8E:;
    v0_4 = ((v0_3 << 1));
    v0_5 = (v0_0);
    L_C058B94:;
    v0_6 = (*(signed char *)((v0_5 + ((v0_2 + R10) + v0_4)))) == (*(signed char *)((v0_5 + (((R9 + 0x8) + v0_2) + v0_4))));
    if (v0_6) goto L_C058BB2;
    v0_0 = (0x1);
    goto L_C058BC6;
    L_C058BB2:;
    v0_6 = (int)(v0_5 + 0x1) < (int)R12;
    v0_5 = ((v0_5 + 0x1));
    if (v0_6) goto L_C058B94;
    v0_3 = ((v0_3 + 0x1));
    goto L_C058BBA;
}

int FUN_0c058bd4(void)
{
    register int t0;
    register int t1;
    register int t3;
    register int t11;

    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            t3 = 0x0;
            for (;;) {
                *(unsigned char *)((t3 + ((0xC5429D0 + (t0 * 0xE)) + (t1 << 1)))) = (*(signed char *)((((((t0 * 0xE) + 0xC413CB8) + (t1 << 1)) + t3) + 0x0)));
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x2) {
                    break;
                }
            }
            t11 = ((0xC5429D0 + (t0 * 0xE)) + (t1 << 1));
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x7) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t11;
}

int FUN_0c058c32(void)
{
    register int t0;
    register int t1;
    register int t3;
    register int t11;

    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            t3 = 0x0;
            for (;;) {
                *(unsigned char *)((t3 + (((t0 * 0xE) + 0xC413CB8) + (t1 << 1)))) = (*(signed char *)(((((0xC5429D0 + (t0 * 0xE)) + (t1 << 1)) + t3) + 0x0)));
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x2) {
                    break;
                }
            }
            t11 = (((t0 * 0xE) + 0xC413CB8) + (t1 << 1));
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x7) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t11;
}

int FUN_0c058c90(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = ((t0 << 1) + (((short)(signed char)a4 * (short)0xE) + 0xC413CB8));
        t3 = 0xC1C2308;
        t4 = 0x0;
        for (;;) {
            t5 = *(signed char *)((t3 + t0));
            t4 = (t4 + 0x1);
            t3 = (t3 + 0x7);
            *(unsigned char *)((t2 + 0x0)) = t5;
            t2 = (t2 + 0x1);
            if ((int)t4 >= (int)0x2) {
                break;
            }
        }
        t7 = t0;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t7;
}

int FUN_0c058cdc(void)
{
    register int t0;
    register int t1;
    register int t3;
    register int t13;

    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            t3 = 0x0;
            for (;;) {
                *(unsigned char *)((t3 + ((0xC5429D0 + (t0 * 0xE)) + (t1 << 1)))) = (*(signed char *)(((((((t3 << 2) << 1) - t3) + 0xC1C2308) + t1) + 0x0)));
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x2) {
                    break;
                }
            }
            t13 = ((0xC5429D0 + (t0 * 0xE)) + (t1 << 1));
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x7) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t13;
}

int FUN_0c058d44(int a4)
{
    int stk[7];

    register int R1;
    register int R3;
    int R4;
    register int R5;
    register int R6;
    register int R7;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    R4 = a4;
    v0_5 = (0x14);
    v0_0 = (R4);
    v0_2 = (0x1);
    if (((int)(*(signed char *)(((*(int *)((R4 + 0x10))) + 0x14))) <= (int)0x1)) goto L_C058D7C;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C058D7C:;
    v0_6 = *(signed char *)((v0_0 + v0_5));
    v0_5 = (v0_6);
    v0_3 = (0xC4B4110);
    v0_1 = (0xC03744A);
    v0_1 = (0x0);
    v0_4 = (0xC17C130);
    v0_4 = (0xC241FE0);
    if ((v0_6 == 0)) goto L_C058DB4;
    if ((v0_5 == 1)) goto L_C058E80;
    L_C0593A4:;
    return v0_5;
    L_C058E80:;
    if (((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x15))) != 0)) goto L_C058E8E;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    v0_5 = (0x15);
    goto L_C0593A4;
    L_C058E8E:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    if (((*(signed char *)((v0_0 + 0x15))) != 0)) goto L_C058EB2;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    (((struct o20_ushort *)(v0_0))->v) = v0_1;
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    L_C058EB2:;
    v0_5 = (FUN_0c101d38((*(signed char *)((v0_0 + 0x1))))) != 0;
    if (v0_5) goto L_C058EC2;
    *(unsigned char *)((((((struct oE0_int *)(v0_0))->v)) + 0x0)) = v0_2;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)(((*(int *)(((0xC4 + v0_0) + 0x28))) + 0x0)) = v0_1;
    *(unsigned char *)((v0_2 + 0x0)) = v0_1;
    v0_5 = (0xE0);
    goto L_C0593A4;
    L_C058EC2:;
    v0_5 = *(signed char *)((v0_0 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = ((((*(signed char *)((0xC5426C8 + ((((v0_5 << 2) + v0_5) << 2) << 1)))) == 2)) ? 1 : 0);
    *(unsigned short *)((v0_0 + 0x1C)) = (*(short *)((v0_0 + 0x1E)));
    *(unsigned short *)((v0_0 + 0x1E)) = (FUN_0c10547c((*(signed char *)((v0_0 + 0x1))), (*(short *)((v0_0 + 0x1E))), 0x8));
    v0_6 = *(short *)(((0x1E + v0_0) + 0x0));
    v0_5 = (v0_6);
    if (((*(short *)((v0_0 + 0x1C))) == v0_6)) goto L_C058F28;
    R4 = (0x1);
    L_C058F2A:;
    if ((v0_5 != 6)) goto L_C058F6A;
    v0_5 = *(signed char *)((v0_0 + 0x1));
    if ((((*(signed char *)((0xC5426C9 + ((((v0_5 << 2) + v0_5) << 2) << 1)))) & 2) != 0)) goto L_C058F6A;
    v0_5 = *(signed char *)((v0_0 + 0x1));
    if ((((*(signed char *)((0xC5426CA + ((((v0_5 << 2) + v0_5) << 2) << 1)))) & 2) != 0)) goto L_C058F6A;
    v0_6 = *(short *)((v0_0 + 0x1E));
    v0_5 = (v0_6);
    if (((int)(*(short *)((v0_0 + 0x1C))) > (int)v0_6)) goto L_C058F66;
    v0_5 = (((*(short *)((v0_0 + 0x1E))) + 0x1));
    L_C058F68:;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_5;
    L_C058F6A:;
    if ((R4 != 0)) goto L_C058FA2;
    if (((int)(*(short *)((v0_0 + 0x1E))) > (int)0x5)) goto L_C058FA2;
    v0_5 = *(signed char *)((v0_0 + 0x1));
    *(unsigned char *)(((int)stk + 16)) = v0_5;
    v0_6 = *(int *)(((int)stk + 12));
    v0_7 = *(short *)((v0_0 + 0x1E));
    *(unsigned int *)(((int)stk + 8)) = (((0xC413CB8 + ((short)v0_5 * (short)0xE)) + (v0_7 << 1)) + v0_6);
    *(int *)((int)stk + 4) = (((0xC413CB8 + ((short)v0_5 * (short)0xE)) + (v0_7 << 1)) + v0_6);
    *(unsigned char *)(((((0xC413CB8 + ((short)v0_5 * (short)0xE)) + (v0_7 << 1)) + v0_6) + 0x0)) = (FUN_0c105536((*(signed char *)(((int)stk + 16))), (*(signed char *)(((((0xC413CB8 + ((short)v0_5 * (short)0xE)) + (v0_7 << 1)) + v0_6) + 0x0))), 0x7));
    L_C058FA2:;
    if (((*(short *)((v0_0 + 0x1E))) != 7)) goto L_C058FBA;
    v0_5 = (FUN_0c10558c((*(signed char *)((v0_0 + 0x1))))) == 0;
    if (v0_5) goto L_C058FBA;
    FUN_0c058c90((*(signed char *)((v0_0 + 0x1))));
    L_C058FBA:;
    v0_5 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(unsigned char *)((v0_5 + 0x0)) = v0_2;
    R7 = ((*(int *)((v0_3 + 0x0))));
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_C058FE8;
    R6 = (0x1);
    L_C058FEA:;
    FUN_0c03744a((*(int *)(((int)stk + 8))), 0x0, R6, R7);
    v0_5 = *(signed char *)((v0_0 + 0x1));
    FUN_0c17c130(((*(int *)(((int)stk + 8))) + 0x6C), 0xC241FA8, (0xC242010 + (((v0_5 << 1) + v0_5) << 2)));
    *(unsigned int *)(((int)stk + 24)) = 0xC242040;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    L_C059012:;
    FUN_0c03744a((*(int *)((((0xC4 + v0_0) + (*(int *)(((int)stk + 16)))) + 0x4))), 0x0, (*(int *)((((*(signed char *)(((*(int *)(((int)stk + 12))) + ((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0xE) + 0xC413CB8) + (*(int *)(((int)stk + 8))))))) << 2) + 0xC242144))), (*(int *)((v0_3 + 0x0))));
    v0_5 = *(int *)((((0xC4 + v0_0) + (*(int *)(((int)stk + 16)))) + 0x4));
    *(unsigned int *)(((int)stk + 20)) = v0_5;
    v0_6 = *(signed char *)((v0_0 + 0x1));
    FUN_0c17c130((v0_5 + 0x6C), 0xC241FA8, (v0_4 + (((v0_6 << 1) + v0_6) << 2)));
    FUN_0c17c130(((*(int *)(((int)stk + 20))) + 0x6C), ((*(int *)(((int)stk + 20))) + 0x6C), (*(int *)(((int)stk + 24))));
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0xC);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
    v0_5 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_5 + 0x2);
    if (((unsigned int)(v0_5 + 0x2) < (unsigned int)0xC)) goto L_C059012;
    v0_5 = (((struct oE4_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    FUN_0c03744a(v0_5, 0x0, 0x9, (*(int *)((v0_3 + 0x0))));
    v0_5 = *(signed char *)((v0_0 + 0x1));
    FUN_0c17c130(((*(int *)(((int)stk + 8))) + 0x6C), 0xC241FA8, (v0_4 + (((v0_5 << 1) + v0_5) << 2)));
    *(unsigned int *)(((int)stk + 16)) = 0xC242088;
    FUN_0c17c130(((*(int *)(((int)stk + 8))) + 0x6C), ((*(int *)(((int)stk + 8))) + 0x6C), 0xC242088);
    *(unsigned int *)(((int)stk + 8)) = ((((struct oE8_int *)(v0_0))->v));
    R7 = ((*(int *)((v0_3 + 0x0))));
    if (((*(signed char *)((((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0xE) + 0xC413CB8) + (*(int *)(((int)stk + 12)))) + 0xC))) == 0)) goto L_C0590F8;
    R6 = (0xA);
    L_C0590FA:;
    FUN_0c03744a((*(int *)(((int)stk + 8))), 0x0, R6, R7);
    v0_5 = *(signed char *)((v0_0 + 0x1));
    FUN_0c17c130(((*(int *)(((int)stk + 8))) + 0x6C), 0xC241FA8, (v0_4 + (((v0_5 << 1) + v0_5) << 2)));
    FUN_0c17c130(((*(int *)(((int)stk + 8))) + 0x6C), ((*(int *)(((int)stk + 8))) + 0x6C), (*(int *)(((int)stk + 16))));
    v0_5 = *(signed char *)((v0_0 + 0x1));
    R4 = (0x2);
    R5 = ((0xC5426C4 + ((((v0_5 << 2) + v0_5) << 2) << 1)));
    if ((((*(signed char *)(((0xC5426C4 + ((((v0_5 << 2) + v0_5) << 2) << 1)) + 0x5))) & 0x2) != 0)) goto L_C059140;
    if (!((((*(signed char *)((R5 + 0x6))) & R4) == 0))) goto L_C059140;
    v0_5 = *(int *)(((0xC4 + v0_0) + 0x20));
    *(unsigned short *)(((0x6 + (*(int *)(((0xC4 + v0_0) + 0x24)))) + 0x0)) = 0x201;
    *(unsigned short *)((v0_5 + 0x6)) = 0x201;
    v0_5 = *(int *)(((0xC4 + v0_0) + 0x24));
    v0_6 = *(int *)(((0xC4 + v0_0) + 0x20));
    (((struct o20_float *)(v0_5))->v) = 0.5f;
    (((struct o1C_float *)(v0_5))->v) = 0.5f;
    (((struct o18_float *)(v0_5))->v) = 0.5f;
    (((struct o20_float *)(v0_6))->v) = 0.5f;
    (((struct o1C_float *)(v0_6))->v) = 0.5f;
    (((struct o18_float *)(v0_6))->v) = 0.5f;
    R4 = (v0_6);
    goto L_C0591F6;
    L_C059140:;
    if (((*(short *)((v0_0 + 0x1E))) != 6)) goto L_C059172;
    v0_5 = *(signed char *)((v0_0 + 0x1));
    *(unsigned char *)(((int)stk + 8)) = v0_5;
    v0_6 = *(int *)(((int)stk + 12));
    v0_7 = *(short *)((v0_0 + 0x1E));
    *(unsigned int *)(((int)stk + 16)) = (((0xC413CB8 + ((short)v0_5 * (short)0xE)) + (v0_7 << 1)) + v0_6);
    *(int *)((int)stk + 4) = (((0xC413CB8 + ((short)v0_5 * (short)0xE)) + (v0_7 << 1)) + v0_6);
    *(unsigned char *)(((((0xC413CB8 + ((short)v0_5 * (short)0xE)) + (v0_7 << 1)) + v0_6) + 0x0)) = (FUN_0c105536((*(signed char *)(((int)stk + 8))), (*(signed char *)(((((0xC413CB8 + ((short)v0_5 * (short)0xE)) + (v0_7 << 1)) + v0_6) + 0x0))), 0x1));
    L_C059172:;
    v0_5 = *(int *)(((0xC4 + v0_0) + 0x20));
    *(unsigned short *)(((0x6 + (*(int *)(((0xC4 + v0_0) + 0x24)))) + 0x0)) = v0_2;
    *(unsigned short *)((v0_5 + 0x6)) = v0_2;
    v0_5 = *(int *)(((0xC4 + v0_0) + 0x24));
    v0_6 = *(int *)(((0xC4 + v0_0) + 0x20));
    (((struct o20_float *)(v0_5))->v) = 1.0f;
    (((struct o1C_float *)(v0_5))->v) = 1.0f;
    (((struct o18_float *)(v0_5))->v) = 1.0f;
    (((struct o20_float *)(v0_6))->v) = 1.0f;
    (((struct o1C_float *)(v0_6))->v) = 1.0f;
    (((struct o18_float *)(v0_6))->v) = 1.0f;
    R4 = (v0_5);
    L_C0591F6:;
    v0_5 = (((struct oEC_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 12)) = v0_5;
    *(unsigned char *)((v0_5 + 0x0)) = v0_2;
    if (((int)(*(short *)((v0_0 + 0x1E))) > (int)0x7)) goto L_C05924A;
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x0)) = v0_2;
    FUN_0c03744a((*(int *)(((int)stk + 12))), 0x0, 0xD, (*(int *)((v0_3 + 0x0))));
    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x6)) = 0x21F;
    v0_5 = *(signed char *)((v0_0 + 0x1));
    FUN_0c17c130(((*(int *)(((int)stk + 12))) + 0x6C), 0xC241FA8, (v0_4 + (((v0_5 << 1) + v0_5) << 2)));
    v0_4 = *(short *)((v0_0 + 0x1E));
    FUN_0c17c130(((*(int *)(((int)stk + 12))) + 0x6C), ((*(int *)(((int)stk + 12))) + 0x6C), (0xC242040 + (((v0_4 << 1) + v0_4) << 2)));
    L_C05924A:;
    v0_5 = (0x22);
    v0_4 = (0xC24217C);
    v0_6 = (0x19);
    if (((int)((((struct o22_short *)(v0_0))->v)) >= (int)0x19)) goto L_C059268;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x19;
    v0_5 = *(short *)((v0_0 + v0_5));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0x19;
    R5 = (v0_4);
    R6 = ((v0_4 + 0x10));
    R7 = (v0_5);
    L_C059276:;
    FUN_0c058a6e(((*(int *)(((int)stk + 12))) + 0x14), R5, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 4));
    v0_4 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_4 + 0x1);
    v0_5 = (0x22);
    if (((int)(short)(v0_4 + 0x1) <= (int)0x32)) goto L_C059292;
    *(unsigned short *)((v0_0 + v0_5)) = v0_1;
    L_C059292:;
    *(unsigned char *)((((((struct oE0_int *)(v0_0))->v)) + 0x0)) = v0_1;
    v0_4 = (0xC05AAB6);
    if (((*(short *)((v0_0 + 0x1E))) != 8)) goto L_C05936C;
    if (((*(short *)(((*(int *)((v0_0 + 0x10))) + 0x1E))) == 1)) goto L_C059300;
    v0_4 = *(int *)((v0_0 + 0x10));
    *(unsigned short *)((v0_4 + 0x1E)) = ((*(short *)((v0_4 + 0x1E))) | 0x1);
    *(unsigned char *)((((((struct oEC_int *)(v0_0))->v)) + 0x0)) = v0_2;
    FUN_0c03744a(((((struct oEC_int *)(v0_0))->v)), 0x0, 0xD, (*(int *)((v0_3 + 0x0))));
    v0_2 = (((struct oEC_int *)(v0_0))->v);
    (((struct o6C_float *)(v0_2))->v) = 27.0f;
    (((struct o70_float *)(v0_2))->v) = -140.0f;
    R4 = (v0_2);
    L_C059306:;
    v0_2 = (FUN_0c1055b4((*(signed char *)((v0_0 + 0x1))))) != 0;
    if (v0_2) goto L_C05931E;
    v0_2 = FUN_0c10558c((*(signed char *)((v0_0 + 0x1))));
    v0_5 = (v0_2);
    if ((v0_2 == 0)) goto L_C0593A4;
    L_C05931E:;
    v0_2 = (FUN_0c1055b4((*(signed char *)((v0_0 + 0x1))))) == 0;
    R4 = (0x0);
    if (v0_2) goto L_C059330;
    R5 = (0x4);
    L_C059332:;
    FUN_0c05aab6(R4, R5);
    if (((unsigned char)(*(signed char *)0xC541F3D) == 4)) goto L_C05935A;
    (((struct o15_uchar *)((*(int *)((v0_0 + 0x10)))))->v) = v0_1;
    return FUN_0c058bd4();
    L_C05935A:;
    (((struct o14_uchar *)((*(int *)((v0_0 + 0x10)))))->v) = 0x63;
    (((struct o15_uchar *)((*(int *)((v0_0 + 0x10)))))->v) = v0_1;
    v0_5 = (0x15);
    goto L_C0593A4;
    L_C059330:;
    R5 = (0x3);
    goto L_C059332;
    L_C059300:;
    *(unsigned char *)((((((struct oEC_int *)(v0_0))->v)) + 0x0)) = v0_1;
    goto L_C059306;
    L_C05936C:;
    v0_1 = FUN_0c104e26((*(signed char *)((v0_0 + 0x1))), 0x40);
    v0_5 = (v0_1);
    if ((v0_1 == 0)) goto L_C0593A4;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x8;
    v0_5 = ((FUN_0c05aab6(0x0, 0x6)));
    goto L_C0593A4;
    L_C059268:;
    v0_6 = v0_6;
    *(int *)((int)stk + 4) = v0_6;
    *(int *)((int)stk + 0) = 0x32;
    v0_5 = *(short *)((v0_0 + v0_5));
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    *(unsigned int *)(((int)stk + 0)) = 0x32;
    R5 = ((v0_4 + 0x10));
    R6 = (v0_4);
    R7 = (v0_5);
    goto L_C059276;
    L_C0590F8:;
    R6 = (0xB);
    goto L_C0590FA;
    L_C058FE8:;
    R6 = (0x0);
    goto L_C058FEA;
    L_C058F66:;
    v0_5 = ((v0_5 - 1));
    goto L_C058F68;
    L_C058F28:;
    R4 = (0x0);
    goto L_C058F2A;
    L_C058DB4:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    (((struct oAC_ushort *)(v0_0))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    (((struct o30_float *)(v0_0))->v) = -4.0f;
    FUN_0c1171f0(v0_0);
    FUN_0c03744a(((((struct oE0_int *)(v0_0))->v)), 0x0, 0xE, (*(int *)((v0_3 + 0x0))));
    v0_5 = (((struct oE0_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 12)) = v0_5;
    *(unsigned char *)((v0_5 + 0x0)) = v0_1;
    v0_5 = *(signed char *)((v0_0 + 0x1));
    FUN_0c17c130(((*(int *)(((int)stk + 12))) + 0x6C), 0xC241FA8, (v0_4 + (((v0_5 << 1) + v0_5) << 2)));
    *(unsigned int *)(((int)stk + 20)) = 0xC242040;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    L_C058E12:;
    FUN_0c03744a((*(int *)((((0xC4 + v0_0) + (*(int *)(((int)stk + 8)))) + 0x4))), 0x0, (*(int *)((((*(signed char *)((((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0xE) + 0xC413CB8) + (*(int *)(((int)stk + 12)))) + 0x0))) << 2) + 0xC242144))), (*(int *)((v0_3 + 0x0))));
    v0_5 = *(int *)((((0xC4 + v0_0) + (*(int *)(((int)stk + 8)))) + 0x4));
    *(unsigned int *)(((int)stk + 16)) = v0_5;
    v0_6 = *(signed char *)((v0_0 + 0x1));
    FUN_0c17c130((v0_5 + 0x6C), 0xC241FA8, (v0_4 + (((v0_6 << 1) + v0_6) << 2)));
    FUN_0c17c130(((*(int *)(((int)stk + 16))) + 0x6C), ((*(int *)(((int)stk + 16))) + 0x6C), (*(int *)(((int)stk + 20))));
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0xC);
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x4);
    v0_5 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (v0_5 + 0x2);
    if (((unsigned int)(v0_5 + 0x2) < (unsigned int)0xC)) goto L_C058E12;
    goto L_C058E80;
}

int FUN_0c0593b8(int a4, int a5)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x7, 0x1, 0xB);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC058D44;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        return FUN_0c058d44(t0);
    }
    return t0;
}

int FUN_0c0593ee(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return 0x14;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (*(float *)0xC05955C);
        FUN_0c1171f0(a4);
        if ((unsigned char)(*(signed char *)0xC541F3D) == 4) {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x69, ((((struct o8_int *)0xC4B4110)->v)));
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x68, ((((struct o8_int *)0xC4B4110)->v)));
            FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, 0x0, ((((struct oC_int *)0xC4B4110)->v)));
        } else {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x2, ((((struct o0_int *)0xC4B4110)->v)));
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0xF, ((((struct o0_int *)0xC4B4110)->v)));
            FUN_0c058c32();
        }
        t0 = 0x0;
        for (;;) {
            FUN_0c0593b8(t0, a4);
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
    }
    t0 = 0x0;
    if ((*(signed char *)((a4 + 0x15))) != 0) {
        t0 = 0x1;
    }
    (((struct oA8_uchar *)(a4))->v) = t0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    return 0x0;
}

int FUN_0c059536(int a4)
{
    register int t0;
    register int t1;

    (((struct oA8_uchar *)(a4))->v) = 0x0;
    t0 = FUN_0c05f770();
    if (t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = 0x2;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t0 = 0x16;
    } else {
        t1 = FUN_0c05f71a();
        t0 = t1;
        if (t1 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x1;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t0 = 0x16;
        }
    }
    return t0;
}

int FUN_0c0595a4(int a4)
{
    int stk[4];
    register int t0;
    register int t1;
    int t2;
    register int t18;
    register int t45;
    register int t66;
    register int t67;
    register int t68;
    register int t69;
    register int t77;
    register int t88;
    register int t89;
    register int t90;
    register int t91;
    register int t92;
    register int t95;
    register int t105;
    register int t106;
    register int t114;
    register int t130;
    register int t132;
    register int t133;
    register int t134;
    register int t135;
    register int t145;
    int t16;
    int t19;
    int t20;
    int t34;
    int t35;
    int t36;
    int t37;
    int t80;
    register int t81;
    register int t120;
    register int t121;
    register int t124;
    register int t125;
    register int t126;
    register int t139;
    register int t140;

    t0 = FUN_0c05f770();
    if (t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = 0x2;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        return 0x16;
    }
    t1 = FUN_0c05f71a();
    if (t1 == 0) {
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        return 0x16;
    }
    t2 = FUN_0c05f76a();
    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o18_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x4650;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((*(signed char *)((a4 + 0x2))) != 2) {
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, (t1 + 0x11), (*(int *)0xC4B4110));
        }
    }
    if (((*(signed char *)((a4 + 0x2))) != 2) && (t16 = *(signed char *)((a4 + 0x17)), t16 == 0)) {
        t18 = *(short *)((((((((t1 - 1) << 2) + (t1 - 1)) << 2) << 1) + 0xC542854) + 0x10));
        if (((((unsigned short)t18 & 0x200) != 0) && (t19 = *(short *)((((((((t1 - 1) << 2) + (t1 - 1)) << 2) << 1) + 0xC542854) + 0x14)), ((unsigned short)t19 & 128) != 0)) || (((0x80 & (unsigned short)t18) != 0) && (t20 = *(short *)((((((((t1 - 1) << 2) + (t1 - 1)) << 2) << 1) + 0xC542854) + 0x14)), ((unsigned short)t20 & 0x200) != 0))) {
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) ^ 0x1);
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
        }
    }
    if ((((t2 & 0x1) != 0) && (t34 = (((struct o0_short *)0xC542864)->v), t34 != 0)) || ((((0x2 & t2) != 0) && (t35 = (((struct o28_short *)0xC542864)->v), t35 != 0)) || ((((0x4 & t2) != 0) && (t36 = (((struct o0_short *)0xC5428B4)->v), t36 != 0)) || (((0x8 & t2) != 0) && (t37 = (((struct o28_short *)0xC5428B4)->v), t37 != 0))))) {
        (((struct o20_ushort *)(a4))->v) = 0x4650;
        *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
    } else {
        if (((((struct o20_short *)(a4))->v)) != 0) {
            t45 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t45 - 1);
            if ((short)(t45 - 1) == 0) {
                *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x1;
            }
        }
    }
    if ((*(signed char *)((a4 + 0x17))) != 0) {
        t67 = *(int *)(((0xC4 + a4) + 0x4));
        t68 = (((struct oC4_int *)(a4))->v);
        t66 = *(int *)(((0xC4 + a4) + 0x20));
        *(unsigned char *)((t67 + 0x0)) = 0x0;
        *(unsigned char *)((t68 + 0x0)) = 0x0;
        *(unsigned char *)((t66 + 0x0)) = 0x0;
        t69 = 0x0;
        for (;;) {
            if ((int)t69 >= (int)(*(int *)((0xC2421CC + ((*(signed char *)((a4 + 0x2))) << 2))))) {
                break;
            }
            t68 = t69;
            t68 = (t68 << 2);
            t68 = (t68 + (0xC4 + a4));
            t67 = (*(int *)((t68 + 0x8)));
            t69 = (t69 + 0x1);
            *(unsigned char *)((t67 + 0x0)) = 0x0;
        }
        t77 = 0xA8;
        if ((*(signed char *)(((*(int *)((a4 + 0x10))) + 0xA8))) == 0) {
            (((struct o17_uchar *)(a4))->v) = 0x0;
            (((struct o18_uchar *)(a4))->v) = 0x0;
            t77 = 0x18;
        }
        return t77;
    }
    if (((*(signed char *)((a4 + 0x2))) != 2) && (t80 = (int)(((unsigned int)((((t1 - 1) << 2) + (t1 - 1)) << 2)) >> 31), t81 = *(short *)((((((((t1 - 1) << 2) + (t1 - 1)) << 2) << 1) + 0xC542854) + 0x14)), ((unsigned short)t81 & 0x8000) != 0)) {
        return (FUN_0c05f42a(0x1));
    }
    if ((*(signed char *)((a4 + 0x18))) != 0) {
        return 0x18;
    }
    t89 = *(int *)(((0xC4 + a4) + 0x4));
    t90 = (((struct oC4_int *)(a4))->v);
    t88 = *(int *)(((0xC4 + a4) + 0x20));
    *(unsigned char *)((t89 + 0x0)) = 0x1;
    *(unsigned char *)((t90 + 0x0)) = 0x1;
    *(unsigned char *)((t88 + 0x0)) = 0x1;
    t91 = 0x0;
    for (;;) {
        t92 = *(signed char *)((a4 + 0x2));
        if ((int)t91 >= (int)(*(int *)((0xC2421CC + (t92 << 2))))) {
            break;
        }
        t90 = t91;
        t90 = (t90 << 2);
        t90 = (t90 + (0xC4 + a4));
        t89 = (*(int *)((t90 + 0x8)));
        t91 = (t91 + 0x1);
        *(unsigned char *)((t89 + 0x0)) = 0x1;
    }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t95 = (t92 << 2);
    for (;;) {
        if ((((int)0x1 << (int)(*(int *)(((int)stk + 8)))) & t2) != 0) {
            t95 = (*(short *)((a4 + 0x1C)));
            *(unsigned int *)(((int)stk + 12)) = t95;
            t95 = (*(signed char *)((a4 + 0x2)));
            t95 = (t95 << 2);
            t95 = (FUN_0c10547c((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), ((*(int *)((0xC2421CC + t95))) - 1)));
            *(unsigned short *)((a4 + 0x1C)) = t95;
            t95 = (*(short *)((a4 + 0x1C)));
            if ((*(int *)(((int)stk + 12))) == t95) {
                t105 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t105 + 0x1);
                if ((int)(t105 + 0x1) >= (int)0x4) {
                    break;
                }
                continue;
            }
            break;
        }
        t106 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t106 + 0x1);
        if ((int)(t106 + 0x1) >= (int)0x4) {
            break;
        }
    }
    t114 = (((struct oE4_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = t114;
    (((struct o70_float *)(t114))->v) = (*(float *)((0xC2421BC + ((*(short *)((a4 + 0x1C))) << 2))));
    if ((int)((((struct o22_short *)(a4))->v)) < (int)0x19) {
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x19;
        t120 = 0x0;
        t121 = 0x19;
        t124 = 0xC2422FC;
        t125 = 0xC24230C;
        t126 = ((((struct o22_short *)(a4))->v));
    } else {
        *(int *)((int)stk + 4) = 0x19;
        *(int *)((int)stk + 0) = 0x32;
        t120 = 0x19;
        t121 = 0x32;
        t124 = 0xC24230C;
        t125 = 0xC2422FC;
        t126 = ((((struct o22_short *)(a4))->v));
    }
    FUN_0c058a6e(((*(int *)(((int)stk + 8))) + 0x14), t124, t125, t126, t121, t120);
    t130 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t130 + 0x1);
    if ((int)(short)(t130 + 0x1) > (int)0x32) {
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t132 = 0x22;
    t133 = (short)(t130 + 0x1);
    t134 = 0x32;
    t135 = 0x0;
    for (;;) {
        if ((int)t135 >= (int)0x4) {
            break;
        }
        t133 = 0x1;
        t133 = ((int)t133 << (int)t135);
        if ((t133 & t2) != 0) {
            t133 = 0xC104E26;
            t132 = (FUN_0c104e26(t135, 0x101));
            if (t132 != 0) {
                *(unsigned int *)(((int)stk + 8)) = 0x1;
            }
        } else {
            t139 = t133;
            t140 = t134;
        }
        t135 = (t135 + 0x1);
        t133 = t139;
        t134 = t140;
    }
    if ((*(int *)(((int)stk + 8))) != 0) {
        t145 = *(int *)(((((*(short *)((a4 + 0x1C))) << 2) + (0xC2421E0 + (((*(signed char *)((a4 + 0x2))) << 2) << 2))) + 0x0));
        switch (t145) {
        case 6:
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            (((struct o15_uchar *)((*(int *)((a4 + 0x10)))))->v) = 0x1;
            break;
        case 1:
            FUN_0c05f42a(0x1);
            break;
        case 2:
            FUN_0c05f42a(0x2);
            break;
        case 3:
            FUN_0c05f42a(0x3);
            break;
        case 4:
            FUN_0c05f42a(0x4);
            break;
        }
        return FUN_0c05aab6(0x0, 0x3);
    }
    return t132;
}

int FUN_0c059946(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    (((struct o15_uchar *)((*(int *)((a4 + 0x10)))))->v) = 0x0;
    t0 = FUN_0c05f770();
    if (t0 == 0) {
        (((struct o15_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
        t0 = 0xE0;
    } else {
        if ((*(signed char *)((a4 + 0x16))) == 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t1 = 0x0;
            for (;;) {
                t2 = ((0xC4 + a4) + t1);
                t1 = (t1 + 0x4);
                *(unsigned char *)(((*(int *)((t2 + 0x0))) + 0x0)) = 0x0;
                if ((unsigned int)t1 >= (unsigned int)0x24) {
                    break;
                }
            }
            *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x1;
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x5);
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x168) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
        }
        u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
        u1 = 0.800000012f;
        u1 = u1 + 0.5f * u0;
        u0 = u1;
        if (u1 > 1.0f) {
            u0 = 1.0f;
        }
        u1 = u0;
        if (0.0f > u0) {
            u1 = 0.0f;
        }
        (((struct o14_float *)(((((struct oE0_int *)(a4))->v))))->v) = u1;
        t0 = 0x14;
    }
    return t0;
}


int FUN_0c059bd6(int a4)
{
    int stk[1];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c03f444(0x7, 0x0, 0x9);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC059A28;
        *(unsigned char *)((t0 + 0x2)) = (*(int *)(((int)stk + 0)));
        return FUN_0c059a28(t0);
    }
    return t0;
}

int FUN_0c059c16(int a4, int a5)
{
    register int t3;

    if ((int)(*(int *)((((((a4 << 1) + a4) << 2) + 0xC1C2318) + (a5 << 2)))) >= 0) {
        t3 = *(signed char *)0xC541F3D;
        if ((unsigned char)t3 != 1) {
            return FUN_0c05ae28((*(int *)(((((((a4 << 1) + a4) << 2) + 0xC1C2318) + (a5 << 2)) + 0x0))));
        }
        return (unsigned char)t3;
    }
    return (a5 << 2);
}
