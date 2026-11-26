/* Straight-line functions with calls and guards (batch gen_my): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c145d1c(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int FUN_0c146b78(int a4, int a5, int a6, int a7);

int FUN_0c146b78(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t0;
    register int t73;
    register int t1;
    register float u7;
    register float u8;
    register float t9;
    register float u10;
    register int t13;
    register float u16;
    register int t19;
    register float t23;
    register float u25;
    register float u32;
    register float t34;
    register float t47;
    register float u48;
    register int t51;
    register float u56;
    register float u57;
    register float t59;
    register float u69;
    register float u70;
    register float u71;
    register int t97;
    register int t101;
    register int t103;
    register int t112;
    register int t116;
    register int t118;
    register int t127;
    register int t131;
    register int t133;
    register int t145;
    register int t149;
    register int t155;
    int t99;
    int t114;
    int t129;
    register int R1004;
    register int R1008;
    register int R1012;
    register int R1016;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);

    t0 = *(signed char *)((a4 + 0x14));
    t73 = 0;
    if (t0 != 0) {
        if (t0 == 1) {
            t73 = 1;
        } else {
            t1 = FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        u7 = (((float)((int)((int)(nlRand()) % (int)((((struct o14_int *)0xC2A2538)->v)))) * 360.0f) / (float)((((struct o14_int *)0xC2A2538)->v)));
        u8 = ((u7 * 65536.0f) / 360.0f);
        *(unsigned int *)((a4 + 0x38)) = ((int)(u8 + 0.5f) & 0xFFFF);
        t9 = math_sin_angle16(((int)(u8 + 0.5f) & 0xFFFF));
        R1012 = 0xC2A2560;
        u10 = (((struct o28_float *)0xC2A2538)->v);
        t13 = (int)((int)(nlRand()) % (int)((((struct o18_int *)0xC2A2538)->v)));
        R1016 = 0xC2A2570;
        u16 = (((float)t13 * ((((struct o38_float *)0xC2A2538)->v))) / (float)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o4C_float *)(a4))->v) = (t9 * (u10 + u16));
        t19 = (int)((int)(nlRand()) % (int)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o50_float *)(a4))->v) = ((((((struct o0_float *)0xC2A2578)->v)) * (float)t19) / (float)((((struct o18_int *)0xC2A2538)->v)));
        t23 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u25 = *(float *)(((R1012) + 0x0));
        u32 = (((float)((int)((int)(nlRand()) % (int)((((struct o18_int *)0xC2A2538)->v)))) * (*(float *)(((R1016) + 0x0)))) / (float)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o54_float *)(a4))->v) = (t23 * (u25 + u32));
        t34 = math_sin_angle16((*(int *)((a4 + 0x38))));
        R1012 = 0xC2A256C;
        (((struct o58_float *)(a4))->v) = (t34 * ((((struct o34_float *)0xC2A2538)->v)));
        (((struct o5C_float *)(a4))->v) = ((((((struct o4_float *)0xC2A2578)->v)) * (float)t19) / (float)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o60_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (*(float *)(((R1012) + 0x0))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A258C); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A25A4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o20_ushort *)(a4))->v) = ((((struct oC_int *)0xC2A2578)->v));
        R1008 = (a4 + 0x28);
        t47 = math_sin_angle16((*(int *)((a4 + 0x38))));
        R1016 = 0xC2A2574;
        u48 = (((struct o3C_float *)0xC2A2538)->v);
        t51 = (int)((int)(nlRand()) % (int)((((struct o1C_int *)0xC2A2538)->v)));
        R1012 = 0xC2A2580;
        u56 = (u48 + ((((float)t51 * ((((struct o8_float *)0xC2A2578)->v))) / (float)((((struct o1C_int *)0xC2A2538)->v)))));
        u57 = ((((struct o28_float *)(a4))->v));
        u57 = u57 + u56 * t47;
        (((struct o28_float *)(a4))->v) = u57;
        R1008 = (a4 + 0x30);
        t59 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u69 = (((struct o30_float *)(a4))->v);
        u70 = ((*(float *)(((R1016) + 0x0))) + ((((float)((int)((int)(nlRand()) % (int)((((struct o1C_int *)0xC2A2538)->v)))) * (*(float *)(((R1012) + 0x0)))) / (float)((((struct o1C_int *)0xC2A2538)->v)))));
        u71 = u69;
        u71 = u71 + u70 * t59;
        (((struct o30_float *)(a4))->v) = u71;
        t73 = 1;
    }
    if (t73) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x24)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x18)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 8) + 0x8)) = *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)); }
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x7, (*(int *)0xC4B40CC));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x63F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((((int)stk + 8) + 0x24)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((((int)stk + 8) + 0x18)); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)((((int)stk + 8) + 0x8)); }
        if (((((struct o10_int *)0xC2A2538)->v)) != 0) {
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o10_int *)0xC2A2538)->v)))) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
        t97 = *(short *)((a4 + 0x1C));
        if (((int)t97 >= (int)((((struct o0_int *)0xC2A2538)->v))) && (t99 = (((struct o4_int *)0xC2A2538)->v), (int)t97 <= (int)t99)) {
            t101 = ((((struct o0_int *)0xC2A2538)->v));
            R1008 = t101;
            t103 = ((((struct o4_int *)0xC2A2538)->v));
            R1004 = t103;
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2598, 0xC2A258C, (*(short *)((a4 + 0x1C))), t103, t101);
        }
        t112 = *(short *)((a4 + 0x1C));
        if (((int)t112 >= (int)((((struct o20_int *)0xC2A2538)->v))) && (t114 = (((struct o24_int *)0xC2A2538)->v), (int)t112 <= (int)t114)) {
            t116 = ((((struct o20_int *)0xC2A2538)->v));
            R1008 = t116;
            t118 = ((((struct o24_int *)0xC2A2538)->v));
            R1004 = t118;
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25B4, 0xC2A25A4, (*(short *)((a4 + 0x1C))), t118, t116);
        }
        t127 = *(short *)((a4 + 0x1C));
        if (((int)t127 >= (int)((((struct o8_int *)0xC2A2538)->v))) && (t129 = (((struct oC_int *)0xC2A2538)->v), (int)t127 <= (int)t129)) {
            t131 = ((((struct o8_int *)0xC2A2538)->v));
            R1008 = t131;
            t133 = ((((struct oC_int *)0xC2A2538)->v));
            R1004 = t133;
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25D4, 0xC2A25C4, (*(short *)((a4 + 0x1C))), t133, t131);
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        t145 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t145 + 0x6)) = ((*(short *)((t145 + 0x6))) | 0x1000);
        FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
        t149 = *(short *)((a4 + 0x1E));
        t155 = t149;
        if ((int)t149 > (int)0x9) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t155 = 0xA8;
        }
    } else {
        t155 = t1;
    }
    return t155;
}
