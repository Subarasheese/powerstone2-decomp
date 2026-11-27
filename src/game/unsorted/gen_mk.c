/* Straight-line functions with calls and guards (batch gen_mk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c06c134(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c08515a(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c06f0be(int a4);
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };


int FUN_0c06f0be(int a4)
{
    int stk[12];
    int t24;
    int t42;
    int t3;
    int t13;
    int t32;
    int t49;
    int t50;
    float u5;
    float u6;
    int t67;
    int t59;
    int t54;
    int t4;
    int t69;
    int t58;
    int t33;
    int t76;
    int t44;
    int t41;
    int t40;
    int t26;
    int t23;
    int t22;
    int t75;
    int t74;
    int t73;
    int t72;
    int t68;
    int t52;
    int t51;

    FUN_0c06c134(a4);
    if (((((struct o1E_short *)(a4))->v)) != 0) {
        (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) - 1);
    } else {
        t3 = FUN_0c08515a(a4, 0x4);
        if ((t3 != 0) && (t4 = (((struct o4_int *)(t3))->v), u5 = (((struct o2C_float *)(a4))->v), u6 = (((struct o2C_float *)(t4))->v), !(u6 > u5))) {
        } else {
            t13 = *(signed char *)(a4 + 0x2);
            if (t13 != 8) {
                if (t13 != 10) {
                } else {
                    if ((*(signed char *)(a4 + 0x371C)) != 0) {
                        t24 = *(signed char *)(a4 + 0x1);
                        t23 = t24;
                        t22 = 0x26;
                        t26 = 0x26;
                    } else {
                        t24 = *(signed char *)(a4 + 0x1);
                        t23 = t24;
                        t22 = 0x12;
                        t26 = 0x12;
                    }
                    FUN_0c07e79c(a4, t24, 0x0, t26, t23, 0x0, t22);
                }
                t32 = *(signed char *)(a4 + 0x1);
                t33 = t32;
                FUN_0c07e79c(a4, t32, 0x0, 0x12, t33, 0x0, 0x12);
            } else {
                if ((*(signed char *)(a4 + 0x371C)) != 0) {
                    t42 = *(signed char *)(a4 + 0x1);
                    t41 = t42;
                    t40 = 0x22;
                    t44 = 0x22;
                } else {
                    t42 = *(signed char *)(a4 + 0x1);
                    t41 = t42;
                    t40 = 0x12;
                    t44 = 0x12;
                }
                FUN_0c07e79c(a4, t42, 0x0, t44, t41, 0x0, t40);
            }
            t49 = *(int *)(((0x118 + a4) + 0x4));
            t50 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t49))->v) = 1.0f;
            (((struct o9C_float *)(t49))->v) = 1.0f;
            (((struct oA0_float *)(t50))->v) = 1.0f;
            (((struct o9C_float *)(t50))->v) = 1.0f;
            t51 = *(int *)(((0x118 + a4) + 0x4));
            t52 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t51))->v) = 1.0f;
            (((struct o98_float *)(t52))->v) = 1.0f;
            (((struct o94_float *)(t51))->v) = 1.0f;
            (((struct o94_float *)(t52))->v) = 1.0f;
            if (((*(signed char *)(a4 + 0x2)) == 8) && (t54 = *(signed char *)(a4 + 0x371C), t54 != 0)) {
                return FUN_0c085cac(a4, 0x1, 0x1);
            }
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0xC;
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 100.0f);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
            return 0x16;
        }
    }
    t58 = FUN_0c07ebd0(a4);
    if ((t58 == 0) && (t59 = (((struct o1E_short *)(a4))->v), t59 == 0)) {
        if (((*(signed char *)(a4 + 0x2)) == 8) && (t67 = *(signed char *)(a4 + 0x371C), t67 != 0)) {
            t68 = *(signed char *)(a4 + 0x1);
            t69 = t68;
            FUN_0c07e79c(a4, t68, 0x0, 0x23, t69, 0x0, 0x23);
            (((struct o16_uchar *)(a4))->v) = 0x3;
            t76 = 0x16;
        } else {
            FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
            t72 = *(int *)(((0x118 + a4) + 0x4));
            t73 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t72))->v) = 1.0f;
            (((struct o9C_float *)(t72))->v) = 1.0f;
            (((struct oA0_float *)(t73))->v) = 1.0f;
            (((struct o9C_float *)(t73))->v) = 1.0f;
            t74 = *(int *)(((0x118 + a4) + 0x4));
            t75 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t74))->v) = 1.0f;
            (((struct o98_float *)(t75))->v) = 1.0f;
            (((struct o94_float *)(t74))->v) = 1.0f;
            (((struct o94_float *)(t75))->v) = 1.0f;
            t76 = 0x94;
        }
        return t76;
    }
    if (((((struct o1E_short *)(a4))->v)) == 0) {
        (((struct o38_uint *)(a4))->v) = (unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)(a4 + 0x1)) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
    }
    (((struct o4C_float *)(a4))->v) = (((math_sin_angle16(((((struct o38_int *)(a4))->v)))) * 300.0f) / 25.0f);
    (((struct o54_float *)(a4))->v) = (((math_cos_angle16(((((struct o38_int *)(a4))->v)))) * 300.0f) / 25.0f);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return FUN_0c037bf6(a4);
}
