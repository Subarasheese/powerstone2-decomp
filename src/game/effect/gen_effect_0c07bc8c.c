/* game/effect: functions 0C07BC8C-0C07C496, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o421_uchar { char p[0x421]; unsigned char v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
int FUN_0c01e99c(void);
int FUN_0c064f80(int);
int FUN_0c07bdd0(int, int);
int FUN_0c07bf00(int, int);
int ADXSJD_GetCof(int);
int FUN_0c0f414e(int, int, int, int);
int FUN_0c0f4202(int, int, int);
int pdVibMxStop(int);
int FUN_0c07bc8c(int a4);
int FUN_0c07bcc2(int a4, int a5);
int FUN_0c07c108(int a4);
int FUN_0c07c19c(int a4);
int FUN_0c07c1ca(int a4);
int FUN_0c07c1f8(int a4);
int FUN_0c07c23e(void);
int FUN_0c07c25a(int a4, int a5);
int FUN_0c07c364(int a4);
int FUN_0c07c436(void);

int FUN_0c07bc8c(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        if ((*(signed char *)((a4 + 0x3714))) != 0) {
            if ((*(signed char *)(((((((*(signed char *)((a4 + 0x420))) == 2)) ? 1 : 0) + (0xC5429D0 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0xE))) + 0xC))) == 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c07bcc2(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    if ((unsigned char)(*(signed char *)0xC541F3D) == 2) {
        if (((*(signed char *)((a4 + 0x421))) & 0x2) == 0) {
            t0 = 0x63;
            if (((*(signed char *)((a4 + 0x422))) & 0x2) != 0) {
                t0 = (*(int *)((0x4 + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593D4))));
            }
            t1 = t0;
        } else {
            t1 = (*(int *)((0x0 + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593D4))));
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x1));
        if (((signed char)t1 != 0) && ((signed char)t1 != 2)) {
            t1 = (ADXSJD_GetCof(0x7));
            t0 = 0x8;
        } else {
            t1 = (ADXSJD_GetCof(0x1));
            t0 = 0x2;
        }
        t3 = ADXSJD_GetCof(t0);
        if (((*(int *)((t1 + 0x0))) & 0x100) != 0) {
            (((struct o421_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x421))) | 0x2);
        }
        if ((0x100 & (*(int *)((t3 + 0x0)))) != 0) {
            (((struct o422_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x422))) | 0x2);
        }
        if (((*(signed char *)((a4 + 0x421))) & 0x2) == 0) {
            t1 = 0x63;
            if (((*(signed char *)((a4 + 0x422))) & 0x2) != 0) {
                t0 = FUN_0c01e99c();
                if ((signed char)t0 == 0) {
                    t0 = *(signed char *)((a4 + 0x1));
                    if ((signed char)t0 != 0) {
                        t3 = 0x63;
                        if ((signed char)t0 == 1) {
                            t3 = (*(int *)((0x4 + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593F4))));
                        }
                        t0 = t3;
                    } else {
                        t0 = (*(int *)((0x4 + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593F4))));
                    }
                    t3 = t0;
                } else {
                    t0 = *(signed char *)((a4 + 0x1));
                    t4 = 0x63;
                    if ((t0 == 2) || (t0 == 3)) {
                        t4 = (*(int *)((0x4 + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593F4))));
                    }
                    t3 = t4;
                }
                t1 = t3;
            }
            t0 = t1;
        } else {
            t1 = FUN_0c01e99c();
            if ((signed char)t1 == 0) {
                t1 = *(signed char *)((a4 + 0x1));
                if ((signed char)t1 != 0) {
                    t3 = 0x63;
                    if ((signed char)t1 == 1) {
                        t3 = (*(int *)((0x0 + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593F4))));
                    }
                    t1 = t3;
                } else {
                    t1 = (*(int *)((0x0 + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593F4))));
                }
                t3 = t1;
            } else {
                t1 = *(signed char *)((a4 + 0x1));
                t4 = 0x63;
                if ((t1 == 2) || (t1 == 3)) {
                    t4 = (*(int *)((0x0 + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593F4))));
                }
                t3 = t4;
            }
            t0 = t3;
        }
    }
    return t0;
}

int FUN_0c07c108(int a4)
{
    int stk[4];
    register int t3;
    register int t10;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)0xC1C5DA6);
    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)0xC1C5DA7);
    t3 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x1));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((t3 << 2) << 1) + 0xC2593D8)));
    *(unsigned char *)(((((t3 << 1) + t3) << 2) + 0xC471AA0)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x0)) = 0xFF;
    FUN_0c0f414e((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x8), 0x1);
    t10 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x1));
    *(unsigned short *)(((0xC471A9C + (((t10 << 1) + t10) << 2)) + 0x0)) = 0x2;
    return (((t10 << 1) + t10) << 2);
}

int FUN_0c07c19c(int a4)
{
    register int t0;
    register int t1;

    t0 = 0xC532498;
    for (;;) {
        t1 = FUN_0c07bdd0(t0, a4);
        t0 = (t0 + 0x3938);
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t1;
}

int FUN_0c07c1ca(int a4)
{
    register int t0;
    register int t1;

    t0 = 0xC532498;
    for (;;) {
        t1 = FUN_0c07bf00(t0, a4);
        t0 = (t0 + 0x3938);
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t1;
}

int FUN_0c07c1f8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = 0xC532498;
    t1 = 0xC532498;
    for (;;) {
        t2 = FUN_0c064f80(t1);
        t4 = t2;
        if (t2 != 0) {
            t4 = (FUN_0c07bdd0(t0, a4));
        }
        t1 = (t1 + 0x3938);
        t0 = (t0 + 0x3938);
        if ((unsigned int)t1 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t4;
}

int FUN_0c07c23e(void)
{
    register int t0;

    t0 = 0xC471A9C;
    for (;;) {
        *(unsigned short *)((t0 + 0x2)) = 0x0;
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0xC);
        if ((unsigned int)t0 >= (unsigned int)0xC471ACC) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c07c25a(int a4, int a5)
{

    register int R0;
    register int R2;
    register int R3;
    register int R6;
    register int R9;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = a5;
    v0_1 = (0xC540978);
    v0_2 = (0xC532498);
    v0_5 = (0xC532498);
    L_C07C340:;
    if (((unsigned int)v0_2 < (unsigned int)v0_1)) goto L_C07C284;
    return R0;
    L_C07C284:;
    v0_5 = FUN_0c07bcc2(v0_2, v0_0);
    R0 = (v0_5);
    v0_3 = (v0_5);
    v0_4 = (v0_2);
    if ((v0_5 == 99)) goto L_C07C33C;
    v0_6 = (FUN_0c07bc8c(v0_4)) != 0;
    v0_5 = (0xC471A9C);
    if (v0_6) goto L_C07C30A;
    v0_6 = *(signed char *)((v0_4 + 0x1));
    if (((*(short *)((((((v0_6 << 1) + v0_6) << 2) + v0_5) + 0x0))) == 0)) goto L_C07C2DC;
    v0_6 = *(signed char *)((v0_4 + 0x1));
    v0_7 = *(short *)((((((v0_6 << 1) + v0_6) << 2) + v0_5) + 0x0));
    *(unsigned short *)((((((v0_6 << 1) + v0_6) << 2) + v0_5) + 0x0)) = (v0_7 - 1);
    if (((short)(v0_7 - 1) != 0)) goto L_C07C2DC;
    v0_6 = *(signed char *)((v0_4 + 0x1));
    FUN_0c0f4202(v0_3, ((v0_5 + (((v0_6 << 1) + v0_6) << 2)) + 0x4), 0x1);
    L_C07C2DC:;
    v0_6 = *(signed char *)((v0_4 + 0x1));
    v0_6 = *(short *)((((((v0_6 << 1) + v0_6) << 2) + v0_5) + 0x2));
    R0 = (v0_6);
    if ((v0_6 == 0)) goto L_C07C33C;
    v0_4 = *(signed char *)((v0_4 + 0x1));
    v0_6 = *(short *)(((v0_5 + (((v0_4 << 1) + v0_4) << 2)) + 0x2));
    *(unsigned short *)(((v0_5 + (((v0_4 << 1) + v0_4) << 2)) + 0x2)) = (v0_6 - 1);
    R0 = ((short)(v0_6 - 1));
    if (((short)(v0_6 - 1) == 0)) goto L_C07C336;
    L_C07C33C:;
    v0_2 = ((v0_2 + 0x3938));
    v0_5 = (0x3938);
    goto L_C07C340;
    L_C07C336:;
    R0 = ((pdVibMxStop(v0_3)));
    v0_4 = (0xC2B3FD8);
    goto L_C07C33C;
    L_C07C30A:;
    v0_6 = *(signed char *)((v0_4 + 0x1));
    v0_6 = *(short *)((((((v0_6 << 1) + v0_6) << 2) + v0_5) + 0x2));
    R0 = (v0_6);
    v0_5 = (v0_5);
    if ((v0_6 == 0)) goto L_C07C33C;
    v0_4 = *(signed char *)((v0_4 + 0x1));
    v0_6 = *(short *)(((v0_5 + (((v0_4 << 1) + v0_4) << 2)) + 0x2));
    *(unsigned short *)(((v0_5 + (((v0_4 << 1) + v0_4) << 2)) + 0x2)) = (v0_6 - 1);
    R0 = ((short)(v0_6 - 1));
    v0_5 = ((v0_5 + (((v0_4 << 1) + v0_4) << 2)));
    if (((short)(v0_6 - 1) != 0)) goto L_C07C33C;
    goto L_C07C336;
}

int FUN_0c07c364(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(int *)((((t0 << 2) << 1) + 0xC2593D8));
    if ((*(short *)((((((t0 << 1) + t0) << 2) + 0xC471A9C) + 0x0))) != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t2 = *(short *)(((0xC471A9C + (((t0 << 1) + t0) << 2)) + 0x0));
        *(unsigned short *)(((0xC471A9C + (((t0 << 1) + t0) << 2)) + 0x0)) = (t2 - 1);
        if ((short)(t2 - 1) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c0f4202(t1, ((0xC471A9C + (((t0 << 1) + t0) << 2)) + 0x4), 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x1));
    t2 = *(short *)((((((t0 << 1) + t0) << 2) + 0xC471A9C) + 0x2));
    if (t2 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t3 = *(short *)(((0xC471A9C + (((t0 << 1) + t0) << 2)) + 0x2));
        *(unsigned short *)(((0xC471A9C + (((t0 << 1) + t0) << 2)) + 0x2)) = (t3 - 1);
        if ((short)(t3 - 1) == 0) {
            return pdVibMxStop(t1);
        }
        return (short)(t3 - 1);
    }
    return t2;
}

int FUN_0c07c436(void)
{
    pdVibMxStop(0x1);
    pdVibMxStop(0x2);
    pdVibMxStop(0x7);
    pdVibMxStop(0x8);
    pdVibMxStop(0xD);
    pdVibMxStop(0xE);
    pdVibMxStop(0x13);
    return (pdVibMxStop(0x14));
}
