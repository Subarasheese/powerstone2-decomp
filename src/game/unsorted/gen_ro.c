/* Straight-line functions with calls and guards (batch gen_ro): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int nlSubVector3op(int, int, int);
int FUN_0c158340(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };


int FUN_0c158340(int a4, int a5, int a6, int a7)
{
    int stk[11];
    int R1012;
    int t30;
    int t73;
    int t87;
    int t0;
    int t4;
    int t10;
    float u52;
    float u58;
    float u64;
    int t44;
    int t41;
    int t38;
    int R1020;
    int R1016;
    int R1008;
    int R1004;
    int t82;
    int t75;
    int t12;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);
    R1020 = *(int *)((int)stk + 16);

    t0 = *(signed char *)(a4 + 0x14);
    t73 = 0;
    switch (t0) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x23, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x23F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o48_float *)(a4))->v) = 0.400000006f;
        (((struct o44_float *)(a4))->v) = 0.400000006f;
        (((struct o40_float *)(a4))->v) = 0.400000006f;
        { struct mv4 { int w[4]; }; *(struct mv4 *)((0xB0 + a4)) = *(struct mv4 *)(0xC2A27E4); }
        R1016 = (((int)stk + 8) + 0x18);
        t38 = nlRand();
        *(unsigned int *)(((((int)stk + 8) + 0x18) + 0x0)) = ((((t38 % 0x10) << 8) << 2) << 2);
        R1012 = ((((int)stk + 8) + 0x18) + 0x4);
        t41 = nlRand();
        *(unsigned int *)((((((int)stk + 8) + 0x18) + 0x4) + 0x0)) = ((((t41 % 0x10) << 8) << 2) << 2);
        R1020 = ((((int)stk + 8) + 0x18) + 0x8);
        t44 = nlRand();
        *(unsigned int *)((((((int)stk + 8) + 0x18) + 0x8) + 0x0)) = ((((t44 % 0x10) << 8) << 2) << 2);
        u52 = ((((struct o28_float *)(a4))->v)) + (float)((((struct oC_int *)0xC2A29EC)->v)) * (math_cos_angle16((*(int *)(((R1016) + 0x0)))));
        *(float *)(((int)stk + 20)) = u52;
        u58 = ((((struct o2C_float *)(a4))->v)) + (float)((((struct oC_int *)0xC2A29EC)->v)) * (math_sin_angle16((*(int *)(((R1012) + 0x0)))));
        *(float *)(((int)stk + 24)) = u58;
        u64 = ((((struct o30_float *)(a4))->v)) + (float)((((struct oC_int *)0xC2A29EC)->v)) * (math_sin_angle16((*(int *)(((R1020) + 0x0)))));
        *(float *)(((int)stk + 28)) = u64;
        nlSubVector3op((a4 + 0x4C), (((int)stk + 8) + 0xC), (a4 + 0x28));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) / (float)((((struct o8_int *)0xC2A29EC)->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / (float)((((struct o8_int *)0xC2A29EC)->v)));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) / (float)((((struct o8_int *)0xC2A29EC)->v)));
        t73 = 1;
        break;
    case 1:
        t73 = 1;
        break;
    case 2:
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        if (((((struct o1C_short *)(a4))->v)) != ((((struct o4_int *)0xC2A29EC)->v))) {
            t4 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t4 + 0x1);
            t30 = (t4 + 0x1);
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            t30 = 0x14;
        }
        break;
    default:
        if (t0 == 3) {
            t10 = ((((struct o4_int *)0xC2A29EC)->v));
            R1008 = t10;
            R1012 = 0xC2A29F4;
            t12 = ((((struct o8_int *)0xC2A29EC)->v));
            R1004 = t12;
            FUN_0c058a6e((0xB0 + a4), 0xC2A2A1C, 0xC2A2A0C, ((((struct o1C_short *)(a4))->v)), t12, t10);
            if (((((struct o1C_short *)(a4))->v)) == (*(int *)(((R1012) + 0x0)))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                t30 = 0x14;
            } else {
                (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1);
                t30 = (math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C)));
            }
        } else {
            t30 = (FUN_0c03f346(a4, a5, a6, a7));
        }
        break;
    }
    if (t73) {
        R1008 = 0x0;
        R1012 = 0xC2A29EC;
        t75 = ((((struct o0_int *)0xC2A29EC)->v));
        R1004 = t75;
        FUN_0c058a6e((0xB0 + a4), 0xC2A2A0C, 0xC2A29FC, ((((struct o1C_short *)(a4))->v)), t75, 0x0);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        if (((((struct o1C_short *)(a4))->v)) != (*(int *)(((R1012) + 0x0)))) {
            t82 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t82 + 0x1);
            t87 = (t82 + 0x1);
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            t87 = 0x14;
        }
    } else {
        t87 = t30;
    }
    return t87;
}
