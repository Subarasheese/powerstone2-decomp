/* game/player: functions 0C0BA410-0C0BA790, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o125_uchar { char p[0x125]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o382C_ushort { char p[0x382C]; unsigned short v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07daea(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c12380c(int, int);
int FUN_0c14f824(int, int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0ba410(int a4);
int FUN_0c0ba486(int a4);
int FUN_0c0ba628(int a4);
int FUN_0c0ba76e(int a4);

int FUN_0c0ba410(int a4)
{
    int stk[3];
    register int t1;
    register int t18;
    register int t3;
    register float u4;
    register float u9;
    register float u14;

    t1 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0xA);
    t18 = t1;
    if (t1 == 0) {
        t3 = (int)((int)(nlRand()) % (int)0xC8);
        u4 = *(float *)0xC0BA54C;
        u9 = ((((struct o28_float *)(a4))->v));
        u9 = u9 + (((float)t3 + u4)) * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        *(float *)(((int)stk + 0)) = u9;
        u14 = ((((struct o30_float *)(a4))->v));
        u14 = u14 + (((float)t3 + u4)) * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        *(float *)(((int)stk + 8)) = u14;
        *(float *)(((int)stk + 4)) = ((((struct o168_float *)(a4))->v));
        t18 = (FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0)));
    }
    return t18;
}

int FUN_0c0ba486(int a4)
{
    int stk[6];
    register int t4;
    register int t9;
    register float u22;
    register int t43;
    register int t94;

    { struct mvb24 { char b[24]; }; *(struct mvb24 *)(((int)stk + 0)) = *(struct mvb24 *)(0xC1C6E58); }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((((struct o3850_short *)(a4))->v)));
    FUN_0c0ba410(a4);
    t4 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t4 + 0x1);
    if ((int)(short)(t4 + 0x1) >= (int)0xA) {
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) + 0x38E);
        if ((int)((((struct o20_short *)(a4))->v)) <= (int)0x2) {
            FUN_0c07e2f4(a4, 0x62);
        } else {
            t9 = 0x0;
            for (;;) {
                if ((int)(*(short *)((((int)stk + 0) + (((short)t9 << 1) << 1)))) <= (int)(*(short *)((a4 + 0x1C)))) {
                    t9 = (t9 + 0x1);
                    if ((int)(short)t9 >= (int)0x5) {
                        break;
                    }
                    continue;
                }
                break;
            }
            if ((int)((((struct o20_short *)(a4))->v)) <= (int)(*(short *)((((((short)t9 << 1) << 1) + ((int)stk + 0)) + 0x2)))) {
                FUN_0c07e2f4(a4, 0x62);
            } else {
                FUN_0c07e2f4(a4, 0x63);
                (((struct o5C_float *)(a4))->v) = ((((struct o0_float *)0xC0BA694)->v));
                u22 = (((struct o4_float *)0xC0BA694)->v);
                (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * u22));
                (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * u22));
                *(unsigned short *)((a4 + 0x1C)) = 0x3;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
    }
    t43 = (((struct o22_short *)(a4))->v);
    if (t43 != 0) {
        if (t43 != 1) {
            t94 = t43;
            if (t43 != 2) {
            } else {
                t94 = 0x2C;
                if (!((((((struct o37C8_float *)(a4))->v)) + ((((struct o18_float *)0xC0BA694)->v))) > ((((struct o2C_float *)(a4))->v)))) {
                    FUN_0c12380c(a4, 0x2);
                    (((struct o125_uchar *)(a4))->v) = 0x36;
                    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                    t94 = 0x22;
                }
            }
        } else {
            t94 = 0x2C;
            if (!((((((struct o37C8_float *)(a4))->v)) + ((((struct o14_float *)0xC0BA694)->v))) > ((((struct o2C_float *)(a4))->v)))) {
                FUN_0c12380c(a4, 0x1);
                (((struct o125_uchar *)(a4))->v) = 0x35;
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                t94 = 0x22;
            }
        }
    } else {
        t94 = 0x2C;
        if (!(((((struct o37C8_float *)(a4))->v)) > ((((struct o2C_float *)(a4))->v)))) {
            FUN_0c12380c(a4, 0x0);
            (((struct o125_uchar *)(a4))->v) = 0x34;
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            t94 = 0x22;
        }
    }
    return t94;
}


int FUN_0c0ba76e(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}
