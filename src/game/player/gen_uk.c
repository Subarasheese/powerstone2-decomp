/* Straight-line functions with calls and guards (batch gen_uk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o1200_uchar { char p[0x1200]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o430_short { char p[0x430]; short v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o8C_int { char p[0x8C]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c070320(int);
int FUN_0c07d030(int, int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c1272a8(int, int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c08fb74(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c08fb74(int a4)
{
    int R1008;
    int stk[6];
    int R1012;
    int R1016;
    int R1004;
    int t90;
    int t115;
    int t117;
    int t31;
    int t29;
    int t1;
    int t26;
    int t23;
    int t9;
    int t30;
    int t124;
    int t123;
    int t122;
    int t121;
    int t110;
    int t105;
    int t93;
    int t80;
    int t79;
    int t73;
    int t58;
    int t57;
    int t51;
    int t25;
    int qe0;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);

    if ((((((struct o22_short *)(a4))->v)) != 0) && (t1 = (((struct o1C_short *)(a4))->v), (int)t1 < (int)0x6)) {
        FUN_0c0819c2(a4, 0x1555);
    }
    (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1);
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t9 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t9 == 2) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    if (((((struct o1C_short *)(a4))->v)) == (*(int *)((((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090) + 0x10)))) {
        FUN_0c1272a8(a4, (*(int *)((((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090) + 0x14))));
    }
    t23 = FUN_0c037bf6(a4);
    if ((unsigned char)t23 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    t25 = (((struct o1C_short *)(a4))->v);
    t26 = (((struct o20_short *)(a4))->v);
    qe0 = ((((t26 << 2) << 2) << 1) + 0xC1C6090);
    if (((int)t25 >= (int)(*(int *)((qe0 + 0x4)))) && ((t29 = *(int *)((qe0 + 0x8)), (int)t25 <= (int)t29) && (((t30 = (((struct o430_short *)(a4))->v), (0x200 & (unsigned short)t30) != 0) || ((0x80 & (unsigned short)t30) != 0)) && (t31 = (((struct o1E_short *)(a4))->v), t31 == 0)))) {
        FUN_0c07d030(a4, 0x0);
        (((struct o1E_ushort *)(a4))->v) = 0x1;
        if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
            (((struct o3731_uchar *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x1;
        } else {
            (((struct o3731_uchar *)(a4))->v) = 0x2;
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
    }
    t90 = 0;
    if (((((struct o1C_short *)(a4))->v)) != (*(int *)((((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090) + 0x18)))) {
        t90 = 1;
    } else {
        if ((*(signed char *)(a4 + 0x371A)) == 0) {
            R1016 = 0xC1C5F74;
            R1012 = 0xC1C5F68;
            R1008 = 0x52;
            t51 = (*(int *)(((0xC1C6090 + (((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1)) + 0x1C)));
            R1004 = t51;
            FUN_0c158dc8((*(signed char *)(a4 + 0x1)), 0x1, 0x5, 0x1, t51, 0x52, 0xC1C5F68, 0xC1C5F74);
        } else {
            R1016 = 0xC1C5F8C;
            R1012 = 0xC1C5F80;
            R1008 = 0x52;
            t57 = (*(int *)(((0xC1C6090 + (((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1)) + 0x1C)));
            R1004 = t57;
            t58 = *(signed char *)(a4 + 0x1);
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t58;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t58 << 2) + 0xC4B40FC)))))->v)) + 0x0))), t57, 0x52, 0xC1C5F80, 0xC1C5F8C);
        }
        if (((((struct o20_short *)(a4))->v)) == 4) {
            if ((*(signed char *)(a4 + 0x371A)) == 0) {
                R1016 = 0xC1C5FD4;
                R1012 = 0xC1C5FC8;
                R1008 = 0x42;
                t73 = (*(int *)((((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090) + 0x1C)));
                R1004 = t73;
                FUN_0c158dc8((*(signed char *)(a4 + 0x1)), 0x1, 0xC, 0x1, t73, 0x42, 0xC1C5FC8, 0xC1C5FD4);
            } else {
                R1016 = 0xC1C5FEC;
                R1012 = 0xC1C5FE0;
                R1008 = 0x42;
                t79 = (*(int *)((((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090) + 0x1C)));
                R1004 = t79;
                t80 = *(signed char *)(a4 + 0x1);
                (((struct o10_uchar *)(((int)stk + 0)))->v) = t80;
                FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0xB, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t80 << 2) + 0xC4B40FC)))))->v)) + 0x0))), t79, 0x42, 0xC1C5FE0, 0xC1C5FEC);
            }
            t90 = 1;
        }
    }
    if (t90) {
        if (((((struct o20_short *)(a4))->v)) == 4) {
            t93 = (((struct o1C_short *)(a4))->v);
            if (t93 == 2) {
                (((struct o1200_uchar *)((0x468 + a4)))->v) = 0x0;
                (((struct o447_uchar *)(a4))->v) = 0x3;
            } else {
                if (t93 == 69) {
                    (((struct o1200_uchar *)((0x468 + a4)))->v) = 0x1;
                    (((struct o447_uchar *)(a4))->v) = 0x0;
                }
            }
        }
    }
    t105 = (((struct o1C_short *)(a4))->v);
    if ((int)t105 >= (int)(*(int *)((((((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1) + 0xC1C6090) + 0xC)))) {
        t110 = (((struct o1E_short *)(a4))->v);
        if (t110 != 0) {
            (((struct o1C_ushort *)(a4))->v) = 0x0;
            (((struct o1E_ushort *)(a4))->v) = 0x0;
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            t115 = *(int *)(((0xC1C6090 + (((((((struct o20_short *)(a4))->v)) << 2) << 2) << 1)) + 0x0));
            *(unsigned int *)(((int)stk + 20)) = t115;
            R1016 = t115;
            R1012 = 0x1;
            t117 = *(signed char *)(a4 + 0x1);
            *(unsigned int *)(((int)stk + 16)) = t117;
            R1008 = t117;
            FUN_0c07e79c(a4, (*(int *)(((int)stk + 16))), 0x1, (*(int *)(((int)stk + 20))), t117, 0x1, t115);
            t121 = *(int *)(((0x118 + a4) + 0x4));
            t122 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t121))->v) = 1.0f;
            (((struct o9C_float *)(t121))->v) = 1.0f;
            (((struct oA0_float *)(t122))->v) = 1.0f;
            (((struct o9C_float *)(t122))->v) = 1.0f;
            t123 = *(int *)(((0x118 + a4) + 0x4));
            t124 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t123))->v) = 1.0f;
            (((struct o98_float *)(t124))->v) = 1.0f;
            (((struct o94_float *)(t123))->v) = 1.0f;
            (((struct o94_float *)(t124))->v) = 1.0f;
            return FUN_0c0819c2(a4, 0x71C);
        }
        return t110;
    }
    return t105;
}
