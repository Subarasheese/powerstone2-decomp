/* Straight-line functions with calls and guards (batch gen_en): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
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
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
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
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c132d28(int);
int FUN_0c15a5aa(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int memset(int, int, int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
void FUN_0c131954(int a4, int a5, int a6, int a7);
int FUN_0c110b88(int a4);
int FUN_0c15f6ec(int a4, int a5, int a6, int a7);
int FUN_0c132d70(int a4, int a5, int a6, int a7, float f4);
int FUN_0c15a8bc(int a4, int a5, int a6, int a7);
int FUN_0c153710(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };


void FUN_0c131954(int a4, int a5, int a6, int a7)
{
    int t0;
    int t5;
    int t6;
    int t56;
    int t57;
    int t1;
    int R1000;
    float u9;
    float u11;
    float t13;
    float u18;
    int s4;
    int s0;
    float t45;
    float t33;
    float u29;
    float u28;
    float t23;
    float u19;
    int t47;
    int t42;
    int t37;
    int t30;
    int t26;
    int t20;
    int t16;
    int t8;
    int t7;
    int R1004;

    R1000 = s0;
    R1004 = s4;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)(a4 + 0x14);
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 5.0f);
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 5.69620275f);
                (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.493670881f);
                t5 = 0xC;
                t6 = 0x4;
                for (;;) {
                    t7 = *(int *)((((0xC4 + a4) + t6) + 0x0));
                    R1000 = (0x78 + t7);
                    R1004 = (0xC2A156C + t5);
                    t8 = (((struct o1C_short *)(a4))->v);
                    u9 = *(float *)(((0xC2A15B4 + t5) + 0x0));
                    u11 = *(float *)(((0xC2A156C + t5) + 0x0));
                    t13 = math_sin_angle16(((int)(((((float)(((t8 << 1) + t8) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    (((struct o78_uint *)(t7))->v) = ((int)((((((u11 - u9) * t13) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t16 = *(int *)((((0xC4 + a4) + t6) + 0x0));
                    R1000 = (0x7C + t16);
                    u18 = (((struct o4_float *)((0xC2A15B4 + t5)))->v);
                    u19 = (((struct o4_float *)((R1004)))->v);
                    t20 = (((struct o1C_short *)(a4))->v);
                    t23 = math_sin_angle16(((int)(((((float)(((t20 << 1) + t20) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    (((struct o7C_uint *)(t16))->v) = ((int)((((((u19 - u18) * t23) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t26 = *(int *)((((0xC4 + a4) + t6) + 0x0));
                    R1000 = (0x80 + t26);
                    u28 = (((struct o8_float *)((0xC2A15B4 + t5)))->v);
                    u29 = (((struct o8_float *)((R1004)))->v);
                    t30 = (((struct o1C_short *)(a4))->v);
                    t33 = math_sin_angle16(((int)(((((float)(((t30 << 1) + t30) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    t6 = (t6 + 0x4);
                    (((struct o80_uint *)(t26))->v) = ((int)((((((u29 - u28) * t33) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t5 = (t5 + 0xC);
                    if ((unsigned int)t6 >= (unsigned int)0x18) {
                        break;
                    }
                }
                t37 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t37 + 0x1);
                if ((int)(short)(t37 + 0x1) >= (int)0x78) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                }
                return;
            }
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
        t42 = (((struct o1C_short *)(a4))->v);
        t45 = math_sin_angle16(((int)(((((float)((int)((int)(((t42 << 2) + t42) << 2) % (int)0x168)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        (((struct o78_uint *)(t0))->v) = ((int)((((_builtin_fabsf(t45) * 3932160.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t47 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t47 + 0x1);
        if ((int)(short)(t47 + 0x1) < (int)0x29) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            (((struct o78_uint *)(t0))->v) = 0x0;
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
    (((struct o6C_float *)(t0))->v) = -35.0f;
    (((struct o70_float *)(t0))->v) = 10.0f;
    (((struct o74_float *)(t0))->v) = 57.0f;
    (((struct o7C_uint *)(t0))->v) = 0x31C7;
    t56 = 0x4;
    t57 = 0xC;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + a4) + t56) + 0x0))) + 0x6C)) = *(struct mv3 *)(t57 + 0xC2A14DC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + a4) + t56) + 0x0))) + 0x78)) = *(struct mv3 *)(t57 + 0xC2A1524); }
        t56 = (t56 + 0x4);
        t57 = (t57 + 0xC);
        if ((unsigned int)t56 >= (unsigned int)0x18) {
            break;
        }
    }
}






