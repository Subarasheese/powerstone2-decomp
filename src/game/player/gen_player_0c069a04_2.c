/* game/player: functions 0C069A04-0C06A230, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3733_uchar { char p[0x3733]; unsigned char v; };
struct o3734_uchar { char p[0x3734]; unsigned char v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o37B4_float { char p[0x37B4]; float v; };
struct o430_short { char p[0x430]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c069da2(int);
int FUN_0c07d838(int, int, int, int, int, int);
int FUN_0c07d9dc(int, int);
int FUN_0c07daea(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07ec9a(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c09ebd4(int);
int FUN_0c07f172(int);
int FUN_0c07f18c(int);
int FUN_0c07f67c(int);
int FUN_0c07f820(int, float);
int FUN_0c07fea4(int, int);
int FUN_0c080320(int, float);
int FUN_0c080586(int);
int FUN_0c085cac(int, int, int);
int FUN_0c069a92(int a4);
int FUN_0c069b60(int a4, float f4);
int FUN_0c069bc8(int a4);
int FUN_0c069cb6(int a4);
int FUN_0c069f7c(int a4);
int FUN_0c069fd4(int a4);
int FUN_0c06a10c(int a4);

int FUN_0c069a92(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (((*(signed char *)((a4 + 0x3732))) == 0) && (t0 = *(signed char *)((a4 + 0x3737)), t1 = *(signed char *)((a4 + 0x3735)), (int)t0 <= (int)(unsigned char)t1)) {
        t0 = FUN_0c09ebd4(a4);
        if ((signed char)t0 != 0) {
            if ((*(signed char *)((a4 + 0x130))) != 0) {
                (((struct o3734_uchar *)(a4))->v) = t0;
                t1 = FUN_0c07f172(a4);
                if (t1 != 0) {
                    t1 = (FUN_0c085cac(a4, 0x7, 0x6));
                } else {
                    t2 = *(signed char *)((a4 + 0x3732));
                    t3 = t2;
                    if ((t2 == 0) || (t2 == 1)) {
                        t2 = FUN_0c07ecc6(a4, 0x0, 0x0);
                        t4 = t2;
                        if (t2 != 0) {
                            t5 = t2;
                            if (t2 != 1) {
                                (((struct o3717_uchar *)(a4))->v) = 0x6;
                                (((struct o3718_uchar *)(a4))->v) = 0x0;
                                t5 = (FUN_0c085cac(a4, 0x6, 0x0));
                            }
                            t4 = t5;
                        }
                        t3 = t4;
                    }
                    t1 = t3;
                }
                t2 = t1;
            } else {
                (((struct o3733_uchar *)(a4))->v) = (t0 - 1);
                t2 = (FUN_0c085cac(a4, 0x7, 0x0));
            }
            t0 = t2;
        } else {
            t1 = FUN_0c07f172(a4);
            if (t1 != 0) {
                t1 = (FUN_0c085cac(a4, 0x7, 0x6));
            } else {
                t2 = *(signed char *)((a4 + 0x3732));
                t3 = t2;
                if ((t2 == 0) || (t2 == 1)) {
                    t2 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    t4 = t2;
                    if (t2 != 0) {
                        t5 = t2;
                        if (t2 != 1) {
                            (((struct o3717_uchar *)(a4))->v) = 0x6;
                            (((struct o3718_uchar *)(a4))->v) = 0x0;
                            t5 = (FUN_0c085cac(a4, 0x6, 0x0));
                        }
                        t4 = t5;
                    }
                    t3 = t4;
                }
                t1 = t3;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t0 = *(signed char *)((a4 + 0x3732));
        t2 = t0;
        if ((t0 != 0) && (t0 != 1)) {
        } else {
            t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
            t3 = t0;
            if (t0 != 0) {
                t4 = t0;
                if (t0 != 1) {
                    (((struct o3717_uchar *)(a4))->v) = 0x6;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t4 = (FUN_0c085cac(a4, 0x6, 0x0));
                }
                t3 = t4;
            }
            t2 = t3;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c069b60(int a4, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                t1 = FUN_0c07f820(a4, f4);
                if (t1 == 1) {
                    return FUN_0c085cac(a4, 0xB, 0x0);
                }
                return t1;
            }
            return (short)(t0 - 1);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t1 = FUN_0c07f67c(a4);
            if (t1 != 0) {
                return FUN_0c085cac(a4, 0x1C, 0x0);
            }
            return t1;
        }
        return (short)(t0 - 1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t1 = FUN_0c07f820(a4, f4);
        if (t1 == 1) {
            return FUN_0c085cac(a4, 0xB, 0x0);
        }
        return t1;
    }
    return (short)(t0 - 1);
}

int FUN_0c069bc8(int a4)
{
    register int t0;
    register float u0;

    t0 = FUN_0c07ebe6(a4);
    if (t0 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x5;
        (((struct o3718_uchar *)(a4))->v) = 0x6;
        return FUN_0c085cac(a4, 0x5, 0x6);
    }
    if ((*(short *)((a4 + 0x1E))) != 0) {
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        u0 = 1.0f;
        if ((short)(t0 - 1) == 0) {
        } else {
            (((struct o37B0_float *)(a4))->v) = (((((struct o37B0_float *)(a4))->v)) - ((((((struct o37B0_float *)(a4))->v)) + -1.0f) / (float)(*(short *)((a4 + 0x1E)))));
            u0 = ((((struct o37B0_float *)(a4))->v));
        }
        FUN_0c080320(a4, u0);
    }
    if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x280) != 0) {
        FUN_0c080320(a4, (1.0f + 1.0f));
        *(unsigned short *)((a4 + 0x1E)) = 0x78;
    }
    t0 = FUN_0c07ebd0(a4);
    if (t0 != 0) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 == 2) {
            if (_builtin_fabsf((((((struct o2C_float *)(a4))->v)) - ((((struct o37B4_float *)(a4))->v)))) > (*(float *)0xC069D3C)) {
                (((struct o371D_uchar *)(a4))->v) = 0x0;
                (((struct o3717_uchar *)(a4))->v) = 0x0;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                return FUN_0c085cac(a4, 0x0, 0x0);
            }
            return FUN_0c07ec9a(a4);
        }
        (((struct o371D_uchar *)(a4))->v) = 0x0;
    }
    (((struct o3717_uchar *)(a4))->v) = 0x0;
    (((struct o3718_uchar *)(a4))->v) = 0x0;
    return FUN_0c085cac(a4, 0x0, 0x0);
}

int FUN_0c069cb6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
        if (t0 == 2) {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((int)(short)(t0 - 1) < 0) {
                t0 = 0x16;
                if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
                } else {
                    (((struct o3717_uchar *)(a4))->v) = 0xF;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t0 = 0xF;
                }
                t1 = (FUN_0c085cac(a4, t0, 0x0));
            } else {
                FUN_0c07ec9a(a4);
                if (((((struct o20_short *)(a4))->v)) == 0) {
                    FUN_0c07daea(a4);
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                }
                t0 = 0x160;
                if (((((struct o160_float *)(a4))->v)) > 0.0f) {
                    t2 = *(short *)((a4 + 0x1C));
                    t3 = t2;
                    if (t2 == 0) {
                        (((struct o3717_uchar *)(a4))->v) = 0xF;
                        (((struct o3718_uchar *)(a4))->v) = 0x0;
                        t3 = (FUN_0c085cac(a4, 0xF, 0x0));
                    }
                    t0 = t3;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
                *(unsigned short *)((a4 + 0x1E)) = 0x78;
            }
            t1 = 0x160;
            if (((((struct o160_float *)(a4))->v)) > 0.0f) {
                t2 = *(short *)((a4 + 0x1C));
                t3 = t2;
                if (t2 == 0) {
                    (((struct o3717_uchar *)(a4))->v) = 0xF;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t3 = (FUN_0c085cac(a4, 0xF, 0x0));
                }
                t1 = t3;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        if (((((struct o160_float *)(a4))->v)) != 0.0f) {
            (((struct o3717_uchar *)(a4))->v) = 0x5;
            (((struct o3718_uchar *)(a4))->v) = 0x7;
            t0 = (FUN_0c085cac(a4, 0x5, 0x7));
        } else {
            t2 = 0x160;
            if (((((struct o160_float *)(a4))->v)) > 0.0f) {
                t3 = *(short *)((a4 + 0x1C));
                t2 = t3;
                if (t3 == 0) {
                    (((struct o3717_uchar *)(a4))->v) = 0xF;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t2 = (FUN_0c085cac(a4, 0xF, 0x0));
                }
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c069f7c(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c069da2(a4);
    if ((signed char)t0 == 0) {
        t1 = FUN_0c07ecc6(a4, 0x1, 0x0);
        if (t1 != 0) {
            if (t1 == 2) {
                (((struct o3717_uchar *)(a4))->v) = 0xD;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                return FUN_0c085cac(a4, 0xD, 0x0);
            }
            return t1;
        }
        (((struct o3717_uchar *)(a4))->v) = 0x5;
        (((struct o3718_uchar *)(a4))->v) = 0x7;
        return FUN_0c085cac(a4, 0x5, 0x7);
    }
    return (signed char)t0;
}

int FUN_0c069fd4(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c069da2(a4);
    t2 = (signed char)t1;
    if ((signed char)t1 == 0) {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if (((short)(t1 - 1) != 0) && (t0 = (((struct o430_short *)(a4))->v), ((unsigned short)t0 & 0x280) == 0)) {
            if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x100) != 0) {
                (((struct o3717_uchar *)(a4))->v) = 0x5;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                t0 = (FUN_0c085cac(a4, 0x5, 0x0));
            } else {
                t1 = FUN_0c07ecc6(a4, 0x1, 0x0);
                if (t1 != 0) {
                    t3 = t1;
                    if (t1 == 2) {
                        (((struct o3717_uchar *)(a4))->v) = 0xD;
                        (((struct o3718_uchar *)(a4))->v) = 0x0;
                        t3 = (FUN_0c085cac(a4, 0xD, 0x0));
                    }
                    t1 = t3;
                } else {
                    (((struct o3717_uchar *)(a4))->v) = 0x5;
                    (((struct o3718_uchar *)(a4))->v) = 0x7;
                    t1 = (FUN_0c085cac(a4, 0x5, 0x7));
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3E, 0xFFFFFFFF, 0x4, 0x3E);
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t3 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t0))->v) = 1.0f;
            (((struct o9C_float *)(t0))->v) = 1.0f;
            (((struct oA0_float *)(t3))->v) = 1.0f;
            (((struct o9C_float *)(t3))->v) = 1.0f;
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t3 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 1.0f;
            (((struct o98_float *)(t3))->v) = 1.0f;
            (((struct o94_float *)(t0))->v) = 1.0f;
            (((struct o94_float *)(t3))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t1 = 0x17;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c06a10c(int a4)
{
    int stk[3];
    int t0;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t17;
    register int t19;
    register int t20;
    register int t21;
    register int t30;
    register int t32;
    register int t34;
    register int t39;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t55;
    register int t57;
    register int t58;
    register int t59;
    register int t68;
    register int t70;
    register int t40;

    t0 = (((struct o20_short *)(a4))->v);
    if (t0 != 0) {
        if ((t0 != 4) && (t0 != 9)) {
            if (t0 == 5) {
                return t0;
            }
            if (t0 == 6) {
                return t0;
            }
            if ((t0 != 7) && (t0 != 8)) {
                t5 = FUN_0c07f18c(a4);
                if (t5 != 0) {
                    t6 = FUN_0c07fea4(a4, 0x0);
                    if (t6 == 0) {
                        t7 = FUN_0c07d838(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
                        if (t7 != 0) {
                            return FUN_0c07d9dc(a4, t7);
                        }
                        t8 = FUN_0c07ecc6(a4, 0x0, 0x0);
                        if (t8 != 0) {
                            if (t8 == 2) {
                                (((struct o3717_uchar *)(a4))->v) = 0x0;
                                (((struct o3718_uchar *)(a4))->v) = 0x0;
                                FUN_0c085cac(a4, 0x0, 0x0);
                            }
                        } else {
                            (((struct o3717_uchar *)(a4))->v) = 0x5;
                            (((struct o3718_uchar *)(a4))->v) = 0x7;
                            FUN_0c085cac(a4, 0x5, 0x7);
                        }
                        t17 = FUN_0c07ebe6(a4);
                        if (t17 != 0) {
                            (((struct o3717_uchar *)(a4))->v) = 0x4;
                            (((struct o3718_uchar *)(a4))->v) = 0x0;
                            return (FUN_0c085cac(a4, 0x4, 0x0));
                        }
                        t19 = FUN_0c07ebd0(a4);
                        if (t19 != 0) {
                            return FUN_0c080586(a4);
                        }
                        return t19;
                    }
                    return t6;
                }
                t20 = FUN_0c07d838(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
                if (t20 != 0) {
                    return FUN_0c07d9dc(a4, t20);
                }
                t21 = FUN_0c07ecc6(a4, 0x0, 0x0);
                if (t21 != 0) {
                    if (t21 == 2) {
                        (((struct o3717_uchar *)(a4))->v) = 0x0;
                        (((struct o3718_uchar *)(a4))->v) = 0x0;
                        FUN_0c085cac(a4, 0x0, 0x0);
                    }
                } else {
                    (((struct o3717_uchar *)(a4))->v) = 0x5;
                    (((struct o3718_uchar *)(a4))->v) = 0x7;
                    FUN_0c085cac(a4, 0x5, 0x7);
                }
                t30 = FUN_0c07ebe6(a4);
                if (t30 != 0) {
                    (((struct o3717_uchar *)(a4))->v) = 0x4;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    return (FUN_0c085cac(a4, 0x4, 0x0));
                }
                t32 = FUN_0c07ebd0(a4);
                if (t32 != 0) {
                    return FUN_0c080586(a4);
                }
                return t32;
            }
            return t0;
        }
        if ((*(short *)((a4 + 0x1C))) == 0) {
            t34 = FUN_0c07f18c(a4);
            t40 = t34;
            if (t34 != 0) {
                
                t40 = (FUN_0c07fea4(a4, 0x2));
            }
        } else {
            t39 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t39 - 1);
            t40 = (t39 - 1);
        }
        return t40;
    }
    t43 = FUN_0c07f18c(a4);
    if (t43 != 0) {
        t44 = FUN_0c07fea4(a4, 0x0);
        if (t44 == 0) {
            t45 = FUN_0c07d838(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            if (t45 != 0) {
                return FUN_0c07d9dc(a4, t45);
            }
            t46 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t46 != 0) {
                if (t46 == 2) {
                    (((struct o3717_uchar *)(a4))->v) = 0x0;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    FUN_0c085cac(a4, 0x0, 0x0);
                }
            } else {
                (((struct o3717_uchar *)(a4))->v) = 0x5;
                (((struct o3718_uchar *)(a4))->v) = 0x7;
                FUN_0c085cac(a4, 0x5, 0x7);
            }
            t55 = FUN_0c07ebe6(a4);
            if (t55 != 0) {
                (((struct o3717_uchar *)(a4))->v) = 0x4;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                return (FUN_0c085cac(a4, 0x4, 0x0));
            }
            t57 = FUN_0c07ebd0(a4);
            if (t57 != 0) {
                return FUN_0c080586(a4);
            }
            return t57;
        }
        return t44;
    }
    t58 = FUN_0c07d838(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    if (t58 != 0) {
        return FUN_0c07d9dc(a4, t58);
    }
    t59 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t59 != 0) {
        if (t59 == 2) {
            (((struct o3717_uchar *)(a4))->v) = 0x0;
            (((struct o3718_uchar *)(a4))->v) = 0x0;
            FUN_0c085cac(a4, 0x0, 0x0);
        }
    } else {
        (((struct o3717_uchar *)(a4))->v) = 0x5;
        (((struct o3718_uchar *)(a4))->v) = 0x7;
        FUN_0c085cac(a4, 0x5, 0x7);
    }
    t68 = FUN_0c07ebe6(a4);
    if (t68 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x4;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return (FUN_0c085cac(a4, 0x4, 0x0));
    }
    t70 = FUN_0c07ebd0(a4);
    if (t70 != 0) {
        return FUN_0c080586(a4);
    }
    return t70;
}
