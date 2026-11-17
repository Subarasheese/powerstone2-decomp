/* game/player: functions 0C0D558C-0C0D5830, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0bbf58(int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d5c10(int, int);
float math_cos_angle16(int);
extern int FUN_0c187798();
int FUN_0c0d558c(int a4);
int FUN_0c0d55a2(int a4);
int FUN_0c0d55b4(int a4, int a5, int a6);

int FUN_0c0d558c(int a4)
{
    (((struct o132_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0xFFFFFF0F;
    return 0x12C;
}

int FUN_0c0d55a2(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0d55b4(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t4;
    register int t19;
    register int t22;
    register int t23;
    register float t25;
    register float u26;
    register int t28;
    register int t29;
    register int t32;
    register int t34;
    register int t35;
    register int t38;
    register int t39;
    register int t45;
    register int t52;
    register int t62;
    register int t65;
    register int t79;
    register int t82;
    register int t83;
    register float t85;
    register float u86;
    register int t88;
    register int t89;
    register int t92;
    register int t94;
    register int t95;
    register int t98;
    register int t99;
    register int t49;
    register int t50;
    register int t51;
    register int t58;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 == 3) {
                        if ((int)((((struct o80_int *)(((((struct oC8_int *)(a4))->v))))->v)) < (int)0x1BBB) {
                            t4 = (((struct oC8_int *)(a4))->v);
                            (((struct o80_uint *)(t4))->v) = (((((struct o80_int *)(t4))->v)) + 0xB6);
                        }
                        if ((*(short *)((a4 + 0x1C))) == 60) {
                            FUN_0c0d5c10(a4, ((*(short *)((a4 + 0x1C))) - 3));
                        }
                        t19 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t19 - 1);
                        if ((int)(short)(t19 - 1) <= 0) {
                            (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x1BBB;
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                            *(unsigned short *)((a4 + 0x1C)) = 0x78;
                            return FUN_0c0d558c(a4);
                        }
                        return (short)(t19 - 1);
                    }
                    return t1;
                }
                (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0xFFFFE556;
                t22 = (((struct oC8_int *)(a4))->v);
                *(int *)((int)stk + 0) = (0x80 + t22);
                t23 = *(short *)(((0x1C + a4) + 0x0));
                *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = t23;
                t25 = math_cos_angle16((int)(((float)((*(short *)(((int)stk + 4))) << 16) / 180.0f) * 8.0f));
                u26 = (((float)t23 / 180.0f) * t25);
                (((struct o80_uint *)(t22))->v) = (((((struct o80_int *)(t22))->v)) - (int)(u26 * 6826.0f));
                t28 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t28 - 1);
                t29 = (short)(t28 - 1);
                if ((int)(short)(t28 - 1) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                    *(unsigned short *)((a4 + 0x1C)) = 0x78;
                    t29 = 0x78;
                }
                return t29;
            }
            t32 = (((struct oC8_int *)(a4))->v);
            (((struct o80_uint *)(t32))->v) = (((((struct o80_int *)(t32))->v)) - 2075);
            t34 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t34 - 1);
            t35 = (short)(t34 - 1);
            if ((int)(short)(t34 - 1) > 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x2;
                *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                t35 = 0xB4;
            }
            return t35;
        }
        t38 = FUN_0c0d55a2(a4);
        if (t38 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o12C_ushort *)(a4))->v) = 0x0;
            return thunk_FUN_0c05abb2(0x4E, (a4 + 0x28));
        }
        t39 = ((int (*)(void))(FUN_0c187798))();
        return (FUN_0c0bbf58(a4));
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x1BBB;
    *(volatile signed char *)((a4 + 0x2));
    t45 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    FUN_0c0d558c(a4);
    FUN_0c0d5c10(a4, 0x0);
    FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
    t52 = 0x0;
    for (;;) {
        if ((int)t52 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t51 = t52;
        t51 = (t51 << 2);
        if (t52 != 1) {
            t50 = 0xC4;
            t50 = (t50 + a4);
            t50 = (t50 + t51);
            t50 = (*(int *)((t50 + 0x0)));
            FUN_0c0d04c4((t50 + 0x6), (t50 + 0x78));
        } else {
            t49 = 0xC4;
            t49 = (t49 + a4);
            t51 = (t51 + t49);
            *(unsigned short *)(((*(int *)((t51 + 0x0))) + 0x6)) = 0x9;
            t58 = t49;
        }
        t52 = (t52 + 0x1);
        t49 = t58;
    }
    t62 = *(signed char *)((a4 + 0x15));
    if (t62 != 0) {
        if (t62 != 1) {
            if (t62 != 2) {
                if (t62 == 3) {
                    if ((int)((((struct o80_int *)(((((struct oC8_int *)(a4))->v))))->v)) < (int)0x1BBB) {
                        t65 = (((struct oC8_int *)(a4))->v);
                        (((struct o80_uint *)(t65))->v) = (((((struct o80_int *)(t65))->v)) + 0xB6);
                    }
                    if ((*(short *)((a4 + 0x1C))) == 60) {
                        FUN_0c0d5c10(a4, ((*(short *)((a4 + 0x1C))) - 3));
                    }
                    t79 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t79 - 1);
                    if ((int)(short)(t79 - 1) <= 0) {
                        (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x1BBB;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0x78;
                        return FUN_0c0d558c(a4);
                    }
                    return (short)(t79 - 1);
                }
                return t62;
            }
            (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0xFFFFE556;
            t82 = (((struct oC8_int *)(a4))->v);
            *(int *)((int)stk + 0) = (0x80 + t82);
            t83 = *(short *)(((0x1C + a4) + 0x0));
            *(unsigned short *)(((((int)stk + 0) + 0x4) + 0x0)) = t83;
            t85 = math_cos_angle16((int)(((float)((*(short *)(((int)stk + 4))) << 16) / 180.0f) * 8.0f));
            u86 = (((float)t83 / 180.0f) * t85);
            (((struct o80_uint *)(t82))->v) = (((((struct o80_int *)(t82))->v)) - (int)(u86 * 6826.0f));
            t88 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t88 - 1);
            t89 = (short)(t88 - 1);
            if ((int)(short)(t88 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = 0x3;
                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                t89 = 0x78;
            }
            return t89;
        }
        t92 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t92))->v) = (((((struct o80_int *)(t92))->v)) - 2075);
        t94 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t94 - 1);
        t95 = (short)(t94 - 1);
        if ((int)(short)(t94 - 1) > 0) {
        } else {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            *(unsigned short *)((a4 + 0x1C)) = 0xB4;
            t95 = 0xB4;
        }
        return t95;
    }
    t98 = FUN_0c0d55a2(a4);
    if (t98 != 0) {
        (((struct o15_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        return thunk_FUN_0c05abb2(0x4E, (a4 + 0x28));
    }
    t99 = ((int (*)(void))(FUN_0c187798))();
    return (FUN_0c0bbf58(a4));
}
