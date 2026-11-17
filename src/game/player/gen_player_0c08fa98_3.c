/* game/player: functions 0C08FA98-0C090DF4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
extern int FUN_0c037bf6();
int FUN_0c059e60(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c090158(int a4);

int FUN_0c090158(int a4)
{
    int stk[8];
    register int t6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u13;
    register float t14;
    register float u15;
    register int t17;
    register int t24;
    register int t25;
    register int t26;
    register int t28;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t39;
    register int t40;
    register int t41;
    register int t45;

    if ((*(short *)((a4 + 0x1C))) == 1) {
        FUN_0c059e60(a4, 0x23);
    }
    FUN_0c0819c2(a4, 0xAAA);
    t6 = *(int *)((a4 + 0x10));
    u7 = (((struct o28_float *)(a4))->v);
    u8 = (((struct o28_float *)(t6))->v);
    u9 = (((struct o30_float *)(a4))->v);
    u10 = (((struct o30_float *)(t6))->v);
    u13 = ((u9 - u10) * (u9 - u10));
    u13 = u13 + ((u7 - u8)) * ((u7 - u8));
    t14 = math_signed_sqrt(u13);
    u15 = t14;
    if (t14 > 50.0f) {
        u15 = 50.0f;
    }
    t17 = *(short *)((a4 + 0x1C));
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (u15 / (((float)t17 / (1.0f + 1.0f)) + 1.0f)));
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (u15 / (((float)t17 / (1.0f + 1.0f)) + 1.0f)));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t24 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t24 + 0x1);
    if ((int)(short)(t24 + 0x1) >= (int)0x24) {
        *(int *)((int)stk + 24) = 0x1C;
        *(int *)((int)stk + 20) = 0x1;
        t25 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 28)) = t25;
        t26 = t25;
        *(int *)((int)stk + 16) = t26;
        FUN_0c07e79c(a4, t25, 0x1, 0x1C, t26, 0x1, 0x1C);
        *(int *)((int)stk + 12) = 0xC1C5F8C;
        *(int *)((int)stk + 8) = 0xC1C5F80;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x11;
        t28 = *(signed char *)((a4 + 0x1));
        (((struct o1C_uchar *)(((int)stk + 0)))->v) = t28;
        FUN_0c15a260((*(signed char *)(((int)stk + 28))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t28 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x11, 0x0, 0xC1C5F80, 0xC1C5F8C);
        t34 = *(int *)(((0x118 + a4) + 0x4));
        t35 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t34))->v) = 1.0f;
        (((struct o9C_float *)(t34))->v) = 1.0f;
        (((struct oA0_float *)(t35))->v) = 1.0f;
        (((struct o9C_float *)(t35))->v) = 1.0f;
        t36 = *(int *)(((0x118 + a4) + 0x4));
        t37 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t36))->v) = 1.0f;
        (((struct o98_float *)(t37))->v) = 1.0f;
        (((struct o94_float *)(t36))->v) = 1.0f;
        (((struct o94_float *)(t37))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x13;
        (((struct o5C_float *)(a4))->v) = -3.0f;
        (((struct o382E_ushort *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t45 = 0x17;
    } else {
        t39 = FUN_0c037bf6(a4);
        t45 = (unsigned char)t39;
        if ((unsigned char)t39 != 0) {
            *(int *)((int)stk + 24) = 0x1B;
            *(int *)((int)stk + 20) = 0x1;
            t40 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 28)) = t40;
            t41 = t40;
            *(int *)((int)stk + 16) = t41;
            t45 = (FUN_0c07e79c(a4, t40, 0x1, 0x1B, t41, 0x1, 0x1B));
        }
    }
    return t45;
}
