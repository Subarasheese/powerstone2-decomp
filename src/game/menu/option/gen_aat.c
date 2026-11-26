/* Straight-line functions with calls and guards (batch gen_aat): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c058542(int, float);
extern int math_atan2_angle16();
float math_signed_sqrt(float);
int FUN_0c0585a8(int a4, int a5, int a6, float f4);

int FUN_0c0585a8(int a4, int a5, int a6, float f4)
{
    int stk[4];
    register int t10;
    register int t12;
    register int t15;
    register int t17;
    register int t21;
    register float u32;
    register float u33;
    register float u34;
    register float t35;
    register float u36;
    register int t39;
    register int t41;
    register int t44;
    register int t46;
    register int t50;
    register int t30;
    register int t59;
    register float R1004;
    register float R1008;
    register float R1012;
    register float R1016;

    R1004 = *(float *)((int)stk + 0);
    R1008 = *(float *)((int)stk + 4);
    R1012 = *(float *)((int)stk + 8);
    R1016 = *(float *)((int)stk + 12);

    R1004 = f4;
    R1008 = ((*(float *)((a5 + 0x0))) - ((((struct o28_float *)(a4))->v)));
    R1012 = (((((struct o4_float *)(a5))->v)) - ((((struct o2C_float *)(a4))->v)));
    R1016 = (((((struct o8_float *)(a5))->v)) - ((((struct o30_float *)(a4))->v)));
    if ((R1016) == 0.0f) {
        R1016 = 9.99999997e-07f;
    }
    t10 = ((int (*)(int, int, int, float, float))(math_atan2_angle16))(a4, a5, a6, (R1008), (R1016));
    t12 = (t10 & 0xFFFF);
    if ((int)((t10 & 0xFFFF) - (*(int *)((a4 + 0x38)))) > (int)0x8000) {
        t12 = ((t10 & 0xFFFF) - 0x10000);
    }
    t15 = t12;
    if ((int)(t12 - (*(int *)((a4 + 0x38)))) < (int)0xFFFF8000) {
        t15 = (t12 + 0x10000);
    }
    t17 = *(int *)((a4 + 0x38));
    if (((int)(t15 - t17) >= (int)a6) && ((int)(t15 - t17) <= (int)(-a6))) {
        t21 = (-a6);
        if ((int)(t15 - (*(int *)((a4 + 0x38)))) >= 0) {
            t21 = a6;
        }
        t30 = ((*(int *)((a4 + 0x38))) + t21);
    } else {
        t30 = ((*(int *)((a4 + 0x38))) + ((int)((int)(t15 - (*(int *)((a4 + 0x38)))) / (int)0xA)));
    }
    *(unsigned int *)((a4 + 0x38)) = (t30 & 0xFFFF);
    u32 = R1016;
    u33 = R1008;
    u34 = (u32 * u32);
    u34 = u34 + u33 * u33;
    t35 = math_signed_sqrt(u34);
    u36 = t35;
    if (t35 == 0.0f) {
        u36 = 9.99999997e-07f;
    }
    t39 = ((int (*)(float, float))(math_atan2_angle16))((-(R1012)), u36);
    t41 = (t39 & 0xFFFF);
    if ((int)((t39 & 0xFFFF) - (*(int *)((a4 + 0x34)))) > (int)0x8000) {
        t41 = ((t39 & 0xFFFF) - 0x10000);
    }
    t44 = t41;
    if ((int)(t41 - (*(int *)((a4 + 0x34)))) < (int)0xFFFF8000) {
        t44 = (t41 + 0x10000);
    }
    t46 = *(int *)((a4 + 0x38));
    if (((int)(t44 - t46) >= (int)a6) && ((int)(t44 - t46) <= (int)(-a6))) {
        t50 = (-a6);
        if ((int)(t44 - (*(int *)((a4 + 0x34)))) >= 0) {
            t50 = a6;
        }
        t59 = ((*(int *)((a4 + 0x34))) + t50);
    } else {
        t59 = ((*(int *)((a4 + 0x34))) + ((int)((int)(t44 - (*(int *)((a4 + 0x34)))) / (int)0xA)));
    }
    *(unsigned int *)((a4 + 0x34)) = (t59 & 0xFFFF);
    return (FUN_0c058542(a4, (R1004)));
}
