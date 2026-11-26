/* Straight-line functions with calls and guards (batch gen_dd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cb448(int, int);
int FUN_0c1224ec(int, int);
int FUN_0c1238f8(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c08ac24(int a4, int a5, int a6);
int FUN_0c08d872(int a4, int a5, int a6);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };



int FUN_0c08d872(int a4, int a5, int a6)
{
    int stk[7];
    int t152;
    int t98;
    int t7;
    int t8;
    int t10;
    int t32;
    int t59;
    int t22;
    int t0;
    int t101;
    int t97;
    int t96;
    int t107;
    int t106;
    int t105;
    int t104;
    int t82;
    int t77;
    int t76;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    if (((((struct o20_short *)(a4))->v)) != 0) {
        t7 = (((struct o38_int *)(a4))->v);
        t8 = (((struct o3850_short *)(a4))->v);
        t10 = (unsigned short)(t8 - t7);
        if ((0x8000 & (unsigned short)(t8 - t7)) != 0) {
            t10 = ((unsigned short)(t8 - t7) | 0xFFFF0000);
        }
        if ((int)((((struct o20_short *)(a4))->v)) > 0) {
            (((struct o38_uint *)(a4))->v) = (unsigned short)(((((struct o38_int *)(a4))->v)) + ((int)((int)t10 / (int)((((struct o20_short *)(a4))->v)))));
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    } else {
        t22 = FUN_0c07ebd0(a4);
        if (t22 != 0) {
            (((struct o3850_uint *)(a4))->v) = (unsigned short)(((*(short *)((0xC5413E8 + ((short)(*(signed char *)(a4 + 0x1)) * (short)0x2F8)))) + (FUN_0c07eaf4(a4))) - ((((struct o38_int *)(a4))->v)));
            if ((((((struct o3850_int *)(a4))->v)) & 0x8000) != 0) {
                (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) | 0xFFFF0000);
            }
            t32 = (((struct o3850_int *)(a4))->v);
            if (((int)t32 > (int)0x16C) || ((int)t32 < (int)0xFFFFFE94)) {
                if ((int)((((struct o3850_int *)(a4))->v)) > 0) {
                    (((struct o3850_uint *)(a4))->v) = 0x16C;
                } else {
                    (((struct o3850_uint *)(a4))->v) = 0xFFFFFE94;
                }
                (((struct o38_uint *)(a4))->v) = (unsigned short)(((((struct o38_int *)(a4))->v)) + ((((struct o3850_short *)(a4))->v)));
            }
        }
    }
    t59 = (((struct o1C_short *)(a4))->v);
    (((struct o1C_ushort *)(a4))->v) = (t59 - 1);
    if ((short)(t59 - 1) == 0) {
        FUN_0c1238f8(a4, 0x3);
        if (((((struct o1E_short *)(a4))->v)) == 0) {
            FUN_0c059e60(a4, 0x9);
        }
        FUN_0c1224ec(a4, ((((*(signed char *)(a4 + 0x375A)) == 3)) ? 1 : 0));
        if (((((struct o1E_short *)(a4))->v)) != 0) {
            FUN_0c07d030(a4, 0x0);
        }
        t76 = (((struct o1E_short *)(a4))->v);
        (((struct o1E_ushort *)(a4))->v) = (t76 + 0x1);
        t152 = (t76 + 0x1);
    } else {
        t77 = (((struct o1C_short *)(a4))->v);
        t152 = t77;
        if ((int)t77 < 0) {
            t82 = (((struct o1E_short *)(a4))->v);
            t152 = t82;
            if ((int)t82 < (int)0x3) {
                t152 = 0x37B8;
                if (((((struct o37B8_float *)(a4))->v)) > 0.0f) {
                    t152 = 0x430;
                    if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
                        if ((*(signed char *)(a4 + 0x375A)) != 3) {
                            t98 = *(signed char *)(a4 + 0x1);
                            t97 = t98;
                            t96 = 0xE;
                            t101 = 0xE;
                        } else {
                            t98 = *(signed char *)(a4 + 0x1);
                            t97 = t98;
                            t96 = 0xF;
                            t101 = 0xF;
                        }
                        FUN_0c07e79c(a4, t98, 0x1, t101, t97, 0x1, t96);
                        t104 = *(int *)(((0x118 + a4) + 0x4));
                        t105 = (((struct o118_int *)(a4))->v);
                        (((struct oA0_float *)(t104))->v) = 1.0f;
                        (((struct o9C_float *)(t104))->v) = 1.0f;
                        (((struct oA0_float *)(t105))->v) = 1.0f;
                        (((struct o9C_float *)(t105))->v) = 1.0f;
                        t106 = *(int *)(((0x118 + a4) + 0x4));
                        t107 = (((struct o118_int *)(a4))->v);
                        (((struct o98_float *)(t106))->v) = 1.0f;
                        (((struct o98_float *)(t107))->v) = 1.0f;
                        (((struct o94_float *)(t106))->v) = 1.0f;
                        (((struct o94_float *)(t107))->v) = 1.0f;
                        (((struct o1C_ushort *)(a4))->v) = 0x12;
                        t152 = 0x12;
                    }
                }
            }
        }
    }
    return t152;
}
