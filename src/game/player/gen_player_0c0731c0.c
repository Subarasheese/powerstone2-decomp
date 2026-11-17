/* game/player: functions 0C0731C0-0C0734FA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0cb448(int, int, int, int, int, int, int, int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0731c0(int a4);
int FUN_0c073270(int a4);
int FUN_0c07333c(int a4);
int FUN_0c07335e(int a4);

int FUN_0c0731c0(int a4)
{
    int stk[2];
    register int t0;
    register int t13;
    int t5;
    register float u6;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    if ((((((struct o22_short *)(a4))->v)) == 0) && (t5 = (((struct o118_int *)(a4))->v), u6 = (((struct o8C_float *)(t5))->v), !(11.0f > u6))) {
        FUN_0c0cb448(a4, 0x4, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
    }
    FUN_0c07da48(a4);
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t13 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t13 != 0) {
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = -2.0f;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c073270(int a4)
{
    int stk[6];
    register int t0;
    register int t15;
    int t1;
    int t7;
    register float u8;
    register float u9;

    t0 = FUN_0c037bf6(a4);
    if (((unsigned char)t0 != 0) && (t1 = *(short *)((a4 + 0x1C)), t1 == 0)) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        (((struct o5C_float *)(a4))->v) = ((((struct o37C8_float *)(a4))->v));
    }
    if ((((((struct o22_short *)(a4))->v)) == 0) && (t7 = (((struct o118_int *)(a4))->v), u8 = (((struct o0_float *)0xC07338C)->v), u9 = (((struct o8C_float *)(t7))->v), !(u8 > u9))) {
        FUN_0c0cb448(a4, 0x5, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t15 = FUN_0c07ecc6(a4, 0x0, 0x0);
        *(unsigned int *)(((int)stk + 12)) = t15;
        if (t15 != 0) {
            if ((*(int *)(((int)stk + 12))) != 1) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            *(int *)((int)stk + 8) = 0xD9;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD9, 0xFFFFFFFF, 0x3, 0xD9);
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = ((((struct o14_float *)0xC07338C)->v));
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c07333c(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c07335e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c07333c(a4);
        }
        return FUN_0c073270(a4);
    }
    return FUN_0c0731c0(a4);
}
