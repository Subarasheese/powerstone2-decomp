/* game/player: functions 0C06EA60-0C06EE3E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o372F_uchar { char p[0x372F]; unsigned char v; };
struct o378C_float { char p[0x378C]; float v; };
struct o42C_short { char p[0x42C]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c037bf6(int);
int FUN_0c042ff8(void);
int FUN_0c064e70(int, int);
int FUN_0c064f80(int);
int FUN_0c06ec2a(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c08515a(int, int);
int FUN_0c085204(int, float);
int FUN_0c085256(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0c28f6(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c06ea60(int a4);
int FUN_0c06eac2(int a4);
int FUN_0c06eafc(int a4, float f4);
int FUN_0c06ec82(int a4, int a5, int a6, float f4);
int FUN_0c06ed36(int a4);

int FUN_0c06ea60(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        FUN_0c085256(a4, 0x1);
    }
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3000) != 0) {
        (((struct o372F_uchar *)(a4))->v) = 0x63;
        (((struct o16_uchar *)(a4))->v) = 0x2;
    }
    t0 = 0xFFFFFC72;
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x800) != 0) {
    } else {
        t0 = 0x0;
        if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x400) != 0) {
            t0 = 0x38E;
        }
    }
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + t0);
    return 0x42C;
}

int FUN_0c06eac2(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t2 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        FUN_0c085256(a4, 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t2 = 0x16;
    }
    return t2;
}

int FUN_0c06eafc(int a4, float f4)
{
    int stk[4];
    register int t19;
    register int t21;
    register int t22;
    register int t27;
    register int t60;
    register int t62;
    register int t89;

    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x2000) != 0) {
        if ((*(signed char *)((a4 + 0x372F))) != 0) {
            if ((*(signed char *)((a4 + 0x3715))) == 35) {
                FUN_0c085256(a4, 0x2);
            }
            (((struct o372F_uchar *)(a4))->v) = 0x0;
        }
        (((struct o50_float *)(a4))->v) = 5.0f;
        t19 = FUN_0c08515a(a4, 0x3);
        *(unsigned int *)(((int)stk + 12)) = t19;
        if (t19 != 0) {
            t21 = FUN_0c0c28f6((*(int *)((t19 + 0x4))), (((int)stk + 0) + 0x8));
            if (t21 != 0) {
                t22 = FUN_0c0c28f6(a4, (((int)stk + 0) + 0x4));
                if (t22 != 0) {
                    t27 = 0x50;
                    if ((*(float *)(((int)stk + 8))) > (*(float *)(((int)stk + 4)))) {
                        (((struct o50_float *)(a4))->v) = 5.0f;
                        t27 = 0x17C;
                    }
                    *(float *)((a4 + t27)) = 0.0f;
                }
            }
        }
        t89 = 0x0;
    } else {
        t89 = 0x0;
        if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x1000) != 0) {
            if ((*(signed char *)((a4 + 0x372F))) != 1) {
                if ((*(signed char *)((a4 + 0x3715))) == 35) {
                    FUN_0c085256(a4, 0x2);
                }
                (((struct o372F_uchar *)(a4))->v) = 0x1;
            }
            t60 = FUN_0c08515a(a4, 0x3);
            *(unsigned int *)(((int)stk + 12)) = t60;
            t89 = 0x0;
            if (t60 != 0) {
                t62 = FUN_0c064e70((*(int *)((t60 + 0x4))), ((int)stk + 0));
                t89 = 0x0;
                if (t62 != 0) {
                    if ((((((struct o2C_float *)(a4))->v)) + -11.71f) > (*(float *)(((int)stk + 0)))) {
                        (((struct o50_float *)(a4))->v) = -11.71f;
                        t89 = 0x0;
                    } else {
                        (((struct o2C_float *)(a4))->v) = (((((struct o168_float *)(a4))->v)) + -1.0f);
                        (((struct o17C_float *)(a4))->v) = 1.0f;
                        (((struct o50_float *)(a4))->v) = 0.0f;
                        t89 = 0x1;
                    }
                }
            }
        }
    }
    return t89;
}

int FUN_0c06ec82(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x16));
    switch (t0) {
    case 0:
        FUN_0c06ea60(a4);
        break;
    case 1:
        FUN_0c06eac2(a4);
        break;
    case 2:
        FUN_0c06ec2a(a4);
        break;
    }
    t0 = *(signed char *)((a4 + 0x3715));
    if (t0 == 35) {
        if ((*(signed char *)((a4 + 0x2))) != 8) {
            t1 = FUN_0c085204(a4, (((((struct o378C_float *)(a4))->v)) * 40.0f));
        } else {
            t1 = FUN_0c085204(a4, 30.0f);
        }
        if (t1 == 0) {
            t1 = FUN_0c042ff8();
            if (t1 != 0) {
                return FUN_0c085cac(a4, 0x5, 0x7);
            }
            return t1;
        }
        return FUN_0c085cac(a4, 0x5, 0x7);
    }
    return t0;
}

