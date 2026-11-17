/* game/unsorted: functions 0C082AA4-0C082F8A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3724_uchar { char p[0x3724]; unsigned char v; };
struct o3726_uchar { char p[0x3726]; unsigned char v; };
struct o3727_uchar { char p[0x3727]; unsigned char v; };
struct o372B_uchar { char p[0x372B]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3742_uchar { char p[0x3742]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37BC_float { char p[0x37BC]; float v; };
struct o3820_ushort { char p[0x3820]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o38DC_uchar { char p[0x38DC]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
int FUN_0c037bf6(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c067734(int);
int math_angle_between_points_xz(int, int);
int FUN_0c07d6cc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c082aa4(int a4, int a5);
int FUN_0c082cb2(int a4, int a5);

int FUN_0c082aa4(int a4, int a5)
{
    int stk[4];
    register int t25;
    register int t38;
    register int t69;
    int t8;
    int t26;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0xF;
    FUN_0c067734(a4);
    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    (((struct o3747_uchar *)(a4))->v) = 0x4;
    (((struct o37A4_float *)(a4))->v) = 0.0f;
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x1;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)((a4 + 0x371D))) == 2) {
        (((struct o16_uchar *)(a4))->v) = 0x2;
        *(int *)((int)stk + 8) = 0x5A;
        *(int *)((int)stk + 4) = 0x4;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        t69 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x5A, 0xFFFFFFFF, 0x4, 0x5A));
    } else {
        if ((((((struct o37BC_float *)(a4))->v)) == 0.0f) && (t8 = *(signed char *)((a4 + 0x3742)), t8 == 0)) {
            if ((*(signed char *)((a4 + 0x372C))) == 1) {
                *(volatile signed char *)((a4 + 0x2));
                *(int *)((int)stk + 8) = 0x38;
                *(int *)((int)stk + 4) = 0x4;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x38, 0xFFFFFFFF, 0x4, 0x38);
            } else {
                *(volatile signed char *)((a4 + 0x2));
                *(int *)((int)stk + 8) = 0x37;
                *(int *)((int)stk + 4) = 0x4;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x37, 0xFFFFFFFF, 0x4, 0x37);
            }
            (((struct o20_ushort *)(a4))->v) = 0x0;
        } else {
            if ((*(signed char *)((a4 + 0x3742))) != 0) {
                (((struct o37BC_float *)(a4))->v) = (*(float *)((0xC25AFA8 + ((*(signed char *)((a4 + 0x2))) << 2))));
            }
            t25 = FUN_0c07ebd0(a4);
            if ((t25 == 0) && (t26 = *(signed char *)(((int)stk + 12)), t26 == 0)) {
                if ((*(signed char *)((a4 + 0x372C))) == 1) {
                    *(volatile signed char *)((a4 + 0x2));
                    *(int *)((int)stk + 8) = 0x38;
                    *(int *)((int)stk + 4) = 0x4;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x38, 0xFFFFFFFF, 0x4, 0x38);
                } else {
                    *(volatile signed char *)((a4 + 0x2));
                    *(int *)((int)stk + 8) = 0x37;
                    *(int *)((int)stk + 4) = 0x4;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x37, 0xFFFFFFFF, 0x4, 0x37);
                }
                (((struct o20_ushort *)(a4))->v) = 0xA;
            } else {
                *(int *)((int)stk + 8) = 0x39;
                *(int *)((int)stk + 4) = 0x4;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x39, 0xFFFFFFFF, 0x4, 0x39);
                *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d6cc(a4));
                (((struct o16_uchar *)(a4))->v) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x4;
                t38 = *(signed char *)(((int)stk + 12));
                switch (t38) {
                case 0:
                    *(unsigned int *)((a4 + 0x38)) = ((unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4))) & 0xFFFF);
                    break;
                case 1:
                    *(unsigned short *)((a4 + 0x1E)) = 0x14;
                    break;
                case 2:
                    *(unsigned short *)((a4 + 0x1E)) = 0x14;
                    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
                    break;
                }
            }
        }
        (((struct o372C_uchar *)(a4))->v) = 0x0;
        t69 = 0x372C;
    }
    return t69;
}

int FUN_0c082cb2(int a4, int a5)
{
    int stk[14];
    int t2;
    register int t26;
    register int t27;
    register int t60;
    register int t61;
    register int t62;
    register int t63;
    register int t64;
    register float u86;
    register int t102;
    register int t103;
    register int t104;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x10;
    (((struct o3742_uchar *)(a4))->v) = 0x0;
    FUN_0c067734(a4);
    (((struct o20_ushort *)(a4))->v) = (*(signed char *)(((int)stk + 12)));
    t2 = *(signed char *)(((int)stk + 12));
    if (t2 != 0) {
        if ((t2 != 4) && (t2 != 9)) {
            t104 = t2;
            if (t2 == 5) {
            } else {
                if (t2 == 6) {
                    if (((((struct o160_float *)(a4))->v)) != 0.0f) {
                        *(int *)((int)stk + 8) = 0xA;
                        *(int *)((int)stk + 4) = 0x0;
                        *(int *)((int)stk + 0) = 0xFFFFFFFF;
                        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0xA, 0xFFFFFFFF, 0x0, 0xA);
                    } else {
                        *(int *)((int)stk + 8) = 0xB;
                        *(int *)((int)stk + 4) = 0x0;
                        *(int *)((int)stk + 0) = 0xFFFFFFFF;
                        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0xB, 0xFFFFFFFF, 0x0, 0xB);
                    }
                    *(unsigned short *)((a4 + 0x1C)) = 0x10;
                    t104 = 0x10;
                } else {
                    t104 = t2;
                    if (t2 == 7) {
                    } else {
                        if (t2 == 8) {
                            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 40.0f);
                            *(int *)((int)stk + 8) = 0x3C;
                            *(int *)((int)stk + 4) = 0x4;
                            *(int *)((int)stk + 0) = 0xFFFFFFFF;
                            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3C, 0xFFFFFFFF, 0x4, 0x3C);
                            FUN_0c037bf6(a4);
                            (((struct o50_float *)(a4))->v) = 28.0f;
                            (((struct o5C_float *)(a4))->v) = -2.0f;
                            if (((((struct o3770_int *)(a4))->v)) != 0) {
                                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38))) - 16384);
                            }
                            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * 9.0f));
                            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * 9.0f));
                            (((struct o60_float *)(a4))->v) = 0.0f;
                            (((struct o58_float *)(a4))->v) = 0.0f;
                            (((struct o372B_uchar *)(a4))->v) = 0x0;
                            (((struct oA4_uint *)(a4))->v) = 0x0;
                            t104 = 0xA4;
                        } else {
                            FUN_0c07e868(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
                            t26 = (((struct o118_int *)(a4))->v);
                            (((struct o98_float *)(t26))->v) = 8.0f;
                            (((struct o94_float *)(t26))->v) = 8.0f;
                            t27 = (((struct o11C_int *)(a4))->v);
                            (((struct o98_float *)(t27))->v) = 8.0f;
                            (((struct o94_float *)(t27))->v) = 8.0f;
                            *(unsigned short *)((a4 + 0x1C)) = 0x8;
                            *(unsigned short *)((a4 + 0x1E)) = 0x0;
                            (((struct o3820_ushort *)(a4))->v) = 0x5;
                            t104 = 0x3820;
                        }
                    }
                }
            }
        } else {
            *(int *)((int)stk + 8) = 0x3C;
            *(int *)((int)stk + 4) = 0x4;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3C, 0xFFFFFFFF, 0x4, 0x3C);
            t60 = *(int *)(((0x118 + a4) + 0x4));
            t61 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t60))->v) = 1.0f;
            (((struct o9C_float *)(t60))->v) = 1.0f;
            (((struct oA0_float *)(t61))->v) = 1.0f;
            (((struct o9C_float *)(t61))->v) = 1.0f;
            t62 = *(int *)(((0x118 + a4) + 0x4));
            t63 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t62))->v) = 1.0f;
            (((struct o98_float *)(t63))->v) = 1.0f;
            (((struct o94_float *)(t62))->v) = 1.0f;
            (((struct o94_float *)(t63))->v) = 1.0f;
            (((struct o3820_ushort *)(a4))->v) = 0x5;
            t64 = FUN_0c07ebd0(a4);
            if (t64 != 0) {
                *(unsigned int *)((a4 + 0x38)) = (unsigned short)(((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4))) + 0x8000);
            } else {
                if (t2 == 4) {
                    *(float *)(((int)stk + 16)) = (((((struct o28_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
                    *(float *)(((int)stk + 20)) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
                    *(float *)(((int)stk + 24)) = (((((struct o30_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
                    *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (((int)stk + 12) + 0x4)));
                } else {
                    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
                }
            }
            u86 = (((struct o8_float *)0xC25BC74)->v);
            (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC25BC74)->v));
            (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC25BC74)->v));
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * u86));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * u86));
            (((struct o3724_uchar *)(a4))->v) = 0x0;
            (((struct o3726_uchar *)(a4))->v) = 0x0;
            (((struct o3727_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0xF;
            (((struct o38DC_uchar *)(a4))->v) = 0xA;
            t104 = 0x38DC;
        }
    } else {
        FUN_0c07e868(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
        t102 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t102))->v) = 8.0f;
        (((struct o94_float *)(t102))->v) = 8.0f;
        t103 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t103))->v) = 8.0f;
        (((struct o94_float *)(t103))->v) = 8.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o3820_ushort *)(a4))->v) = 0x5;
        t104 = 0x3820;
    }
    return t104;
}
