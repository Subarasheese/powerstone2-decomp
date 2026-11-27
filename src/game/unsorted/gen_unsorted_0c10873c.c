/* game/unsorted: functions 0C10873C-0C109C0C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int FUN_0c10873c(int a4, int a5);
int FUN_0c108838(int a4, int a5);
int FUN_0c1088f2(int a4, int a5);
int FUN_0c1089c0(int a4, int a5, int a6, int a7);
int FUN_0c108acc(int a4, int a5, int a6, int a7);
int FUN_0c108bf8(int a4, int a5, int a6);
int FUN_0c10992a(int a4, int a5, int a6, int a7);

int FUN_0c10873c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(signed char *)(((((a4 + 0x1) * 0x34) + 0xC2738B8) + 0x10));
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((*(signed char *)(((((t1 + 0x1) * 0x34) + 0xC2738B8) + 0x10))) == t0) {
            if (((*(short *)((((((t1 << 2) << 1) - t1) * (0xE)) + 0xC296214))) & (*(int *)((((a5 << 2) + 0xC290B80) + 0x0)))) != 0) {
                t3 = (t2 << 2);
                t2 = (t2 + 0x1);
                *(unsigned int *)((0xC473658 + t3)) = t1;
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 > (int)0x78) {
            break;
        }
    }
    t0 = 0x0;
    if ((int)t2 > 0) {
        t1 = 0x0;
        t3 = 0xC473658;
        t4 = 0x0;
        for (;;) {
            t5 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t1 = (t1 + 0x1);
            *(unsigned int *)((0xC473058 + (t4 << 2))) = t5;
            t4 = (t4 + 0x1);
            if ((int)t1 >= (int)t2) {
                break;
            }
        }
        t0 = t4;
    }
    t1 = 0xFFFFFFFF;
    if ((int)t0 > 0) {
        t2 = (int)((int)(nlRand()) % (int)t0);
        t3 = *(int *)((0xC473058 + (t2 << 2)));
        t4 = t3;
        if (t3 == a4) {
            t3 = (t2 + 0x1);
            if ((int)(t2 + 0x1) >= (int)t0) {
                t3 = 0x0;
            }
            t4 = (*(int *)((0xC473058 + (t3 << 2))));
        }
        t1 = t4;
    }
    return t1;
}

int FUN_0c108838(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 != 0) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            if (((*(short *)(((((((t0 << 2) << 1) - t0) * 0xE) + 0xC29620E) + 0x6))) & 0x200) != 0) {
                t2 = (t1 << 2);
                t1 = (t1 + 0x1);
                *(unsigned int *)((0xC473058 + t2)) = t0;
            }
            t0 = (t0 + 0x1);
            if ((int)t0 > (int)0x78) {
                break;
            }
        }
        t0 = t1;
    } else {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            if (((*(short *)(((((((t1 << 2) << 1) - t1) * 0xE) + 0xC29620E) + 0x6))) & 0x8) != 0) {
                t3 = (t2 << 2);
                t2 = (t2 + 0x1);
                *(unsigned int *)((0xC473058 + t3)) = t1;
            }
            t1 = (t1 + 0x1);
            if ((int)t1 > (int)0x78) {
                break;
            }
        }
        t0 = t2;
    }
    t1 = 0xFFFFFFFF;
    if ((int)t0 > 0) {
        t2 = (int)((int)(nlRand()) % (int)t0);
        t3 = *(int *)((0xC473058 + (t2 << 2)));
        t1 = t3;
        if (t3 == a5) {
            t3 = (t2 + 0x1);
            if ((int)(t2 + 0x1) >= (int)t0) {
                t3 = 0x0;
            }
            t1 = (*(int *)((0xC473058 + (t3 << 2))));
        }
    }
    return t1;
}

int FUN_0c1088f2(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 != 0) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            if (((*(short *)(((((((t0 << 2) << 1) - t0) * 0xE) + 0xC29620E) + 0x6))) & 0x80) != 0) {
                t2 = (t1 << 2);
                t1 = (t1 + 0x1);
                *(unsigned int *)((0xC473058 + t2)) = t0;
            }
            t0 = (t0 + 0x1);
            if ((int)t0 > (int)0x78) {
                break;
            }
        }
        t0 = t1;
    } else {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            if (((*(short *)(((((((t1 << 2) << 1) - t1) * 0xE) + 0xC29620E) + 0x6))) & 0x10) != 0) {
                t3 = (t2 << 2);
                t2 = (t2 + 0x1);
                *(unsigned int *)((0xC473058 + t3)) = t1;
            }
            t1 = (t1 + 0x1);
            if ((int)t1 > (int)0x78) {
                break;
            }
        }
        t0 = t2;
    }
    t1 = 0xFFFFFFFF;
    if ((int)t0 > 0) {
        t2 = (int)((int)(nlRand()) % (int)t0);
        t3 = *(int *)((0xC473058 + (t2 << 2)));
        t1 = t3;
        if (t3 == a5) {
            t3 = (t2 + 0x1);
            if ((int)(t2 + 0x1) >= (int)t0) {
                t3 = 0x0;
            }
            t1 = (*(int *)((0xC473058 + (t3 << 2))));
        }
    }
    return t1;
}

int FUN_0c1089c0(int a4, int a5, int a6, int a7)
{
    int stk[192];
    register int t49;
    register int t0;
    register int t1;
    register int t4;
    register int t23;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t18;
    register int t31;
    register int t32;
    register int t33;

    t49 = 0xFFFFFFFF;
    if (((int)a4 >= 0) && ((int)a4 <= (int)0x78)) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            if (((*(short *)(((((((t0 << 2) << 1) - t0) * 0xE) + 0xC29620E) + 0x6))) & 0x20) != 0) {
                t4 = (t1 << 2);
                t1 = (t1 + 0x1);
                *(unsigned int *)((0xC473058 + t4)) = t0;
            }
            t0 = (t0 + 0x1);
            if ((int)t0 > (int)0x78) {
                break;
            }
        }
        t23 = 0x0;
        if ((int)t1 > 0) {
            t10 = 0xC473058;
            t11 = 0xC473058;
            t12 = 0x0;
            t13 = 0x0;
            for (;;) {
                t12 = (t12 + 0x1);
                if ((*(signed char *)(((((a4 + 0x1) * 0x34) + 0xC2738B8) + 0x3))) == (*(signed char *)((((((*(int *)((t10 + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x3)))) {
                    t18 = (t13 << 2);
                    t13 = (t13 + 0x1);
                    *(unsigned int *)((((int)stk + 0) + t18)) = (*(int *)((t11 + 0x0)));
                }
                t11 = (t11 + 0x4);
                t10 = (t10 + 0x4);
                if ((int)t12 >= (int)t1) {
                    break;
                }
            }
            t23 = t13;
        }
        t49 = 0xFFFFFFFF;
        if ((int)t23 > 0) {
            t31 = (int)((int)(nlRand()) % (int)t23);
            t32 = *(int *)((((int)stk + 0) + (t31 << 2)));
            t49 = t32;
            if (t32 == a4) {
                t33 = (t31 + 0x1);
                if ((int)(t31 + 0x1) >= (int)t23) {
                    t33 = 0x0;
                }
                t49 = (*(int *)((((int)stk + 0) + (t33 << 2))));
            }
        }
    }
    return t49;
}

int FUN_0c108acc(int a4, int a5, int a6, int a7)
{
    int stk[194];
    register int t0;
    register int t1;
    int t2;
    register int t14;
    register int t3;
    register int t4;
    register int t6;
    register int t17;
    register int t18;
    register int t20;
    register int t45;
    register int t31;
    register int t32;
    register int t33;
    register int t34;
    register int t38;
    register int t65;
    register int t51;
    register int t53;
    register int t54;
    register int t28;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = *(int *)(((int)stk + 0));
    t1 = *(signed char *)(((((t0 + 0x1) * 0x34) + 0xC2738B8) + 0x10));
    t2 = *(signed char *)(((((t0 + 0x1) * 0x34) + 0xC2738B8) + 0x3));
    if ((t2 != 1) && ((t2 != 2) && (t2 != 3))) {
        t14 = 0x0;
        if ((t2 != 4) && ((t2 != 5) && ((t2 != 6) && (t2 != 7)))) {
        } else {
            t3 = 0x0;
            t4 = 0x0;
            for (;;) {
                if ((int)(*(signed char *)(((((t4 + 0x1) * 0x34) + 0xC2738B8) + 0x3))) <= (int)0x3) {
                    t6 = (t3 << 2);
                    t3 = (t3 + 0x1);
                    *(unsigned int *)(((((int)stk + 0) + 0x8) + t6)) = t4;
                }
                t4 = (t4 + 0x1);
                if ((int)t4 > (int)0x78) {
                    break;
                }
            }
            t14 = t3;
        }
        t28 = t14;
    } else {
        t17 = 0x0;
        t18 = 0x0;
        for (;;) {
            if ((*(signed char *)(((((t18 + 0x1) * 0x34) + 0xC2738B8) + 0x3))) == t2) {
                t20 = (t17 << 2);
                t17 = (t17 + 0x1);
                *(unsigned int *)(((((int)stk + 0) + 0x8) + t20)) = t18;
            }
            t18 = (t18 + 0x1);
            if ((int)t18 > (int)0x78) {
                break;
            }
        }
        t28 = t17;
    }
    *(unsigned int *)(((int)stk + 4)) = (0x0 + (((int)stk + 0) + 0x8));
    t45 = 0x0;
    if ((int)t28 > 0) {
        t31 = (0x0 + (((int)stk + 0) + 0x8));
        t32 = 0x0;
        t33 = (0x0 + (((int)stk + 0) + 0x8));
        t34 = 0x0;
        for (;;) {
            t32 = (t32 + 0x1);
            if ((*(signed char *)((((((*(int *)((t33 + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x10))) != t1) {
                t38 = (t34 << 2);
                t34 = (t34 + 0x1);
                *(unsigned int *)((0xC473058 + t38)) = (*(int *)((t31 + 0x0)));
            }
            t31 = (t31 + 0x4);
            t33 = (t33 + 0x4);
            if ((int)t32 >= (int)t28) {
                break;
            }
        }
        t45 = t34;
    }
    t65 = 0xFFFFFFFF;
    if ((int)t45 > 0) {
        t51 = (int)((int)(nlRand()) % (int)t45);
        t53 = *(int *)((0xC473058 + (t51 << 2)));
        t65 = t53;
        if (t53 == (*(int *)(((int)stk + 0)))) {
            t54 = (t51 + 0x1);
            if ((int)(t51 + 0x1) >= (int)t45) {
                t54 = 0x0;
            }
            t65 = (*(int *)((0xC473058 + (t54 << 2))));
        }
    }
    return t65;
}


int FUN_0c10992a(int a4, int a5, int a6, int a7)
{
    int stk[7];

    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_12;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a7;
    v0_3 = (0x0);
    v0_4 = (0xFFFFFFFF);
    v0_5 = (0x0);
    v0_6 = (0xE);
    v0_7 = (0x0);
    v0_8 = (0x0);
    L_C109B46:;
    if (((int)v0_3 > (int)0x78)) goto L_C109B50;
    if (!((v0_4 == -1))) goto L_C109B5E;
    v0_9 = ((((v0_3 << 2) << 1) - v0_3));
    v0_2 = (v0_5);
    goto L_C109B3A;
    L_C109B5E:;
    v0_3 = (((v0_4 << 2) + 0xC473D04));
    v0_10 = (0x32);
    if (((int)v0_8 >= (int)0x32)) goto L_C109B7C;
    if ((((*(int *)(((v0_2 << 2) + 0xC290B98))) & (*(int *)((v0_3 + 0x0)))) == 0)) goto L_C109B7C;
    v0_11 = (v0_4);
    L_C109BFA:;
    return v0_11;
    L_C109B7C:;
    v0_9 = (0xC2A08E0);
    v0_0 = (0xC2A08E0);
    v0_1 = (0x1);
    v0_6 = (v0_5);
    v0_2 = (v0_5);
    L_C109BA8:;
    if (!(((*(int *)((v0_9 + (v0_6 << 2)))) != -1))) goto L_C109BB4;
    if (((*(int *)((v0_0 + 0x0))) != v0_4)) goto L_C109BA4;
    v0_2 = (v0_1);
    goto L_C109BB4;
    L_C109BB4:;
    if ((v0_2 == 0)) goto L_C109BE4;
    if ((((*(int *)((v0_3 + 0x0))) & 0x2000) != 0)) goto L_C109BC6;
    v0_11 = (0x86);
    goto L_C109BFA;
    L_C109BC6:;
    if ((v0_2 == 0)) goto L_C109BE4;
    if (((int)v0_7 >= (int)v0_10)) goto L_C109BD4;
    v0_11 = (0x84);
    goto L_C109BFA;
    L_C109BD4:;
    if (((int)v0_8 >= (int)v0_10)) goto L_C109BDE;
    v0_11 = (0x83);
    goto L_C109BFA;
    L_C109BDE:;
    v0_11 = (0x85);
    goto L_C109BFA;
    L_C109BE4:;
    if (((int)v0_7 >= (int)v0_10)) goto L_C109BEE;
    v0_11 = (0x81);
    goto L_C109BFA;
    L_C109BEE:;
    if (((int)v0_8 >= (int)v0_10)) goto L_C109BF8;
    v0_11 = (0x80);
    goto L_C109BFA;
    L_C109BF8:;
    v0_11 = (0x82);
    goto L_C109BFA;
    L_C109BA4:;
    v0_0 = ((v0_0 + 0x4));
    v0_6 = ((v0_6 + 0x1));
    goto L_C109BA8;
    L_C109B3A:;
    if (((int)v0_2 >= (int)0x7)) goto L_C109B44;
    v0_12 = *(short *)((0xC29620E + ((v0_9 + v0_2) * v0_6)));
    v0_11 = (v0_12);
    v0_10 = (0xC29620E);
    if ((v0_12 == 0xC0)) goto L_C1099A0;
    if ((v0_11 == 0xC1)) goto L_C1099A0;
    if ((v0_11 == 0xC2)) goto L_C1099A0;
    L_C109A28:;
    if (!((v0_4 == -1))) goto L_C109B44;
    v0_12 = *(short *)(((((v0_9 + v0_2) * v0_6) + v0_10) + 0x2));
    v0_11 = (v0_12);
    if ((v0_12 == 0xC0)) goto L_C109A58;
    if ((v0_11 == 0xC1)) goto L_C109A58;
    if ((v0_11 == 0xC2)) goto L_C109A58;
    goto L_C109AF0;
    L_C109B44:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C109B46;
    L_C109AF0:;
    if ((v0_4 != -1)) goto L_C109B44;
    *(unsigned int *)(((int)stk + 4)) = (((v0_9 + v0_2) * v0_6) + v0_10);
    v0_11 = *(short *)(((((v0_9 + v0_2) * v0_6) + v0_10) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = v0_11;
    *(unsigned int *)(((int)stk + 4)) = (*(short *)(((((v0_9 + v0_2) * v0_6) + v0_10) + 0x2)));
    if ((v0_11 != v0_0)) goto L_C109B16;
    if (((*(int *)(((int)stk + 4))) == v0_1)) goto L_C109B22;
    L_C109B16:;
    if (((*(int *)(((int)stk + 0))) != v0_1)) goto L_C109B38;
    if (((*(int *)(((int)stk + 4))) != v0_0)) goto L_C109B38;
    L_C109B22:;
    v0_4 = (v0_3);
    v0_7 = ((v0_7 + (*(short *)(((((v0_9 + v0_2) * v0_6) + v0_10) + 0xA)))));
    v0_8 = ((v0_8 + (*(short *)(((((v0_9 + v0_2) * v0_6) + v0_10) + 0xC)))));
    goto L_C109B44;
    L_C109B38:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C109B3A;
    L_C109A58:;
    *(unsigned int *)(((int)stk + 8)) = ((*(short *)(((((v0_9 + v0_2) * v0_6) + v0_10) + 0x2))) - 192);
    *(unsigned int *)(((int)stk + 16)) = v0_5;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 8))) << 2) + 0xC290B8C);
    *(unsigned int *)(((int)stk + 24)) = (((v0_9 + v0_2) * v0_6) + v0_10);
    *(unsigned int *)(((int)stk + 8)) = (((v0_9 + v0_2) * v0_6) + v0_10);
    L_C109AE2:;
    if (((*(short *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + ((*(int *)(((int)stk + 16))) << 1)))) != -1)) goto L_C109AA0;
    goto L_C109AF0;
    L_C109AA0:;
    *(unsigned int *)(((int)stk + 20)) = (*(short *)(((*(int *)(((int)stk + 24))) + 0x0)));
    v0_11 = *(short *)(((*(int *)(((int)stk + 4))) + (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))));
    *(unsigned int *)(((int)stk + 12)) = v0_11;
    v0_11 = (v0_11);
    if (((*(int *)(((int)stk + 20))) != v0_0)) goto L_C109ABA;
    if ((v0_11 == v0_1)) goto L_C109AC6;
    L_C109ABA:;
    if (((*(int *)(((int)stk + 20))) != v0_1)) goto L_C109AD6;
    if (((*(int *)(((int)stk + 12))) != v0_0)) goto L_C109AD6;
    L_C109AC6:;
    v0_11 = *(int *)(((int)stk + 8));
    v0_4 = (v0_3);
    v0_7 = ((v0_7 + (*(short *)((v0_11 + 0xA)))));
    v0_8 = ((v0_8 + (*(short *)((v0_11 + 0xC)))));
    goto L_C109AF0;
    L_C109AD6:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x2);
    goto L_C109AE2;
    L_C1099A0:;
    v0_11 = *(short *)(((((v0_9 + v0_2) * v0_6) + v0_10) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (v0_11 - 192);
    *(unsigned int *)(((int)stk + 16)) = v0_5;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = (((v0_11 - 192) << 2) + 0xC290B8C);
    *(unsigned int *)(((int)stk + 24)) = ((((v0_9 + v0_2) * v0_6) + v0_10) + 0x2);
    *(unsigned int *)(((int)stk + 8)) = (((v0_9 + v0_2) * v0_6) + v0_10);
    L_C109A1A:;
    if (((*(short *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + ((*(int *)(((int)stk + 16))) << 1)))) != -1)) goto L_C1099DA;
    goto L_C109A28;
    L_C1099DA:;
    v0_11 = *(short *)(((*(int *)(((int)stk + 4))) + (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))));
    *(unsigned int *)(((int)stk + 12)) = v0_11;
    v0_12 = *(short *)(((*(int *)(((int)stk + 24))) + 0x0));
    *(unsigned int *)(((int)stk + 20)) = v0_12;
    v0_12 = (v0_12);
    if ((v0_11 != v0_0)) goto L_C1099F2;
    if ((v0_12 == v0_1)) goto L_C1099FE;
    L_C1099F2:;
    if (((*(int *)(((int)stk + 12))) != v0_1)) goto L_C109A0E;
    if (((*(int *)(((int)stk + 20))) != v0_0)) goto L_C109A0E;
    L_C1099FE:;
    v0_11 = *(int *)(((int)stk + 8));
    v0_4 = (v0_3);
    v0_7 = ((v0_7 + (*(short *)((v0_11 + 0xA)))));
    v0_8 = ((v0_8 + (*(short *)((v0_11 + 0xC)))));
    goto L_C109A28;
    L_C109A0E:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x2);
    goto L_C109A1A;
    L_C109B50:;
    if ((v0_4 != -1)) goto L_C109B5E;
    v0_11 = (0x87);
    goto L_C109BFA;
}
