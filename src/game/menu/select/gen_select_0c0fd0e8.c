/* game/menu/select: functions 0C0FD0E8-0C0FE0E4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c059ce8(int);
int FUN_0c05aab6(int, int);
int FUN_0c05ada4(int);
int FUN_0c05adb4(int);
int FUN_0c05adc4(int);
int FUN_0c05add4(int);
int FUN_0c05f22c(int);
int FUN_0c05f254(int);
int FUN_0c0fb9a6(void);
int FUN_0c0fc90c(int);
int FUN_0c0fc924(int, int);
int FUN_0c0fc990(int, int);
int FUN_0c104f7c(int, int);
int FUN_0c105384(int);
int FUN_0c1171f0(int);
int FUN_0c187798(int);
int FUN_0c0fd0e8(int a4);
int FUN_0c0fd112(int a4, int a5, int a6);
int FUN_0c0fd296(int a4);
int FUN_0c0fd334(int a4);
int FUN_0c0fd368(int a4, int a5, int a6);
int FUN_0c0fd5b8(int a4);
int FUN_0c0fd692(int a4);
int FUN_0c0fd938(int a4);
int FUN_0c0fd962(int a4);
int FUN_0c0fddea(int a4);
int FUN_0c0fe000(int a4);
int FUN_0c0fe02a(int a4);
int FUN_0c0fe0b2(void);

int FUN_0c0fd0e8(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x1, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FCD90;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fd112(int a4, int a5, int a6)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t10;
    register int t11;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register int t35;
    register int t36;
    register int t50;
    register int t1;
    register int t26;

    if (a6 == 0) {
        t2 = 0x2;
        t3 = 0x0;
        t4 = 0x2;
        t5 = 0xA;
        t6 = a5;
        for (;;) {
            if ((int)t4 <= 0) {
                break;
            }
            t1 = t6;
            t50 = t5;
            t50 = ((int)((int)t1 / (int)t50));
            t1 = t6;
            *(unsigned int *)(((int)stk + 0)) = t50;
            t50 = t5;
            t50 = ((int)((int)t1 % (int)t50));
            t6 = t50;
            t50 = 0xA;
            t1 = t5;
            t50 = ((int)((int)t1 / (int)t50));
            t2 = t4;
            t2 = (t2 - 1);
            t2 = (t2 << 2);
            t10 = *(int *)(((int)stk + 0));
            t1 = 0xC03744A;
            t5 = t50;
            t11 = *(int *)0xC4B410C;
            *(unsigned int *)(((int)stk + 4)) = t2;
            t2 = (t2 + (0xC4 + a4));
            t2 = (*(int *)((t2 + 0x0)));
            t50 = (FUN_0c03744a(t2, 0x0, (t10 + 0x28), t11));
            t2 = 0xC4;
            t2 = (t2 + a4);
            t50 = 0xC28EB78;
            t2 = (t2 + (*(int *)(((int)stk + 4))));
            t2 = (*(int *)((t2 + 0x0)));
            t1 = t2;
            t1 = (t1 + 0x6C);
            t50 = 0xC;
            t50 = (FUN_0c187798(t2));
            t1 = (*(int *)(((int)stk + 0)));
            if (t1 == 0) {
                t50 = t3;
                if (t50 != 1) {
                    t50 = t4;
                    
                }
            } else {
                t3 = 0x1;
            }
            t4 = (t4 - 1);
            *(unsigned char *)((t2 + 0x0)) = 0x1;
        }
    } else {
        t27 = 0x2;
        t28 = 0x0;
        t29 = 0x2;
        t30 = 0xA;
        t31 = a5;
        for (;;) {
            if ((int)t29 <= 0) {
                break;
            }
            t26 = t31;
            t50 = t30;
            t50 = ((int)((int)t26 / (int)t50));
            t26 = t31;
            *(unsigned int *)(((int)stk + 0)) = t50;
            t50 = t30;
            t50 = ((int)((int)t26 % (int)t50));
            t31 = t50;
            t50 = 0xA;
            t26 = t30;
            t50 = ((int)((int)t26 / (int)t50));
            t27 = t29;
            t27 = (t27 - 1);
            t27 = (t27 << 2);
            t35 = *(int *)(((int)stk + 0));
            t30 = t50;
            t36 = *(int *)0xC4B410C;
            *(unsigned int *)(((int)stk + 4)) = t27;
            t27 = (t27 + (0xC4 + a4));
            t27 = (*(int *)((t27 + 0x8)));
            t50 = (FUN_0c03744a(t27, 0x0, (t35 + 0x28), t36));
            t27 = 0xC4;
            t27 = (t27 + a4);
            t50 = 0xC28EB90;
            t27 = (t27 + (*(int *)(((int)stk + 4))));
            t27 = (*(int *)((t27 + 0x8)));
            t26 = t27;
            t26 = (t26 + 0x6C);
            t50 = 0xC;
            t50 = (FUN_0c187798(t27));
            t26 = (*(int *)(((int)stk + 0)));
            if (t26 == 0) {
                t50 = t28;
                if (t50 != 1) {
                    t50 = t29;
                    
                }
            } else {
                t28 = 0x1;
            }
            t29 = (t29 - 1);
            *(unsigned char *)((t27 + 0x0)) = 0x1;
        }
    }
    return t50;
}

int FUN_0c0fd296(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
    }
    if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c0fd112(a4, (*(signed char *)(((t1 + 0x41C) + 0x3))), 0x0);
    return FUN_0c0fd112(a4, ((*(signed char *)(((t1 + 0x41C) + 0x1))) + 0x1), 0x1);
}

int FUN_0c0fd334(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x4);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FD296;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c0fd368(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t12;
    register int t13;
    register int t41;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t53;
    register int t54;
    register int t82;
    register int t85;
    register int t86;
    register int t87;
    register int t88;
    register int t94;
    register int t95;
    register int t115;
    register int t74;
    register int t1;
    register int t2;
    register int t42;
    register int t43;
    register int t83;
    register int t84;

    if (a6 != 0) {
        if (a6 != 1) {
            if (a6 == 2) {
                *(unsigned int *)(((int)stk + 0)) = 0x2;
                t0 = a6;
                t3 = 0x2;
                t4 = 0x0;
                t5 = a5;
                t6 = 0xA;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 0))) <= 0) {
                        break;
                    }
                    t1 = t5;
                    t0 = t6;
                    t0 = ((int)((int)t1 / (int)t0));
                    t1 = t5;
                    *(unsigned int *)(((int)stk + 4)) = t0;
                    t0 = t6;
                    t2 = 0xC18760C;
                    t0 = ((int)((int)t1 % (int)t0));
                    t5 = t0;
                    t0 = 0xA;
                    t1 = t6;
                    t0 = ((int)((int)t1 / (int)t0));
                    t3 = (*(int *)(((int)stk + 0)));
                    t2 = 0xC4;
                    t6 = t0;
                    t3 = (t3 + 0x3);
                    t12 = *(int *)(((int)stk + 4));
                    t3 = (t3 << 2);
                    t2 = (t2 + a4);
                    t13 = *(int *)0xC4B410C;
                    *(unsigned int *)(((int)stk + 8)) = t3;
                    t3 = (t3 + t2);
                    t3 = (*(int *)((t3 + 0x0)));
                    t0 = (FUN_0c03744a(t3, 0x0, (t12 + 0x28), t13));
                    t3 = 0xC4;
                    t2 = (*(int *)(((int)stk + 8)));
                    t3 = (t3 + a4);
                    t0 = 0xC28EBA8;
                    t3 = (t3 + t2);
                    t2 = ((*(int *)(((int)stk + 0))) + 0x3);
                    t3 = (*(int *)((t3 + 0x0)));
                    t2 = 0xC187798;
                    t1 = t3;
                    t1 = (t1 + 0x6C);
                    t0 = 0xC;
                    t0 = (FUN_0c187798(t3));
                    t1 = (*(int *)(((int)stk + 4)));
                    if (t1 == 0) {
                        t0 = t4;
                        if (t0 != 1) {
                            t0 = (*(int *)(((int)stk + 0)));
                        }
                    } else {
                        t4 = 0x1;
                    }
                    *(unsigned char *)((t3 + 0x0)) = 0x1;
                    t2 = (*(int *)(((int)stk + 0)));
                    t2 = (t2 - 1);
                    *(unsigned int *)(((int)stk + 0)) = t2;
                }
                t74 = t0;
            } else {
                t74 = a6;
            }
        } else {
            *(unsigned int *)(((int)stk + 0)) = 0x2;
            t41 = a6;
            t44 = 0x2;
            t45 = 0x0;
            t46 = a5;
            t47 = 0xA;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 0))) <= 0) {
                    break;
                }
                t42 = t46;
                t41 = t47;
                t41 = ((int)((int)t42 / (int)t41));
                t42 = t46;
                *(unsigned int *)(((int)stk + 4)) = t41;
                t41 = t47;
                t43 = 0xC18760C;
                t41 = ((int)((int)t42 % (int)t41));
                t46 = t41;
                t41 = 0xA;
                t42 = t47;
                t41 = ((int)((int)t42 / (int)t41));
                t44 = (*(int *)(((int)stk + 0)));
                t43 = 0xC4;
                t47 = t41;
                t44 = (t44 - 1);
                t53 = *(int *)(((int)stk + 4));
                t44 = (t44 << 2);
                t43 = (t43 + a4);
                t54 = *(int *)0xC4B410C;
                *(unsigned int *)(((int)stk + 8)) = t44;
                t44 = (t44 + t43);
                t44 = (*(int *)((t44 + 0x8)));
                t41 = (FUN_0c03744a(t44, 0x0, (t53 + 0x28), t54));
                t44 = 0xC4;
                t43 = (*(int *)(((int)stk + 8)));
                t44 = (t44 + a4);
                t41 = 0xC28EBC0;
                t44 = (t44 + t43);
                t43 = ((*(int *)(((int)stk + 0))) - 1);
                t44 = (*(int *)((t44 + 0x8)));
                t43 = 0xC187798;
                t42 = t44;
                t42 = (t42 + 0x6C);
                t41 = 0xC;
                t41 = (FUN_0c187798(t44));
                t42 = (*(int *)(((int)stk + 4)));
                if (t42 == 0) {
                    t41 = t45;
                    if (t41 != 1) {
                        t41 = (*(int *)(((int)stk + 0)));
                    }
                } else {
                    t45 = 0x1;
                }
                *(unsigned char *)((t44 + 0x0)) = 0x1;
                t43 = (*(int *)(((int)stk + 0)));
                t43 = (t43 - 1);
                *(unsigned int *)(((int)stk + 0)) = t43;
            }
            t74 = t41;
        }
        t115 = t74;
    } else {
        *(unsigned int *)(((int)stk + 0)) = 0x2;
        t82 = a6;
        t85 = 0x2;
        t86 = 0x0;
        t87 = a5;
        t88 = 0xA;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 0))) <= 0) {
                break;
            }
            t83 = t87;
            t82 = t88;
            t82 = ((int)((int)t83 / (int)t82));
            t83 = t87;
            *(unsigned int *)(((int)stk + 4)) = t82;
            t82 = t88;
            t84 = 0xC18760C;
            t82 = ((int)((int)t83 % (int)t82));
            t87 = t82;
            t82 = 0xA;
            t83 = t88;
            t82 = ((int)((int)t83 / (int)t82));
            t85 = (*(int *)(((int)stk + 0)));
            t84 = 0xC4;
            t88 = t82;
            t85 = (t85 - 1);
            t94 = *(int *)(((int)stk + 4));
            t85 = (t85 << 2);
            t84 = (t84 + a4);
            t95 = *(int *)0xC4B410C;
            *(unsigned int *)(((int)stk + 8)) = t85;
            t85 = (t85 + t84);
            t85 = (*(int *)((t85 + 0x0)));
            t82 = (FUN_0c03744a(t85, 0x0, (t94 + 0x28), t95));
            t85 = 0xC4;
            t84 = (*(int *)(((int)stk + 8)));
            t85 = (t85 + a4);
            t82 = 0xC28EBA8;
            t85 = (t85 + t84);
            t84 = ((*(int *)(((int)stk + 0))) - 1);
            t85 = (*(int *)((t85 + 0x0)));
            t84 = 0xC187798;
            t83 = t85;
            t83 = (t83 + 0x6C);
            t82 = 0xC;
            t82 = (FUN_0c187798(t85));
            t83 = (*(int *)(((int)stk + 4)));
            if (t83 == 0) {
                t82 = t86;
                if (t82 != 1) {
                    t82 = (*(int *)(((int)stk + 0)));
                }
            } else {
                t86 = 0x1;
            }
            *(unsigned char *)((t85 + 0x0)) = 0x1;
            t84 = (*(int *)(((int)stk + 0)));
            t84 = (t84 - 1);
            *(unsigned int *)(((int)stk + 0)) = t84;
        }
        t115 = t82;
    }
    return t115;
}

int FUN_0c0fd5b8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        if ((*(signed char *)(((0x41C + t0) + 0x0))) == 1) {
            (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) + 0x1);
        } else {
            (((struct o58_uint *)(a4))->v) = 0x0;
        }
        t1 = FUN_0c05ada4(0x1);
        t2 = (int)((int)t1 / (int)0x64);
        FUN_0c0fd368(a4, ((int)((int)t1 % (int)0x64)), 0x0);
        FUN_0c0fd368(a4, ((int)((int)t2 % (int)0x3C)), 0x1);
        return FUN_0c0fd368(a4, ((int)((int)((int)((int)t2 / (int)0x3C)) % (int)0x3C)), 0x2);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    (((struct o58_uint *)(a4))->v) = 0x0;
    if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    if ((*(signed char *)(((0x41C + t0) + 0x0))) == 1) {
        (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) + 0x1);
    } else {
        (((struct o58_uint *)(a4))->v) = 0x0;
    }
    t0 = FUN_0c05ada4(0x1);
    t1 = (int)((int)t0 / (int)0x64);
    FUN_0c0fd368(a4, ((int)((int)t0 % (int)0x64)), 0x0);
    FUN_0c0fd368(a4, ((int)((int)t1 % (int)0x3C)), 0x1);
    return FUN_0c0fd368(a4, ((int)((int)((int)((int)t1 / (int)0x3C)) % (int)0x3C)), 0x2);
}

int FUN_0c0fd692(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x6);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FD5B8;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c0fd938(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FD6E4;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fd962(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            if ((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) != 0) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                t1 = 0xA8;
            } else {
                t3 = FUN_0c104f7c((*(signed char *)(((0x41C + a4) + 0x1))), ((*(signed char *)(((0x41C + a4) + 0x3))) - 1));
                if (t3 != (*(signed char *)(((0x41C + a4) + 0x1)))) {
                    FUN_0c0fc90c((*(signed char *)(((0x41C + a4) + 0x3))));
                    if ((*(signed char *)(((0x41C + a4) + 0x5))) == 1) {
                        FUN_0c0fc924((*(signed char *)(((0x41C + a4) + 0x3))), t3);
                    }
                    t4 = *(signed char *)(((0x41C + a4) + 0x0));
                    switch (t4) {
                    case 0:
                        *(unsigned char *)(((0x41C + a4) + 0x1)) = t3;
                        break;
                    case 1:
                        (((struct o41C_uchar *)(a4))->v) = 0x1;
                        *(unsigned char *)(((0x41C + a4) + 0x1)) = t3;
                        FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                        break;
                    case 2:
                        *(unsigned char *)(((0x41C + a4) + 0x1)) = t3;
                        (((struct o41C_uchar *)(a4))->v) = 0x2;
                        FUN_0c05add4(0x1);
                        FUN_0c059ce8(0x75);
                        FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                        FUN_0c05adc4(0x1);
                        break;
                    }
                }
                t4 = FUN_0c05f22c(0x100);
                if (t4 != 0) {
                    t4 = *(signed char *)(((0x41C + a4) + 0x0));
                    switch (t4) {
                    case 0:
                        (((struct o41C_uchar *)(a4))->v) = 0x1;
                        *(unsigned char *)(((0x41C + a4) + 0x1)) = t3;
                        FUN_0c0fc90c((*(signed char *)(((0x41C + a4) + 0x3))));
                        if ((*(signed char *)(((0x41C + a4) + 0x5))) == 1) {
                            FUN_0c0fc924((*(signed char *)(((0x41C + a4) + 0x3))), (*(signed char *)(((0x41C + a4) + 0x1))));
                        }
                        FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                        break;
                    case 1:
                        (((struct o41C_uchar *)(a4))->v) = 0x2;
                        FUN_0c05adc4(0x1);
                        break;
                    case 2:
                        (((struct o41C_uchar *)(a4))->v) = 0x1;
                        FUN_0c05add4(0x1);
                        break;
                    }
                }
                t3 = FUN_0c05adb4(0x1);
                if (t3 != 0) {
                    if ((*(signed char *)(((0x41C + a4) + 0x4))) != 0) {
                        (((struct o41C_uchar *)(a4))->v) = 0x1;
                        FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                    } else {
                        if ((*(signed char *)(((0x41C + a4) + 0x5))) == 1) {
                            t3 = FUN_0c0fc990((*(signed char *)(((0x41C + a4) + 0x3))), (*(signed char *)(((0x41C + a4) + 0x1))));
                            if (t3 == -1) {
                                (((struct o41C_uchar *)(a4))->v) = 0x0;
                                FUN_0c05add4(0x1);
                                FUN_0c059ce8(0x75);
                            } else {
                                *(unsigned char *)(((0x41C + a4) + 0x1)) = t3;
                                FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                            }
                        } else {
                            if ((int)(*(signed char *)(((0x41C + a4) + 0x1))) < (int)((*(signed char *)(((0x41C + a4) + 0x3))) - 1)) {
                                *(unsigned char *)(((0x41C + a4) + 0x1)) = ((*(signed char *)(((0x41C + a4) + 0x1))) + 0x1);
                                FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                            } else {
                                (((struct o41C_uchar *)(a4))->v) = 0x0;
                                *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x0;
                                FUN_0c05add4(0x1);
                                FUN_0c059ce8(0x75);
                            }
                        }
                    }
                }
                t3 = FUN_0c05f22c(0x40);
                if (t3 != 0) {
                    FUN_0c05add4(0x1);
                    (((struct o41C_uchar *)(a4))->v) = 0x0;
                    FUN_0c059ce8(0x75);
                }
                t3 = FUN_0c05f22c(0x200);
                if (t3 != 0) {
                    *(unsigned char *)(((0x41C + a4) + 0x4)) = ((-(*(signed char *)(((0x41C + a4) + 0x4)))) + 0x1);
                }
                t3 = FUN_0c05f22c(0x80);
                if (t3 != 0) {
                    *(unsigned char *)(((0x41C + a4) + 0x5)) = ((-(*(signed char *)(((0x41C + a4) + 0x5)))) + 0x1);
                    if ((*(signed char *)(((0x41C + a4) + 0x5))) != 0) {
                        FUN_0c0fc90c((*(signed char *)(((0x41C + a4) + 0x3))));
                        FUN_0c0fc924((*(signed char *)(((0x41C + a4) + 0x3))), (*(signed char *)(((0x41C + a4) + 0x1))));
                    }
                }
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                t3 = FUN_0c05f254(0x800);
                if (t3 != 0) {
                    t3 = 0x1C;
                    t4 = (*(int *)0xC4B410C);
                } else {
                    t3 = 0x20;
                    t4 = (*(int *)0xC4B410C);
                }
                FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x0, t3, t4);
                t3 = FUN_0c05f254(0x100);
                if (t3 != 0) {
                    t3 = 0x1D;
                    t4 = (*(int *)0xC4B410C);
                } else {
                    t3 = 0x21;
                    t4 = (*(int *)0xC4B410C);
                }
                FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x0, t3, t4);
                t3 = FUN_0c05f254(0x40);
                if (t3 != 0) {
                    t3 = 0x1E;
                    t4 = (*(int *)0xC4B410C);
                } else {
                    t3 = 0x22;
                    t4 = (*(int *)0xC4B410C);
                }
                FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0x0, t3, t4);
                t3 = FUN_0c05f254(0x400);
                if (t3 != 0) {
                    t3 = 0x1F;
                    t4 = (*(int *)0xC4B410C);
                } else {
                    t3 = 0x23;
                    t4 = (*(int *)0xC4B410C);
                }
                FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0x0, t3, t4);
                if ((*(signed char *)(((0x41C + a4) + 0x4))) != 0) {
                    t3 = 0x26;
                    t4 = (*(int *)0xC4B410C);
                } else {
                    t3 = 0x24;
                    t4 = (*(int *)0xC4B410C);
                }
                FUN_0c03744a(((((struct oE8_int *)(a4))->v)), 0x0, t3, t4);
                if ((*(signed char *)(((0x41C + a4) + 0x5))) != 0) {
                    t3 = 0x27;
                    t4 = (*(int *)0xC4B410C);
                } else {
                    t3 = 0x25;
                    t4 = (*(int *)0xC4B410C);
                }
                FUN_0c03744a(((((struct oEC_int *)(a4))->v)), 0x0, t3, t4);
                if ((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x4))) != -1) {
                    FUN_0c03744a(((((struct oF0_int *)(a4))->v)), 0x0, (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x4))), (*(int *)0xC4B410C));
                    *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x1;
                    t3 = (((struct oF0_int *)(a4))->v);
                    *(unsigned short *)((t3 + 0x6)) = ((*(short *)((t3 + 0x6))) | 0x400);
                    FUN_0c058a6e((((((struct oF0_int *)(a4))->v)) + 0x14), 0xC28EB38, 0xC28EB28, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
                    if (((((struct o20_short *)(a4))->v)) == 0) {
                        if ((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) << 1) + 0xC28ECD0) + 0x4))) != -1) {
                            FUN_0c03744a(((((struct oF0_int *)(a4))->v)), 0x0, (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) << 1) + 0xC28ECD0) + 0x4))), (*(int *)0xC4B410C));
                        }
                        t3 = (((struct oF0_int *)(a4))->v);
                        *(unsigned short *)((t3 + 0x6)) = ((*(short *)((t3 + 0x6))) | 0x400);
                        FUN_0c058a6e((((((struct oF0_int *)(a4))->v)) + 0x14), 0xC28EB28, 0xC28EB38, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
                    }
                } else {
                    *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x0;
                }
                t3 = *(signed char *)(((0x41C + a4) + 0x1));
                t4 = t3;
                if ((*(signed char *)(((0x41C + a4) + 0x2))) != t3) {
                    t3 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t3 + 0x1);
                    t4 = 0x20;
                    if ((int)(short)(t3 + 0x1) > (int)0xA) {
                        (((struct o20_ushort *)(a4))->v) = 0x0;
                        t3 = *(signed char *)(((0x41C + a4) + 0x1));
                        *(unsigned char *)(((0x41C + a4) + 0x2)) = t3;
                        t4 = t3;
                    }
                }
                t1 = t4;
            }
            t2 = t1;
        }
        t1 = t2;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        FUN_0c1171f0(a4);
        *(unsigned char *)(((0x41C + a4) + 0x4)) = 0x0;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x1, (*(int *)0xC4B410C));
        t2 = 0x0;
        for (;;) {
            if (((*(int *)(((((t2 << 2) << 1) + 0xC28ECD0) + 0x0))) == -1) && (t0 = *(int *)(((((t2 << 2) << 1) + 0xC28ECD0) + 0x4)), t0 == -1)) {
                break;
            }
            *(unsigned char *)(((0x41C + a4) + 0x3)) = ((*(signed char *)(((0x41C + a4) + 0x3))) + 0x1);
            t2 = (t2 + 0x1);
        }
        FUN_0c0fd938(a4);
        FUN_0c0fd334(a4);
        FUN_0c0fd692(a4);
        if ((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) != 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t0 = 0xA8;
        } else {
            t2 = FUN_0c104f7c((*(signed char *)(((0x41C + a4) + 0x1))), ((*(signed char *)(((0x41C + a4) + 0x3))) - 1));
            if (t2 != (*(signed char *)(((0x41C + a4) + 0x1)))) {
                FUN_0c0fc90c((*(signed char *)(((0x41C + a4) + 0x3))));
                if ((*(signed char *)(((0x41C + a4) + 0x5))) == 1) {
                    FUN_0c0fc924((*(signed char *)(((0x41C + a4) + 0x3))), t2);
                }
                t3 = *(signed char *)(((0x41C + a4) + 0x0));
                switch (t3) {
                case 0:
                    *(unsigned char *)(((0x41C + a4) + 0x1)) = t2;
                    break;
                case 1:
                    (((struct o41C_uchar *)(a4))->v) = 0x1;
                    *(unsigned char *)(((0x41C + a4) + 0x1)) = t2;
                    FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                    break;
                case 2:
                    *(unsigned char *)(((0x41C + a4) + 0x1)) = t2;
                    (((struct o41C_uchar *)(a4))->v) = 0x2;
                    FUN_0c05add4(0x1);
                    FUN_0c059ce8(0x75);
                    FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                    FUN_0c05adc4(0x1);
                    break;
                }
            }
            t3 = FUN_0c05f22c(0x100);
            if (t3 != 0) {
                t3 = *(signed char *)(((0x41C + a4) + 0x0));
                switch (t3) {
                case 0:
                    (((struct o41C_uchar *)(a4))->v) = 0x1;
                    *(unsigned char *)(((0x41C + a4) + 0x1)) = t2;
                    FUN_0c0fc90c((*(signed char *)(((0x41C + a4) + 0x3))));
                    if ((*(signed char *)(((0x41C + a4) + 0x5))) == 1) {
                        FUN_0c0fc924((*(signed char *)(((0x41C + a4) + 0x3))), (*(signed char *)(((0x41C + a4) + 0x1))));
                    }
                    FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                    break;
                case 1:
                    (((struct o41C_uchar *)(a4))->v) = 0x2;
                    FUN_0c05adc4(0x1);
                    break;
                case 2:
                    (((struct o41C_uchar *)(a4))->v) = 0x1;
                    FUN_0c05add4(0x1);
                    break;
                }
            }
            t2 = FUN_0c05adb4(0x1);
            if (t2 != 0) {
                if ((*(signed char *)(((0x41C + a4) + 0x4))) != 0) {
                    (((struct o41C_uchar *)(a4))->v) = 0x1;
                    FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                } else {
                    if ((*(signed char *)(((0x41C + a4) + 0x5))) == 1) {
                        t2 = FUN_0c0fc990((*(signed char *)(((0x41C + a4) + 0x3))), (*(signed char *)(((0x41C + a4) + 0x1))));
                        if (t2 == -1) {
                            (((struct o41C_uchar *)(a4))->v) = 0x0;
                            FUN_0c05add4(0x1);
                            FUN_0c059ce8(0x75);
                        } else {
                            *(unsigned char *)(((0x41C + a4) + 0x1)) = t2;
                            FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                        }
                    } else {
                        if ((int)(*(signed char *)(((0x41C + a4) + 0x1))) < (int)((*(signed char *)(((0x41C + a4) + 0x3))) - 1)) {
                            *(unsigned char *)(((0x41C + a4) + 0x1)) = ((*(signed char *)(((0x41C + a4) + 0x1))) + 0x1);
                            FUN_0c059c7a((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x0))), (*(signed char *)(((0x41C + a4) + 0x4))));
                        } else {
                            (((struct o41C_uchar *)(a4))->v) = 0x0;
                            *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x0;
                            FUN_0c05add4(0x1);
                            FUN_0c059ce8(0x75);
                        }
                    }
                }
            }
            t2 = FUN_0c05f22c(0x40);
            if (t2 != 0) {
                FUN_0c05add4(0x1);
                (((struct o41C_uchar *)(a4))->v) = 0x0;
                FUN_0c059ce8(0x75);
            }
            t2 = FUN_0c05f22c(0x200);
            if (t2 != 0) {
                *(unsigned char *)(((0x41C + a4) + 0x4)) = ((-(*(signed char *)(((0x41C + a4) + 0x4)))) + 0x1);
            }
            t2 = FUN_0c05f22c(0x80);
            if (t2 != 0) {
                *(unsigned char *)(((0x41C + a4) + 0x5)) = ((-(*(signed char *)(((0x41C + a4) + 0x5)))) + 0x1);
                if ((*(signed char *)(((0x41C + a4) + 0x5))) != 0) {
                    FUN_0c0fc90c((*(signed char *)(((0x41C + a4) + 0x3))));
                    FUN_0c0fc924((*(signed char *)(((0x41C + a4) + 0x3))), (*(signed char *)(((0x41C + a4) + 0x1))));
                }
            }
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t2 = FUN_0c05f254(0x800);
            if (t2 != 0) {
                t2 = 0x1C;
                t3 = (*(int *)0xC4B410C);
            } else {
                t2 = 0x20;
                t3 = (*(int *)0xC4B410C);
            }
            FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x0, t2, t3);
            t2 = FUN_0c05f254(0x100);
            if (t2 != 0) {
                t2 = 0x1D;
                t3 = (*(int *)0xC4B410C);
            } else {
                t2 = 0x21;
                t3 = (*(int *)0xC4B410C);
            }
            FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x0, t2, t3);
            t2 = FUN_0c05f254(0x40);
            if (t2 != 0) {
                t2 = 0x1E;
                t3 = (*(int *)0xC4B410C);
            } else {
                t2 = 0x22;
                t3 = (*(int *)0xC4B410C);
            }
            FUN_0c03744a(((((struct oE0_int *)(a4))->v)), 0x0, t2, t3);
            t2 = FUN_0c05f254(0x400);
            if (t2 != 0) {
                t2 = 0x1F;
                t3 = (*(int *)0xC4B410C);
            } else {
                t2 = 0x23;
                t3 = (*(int *)0xC4B410C);
            }
            FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0x0, t2, t3);
            if ((*(signed char *)(((0x41C + a4) + 0x4))) != 0) {
                t2 = 0x26;
                t3 = (*(int *)0xC4B410C);
            } else {
                t2 = 0x24;
                t3 = (*(int *)0xC4B410C);
            }
            FUN_0c03744a(((((struct oE8_int *)(a4))->v)), 0x0, t2, t3);
            if ((*(signed char *)(((0x41C + a4) + 0x5))) != 0) {
                t2 = 0x27;
                t3 = (*(int *)0xC4B410C);
            } else {
                t2 = 0x25;
                t3 = (*(int *)0xC4B410C);
            }
            FUN_0c03744a(((((struct oEC_int *)(a4))->v)), 0x0, t2, t3);
            if ((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x4))) != -1) {
                FUN_0c03744a(((((struct oF0_int *)(a4))->v)), 0x0, (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x1))) << 2) << 1) + 0xC28ECD0) + 0x4))), (*(int *)0xC4B410C));
                *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x1;
                t2 = (((struct oF0_int *)(a4))->v);
                *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x400);
                FUN_0c058a6e((((((struct oF0_int *)(a4))->v)) + 0x14), 0xC28EB38, 0xC28EB28, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
                if (((((struct o20_short *)(a4))->v)) == 0) {
                    if ((*(int *)((((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) << 1) + 0xC28ECD0) + 0x4))) != -1) {
                        FUN_0c03744a(((((struct oF0_int *)(a4))->v)), 0x0, (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x2))) << 2) << 1) + 0xC28ECD0) + 0x4))), (*(int *)0xC4B410C));
                    }
                    t2 = (((struct oF0_int *)(a4))->v);
                    *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x400);
                    FUN_0c058a6e((((((struct oF0_int *)(a4))->v)) + 0x14), 0xC28EB28, 0xC28EB38, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
                }
            } else {
                *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            t2 = *(signed char *)(((0x41C + a4) + 0x1));
            t3 = t2;
            if ((*(signed char *)(((0x41C + a4) + 0x2))) != t2) {
                t2 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t2 + 0x1);
                t4 = 0x20;
                if ((int)(short)(t2 + 0x1) > (int)0xA) {
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    t2 = *(signed char *)(((0x41C + a4) + 0x1));
                    *(unsigned char *)(((0x41C + a4) + 0x2)) = t2;
                    t4 = t2;
                }
                t3 = t4;
            }
            t0 = t3;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0fddea(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x1, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FD962;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fe000(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x1, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FDE34;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fe02a(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c0fddea(a4);
        FUN_0c0fd0e8(a4);
        FUN_0c0fe000(a4);
    }
    *(unsigned short *)((a4 + 0x1C)) = (FUN_0c105384((*(short *)((a4 + 0x1C)))));
    t0 = FUN_0c05f22c(0x101);
    if (t0 != 0) {
        t1 = *(short *)((a4 + 0x1C));
        if (t1 == 2) {
            FUN_0c05aab6(0x0, 0x3);
            FUN_0c05add4(0x1);
            FUN_0c059ce8(0x75);
            return FUN_0c0fb9a6();
        }
        return t1;
    }
    return t0;
}

int FUN_0c0fe0b2(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FE02A;
        FUN_0c0fe02a(t0);
        return t0;
    }
    return 0x0;
}
