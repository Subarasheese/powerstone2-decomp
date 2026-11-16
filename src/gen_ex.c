/* Straight-line functions with calls and guards (batch gen_ex): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o10C_int { char p[0x10C]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c0582de(int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c05a396(int);
int FUN_0c05ab24(int, int, int);
int FUN_0c05aeac(void);
int FUN_0c05f22c(int);
int FUN_0c05f254(int);
int FUN_0c07e420(int, int);
int FUN_0c0ab4b4(int);
int FUN_0c0ab590(int, int, int);
int FUN_0c0ab734(int);
int FUN_0c0ab888(int);
int FUN_0c0ab968(int, int, int);
int FUN_0c0abb0c(int);
int FUN_0c0c3a60(int, int);
int FUN_0c0c3aac(int);
int FUN_0c0e1b20(int);
int FUN_0c0e2116(int);
int FUN_0c0e2358(int);
int FUN_0c0e2390(int, int, int);
int FUN_0c0fcbba(int);
int FUN_0c0fcce4(int);
int FUN_0c0fcd34(int);
int FUN_0c104f7c(int, int);
int FUN_0c1171f0(int);
int FUN_0c18778c(int, int, int, int, float);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0c3ae8(int a4, int a5, int a6);
int FUN_0c0fcd90(int a4, int a5, int a6, int a7);
int FUN_0c0ebe94(int a4, float f4, float f5);
int FUN_0c0e1b9a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c04d126(int a4, int a5, int a6);
int FUN_0c0ab808(int a4, int a5, int a6, int a7);
int FUN_0c0abbe0(int a4, int a5, int a6, int a7);

int FUN_0c0c3ae8(int a4, int a5, int a6)
{
    register int t28;
    register int t82;

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R10;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_3 = a5;
    v0_2 = a6;
    v0_1 = ((int (*)(int, int, int))(FUN_0c187798))((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532498), v0_3, v0_2);
    v0_1 = ((int (*)(void))(FUN_0c187798))();
    v0_5 = *(signed char *)((v0_0 + 0x41C));
    v0_6 = ((unsigned char)v0_5);
    v0_4 = (0x4000);
    v0_1 = (v0_0);
    v0_3 = (0xC2738B8);
    v0_2 = (0x0);
    w0_0 = (0.0f);
    w0_1 = (-22.0f);
    if (((unsigned char)v0_5 == 0xC3)) goto L_C0C3B4E;
    if ((v0_6 == 71)) goto L_C0C3BA0;
    if ((v0_6 == 63)) goto L_C0C3C1A;
    if ((v0_6 != 37)) goto L_C0C3B42;
    if (((*(signed char *)((v0_0 + 0x3753))) != -1)) goto L_C0C3D84;
    v0_5 = (((struct o3818_short *)(v0_0))->v);
    v0_6 = ((unsigned short)v0_5);
    if (((unsigned short)v0_5 == 0x219)) goto L_C0C3CE6;
    if ((v0_6 == 0x341)) goto L_C0C3CE6;
    if ((v0_6 == 0x342)) goto L_C0C3CE6;
    if ((v0_6 != 0x343)) goto L_C0C3D84;
    L_C0C3CE6:;
    (((struct o28_float *)(v0_1))->v) = 17.0f;
    (((struct o2C_float *)(v0_1))->v) = w0_1;
    (((struct o30_float *)(v0_1))->v) = w0_0;
    *(unsigned int *)((v0_1 + 0x34)) = v0_4;
    *(unsigned int *)((v0_1 + 0x38)) = v0_4;
    *(unsigned int *)((v0_1 + 0x3C)) = v0_2;
    L_C0C3DEE:;
    v0_4 = *(signed char *)((v0_1 + 0x41C));
    (((struct oA4_uint *)(v0_1))->v) = ((*(int *)(((((*(signed char *)(((v0_3 + ((unsigned short)(unsigned char)v0_4 * (unsigned short)0x34)) + 0x18))) << 2) + (0xC4 + v0_0)) + 0x0))) + 0x28);
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(((((struct oC4_int *)(v0_1))->v)), (v0_3 + ((unsigned short)(unsigned char)v0_4 * (unsigned short)0x34)), v0_2);
    v0_6 = ((((int (*)(int))(FUN_0c187798))(t28)));
    L_C0C3E2E:;
    return v0_6;
    L_C0C3D84:;
    (((struct o28_float *)(v0_1))->v) = ((((struct o1C_float *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + v0_3)))->v));
    (((struct o2C_float *)(v0_1))->v) = ((((struct o20_float *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + v0_3)))->v));
    (((struct o30_float *)(v0_1))->v) = ((((struct o24_float *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + v0_3)))->v));
    *(unsigned int *)((v0_1 + 0x34)) = (*(int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + v0_3) + 0x28)));
    *(unsigned int *)((v0_1 + 0x38)) = (*(int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + v0_3) + 0x2C)));
    *(unsigned int *)((v0_1 + 0x3C)) = (*(int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + v0_3) + 0x30)));
    goto L_C0C3DEE;
    L_C0C3B42:;
    if ((v0_6 != 67)) goto L_C0C3B4A;
    w0_0 = (6.0f);
    if (((*(signed char *)((v0_0 + 0x3753))) != -1)) goto L_C0C3D84;
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) != 0x3AE)) goto L_C0C3D2C;
    v0_4 = (((struct o118_int *)(v0_0))->v);
    w0_1 = (((struct o8C_float *)(v0_4))->v);
    w0_2 = (w0_1);
    if ((w0_0 > w0_1)) goto L_C0C3D2C;
    if ((40.0f > w0_2)) goto L_C0C3D56;
    L_C0C3D2C:;
    if (((*(signed char *)((v0_0 + 0x3753))) != -1)) goto L_C0C3D84;
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) != 0x3AF)) goto L_C0C3D84;
    v0_4 = (((struct o118_int *)(v0_0))->v);
    w0_1 = (((struct o8C_float *)(v0_4))->v);
    w0_2 = (w0_1);
    if ((w0_0 > w0_1)) goto L_C0C3D84;
    if ((!(39.0f > w0_2))) goto L_C0C3D84;
    L_C0C3D56:;
    v0_6 = ((FUN_0c0c3aac(v0_1)));
    goto L_C0C3E2E;
    L_C0C3B4A:;
    goto L_C0C3D84;
    L_C0C3C1A:;
    w0_2 = (-2.0f);
    if (((*(signed char *)((v0_0 + 0x3715))) != 36)) goto L_C0C3C46;
    (((struct o28_float *)(v0_1))->v) = w0_2;
    (((struct o2C_float *)(v0_1))->v) = w0_1;
    (((struct o30_float *)(v0_1))->v) = w0_0;
    *(unsigned int *)((v0_1 + 0x34)) = v0_4;
    *(unsigned int *)((v0_1 + 0x38)) = 0xC000;
    *(unsigned int *)((v0_1 + 0x3C)) = v0_2;
    (((struct oA4_uint *)(v0_1))->v) = (((((struct oF4_int *)(v0_0))->v)) + 0x28);
    v0_6 = (0xA4);
    goto L_C0C3E2E;
    L_C0C3C46:;
    if (((*(signed char *)((v0_0 + 0x3753))) == -1)) goto L_C0C3C52;
    goto L_C0C3D84;
    L_C0C3C52:;
    v0_4 = (((struct o3818_short *)(v0_0))->v);
    v0_2 = ((unsigned short)v0_4);
    if (((unsigned short)v0_4 == 0)) goto L_C0C3C66;
    if ((v0_2 == 0x381)) goto L_C0C3C66;
    goto L_C0C3D84;
    L_C0C3C66:;
    (((struct o28_float *)(v0_1))->v) = -20.0f;
    (((struct o2C_float *)(v0_1))->v) = w0_2;
    (((struct o30_float *)(v0_1))->v) = w0_2;
    *(unsigned int *)((v0_1 + 0x34)) = 0xCE00;
    *(unsigned int *)((v0_1 + 0x38)) = 0xA200;
    *(unsigned int *)((v0_1 + 0x3C)) = 0x3100;
    goto L_C0C3DEE;
    L_C0C3BA0:;
    v0_3 = (((struct oC4_int *)(v0_1))->v);
    *(unsigned char *)((v0_3 + 0x0)) = 0x1;
    (((struct o6C_float *)(v0_3))->v) = w0_0;
    (((struct o70_float *)(v0_3))->v) = -9.0f;
    (((struct o74_float *)(v0_3))->v) = 10.0f;
    (((struct o78_uint *)(v0_3))->v) = 0x800;
    (((struct o80_uint *)(v0_3))->v) = v0_2;
    (((struct o7C_uint *)(v0_3))->v) = v0_2;
    (((struct o68_uint *)(v0_3))->v) = (((((struct o100_int *)(v0_0))->v)) + 0x28);
    v0_3 = (((struct oC8_int *)(v0_1))->v);
    *(unsigned char *)((v0_3 + 0x0)) = 0x1;
    (((struct o6C_float *)(v0_3))->v) = w0_0;
    (((struct o70_float *)(v0_3))->v) = -9.0f;
    (((struct o74_float *)(v0_3))->v) = 10.0f;
    (((struct o78_uint *)(v0_3))->v) = 0x800;
    (((struct o80_uint *)(v0_3))->v) = v0_2;
    (((struct o7C_uint *)(v0_3))->v) = v0_2;
    (((struct o68_uint *)(v0_3))->v) = (((((struct o10C_int *)(v0_0))->v)) + 0x28);
    *(volatile signed char *)((v0_1 + 0x1));
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_0, v0_3, v0_2);
    *(unsigned int *)((v0_1 + 0x3C)) = t82;
    *(unsigned int *)((v0_1 + 0x38)) = t82;
    *(unsigned int *)((v0_1 + 0x34)) = t82;
    v0_6 = (v0_0);
    goto L_C0C3E2E;
    L_C0C3B4E:;
    v0_0 = *(signed char *)((v0_1 + 0x424));
    v0_6 = ((FUN_0c0c3a60(v0_1, (*(signed char *)(((((v0_0 << 2) + v0_0) << 1) + 0xC278841))))));
    goto L_C0C3E2E;
}

int FUN_0c0fcd90(int a4, int a5, int a6, int a7)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
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
    v0_1 = a4;
    v0_5 = a5;
    v0_6 = a6;
    v0_7 = a7;
    v0_5 = *(signed char *)((v0_1 + 0x14));
    v0_4 = (v0_5);
    v0_3 = (0xC4B410C);
    v0_0 = (0xC03744A);
    v0_0 = ((0x41C + v0_1));
    v0_1 = (v0_1);
    v0_2 = (0xC05F22C);
    v0_2 = (0x0);
    if ((v0_5 == 0)) goto L_C0FCDC0;
    if ((v0_4 == 1)) goto L_C0FCE22;
    L_C0FD0B6:;
    return v0_4;
    L_C0FCE22:;
    if (((*(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C))) == 1)) goto L_C0FCE2E;
    (((struct oA8_uchar *)(v0_1))->v) = v0_2;
    v0_4 = (0xA8);
    goto L_C0FD0B6;
    L_C0FCE2E:;
    v0_4 = *(signed char *)0xC5429B2;
    v0_5 = (FUN_0c05f22c(0x200)) == 0;
    v0_4 = ((v0_4 + 0xD));
    if (v0_5) goto L_C0FCE78;
    *(unsigned char *)((v0_0 + 0x5)) = ((*(signed char *)((v0_0 + 0x5))) - 1);
    if (((int)(*(signed char *)((v0_0 + 0x5))) >= 0)) goto L_C0FCE94;
    *(unsigned char *)((v0_0 + 0x5)) = v0_4;
    L_C0FCE94:;
    FUN_0c0fcd34(v0_1);
    L_C0FCE98:;
    v0_4 = *(int *)((((*(signed char *)((v0_0 + 0x5))) << 2) + 0xC1FB5EC));
    v0_5 = (FUN_0c05f22c(0xC00)) == 0;
    v0_4 = (v0_4);
    if (v0_5) goto L_C0FCEBA;
    *(unsigned char *)((v0_0 + 0x0)) = (FUN_0c104f7c((*(signed char *)((v0_0 + 0x0))), ((*(signed char *)((v0_0 + 0x2))) - 1)));
    L_C0FCF12:;
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    v0_6 = (FUN_0c05f254(0x800)) == 0;
    v0_5 = (0x0);
    if (v0_6) goto L_C0FCF2A;
    v0_6 = (0x1C);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    L_C0FCF2E:;
    FUN_0c03744a(((((struct oD8_int *)(v0_1))->v)), v0_5, v0_6, v0_7);
    v0_6 = (FUN_0c05f254(0x100)) == 0;
    v0_5 = (0x0);
    if (v0_6) goto L_C0FCF48;
    v0_6 = (0x1D);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    L_C0FCF4C:;
    FUN_0c03744a(((((struct oDC_int *)(v0_1))->v)), v0_5, v0_6, v0_7);
    v0_6 = (FUN_0c05f254(0x40)) == 0;
    v0_5 = (0x0);
    if (v0_6) goto L_C0FCF90;
    v0_6 = (0x1E);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    L_C0FCF94:;
    FUN_0c03744a(((((struct oE0_int *)(v0_1))->v)), v0_5, v0_6, v0_7);
    v0_6 = (FUN_0c05f254(0x400)) == 0;
    v0_5 = (0x0);
    if (v0_6) goto L_C0FCFAE;
    v0_6 = (0x1F);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    L_C0FCFB2:;
    FUN_0c03744a(((((struct oE4_int *)(v0_1))->v)), v0_5, v0_6, v0_7);
    *(unsigned int *)(((int)stk + 8)) = (((((((v0_4 << 1) + v0_4) << 2) << 2) << 2) << 1) + 0xC28EE10);
    if (((*(int *)((((((*(signed char *)((v0_0 + 0x0))) << 2) << 1) + (((((((v0_4 << 1) + v0_4) << 2) << 2) << 2) << 1) + 0xC28EE10)) + 0x4))) == -1)) goto L_C0FD08C;
    FUN_0c03744a(((((struct oF4_int *)(v0_1))->v)), 0x0, (*(int *)((((((*(signed char *)((v0_0 + 0x0))) << 2) << 1) + (*(int *)(((int)stk + 8)))) + 0x4))), (*(int *)((v0_3 + 0x0))));
    *(unsigned char *)((((((struct oF4_int *)(v0_1))->v)) + 0x0)) = 0x1;
    v0_5 = (((struct oF4_int *)(v0_1))->v);
    *(unsigned short *)((v0_5 + 0x6)) = ((*(short *)((v0_5 + 0x6))) | 0x400);
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0xA;
    FUN_0c058a6e((((((struct oF4_int *)(v0_1))->v)) + 0x14), 0xC28EB38, 0xC28EB28, ((((struct o20_short *)(v0_1))->v)), 0xA, 0x0);
    if ((((((struct o20_short *)(v0_1))->v)) != 0)) goto L_C0FD092;
    *(unsigned int *)(((int)stk + 8)) = (((((((v0_4 << 1) + v0_4) << 2) << 2) << 2) << 1) + 0xC28EE10);
    if (((*(int *)((((((*(signed char *)((v0_0 + 0x1))) << 2) << 1) + (((((((v0_4 << 1) + v0_4) << 2) << 2) << 2) << 1) + 0xC28EE10)) + 0x4))) == -1)) goto L_C0FD064;
    FUN_0c03744a(((((struct oF4_int *)(v0_1))->v)), 0x0, (*(int *)((((((*(signed char *)((v0_0 + 0x1))) << 2) << 1) + (*(int *)(((int)stk + 8)))) + 0x4))), (*(int *)((v0_3 + 0x0))));
    L_C0FD064:;
    v0_3 = (((struct oF4_int *)(v0_1))->v);
    *(unsigned short *)((v0_3 + 0x6)) = ((*(short *)((v0_3 + 0x6))) | 0x400);
    v0_3 = v0_2;
    *(int *)((int)stk + 4) = v0_3;
    *(int *)((int)stk + 0) = 0xA;
    FUN_0c058a6e((((((struct oF4_int *)(v0_1))->v)) + 0x14), 0xC28EB28, 0xC28EB38, ((((struct o20_short *)(v0_1))->v)), 0xA, v0_3);
    L_C0FD092:;
    v0_3 = *(signed char *)((v0_0 + 0x1));
    v0_4 = (v0_3);
    if ((v0_3 == (*(signed char *)((v0_0 + 0x0))))) goto L_C0FD0B6;
    v0_3 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_3 + 0x1);
    v0_4 = (0x20);
    if (((int)(short)(v0_3 + 0x1) <= (int)0xA)) goto L_C0FD0B6;
    *(unsigned short *)((v0_1 + v0_4)) = v0_2;
    v0_1 = *(signed char *)((v0_0 + 0x0));
    *(unsigned char *)((v0_0 + 0x1)) = v0_1;
    v0_4 = (v0_1);
    goto L_C0FD0B6;
    L_C0FD08C:;
    *(unsigned char *)((((((struct oF4_int *)(v0_1))->v)) + 0x0)) = v0_2;
    goto L_C0FD092;
    L_C0FCFAE:;
    v0_6 = (0x23);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    goto L_C0FCFB2;
    L_C0FCF90:;
    v0_6 = (0x22);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    goto L_C0FCF94;
    L_C0FCF48:;
    v0_6 = (0x21);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    goto L_C0FCF4C;
    L_C0FCF2A:;
    v0_6 = (0x20);
    v0_7 = ((*(int *)((v0_3 + 0x0))));
    goto L_C0FCF2E;
    L_C0FCEBA:;
    v0_5 = (FUN_0c05f22c(0x100)) == 0;
    if (v0_5) goto L_C0FCF04;
    if (((*(signed char *)((v0_0 + 0x6))) == (*(signed char *)((v0_0 + 0x5))))) goto L_C0FCED8;
    *(unsigned char *)((v0_0 + 0x6)) = (*(signed char *)((v0_0 + 0x5)));
    FUN_0c05a396(v0_4);
    L_C0FCED8:;
    FUN_0c05ab24((*(int *)((((((((((v0_4 << 1) + v0_4) << 2) << 2) << 2) << 1) + 0xC28EE10) + (((*(signed char *)((v0_0 + 0x0))) << 2) << 1)) + 0x0))), 0x0, v0_4);
    goto L_C0FCF12;
    L_C0FCF04:;
    v0_5 = (FUN_0c05f22c(0x40)) == 0;
    if (v0_5) goto L_C0FCF12;
    FUN_0c05aeac();
    goto L_C0FCF12;
    L_C0FCE78:;
    v0_5 = (FUN_0c05f22c(0x80)) == 0;
    if (v0_5) goto L_C0FCE98;
    *(unsigned char *)((v0_0 + 0x5)) = ((*(signed char *)((v0_0 + 0x5))) + 0x1);
    if (((int)(*(signed char *)((v0_0 + 0x5))) <= (int)v0_4)) goto L_C0FCE94;
    *(unsigned char *)((v0_0 + 0x5)) = v0_2;
    goto L_C0FCE94;
    L_C0FCDC0:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    (((struct oAC_ushort *)(v0_1))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    (((struct o30_float *)(v0_1))->v) = (1.0f + 1.0f);
    FUN_0c1171f0(v0_1);
    *(unsigned char *)((v0_0 + 0x5)) = v0_2;
    *(unsigned char *)((v0_0 + 0x6)) = 0x63;
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x0, 0x2, (*(int *)((v0_3 + 0x0))));
    FUN_0c03744a(((((struct oEC_int *)(v0_1))->v)), 0x0, 0x15, (*(int *)((v0_3 + 0x0))));
    FUN_0c03744a(((((struct oF0_int *)(v0_1))->v)), 0x0, 0x16, (*(int *)((v0_3 + 0x0))));
    FUN_0c0fcce4(v0_1);
    FUN_0c0fcbba(v0_1);
    FUN_0c0fcd34(v0_1);
    goto L_C0FCE22;
}

int FUN_0c0ebe94(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            thunk_FUN_0c05abb2(0x4C, (a4 + 0x28));
            return FUN_0c03f346(a4);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) + 0x64);
        }
        FUN_0c07e420(a4, 0x7);
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o2C_float *)(a4))->v) = 3600.0f;
        FUN_0c187798();
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                        t2 = (short)(t1 - 1);
                        if ((int)(short)(t1 - 1) <= (int)0x78) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t2 = 0x15;
                        }
                        t1 = t2;
                    } else {
                        if (t0 == 5) {
                            t2 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                            t3 = (short)(t2 - 1);
                            if ((short)(t2 - 1) == 0) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                (((struct o12A_ushort *)(a4))->v) = 0xF;
                                t3 = (FUN_0c07e420(a4, 0x7));
                            }
                            t2 = t3;
                        } else {
                            if (t0 == 6) {
                                u0 = (((struct o2C_float *)(a4))->v);
                                (((struct o2C_float *)(a4))->v) = (u0 - 30.0f);
                                t3 = 0x2C;
                                if (!((u0 - 30.0f) > 3600.0f)) {
                                    (((struct o2C_float *)(a4))->v) = 3600.0f;
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    t2 = 0x1E;
                                    if ((*(signed char *)((a4 + 0x131))) != 0) {
                                        t2 = 0xA;
                                    }
                                    *(unsigned short *)((a4 + 0x1E)) = t2;
                                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                                    t3 = (thunk_FUN_0c05abb2(0x45, (a4 + 0x28)));
                                }
                                t2 = t3;
                            } else {
                                t3 = t0;
                                if (t0 == 7) {
                                    if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                                        t0 = (((struct oC4_int *)(a4))->v);
                                        t3 = t0;
                                        u0 = (((((struct o6C_float *)(t0))->v)) + 3.0f);
                                    } else {
                                        t0 = (((struct oC4_int *)(a4))->v);
                                        t3 = t0;
                                        u0 = (((((struct o6C_float *)(t0))->v)) - 3.0f);
                                    }
                                    (((struct o6C_float *)(t3))->v) = u0;
                                    if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                                        t0 = (((struct oC4_int *)(a4))->v);
                                        t3 = t0;
                                        u0 = (((((struct o74_float *)(t0))->v)) + 3.0f);
                                    } else {
                                        t0 = (((struct oC4_int *)(a4))->v);
                                        t3 = t0;
                                        u0 = (((((struct o74_float *)(t0))->v)) - 3.0f);
                                    }
                                    (((struct o74_float *)(t3))->v) = u0;
                                    t0 = *(short *)((a4 + 0x1E));
                                    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                                    t3 = (short)(t0 - 1);
                                    if ((int)(short)(t0 - 1) <= 0) {
                                        (((struct o15_uchar *)(a4))->v) = 0x1;
                                        t0 = 0x190;
                                        if ((*(signed char *)((a4 + 0x131))) != 0) {
                                            t0 = 0x0;
                                        }
                                        *(unsigned short *)((a4 + 0x1C)) = t0;
                                        t0 = (((struct oC4_int *)(a4))->v);
                                        (((struct o74_float *)(t0))->v) = 0.0f;
                                        (((struct o6C_float *)(t0))->v) = 0.0f;
                                        t3 = 0x6C;
                                    }
                                }
                                t2 = t3;
                            }
                        }
                        t1 = t2;
                    }
                    t0 = t1;
                } else {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 5.0f);
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o6C_float *)(t1))->v)) + 1.0f);
                    } else {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o6C_float *)(t1))->v)) - 1.0f);
                    }
                    (((struct o6C_float *)(t2))->v) = u0;
                    if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o74_float *)(t1))->v)) + 1.0f);
                    } else {
                        t1 = (((struct oC4_int *)(a4))->v);
                        t2 = t1;
                        u0 = (((((struct o74_float *)(t1))->v)) - 1.0f);
                    }
                    (((struct o74_float *)(t2))->v) = u0;
                    t1 = 0x2C;
                    if (4400.0f > ((((struct o2C_float *)(a4))->v))) {
                    } else {
                        (((struct o2C_float *)(a4))->v) = 4400.0f;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x190;
                        t2 = (((struct oC4_int *)(a4))->v);
                        (((struct o74_float *)(t2))->v) = 0.0f;
                        (((struct o6C_float *)(t2))->v) = 0.0f;
                        t1 = (thunk_FUN_0c05abb2(0x4C, (a4 + 0x28)));
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                    t0 = (((struct oC4_int *)(a4))->v);
                    t2 = t0;
                    u0 = (((((struct o6C_float *)(t0))->v)) + (1.0f + 1.0f));
                } else {
                    t0 = (((struct oC4_int *)(a4))->v);
                    t2 = t0;
                    u0 = (((((struct o6C_float *)(t0))->v)) - (1.0f + 1.0f));
                }
                (((struct o6C_float *)(t2))->v) = u0;
                if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                    t0 = (((struct oC4_int *)(a4))->v);
                    t2 = t0;
                    u0 = (((((struct o74_float *)(t0))->v)) + (1.0f + 1.0f));
                } else {
                    t0 = (((struct oC4_int *)(a4))->v);
                    t2 = t0;
                    u0 = (((((struct o74_float *)(t0))->v)) - (1.0f + 1.0f));
                }
                (((struct o74_float *)(t2))->v) = u0;
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((int)(short)(t0 - 1) > 0) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o74_float *)(t0))->v) = 0.0f;
                    (((struct o6C_float *)(t0))->v) = 0.0f;
                    t2 = (thunk_FUN_0c05abb2(0x44, (a4 + 0x28)));
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) > 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = (thunk_FUN_0c05abb2(0x4C, (a4 + 0x28)));
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x190;
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        t1 = 0x3C;
    }
    t0 = *(signed char *)0xC54098D;
    t2 = t1;
    if ((int)t0 >= (int)0xD) {
        t1 = 0xE;
        if ((int)t0 <= (int)0xE) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c0e1b9a(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];
    register int t102;
    register int t103;

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    int R10;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_1 = a4;
    v0_3 = a5;
    v0_2 = a6;
    v0_4 = a7;
    w0_2 = f4;
    v0_0 = (v0_1);
    if (((*(signed char *)0xC54223C) == 2)) goto L_C0E1BC0;
    L_C0E1E5A:;
    v0_6 = ((((int (*)(int, int, int, int))(FUN_0c03f346))(v0_0, v0_3, v0_2, v0_4)));
    L_C0E1EA6:;
    return v0_6;
    L_C0E1BC0:;
    v0_7 = *(signed char *)((v0_0 + 0x14));
    v0_6 = (v0_7);
    R10 = (0x1);
    v0_5 = (0x0);
    w0_1 = (0.0f);
    w0_0 = (1.0f);
    if ((v0_7 == 0)) goto L_C0E1BD8;
    if ((v0_6 == 1)) goto L_C0E1C72;
    goto L_C0E1EA6;
    L_C0E1C72:;
    v0_8 = *(signed char *)((v0_0 + 0x15));
    v0_6 = (v0_8);
    v0_7 = (0xC059CFC);
    v0_7 = (((((struct oC4_int *)(v0_0))->v)));
    w0_3 = (-19900.0f);
    w0_4 = (-20000.0f);
    if ((v0_8 == 0)) goto L_C0E1CA0;
    if ((v0_6 == 1)) goto L_C0E1CB8;
    if ((v0_6 == 2)) goto L_C0E1D04;
    if ((v0_6 == 3)) goto L_C0E1D74;
    if ((v0_6 != 4)) goto L_C0E1C9C;
    v0_6 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_6 - 1);
    if (((int)(short)(v0_6 - 1) >= 0)) goto L_C0E1E84;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x2;
    v0_6 = (((struct o20_short *)(v0_0))->v);
    v0_7 = (int)((v0_6 & R10) + 0x1) <= 0;
    v0_6 = ((v0_6 & R10) + 0x1);
    R10 = (v0_5);
    v0_6 = v0_6;
    if (v0_7) goto L_C0E1E2C;
    v0_5 = (0xC0E2358);
    w0_1 = (166.666672f);
    w0_0 = (150.0f);
    L_C0E1DF2:;
    v0_5 = (((struct o20_short *)(v0_0))->v);
    w0_2 = -1000.0f;
    w0_2 = w0_2 + w0_1 * (float)v0_5;
    *(float *)(((int)stk + 0)) = w0_2;
    *(float *)(((int)stk + 4)) = w0_3;
    w0_5 = *(float *)(((int)stk + 0));
    w0_2 = (w0_5);
    FPUL_ = (v0_5);
    if ((!(800.0f > w0_5))) goto L_C0E1E1E;
    if ((!(w0_2 > -800.0f))) goto L_C0E1E1E;
    *(float *)(((int)stk + 4)) = w0_4;
    L_C0E1E1E:;
    *(float *)(((int)stk + 8)) = w0_0;
    FUN_0c0e2358(((int)stk + 0));
    v0_5 = (int)(R10 + 0x1) < (int)v0_6;
    R10 = ((R10 + 0x1));
    if (v0_5) goto L_C0E1DF2;
    L_C0E1E2C:;
    if (((((((struct o20_short *)(v0_0))->v)) & 3) != 0)) goto L_C0E1E3C;
    thunk_FUN_0c05abb2(0x53, (v0_0 + 0x28));
    L_C0E1E3C:;
    v0_5 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_5 - 1);
    if (((int)(short)(v0_5 - 1) >= 0)) goto L_C0E1E84;
    thunk_FUN_0c05abb2(0x4B, (v0_0 + 0x28));
    thunk_FUN_0c05abb2(0x53, (v0_0 + 0x28));
    goto L_C0E1E5A;
    L_C0E1E84:;
    *(volatile int *)((v0_0 + 0xC8));
    v0_1 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_3, v0_2);
    v0_0 = (((struct oC8_int *)(v0_0))->v);
    (((struct o70_float *)(v0_0))->v) = (((((struct o70_float *)(v0_0))->v)) + 30.0f);
    v0_6 = (0x70);
    FPUL_ = (0x41F00000);
    goto L_C0E1EA6;
    L_C0E1C9C:;
    goto L_C0E1E84;
    L_C0E1D74:;
    FUN_0c0e1b20(v0_7);
    v0_1 = (0x4);
    v0_3 = (R10);
    L_C0E1DA4:;
    if (((int)v0_3 >= 0)) goto L_C0E1D7E;
    if ((((((struct o18_float *)(v0_7))->v)) > 0.0f)) goto L_C0E1E84;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x2;
    (((struct o20_ushort *)(v0_0))->v) = 0xC;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    goto L_C0E1E84;
    L_C0E1D7E:;
    v0_4 = *(int *)((((0xC4 + v0_0) + v0_1) + 0x0));
    w0_2 = (((struct o18_float *)(v0_4))->v);
    (((struct o18_float *)(v0_4))->v) = (w0_2 - w0_0);
    v0_6 = (0x18);
    v0_7 = (v0_4);
    if ((!(0.0f > (w0_2 - w0_0)))) goto L_C0E1D96;
    *(float *)((v0_7 + v0_6)) = w0_1;
    L_C0E1D96:;
    w0_2 = *(float *)((v0_7 + v0_6));
    (((struct o20_float *)(v0_7))->v) = w0_2;
    (((struct o1C_float *)(v0_7))->v) = w0_2;
    v0_1 = ((v0_1 - 4));
    v0_3 = ((v0_3 - 1));
    goto L_C0E1DA4;
    L_C0E1D04:;
    (((struct o6C_float *)(v0_7))->v) = (((((struct o6C_float *)(v0_7))->v)) - 66.6666641f);
    (((struct o70_float *)(v0_7))->v) = w0_3;
    v0_1 = (v0_7);
    FPUL_ = (0x42855555);
    if ((!(((((struct o6C_float *)(v0_7))->v)) > -700.0f))) goto L_C0E1D28;
    (((struct o70_float *)(v0_7))->v) = w0_4;
    L_C0E1D28:;
    FUN_0c0e1b20(v0_1);
    v0_4 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) < 0)) goto L_C0E1D3C;
    goto L_C0E1E84;
    L_C0E1D3C:;
    (((struct o12A_ushort *)(v0_0))->v) = v0_5;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C0E1E84;
    L_C0E1CB8:;
    w0_1 = (((struct o18_float *)(v0_7))->v);
    (((struct o18_float *)(v0_7))->v) = (w0_1 + 0.125f);
    v0_6 = (0x18);
    FPUL_ = (0x3E000000);
    if ((w0_0 > (w0_1 + 0.125f))) goto L_C0E1CE2;
    *(float *)((v0_7 + v0_6)) = w0_0;
    (((struct o12A_ushort *)(v0_0))->v) = 0xF;
    (((struct o136_uchar *)(v0_0))->v) = v0_5;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1E;
    L_C0E1CE2:;
    w0_0 = (((struct o18_float *)(v0_7))->v);
    (((struct o20_float *)(v0_7))->v) = w0_0;
    (((struct o1C_float *)(v0_7))->v) = w0_0;
    *(volatile int *)(((0xC4 + v0_0) + 0x4));
    *(volatile int *)(((0xC4 + v0_0) + 0x0));
    FUN_0c18778c((0xC4 + v0_0), v0_3, v0_2, v0_4, w0_2);
    goto L_C0E1E84;
    L_C0E1CA0:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    FUN_0c0e1b20(v0_7);
    thunk_FUN_0c05abb2(0x4A, (v0_0 + 0x28));
    goto L_C0E1E84;
    L_C0E1BD8:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_5;
    (((struct oA8_uchar *)(v0_0))->v) = R10;
    v0_2 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_3, v0_2);
    v0_3 = (v0_5);
    v0_2 = (0x8);
    v0_4 = (0xC1CA6EC);
    L_C0E1C62:;
    if (((unsigned int)v0_3 < (unsigned int)v0_2)) goto L_C0E1C34;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_5;
    FUN_0c0e2116(v0_0);
    goto L_C0E1C72;
    L_C0E1C34:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c187798))((*(int *)((((0xC4 + v0_0) + v0_3) + 0x0))), v0_3, v0_2);
    (((struct o8C_float *)(t103))->v) = w0_0;
    (((struct o88_float *)(t103))->v) = w0_0;
    (((struct o84_float *)(t103))->v) = w0_0;
    (((struct o20_float *)(t103))->v) = w0_1;
    (((struct o1C_float *)(t103))->v) = w0_1;
    (((struct o18_float *)(t103))->v) = w0_1;
    v0_1 = (t103);
    v0_3 = ((t102 + 0x4));
    goto L_C0E1C62;
}

int FUN_0c04d126(int a4, int a5, int a6)
{
    int stk[3];
    register int t2;
    register int t18;
    register float u24;
    register float u29;
    register float t32;
    register float u34;
    register int t35;
    register int t37;
    register int t40;
    register float t43;
    register float t44;
    register int t72;
    register float u106;
    register float u111;
    register float t115;
    register float u118;
    register int t120;
    register int t142;
    register int t171;
    register int t186;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t2 = *(signed char *)0xC541F44;
        (((struct o22_ushort *)(a4))->v) = ((*(short *)(((((unsigned char)t2 << 1) + 0xC1B7D62) + 0x2))) + ((*(short *)((0xC1B7D62 + (((unsigned char)t2 - 1) << 1)))) + (*(short *)((0xC1B7D62 + ((unsigned char)t2 << 1))))));
    }
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
    t18 = *(signed char *)((a4 + 0x15));
    if (t18 != 0) {
        if (t18 != 1) {
            if (t18 != 2) {
                if (t18 == 3) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x3A7);
                    u24 = ((((struct o60_float *)(a4))->v));
                    u24 = u24 + (float)(*(short *)((a4 + 0x1C))) * (math_cos_angle16((*(short *)((a4 + 0x1E)))));
                    (((struct o30_float *)(a4))->v) = (u24 + 600.0f);
                    u29 = ((((struct o58_float *)(a4))->v));
                    u29 = u29 + (float)(*(short *)((a4 + 0x1C))) * (math_sin_angle16((*(short *)((a4 + 0x1E)))));
                    (((struct o28_float *)(a4))->v) = u29;
                    t32 = math_sin_angle16((((short)(*(signed char *)((a4 + 0x2))) * (short)0x2492) + (*(short *)((a4 + 0x1E)))));
                    u34 = ((((struct o5C_float *)(a4))->v));
                    u34 = u34 + 10.0f * t32;
                    (((struct o2C_float *)(a4))->v) = u34;
                    t35 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t35 - 1);
                    t186 = 0x20;
                    if ((int)(short)(t35 - 1) < 0) {
                        t37 = *(signed char *)((a4 + 0x2));
                        if (t37 == 0) {
                            FUN_0c0e2390(((int)stk + 0), 0xC1B7EE8, (a4 + 0x28));
                            t40 = (((struct o22_short *)(a4))->v);
                            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) / (float)t40);
                            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) / (float)t40);
                            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) / (float)t40);
                        } else {
                            t43 = math_cos_angle16(((short)t37 * (short)0x6DB6));
                            *(float *)(((int)stk + 8)) = (t43 * 4000.0f);
                            t44 = math_sin_angle16(((short)t37 * (short)0x6DB6));
                            *(float *)(((int)stk + 0)) = (t44 * 4000.0f);
                            *(float *)(((int)stk + 4)) = -500.0f;
                            math_vec3_mul_xyz(((int)stk + 0), 0.0166666675f, 0.0166666675f, 0.0166666675f);
                        }
                        FUN_0c187798();
                        if ((*(signed char *)((a4 + 0x2))) == 6) {
                            FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x34, (a4 + 0x28));
                        }
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t186 = 0x15;
                    }
                } else {
                    t186 = t18;
                    if (t18 == 4) {
                        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                        t72 = *(signed char *)0xC541F44;
                        t186 = (unsigned char)t72;
                        if ((int)(unsigned char)t72 > (int)0xE) {
                            t186 = (FUN_0c03f346(a4));
                        }
                    }
                }
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x5);
                if ((int)(*(short *)((a4 + 0x1C))) > (int)0x64) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x64;
                }
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x3A7);
                u106 = ((((struct o60_float *)(a4))->v));
                u106 = u106 + (float)(*(short *)((a4 + 0x1C))) * (math_cos_angle16((*(short *)((a4 + 0x1E)))));
                (((struct o30_float *)(a4))->v) = (u106 + 600.0f);
                u111 = ((((struct o58_float *)(a4))->v));
                u111 = u111 + (float)(*(short *)((a4 + 0x1C))) * (math_sin_angle16((*(short *)((a4 + 0x1E)))));
                (((struct o28_float *)(a4))->v) = u111;
                (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) + 25.0f);
                t115 = math_sin_angle16((((short)(*(signed char *)((a4 + 0x2))) * (short)0x2492) + (*(short *)((a4 + 0x1E)))));
                u118 = ((((struct o5C_float *)(a4))->v));
                u118 = u118 + ((1.0f + 1.0f)) * t115;
                (((struct o2C_float *)(a4))->v) = u118;
                t186 = 0x5C;
                if (1000.0f > ((((struct o5C_float *)(a4))->v))) {
                } else {
                    t120 = *(signed char *)((a4 + 0x2));
                    (((struct o20_ushort *)(a4))->v) = (int)((float)(((((-t120) + 0x7) << 2) << 1) - ((-t120) + 0x7)) + 90.0f);
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t186 = 0x15;
                }
            }
        } else {
            t142 = *(signed char *)0xC541F44;
            t186 = (unsigned char)t142;
            if ((int)(unsigned char)t142 < (int)0xD) {
            } else {
                (((struct o58_float *)(a4))->v) = 50.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 109.0f;
                FUN_0c0582de((a4 + 0x58), (((((struct oC8_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
                FUN_0c187798();
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = ((short)(*(signed char *)((a4 + 0x2))) * (short)0x2492);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t186 = 0x15;
            }
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t171 = *(signed char *)0xC541F44;
        t186 = (unsigned char)t171;
        if ((int)(unsigned char)t171 < (int)0xD) {
        } else {
            (((struct o58_float *)(a4))->v) = 50.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o60_float *)(a4))->v) = 109.0f;
            FUN_0c0582de((a4 + 0x58), (((((struct oC8_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
            FUN_0c187798();
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = ((short)(*(signed char *)((a4 + 0x2))) * (short)0x2492);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t186 = 0x15;
        }
    }
    return t186;
}

int FUN_0c0ab808(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0ab734(a4);
            }
            return ((int (*)(int, int, int, int))(0xC0AB708))(a4, a5, a6, a7);
        }
        return FUN_0c0ab590(a4, a5, a6);
    }
    return FUN_0c0ab4b4(a4);
}

int FUN_0c0abbe0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0abb0c(a4);
            }
            return ((int (*)(int, int, int, int))(0xC0ABAE0))(a4, a5, a6, a7);
        }
        return FUN_0c0ab968(a4, a5, a6);
    }
    return FUN_0c0ab888(a4);
}
