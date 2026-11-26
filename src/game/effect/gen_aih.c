/* Straight-line functions with calls and guards (batch gen_aih): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
extern int FUN_0c037bf6();
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c07d030(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a31ca(int);
int FUN_0c136784(int);
int FUN_0c137f0c(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0a4884(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0a4884(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];
    register int t0;
    register int t4;
    register int t5;
    register int t9;
    register int t10;
    register int t24;
    register float t33;
    register float u36;
    register float t40;
    register float u43;
    register float u51;
    register int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t58;
    register int t59;
    register int t60;
    register int t61;
    register int t73;
    register int t79;
    register int t82;
    register int t83;
    register int t90;
    register float u46;
    register int R1004;
    register int R1008;
    register int R1012;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 == 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x11);
        t4 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t4))->v) = 5.0f;
        (((struct o94_float *)(t4))->v) = 5.0f;
        t5 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t5))->v) = 5.0f;
        (((struct o94_float *)(t5))->v) = 5.0f;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t9 = ((int (*)(int))(FUN_0c037bf6))(a4);
        t10 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t10 + 0x1);
        if ((short)(t10 + 0x1) != 22) {
            return (short)(t10 + 0x1);
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c059e60(a4, 0xA);
        FUN_0c07d030(a4, 0x1);
        return FUN_0c137f0c((*(signed char *)((a4 + 0x1))));
    } else {
        if (t0 != 2) {
            if (t0 == 3) {
                if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 25) {
                    FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
                }
                t24 = ((int (*)(int))(FUN_0c037bf6))(a4);
                t90 = (unsigned char)t24;
                if ((unsigned char)t24 == 0) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t90 = 0x15;
                }
            } else {
                if (t0 == 4) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    FUN_0c0a3058(a4, 0xFFFFFFFF, 0x4, 0x35);
                    if (!(((((struct o37B8_float *)(a4))->v)) > 0.0f)) {
                        R1004 = (a4 + 0x28);
                        t33 = math_sin_angle16((*(int *)((a4 + 0x38))));
                        R1008 = 0xC25D348;
                        u36 = ((((struct o28_float *)(a4))->v));
                        u36 = u36 + ((((struct o0_float *)0xC25D348)->v)) * t33;
                        (((struct o28_float *)(a4))->v) = u36;
                        R1004 = (a4 + 0x30);
                        u46 = (math_cos_angle16((*(int *)((a4 + 0x38)))));
                    } else {
                        R1004 = (a4 + 0x28);
                        t40 = math_sin_angle16((*(int *)((a4 + 0x38))));
                        R1008 = 0xC25D34C;
                        u43 = ((((struct o28_float *)(a4))->v));
                        u43 = u43 + ((((struct o4_float *)0xC25D348)->v)) * t40;
                        (((struct o28_float *)(a4))->v) = u43;
                        R1004 = (a4 + 0x30);
                        u46 = (math_cos_angle16((*(int *)((a4 + 0x38)))));
                    }
                    u51 = ((((struct o30_float *)(a4))->v));
                    u51 = u51 + (*(float *)(((R1008) + 0x0))) * u46;
                    (((struct o30_float *)(a4))->v) = u51;
                    t52 = *(int *)(((0x118 + a4) + 0x4));
                    t53 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t52))->v) = 1.0f;
                    (((struct o9C_float *)(t52))->v) = 1.0f;
                    (((struct oA0_float *)(t53))->v) = 1.0f;
                    (((struct o9C_float *)(t53))->v) = 1.0f;
                    t54 = (((struct o118_int *)(a4))->v);
                    t55 = *(int *)(((0x118 + a4) + 0x4));
                    (((struct o98_float *)(t55))->v) = 1.0f;
                    (((struct o98_float *)(t54))->v) = 1.0f;
                    (((struct o94_float *)(t55))->v) = 1.0f;
                    (((struct o94_float *)(t54))->v) = 1.0f;
                    t90 = (((int (*)(int, int, int))(FUN_0c037bf6))(a4, t54, t55));
                } else {
                    FUN_0c085cac(a4, 0xE, 0x0, a7);
                    t58 = *(int *)(((0x118 + a4) + 0x4));
                    t59 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t58))->v) = 1.0f;
                    (((struct o9C_float *)(t58))->v) = 1.0f;
                    (((struct oA0_float *)(t59))->v) = 1.0f;
                    (((struct o9C_float *)(t59))->v) = 1.0f;
                    t60 = *(int *)(((0x118 + a4) + 0x4));
                    t61 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t60))->v) = 1.0f;
                    (((struct o98_float *)(t61))->v) = 1.0f;
                    (((struct o94_float *)(t60))->v) = 1.0f;
                    (((struct o94_float *)(t61))->v) = 1.0f;
                    t90 = 0x94;
                }
            }
        } else {
            t73 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
            FUN_0c0a31ca(a4);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x200);
            FUN_0c136784(a4);
            t79 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t79 + 0x1);
            t90 = (short)(t79 + 0x1);
            if ((int)(short)(t79 + 0x1) <= (int)((((struct o8_int *)0xC25D348)->v))) {
            } else {
                FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
                t82 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t82))->v) = 8.0f;
                (((struct o94_float *)(t82))->v) = 8.0f;
                t83 = (((struct o11C_int *)(a4))->v);
                (((struct o98_float *)(t83))->v) = 8.0f;
                (((struct o94_float *)(t83))->v) = 8.0f;
                t90 = 0x94;
            }
        }
        return t90;
    }
}
