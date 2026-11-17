/* game/unsorted: functions 0C11296C-0C112D0C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c17c130(int, int, int);
int FUN_0c11296c(int a4, int a5);
int FUN_0c112bfa(int a4, int a5, int a6, int a7);

int FUN_0c11296c(int a4, int a5)
{
    int stk[3];
    register int t3;
    register int t7;
    register int t13;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t21;
    register int t28;
    register int t31;
    register int t38;
    register int t41;
    register int t49;
    register int t50;
    register int t2;
    register int t4;
    register int t14;

    if (a5 != 0) {
        (((struct oB0_float *)(a4))->v) = 1.0f;
    } else {
        (((struct oB0_float *)(a4))->v) = 0.0f;
    }
    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t4 = t3;
        t4 = (t4 << 2);
        t2 = (*(int *)((((0xC4 + a4) + t4) + 0x0)));
        *(unsigned char *)((t2 + 0x0)) = a5;
        t7 = *(int *)((((0xC4 + a4) + t4) + 0x0));
        *(unsigned short *)((t7 + 0x6)) = ((*(short *)((t7 + 0x6))) | 0x400);
        t3 = (t3 + 0x1);
        if (a5 != 0) {
            t2 = 0xC4;
            t2 = (t2 + a4);
            t2 = (t2 + t4);
            (((struct o14_float *)((*(int *)((t2 + 0x0)))))->v) = 1.0f;
        } else {
            t2 = 0xC4;
            t2 = (t2 + a4);
            t2 = (t2 + t4);
            (((struct o14_float *)((*(int *)((t2 + 0x0)))))->v) = 0.0f;
        }
    }
    *(unsigned int *)(((int)stk + 4)) = (0x2D24 + (0x444 + a4));
    t13 = 0xC0;
    t15 = (0x2D24 + (0x444 + a4));
    t16 = 0x0;
    t17 = 0x0;
    for (;;) {
        t18 = 0x0;
        for (;;) {
            if ((int)t18 >= (int)(*(int *)(((((0x444 + a4) + 0x4) + (t17 << 2)) + 0x0)))) {
                break;
            }
            t14 = t18;
            *(unsigned int *)(((int)stk + 0)) = (((((t18 << 2) << 1) + t14) << 2) << 2);
            *(unsigned char *)((((((0x444 + a4) + 0x24) + (t17 * 0x10E0)) + (((((t18 << 2) << 1) + t14) << 2) << 2)) + 0x0)) = a5;
            t21 = *(int *)(((int)stk + 0));
            t13 = (*(short *)((((((0x444 + a4) + 0x24) + (t17 * 0x10E0)) + t21) + 0x6)));
            t13 = (t13 | 0x400);
            *(unsigned short *)((((((0x444 + a4) + 0x24) + (t17 * 0x10E0)) + t21) + 0x6)) = t13;
            if (a5 != 0) {
                t14 = t18;
                t13 = 0x14;
                *(float *)((((((0x444 + a4) + 0x24) + (t17 * 0x10E0)) + (((((t18 << 2) << 1) + t14) << 2) << 2)) + t13)) = 1.0f;
            } else {
                t14 = t18;
                t13 = 0x14;
                *(float *)((((((0x444 + a4) + 0x24) + (t17 * 0x10E0)) + (((((t18 << 2) << 1) + t14) << 2) << 2)) + t13)) = 0.0f;
            }
            t18 = (t18 + 0x1);
        }
        t28 = 0x0;
        for (;;) {
            if ((int)t28 >= (int)(*(int *)(((((0x444 + a4) + 0xC) + (t17 << 2)) + 0x0)))) {
                break;
            }
            t14 = t28;
            *(unsigned int *)(((int)stk + 0)) = (((((t28 << 2) << 1) + t14) << 2) << 2);
            *(unsigned char *)(((((0x21E4 + (0x444 + a4)) + (t17 * 0x2D0)) + (((((t28 << 2) << 1) + t14) << 2) << 2)) + 0x0)) = a5;
            t31 = *(int *)(((int)stk + 0));
            t13 = (*(short *)(((((0x21E4 + (0x444 + a4)) + (t17 * 0x2D0)) + t31) + 0x6)));
            t13 = (t13 | 0x400);
            *(unsigned short *)(((((0x21E4 + (0x444 + a4)) + (t17 * 0x2D0)) + t31) + 0x6)) = t13;
            if (a5 != 0) {
                t14 = t28;
                t13 = 0x14;
                *(float *)(((((0x21E4 + (0x444 + a4)) + (t17 * 0x2D0)) + (((((t28 << 2) << 1) + t14) << 2) << 2)) + t13)) = 1.0f;
            } else {
                t14 = t28;
                t13 = 0x14;
                *(float *)(((((0x21E4 + (0x444 + a4)) + (t17 * 0x2D0)) + (((((t28 << 2) << 1) + t14) << 2) << 2)) + t13)) = 0.0f;
            }
            t28 = (t28 + 0x1);
        }
        t38 = 0x0;
        for (;;) {
            if ((int)t38 >= (int)(*(int *)(((((0x444 + a4) + 0x14) + (t17 << 2)) + 0x0)))) {
                break;
            }
            t14 = t38;
            *(unsigned int *)(((int)stk + 0)) = (((((t38 << 2) << 1) + t14) << 2) << 2);
            *(unsigned char *)(((((0x2784 + (0x444 + a4)) + (t17 * 0x2D0)) + (((((t38 << 2) << 1) + t14) << 2) << 2)) + 0x0)) = a5;
            t41 = *(int *)(((int)stk + 0));
            t13 = (*(short *)(((((0x2784 + (0x444 + a4)) + (t17 * 0x2D0)) + t41) + 0x6)));
            t13 = (t13 | 0x400);
            *(unsigned short *)(((((0x2784 + (0x444 + a4)) + (t17 * 0x2D0)) + t41) + 0x6)) = t13;
            if (a5 != 0) {
                t14 = t38;
                t13 = 0x14;
                *(float *)(((((0x2784 + (0x444 + a4)) + (t17 * 0x2D0)) + (((((t38 << 2) << 1) + t14) << 2) << 2)) + t13)) = 1.0f;
            } else {
                t14 = t38;
                t13 = 0x14;
                *(float *)(((((0x2784 + (0x444 + a4)) + (t17 * 0x2D0)) + (((((t38 << 2) << 1) + t14) << 2) << 2)) + t13)) = 0.0f;
            }
            t38 = (t38 + 0x1);
        }
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((int)stk + 0)) = t15;
        t49 = 0x0;
        t50 = (t17 * 0x2D0);
        for (;;) {
            if ((int)t49 >= (int)(*(int *)(((((0x444 + a4) + 0x1C) + (t17 << 2)) + 0x0)))) {
                break;
            }
            t50 = t49;
            t50 = (t50 << 2);
            t50 = (t50 << 1);
            t50 = (t50 + t49);
            t50 = (t50 << 2);
            t50 = (t50 << 2);
            *(unsigned char *)(((((0x2D24 + (0x444 + a4)) + t16) + t50) + 0x0)) = a5;
            t13 = (*(short *)(((((0x2D24 + (0x444 + a4)) + t16) + t50) + 0x6)));
            t13 = (t13 | 0x400);
            *(unsigned short *)(((((0x2D24 + (0x444 + a4)) + t16) + t50) + 0x6)) = t13;
            t49 = (t49 + 0x1);
            if (a5 != 0) {
                t13 = 0x14;
                *(float *)((((*(int *)(((int)stk + 8))) + t50) + t13)) = 1.0f;
            } else {
                t13 = 0x14;
                *(float *)((((*(int *)(((int)stk + 0))) + t50) + t13)) = 0.0f;
            }
        }
        t17 = (t17 + 0x1);
        t15 = (t15 + 0x2D0);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x2D0);
        t16 = (t16 + 0x2D0);
        if ((int)t17 < (int)0x2) continue;
        break;
    }
    return t13;
}

int FUN_0c112bfa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 99) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
                FUN_0c058a6e((0xB0 + a4), 0xC2914C8, 0xC2914D8, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x61F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0x3, (*(int *)0xC4B410C));
        t0 = 0xC2914E8;
        if ((*(signed char *)((a4 + 0x2))) == 1) {
            t0 = 0xC2914F4;
        }
        FUN_0c17c130((((((struct oC4_int *)(a4))->v)) + 0x6C), 0xC2A0C78, t0);
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
        FUN_0c058a6e((0xB0 + a4), 0xC2914D8, 0xC2914C8, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
        t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}
