/* Straight-line functions with calls and guards (batch gen_sr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c1371a0(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int FUN_0c137258(int a4, int a5, int a6, int a7);

int FUN_0c137258(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t4;
    register int t12;
    register float t17;
    register float t21;
    register int t25;
    register int t38;
    register int t73;
    int t50;
    register int R1004;
    register int R1008;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);

    if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 26) {
        t73 = (FUN_0c03f346(a4, a5, a6, a7));
    } else {
        t4 = *(signed char *)((a4 + 0x14));
        if (t4 == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        if ((t4 == 0) || (t4 == 1)) {
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o4_int *)0xC2A1830)->v)))) == 0) {
                t12 = (((struct o8_int *)0xC2A1830)->v);
                R1008 = ((int)((int)(((int)((int)(nlRand()) % (int)t12)) * 0x168) / (int)t12));
                t17 = math_sin_angle16(((int)(((((float)(R1008) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                R1004 = 0xC2A183C;
                *(float *)(((int)stk + 16)) = (t17 * ((((struct oC_float *)0xC2A1830)->v)));
                *(float *)(((int)stk + 20)) = 0.0f;
                t21 = math_cos_angle16(((int)(((((float)(R1008) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                *(float *)(((int)stk + 24)) = (t21 * (*(float *)(((R1004) + 0x0))));
                t25 = FUN_0c1371a0((*(signed char *)((a4 + 0x1))), (((int)stk + 0) + 0x10), a4);
                if (t25 != 0) {
                    *(unsigned int *)((a4 + 0x10)) = t25;
                }
            }
            if ((int)(*(signed char *)((0xC5324AD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) <= (int)0x2) {
                t38 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t38 + 0x1);
                t73 = (short)(t38 + 0x1);
                if ((int)(short)(t38 + 0x1) > (int)((((struct o0_int *)0xC2A1830)->v))) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t73 = 0x14;
                }
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t73 = 0x14;
            }
        } else {
            if (t4 == 2) {
                if (((*(int *)((a4 + 0x10))) != 0) && (t50 = *(int *)((a4 + 0x10)), t73 = *(signed char *)((0x14 + t50)), t73 != 2)) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t73 = 0x14;
                }
            } else {
                t73 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        }
    }
    return t73;
}
