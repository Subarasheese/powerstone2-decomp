/* Straight-line functions with calls and guards (batch gen_ak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o1668_uchar { char p[0x1668]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o418_int { char p[0x418]; int v; };
struct o41C_float { char p[0x41C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o45_uchar { char p[0x45]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uchar { char p[0x48]; unsigned char v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c01cc56(int, int);
int FUN_0c0206d6(void);
int FUN_0c0209c6(int);
int FUN_0c020be4(int);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c02c7dc(void);
int FUN_0c02c8c2(void);
int FUN_0c02cb10(void);
int FUN_0c02cbcc(int, int);
int FUN_0c02cc20(int);
int FUN_0c02e078(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c02f874(int, int);
int FUN_0c0365c8(int);
int FUN_0c0365f0(int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c038548(int);
int FUN_0c038566(void);
int FUN_0c038e88(int);
int FUN_0c038ec2(int);
int FUN_0c038ee0(int);
int FUN_0c038f1a(int);
int FUN_0c039fbc(void);
int FUN_0c03a6c4(void);
int FUN_0c03ee04(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0523ce(int);
int FUN_0c052404(int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c060c00(void);
int FUN_0c063f24(void);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c064fba(int, int, int);
int FUN_0c064fd4(int, int, int);
int FUN_0c0650b0(int, int, int, float);
int FUN_0c06514e(int, int, int);
int FUN_0c0651f8(int, int, int);
int FUN_0c0652c4(int, int, int, float, float, float, float, float, float, float);
int FUN_0c065396(int, int, int, float);
int FUN_0c065434(int, int, int, float, float, float, float, float, float, float);
int FUN_0c06551a(int, int, int, float);
int FUN_0c067008(int);
int FUN_0c067a58(void);
int FUN_0c070320(int);
int FUN_0c074602(void);
int FUN_0c07d15c(int);
int FUN_0c07d6cc(int);
int FUN_0c07da48(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c085eac(int, int);
int FUN_0c0ae6dc(int, int, int);
int FUN_0c0b00f4(int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c0b4b4e(int, int);
float FUN_0c0b4b7a(int, int, float);
int FUN_0c0c224c(int, int, int, int, int, int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c43c0(int, int);
int FUN_0c0cb6a4(int);
int FUN_0c0cb776(int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0dc2d0(int, int);
float FUN_0c0e2220(int, int);
int FUN_0c104cc8(int);
int FUN_0c10db06(int);
int FUN_0c142430(int, int);
int FUN_0c142a58(int, int, int, int, int);
int FUN_0c14304a(int);
int FUN_0c148d04(int, int);
int FUN_0c148d64(int, int, int);
int FUN_0c14bb80(int, int);
int FUN_0c14f824(int, int, int);
int FUN_0c1716d0(int, int);
int FUN_0c179ac0(void);
int FUN_0c17b4b0(int);
int FUN_0c17c130(int, int, int);
float FUN_0c17c450(int);
int FUN_0c17e740(float, float, float);
int FUN_0c1837cc(int, int);
int FUN_0c186740(int, int);
extern int FUN_0c187798();
int FUN_0c187b48(int, int, int);
int FUN_0c2b2370(int, int, int, int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int res_cockpit_faces_release_all(void);
int thunk_FUN_0c0385e0(int);
int thunk_FUN_0c05abb2(int, int);
void FUN_0c0524bc(void);
int FUN_0c05bd74(void);
int FUN_0c08e866(int a4, int a5, int a6);
int FUN_0c0b0270(int a4);
int FUN_0c0d7c04(int a4);
int FUN_0c0e91a0(int a4, int a5, int a6);
int FUN_0c1047ea(void);
int FUN_0c10527c(int a4, int a5, int a6);
int FUN_0c1051f4(int a4, int a5, int a6);
int FUN_0c105304(int a4, int a5, int a6);
int FUN_0c10dd92(int a4);
int FUN_0c130a4c(int a4, int a5, int a6, int a7);
int FUN_0c147222(int a4, int a5, int a6, float f4);
int FUN_0c1493fe(int a4);
int FUN_0c15ba84(int a4, int a5, int a6, int a7);
int FUN_0c1710d4(void);
int FUN_0c1723b4(int a4, int a5);
int FUN_0c015c38(int a4);
int FUN_0c01c5ac(int a4, float f4, float f5);
int FUN_0c02cc90(int a4);
int FUN_0c02e7c4(void);
int FUN_0c03aeec(int a4, int a5, int a6, int a7);
int FUN_0c03afdc(int a4, int a5, int a6, int a7);
int FUN_0c03b0cc(int a4, int a5, int a6, int a7);
int FUN_0c03b14a(int a4, int a5, int a6, int a7);
int FUN_0c03b25a(int a4, int a5, int a6, int a7);
int FUN_0c03b366(int a4, int a5, int a6, int a7);
int FUN_0c03b2e8(int a4, int a5, int a6, int a7);
int FUN_0c03ac42(void);
int FUN_0c04bb00(void);
int FUN_0c02c96a(void);
int FUN_0c059d30(void);
int FUN_0c0737e8(int a4);
int FUN_0c074584(int a4, int a5);
int FUN_0c075e64(int a4);
int FUN_0c0879c4(int a4);
int FUN_0c08b2d0(int a4);
int FUN_0c0908b4(int a4);
int FUN_0c0b11cc(int a4);
int FUN_0c0c22e6(int a4, int a5);
int FUN_0c0cb982(int a4);
int FUN_0c0d522c(int a4);
int FUN_0c0df91c(int a4, int a5, int a6, int a7);
int FUN_0c0e0fec(int a4, int a5, int a6, int a7);
int FUN_0c0e4828(int a4);
int FUN_0c120888(int a4, float f4);
int FUN_0c12105e(int a4, int a5);
int FUN_0c125e4c(int a4, int a5, int a6, int a7);
int FUN_0c13dd14(int a4);
int FUN_0c143074(int a4, int a5);
int FUN_0c14bbce(int a4);
int FUN_0c15bf56(int a4, int a5, int a6, int a7);
int FUN_0c026414(void);
int FUN_0c03d3b6(int a4);
int FUN_0c06570c(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c07f56a(int a4);
int FUN_0c0847dc(int a4);


int FUN_0c05bd74(void)
{
    FUN_0c067a58();
    FUN_0c038566();
    res_cockpit_faces_release_all();
    FUN_0c03f40c(0x9);
    FUN_0c038ec2(0x9);
    FUN_0c03f40c(0x2);
    FUN_0c038548(0x2);
    FUN_0c038e88(0x2);
    FUN_0c03f40c(0x1);
    FUN_0c038ec2(0x1);
    FUN_0c060c00();
    FUN_0c063f24();
    res_cockpit_faces_release_all();
    FUN_0c038ee0(0x2);
    FUN_0c038f1a(0x1);
    FUN_0c038f1a(0x9);
    FUN_0c03f40c(0x5);
    FUN_0c038ec2(0x5);
    FUN_0c03f40c(0x6);
    FUN_0c038ec2(0x6);
    FUN_0c03f40c(0x8);
    return (FUN_0c038ec2(0x8));
}

int FUN_0c08e866(int a4, int a5, int a6)
{
    int t0;

    if (((*(int *)0xC542260) & 3) == 0) {
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (a4 + 0x28), a6);
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t0 != 0) && (t0 != 1)) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0b0270(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        FUN_0c0b00f4(a4, 0x2);
        *(unsigned short *)((a4 + 0x1E)) = 0x1;
        return 0x1;
    }
    if ((int)((((struct o22_short *)(a4))->v)) > 0) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
        if (((((struct o22_short *)(a4))->v)) == 0) {
            FUN_0c059e60(a4, 0x20);
            FUN_0c059e60(a4, 0x9);
        }
    }
    FUN_0c0b00f4(a4, 0x0);
    FUN_0c038362(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c07da48(a4);
    return FUN_0c070320(a4);
}

int FUN_0c0d7c04(int a4)
{
    register int t0;
    register int t1;

    FUN_0c0dc2d0(a4, 0x1D);
    thunk_FUN_0c05abb2(0x28, 0x0);
    FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    t0 = 0xA8;
    if ((int)(*(signed char *)0xC54223C) > 0) {
        t1 = *(signed char *)((a4 + 0x2));
        t0 = t1;
        if ((int)t1 >= 0) {
            t1 = *(signed char *)((a4 + 0x2));
            t0 = t1;
            if ((int)t1 <= (int)0x8) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
        }
    }
    return t0;
}

int FUN_0c0e91a0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        FUN_0c187798(t0, a5, a6);
        if ((*(int *)0xC540D94) != 0) {
            t5 = 0x6F0;
            t5 = (t5 + 0xC540978);
            t5 = (t5 + t2);
            t0 = t5;
            t4 = (FUN_0c17c130(t0, t5, ((*(int *)0xC540D94) + 0x28)));
        } else {
            t0 = 0x6F0;
            t0 = (t0 + 0xC540978);
            t0 = (t0 + t1);
            (((struct o8_float *)(t0))->v) = 0.0f;
            (((struct o4_float *)(t0))->v) = 0.0f;
            *(float *)((t0 + 0x0)) = 0.0f;
            t4 = 0x4;
            t5 = t0;
        }
        t3 = (t3 + 0xC);
        t0 = t5;
        t1 = (t1 + 0xC);
        t2 = (t2 + 0xC);
        if ((unsigned int)t3 >= (unsigned int)0x30) {
            break;
        }
    }
    return t4;
}

int FUN_0c1047ea(void)
{
    register int t0;
    register int t8;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t8 = t0;
    if (t0 != 0) {
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct o6C_float *)(((((struct oC4_int *)(t0))->v))))->v) = -190.0f;
        (((struct o6C_float *)(((((struct oC8_int *)(t0))->v))))->v) = -230.0f;
        t3 = (((struct oC4_int *)(t0))->v);
        (((struct o70_float *)((*(int *)(((0xC4 + t0) + 0x4)))))->v) = 180.0f;
        (((struct o70_float *)(t3))->v) = 180.0f;
        FUN_0c037498(((((struct oCC_int *)(t0))->v)), 0x0, 0x89, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned int *)((t0 + 0x4)) = 0xC1046E6;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = 0.0f;
        (((struct o30_float *)(t0))->v) = 15.0f;
        t8 = 0x30;
    }
    return t8;
}

int FUN_0c10527c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c104cc8(0x2000);
    t1 = a4;
    if ((t0 != 0) && ((int)a4 > (int)a5)) {
        FUN_0c05aab6(0x0, 0x5);
        t1 = (a4 - 1);
    }
    t0 = FUN_0c104cc8(0x1000);
    t2 = t1;
    if ((t0 != 0) && ((int)t1 < (int)a6)) {
        FUN_0c05aab6(0x0, 0x5);
        t2 = (t1 + 0x1);
    }
    t0 = FUN_0c104cc8(0x8);
    t1 = t2;
    if ((t0 != 0) && ((int)t2 > (int)a5)) {
        FUN_0c05aab6(0x0, 0x5);
        t0 = (t2 - 5);
        if ((int)(t2 - 5) < (int)a5) {
            t0 = a5;
        }
        t1 = t0;
    }
    t0 = FUN_0c104cc8(0x4);
    t2 = t1;
    if ((t0 != 0) && ((int)t1 < (int)a6)) {
        FUN_0c05aab6(0x0, 0x5);
        t0 = (t1 + 0x5);
        if ((int)(t1 + 0x5) > (int)a6) {
            t0 = a6;
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c1051f4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c104cc8(0x800);
    t1 = a4;
    if ((t0 != 0) && ((int)a4 > (int)a5)) {
        FUN_0c05aab6(0x0, 0x5);
        t1 = (a4 - 1);
    }
    t0 = FUN_0c104cc8(0x400);
    t2 = t1;
    if ((t0 != 0) && ((int)t1 < (int)a6)) {
        FUN_0c05aab6(0x0, 0x5);
        t2 = (t1 + 0x1);
    }
    t0 = FUN_0c104cc8(0x8);
    t1 = t2;
    if ((t0 != 0) && ((int)t2 > (int)a5)) {
        FUN_0c05aab6(0x0, 0x5);
        t0 = (t2 - 10);
        if ((int)(t2 - 10) < (int)a5) {
            t0 = a5;
        }
        t1 = t0;
    }
    t0 = FUN_0c104cc8(0x4);
    t2 = t1;
    if ((t0 != 0) && ((int)t1 < (int)a6)) {
        FUN_0c05aab6(0x0, 0x5);
        t0 = (t1 + 0xA);
        if ((int)(t1 + 0xA) > (int)a6) {
            t0 = a6;
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c105304(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c104cc8(0x1000);
    t1 = a4;
    if ((t0 != 0) && ((int)a4 > (int)a5)) {
        FUN_0c05aab6(0x0, 0x5);
        t1 = (a4 - 1);
    }
    t0 = FUN_0c104cc8(0x2000);
    t2 = t1;
    if ((t0 != 0) && ((int)t1 < (int)a6)) {
        FUN_0c05aab6(0x0, 0x5);
        t2 = (t1 + 0x1);
    }
    t0 = FUN_0c104cc8(0x8);
    t1 = t2;
    if ((t0 != 0) && ((int)t2 > (int)a5)) {
        FUN_0c05aab6(0x0, 0x5);
        t0 = (t2 - 10);
        if ((int)(t2 - 10) < (int)a5) {
            t0 = a5;
        }
        t1 = t0;
    }
    t0 = FUN_0c104cc8(0x4);
    t2 = t1;
    if ((t0 != 0) && ((int)t1 < (int)a6)) {
        FUN_0c05aab6(0x0, 0x5);
        t0 = (t1 + 0xA);
        if ((int)(t1 + 0xA) > (int)a6) {
            t0 = a6;
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c10dd92(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o0_uchar *)0xC473970)->v) = 0x0;
    (((struct o1_uchar *)0xC473970)->v) = 0x7;
    (((struct o2_uchar *)0xC473970)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        t1 = (0xC473958 + t0);
        t0 = (t0 + 0x3);
        *(unsigned char *)((t1 + 0x0)) = 0x5;
        if ((unsigned int)t0 >= (unsigned int)0x18) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        if ((*(int *)((0xC29E0D0 + (((t0 << 2) << 2) << 1)))) != -1) {
            t0 = (t0 + 0x1);
            continue;
        }
        break;
    }
    t1 = (int)((int)(FUN_0c179ac0()) % (int)t0);
    t0 = 0x0;
    for (;;) {
        t2 = t0;
        t0 = (t0 + 0x4);
        *(unsigned int *)((0xC473984 + t2)) = (*(int *)((((((t1 << 2) << 2) << 1) + 0xC29E0D0) + t2)));
        if ((unsigned int)t0 >= (unsigned int)0x20) {
            break;
        }
    }
    return FUN_0c10db06(a4);
}

int FUN_0c130a4c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;
    float s1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x71C);
    u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1E))) * ((((struct o0_float *)0xC130B34)->v))) / ((((struct o4_float *)0xC130B34)->v))));
    s1 = _builtin_fabsf(u0);
    (((struct o40_float *)(a4))->v) = (s1 * (1.0f + 1.0f));
    (((struct o48_float *)(a4))->v) = (s1 * (1.0f + 1.0f));
    (((struct o44_float *)(a4))->v) = (s1 * (1.0f + 1.0f));
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x222);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    return (short)(t0 - 1);
}

int FUN_0c147222(int a4, int a5, int a6, float f4)
{
    int stk[8];
    register int t0;
    register int t11;
    register int t5;
    register int t8;

    *(unsigned char *)(((int)stk + 24)) = a4;
    *(unsigned char *)(((int)stk + 28)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    *(float *)(((int)stk + 16)) = f4;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t11 = 0x0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 28)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 24)));
        *(unsigned int *)((t0 + 0x4)) = 0xC147164;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 20)));
        (((struct o41C_float *)(t0))->v) = (*(float *)(((int)stk + 16)));
        t5 = *(int *)((t0 + 0x10));
        FUN_0c07e2f4(t0, (*(int *)(((t5 + 0x41C) + 0x4))));
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t8 = *(signed char *)((t0 + 0x2));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t8));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x1, (*(int *)(((t5 + 0x41C) + 0x8))), 0x0, 0x100, (~((int)0x1 << (int)t8)), 0x0, 0x0);
        t11 = t0;
    }
    return t11;
}

int FUN_0c1493fe(int a4)
{
    int stk[3];
    register int t0;
    register int t4;
    register int t23;
    register int t30;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        t30 = t0;
        if (t0 != 1) {
        } else {
            (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
            t4 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
            t30 = (short)(t4 - 1);
            if ((int)(short)(t4 - 1) <= 0) {
                FUN_0c0b21ac(a4, 0x6);
                (((struct o130_uchar *)(a4))->v) = 0x0;
                t30 = (FUN_0c148d64(a4, 0x1, 0x12C));
            }
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        FUN_0c148d04(a4, 0x1);
        math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
        FUN_0c059e9a((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x3, ((int)stk + 0));
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
        t23 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t23 - 1);
        t30 = (short)(t23 - 1);
        if ((int)(short)(t23 - 1) <= 0) {
            FUN_0c0b21ac(a4, 0x6);
            (((struct o130_uchar *)(a4))->v) = 0x0;
            t30 = (FUN_0c148d64(a4, 0x1, 0x12C));
        }
    }
    return t30;
}

int FUN_0c15ba84(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    FUN_0c037498(t0, (unsigned char)(*(signed char *)((0xC2A2B08 + (*(short *)((a4 + 0x1C)))))), 0x2A, (*(int *)0xC4B40CC));
    if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x6) {
        u0 = *(float *)0xC15BBB0;
        (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - u0);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - u0);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - u0);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0xA) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c1710d4(void)
{
    register int t15;

    (((struct o0_uchar *)0xC53249A)->v) = ((((struct o0_int *)0xC475A94)->v));
    FUN_0c0365c8(0x0);
    FUN_0c0365f0(0x0);
    FUN_0c067008(0x0);
    FUN_0c039fbc();
    *(float *)0xC5324C0 = 0.0f;
    *(float *)0xC5324C4 = 0.0f;
    *(float *)0xC5324C8 = 0.0f;
    *(unsigned char *)0xC535BB6 = 0x1;
    (((struct o1C_uint *)0xC475AD4)->v) = 0xC532498;
    FUN_0c037ac4(0xC532498, 0x0, ((((struct o38_int *)0xC475A94)->v)), ((((struct o3C_int *)0xC475A94)->v)), (((((struct o0_int *)0xC475AD4)->v))));
    FUN_0c037ac4(0xC532498, 0x1, ((((struct o4_int *)0xC475AD4)->v)), ((((struct o8_int *)0xC475AD4)->v)), (((((struct oC_int *)0xC475AD4)->v))));
    t15 = FUN_0c1716d0(0x0, 0x0);
    (((struct o20_uint *)0xC475AD4)->v) = t15;
    return t15;
}


int FUN_0c015c38(int a4)
{
    register int t0;
    register int t1;
    int t2;
    register int t6;
    register int t14;

    t0 = *(int *)0xC304BA0;
    t1 = *(int *)(((t0 + 0x3C) + 0x4));
    t2 = *(int *)(((t0 + 0x3C) + 0x0));
    if (((~t1) & t2) != 0) {
        (((struct o48_uchar *)(t0))->v) = 0x0;
    }
    t6 = *(int *)0xC304BA0;
    if ((t2 & a4) != 0) {
        if (((unsigned char)(*(signed char *)((t6 + 0x48))) & 128) == 0) {
            if ((((~t1) & t2) & a4) != 0) {
                (((struct o48_uchar *)(t6))->v) = 0x9E;
                (((struct o44_uint *)((*(int *)0xC304BA0)))->v) = a4;
                return 0x1;
            }
            return 0x0;
        }
        if (a4 == ((((struct o44_int *)(t6))->v))) {
            t14 = *(signed char *)((t6 + 0x48));
            (((struct o48_uchar *)(t6))->v) = (t14 - 1);
            if ((unsigned char)(t14 - 1) == 0x80) {
                (((struct o48_uchar *)((*(int *)0xC304BA0)))->v) = 0x84;
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    if (a4 == ((((struct o44_int *)(t6))->v))) {
        (((struct o44_uint *)(t6))->v) = 0x0;
        (((struct o48_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
    }
    return 0x0;
}

int FUN_0c01c5ac(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = a4;
    if ((int)(signed char)a4 > (int)0x24) {
        t0 = 0x24;
    }
    t1 = FUN_0c01cc56((*(short *)(((((signed char)t0 << 2) + 0xC20E2B4) + 0x0))), 0xC01C5A8);
    (((struct o28_float *)(t1))->v) = f4;
    (((struct o2C_float *)(t1))->v) = f5;
    t1 = *(short *)(((((signed char)t0 << 2) + 0xC20E2B4) + 0x2));
    t2 = t1;
    if (t1 != 0) {
        t1 = FUN_0c01cc56((*(short *)((((((signed char)t0 << 2) + 0xC20E2B4) + 0x2) + 0x0))), 0xC01C5A8);
        (((struct o28_float *)(t1))->v) = (f4 + ((((struct o0_float *)0xC01C6FC)->v)));
        if ((*(short *)((((((signed char)t0 << 2) + 0xC20E2B4) + 0x2) + 0x0))) == 41) {
            u0 = ((((struct o4_float *)0xC01C6FC)->v));
        } else {
            u0 = ((((struct o8_float *)0xC01C6FC)->v));
        }
        (((struct o2C_float *)(t1))->v) = (f5 + u0);
        t2 = 0x2C;
    }
    return t2;
}

int FUN_0c02cc90(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    *(unsigned char *)(((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x0)) = 0x0;
    *(unsigned char *)(((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x1)) = 0x0;
    FUN_0c02cbcc(a4, 0x2);
    FUN_0c02cc20(a4);
    t0 = ((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x14);
    t1 = ((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x14);
    t2 = 0x0;
    for (;;) {
        t3 = (t0 + 0xE);
        t4 = 0x0;
        for (;;) {
            t4 = (t4 + 0x1);
            *(unsigned char *)((t3 + 0x0)) = 0x0;
            t3 = (t3 + 0x1);
            if ((int)t4 >= (int)0x4) {
                break;
            }
        }
        t3 = (t1 + 0x12);
        t4 = 0x0;
        for (;;) {
            t4 = (t4 + 0x1);
            *(unsigned char *)((t3 + 0x0)) = 0x0;
            t3 = (t3 + 0x1);
            if ((int)t4 >= (int)0x5) {
                break;
            }
        }
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x17);
        t0 = (t0 + 0x17);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    return 0x4;
}

int FUN_0c02e7c4(void)
{
    int stk[7];
    register int t4;
    register int t9;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t27;
    int t18;

    if ((*(signed char *)0xC540A20) != 0) {
        FUN_0c17b4b0(0x1);
        FUN_0c03ee04((*(signed char *)0xC540A21));
        t4 = (((struct o0_short *)0xC540A24)->v);
        t9 = (unsigned short)t4;
        if (((unsigned short)t4 & 0x200) != 0) {
            t9 = (FUN_0c17e740(((((struct o8_float *)0xC540A24)->v)), ((((struct oC_float *)0xC540A24)->v)), ((((struct o10_float *)0xC540A24)->v))));
        }
        t12 = (((struct o14_int *)0xC540A24)->v);
        if ((int)t12 > 0) {
            t13 = t9;
            t14 = 0xC540A3C;
            t15 = 0x0;
            for (;;) {
                t16 = *(int *)((t14 + 0x0));
                t14 = (t14 + 0x4);
                if (((*(int *)((t16 + 0xC))) != 0) && (t18 = *(int *)0xC20EA8C, t13 = t18, t13 != 3)) {
                    t13 = (FUN_0c02f874(0xC540978, t16));
                }
                t13 = (FUN_0c02e078(0xC540978, t16, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
                t15 = (t15 + 0x1);
                if ((int)t15 >= (int)t12) {
                    break;
                }
            }
            t27 = t13;
        } else {
            t27 = t9;
        }
    }
    return t27;
}

int FUN_0c03aeec(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;
    register int t5;
    register int t11;
    register int t12;
    register int t13;
    register int t18;
    int t2;
    register int t3;
    register int t10;

    if ((unsigned int)0xC3C9E10 < (unsigned int)0xC3C9FB0) {
        t0 = 0xC3C9E10;
        for (;;) {
            if (((*(int *)((t0 + 0x4))) == 18) && (t2 = *(int *)((t0 + 0x8)), t2 == 0xFFFF0000)) {
                break;
            }
            t0 = (t0 + 0x34);
            if ((unsigned int)t0 >= (unsigned int)0xC3C9FB0) {
                t0 = 0x0;
                t4 = 0x0;
                for (;;) {
                    t5 = *(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x4));
                    if ((t5 == 18) || (t5 == 1)) {
                        if ((*(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x18))) == 2) {
                            t3 = 0x1;
                            t3 = ((int)t3 << (int)t0);
                            t4 = (t4 | t3);
                        }
                    }
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x8) {
                        break;
                    }
                }
                return t4;
            }
        }
        t18 = 0xFFFFFFFF;
    } else {
        t11 = 0x0;
        t12 = 0x0;
        for (;;) {
            t13 = *(int *)((((t11 * 0x34) + 0xC3C9E10) + 0x4));
            if ((t13 == 18) || (t13 == 1)) {
                if ((*(int *)((((t11 * 0x34) + 0xC3C9E10) + 0x18))) == 2) {
                    t10 = 0x1;
                    t10 = ((int)t10 << (int)t11);
                    t12 = (t12 | t10);
                }
            }
            t11 = (t11 + 0x1);
            if ((int)t11 >= (int)0x8) {
                break;
            }
        }
        t18 = t12;
    }
    return t18;
}

int FUN_0c03afdc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;
    register int t5;
    register int t11;
    register int t12;
    register int t13;
    register int t18;
    int t2;
    register int t3;
    register int t10;

    if ((unsigned int)0xC3C9E10 < (unsigned int)0xC3C9FB0) {
        t0 = 0xC3C9E10;
        for (;;) {
            if (((*(int *)((t0 + 0x4))) == 18) && (t2 = *(int *)((t0 + 0x8)), t2 == 0xFFFF0000)) {
                break;
            }
            t0 = (t0 + 0x34);
            if ((unsigned int)t0 >= (unsigned int)0xC3C9FB0) {
                t0 = 0x0;
                t4 = 0x0;
                for (;;) {
                    t5 = *(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x4));
                    if ((t5 == 18) || (t5 == 1)) {
                        if ((*(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x20))) == 2) {
                            t3 = 0x1;
                            t3 = ((int)t3 << (int)t0);
                            t4 = (t4 | t3);
                        }
                    }
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x8) {
                        break;
                    }
                }
                return t4;
            }
        }
        t18 = 0xFFFFFFFF;
    } else {
        t11 = 0x0;
        t12 = 0x0;
        for (;;) {
            t13 = *(int *)((((t11 * 0x34) + 0xC3C9E10) + 0x4));
            if ((t13 == 18) || (t13 == 1)) {
                if ((*(int *)((((t11 * 0x34) + 0xC3C9E10) + 0x20))) == 2) {
                    t10 = 0x1;
                    t10 = ((int)t10 << (int)t11);
                    t12 = (t12 | t10);
                }
            }
            t11 = (t11 + 0x1);
            if ((int)t11 >= (int)0x8) {
                break;
            }
        }
        t18 = t12;
    }
    return t18;
}

int FUN_0c03b0cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;
    register int t5;
    register int t11;
    register int t12;
    register int t13;
    register int t18;
    int t2;
    register int t3;
    register int t10;

    if ((unsigned int)0xC3C9E10 < (unsigned int)0xC3C9FB0) {
        t0 = 0xC3C9E10;
        for (;;) {
            if (((*(int *)((t0 + 0x4))) == 18) && (t2 = *(int *)((t0 + 0x8)), t2 == 0xFFFF0000)) {
                break;
            }
            t0 = (t0 + 0x34);
            if ((unsigned int)t0 >= (unsigned int)0xC3C9FB0) {
                t0 = 0x0;
                t4 = 0x0;
                for (;;) {
                    t5 = *(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x4));
                    if ((t5 == 18) || (t5 == 1)) {
                        if ((*(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x28))) == 2) {
                            t3 = 0x1;
                            t3 = ((int)t3 << (int)t0);
                            t4 = (t4 | t3);
                        }
                    }
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x8) {
                        break;
                    }
                }
                return t4;
            }
        }
        t18 = 0xFFFFFFFF;
    } else {
        t11 = 0x0;
        t12 = 0x0;
        for (;;) {
            t13 = *(int *)((((t11 * 0x34) + 0xC3C9E10) + 0x4));
            if ((t13 == 18) || (t13 == 1)) {
                if ((*(int *)((((t11 * 0x34) + 0xC3C9E10) + 0x28))) == 2) {
                    t10 = 0x1;
                    t10 = ((int)t10 << (int)t11);
                    t12 = (t12 | t10);
                }
            }
            t11 = (t11 + 0x1);
            if ((int)t11 >= (int)0x8) {
                break;
            }
        }
        t18 = t12;
    }
    return t18;
}

int FUN_0c03b14a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t7;
    register int t14;
    register int t15;
    register int t16;
    register int t20;
    int t2;
    register int t3;
    register int t5;
    register int t11;
    register int t13;

    if ((unsigned int)0xC3C9E10 < (unsigned int)0xC3C9FB0) {
        t0 = 0xC3C9E10;
        for (;;) {
            if (((*(int *)((t0 + 0x4))) == 18) && (t2 = *(int *)((t0 + 0x8)), t2 == 0xFFFF0000)) {
                break;
            }
            t0 = (t0 + 0x34);
            if ((unsigned int)t0 >= (unsigned int)0xC3C9FB0) {
                t0 = 0x0;
                t6 = 0x0;
                for (;;) {
                    t7 = *(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x4));
                    if ((t7 == 18) || (t7 == 1)) {
                        t5 = (t0 * 0x34);
                        t5 = (t5 + 0xC3C9E10);
                        if ((int)((*(int *)((t5 + 0x2C)))) >= (int)0x5) {
                            t3 = 0x1;
                            t3 = ((int)t3 << (int)t0);
                            t6 = (t6 | t3);
                        }
                    }
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x8) {
                        break;
                    }
                }
                return t6;
            }
        }
        t20 = 0xFFFFFFFF;
    } else {
        t14 = 0x0;
        t15 = 0x0;
        for (;;) {
            t16 = *(int *)((((t14 * 0x34) + 0xC3C9E10) + 0x4));
            if ((t16 == 18) || (t16 == 1)) {
                t13 = (t14 * 0x34);
                t13 = (t13 + 0xC3C9E10);
                if ((int)((*(int *)((t13 + 0x2C)))) >= (int)0x5) {
                    t11 = 0x1;
                    t11 = ((int)t11 << (int)t14);
                    t15 = (t15 | t11);
                }
            }
            t14 = (t14 + 0x1);
            if ((int)t14 >= (int)0x8) {
                break;
            }
        }
        t20 = t15;
    }
    return t20;
}

int FUN_0c03b25a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t7;
    register int t14;
    register int t15;
    register int t16;
    register int t20;
    int t2;
    register int t3;
    register int t5;
    register int t11;
    register int t13;

    if ((unsigned int)0xC3C9E10 < (unsigned int)0xC3C9FB0) {
        t0 = 0xC3C9E10;
        for (;;) {
            if (((*(int *)((t0 + 0x4))) == 18) && (t2 = *(int *)((t0 + 0x8)), t2 == 0xFFFF0000)) {
                break;
            }
            t0 = (t0 + 0x34);
            if ((unsigned int)t0 >= (unsigned int)0xC3C9FB0) {
                t0 = 0x0;
                t6 = 0x0;
                for (;;) {
                    t7 = *(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x4));
                    if ((t7 == 18) || (t7 == 1)) {
                        t5 = (t0 * 0x34);
                        t5 = (t5 + 0xC3C9E10);
                        if ((int)((*(int *)((t5 + 0x2C)))) >= (int)0x6) {
                            t3 = 0x1;
                            t3 = ((int)t3 << (int)t0);
                            t6 = (t6 | t3);
                        }
                    }
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x8) {
                        break;
                    }
                }
                return t6;
            }
        }
        t20 = 0xFFFFFFFF;
    } else {
        t14 = 0x0;
        t15 = 0x0;
        for (;;) {
            t16 = *(int *)((((t14 * 0x34) + 0xC3C9E10) + 0x4));
            if ((t16 == 18) || (t16 == 1)) {
                t13 = (t14 * 0x34);
                t13 = (t13 + 0xC3C9E10);
                if ((int)((*(int *)((t13 + 0x2C)))) >= (int)0x6) {
                    t11 = 0x1;
                    t11 = ((int)t11 << (int)t14);
                    t15 = (t15 | t11);
                }
            }
            t14 = (t14 + 0x1);
            if ((int)t14 >= (int)0x8) {
                break;
            }
        }
        t20 = t15;
    }
    return t20;
}

int FUN_0c03b366(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t7;
    register int t14;
    register int t15;
    register int t16;
    register int t20;
    int t2;
    register int t3;
    register int t5;
    register int t11;
    register int t13;

    if ((unsigned int)0xC3C9E10 < (unsigned int)0xC3C9FB0) {
        t0 = 0xC3C9E10;
        for (;;) {
            if (((*(int *)((t0 + 0x4))) == 18) && (t2 = *(int *)((t0 + 0x8)), t2 == 0xFFFF0000)) {
                break;
            }
            t0 = (t0 + 0x34);
            if ((unsigned int)t0 >= (unsigned int)0xC3C9FB0) {
                t0 = 0x0;
                t6 = 0x0;
                for (;;) {
                    t7 = *(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x4));
                    if ((t7 == 18) || (t7 == 1)) {
                        t5 = (t0 * 0x34);
                        t5 = (t5 + 0xC3C9E10);
                        if ((int)((*(int *)((t5 + 0x2C)))) >= (int)0x3) {
                            t3 = 0x1;
                            t3 = ((int)t3 << (int)t0);
                            t6 = (t6 | t3);
                        }
                    }
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x8) {
                        break;
                    }
                }
                return t6;
            }
        }
        t20 = 0xFFFFFFFF;
    } else {
        t14 = 0x0;
        t15 = 0x0;
        for (;;) {
            t16 = *(int *)((((t14 * 0x34) + 0xC3C9E10) + 0x4));
            if ((t16 == 18) || (t16 == 1)) {
                t13 = (t14 * 0x34);
                t13 = (t13 + 0xC3C9E10);
                if ((int)((*(int *)((t13 + 0x2C)))) >= (int)0x3) {
                    t11 = 0x1;
                    t11 = ((int)t11 << (int)t14);
                    t15 = (t15 | t11);
                }
            }
            t14 = (t14 + 0x1);
            if ((int)t14 >= (int)0x8) {
                break;
            }
        }
        t20 = t15;
    }
    return t20;
}

int FUN_0c03b2e8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t7;
    register int t14;
    register int t15;
    register int t16;
    register int t20;
    int t2;
    register int t3;
    register int t5;
    register int t11;
    register int t13;

    if ((unsigned int)0xC3C9E10 < (unsigned int)0xC3C9FB0) {
        t0 = 0xC3C9E10;
        for (;;) {
            if (((*(int *)((t0 + 0x4))) == 18) && (t2 = *(int *)((t0 + 0x8)), t2 == 0xFFFF0000)) {
                break;
            }
            t0 = (t0 + 0x34);
            if ((unsigned int)t0 >= (unsigned int)0xC3C9FB0) {
                t0 = 0x0;
                t6 = 0x0;
                for (;;) {
                    t7 = *(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x4));
                    if ((t7 == 18) || (t7 == 1)) {
                        t5 = (t0 * 0x34);
                        t5 = (t5 + 0xC3C9E10);
                        if ((int)((*(int *)((t5 + 0x2C)))) >= (int)0x5) {
                            t3 = 0x1;
                            t3 = ((int)t3 << (int)t0);
                            t6 = (t6 | t3);
                        }
                    }
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x8) {
                        break;
                    }
                }
                return t6;
            }
        }
        t20 = 0xFFFFFFFF;
    } else {
        t14 = 0x0;
        t15 = 0x0;
        for (;;) {
            t16 = *(int *)((((t14 * 0x34) + 0xC3C9E10) + 0x4));
            if ((t16 == 18) || (t16 == 1)) {
                t13 = (t14 * 0x34);
                t13 = (t13 + 0xC3C9E10);
                if ((int)((*(int *)((t13 + 0x2C)))) >= (int)0x5) {
                    t11 = 0x1;
                    t11 = ((int)t11 << (int)t14);
                    t15 = (t15 | t11);
                }
            }
            t14 = (t14 + 0x1);
            if ((int)t14 >= (int)0x8) {
                break;
            }
        }
        t20 = t15;
    }
    return t20;
}

int FUN_0c03ac42(void)
{
    register int t3;

    FUN_0c187b48(0xC3CBA20, 0x0, 0xA00);
    FUN_0c187b48(0xC3CC420, 0x0, 0x200);
    FUN_0c03a6c4();
    (((struct o1E_uchar *)0xC3C9FB0)->v) = 0x0;
    (((struct o20_uchar *)0xC3C9FB0)->v) = 0x0;
    (((struct o21_uchar *)0xC3C9FB0)->v) = 0x0;
    (((struct o22_uchar *)0xC3C9FB0)->v) = 0x0;
    (((struct o23_uchar *)0xC3C9FB0)->v) = 0x0;
    (((struct o24_uchar *)0xC3C9FB0)->v) = 0x0;
    (((struct o4_uint *)0xC3C9FB0)->v) = 0xFFFFFFFF;
    *(unsigned int *)0xC4B1078 = 0x0;
    (((struct o0_uint *)0xC3C9FB0)->v) = 0x0;
    t3 = 0xC3C9E10;
    for (;;) {
        *(unsigned int *)((t3 + 0x4)) = 0x2;
        *(unsigned int *)((t3 + 0x8)) = 0xFFFF0000;
        *(unsigned int *)((t3 + 0xC)) = 0x7A;
        *(unsigned int *)((t3 + 0x14)) = 0x0;
        *(unsigned int *)((t3 + 0x18)) = 0x0;
        *(unsigned int *)((t3 + 0x1C)) = 0x0;
        *(unsigned int *)((t3 + 0x2C)) = 0x0;
        *(unsigned int *)((t3 + 0x30)) = 0x0;
        t3 = (t3 + 0x34);
        if ((unsigned int)t3 >= (unsigned int)0xC3C9FB0) {
            break;
        }
    }
    return FUN_0c2b2370(0x7A, 0xFF, 0x0, 0xC03AC3A);
}

int FUN_0c04bb00(void)
{
    register int t0;
    register int t1;
    register int t6;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x5, 0x0, 0x1);
        t6 = t1;
        if (t1 != 0) {
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), t0, 0xE, (*(int *)0xC4B40CC));
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            (((struct oAC_ushort *)(t1))->v) = 0xF;
            (((struct oA9_uchar *)(t1))->v) = 0x80;
            *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t1 + 0x4)) = 0xC04B808;
            *(unsigned char *)((t1 + 0x2)) = t0;
            *(unsigned short *)((t1 + 0x1C)) = ((((t0 << 2) + t0) << 1) + 0x78);
            t6 = ((((t0 << 2) + t0) << 1) + 0x78);
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t6;
}

int FUN_0c02c96a(void)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)0xC541F40;
    if ((unsigned char)t2 != 0) {
        if ((unsigned char)t2 != 1) {
            return FUN_0c02cb10();
        }
        FUN_0c1837cc((*(int *)0xC305430), 0xC305434);
        if (((*(signed char *)0xC30543E) != 0) && (t0 = *(signed char *)0xC309828, t0 != 0)) {
            t0 = FUN_0c0209c6((*(signed char *)0xC3054C4));
            if (t0 == 5) {
                *(volatile signed char *)0xC3054C4;
                t2 = FUN_0c0206d6();
                if (t2 != 0) {
                    FUN_0c020be4((*(signed char *)0xC3054C4));
                    return FUN_0c02c8c2();
                }
                return t2;
            }
            return t0;
        }
    } else {
        FUN_0c02c7dc();
        FUN_0c1837cc((*(int *)0xC305430), 0xC305434);
        if (((*(signed char *)0xC30543E) != 0) && (t1 = *(signed char *)0xC309828, t1 != 0)) {
            t0 = FUN_0c0209c6((*(signed char *)0xC3054C4));
            if (t0 == 5) {
                *(volatile signed char *)0xC3054C4;
                t1 = FUN_0c0206d6();
                if (t1 != 0) {
                    FUN_0c020be4((*(signed char *)0xC3054C4));
                    return FUN_0c02c8c2();
                }
                return t1;
            }
            return t0;
        }
    }
    (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
    (((struct o2_uchar *)0xC541F40)->v) = 0x0;
    (((struct o1_uchar *)0xC541F40)->v) = 0x0;
    (((struct o3_uchar *)0xC541F40)->v) = 0x1;
    return 0x1;
}

int FUN_0c059d30(void)
{
    register int t0;
    register int t24;
    register int t19;

    t0 = 0x0;
    for (;;) {
        FUN_0c059df2(t0, 0x4D);
        t24 = 0x3714;
        if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2))) == 10) {
                FUN_0c059e60(((t0 * 0x3938) + 0xC532498), 0x21);
            }
            if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2))) == 11) {
                FUN_0c059e60(((t0 * 0x3938) + 0xC532498), 0x26);
            }
            if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2))) == 8) {
                FUN_0c059e60(((t0 * 0x3938) + 0xC532498), 0x22);
            }
            t19 = *(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2));
            t24 = t19;
            if (t19 == 2) {
                t24 = (FUN_0c059e60(((t0 * 0x3938) + 0xC532498), 0x22));
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t24;
}

int FUN_0c0737e8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2));
        t1 = t2;
        if (t2 != 12) {
            t3 = t2;
            if (t2 != 13) {
                t2 = (*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x3714)));
                t4 = 0x3714;
                if (t2 != 0) {
                    u0 = 0.0f;
                    u1 = ((((struct o160_float *)(((t0 * 0x3938) + 0xC532498)))->v));
                    t5 = 0x160;
                    if (u1 > u0) {
                        t6 = *(signed char *)((a4 + 0x1));
                        t7 = t6;
                        if (t6 != t0) {
                            t2 = (*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x3719)));
                            t6 = (*(signed char *)((a4 + 0x3719)));
                            t8 = 0x3719;
                            if (t6 != t2) {
                                t6 = 0xC064F80;
                                t9 = FUN_0c064f80(((t0 * 0x3938) + 0xC532498));
                                t10 = t9;
                                if (t9 != 0) {
                                    t10 = (FUN_0c085cac(((t0 * 0x3938) + 0xC532498), 0x11, 0x0));
                                }
                                t8 = t10;
                            } else {
                                t9 = t6;
                                t10 = t2;
                                u2 = u1;
                                u3 = u0;
                            }
                            t7 = t8;
                            t8 = t9;
                            t9 = t10;
                            u4 = u2;
                            u2 = u3;
                        } else {
                            t8 = t6;
                            t9 = t2;
                            u4 = u1;
                            u2 = u0;
                        }
                        t5 = t7;
                        t7 = t8;
                        t8 = t9;
                        u3 = u4;
                        u4 = u2;
                    } else {
                        t7 = t6;
                        t8 = t2;
                        u3 = u1;
                        u4 = u0;
                    }
                    t4 = t5;
                    t5 = t7;
                    t7 = t8;
                    u2 = u3;
                    u3 = u4;
                } else {
                    t5 = t6;
                    t7 = t2;
                    u2 = u1;
                    u3 = u0;
                }
                t3 = t4;
                t4 = t5;
                t5 = t7;
                u4 = u2;
                u2 = u3;
            } else {
                t4 = t6;
                t5 = t2;
                u4 = u1;
                u2 = u0;
            }
            t1 = t3;
            t3 = t4;
            t4 = t5;
            u3 = u4;
            u4 = u2;
        } else {
            t3 = t6;
            t4 = t2;
            u3 = u1;
            u4 = u0;
        }
        u1 = u3;
        u0 = u4;
        t0 = (t0 + 0x1);
        t6 = t3;
        t2 = t4;
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c074584(int a4, int a5)
{
    register int t1;
    register int t7;
    register int t8;

    t1 = *(signed char *)((0x12 + ((((struct o418_int *)(a4))->v))));
    if (((unsigned char)t1 & 0x1) != 1) {
        t7 = *(int *)((((*(signed char *)((a4 + 0x373E))) << 2) + 0xC25AEA4));
        t8 = *(short *)((a5 + 0x0));
        if (!(0.0f > (*(float *)((t7 + (t8 << 2)))))) {
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(((((struct o3850_int *)(a4))->v)))) * (*(float *)((t7 + ((*(short *)((a5 + 0x0))) << 2)))));
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16(((((struct o3850_int *)(a4))->v)))) * (*(float *)((t7 + ((*(short *)((a5 + 0x0))) << 2)))));
            *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) + 0x1);
            return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        }
        return (t8 << 2);
    }
    return ((unsigned char)t1 & 0x1);
}


int FUN_0c0879c4(int a4)
{
    int stk[5];
    register int t10;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0xC;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xC, 0xFFFFFFFF, 0x3, 0xC);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x6);
        t10 = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0xD;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD, 0xFFFFFFFF, 0x3, 0xD);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x6);
        t10 = 0x1;
    }
    (((struct o16_uchar *)(a4))->v) = t10;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}

int FUN_0c08b2d0(int a4)
{
    int stk[5];
    register int t10;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x5C;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x5C, 0xFFFFFFFF, 0x3, 0x5C);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x3);
        t10 = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x5E;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x5E, 0xFFFFFFFF, 0x3, 0x5E);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12));
        FUN_0c085eac(a4, 0x3);
        t10 = 0x1;
    }
    (((struct o16_uchar *)(a4))->v) = t10;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}

int FUN_0c0908b4(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x19, (t0), 0x1, 0x19);
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
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    (((struct o446_uchar *)(a4))->v) = 0x2;
    (((struct o447_uchar *)(a4))->v) = 0x3;
    (((struct o1668_uchar *)(a4))->v) = 0x0;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c0b11cc(int a4)
{
    int stk[5];
    register int t1;
    register int t12;

    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t1 = *(short *)((a4 + 0x1C));
    t12 = t1;
    if ((int)t1 > (int)0x6) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
            *(unsigned short *)((a4 + 0x1E)) = 0x5;
        }
        FUN_0c0ae6dc(a4, 0x0, ((int)stk + 8));
        *(int *)((int)stk + 4) = 0x1;
        FUN_0c142a58(a4, 0x2, 0xFFFFFFFF, (((int)stk + 4) + 0x4), 0x1);
        FUN_0c142430(a4, 0x0);
        FUN_0c0ae6dc(a4, 0x1, (((int)stk + 4) + 0x4));
        *(int *)((int)stk + 0) = 0x2;
        FUN_0c142a58(a4, 0x3, 0xFFFFFFFF, (((int)stk + 0) + 0x8), 0x2);
        t12 = (FUN_0c142430(a4, 0x1));
    }
    return t12;
}

int FUN_0c0c22e6(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x2));
    t1 = t0;
    if (t0 == 8) {
        t1 = t0;
        if ((*(signed char *)((0xC535BB4 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 0) {
            t1 = 0xC;
        }
    }
    t0 = FUN_0c0c43c0(a4, (unsigned char)a5);
    if (t0 != 0) {
        t0 = (0xC25BD20 + ((((*(signed char *)((0xC27630E + ((unsigned short)(unsigned char)a5 * (unsigned short)0x1C)))) << 2) << 2) << 2));
    } else {
        t0 = (0xC25BD20 + ((((*(signed char *)((0xC2738C1 + ((unsigned short)(unsigned char)a5 * (unsigned short)0x34)))) << 2) << 2) << 2));
    }
    return FUN_0c080320(a4, (*(float *)((((t1 << 2) + t0) + 0x0))));
}

int FUN_0c0cb982(int a4)
{
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    FUN_0c0cb776(a4);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC0CBA34);
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0cb6a4(a4);
    *(unsigned short *)((a4 + 0x1C)) = 0x438;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0d522c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_2 = a4;
    v0_1 = *(signed char *)((v0_2 + 0x15));
    v0_0 = (v0_1);
    v0_2 = (v0_2);
    if ((v0_1 == 0)) goto L_C0D5242;
    if ((v0_0 == 1)) goto L_C0D5254;
    L_C0D52A4:;
    return v0_0;
    L_C0D5254:;
    (((struct oA8_uchar *)(v0_2))->v) = ((((*(short *)((v0_2 + 0x1C))) & 0x4) >> 1) >> 1);
    v0_1 = *(short *)((v0_2 + 0x1C));
    *(unsigned short *)((v0_2 + 0x1C)) = (v0_1 - 1);
    v0_0 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0D52A4;
    FUN_0c0c2d56(v0_2, 0x2, (*(signed char *)((v0_2 + 0x1))));
    (((struct oA8_uchar *)(v0_2))->v) = 0x1;
    FUN_0c0c2ab6(v0_2, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    (((struct o48_float *)(v0_2))->v) = 1.0f;
    (((struct o44_float *)(v0_2))->v) = 1.0f;
    (((struct o40_float *)(v0_2))->v) = 1.0f;
    v0_0 = (0x40);
    goto L_C0D52A4;
    L_C0D5242:;
    (((struct o12E_ushort *)(v0_2))->v) = 0x0;
    *(unsigned short *)((v0_2 + 0x1C)) = 0x3C;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    goto L_C0D5254;
}

int FUN_0c0df91c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC54223C) != 1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        
        t1 = t0;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + a4));
            t2 = (*(int *)((t2 + 0x0)));
            FUN_0c0d04c4((t2 + 0x6), (t2 + 0x78));
            t0 = (t0 + 0x1);
        }
        t1 = 0xC0;
    }
    return t1;
}

int FUN_0c0e0fec(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        
        t1 = t0;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + a4));
            t2 = (*(int *)((t2 + 0x0)));
            FUN_0c0d04c4((t2 + 0x6), (t2 + 0x78));
            t0 = (t0 + 0x1);
        }
        t1 = 0xC0;
    }
    return t1;
}

int FUN_0c0e4828(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        
        t1 = t0;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) + 0x64);
        }
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + a4));
            t2 = (*(int *)((t2 + 0x0)));
            FUN_0c0d04c4((t2 + 0x6), (t2 + 0x78));
            t0 = (t0 + 0x1);
        }
        t1 = 0xC0;
    }
    return t1;
}

int FUN_0c120888(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            u0 = (((struct o48_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
            if (!(1.0f > (u0 + 0.100000001f))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o48_float *)(a4))->v) = 1.0f;
            }
            u0 = (((struct o48_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = u0;
            (((struct o40_float *)(a4))->v) = u0;
            t1 = 0x40;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
        if (!(1.0f > (u0 + 0.100000001f))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o48_float *)(a4))->v) = 1.0f;
        }
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u0;
        (((struct o40_float *)(a4))->v) = u0;
        t0 = 0x40;
    }
    return t0;
}

int FUN_0c12105e(int a4, int a5)
{
    register int t0;
    register int t1;

    *(unsigned int *)(((a5 + 0x14) + 0x0)) = ((int)((int)a4 / (int)0xE10));
    t0 = (int)((int)a4 % (int)0xE10);
    *(unsigned int *)((a5 + 0x10)) = ((int)((int)(*(int *)(((a5 + 0x14) + 0x0))) % (int)0xA));
    *(unsigned int *)(((a5 + 0x14) + 0x0)) = ((int)((int)(*(int *)(((a5 + 0x14) + 0x0))) / (int)0xA));
    *(unsigned int *)(((a5 + 0xC) + 0x0)) = ((int)((int)t0 / (int)0x3C));
    t1 = (int)((int)t0 % (int)0x3C);
    *(unsigned int *)((a5 + 0x8)) = ((int)((int)(*(int *)(((a5 + 0xC) + 0x0))) % (int)0xA));
    *(unsigned int *)(((a5 + 0xC) + 0x0)) = ((int)((int)(*(int *)(((a5 + 0xC) + 0x0))) / (int)0xA));
    *(unsigned int *)(((a5 + 0x4) + 0x0)) = t1;
    *(unsigned int *)((a5 + 0x0)) = ((int)((int)t1 % (int)0xA));
    t0 = (int)((int)(*(int *)(((a5 + 0x4) + 0x0))) / (int)0xA);
    *(unsigned int *)(((a5 + 0x4) + 0x0)) = t0;
    return t0;
}

int FUN_0c125e4c(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 20) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x38E);
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0xAAA);
    t0 = 0x2C;
    if (!(((((struct o2C_float *)(a4))->v)) > 0.0f)) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c13dd14(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0x20;
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o20_ushort *)(a4))->v) = 0x5;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = *(signed char *)((((0x41C + a4) + t0) + 0x0));
            *(unsigned char *)((((0x41C + a4) + t0) + 0x0)) = (t2 + 0x1);
            if ((int)(signed char)(t2 + 0x1) > (int)0x7) {
                *(unsigned char *)((((0x41C + a4) + t0) + 0x0)) = 0x0;
            }
            FUN_0c037498((*(int *)((((t0 << 2) + (0xC4 + a4)) + 0x0))), (*(signed char *)((((0x41C + a4) + t0) + 0x0))), 0x9, (*(int *)0xC4B40CC));
            t0 = (t0 + 0x1);
        }
        t1 = 0xC0;
    }
    return t1;
}

int FUN_0c143074(int a4, int a5)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = (0x20);
    v0_0 = (v0_1);
    if ((((((struct o20_short *)(v0_1))->v)) == 0)) goto L_C14308C;
    *(unsigned short *)((v0_0 + v0_3)) = ((*(short *)((v0_0 + v0_3))) - 1);
    L_C1430DA:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C1430EA;
    L_C1430E6:;
    v0_3 = ((FUN_0c14304a(v0_0)));
    L_C1430EA:;
    return v0_3;
    L_C14308C:;
    if ((((((struct o404_int *)(v0_0))->v)) == 0)) goto L_C1430DA;
    v0_3 = ((int (*)(int, int))(FUN_0c187798))(v0_1, v0_2);
    w0_1 = FUN_0c17c450((((int)stk + 0) + 0xC));
    w0_0 = (w0_1);
    if ((w0_1 == 0.0f)) goto L_C1430DA;
    v0_1 = ((int (*)(int, int))(FUN_0c187798))(v0_1, v0_2);
    w0_1 = FUN_0c17c450(((int)stk + 0));
    w0_0 = (w0_1);
    if ((w0_1 == 0.0f)) goto L_C1430DA;
    w0_1 = FUN_0c0e2220((((int)stk + 0) + 0xC), ((int)stk + 0));
    w0_0 = (w0_1);
    if ((-0.5f > w0_1)) goto L_C1430E6;
    goto L_C1430DA;
}

int FUN_0c14bbce(int a4)
{
    register float t3;

    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        t3 = FUN_0c0b4b7a(a4, 0x1, (((((struct o41C_float *)(a4))->v)) - ((((struct o160_float *)(a4))->v))));
        FUN_0c0b4b4e(a4, 0x1);
        (((struct o41C_float *)(a4))->v) = ((((struct o160_float *)(a4))->v));
        if (t3 > 0.0f) {
            (((struct o130_uchar *)(a4))->v) = 0xA;
        } else {
            (((struct o130_uchar *)(a4))->v) = 0x0;
        }
    }
    if ((int)(*(signed char *)((a4 + 0x130))) > 0) {
        FUN_0c14bb80(a4, 0x1);
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        return 0x130;
    }
    return FUN_0c14bb80(a4, 0x0);
}

int FUN_0c15bf56(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o18_float *)(t1))->v)));
        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + ((((struct o1C_float *)(t1))->v)));
        (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) + ((((struct o20_float *)(t1))->v)));
        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x1800);
        if ((unsigned int)t0 >= (unsigned int)0xC) {
            break;
        }
    }
    return 0x7C;
}


int FUN_0c03d3b6(int a4)
{
    register int t8;

    *(unsigned char *)(((0xC54234A + ((a4 << 2) + a4)) + 0x0)) = (*(signed char *)0xC3CC50B);
    *(unsigned char *)(((0xC54234A + ((a4 << 2) + a4)) + 0x1)) = (*(signed char *)0xC3CC50C);
    *(unsigned char *)(((0xC54234A + ((a4 << 2) + a4)) + 0x2)) = (*(signed char *)0xC3CC50D);
    *(unsigned char *)(((0xC54234A + ((a4 << 2) + a4)) + 0x3)) = (*(signed char *)0xC3CC50E);
    *(unsigned char *)(((((a4 << 2) + a4) + 0xC54234A) + 0x4)) = (*(signed char *)0xC3CC50F);
    *(unsigned char *)(((0xC542367 + (a4 << 2)) + 0x0)) = (*(signed char *)0xC3CC510);
    *(unsigned char *)(((0xC542367 + (a4 << 2)) + 0x1)) = (*(signed char *)0xC3CC511);
    *(unsigned char *)(((0xC542367 + (a4 << 2)) + 0x2)) = (*(signed char *)0xC3CC512);
    t8 = *(signed char *)0xC3CC513;
    *(unsigned char *)((((a4 << 2) + 0xC542367) + 0x3)) = t8;
    return t8;
}

int FUN_0c06570c(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = *(signed char *)((a5 + 0x1));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        return t0;
                    }
                    return FUN_0c06551a(a4, a5, a6, f4);
                }
                return FUN_0c065434(a4, a5, a6, f4, f5, f6, f7, f8, f9, f10);
            }
            return FUN_0c065396(a4, a5, a6, f4);
        }
        t0 = *(signed char *)((a5 + 0x1));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return FUN_0c0652c4(a4, a5, a6, f4, f5, f6, f7, f8, f9, f10);
            }
            return FUN_0c0651f8(a4, a5, a6);
        }
        return FUN_0c06514e(a4, a5, a6);
    }
    t0 = *(signed char *)((a5 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0650b0(a4, a5, a6, f4);
        }
        return FUN_0c064fd4(a4, a5, a6);
    }
    return FUN_0c064fba(a4, a5, a6);
}

int FUN_0c07f56a(int a4)
{
    register int t0;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    t0 = FUN_0c07d15c(a4);
    if (t0 != 0) {
        if ((((*(signed char *)0xC54235E) != 0) && (t2 = *(signed char *)0xC542363, (t0 - 1) == t2)) || ((t3 = *(signed char *)(((((t0 - 1) * 0x3938) + 0xC532498) + 0x371D)), t3 == 2) || ((t4 = *(signed char *)((a4 + 0x3715)), t5 = (int)(((unsigned int)(t4 << 2)) >> 31), t6 = *(signed char *)(((((t4 << 2) << 1) + 0xC25AA84) + 0x0)), t6 == 0) || ((t7 = *(signed char *)(((((t0 - 1) * 0x3938) + 0xC532498) + 0x3715)), t8 = (int)(((unsigned int)(t7 << 2)) >> 31), t9 = *(signed char *)(((((t7 << 2) << 1) + 0xC25AA84) + 0x1)), t9 == 0) || ((t10 = *(signed char *)(((((t0 - 1) * 0x3938) + 0xC532498) + 0x371D)), t10 == 1) || (t11 = *(signed char *)(((((t0 - 1) * 0x3938) + 0xC532498) + 0x3719)), t12 = *(signed char *)((a4 + 0x3719)), t12 == t11)))))) {
            return 0x0;
        }
        return t0;
    }
    return 0x0;
}

int FUN_0c0847dc(int a4)
{
    register int t0;

    if (((((struct o160_float *)(a4))->v)) == 0.0f) {
        t0 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0xB, 0xFFFFFFFF, 0x0, 0xB));
    } else {
        t0 = *(signed char *)((a4 + 0x2));
        if ((t0 != 6) && ((t0 != 7) && ((t0 != 8) && (t0 != 10)))) {
            t0 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0x5, 0xFFFFFFFF, 0x0, 0x5));
        } else {
            t0 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0x6, 0xFFFFFFFF, 0x0, 0x6));
        }
    }
    return t0;
}
