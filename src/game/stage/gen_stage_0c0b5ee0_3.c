/* game/stage: functions 0C0B5EE0-0C0B7322, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07bdd0(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0b507a(int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c0b711a(int a4, int a5, int a6);

int FUN_0c0b711a(int a4, int a5, int a6)
{
    int stk[12];
    register int t2;
    register int t5;
    register int t12;
    register int t13;
    register int t24;
    register int t35;
    register int t64;
    register int t92;
    register int t95;
    register int t97;
    register int t118;
    register int t121;
    register int t123;
    int t8;
    register int t140;

    *(volatile signed char *)((a4 + 0x3729));
    t2 = *(signed char *)((a4 + 0x3728));
    t5 = 0x0;
    if (t2 != 0) {
        t5 = 0x1;
        if (t2 != 1) {
            t5 = 0x0;
        }
    }
    *(unsigned int *)(((int)stk + 20)) = t5;
    if (((int)(*(signed char *)((a4 + 0x16))) <= (int)0x4) && (t8 = (((struct o3770_int *)(a4))->v), t8 == 0)) {
        t140 = (FUN_0c0b507a(a4, 0x0, 0x0));
    } else {
        t12 = *(signed char *)((a4 + 0x16));
        if (t12 != 0) {
            if (t12 != 1) {
                if (t12 != 2) {
                    if (t12 != 3) {
                        if (t12 == 4) {
                            t13 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, t5, a6);
                            if (!(70.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
                                FUN_0c07363a(a4, 0x4);
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            }
                            (((struct o3770_uint *)(a4))->v) = 0x0;
                            t140 = 0x3770;
                        } else {
                            t24 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, t5, a6);
                            if ((unsigned char)t24 != 0) {
                                t140 = (FUN_0c0b507a(a4, 0x0, 0x0));
                            } else {
                                (((struct o3770_uint *)(a4))->v) = 0x0;
                                t140 = 0x3770;
                            }
                        }
                    } else {
                        t35 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, t5, a6);
                        if (!(67.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
                            FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x7);
                            FUN_0c073566(a4, 0x4);
                            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (((int)stk + 12) + 0xC));
                            FUN_0c14f238((((int)stk + 12) + 0xC), (a4 + 0x34), (*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x2);
                            FUN_0c07bdd0(((((struct o3770_int *)(a4))->v)), 0x17);
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        }
                        (((struct o3770_uint *)(a4))->v) = 0x0;
                        t140 = 0x3770;
                    }
                } else {
                    t64 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, t5, a6);
                    if (45.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
                    } else {
                        FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x7);
                        FUN_0c073566(a4, 0x3);
                        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (((int)stk + 12) + 0xC));
                        FUN_0c14f238((((int)stk + 12) + 0xC), (a4 + 0x34), (*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x2);
                        FUN_0c07bdd0(((((struct o3770_int *)(a4))->v)), 0x17);
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    }
                    (((struct o3770_uint *)(a4))->v) = 0x0;
                    t140 = 0x3770;
                }
            } else {
                t92 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, t5, a6);
                if (54.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
                } else {
                    t95 = *(int *)(((int)stk + 20));
                    *(unsigned int *)(((int)stk + 12)) = (t95 + 0x2);
                    *(int *)((int)stk + 8) = (t95 + 0x2);
                    *(int *)((int)stk + 4) = 0x5;
                    t97 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 16)) = t97;
                    *(int *)((int)stk + 0) = t97;
                    FUN_0c07e79c(a4, (*(int *)(((int)stk + 16))), 0x5, (*(int *)(((int)stk + 12))), t97, 0x5, (t95 + 0x2));
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                }
                (((struct o3770_uint *)(a4))->v) = 0x0;
                t140 = 0x3770;
            }
        } else {
            FUN_0c059e60(a4, 0x2);
            (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = (*(signed char *)((a4 + 0x3728)));
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t118 = ((int (*)(int))(FUN_0c037bf6))(a4);
            if (54.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
            } else {
                t121 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 12)) = (t121 + 0x2);
                *(int *)((int)stk + 8) = (t121 + 0x2);
                *(int *)((int)stk + 4) = 0x5;
                t123 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 16)) = t123;
                *(int *)((int)stk + 0) = t123;
                FUN_0c07e79c(a4, (*(int *)(((int)stk + 16))), 0x5, (*(int *)(((int)stk + 12))), t123, 0x5, (t121 + 0x2));
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            (((struct o3770_uint *)(a4))->v) = 0x0;
            t140 = 0x3770;
        }
    }
    return t140;
}
