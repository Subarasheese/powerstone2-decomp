/* Straight-line functions with calls and guards (batch gen_mm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3818_short { char p[0x3818]; short v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c07e328(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
extern int FUN_0c0c2ab6();
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c86d8(int a4, int a5, int a6, int a7);

int FUN_0c0c86d8(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;

    t5 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)((a4 + 0x41F))) == 0) {
        t6 = *(signed char *)((a4 + 0x15));
        if (t6 == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        if ((t6 == 0) || (t6 == 1)) {
            if (!(7.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t5 * (short)0x3938) + 0xC532498)))->v))))->v))) && (t0 = *(short *)((a4 + 0x1C)), t0 == 0)) {
                t0 = ((int (*)(int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))));
                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE))));
                FUN_0c0c213c(a4);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            }
            if ((*(signed char *)(((((short)t5 * (short)0x3938) + 0xC532498) + 0x17))) == 0) {
            } else {
                t0 = ((int (*)(int, int))(FUN_0c0c2ab6))(a4, 0x41);
                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF))));
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        } else {
            if (t6 != 2) {
            } else {
                if ((unsigned short)((((struct o3818_short *)((((short)t5 * (short)0x3938) + 0xC532498)))->v)) == 0x338) {
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                }
                if (12.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t5 * (short)0x3938) + 0xC532498)))->v))))->v))) {
                } else {
                    if ((*(short *)((a4 + 0x1C))) == 0) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    }
                }
            }
        }
    } else {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        if ((t0 == 0) || (t0 == 1)) {
            if (!(17.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t5 * (short)0x3938) + 0xC532498)))->v))))->v))) && (t1 = *(short *)((a4 + 0x1C)), t1 == 0)) {
                t1 = ((int (*)(int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))));
                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE))));
                FUN_0c0c213c(a4);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            }
            u1 = (((struct o8C_float *)(((((struct o118_int *)((((short)t5 * (short)0x3938) + 0xC532498)))->v))))->v);
            if ((22.0f > u1) && (t2 = *(signed char *)(((((short)t5 * (short)0x3938) + 0xC532498) + 0x17)), t2 == 0)) {
            } else {
                t1 = ((int (*)(int, int))(FUN_0c0c2ab6))(a4, 0x41);
                FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF))));
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        } else {
            if (t0 == 2) {
                if ((unsigned short)((((struct o3818_short *)((((short)t5 * (short)0x3938) + 0xC532498)))->v)) == 0x33A) {
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                }
                if (((unsigned short)((((struct o3818_short *)((((short)t5 * (short)0x3938) + 0xC532498)))->v)) == 0x33A) && ((t3 = (((struct o118_int *)((((short)t5 * (short)0x3938) + 0xC532498)))->v), u0 = (((struct o8C_float *)(t3))->v), !(7.0f > u0)) && (t4 = *(short *)((a4 + 0x1C)), t4 == 0))) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                }
            }
        }
    }
    if ((*(signed char *)(((((short)t5 * (short)0x3938) + 0xC532498) + 0x3715))) != 8) {
        return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
    }
    t0 = FUN_0c0c283a(a4);
    if (t0 != 0) {
        return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
    }
    (((struct o376C_uint *)((((short)t5 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}
