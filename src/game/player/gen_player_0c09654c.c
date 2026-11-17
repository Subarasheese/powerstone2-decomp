/* game/player: functions 0C09654C-0C0968BA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o5C_float { char p[0x5C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c07053a(int, int, float);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085204(int, float);
int FUN_0c085d0c(int);
int FUN_0c14f824(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c09654c(int a4);
int FUN_0c096650(int a4);
int FUN_0c0966f6(int a4);
int FUN_0c096718(int a4);

int FUN_0c09654c(int a4)
{
    register int t0;
    register int t1;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)(unsigned short)((FUN_0c07d774(a4)) - (*(int *)((a4 + 0x38)))) / (int)(*(short *)((a4 + 0x1C))))));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 50.0f);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x1E, 30.0f);
        (((struct o5C_float *)(a4))->v) = -1.5f;
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c085204(a4, 0.0f);
}

int FUN_0c096650(int a4)
{
    int stk[7];
    register int t17;
    register int t22;
    register int t18;
    register int t19;
    int t1;

    if (((*(signed char *)((a4 + 0x2))) != 2) && (t1 = *(int *)0xC542260, (t1 & 3) == 0)) {
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), (((int)stk + 12) + 0x4));
        *(float *)(((int)stk + 20)) = ((((struct o168_float *)(a4))->v));
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (((int)stk + 12) + 0x4));
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t17 = FUN_0c037bf6(a4);
    t22 = (unsigned char)t17;
    if ((unsigned char)t17 != 0) {
        *(int *)((int)stk + 8) = 0x8;
        *(int *)((int)stk + 4) = 0x2;
        t18 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t18;
        t19 = t18;
        *(int *)((int)stk + 0) = t19;
        FUN_0c07e79c(a4, t18, 0x2, 0x8, t19, 0x2, 0x8);
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t22 = 0x16;
    }
    return t22;
}

int FUN_0c0966f6(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c096718(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0966f6(a4);
        }
        return FUN_0c096650(a4);
    }
    return FUN_0c09654c(a4);
}
