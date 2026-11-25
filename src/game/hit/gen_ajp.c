/* Straight-line functions with calls and guards (batch gen_ajp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_interval_overlap(float, float, float, float, float, float, float);
int FUN_0c065434(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);

int FUN_0c065434(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float t17;
    register float u18;
    register float u29;
    register int t31;
    float u19;
    float u30;
    register float R1004;
    register float R1008;
    register float R1012;

    R1004 = *(float *)((int)stk + 0);
    R1008 = *(float *)((int)stk + 4);
    R1012 = *(float *)((int)stk + 8);

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    u2 = (((struct oC_float *)((a4 + 0x8)))->v);
    u3 = (((struct oC_float *)((a5 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    R1004 = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)((a4 + 0x8)))->v);
    u7 = (((struct o14_float *)((a5 + 0x8)))->v);
    u8 = (((struct o8_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a5 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    R1012 = ((u7 + u6) - u11);
    u13 = (((struct o4_float *)((a4 + 0x8)))->v);
    u14 = (((struct o10_float *)((a4 + 0x8)))->v);
    u15 = (((struct o4_float *)((a5 + 0x8)))->v);
    u16 = (((struct o10_float *)((a5 + 0x8)))->v);
    t17 = math_interval_overlap((u15 + u16), (u15 - u16), (u13 + u14), (u13 - u14), f8, f9, f10);
    R1008 = t17;
    u18 = R1004;
    if (!(u18 > t17) && (u19 = R1012, !(u18 > u19))) {
        *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
    } else {
        u29 = R1012;
        t31 = 0x4;
        if (((R1004) > u29) && (u30 = R1008, u30 > u29)) {
            t31 = 0x8;
        }
        *(float *)((a6 + t31)) = ((*(float *)(((a4 + 0x8) + t31))) - (*(float *)(((a5 + 0x8) + t31))));
    }
    return 0x1;
}
