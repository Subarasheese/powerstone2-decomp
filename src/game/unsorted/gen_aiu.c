/* Straight-line functions with calls and guards (batch gen_aiu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c059e9a(int, int, int);
int FUN_0c143a30(int, int);
int FUN_0c144984(int, int, int);
int FUN_0c144b48(int);
int FUN_0c1453c4(int, int, int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
void FUN_0c144eee(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


void FUN_0c144eee(int a4)
{
    int stk[4];
    int t0;
    int R1004;
    int t10;
    int t23;
    int t39;
    int t42;
    int t51;
    float u46;
    float u106;
    int t16;
    int t82;
    int t34;
    int t8;
    int t116;
    int t101;
    int t99;
    int t83;
    int t57;
    int t56;

    R1004 = *(int *)((int)stk + 0);

    t0 = *(signed char *)(a4 + 0x16);
    if (t0 != 0) {
    } else {
        (((struct o1C_ushort *)(a4))->v) = 0x14;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        math_mat_get_translate((a4 + 0x64), (((int)stk + 0) + 0x4));
        FUN_0c059e9a((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532498), 0x9, (((int)stk + 0) + 0x4));
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        t8 = FUN_0c144b48(a4);
        if (t8 == 0) {
            FUN_0c144984(a4, 0x5, 0x0);
        } else {
            t10 = (((struct oCC_int *)(a4))->v);
            (((struct o78_uint *)(t10))->v) = (((((struct o78_int *)(t10))->v)) - 0x111);
            (((struct o78_uint *)((*(int *)(((0xC4 + a4) + 0x4)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
            if (((int)((((struct o1C_short *)(a4))->v)) <= (int)0x4) && (t16 = (((struct o20_short *)(a4))->v), t16 == 0)) {
                FUN_0c143a30(a4, 0x0);
                (((struct o20_ushort *)(a4))->v) = 0x1;
            }
            t23 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t23 - 1);
            if ((int)(short)(t23 - 1) > 0) {
            } else {
                (((struct o1C_ushort *)(a4))->v) = 0xA;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
            }
        }
    } else {
        if (t0 != 2) {
            if (t0 == 3) {
                t34 = FUN_0c144b48(a4);
                if (t34 == 0) {
                    FUN_0c144984(a4, 0x5, 0x0);
                } else {
                    if ((int)((((struct o1E_short *)(a4))->v)) > 0) {
                        (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) - 1);
                        t39 = *(signed char *)(a4 + 0x2);
                        t42 = (((struct o1E_short *)(a4))->v);
                        R1004 = t42;
                        u46 = (((struct o8_float *)(((((t39 << 1) + t39) << 2) + 0xC2028FC)))->v) + (math_sin_angle16(((R1004) << 13))) * (float)(t42 << 1);
                        (((struct o30_float *)(a4))->v) = u46;
                    }
                    t51 = (((struct oCC_int *)(a4))->v);
                    (((struct o78_uint *)(t51))->v) = (((((struct o78_int *)(t51))->v)) - 0x111);
                    (((struct o78_uint *)((*(int *)(((0xC4 + a4) + 0x4)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
                    t56 = (((struct o1C_short *)(a4))->v);
                    (((struct o1C_ushort *)(a4))->v) = (t56 - 1);
                    if ((int)(short)(t56 - 1) <= 0) {
                        t57 = *(signed char *)(a4 + 0x2);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)((0xC2028FC + (((t57 << 1) + t57) << 2))); }
                        FUN_0c144984(a4, 0x3, 0x0);
                    }
                }
            }
        } else {
            t82 = FUN_0c144b48(a4);
            if (t82 != 0) {
                t83 = (((struct oCC_int *)(a4))->v);
                (((struct o78_uint *)(t83))->v) = (((((struct o78_int *)(t83))->v)) + 0x444);
                (((struct o78_uint *)((*(int *)(((0xC4 + a4) + 0x4)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
                if (((((struct o1C_short *)(a4))->v)) == 5) {
                    FUN_0c1453c4(a4, ((((struct o1E_short *)(a4))->v)), 0x0);
                    (((struct o1E_ushort *)(a4))->v) = 0x14;
                }
                if ((int)((((struct o1C_short *)(a4))->v)) <= (int)0x5) {
                    (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) - 1);
                    t99 = *(signed char *)(a4 + 0x2);
                    t101 = (((struct o1E_short *)(a4))->v);
                    R1004 = t101;
                    u106 = ((((struct o8_float *)((0xC2028FC + (((t99 << 1) + t99) << 2))))->v)) + (math_sin_angle16(((R1004) << 13))) * (float)(t101 << 1);
                    (((struct o30_float *)(a4))->v) = u106;
                }
                t116 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t116 - 1);
                if ((int)(short)(t116 - 1) <= 0) {
                    (((struct o1C_ushort *)(a4))->v) = 0x14;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                }
            } else {
                FUN_0c144984(a4, 0x5, 0x0);
            }
        }
    }
}
