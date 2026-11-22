/* Straight-line functions with calls and guards (batch gen_jb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
extern int FUN_0c037bf6();
int FUN_0c07d1fc(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0967da(int a4, int a5, int a6, int a7);

int FUN_0c0967da(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x131))) != 0) {
        (((struct o131_uchar *)(a4))->v) = 0x0;
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x1, 0x1D, (t0), 0x1, 0x1D);
                t0 = *(int *)(((0x118 + a4) + 0x4));
                t1 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t0))->v) = 1.0f;
                (((struct o9C_float *)(t0))->v) = 1.0f;
                (((struct oA0_float *)(t1))->v) = 1.0f;
                (((struct o9C_float *)(t1))->v) = 1.0f;
                t0 = *(int *)(((0x118 + a4) + 0x4));
                t1 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t0))->v) = 1.0f;
                (((struct o98_float *)(t1))->v) = 1.0f;
                (((struct o94_float *)(t0))->v) = 1.0f;
                (((struct o94_float *)(t1))->v) = 1.0f;
                (((struct o4C_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 7.5f));
                (((struct o50_float *)(a4))->v) = 15.0f;
                (((struct o54_float *)(a4))->v) = (-((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 7.5f));
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = -1.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return 0x16;
            }
            t0 = 0xA;
            if ((*(short *)((a4 + 0x1C))) != 1) {
                t0 = 0x9;
            }
            FUN_0c07e2f4(a4, t0);
        }
        t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
    } else {
        t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        return t0;
    }
    return 0x50;
}
