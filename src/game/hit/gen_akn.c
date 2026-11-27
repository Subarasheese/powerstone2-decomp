/* Straight-line functions with calls and guards (batch gen_akn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c064fd4(int a4, int a5, int a6);

int FUN_0c064fd4(int a4, int a5, int a6)
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
    register float u18;
    register float u20;
    register float u31;
    register int t33;
    float u21;
    float u32;
    register float R1004;
    register float R1008;
    register float R1012;

    R1004 = *(float *)((int)stk + 0);
    R1008 = *(float *)((int)stk + 4);
    R1012 = *(float *)((int)stk + 8);

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    u2 = (((struct oC_float *)((a5 + 0x8)))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    R1004 = ((u3 + u2) - u4);
    u6 = (((struct o14_float *)((a5 + 0x8)))->v);
    u7 = (((struct oC_float *)((a4 + 0x8)))->v);
    u8 = (((struct o8_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a5 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    R1012 = ((u7 + u6) - u11);
    u13 = (((struct o10_float *)((a5 + 0x8)))->v);
    u14 = (((struct oC_float *)((a4 + 0x8)))->v);
    u15 = (((struct o4_float *)((a4 + 0x8)))->v);
    u16 = (((struct o4_float *)((a5 + 0x8)))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    R1008 = ((u14 + u13) - u18);
    u20 = R1004;
    if (!(u20 > ((u14 + u13) - u18)) && (u21 = R1012, !(u20 > u21))) {
        *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
    } else {
        u31 = R1012;
        t33 = 0x4;
        if (((R1004) > u31) && (u32 = R1008, u32 > u31)) {
            t33 = 0x8;
        }
        *(float *)((a6 + t33)) = ((*(float *)(((a4 + 0x8) + t33))) - (*(float *)(((a5 + 0x8) + t33))));
    }
    return 0x1;
}
