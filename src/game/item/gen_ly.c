/* Straight-line functions with calls and guards (batch gen_ly): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0585a8(int, int, int, Stk3, float);
int FUN_0c16af78(int, int, int);
int FUN_0c16af86(int, int, int, int);
int FUN_0c16afb6(int);
int math_vec3_accumulate(int, int);
int FUN_0c16b5a6(int a4, int a5, int a6, int a7);

int FUN_0c16b5a6(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t21;
    register int t25;
    register int t27;
    register float u30;
    register int t32;
    register float u33;
    register int t34;
    register int t36;
    register int t38;
    register int t40;
    register int t42;
    register int t44;
    register int t55;
    register int t78;
    register int t80;
    register int t82;
    register int t84;
    register int t85;
    register int t86;
    register int t88;
    register int t90;
    register int t91;
    register int t98;
    register int t100;
    register float u101;
    register int t102;
    register int t103;
    register int t105;
    register int t115;
    register float u116;
    register int t118;
    register int t119;
    register int t120;
    register int t122;
    register int t124;
    register int t126;
    register int t128;
    register int t130;
    register int t144;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct o48_float *)(a4))->v) = 1.5f;
        (((struct o44_float *)(a4))->v) = 1.5f;
        (((struct o40_float *)(a4))->v) = 1.5f;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x31;
        *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((((((struct oD0_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((((((struct oD4_int *)(a4))->v)) + 0x6)) = 0xF;
        FUN_0c16af78(a4, 0x2, 0x2);
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x4000;
        (((struct o78_uint *)(((((struct oD0_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oD4_int *)(a4))->v))))->v) = 0xFFFFC000;
    }
    if ((t1 == 0) || (t1 == 1)) {
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
        }
        t21 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t21 - 1);
        if ((int)(short)(t21 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        t25 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t25))->v) = (((((struct o7C_int *)(t25))->v)) - 0x1555);
        t27 = (((struct oC8_int *)(a4))->v);
        u30 = 1.5f;
        if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
            u30 = 1.0f;
        }
        (((struct o84_float *)(t27))->v) = u30;
        t32 = (((struct oC8_int *)(a4))->v);
        u33 = (((struct o84_float *)(t32))->v);
        (((struct o8C_float *)(t32))->v) = u33;
        (((struct o88_float *)(t32))->v) = u33;
        t34 = (((struct oCC_int *)(a4))->v);
        (((struct o78_uint *)(t34))->v) = (((((struct o78_int *)(t34))->v)) + 0x71C);
        t36 = (((struct oCC_int *)(a4))->v);
        (((struct o7C_uint *)(t36))->v) = (((((struct o7C_int *)(t36))->v)) + 0x1C71);
        t38 = (((struct oD0_int *)(a4))->v);
        (((struct o78_uint *)(t38))->v) = (((((struct o78_int *)(t38))->v)) + 0x71C);
        t40 = (((struct oD0_int *)(a4))->v);
        (((struct o7C_uint *)(t40))->v) = (((((struct o7C_int *)(t40))->v)) + 0x1C71);
        t42 = (((struct oD4_int *)(a4))->v);
        (((struct o78_uint *)(t42))->v) = (((((struct o78_int *)(t42))->v)) + 0x71C);
        t44 = (((struct oD4_int *)(a4))->v);
        (((struct o7C_uint *)(t44))->v) = (((((struct o7C_int *)(t44))->v)) + 0x1C71);
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) == 13) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((FUN_0c16afb6(a4)) * 0x3938) + 0xC5324C0)); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0x380C + (((short)t0 * (short)0x3938) + 0xC532498))); }
        }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
        FUN_0c0585a8(a4, ((int)stk + 0), 0x2D8, *(Stk3 *)(((int)stk + 0)), 10.0f);
        t55 = FUN_0c16af86(a4, 0x2, 0x2, 0x4);
        if (t55 != 0) {
            FUN_0c037498(((((struct oCC_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD0_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t144 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
    } else {
        if (t1 == 2) {
            if ((*(signed char *)((a4 + 0x15))) == 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                t78 = (((struct oCC_int *)(a4))->v);
                *(unsigned short *)((t78 + 0x6)) = ((*(short *)((t78 + 0x6))) | 0x210);
                t80 = (((struct oD0_int *)(a4))->v);
                *(unsigned short *)((t80 + 0x6)) = ((*(short *)((t80 + 0x6))) | 0x210);
                t82 = (((struct oD4_int *)(a4))->v);
                *(unsigned short *)((t82 + 0x6)) = ((*(short *)((t82 + 0x6))) | 0x210);
                t84 = (((struct oD4_int *)(a4))->v);
                (((struct o8C_float *)(t84))->v) = 1.0f;
                (((struct o88_float *)(t84))->v) = 1.0f;
                (((struct o84_float *)(t84))->v) = 1.0f;
                t85 = *(int *)(((0xC4 + a4) + 0x8));
                t86 = *(int *)(((0xC4 + a4) + 0x10));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((0xC4 + a4) + 0xC))) + 0x84)) = *(struct mv3 *)((t86 + 0x84)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t85)) = *(struct mv3 *)((t86 + 0x84)); }
                t88 = (((struct oD4_int *)(a4))->v);
                (((struct o20_float *)(t88))->v) = 1.0f;
                (((struct o1C_float *)(t88))->v) = 1.0f;
                (((struct o18_float *)(t88))->v) = 1.0f;
                t90 = *(int *)(((0xC4 + a4) + 0x10));
                t91 = *(int *)(((0xC4 + a4) + 0x8));
                { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)(((0xC4 + a4) + 0xC))) + 0x14)) = *(struct mv4 *)((t90 + 0x14)); }
                { struct mv4 { int w[4]; }; *(struct mv4 *)((t91 + 0x14)) = *(struct mv4 *)((t90 + 0x14)); }
            }
            t98 = (((struct oD4_int *)(a4))->v);
            (((struct o8C_float *)(t98))->v) = (((((struct o8C_float *)(t98))->v)) + 1.0f);
            t100 = (((struct oD4_int *)(a4))->v);
            u101 = (((struct o8C_float *)(t100))->v);
            (((struct o88_float *)(t100))->v) = u101;
            (((struct o84_float *)(t100))->v) = u101;
            t102 = *(int *)(((0xC4 + a4) + 0x8));
            t103 = *(int *)(((0xC4 + a4) + 0x10));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((0xC4 + a4) + 0xC))) + 0x84)) = *(struct mv3 *)((t103 + 0x84)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t102)) = *(struct mv3 *)((t103 + 0x84)); }
            t105 = (((struct oD4_int *)(a4))->v);
            (((struct o20_float *)(t105))->v) = (((((struct o20_float *)(t105))->v)) - 0.200000003f);
            if (!(((((struct o20_float *)(((((struct oD4_int *)(a4))->v))))->v)) > 0.0f)) {
                (((struct o20_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            t115 = (((struct oD4_int *)(a4))->v);
            u116 = (((struct o20_float *)(t115))->v);
            (((struct o1C_float *)(t115))->v) = u116;
            (((struct o18_float *)(t115))->v) = u116;
            t118 = *(int *)(((0xC4 + a4) + 0x10));
            t119 = *(int *)(((0xC4 + a4) + 0x8));
            { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)(((0xC4 + a4) + 0xC))) + 0x14)) = *(struct mv4 *)((t118 + 0x14)); }
            { struct mv4 { int w[4]; }; *(struct mv4 *)((t119 + 0x14)) = *(struct mv4 *)((t118 + 0x14)); }
            t120 = (((struct oCC_int *)(a4))->v);
            (((struct o78_uint *)(t120))->v) = (((((struct o78_int *)(t120))->v)) + 0x71C);
            t122 = (((struct oCC_int *)(a4))->v);
            (((struct o7C_uint *)(t122))->v) = (((((struct o7C_int *)(t122))->v)) + 0x1C71);
            t124 = (((struct oD0_int *)(a4))->v);
            (((struct o78_uint *)(t124))->v) = (((((struct o78_int *)(t124))->v)) + 0x71C);
            t126 = (((struct oD0_int *)(a4))->v);
            (((struct o7C_uint *)(t126))->v) = (((((struct o7C_int *)(t126))->v)) + 0x1C71);
            t128 = (((struct oD4_int *)(a4))->v);
            (((struct o78_uint *)(t128))->v) = (((((struct o78_int *)(t128))->v)) + 0x71C);
            t130 = (((struct oD4_int *)(a4))->v);
            (((struct o7C_uint *)(t130))->v) = (((((struct o7C_int *)(t130))->v)) + 0x1C71);
            t144 = 0x7C;
        } else {
            t144 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    }
    return t144;
}
