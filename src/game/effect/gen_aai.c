/* Straight-line functions with calls and guards (batch gen_aai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
extern int FUN_0c037bf6();
int FUN_0c059e60(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07d774(int);
extern int FUN_0c085d0c();
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a30dc(int);
int FUN_0c13a044(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0a5588(int a4, int a5, int a6);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };


int FUN_0c0a5588(int a4, int a5, int a6)
{
    int t0;
    float u24;
    int t12;
    int t44;
    int t45;
    int t75;
    int t28;
    float u15;
    int t25;
    float u19;
    float u23;
    int t78;
    int t66;
    int s0;
    int t46;
    int R1004;
    int t94;
    int t93;
    int t92;
    int t91;
    int t90;
    int t80;
    int t79;
    int t81;
    int t48;
    int t37;
    int t35;
    int t33;
    int t26;

    R1004 = s0;

    t0 = *(signed char *)(a4 + 0x15);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                FUN_0c0a3058(a4, (*(signed char *)(a4 + 0x1)), 0x1, 0x12);
            } else if (t0 == 3) {
            } else {
                if (t0 == 4) {
                    t12 = (((struct o1C_short *)(a4))->v);
                    (((struct o1C_ushort *)(a4))->v) = (t12 + 0x1);
                    t28 = (short)(t12 + 0x1);
                    if ((int)(short)(t12 + 0x1) > (int)0xA) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                        FUN_0c0a3058(a4, 0xFFFFFFFF, 0x4, 0x37);
                        u15 = (((struct o0_float *)0xC0A58A4)->v);
                        R1004 = (a4 + 0x28);
                        u19 = ((((struct o28_float *)(a4))->v)) + u15 * (math_sin_angle16(((((struct o38_int *)(a4))->v))));
                        (((struct o28_float *)(a4))->v) = u19;
                        R1004 = (a4 + 0x30);
                        u23 = ((((struct o30_float *)(a4))->v)) + u15 * (math_cos_angle16(((((struct o38_int *)(a4))->v))));
                        (((struct o30_float *)(a4))->v) = u23;
                        u24 = (((struct oC_float *)0xC0A58A4)->v);
                        t25 = (((struct o118_int *)(a4))->v);
                        (((struct o98_float *)(t25))->v) = u24;
                        (((struct o94_float *)(t25))->v) = u24;
                        t26 = (((struct o11C_int *)(a4))->v);
                        (((struct o98_float *)(t26))->v) = u24;
                        (((struct o94_float *)(t26))->v) = u24;
                        t28 = (((int (*)(int))(FUN_0c037bf6))(a4));
                    }
                    return t28;
                }
                if (t0 == 5) {
                    t33 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                    if ((unsigned char)t33 != 0) {
                        return ((int (*)(int))(FUN_0c085d0c))(a4);
                    }
                    return (unsigned char)t33;
                }
                return t0;
            }
            t35 = ((int (*)(int))(FUN_0c037bf6))(a4);
            t37 = (unsigned char)t35;
            if ((unsigned char)t35 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                (((struct o1C_ushort *)(a4))->v) = 0x0;
                t37 = 0x0;
            }
            return t37;
        }
        if ((int)((((struct o1E_short *)(a4))->v)) >= 0) {
            t44 = (((struct o38_int *)(a4))->v);
            t45 = (((struct o3850_short *)(a4))->v);
            t46 = (((struct o38_int *)(a4))->v);
            t48 = (unsigned short)(t45 - t44);
            if ((0x8000 & (unsigned short)(t45 - t44)) != 0) {
                t48 = ((unsigned short)(t45 - t44) | 0xFFFF0000);
            }
            (((struct o38_uint *)(a4))->v) = (unsigned short)(t46 + ((int)((int)t48 / (int)((((struct o1E_short *)(a4))->v)))));
            (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) - 1);
        }
        if (((((struct o1C_short *)(a4))->v)) == 4) {
            FUN_0c07d030(a4, 0x2);
            FUN_0c13a044(a4);
        }
        t66 = ((int (*)(int))(FUN_0c037bf6))(a4);
        if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 30) {
            FUN_0c059e60(a4, 0xB);
        }
        FUN_0c0a30dc(a4);
        t75 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t75 + 0x1);
        t81 = (short)(t75 + 0x1);
        if ((int)(short)(t75 + 0x1) <= (int)(*(int *)0xC25D358)) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            t78 = ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, 0x0, 0x0, 0x0);
            t79 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t79))->v) = 8.0f;
            (((struct o94_float *)(t79))->v) = 8.0f;
            t80 = (((struct o11C_int *)(a4))->v);
            (((struct o98_float *)(t80))->v) = 8.0f;
            (((struct o94_float *)(t80))->v) = 8.0f;
            t81 = 0x94;
        }
        return t81;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
    FUN_0c0a3058(a4, (*(signed char *)(a4 + 0x1)), 0x1, 0xE);
    t90 = *(int *)(((0x118 + a4) + 0x4));
    t91 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t90))->v) = 1.0f;
    (((struct o9C_float *)(t90))->v) = 1.0f;
    (((struct oA0_float *)(t91))->v) = 1.0f;
    (((struct o9C_float *)(t91))->v) = 1.0f;
    t92 = *(int *)(((0x118 + a4) + 0x4));
    t93 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t92))->v) = 1.0f;
    (((struct o98_float *)(t93))->v) = 1.0f;
    (((struct o94_float *)(t92))->v) = 1.0f;
    (((struct o94_float *)(t93))->v) = 1.0f;
    (((struct o1C_ushort *)(a4))->v) = 0x0;
    (((struct o1E_ushort *)(a4))->v) = 0x4;
    t94 = FUN_0c07d774(a4);
    (((struct o3850_uint *)(a4))->v) = t94;
    return t94;
}
