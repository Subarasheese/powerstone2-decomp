/* game/unsorted: functions 0C08D170-0C08D2B2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c059e60(int, int);
int FUN_0c07d774(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
float FUN_0c08d170(int a4);

float FUN_0c08d170(int a4)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u19;
    register float u20;
    register float u21;
    register float t22;
    register int t24;
    register int t27;
    register float t30;
    register float u33;
    register float t35;
    register float u38;
    register float t40;

    *(int *)((int)stk + 8) = 0x13;
    *(int *)((int)stk + 4) = 0x1;
    t0 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = t0;
    t1 = t0;
    *(int *)((int)stk + 0) = t1;
    FUN_0c07e79c(a4, t0, 0x1, 0x13, t1, 0x1, 0x13);
    t3 = *(int *)(((0x118 + a4) + 0x4));
    t4 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    (((struct oA0_float *)(t4))->v) = 1.0f;
    (((struct o9C_float *)(t4))->v) = 1.0f;
    t5 = *(int *)(((0x118 + a4) + 0x4));
    t6 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t5))->v) = 1.0f;
    (((struct o98_float *)(t6))->v) = 1.0f;
    (((struct o94_float *)(t5))->v) = 1.0f;
    (((struct o94_float *)(t6))->v) = 1.0f;
    FUN_0c059e60(a4, 0x22);
    FUN_0c07e2f4(a4, 0x65);
    (((struct o20_ushort *)(a4))->v) = 0x4;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    (((struct o4_float *)(((int)stk + 12)))->v) = (((((struct o380C_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v)));
    (((struct o4_float *)((((int)stk + 12) + 0x4)))->v) = ((((((struct o3810_float *)(a4))->v)) - ((((struct o2C_float *)(a4))->v))) + 100.0f);
    (((struct o8_float *)((((int)stk + 12) + 0x4)))->v) = (((((struct o3814_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v)));
    if (((((struct o4_float *)((((int)stk + 12) + 0x4)))->v)) == 0.0f) {
        (((struct o4_float *)((((int)stk + 12) + 0x4)))->v) = 9.99999975e-06f;
    }
    u19 = (((struct o4_float *)(((int)stk + 12)))->v);
    u20 = (((struct o8_float *)((((int)stk + 12) + 0x4)))->v);
    u21 = (u20 * u20);
    u21 = u21 + u19 * u19;
    t22 = math_signed_sqrt(u21);
    t24 = math_atan_angle16((t22 / ((((struct o4_float *)((((int)stk + 12) + 0x4)))->v))));
    t27 = t24;
    if (0.0f > ((((struct o4_float *)((((int)stk + 12) + 0x4)))->v))) {
        t27 = (t24 + 0x8000);
    }
    *(unsigned int *)((a4 + 0x34)) = (t27 - 16384);
    t30 = math_sin_angle16((*(int *)((a4 + 0x38))));
    u33 = (t30 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
    (((struct o4C_float *)(a4))->v) = (u33 * 36.0f);
    t35 = math_cos_angle16((*(int *)((a4 + 0x38))));
    u38 = (t35 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
    (((struct o54_float *)(a4))->v) = (u38 * 36.0f);
    t40 = math_sin_angle16((*(int *)((a4 + 0x34))));
    (((struct o50_float *)(a4))->v) = (-(t40 * 36.0f));
    return (-(t40 * 36.0f));
}
