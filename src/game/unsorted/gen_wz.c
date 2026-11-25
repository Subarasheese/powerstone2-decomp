/* Straight-line functions with calls and guards (batch gen_wz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c03f346(int, int, int, int);
float math_sin_angle16(int);
int FUN_0c131c44(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };


int FUN_0c131c44(int a4, int a5, int a6, int a7)
{
    int t0;
    float u11;
    int t9;
    float u10;
    int t5;
    int t65;
    int t8;
    int t66;
    int t1;
    float u4;
    float t47;
    int s4;
    int s0;
    float t52;
    int t57;
    int t49;
    int t40;
    int R1008;
    int R1004;
    int t63;
    int t62;
    int t7;
    int t54;
    int t38;
    int t33;
    int t24;
    int t13;

    R1004 = s0;
    R1008 = s4;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)(a4 + 0x14);
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -4.39473677f);
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 7.26315784f);
                u4 = (((struct o74_float *)(t0))->v);
                (((struct o74_float *)(t0))->v) = (u4 + -2.75f);
                t5 = 0xC0300000;
                t8 = 0xC;
                t9 = 0x4;
                u10 = (u4 + -2.75f);
                for (;;) {
                    if ((unsigned int)t9 >= (unsigned int)0x18) {
                        break;
                    }
                    t5 = (0xC2A156C + t8);
                    t7 = (0xC2A15B4 + t8);
                    R1004 = (0x78 + (*(int *)((((0xC4 + a4) + t9) + 0x0))));
                    R1008 = t5;
                    t13 = (((struct o1C_short *)(a4))->v);
                    u11 = ((*(float *)(t5)) - (*(float *)(t7)));
                    u10 = (math_sin_angle16(((int)(((((float)(((t13 << 1) + t13) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    *(unsigned int *)(((0x78 + t13) + 0x0)) = (((int)((((u11 * u10) * 65536.0f) / 360.0f) + 0.5f)) & 0xFFFF);
                    R1004 = (0x7C + (*(int *)((((0xC4 + a4) + t9) + 0x0))));
                    t24 = (((struct o1C_short *)(a4))->v);
                    u11 = (((((struct o4_float *)((R1008)))->v)) - ((((struct o4_float *)(t7))->v)));
                    u10 = (math_sin_angle16(((int)(((((float)(((t24 << 1) + t24) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    *(unsigned int *)(((0x7C + t24) + 0x0)) = (((int)((((u11 * u10) * 65536.0f) / 360.0f) + 0.5f)) & 0xFFFF);
                    R1004 = (0x80 + (*(int *)((((0xC4 + a4) + t9) + 0x0))));
                    t33 = (((struct o1C_short *)(a4))->v);
                    u11 = (((((struct o8_float *)((R1008)))->v)) - ((((struct o8_float *)(t7))->v)));
                    u10 = (math_sin_angle16(((int)(((((float)(((t33 << 1) + t33) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    t5 = (0x80 + t33);
                    t9 = (t9 + 0x4);
                    t8 = (t8 + 0xC);
                    u11 = ((((u11 * u10) * 65536.0f) / 360.0f) + 0.5f);
                    *(unsigned int *)(t5) = (((int)u11) & 0xFFFF);
                }
                t38 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t38 + 0x1);
                t40 = (short)(t38 + 0x1);
                if ((int)(short)(t38 + 0x1) >= (int)0x78) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    t40 = 0x14;
                }
                return t40;
            }
            return FUN_0c03f346(a4, a5, 0x4, a7);
        }
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -1.15909088f);
        t47 = math_sin_angle16(((int)(((((float)((int)((int)((((((struct o1C_short *)(a4))->v)) << 2) << 2) % (int)0x168)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        (((struct o70_float *)(t0))->v) = (_builtin_fabsf(t47) * 20.0f);
        (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + -1.2954545f);
        t49 = (((struct o1C_short *)(a4))->v);
        t52 = math_sin_angle16(((int)(((((float)((int)((int)(((t49 << 2) + t49) << 2) % (int)0x168)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        (((struct o78_uint *)(t0))->v) = ((int)((((_builtin_fabsf(t52) * 3932160.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t54 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t54 + 0x1);
        t57 = (short)(t54 + 0x1);
        if ((int)(short)(t54 + 0x1) < (int)0x2C) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            (((struct o78_uint *)(t0))->v) = 0x0;
            (((struct o7C_uint *)(t0))->v) = 0xA001;
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
            t57 = 0xD8;
        }
        return t57;
    }
    (((struct o6C_float *)(t0))->v) = 91.0f;
    (((struct o70_float *)(t0))->v) = 10.0f;
    (((struct o74_float *)(t0))->v) = 160.0f;
    (((struct o7C_uint *)(t0))->v) = 0x8FA6;
    t65 = 0x4;
    t66 = 0xC;
    for (;;) {
        if ((unsigned int)t65 >= (unsigned int)0x18) {
            break;
        }
        t63 = (t66 + 0xC2A14DC);
        t62 = ((*(int *)((((0xC4 + a4) + t65) + 0x0))) + 0x6C);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t62) = *(struct mv3 *)(t63); }
        t63 = (t66 + 0xC2A1524);
        t62 = ((*(int *)((((0xC4 + a4) + t65) + 0x0))) + 0x78);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t62) = *(struct mv3 *)(t63); }
        t65 = (t65 + 0x4);
        t66 = (t66 + 0xC);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
    return 0x14;
}
