/* game/player: functions 0C05507C-0C056B88, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o190_float { char p[0x190]; float v; };
struct o1B4_int { char p[0x1B4]; int v; };
struct o1B8_int { char p[0x1B8]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C8_int { char p[0x2C8]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c052cf8(int, int, int);
int FUN_0c055df0(int, int, int);
int thunk_FUN_0c058310(int, int);
int nlCalcPoint(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlTranslateV(int);
int nlUnitMatrix(void);
int FUN_0c187798(int, int, int);
int FUN_0c05507c(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c055252(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8);
int FUN_0c055368(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0556c8(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8);
void FUN_0c055a28(void);
int FUN_0c055a2c(int a4, int a5);
int FUN_0c055a7c(int a4, int a5);
int FUN_0c055af0(int a4);
int FUN_0c056b68(int a4, int a5, int a6, int a7);

int FUN_0c05507c(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((0xF & a4) != 1) {
        if ((0xF & a4) != 2) {
            if ((0xF & a4) != 3) {
                if ((0xF & a4) == 4) {
                    if ((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) > (int)0x8000) {
                        *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) - 0x10000);
                    }
                    if ((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) < (int)0xFFFF8000) {
                        *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) + 0x10000);
                    }
                    t0 = *(int *)((a5 + 0x0));
                    t1 = *(int *)((a6 + 0x0));
                    t2 = (t0 - t1);
                    if ((int)(t0 - t1) < 0) {
                        t2 = (t1 - t0);
                    }
                    t1 = (int)((int)(t0 - (*(int *)((a7 + 0x0)))) / (int)((*(int *)((a8 + 0x0))) + 0x1));
                    t0 = t1;
                    if ((int)t1 < 0) {
                        t0 = (-t1);
                    }
                    if ((int)t2 <= (int)t0) {
                        t0 = (*(int *)((a5 + 0x0)));
                    } else {
                        t0 = ((*(int *)((a6 + 0x0))) + ((int)((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) / (int)((*(int *)((a8 + 0x0))) + 0x1))));
                    }
                    *(unsigned int *)((a6 + 0x0)) = t0;
                } else {
                    if ((0xF & a4) == 5) {
                        t0 = (int)((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) / (int)a9);
                        t1 = t0;
                        if ((int)t0 < 0) {
                            t1 = (-t0);
                        }
                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + t1);
                    } else {
                        if ((0xF & a4) == 6) {
                            *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + (*(int *)((a5 + 0x0))));
                        } else {
                            *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x0)));
                        }
                    }
                }
            } else {
                if ((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) > (int)0x8000) {
                    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) - 0x10000);
                }
                if ((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) < (int)0xFFFF8000) {
                    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) + 0x10000);
                }
                t0 = *(int *)((a5 + 0x0));
                t1 = *(int *)((a6 + 0x0));
                t2 = (t0 - t1);
                if ((int)(t0 - t1) < 0) {
                    t2 = (t1 - t0);
                }
                t1 = (int)((int)(t0 - (*(int *)((a7 + 0x0)))) / (int)a9);
                t0 = t1;
                if ((int)t1 < 0) {
                    t0 = (-t1);
                }
                if ((int)t2 > (int)t0) {
                    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + ((int)((int)((*(int *)((a5 + 0x0))) - (*(int *)((a7 + 0x0)))) / (int)a9)));
                } else {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x0)));
                }
            }
        } else {
            if ((int)((*(int *)((a5 + 0x0))) - (*(int *)((a6 + 0x0)))) > (int)0x8000) {
                *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) - 0x10000);
            }
            if ((int)((*(int *)((a5 + 0x0))) - (*(int *)((a6 + 0x0)))) < (int)0xFFFF8000) {
                *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) + 0x10000);
            }
            t0 = *(int *)((a5 + 0x0));
            t1 = *(int *)((a6 + 0x0));
            t2 = (t0 - t1);
            if ((int)(t0 - t1) < 0) {
                t2 = (t1 - t0);
            }
            t3 = (int)((int)(t0 - t1) / (int)((*(int *)((a8 + 0x0))) + 0x1));
            t0 = t3;
            if ((int)t3 < 0) {
                t0 = (-t3);
            }
            if ((int)t2 > (int)t0) {
                *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a6 + 0x0))) + ((int)((int)((*(int *)((a5 + 0x0))) - (*(int *)((a6 + 0x0)))) / (int)((*(int *)((a8 + 0x0))) + 0x1))));
            } else {
                *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x0)));
            }
        }
    } else {
        *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x0)));
    }
    t0 = *(int *)((a6 + 0x0));
    *(unsigned int *)((a6 + 0x0)) = (unsigned short)t0;
    return (unsigned short)t0;
}

int FUN_0c055252(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    if ((0xF & a4) != 1) {
        if ((0xF & a4) != 2) {
            if ((0xF & a4) != 3) {
                if ((0xF & a4) != 4) {
                } else {
                    u0 = *(float *)((a5 + 0x0));
                    u1 = *(float *)((a6 + 0x0));
                    u2 = *(float *)((a7 + 0x0));
                    u3 = (u0 - u1);
                    if (0.0f > (u0 - u1)) {
                        u3 = (u1 - u0);
                    }
                    t0 = *(int *)((a8 + 0x0));
                    u1 = ((u0 - u2) / (float)(t0 + 0x1));
                    if (0.0f > ((u0 - u2) / (float)(t0 + 0x1))) {
                        u4 = ((u0 - u2) / (float)(t0 + 0x1));
                        u4 = -u4;
                        u1 = u4;
                    }
                    if (!(u3 > u1)) {
                        *(float *)((a6 + 0x0)) = (*(float *)((a5 + 0x0)));
                    } else {
                        *(float *)((a6 + 0x0)) = ((*(float *)((a6 + 0x0))) + (((*(float *)((a5 + 0x0))) - (*(float *)((a7 + 0x0)))) / (float)((*(int *)((a8 + 0x0))) + 0x1)));
                    }
                }
            } else {
                u0 = *(float *)((a5 + 0x0));
                u1 = *(float *)((a6 + 0x0));
                u2 = (u0 - u1);
                if (0.0f > (u0 - u1)) {
                    u2 = (u1 - u0);
                }
                u1 = *(float *)((a7 + 0x0));
                u3 = ((u0 - u1) / (float)a9);
                if (0.0f > ((u0 - u1) / (float)a9)) {
                    u4 = ((u0 - u1) / (float)a9);
                    u4 = -u4;
                    u3 = u4;
                }
                if (u2 > u3) {
                    *(float *)((a6 + 0x0)) = ((*(float *)((a6 + 0x0))) + (((*(float *)((a5 + 0x0))) - (*(float *)((a7 + 0x0)))) / (float)a9));
                } else {
                    *(float *)((a6 + 0x0)) = (*(float *)((a5 + 0x0)));
                }
            }
        } else {
            u0 = *(float *)((a5 + 0x0));
            u1 = *(float *)((a6 + 0x0));
            u2 = (u0 - u1);
            if (0.0f > (u0 - u1)) {
                u2 = (u1 - u0);
            }
            t0 = *(int *)((a8 + 0x0));
            u3 = ((u0 - u1) / (float)(t0 + 0x1));
            if (0.0f > ((u0 - u1) / (float)(t0 + 0x1))) {
                u4 = ((u0 - u1) / (float)(t0 + 0x1));
                u4 = -u4;
                u3 = u4;
            }
            if (u2 > u3) {
                *(float *)((a6 + 0x0)) = ((*(float *)((a6 + 0x0))) + (((*(float *)((a5 + 0x0))) - (*(float *)((a6 + 0x0)))) / (float)((*(int *)((a8 + 0x0))) + 0x1)));
            } else {
                *(float *)((a6 + 0x0)) = (*(float *)((a5 + 0x0)));
            }
        }
    } else {
        *(float *)((a6 + 0x0)) = (*(float *)((a5 + 0x0)));
    }
    return (0xF & a4);
}



void FUN_0c055a28(void)
{
    
}

int FUN_0c055a2c(int a4, int a5)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 0)) = a5;
    nlUnitMatrix();
    nlTranslateV((*(int *)(((int)stk + 0))));
    nlRotateAY(((((struct o1B8_int *)(a4))->v)));
    nlRotateAX(((-((((struct o1B4_int *)(a4))->v))) + 0x10000));
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 12)) = ((((struct o190_float *)(a4))->v));
    return (nlCalcPoint((((int)stk + 0) + 0x4), (0xEC + a4)));
}

int FUN_0c055a7c(int a4, int a5)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 0)) = a5;
    nlUnitMatrix();
    nlTranslateV((*(int *)(((int)stk + 0))));
    nlRotateAY(((((struct o1B8_int *)(a4))->v)));
    nlRotateAX(((-((((struct o1B4_int *)(a4))->v))) + 0x10000));
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 12)) = ((((struct o190_float *)(a4))->v));
    return (nlCalcPoint((((int)stk + 0) + 0x4), (0xBC + a4)));
}

int FUN_0c055af0(int a4)
{
    int stk[32];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t7;
    register float u54;
    register float u48;
    int t14;
    register int t19;
    register int t29;
    register int t36;
    register int t56;
    register int t2;
    register float u5;
    register float u6;
    register float u42;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = 0xC532498;
    t1 = 0xC532498;
    t3 = 0x0;
    t4 = 0xC532498;
    for (;;) {
        t7 = *(int *)(((int)stk + 0));
        u54 = u5;
        if ((*(signed char *)((((t7 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            u5 = ((((struct o2C_float *)(((t7 * 0x3938) + 0xC532498)))->v));
            u6 = (*(float *)0xC54109C);
            u6 = (u6 + -400.0f);
            u48 = u5;
            if (u5 > u6) {
                t2 = t3;
                t2 = (t2 << 1);
                t14 = *(signed char *)((t0 + 0x2));
                t2 = (t2 + t3);
                t2 = (t2 << 2);
                t2 = (t2 + (((int)stk + 0) + 0x8));
                if ((t14 != 12) && (t14 != 13)) {
                    u6 = ((((struct o28_float *)(t4))->v));
                    t3 = (t3 + 0x1);
                    *(float *)((t2 + 0x0)) = u6;
                    u6 = ((((struct o2C_float *)(t4))->v));
                    u6 = (u6 + -50.0f);
                    t19 = ((((t3 << 1) + t3) << 2) + (((int)stk + 0) + 0x8));
                    t3 = (t3 + 0x1);
                    (((struct o4_float *)(t2))->v) = u6;
                    u6 = ((((struct o30_float *)(t4))->v));
                    (((struct o8_float *)(t2))->v) = u6;
                    u6 = ((((struct o28_float *)(t4))->v));
                    *(float *)((t19 + 0x0)) = u6;
                    u6 = ((((struct o2C_float *)(t4))->v));
                    u6 = (u6 + 250.0f);
                    (((struct o4_float *)(t19))->v) = u6;
                    u6 = ((((struct o30_float *)(t4))->v));
                    (((struct o8_float *)(t19))->v) = u6;
                    u42 = u5;
                } else {
                    thunk_FUN_0c058310((((((struct oC4_int *)(t1))->v)) + 0x28), t2);
                    u6 = ((((struct o4_float *)(((((t3 << 1) + t3) << 2) + (((int)stk + 0) + 0x8))))->v));
                    t29 = ((((t3 << 1) + t3) << 2) + (((int)stk + 0) + 0x8));
                    t3 = (t3 + 0x1);
                    u6 = (u6 - 100.0f);
                    (((struct o4_float *)(t29))->v) = u6;
                    thunk_FUN_0c058310((((((struct oC4_int *)(t1))->v)) + 0x28), ((((t3 << 1) + t3) << 2) + (((int)stk + 0) + 0x8)));
                    u6 = ((((struct o4_float *)(((((t3 << 1) + t3) << 2) + (((int)stk + 0) + 0x8))))->v));
                    t36 = ((((t3 << 1) + t3) << 2) + (((int)stk + 0) + 0x8));
                    t3 = (t3 + 0x1);
                    u6 = (u6 + 100.0f);
                    (((struct o4_float *)(t36))->v) = u6;
                }
                u48 = u42;
            }
            u54 = u48;
        }
        t56 = *(int *)(((int)stk + 0));
        u5 = u54;
        t1 = (t1 + 0x3938);
        *(unsigned int *)(((int)stk + 0)) = (t56 + 0x1);
        t4 = (t4 + 0x3938);
        t0 = (t0 + 0x3938);
        if ((int)(t56 + 0x1) >= (int)0x4) {
            break;
        }
    }
    return (FUN_0c052cf8((*(int *)(((int)stk + 4))), t3, (((int)stk + 0) + 0x8)));
}

int FUN_0c056b68(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = (((struct o2C8_int *)(a4))->v);
    t1 = *(int *)((t0 + 0x8));
    if ((t1 & 0xF0) != 16) {
        if ((t1 & 0xF0) != 0) {
            return (t1 & 0xF0);
        }
        return ((int (*)(int, int, int, int))(0xC056B64))(a4, t0, a6, a7);
    }
    return FUN_0c055df0(a4, t0, a6);
}
