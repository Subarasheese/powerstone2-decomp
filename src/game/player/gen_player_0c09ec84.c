/* game/player: functions 0C09EC84-0C09EE92, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c070320(int);
int FUN_0c07ce58(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c0819c2(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c14f824(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c09ec84(int a4);
int FUN_0c09ed56(int a4);

int FUN_0c09ec84(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xE, (t0), 0x2, 0xE);
        FUN_0c080320(a4, ((((struct o0_float *)0xC09EDB8)->v)));
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c07ce58(a4, (((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        u0 = (((struct o18_float *)0xC09EDB8)->v);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u0);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c09ed56(int a4)
{
    int stk[2];
    int t0;
    register float u2;
    register int t6;
    register int t29;
    register int t32;
    register int t33;
    register int t34;
    register int t35;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t0 != 0) && (t0 != 1)) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    u2 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (((int)u2 != 4) && (((int)u2 != 15) && (((int)u2 != 25) && (((int)u2 != 36) && (((int)u2 != 46) && ((int)u2 != 57)))))) {
    } else {
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            t6 = FUN_0c07d1fc(a4);
            if (t6 != 0) {
                FUN_0c0819c2(a4, 0xE38);
            }
        }
    }
    FUN_0c07da48(a4);
    if ((*(float *)0xC09EF04) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    }
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t29 = FUN_0c037bf6(a4);
    if ((unsigned char)t29 != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t32 = *(int *)(((0x118 + a4) + 0x4));
        t33 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t32))->v) = 1.0f;
        (((struct o9C_float *)(t32))->v) = 1.0f;
        (((struct oA0_float *)(t33))->v) = 1.0f;
        (((struct o9C_float *)(t33))->v) = 1.0f;
        t34 = *(int *)(((0x118 + a4) + 0x4));
        t35 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t34))->v) = 1.0f;
        (((struct o98_float *)(t35))->v) = 1.0f;
        (((struct o94_float *)(t34))->v) = 1.0f;
        (((struct o94_float *)(t35))->v) = 1.0f;
        return 0x94;
    }
    return FUN_0c070320(a4);
}
