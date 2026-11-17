/* game/unsorted: functions 0C0EFEA4-0C0F08FE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o428_uchar { char p[0x428]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4770();
extern int FUN_0c0c4b76();
extern int FUN_0c0c4bcc();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
int FUN_0c0cf440(int, int, int);
int FUN_0c0efb30(int, int);
int FUN_0c0efee0(int);
int FUN_0c0f02aa(int);
int FUN_0c0f02c4(int);
int FUN_0c0f085c(int, int);
int FUN_0c179ac0(void);
extern int FUN_0c187798();
int FUN_0c0f0370(int a4, int a5, int a6, int a7);

int FUN_0c0f0370(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t3;
    register int t5;
    register int t8;
    register int t10;
    register int t11;
    register int t17;
    register int t19;
    register int t20;
    register int t23;
    register int t50;
    register int t51;
    register int t59;
    register int t61;
    register int t63;
    register int t66;
    register int t68;
    register int t69;
    register int t75;
    register int t77;
    register int t78;
    register int t81;
    register int t46;
    register int t39;
    register int t57;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)((a4 + 0x41D));
            if ((unsigned int)t1 >= (unsigned int)0xC) {
                return t1;
            }
            switch ((t1 << 1)) {
                case 0:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4770))(a4, a5, a6);
                }
                case 2:
                {
                    return FUN_0c0efee0(a4);
                }
                case 4:
                {
                    t3 = ((int (*)(int, int, int))(FUN_0c0c4b76))(a4, a5, a6);
                    FUN_0c0f02c4(a4);
                    t5 = FUN_0c0f02aa(a4);
                    t8 = t5;
                    if (t5 == 0) {
                    } else {
                        t8 = (FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1)))));
                    }
                    return t8;
                }
                case 6:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4bcc))(a4, a5, a6);
                }
                case 8:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
                }
                case 10:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
                }
                case 12:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c52c4))(a4, a5, a6);
                }
                case 14:
                {
                    return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
                }
                case 16:
                {
                    t10 = ((int (*)(int, int, int, int))(FUN_0c0c8c36))(a4, a5, a6, a7);
                    t11 = *(signed char *)((a4 + 0x41D));
                    if (t11 == 10) {
                        (((struct o428_uchar *)(a4))->v) = 0x1;
                    }
                    return t11;
                }
                case 18:
                case 20:
                {
                    FUN_0c0f085c((a4 + 0x28), 0x0);
                    FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
                    FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
                    t17 = thunk_FUN_0c05abb2(0x31, (a4 + 0x28));
                    if ((*(signed char *)(((0x428 + a4) + 0x0))) != 0) {
                        t19 = FUN_0c179ac0();
                        t20 = ((~(((~t19) + 0x1) & 0x1)) + 0x1);
                        if ((int)t19 >= 0) {
                            t20 = (t19 & 0x1);
                        }
                        if (t20 != 0) {
                            t23 = (int)((int)(FUN_0c179ac0()) % (int)0x3);
                            return FUN_0c0efb30((a4 + 0x28), t23);
                        }
                        return t20;
                    }
                    return t17;
                }
                default:
                {
                    return FUN_0c0c2a80(a4);
                }
            }
        }
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o41C_uchar *)(a4))->v) = 0xC3;
    (((struct o424_uchar *)(a4))->v) = 0xA;
    FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
    (((struct o420_ushort *)(a4))->v) = (*(short *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x1A)));
    (((struct o160_float *)(a4))->v) = (float)(*(short *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)) + 0x1A)));
    (((struct o422_uchar *)(a4))->v) = 0x0;
    (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
    if ((int)(*(signed char *)((a4 + 0x2))) >= (int)0x10) {
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798(0xC1CD27C, 0xF);
        *(unsigned int *)((a4 + 0x38)) = (*(int *)(((t39 + ((((*(signed char *)((a4 + 0x2))) & t46) << 2) << 2)) + 0xC)));
    }
    (((struct o126_uchar *)(a4))->v) = 0x0;
    (((struct oAA_uchar *)(a4))->v) = 0x1;
    (((struct oAB_uchar *)(a4))->v) = 0x4;
    if ((int)(*(signed char *)0xC54098D) >= (int)0xE) {
        return ((int (*)(int, int))(FUN_0c03f346))(a4, t46);
    }
    t50 = FUN_0c179ac0();
    t51 = ((~(((~t50) + 0x1) & 0x1)) + 0x1);
    if ((int)t50 >= 0) {
        t51 = (t50 & 0x1);
    }
    if (t51 != 0) {
        t57 = ((int)((int)(FUN_0c179ac0()) % (int)0xA));
    } else {
        t57 = ((int)((int)(FUN_0c179ac0()) % (int)0x5));
    }
    *(unsigned short *)(((0x428 + a4) + 0x4)) = (((short)t57 * (short)0x3C) + 0x1E0);
    (((struct o428_uchar *)(a4))->v) = 0x0;
    t59 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t59 >= (unsigned int)0xC) {
        return t59;
    }
    switch ((t59 << 1)) {
        case 0:
        {
            return ((int (*)(int))(FUN_0c0c4770))(a4);
        }
        case 2:
        {
            return FUN_0c0efee0(a4);
        }
        case 4:
        {
            t61 = ((int (*)(int, int, int, int, int, int))(FUN_0c0c4b76))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            FUN_0c0f02c4(a4);
            t63 = FUN_0c0f02aa(a4);
            t66 = t63;
            if (t63 == 0) {
            } else {
                t66 = (FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1)))));
            }
            return t66;
        }
        case 6:
        {
            return ((int (*)(int))(FUN_0c0c4bcc))(a4);
        }
        case 8:
        {
            return ((int (*)(int))(FUN_0c0c4c1c))(a4);
        }
        case 10:
        {
            return ((int (*)(int))(FUN_0c0c5024))(a4);
        }
        case 12:
        {
            return ((int (*)(int))(FUN_0c0c52c4))(a4);
        }
        case 14:
        {
            return ((int (*)(int))(FUN_0c0c8c08))(a4);
        }
        case 16:
        {
            t68 = ((int (*)(int))(FUN_0c0c8c36))(a4);
            t69 = *(signed char *)((a4 + 0x41D));
            if (t69 == 10) {
                (((struct o428_uchar *)(a4))->v) = 0x1;
            }
            return t69;
        }
        case 18:
        case 20:
        {
            FUN_0c0f085c((a4 + 0x28), 0x0);
            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
            FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
            t75 = thunk_FUN_0c05abb2(0x31, (a4 + 0x28));
            if ((*(signed char *)(((0x428 + a4) + 0x0))) != 0) {
                t77 = FUN_0c179ac0();
                t78 = ((~(((~t77) + 0x1) & 0x1)) + 0x1);
                if ((int)t77 >= 0) {
                    t78 = (t77 & 0x1);
                }
                if (t78 != 0) {
                    t81 = (int)((int)(FUN_0c179ac0()) % (int)0x3);
                    return FUN_0c0efb30((a4 + 0x28), t81);
                }
                return t78;
            }
            return t75;
        }
        default:
        {
            return FUN_0c0c2a80(a4);
        }
    }
}
