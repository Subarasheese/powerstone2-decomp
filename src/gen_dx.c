/* Straight-line functions with calls and guards (batch gen_dx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03aeec(int, int, int);
int FUN_0c03d3b6(int);
extern int FUN_0c03d44a();
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c047064(void);
int FUN_0c047114(void);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05f22c(int);
int FUN_0c0720f8(int);
int FUN_0c072260(int);
int FUN_0c072504(int);
int FUN_0c0725bc(int);
int FUN_0c07e3ae(int, int);
int FUN_0c084a9e(int);
int FUN_0c104e6a(int, int);
int FUN_0c115e84(int);
int FUN_0c115eae(int);
int FUN_0c115fd2(int);
int FUN_0c116c12(int, int);
int FUN_0c1171f0(int);
int FUN_0c1174e4(int, int);
int FUN_0c117944(int, ...);
int FUN_0c117a6e(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c1186d4(int);
int FUN_0c1187ba(void);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c15fa0c(int, int, int, int, float);
int FUN_0c166772(int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c2b27ae(int, int);
int FUN_0c2b289c(int, int);
int FUN_0c2b2ba8(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c11e20c(int);
int thunk_FUN_0c11e28e(int);
int vmu_lcd_refresh(int);
int FUN_0c04fe1c(void);
int FUN_0c166b08(int a4, int a5, int a6, int a7);
int FUN_0c113198(int a4, int a5, int a6, int a7);
void FUN_0c11664c(int a4);
int FUN_0c03a7bc(int a4, int a5, int a6, int a7);
int FUN_0c0725fa(int a4);
int FUN_0c04666c(int a4, int a5, int a6);

int FUN_0c04fe1c(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x8, 0x0, 0xC);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04F8C4;
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 64.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 64.0f);
        (((struct o30_float *)(t0))->v) = -10.0f;
        (((struct o44_float *)(t0))->v) = 0.015625f;
        (((struct o40_float *)(t0))->v) = 0.015625f;
        (((struct o48_float *)(t0))->v) = 1.56249996e-07f;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 2.34375f);
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o0_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o4_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o2C_int *)0xC2413D8)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o0_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o4_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o30_int *)0xC2413D8)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct oC_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o10_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o34_int *)0xC2413D8)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oD0_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct oC_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o10_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o38_int *)0xC2413D8)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oD4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o18_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o1C_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o3C_int *)0xC2413D8)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oD8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o18_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o1C_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o0_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oDC_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o24_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o28_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o4_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oE0_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o30_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o34_float *)0xC241398)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o8_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oE4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o3C_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o0_float *)0xC2413D8)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct oC_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oE8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o3C_float *)0xC241398)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o0_float *)0xC2413D8)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o10_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oEC_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o8_float *)0xC2413D8)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct oC_float *)0xC2413D8)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o14_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t2 = (((struct oF0_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o6C_float *)(t2))->v) = (((((struct o14_float *)0xC2413D8)->v)) + -150.0f);
        (((struct o70_float *)(t2))->v) = ((((struct o18_float *)0xC2413D8)->v));
        (((struct o74_float *)(t2))->v) = 40000.0f;
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((struct o18_int *)0xC241418)->v)) * 65536.0f) / 360.0f);
        t1 = 0x80;
    }
    return t1;
}

int FUN_0c166b08(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o0_int *)0xC2A3438)->v)));
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) - ((((struct o4_int *)0xC2A3438)->v)));
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o8_int *)0xC2A3438)->v)));
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x1E) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
                FUN_0c0588bc((((((struct oCC_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
            }
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                t1 = *(signed char *)((a4 + 0x2));
                switch (t1) {
                case 0:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7A);
                    }
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    break;
                case 1:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7B);
                    }
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    break;
                case 2:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7C);
                    }
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    break;
                case 3:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7D);
                    }
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    break;
                case 4:
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        FUN_0c07e3ae(a4, 0x7E);
                    }
                    FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (*(float *)0xC16701C));
                    break;
                }
            } else {
                if (((((struct o404_int *)(a4))->v)) != 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    t1 = *(signed char *)((a4 + 0x2));
                    switch (t1) {
                    case 0:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7A);
                        }
                        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                        break;
                    case 1:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7B);
                        }
                        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                        break;
                    case 2:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7C);
                        }
                        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                        break;
                    case 3:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7D);
                        }
                        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                        break;
                    case 4:
                        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                            FUN_0c07e3ae(a4, 0x7E);
                        }
                        FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (*(float *)0xC16701C));
                        break;
                    }
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            if (((int)t1 >= (int)0x14) && ((int)t1 < (int)0x1E)) {
                FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
            }
            FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t1 = *(signed char *)((a4 + 0x2));
            if (t1 != 0) {
                if ((t1 != 1) && (t1 != 2)) {
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                    t2 = (short)(t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x5A) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t1 = t2;
                } else {
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                        t2 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t2 + 0x1);
                        t3 = (short)(t2 + 0x1);
                        if ((int)(short)(t2 + 0x1) > (int)0x5A) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t3 = 0x14;
                        }
                        t2 = t3;
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t1 = t2;
                }
                t2 = t1;
            } else {
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                    t3 = (short)(t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) > (int)0x5A) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t3 = 0x14;
                    }
                    t1 = t3;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                t2 = t1;
            }
            return t2;
        }
        if (t0 == 2) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 4.0f);
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 4.0f);
    FUN_0c166772((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), (*(signed char *)((a4 + 0x2))));
    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)0xC4B40CC;
    if ((t0 != 0) && (t0 != 1)) {
        if ((t0 != 2) && (t0 != 3)) {
            if (t0 != 4) {
            } else {
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0x34, t1);
                FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x4, 0x34, (*(int *)0xC4B40CC));
                FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x6, 0x34, (*(int *)0xC4B40CC));
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
                *(volatile int *)((a4 + 0xC4));
                FUN_0c187798();
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
                *(volatile int *)((a4 + 0xC8));
                FUN_0c187798();
                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0x1F;
                *(volatile int *)((a4 + 0xCC));
                FUN_0c187798();
                FUN_0c187798();
            }
        } else {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x34, t1);
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x34, (*(int *)0xC4B40CC));
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
            *(volatile int *)((a4 + 0xC4));
            FUN_0c187798();
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
            *(volatile int *)((a4 + 0xC8));
            FUN_0c187798();
            FUN_0c187798();
        }
    } else {
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x34, t1);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        *(volatile int *)((a4 + 0xC4));
        FUN_0c187798();
        FUN_0c187798();
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o0_int *)0xC2A3438)->v)));
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - ((((struct o4_int *)0xC2A3438)->v)));
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o8_int *)0xC2A3438)->v)));
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x1E) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
        FUN_0c0588bc((((((struct oCC_int *)(a4))->v)) + 0x84), 0xC2A3338, 0xC2A332C, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        t0 = *(signed char *)((a4 + 0x2));
        switch (t0) {
        case 0:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7A);
            }
            FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            break;
        case 1:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7B);
            }
            FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            break;
        case 2:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7C);
            }
            FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            break;
        case 3:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7D);
            }
            FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
            break;
        case 4:
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                FUN_0c07e3ae(a4, 0x7E);
            }
            FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (*(float *)0xC16701C));
            break;
        }
    } else {
        if (((((struct o404_int *)(a4))->v)) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            t0 = *(signed char *)((a4 + 0x2));
            switch (t0) {
            case 0:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7A);
                }
                FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                break;
            case 1:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7B);
                }
                FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                break;
            case 2:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7C);
                }
                FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                break;
            case 3:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7D);
                }
                FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                break;
            case 4:
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                    FUN_0c07e3ae(a4, 0x7E);
                }
                FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (*(float *)0xC16701C));
                break;
            }
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0x14) && ((int)t0 < (int)0x1E)) {
        FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
    }
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x5A) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            t0 = t1;
        } else {
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                t2 = (short)(t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x5A) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                t1 = t2;
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x1) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t2 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x5A) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c113198(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
                t1 = (t1 + 0x4);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
                if ((unsigned int)t1 >= (unsigned int)0x28) {
                    break;
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            t2 = (short)(t1 + 0x1);
            if ((int)(short)(t1 + 0x1) < (int)0x10) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t2 = 0x0;
            }
            return t2;
        }
        if (t0 == 2) {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x6, 0xC, (*(int *)0xC4B410C));
            if (((((struct o8_int *)0xC474774)->v)) != 0) {
                t1 = (((struct o8_int *)0xC474774)->v);
                *(volatile int *)0xC4B410C;
                FUN_0c1174e4(((((struct oC8_int *)(a4))->v)), ((*(int *)((((t1 - 1) << 2) + 0xC4739AC))) - 1));
            }
            FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x7, 0xC, (*(int *)0xC4B410C));
            if (((((struct oC_int *)0xC474774)->v)) != 0) {
                t1 = (((struct oC_int *)0xC474774)->v);
                *(volatile int *)0xC4B410C;
                FUN_0c1174e4(((((struct oCC_int *)(a4))->v)), ((*(int *)((((t1 - 1) << 2) + 0xC4739EC))) - 1));
            }
            FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x8, 0xC, (*(int *)0xC4B410C));
            if (((((struct o10_int *)0xC474774)->v)) != 0) {
                t1 = (((struct o10_int *)0xC474774)->v);
                *(volatile int *)0xC4B410C;
                FUN_0c1174e4(((((struct oD0_int *)(a4))->v)), ((*(int *)((((t1 - 1) << 2) + 0xC4739CC))) - 1));
            }
            FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x9, 0xC, (*(int *)0xC4B410C));
            if (((((struct o14_int *)0xC474774)->v)) != 0) {
                t1 = (((struct o14_int *)0xC474774)->v);
                *(volatile int *)0xC4B410C;
                FUN_0c1174e4(((((struct oD4_int *)(a4))->v)), ((*(int *)((((t1 - 1) << 2) + 0xC473A0C))) - 1));
            }
            t1 = (((struct o0_int *)0xC474774)->v);
            if (t1 != 0) {
                if (t1 != 1) {
                    if (t1 != 2) {
                        t2 = t1;
                        if (t1 != 3) {
                        } else {
                            (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x10)))))->v));
                            (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x10)))))->v));
                            t2 = 0x70;
                        }
                        t1 = t2;
                    } else {
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0xC)))))->v));
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0xC)))))->v));
                        t1 = 0x70;
                    }
                    t2 = t1;
                } else {
                    (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
                    (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
                    t2 = 0x70;
                }
                t1 = t2;
            } else {
                (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v));
                (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v));
                t1 = 0x70;
            }
            return t1;
        }
        if (t0 == 10) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            u0 = *(float *)0xC113688;
            t1 = 0x0;
            for (;;) {
                t2 = ((0xC4 + a4) + t1);
                t1 = (t1 + 0x4);
                (((struct o90_float *)((*(int *)((t2 + 0x0)))))->v) = u0;
                if ((unsigned int)t1 >= (unsigned int)0x28) {
                    break;
                }
            }
            return 0x90;
        }
        if (t0 == 11) {
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
                t1 = (t1 + 0x4);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
                if ((unsigned int)t1 >= (unsigned int)0x28) {
                    break;
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                return FUN_0c03f346(a4, 0x10, t2, a7);
            }
            return (short)(t1 + 0x1);
        }
        t1 = t0;
        if (t0 == 99) {
            (((struct o14_uchar *)(a4))->v) = 0xA;
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0xC, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x6, 0xC, (*(int *)0xC4B410C));
    if (((((struct o8_int *)0xC474774)->v)) != 0) {
        t0 = (((struct o8_int *)0xC474774)->v);
        *(volatile int *)0xC4B410C;
        FUN_0c1174e4(((((struct oC8_int *)(a4))->v)), ((*(int *)((((t0 - 1) << 2) + 0xC4739AC))) - 1));
    }
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x7, 0xC, (*(int *)0xC4B410C));
    if (((((struct oC_int *)0xC474774)->v)) != 0) {
        t0 = (((struct oC_int *)0xC474774)->v);
        *(volatile int *)0xC4B410C;
        FUN_0c1174e4(((((struct oCC_int *)(a4))->v)), ((*(int *)((((t0 - 1) << 2) + 0xC4739EC))) - 1));
    }
    FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x8, 0xC, (*(int *)0xC4B410C));
    if (((((struct o10_int *)0xC474774)->v)) != 0) {
        t0 = (((struct o10_int *)0xC474774)->v);
        *(volatile int *)0xC4B410C;
        FUN_0c1174e4(((((struct oD0_int *)(a4))->v)), ((*(int *)((((t0 - 1) << 2) + 0xC4739CC))) - 1));
    }
    FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x9, 0xC, (*(int *)0xC4B410C));
    if (((((struct o14_int *)0xC474774)->v)) != 0) {
        t0 = (((struct o14_int *)0xC474774)->v);
        *(volatile int *)0xC4B410C;
        FUN_0c1174e4(((((struct oD4_int *)(a4))->v)), ((*(int *)((((t0 - 1) << 2) + 0xC473A0C))) - 1));
    }
    FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x2, 0xC, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0x3, 0xC, (*(int *)0xC4B410C));
    t0 = (((struct o0_int *)0xC474774)->v);
    switch (t0) {
    case 0:
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v));
        break;
    case 1:
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
        break;
    case 2:
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0xC)))))->v));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0xC)))))->v));
        break;
    case 3:
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x10)))))->v));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x1C)))))->v) = ((((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x10)))))->v));
        break;
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 300.0f);
        (((struct o90_float *)(t1))->v) = 18.75f;
        if ((unsigned int)t0 >= (unsigned int)0x28) {
            break;
        }
    }
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
    return 0xD4;
}

void FUN_0c11664c(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if ((unsigned int)t0 >= (unsigned int)0x32) {
        return;
    }
    switch ((t0 << 1)) {
        case 0:
        {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = (*(int *)((0xC2017E0 + (((int)((int)(FUN_0c179ac0()) % (int)(*(int *)0xC201824))) << 2))));
            *(volatile int *)((0xC29DDD0 + ((*(short *)((a4 + 0x1E))) << 2)));
            FUN_0c117944(0xC5);
            FUN_0c116c12(a4, 0x4);
            (((struct o0_uchar *)0xC539B4D)->v) = 0x2;
            (((struct o1_uchar *)0xC539B4D)->v) = 0x1;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 2:
        {
            *(volatile int *)((0xC29DDD0 + ((*(short *)((a4 + 0x1E))) << 2)));
            FUN_0c117944(0xC5);
            FUN_0c116c12(a4, 0x4);
            (((struct o0_uchar *)0xC539B4D)->v) = 0x2;
            (((struct o1_uchar *)0xC539B4D)->v) = 0x1;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 4:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                FUN_0c117e76();
    return;
            }
            return;
        }
        case 6:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 == 0) {
            } else {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            }
            return;
        }
        case 8:
        {
            FUN_0c117944(0xC6);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 10:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 >= 0) {
            } else {
                (((struct o20_ushort *)(a4))->v) = 0x0;
                *(unsigned int *)0xC474C00 = (FUN_0c1187ba());
                *(unsigned char *)(((*(int *)0xC474C00) + 0x2)) = (*(signed char *)((a4 + 0x20)));
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            }
            return;
        }
        case 12:
        {
            (((struct o20_ushort *)(a4))->v) = (FUN_0c104e6a(((((struct o20_short *)(a4))->v)), 0x1));
            *(unsigned char *)(((*(int *)0xC474C00) + 0x2)) = (*(signed char *)((a4 + 0x20)));
            t0 = FUN_0c05f22c(0x101);
            if (t0 != 0) {
                FUN_0c1186d4(((((struct o20_short *)(a4))->v)));
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t0 = 0x4;
                if (((((struct o20_short *)(a4))->v)) == 0) {
                    t0 = 0x3;
                }
                FUN_0c05aab6(0x0, t0);
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            } else {
                t0 = FUN_0c05f22c(0x40);
                if (t0 == 0) {
                } else {
                    (((struct o20_ushort *)(a4))->v) = 0x1;
                    *(unsigned char *)(((*(int *)0xC474C00) + 0x2)) = (*(signed char *)((a4 + 0x20)));
                    FUN_0c1186d4(((((struct o20_short *)(a4))->v)));
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    FUN_0c05aab6(0x0, 0x4);
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                }
            }
            return;
        }
        case 14:
        {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) <= (int)0xA) {
            } else {
                (((struct o14_uchar *)((*(int *)0xC474C00)))->v) = 0x63;
                *(unsigned int *)0xC474C00 = 0x0;
                FUN_0c116c12(a4, 0x5);
                t0 = (((struct o20_short *)(a4))->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                    } else {
                        (((struct o17_uchar *)(a4))->v) = 0xA;
                    }
                } else {
                    t0 = FUN_0c115e84((*(short *)((a4 + 0x1E))));
                    if (t0 != 0) {
                        if ((*(signed char *)((a4 + 0x16))) == 1) {
                            (((struct o17_uchar *)(a4))->v) = 0x28;
                        } else {
                            (((struct o17_uchar *)(a4))->v) = 0x1E;
                        }
                    } else {
                        (((struct o17_uchar *)(a4))->v) = 0x14;
                    }
                }
            }
            return;
        }
        case 16:
        case 18:
        case 26:
        case 28:
        case 30:
        case 32:
        case 34:
        case 36:
        case 38:
        case 46:
        case 48:
        case 50:
        case 52:
        case 54:
        case 56:
        case 58:
        case 66:
        case 68:
        case 70:
        case 72:
        case 74:
        case 76:
        case 78:
        {
            return;
        }
        case 20:
        {
            (((struct o0_uchar *)0xC539B4D)->v) = 0x0;
            (((struct o1_uchar *)0xC539B4D)->v) = 0x0;
            FUN_0c116c12(a4, 0x6);
            FUN_0c117944(0xC9);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 22:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 >= 0) {
                return;
            }
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            FUN_0c117e76();
    return;
        }
        case 24:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 == 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x1;
                (((struct o18_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
            }
            return;
        }
        case 40:
        {
            (((struct o0_uchar *)0xC539B4D)->v) = 0x0;
            (((struct o1_uchar *)0xC539B4D)->v) = 0x0;
            FUN_0c117944(0xC7);
            FUN_0c116c12(a4, 0x2);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 42:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 >= 0) {
                return;
            }
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            FUN_0c117e76();
    return;
        }
        case 44:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 == 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x1;
                (((struct o18_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
            }
            return;
        }
        case 60:
        {
            (((struct o0_uchar *)0xC539B4D)->v) = 0x0;
            (((struct o1_uchar *)0xC539B4D)->v) = 0x0;
            FUN_0c117944(0xCA);
            FUN_0c116c12(a4, 0x3);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 62:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 >= 0) {
                return;
            }
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            thunk_FUN_0c11e28e((*(short *)((a4 + 0x1E))));
            FUN_0c117e76();
    return;
        }
        case 64:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x1;
                (((struct o18_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
            }
            return;
        }
        case 80:
        {
            t0 = FUN_0c179ac0();
            t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t1 = (t0 & 0x1);
            }
            FUN_0c117944(((*(int *)((0xC1FC788 + (t1 << 2))))));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 82:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 >= 0) {
            } else {
                FUN_0c117e76();
                thunk_FUN_0c11e28e((*(short *)((a4 + 0x1E))));
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            }
            return;
        }
        case 84:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 == 0) {
            } else {
                t0 = FUN_0c179ac0();
                t1 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
                if ((int)t0 >= 0) {
                    t1 = (t0 & 0x1F);
                }
                *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC201630 + (t1 << 2))));
                FUN_0c115eae(a4);
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            }
            return;
        }
        case 86:
        {
            FUN_0c115fd2(a4);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            *(volatile int *)((0xC29DDD0 + ((*(short *)((a4 + 0x1E))) << 2)));
            FUN_0c117a6e(0xCD);
            FUN_0c05a080(0x1E, 0x0);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 88:
        {
            *(volatile int *)((0xC29DDD0 + ((*(short *)((a4 + 0x1E))) << 2)));
            FUN_0c117a6e(0xCD);
            FUN_0c05a080(0x1E, 0x0);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 90:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                thunk_FUN_0c11e20c((*(short *)((a4 + 0x1E))));
                FUN_0c117e76();
    return;
            }
            return;
        }
        case 92:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 != 0) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                if ((int)(*(short *)((a4 + 0x1C))) > 0) {
                    (((struct o17_uchar *)(a4))->v) = 0x2B;
                } else {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                }
            }
            return;
        }
        case 94:
        {
            (((struct o0_uchar *)0xC539B4D)->v) = 0x0;
            (((struct o1_uchar *)0xC539B4D)->v) = 0x0;
            t0 = FUN_0c179ac0();
            t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t1 = (t0 & 0x1);
            }
            FUN_0c117944(((*(int *)((0xC1FC790 + (t1 << 2))))));
            FUN_0c116c12(a4, 0x2);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return;
        }
        case 96:
        {
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                FUN_0c117e76();
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            }
            return;
        }
        default:
        {
            t0 = FUN_0c05f22c(0x3FCF);
            if (t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x1;
                (((struct o18_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
            }
            return;
        }
    }
}

int FUN_0c03a7bc(int a4, int a5, int a6, int a7)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_7 = a4;
    v0_8 = a5;
    v0_9 = a6;
    v0_10 = a7;
    v0_2 = (v0_8);
    v0_0 = (0x0);
    v0_11 = (((v0_7 * 0x34) + 0xC3C9E10));
    v0_3 = (0x34);
    v0_4 = (0xC3C9E10);
    v0_1 = (v0_7);
    v0_5 = (0x2);
    v0_6 = (0x1);
    if ((v0_8 == 18)) goto L_C03A830;
    if ((v0_2 == 1)) goto L_C03A84E;
    if ((v0_2 != 2)) goto L_C03A7F4;
    *(unsigned int *)((v0_11 + 0x4)) = v0_8;
    *(unsigned int *)((v0_11 + 0x8)) = 0xFFFFFF01;
    *(unsigned int *)((v0_11 + 0x14)) = v0_0;
    *(unsigned int *)((v0_11 + 0x18)) = v0_0;
    *(unsigned int *)((v0_11 + 0x1C)) = v0_0;
    *(unsigned int *)((v0_11 + 0x20)) = v0_0;
    *(unsigned int *)((v0_11 + 0x24)) = v0_0;
    *(unsigned int *)((v0_11 + 0x28)) = v0_0;
    *(unsigned int *)((v0_11 + 0x2C)) = v0_0;
    *(unsigned int *)((v0_11 + 0x30)) = v0_0;
    if ((((((struct o4_int *)0xC3C9FB0)->v)) == v0_1)) goto L_C03A9D6;
    L_C03AC24:;
    return 0x0;
    L_C03A9D6:;
    (((struct o4_uint *)0xC3C9FB0)->v) = 0xFFFFFFFF;
    L_C03AC20:;
    (((struct o0_uint *)0xC3C9FB0)->v) = v0_0;
    goto L_C03AC24;
    L_C03A7F4:;
    if ((v0_2 != 11)) goto L_C03A7FC;
    *(unsigned int *)((v0_11 + 0x8)) = v0_9;
    goto L_C03AC20;
    L_C03A7FC:;
    if ((v0_2 != 12)) goto L_C03A804;
    *(unsigned int *)((v0_11 + 0x8)) = v0_9;
    if ((v0_9 == 0)) goto L_C03A9EC;
    goto L_C03AC20;
    L_C03A9EC:;
    v0_7 = FUN_0c2b2ba8(v0_1, 0xC1B71E8);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03AA02;
    if (!((v0_2 == 0xFFFFFF05))) goto L_C03AA14;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x14)) = v0_6;
    goto L_C03AA14;
    L_C03AA14:;
    v0_7 = FUN_0c2b2ba8(v0_1, 0xC1B7208);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03AA2A;
    if (!((v0_2 == 0xFFFFFF05))) goto L_C03AA3C;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x20)) = v0_6;
    goto L_C03AA3C;
    L_C03AA3C:;
    v0_7 = FUN_0c2b2ba8(v0_1, 0xC1B7218);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03AA52;
    if (!((v0_2 == 0xFFFFFF05))) goto L_C03AA64;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x24)) = v0_6;
    goto L_C03AA64;
    L_C03AA64:;
    v0_7 = FUN_0c2b2ba8(v0_1, 0xC1B7228);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03AA7A;
    if (!((v0_2 == 0xFFFFFF05))) goto L_C03AAA8;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x28)) = v0_6;
    goto L_C03AAA8;
    L_C03AAA8:;
    *(unsigned int *)(((int)stk + 4)) = ((v0_1 * v0_3) + v0_4);
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x2C)) = (FUN_0c2b27ae(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x30 + v0_2);
    *(unsigned int *)(((0x30 + v0_2) + 0x0)) = (FUN_0c2b27ae(v0_1, 0x1));
    goto L_C03AC20;
    L_C03AA7A:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x28)) = v0_5;
    goto L_C03AAA8;
    L_C03AA52:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x24)) = v0_5;
    goto L_C03AA64;
    L_C03AA2A:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x20)) = v0_5;
    goto L_C03AA3C;
    L_C03AA02:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x14)) = v0_5;
    goto L_C03AA14;
    L_C03A804:;
    if ((v0_2 != 9)) goto L_C03A80C;
    *(unsigned int *)((v0_11 + 0x8)) = v0_9;
    if ((v0_9 == 0)) goto L_C03AADA;
    goto L_C03AC20;
    L_C03AADA:;
    *(unsigned int *)(((int)stk + 4)) = ((v0_1 * v0_3) + v0_4);
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x2C)) = (FUN_0c2b27ae(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x30 + v0_2);
    *(unsigned int *)(((0x30 + v0_2) + 0x0)) = (FUN_0c2b27ae(v0_1, 0x1));
    goto L_C03AC20;
    L_C03A80C:;
    if ((v0_2 != 13)) goto L_C03A814;
    *(unsigned int *)((v0_11 + 0x8)) = v0_9;
    if ((v0_9 == 0)) goto L_C03AB0C;
    goto L_C03AC20;
    L_C03AB0C:;
    v0_7 = FUN_0c2b289c(v0_1, 0xC3C9FBC);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03AB22;
    if (!((v0_2 == 0xFFFFFF05))) goto L_C03AB58;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x18)) = v0_6;
    v0_7 = (((v0_1 * v0_3) + v0_4));
    goto L_C03AB56;
    L_C03AB58:;
    *(unsigned int *)(((int)stk + 4)) = ((v0_1 * v0_3) + v0_4);
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x2C)) = (FUN_0c2b27ae(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x30 + v0_2);
    *(unsigned int *)(((0x30 + v0_2) + 0x0)) = (FUN_0c2b27ae(v0_1, 0x1));
    goto L_C03AC20;
    L_C03AB56:;
    *(unsigned int *)((v0_7 + 0x1C)) = v0_6;
    goto L_C03AB58;
    L_C03AB22:;
    v0_7 = FUN_0c2b2ba8(v0_1, 0xC1B71F8);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03AB38;
    if ((v0_2 == 0xFFFFFF05)) goto L_C03AB42;
    goto L_C03AB58;
    L_C03AB42:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x18)) = v0_6;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x1C)) = v0_5;
    v0_7 = (((v0_1 * v0_3) + v0_4));
    goto L_C03AB58;
    L_C03AB38:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x18)) = v0_5;
    v0_7 = (((v0_1 * v0_3) + v0_4));
    goto L_C03AB56;
    L_C03A814:;
    if ((v0_2 != 14)) goto L_C03A81C;
    *(unsigned int *)((v0_11 + 0x8)) = v0_9;
    goto L_C03AC20;
    L_C03A81C:;
    if ((v0_2 != 20)) goto L_C03A824;
    *(unsigned int *)((v0_11 + 0x8)) = v0_9;
    goto L_C03AC20;
    L_C03A824:;
    if ((v0_2 != 7)) goto L_C03A82C;
    *(unsigned int *)((v0_11 + 0x8)) = v0_9;
    if ((v0_9 != 0)) goto L_C03AC20;
    v0_7 = FUN_0c2b2ba8(v0_1, 0xC1B7218);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03ABC0;
    if (!((v0_2 == 0xFFFFFF05))) goto L_C03ABD2;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x24)) = v0_6;
    goto L_C03ABD2;
    L_C03ABD2:;
    v0_7 = FUN_0c2b2ba8(v0_1, 0xC1B7228);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03ABE8;
    if (!((v0_2 == 0xFFFFFF05))) goto L_C03ABFA;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x28)) = v0_6;
    goto L_C03ABFA;
    L_C03ABFA:;
    *(unsigned int *)(((int)stk + 4)) = ((v0_1 * v0_3) + v0_4);
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x2C)) = (FUN_0c2b27ae(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x30 + v0_2);
    *(unsigned int *)(((0x30 + v0_2) + 0x0)) = (FUN_0c2b27ae(v0_1, 0x1));
    goto L_C03AC20;
    L_C03ABE8:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x28)) = v0_5;
    goto L_C03ABFA;
    L_C03ABC0:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x24)) = v0_5;
    goto L_C03ABD2;
    L_C03A82C:;
    goto L_C03AC24;
    L_C03A84E:;
    *(unsigned int *)((v0_11 + 0x4)) = v0_8;
    *(unsigned int *)((v0_11 + 0x8)) = v0_9;
    if ((v0_9 == 0)) goto L_C03A85A;
    goto L_C03AC20;
    L_C03A85A:;
    v0_7 = FUN_0c2b2ba8(v0_1, 0xC1B71E8);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03A870;
    if (!((v0_2 == 0xFFFFFF05))) goto L_C03A882;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x14)) = v0_6;
    goto L_C03A882;
    L_C03A882:;
    v0_7 = FUN_0c2b289c(v0_1, 0xC3C9FBC);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03A8B4;
    if (!((v0_2 == 0xFFFFFF05))) goto L_C03A8EA;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x18)) = v0_6;
    v0_7 = (((v0_1 * v0_3) + v0_4));
    goto L_C03A8E8;
    L_C03A8EA:;
    v0_7 = FUN_0c2b2ba8(v0_1, 0xC1B7208);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03A900;
    if (!((v0_2 == 0xFFFFFF05))) goto L_C03A912;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x20)) = v0_6;
    goto L_C03A912;
    L_C03A912:;
    v0_7 = FUN_0c2b2ba8(v0_1, 0xC1B7218);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03A928;
    if (!((v0_2 == 0xFFFFFF05))) goto L_C03A93A;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x24)) = v0_6;
    goto L_C03A93A;
    L_C03A93A:;
    v0_7 = FUN_0c2b2ba8(v0_1, 0xC1B7228);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03A950;
    if (!((v0_2 == 0xFFFFFF05))) goto L_C03A962;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x28)) = v0_6;
    goto L_C03A962;
    L_C03A962:;
    *(unsigned int *)(((int)stk + 4)) = ((v0_1 * v0_3) + v0_4);
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x2C)) = (FUN_0c2b27ae(v0_1, 0x0));
    v0_2 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (0x30 + v0_2);
    *(unsigned int *)(((0x30 + v0_2) + 0x0)) = (FUN_0c2b27ae(v0_1, 0x1));
    (((struct o4_uint *)0xC3C9FB0)->v) = v0_1;
    vmu_lcd_refresh(v0_1);
    goto L_C03AC20;
    L_C03A950:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x28)) = v0_5;
    goto L_C03A962;
    L_C03A928:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x24)) = v0_5;
    goto L_C03A93A;
    L_C03A900:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x20)) = v0_5;
    goto L_C03A912;
    L_C03A8E8:;
    *(unsigned int *)((v0_7 + 0x1C)) = v0_6;
    goto L_C03A8EA;
    L_C03A8B4:;
    v0_7 = FUN_0c2b2ba8(v0_1, 0xC1B71F8);
    v0_2 = (v0_7);
    if ((v0_7 == 0)) goto L_C03A8CA;
    if ((v0_2 == 0xFFFFFF05)) goto L_C03A8D4;
    goto L_C03A8EA;
    L_C03A8D4:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x18)) = v0_6;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x1C)) = v0_5;
    v0_7 = (((v0_1 * v0_3) + v0_4));
    goto L_C03A8EA;
    L_C03A8CA:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x18)) = v0_5;
    v0_7 = (((v0_1 * v0_3) + v0_4));
    goto L_C03A8E8;
    L_C03A870:;
    *(unsigned int *)((((v0_1 * v0_3) + v0_4) + 0x14)) = v0_5;
    goto L_C03A882;
    L_C03A830:;
    *(unsigned int *)((v0_11 + 0x0)) = v0_1;
    *(unsigned int *)((v0_11 + 0x4)) = v0_8;
    *(unsigned int *)((v0_11 + 0x8)) = 0xFFFF0000;
    *(unsigned int *)((v0_11 + 0xC)) = v0_9;
    *(unsigned int *)((v0_11 + 0x10)) = v0_10;
    *(unsigned int *)((v0_11 + 0x14)) = v0_0;
    *(unsigned int *)((v0_11 + 0x18)) = v0_0;
    *(unsigned int *)((v0_11 + 0x1C)) = v0_0;
    *(unsigned int *)((v0_11 + 0x20)) = v0_0;
    *(unsigned int *)((v0_11 + 0x24)) = v0_0;
    *(unsigned int *)((v0_11 + 0x28)) = v0_0;
    *(unsigned int *)((v0_11 + 0x2C)) = v0_0;
    *(unsigned int *)((v0_11 + 0x30)) = v0_0;
    goto L_C03AC24;
}

int FUN_0c0725fa(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c0725bc(a4);
                }
                return FUN_0c084a9e(a4);
            }
            return FUN_0c072504(a4);
        }
        return FUN_0c072260(a4);
    }
    return FUN_0c0720f8(a4);
}

