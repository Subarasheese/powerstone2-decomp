/* Straight-line functions with calls and guards (batch gen_sg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c13dd14(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int FUN_0c13ddb8(int a4, int a5, int a6, int a7);

int FUN_0c13ddb8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t20;
    register int t1;
    register int t3;
    register int t6;
    register int t21;
    register int t37;
    register int t42;
    register int t4;
    register int t5;
    register float u7;
    register int t22;
    register int R1004;

    R1004 = *(int *)((int)stk + 0);

    t0 = *(signed char *)((a4 + 0x14));
    t20 = 0;
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = FUN_0c03f346(a4, a5, a6, a7);
        } else {
            t20 = 1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o20_ushort *)(a4))->v) = 0x5;
        t3 = a4;
        t6 = 0x0;
        for (;;) {
            if ((int)t6 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t5 = t6;
            t5 = (t5 << 2);
            t5 = (t5 + (0xC4 + a4));
            t5 = (*(int *)((t5 + 0x0)));
            t4 = 0x1C71;
            R1004 = (((int)((int)(nlRand()) % (int)0x5)) + 0x5);
            t4 = (t6 * t4);
            t3 = t4;
            u7 = (float)(R1004);
            (((struct o90_float *)(t5))->v) = ((math_sin_angle16(t3)) * u7);
            t3 = t4;
            (((struct o98_float *)(t5))->v) = ((math_cos_angle16(t3)) * (u7));
            t3 = ((int)((int)(nlRand()) % (int)0xB));
            t3 = (t3 - 5);
            t6 = (t6 + 0x1);
            u7 = (float)t3;
            (((struct o94_float *)(t5))->v) = u7;
        }
        t20 = 1;
    }
    if (t20) {
        t21 = 0x0;
        for (;;) {
            if ((int)t21 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t22 = t21;
            t22 = (t22 << 2);
            t22 = (t22 + (0xC4 + a4));
            t22 = (*(int *)((t22 + 0x0)));
            math_vec3_accumulate((t22 + 0x6C), (0x90 + t22));
            *(float *)(((int)stk + 4)) = (float)((((struct o9C_int *)(t22))->v));
            *(float *)(((int)stk + 8)) = (float)((((struct oA0_int *)(t22))->v));
            *(float *)(((int)stk + 12)) = (float)((((struct oA4_int *)(t22))->v));
            math_vec3_accumulate((0x90 + t22), (((int)stk + 0) + 0x4));
            t21 = (t21 + 0x1);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
        }
        t37 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t37 - 1);
        if ((int)(short)(t37 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        t42 = (FUN_0c13dd14(a4));
    } else {
        t42 = t1;
    }
    return t42;
}
