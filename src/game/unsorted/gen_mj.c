/* Straight-line functions with calls and guards (batch gen_mj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int FUN_0c12cb8c(int a4, int a5, int a6, int a7);

int FUN_0c12cb8c(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t93;
    int t3;
    register int t4;
    register int t11;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register float u25;
    register float u33;
    register float t34;
    register float u37;
    register float t39;
    register float u42;
    register int t46;
    register int t54;
    register int t61;
    register int t62;
    register int t63;
    register int t64;
    register int t65;
    register float u67;
    register float t81;
    register float u84;
    register float t86;
    register float u89;

    *(unsigned char *)(((int)stk + 20)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    t93 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12CF48;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o14_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 20)));
        (((struct o15_uchar *)(t0))->v) = 0x0;
        t3 = *(signed char *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 16)) = t3;
        if ((t3 != 0) && (t3 != 2)) {
            t4 = 0;
            if (t3 == 1) {
                t4 = 1;
            } else if (t3 == 3) {
                t4 = 1;
            }
            if (t4) {
                if ((*(int *)(((int)stk + 16))) == 3) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
                }
                t11 = *(signed char *)((t0 + 0x1));
                *(unsigned char *)(((int)stk + 16)) = t11;
                FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 16))), 0x2, (*(int *)((((signed char)t11 << 2) + 0xC4B40FC))));
                *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x41F;
                (((struct o14_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
                t19 = (((struct oC4_int *)(t0))->v);
                *(unsigned int *)(((int)stk + 16)) = t19;
                *(int *)((int)stk + 12) = (0x84 + t19);
                t20 = *(int *)(((int)stk + 16));
                *(int *)((int)stk + 8) = (0x88 + t20);
                t21 = *(int *)(((int)stk + 16));
                *(int *)((int)stk + 4) = (0x8C + t21);
                t22 = nlRand();
                t23 = (t22 % 0x8);
                u25 = *(float *)((0xC2A111C + (t23 << 2)));
                (((struct o8C_float *)(t21))->v) = (u25 + (1.0f + 1.0f));
                (((struct o88_float *)(t20))->v) = (u25 + (1.0f + 1.0f));
                (((struct o84_float *)(t19))->v) = (u25 + (1.0f + 1.0f));
                *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) + (int)(((float)((int)((int)(nlRand()) % (int)0x168)) * 65536.0f) / 360.0f));
                *(unsigned int *)((t0 + 0x3C)) = ((*(int *)((t0 + 0x3C))) + (int)(((float)((int)((int)(nlRand()) % (int)0x168)) * 65536.0f) / 360.0f));
                u33 = *(float *)0xC12CF88;
                t34 = math_cos_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
                u37 = (t34 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
                (((struct o4C_float *)(t0))->v) = (u37 * u33);
                t39 = math_sin_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
                u42 = (t39 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
                (((struct o54_float *)(t0))->v) = (u42 * u33);
                (((struct o50_float *)(t0))->v) = (-((math_cos_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))) * u33));
                *(unsigned int *)((t0 + 0x10)) = a4;
                *(unsigned short *)((t0 + 0x1C)) = 0x4;
                t93 = 0x4;
            } else {
                t93 = t3;
            }
        } else {
            t46 = *(signed char *)((t0 + 0x1));
            *(unsigned char *)(((int)stk + 20)) = t46;
            FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 20))), 0x2, (*(int *)((((signed char)t46 << 2) + 0xC4B40FC))));
            *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x41F;
            (((struct o14_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
            *(int *)((int)stk + 12) = 0xF0;
            *(int *)((int)stk + 8) = 0x0;
            t54 = *(signed char *)((t0 + 0x1));
            *(int *)((int)stk + 4) = (~((int)0x1 << (int)t54));
            *(int *)((int)stk + 0) = 0x100;
            FUN_0c064d24(t0, 0x1, 0x33, 0x2, 0x100, (~((int)0x1 << (int)t54)), 0x0, 0xF0);
            FUN_0c07e2f4(t0, 0x61);
            if ((*(int *)(((int)stk + 16))) == 2) {
                *(unsigned short *)(((0x12A + t0) + 0x4)) = 0x0;
                *(unsigned short *)(((0x12A + t0) + 0x2)) = 0x0;
                (((struct o12A_ushort *)(t0))->v) = 0x0;
            }
            t61 = (((struct oC4_int *)(t0))->v);
            *(unsigned int *)(((int)stk + 16)) = t61;
            *(int *)((int)stk + 12) = (0x84 + t61);
            t62 = *(int *)(((int)stk + 16));
            *(int *)((int)stk + 8) = (0x88 + t62);
            t63 = *(int *)(((int)stk + 16));
            *(int *)((int)stk + 4) = (0x8C + t63);
            t64 = nlRand();
            t65 = (t64 % 0x8);
            u67 = *(float *)((0xC2A111C + (t65 << 2)));
            (((struct o8C_float *)(t63))->v) = (u67 + 3.0f);
            (((struct o88_float *)(t62))->v) = (u67 + 3.0f);
            (((struct o84_float *)(t61))->v) = (u67 + 3.0f);
            *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) + (int)(((float)((int)((int)(nlRand()) % (int)0x168)) * 65536.0f) / 360.0f));
            *(unsigned int *)((t0 + 0x38)) = ((*(int *)((t0 + 0x38))) + (int)(((float)((int)((int)(nlRand()) % (int)0x168)) * 65536.0f) / 360.0f));
            *(unsigned int *)((t0 + 0x3C)) = ((*(int *)((t0 + 0x3C))) + (int)(((float)((int)((int)(nlRand()) % (int)0x168)) * 65536.0f) / 360.0f));
            *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) & 0xFFFF);
            *(unsigned int *)((t0 + 0x38)) = ((*(int *)((t0 + 0x38))) & 0xFFFF);
            *(unsigned int *)((t0 + 0x3C)) = ((*(int *)((t0 + 0x3C))) & 0xFFFF);
            t81 = math_cos_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
            u84 = (t81 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
            (((struct o4C_float *)(t0))->v) = (u84 * 60.0f);
            t86 = math_sin_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
            u89 = (t86 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
            (((struct o54_float *)(t0))->v) = (u89 * 60.0f);
            (((struct o50_float *)(t0))->v) = (-((math_cos_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))) * 60.0f));
            *(unsigned int *)((t0 + 0x10)) = a4;
            *(unsigned short *)((t0 + 0x1C)) = 0xA;
            t93 = 0xA;
        }
    }
    return t93;
}
