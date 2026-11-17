/* game/menu/select: functions 0C10CAEC-0C10E7C4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c10caec(int);
int FUN_0c10d2b4(int, int);
int FUN_0c1171f0(int);
extern int FUN_0c18778c();
int FUN_0c187798(int, int, int);
int FUN_0c10d37a(int a4, int a5, int a6, int a7);
int FUN_0c10d458(int a4, int a5, int a6, int a7);

int FUN_0c10d37a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 5) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
    }
    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)(unsigned char)(*(signed char *)(((0xC473958 + t0) + 0x0))) > (int)0x5) {
            t1 = (t1 + ((unsigned char)(*(signed char *)(((0xC473958 + t2) + 0x0))) - 5));
        }
        t0 = (t0 + 0x3);
        t2 = (t2 + 0x3);
        if ((unsigned int)t0 >= (unsigned int)0x18) {
            break;
        }
    }
    *(unsigned int *)0xC473974 = t1;
    return FUN_0c10d2b4(a4, t1);
}

int FUN_0c10d458(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t5;
    register int t6;
    register int t9;
    register int t33;
    register int t34;
    register int t51;
    register int t53;
    register int t56;
    register int t18;
    register int t42;
    register int t43;
    register int t44;
    register int t65;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 5) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t5 = *(signed char *)((a4 + 0x14));
    if (t5 != 0) {
        if (t5 == 1) {
            t6 = 0x0;
            for (;;) {
                if ((*(int *)0xC473978) == t6) {
                    t9 = FUN_0c10caec((*(int *)((a4 + 0x10))));
                    if (t9 != 0) {
                        *(volatile int *)((((0xC4 + a4) + (t6 << 2)) + 0xC));
                        t18 = (((int (*)(void))(FUN_0c18778c))());
                    } else {
                        *(volatile int *)((((0xC4 + a4) + (t6 << 2)) + 0xC));
                        t18 = (((int (*)(void))(FUN_0c18778c))());
                    }
                } else {
                    *(volatile int *)((((0xC4 + a4) + (t6 << 2)) + 0xC));
                    t18 = (((int (*)(int))(FUN_0c18778c))(a4));
                }
                t6 = (t6 + 0x1);
                if ((int)t6 >= (int)0x8) {
                    break;
                }
            }
            return t18;
        }
        if (t5 == 99) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t5;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c187798(a4, a5, a6);
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x9, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x9, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x2, 0x9, (*(int *)0xC4B410C));
    *(unsigned int *)(((int)stk + 16)) = 0xC290E88;
    *(unsigned int *)(((int)stk + 12)) = 0xC290EA0;
    t33 = 0x0;
    for (;;) {
        t34 = *(int *)0xC4B410C;
        if ((int)t33 < (int)0x4) {
            *(unsigned int *)(((int)stk + 8)) = (t33 << 2);
            FUN_0c03744a((*(int *)((((t33 << 2) + (0xC4 + a4)) + 0xC))), 0x9, 0x9, t34);
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x3;
            t42 = 0xC290E94;
            t43 = (*(int *)(((int)stk + 16)));
            t44 = t33;
        } else {
            *(unsigned int *)(((int)stk + 8)) = (t33 << 2);
            FUN_0c03744a((*(int *)((((t33 << 2) + (0xC4 + a4)) + 0xC))), 0xA, 0x9, t34);
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x3;
            t42 = 0xC290EAC;
            t43 = (*(int *)(((int)stk + 12)));
            t44 = (t33 - 4);
        }
        FUN_0c0588bc(((*(int *)((((0xC4 + a4) + (*(int *)(((int)stk + 8)))) + 0xC))) + 0x6C), t42, t43, t44, 0x3, 0x0);
        *(unsigned short *)(((*(int *)((((0xC4 + a4) + (t33 << 2)) + 0xC))) + 0x6)) = 0x21F;
        *(volatile int *)((((0xC4 + a4) + (t33 << 2)) + 0xC));
        t51 = ((int (*)(int))(FUN_0c18778c))((t33 << 2));
        t33 = (t33 + 0x1);
        if ((int)t33 >= (int)0x8) {
            break;
        }
    }
    t53 = 0x0;
    for (;;) {
        if ((*(int *)0xC473978) == t53) {
            t56 = FUN_0c10caec((*(int *)((a4 + 0x10))));
            if (t56 != 0) {
                *(volatile int *)((((0xC4 + a4) + (t53 << 2)) + 0xC));
                t65 = (((int (*)(void))(FUN_0c18778c))());
            } else {
                *(volatile int *)((((0xC4 + a4) + (t53 << 2)) + 0xC));
                t65 = (((int (*)(void))(FUN_0c18778c))());
            }
        } else {
            *(volatile int *)((((0xC4 + a4) + (t53 << 2)) + 0xC));
            t65 = (((int (*)(void))(FUN_0c18778c))());
        }
        t53 = (t53 + 0x1);
        if ((int)t53 >= (int)0x8) {
            break;
        }
    }
    return t65;
}
