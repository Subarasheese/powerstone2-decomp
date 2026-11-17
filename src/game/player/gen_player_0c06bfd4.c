/* game/player: functions 0C06BFD4-0C06C4DC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o430_short { char p[0x430]; short v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059df2(int, int);
int FUN_0c059fae(int, int, int);
int FUN_0c07da48(int);
int FUN_0c07eaf4(int);
int FUN_0c07ebb0(int);
int FUN_0c07ebd0(int);
int FUN_0c080364(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c14f8aa(int, int, int);
int FUN_0c1512a0(int, int);
int FUN_0c15f394(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
extern int FUN_0c187798();
int FUN_0c06bfd4(int a4);
int FUN_0c06c096(int a4);
int FUN_0c06c134(int a4, int a5, int a6);
int FUN_0c06c394(int a4);
int FUN_0c06c3f8(int a4);
int FUN_0c06c4d6(int a4);

int FUN_0c06bfd4(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R14;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = R14;
    *(int *)((int)stk + 4) = v0_1;
    v0_2 = (*(signed char *)((v0_0 + 0x3721))) != 0;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    R14 = (v0_0);
    if (v0_2) goto L_C06BFF6;
    v0_0 = (*(signed char *)((R14 + 0x371C))) == 0;
    if (v0_0) goto L_C06BFF6;
    v0_1 = *(signed char *)((R14 + 0x2));
    v0_0 = (v0_1);
    if ((v0_1 == 8)) goto L_C06C090;
    v0_1 = *(signed char *)((R14 + 0x2));
    v0_0 = (v0_1);
    if ((v0_1 == 11)) goto L_C06C090;
    L_C06BFF6:;
    v0_0 = ((((struct o22_short *)(R14))->v)) != 0;
    if (v0_0) goto L_C06C042;
    v0_0 = (*(signed char *)((R14 + 0x135))) != 2;
    if (v0_0) goto L_C06C02E;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((R14 + 0x1))) * (short)0x3938) + 0xC532598))) + 0x28), (0x37C4 + R14));
    (((struct o37C8_float *)(R14))->v) = ((((struct o2C_float *)(R14))->v));
    FUN_0c1512a0(0x0, (0x37C4 + R14));
    L_C06C02E:;
    FUN_0c059fae((*(signed char *)((R14 + 0x1))), (*(signed char *)((R14 + 0x135))), 0x0);
    (((struct o22_ushort *)(R14))->v) = 0x24;
    L_C06C042:;
    v0_0 = ((((struct o22_short *)(R14))->v)) != 18;
    if (v0_0) goto L_C06C088;
    v0_0 = (*(signed char *)((R14 + 0x135))) != 2;
    if (v0_0) goto L_C06C07A;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((R14 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), (0x37C4 + R14));
    (((struct o37C8_float *)(R14))->v) = ((((struct o2C_float *)(R14))->v));
    FUN_0c1512a0(0x0, (0x37C4 + R14));
    L_C06C07A:;
    FUN_0c059fae((*(signed char *)((R14 + 0x1))), (*(signed char *)((R14 + 0x135))), 0x1);
    L_C06C088:;
    (((struct o22_ushort *)(R14))->v) = (((((struct o22_short *)(R14))->v)) - 1);
    v0_0 = (0x22);
    L_C06C090:;
    *(volatile int *)((int)stk + 0);
    return v0_0;
}

int FUN_0c06c096(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct o22_short *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = 0x8C;
                if (12.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    t0 = 0x22;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = 0x8C;
            if (!(30.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x5C);
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                t1 = 0x22;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t0 = 0x8C;
        if (12.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
        } else {
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x5C);
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            t0 = 0x22;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c06c134(int a4, int a5, int a6)
{
    int stk[3];
    register int t4;
    register float u8;
    register float u12;
    register int t15;
    register float u19;
    register float u23;
    register int t29;
    register int t63;
    register int t33;
    register int t40;
    register int t1;
    register int t2;
    int t3;

    if (((*(signed char *)((a4 + 0x2))) == 8) && ((t1 = *(signed char *)((a4 + 0x371C)), t1 != 0) && ((t2 = *(signed char *)((a4 + 0x3721)), t2 == 0) && (t3 = *(int *)0xC542260, (t3 & 3) == 0)))) {
        t4 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        u8 = (*(float *)(((int)stk + 0)));
        u8 = u8 + 40.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
        *(float *)(((int)stk + 0)) = u8;
        u12 = (*(float *)(((int)stk + 8)));
        u12 = u12 + 40.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
        *(float *)(((int)stk + 8)) = u12;
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2);
        t15 = ((int (*)(void))(FUN_0c187798))();
        u19 = (*(float *)(((int)stk + 0)));
        u19 = u19 + 40.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) - 16384)));
        *(float *)(((int)stk + 0)) = u19;
        u23 = (*(float *)(((int)stk + 8)));
        u23 = u23 + 40.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) - 16384)));
        *(float *)(((int)stk + 8)) = u23;
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2);
    }
    t29 = *(signed char *)((a4 + 0x3715));
    t63 = t29;
    if (t29 == 1) {
        t33 = *(signed char *)((a4 + 0x2));
        t63 = t33;
        if (t33 == 11) {
            t63 = 0x371C;
            if ((*(signed char *)((a4 + 0x371C))) != 0) {
                t63 = 0x3721;
                if ((*(signed char *)((a4 + 0x3721))) == 0) {
                    t40 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x28);
                    t63 = t40;
                    if (t40 == 0) {
                        FUN_0c15f394(a4, 0xF);
                        t63 = (FUN_0c15f394(a4, 0x12));
                    }
                }
            }
        }
    }
    return t63;
}

int FUN_0c06c394(int a4)
{
    register int t0;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    FUN_0c07ebb0(a4);
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 == 0) {
        if ((unsigned short)((((struct o3818_short *)(a4))->v)) == 0x38A) {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                return FUN_0c085d0c(a4);
            }
            return (short)(t0 - 1);
        }
        return 0x3818;
    }
    return FUN_0c085d0c(a4);
}

int FUN_0c06c3f8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    FUN_0c07da48(a4);
    FUN_0c037bf6(a4);
    if ((*(short *)((a4 + 0x1C))) != 0) {
        t0 = *(int *)((a4 + 0x38));
        t1 = (((struct o3850_short *)(a4))->v);
        t2 = *(int *)((a4 + 0x38));
        t3 = (unsigned short)(t1 - t0);
        if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
            t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t2 + ((int)((int)t3 / (int)(*(short *)((a4 + 0x1C))))));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    } else {
        *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
    }
    t0 = FUN_0c07ebd0(a4);
    if (t0 != 0) {
        (((struct o3850_uint *)(a4))->v) = (unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
        FUN_0c080364(a4, ((((struct o3850_int *)(a4))->v)));
        if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x3C00) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return FUN_0c07ebb0(a4);
    }
    *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
    return FUN_0c085cac(a4, 0x0, 0x0);
}

int FUN_0c06c4d6(int a4)
{
    return FUN_0c037bf6(a4);
}
