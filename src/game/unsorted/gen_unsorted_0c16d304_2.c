/* game/unsorted: functions 0C16D304-0C16DD0E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c16d304(int);
int FUN_0c16d330(int);
int FUN_0c16d3d6(int);
int FUN_0c16d404(int, int, float);
int FUN_0c16d468(int, int);
int FUN_0c16d4ec(int);
float FUN_0c16d538(int, float);
int FUN_0c16d5b4(int);
int FUN_0c16d72c(int);
int FUN_0c16d832(int);
int FUN_0c16da30(int);
int FUN_0c16dabc(int);
int FUN_0c16db1c(int);
int FUN_0c16db88(int);
int FUN_0c16dba8(int);
int math_vec3_accumulate(int, int);
int FUN_0c16d606(int a4);
int FUN_0c16dbd4(int a4, int a5, int a6, int a7);

int FUN_0c16d606(int a4)
{
    int stk[4];
    register int t0;
    register float t13;
    register float t50;
    register int t69;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o15_uchar *)(a4))->v) = 0x1;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t69 = 0x16;
        } else {
            FUN_0c037bf6(a4);
            FUN_0c038362(a4);
            FUN_0c16d330(a4);
            FUN_0c16d3d6(a4);
            FUN_0c16d304(a4);
            FUN_0c16d468(a4, (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5324C0));
            FUN_0c16d404(a4, ((int)stk + 4), 10.0f);
            (((struct o4C_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
            (((struct o54_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t13 = FUN_0c16d538(a4, 60.0f);
            if (t13 != -1.0f) {
                if (20.0f > (t13 - ((((struct o2C_float *)(a4))->v)))) {
                    (((struct o2C_float *)(a4))->v) = t13;
                } else {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    (((struct o50_float *)(a4))->v) = (t13 - ((((struct o2C_float *)(a4))->v)));
                    FUN_0c16d404(a4, ((int)stk + 4), (1.0f + 1.0f));
                    (((struct o4C_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
                    (((struct o54_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
                }
            }
            t69 = (FUN_0c16d4ec(a4));
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        *(int *)((int)stk + 0) = 0x5;
        FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x7, 0x5);
        FUN_0c037bf6(a4);
        FUN_0c038362(a4);
        FUN_0c16d330(a4);
        FUN_0c16d3d6(a4);
        FUN_0c16d304(a4);
        FUN_0c16d468(a4, (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5324C0));
        FUN_0c16d404(a4, ((int)stk + 4), 10.0f);
        (((struct o4C_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
        (((struct o54_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        t50 = FUN_0c16d538(a4, 60.0f);
        if (t50 != -1.0f) {
            if (20.0f > (t50 - ((((struct o2C_float *)(a4))->v)))) {
                (((struct o2C_float *)(a4))->v) = t50;
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x3;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
                (((struct o50_float *)(a4))->v) = (t50 - ((((struct o2C_float *)(a4))->v)));
                FUN_0c16d404(a4, ((int)stk + 4), (1.0f + 1.0f));
                (((struct o4C_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
                (((struct o54_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
            }
        }
        t69 = (FUN_0c16d4ec(a4));
    }
    return t69;
}

int FUN_0c16dbd4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0500000007f);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.100000001f);
            if (!(((((struct o48_float *)(a4))->v)) > 0.0f)) {
                (((struct o48_float *)(a4))->v) = 0.0f;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            (((struct o40_float *)(a4))->v) = ((((struct o48_float *)(a4))->v));
            return 0x40;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(volatile signed char *)((a4 + 0x2));
        *(unsigned short *)((a4 + 0x1C)) = 0x438;
    }
    if ((*(short *)(((0x41C + a4) + 0x2))) != 0) {
        *(unsigned short *)(((0x41C + a4) + 0x2)) = ((*(short *)(((0x41C + a4) + 0x2))) - 1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 1:
        FUN_0c16d5b4(a4);
        break;
    case 2:
        FUN_0c16d606(a4);
        break;
    case 3:
        FUN_0c16d72c(a4);
        break;
    case 4:
        FUN_0c16d832(a4);
        break;
    case 5:
        FUN_0c16da30(a4);
        break;
    case 6:
        FUN_0c16dabc(a4);
        break;
    default:
        FUN_0c16db1c(a4);
        break;
    }
    FUN_0c064d24(a4, 0x3, 0x3B, 0x0, 0x40, ((*(short *)(((0x0 + (0x12A + a4)) + 0x0)))), 0x0, 0xF0);
    t0 = FUN_0c16db88(a4);
    if (t0 != 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t0 = 0x14;
    } else {
        t1 = FUN_0c16dba8(a4);
        t0 = t1;
        if (t1 != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
    }
    return t0;
}
