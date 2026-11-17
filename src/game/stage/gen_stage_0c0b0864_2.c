/* game/stage: functions 0C0B0864-0C0B1020, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o430_short { char p[0x430]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059f20(int, int);
int FUN_0c070320(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ec9a(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0b0864(int, int);
int FUN_0c0b08dc(int);
int FUN_0c0b0950(int);
int FUN_0c142868(int);
int math_vec3_accumulate(int, int);
int FUN_0c0b0c18(int a4);

int FUN_0c0b0c18(int a4)
{
    int t0;
    register int t1;

    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    (((struct o3749_uchar *)(a4))->v) = 0x0;
    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0xA;
        FUN_0c07e2f4(a4, 0x64);
    }
    if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
        if (100.0f > (((((struct o2C_float *)(a4))->v)) - ((((struct o168_float *)(a4))->v)))) {
            FUN_0c142868(a4);
        }
    }
    t0 = *(signed char *)((a4 + 0x1B));
    if (t0 != 16) {
        if (t0 != 17) {
            if (t0 != 18) {
                if ((int)(*(int *)((a4 + 0x34))) < 0) {
                    t0 = *(int *)((a4 + 0x34));
                    *(unsigned int *)((a4 + 0x34)) = (t0 + 0x222);
                    if ((int)(t0 + 0x222) > 0) {
                        *(unsigned int *)((a4 + 0x34)) = 0x0;
                    }
                }
                t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
                if ((t0 != 0) && (t0 == 2)) {
                    FUN_0c07ec9a(a4);
                    (((struct o37A4_float *)(a4))->v) = 0.0f;
                }
                if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x100) != 0) {
                    (((struct o1B_uchar *)(a4))->v) = 0x10;
                }
                FUN_0c0b0864(a4, 0x4FA);
                FUN_0c0b08dc(a4);
                FUN_0c0b0950(a4);
                FUN_0c070320(a4);
                t0 = *(short *)((a4 + 0x1C));
                t1 = t0;
                if ((int)t0 <= 0) {
                    t0 = *(signed char *)((a4 + 0x1));
                    FUN_0c07e79c(a4, t0, 0x1, 0x1F, (t0), 0x1, 0x1F);
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    (((struct o18_uchar *)(a4))->v) = 0x2;
                    *(unsigned int *)((a4 + 0x34)) = 0x0;
                    (((struct o54_float *)(a4))->v) = 0.0f;
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    (((struct o4C_float *)(a4))->v) = 0.0f;
                    t1 = 0x4C;
                }
                return t1;
            }
            FUN_0c0b0864(a4, 0x16C);
            if ((int)(*(int *)((a4 + 0x34))) < 0) {
                t0 = *(int *)((a4 + 0x34));
                *(unsigned int *)((a4 + 0x34)) = (t0 + 0x222);
                if ((int)(t0 + 0x222) > 0) {
                    *(unsigned int *)((a4 + 0x34)) = 0x0;
                }
            }
            if (!(0.0f > ((((struct o50_float *)(a4))->v)))) {
                return 0x50;
            }
            t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t0 != 0) {
                if ((((((struct o5C_float *)(a4))->v)) * 15.0f) > ((((struct o50_float *)(a4))->v))) {
                    (((struct o50_float *)(a4))->v) = (-(((((struct o5C_float *)(a4))->v)) * 5.0f));
                } else {
                    (((struct o50_float *)(a4))->v) = 0.0f;
                }
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                return FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
            }
            return t0;
        }
    } else {
        (((struct o50_float *)(a4))->v) = 38.6999969f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o1B_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1B))) + 0x1);
    }
    FUN_0c0b0864(a4, 0x5B);
    if ((int)(*(int *)((a4 + 0x34))) >= (int)0xFFFFE000) {
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 0xB6);
    }
    t0 = 0x50;
    if (!(0.0f > ((((struct o50_float *)(a4))->v)))) {
    } else {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        t0 = t1;
        if (t1 == 0) {
        } else {
            (((struct o5C_float *)(a4))->v) = -3.0f;
            (((struct o50_float *)(a4))->v) = (-(-3.0f * 5.0f));
            FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
            (((struct o1B_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1B))) + 0x1);
            t0 = 0x1B;
        }
    }
    return t0;
}
