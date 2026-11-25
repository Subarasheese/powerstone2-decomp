/* Straight-line functions with calls and guards (batch gen_zr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c09bc60(int a4);

int FUN_0c09bc60(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 0) {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
        } else {
            if ((*(short *)((a4 + 0x1E))) != 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            } else {
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            return FUN_0c037bf6(a4);
        }
    }
    if (t0 == 2) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0xF, (t0), 0x2, 0xF);
    u0 = *(float *)0xC09BDF4;
    t0 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = u0;
    (((struct o94_float *)(t0))->v) = u0;
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = u0;
    (((struct o94_float *)(t0))->v) = u0;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u0);
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
    (((struct o15_uchar *)(a4))->v) = 0x2;
    return 0x15;
}
