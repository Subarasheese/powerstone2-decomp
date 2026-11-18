/* game/player: functions 0C10EC34-0C110168, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o258_int { char p[0x258]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB4_int { char p[0xB4]; int v; };
struct oB8_float { char p[0xB8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c05a080(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05b052(int, int);
int FUN_0c05f22c(int);
int FUN_0c104cc8(int a4);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c104de4(int, int);
int FUN_0c104e6a(int, int);
int FUN_0c106510(void);
int FUN_0c10daf4(int);
int FUN_0c10db3a(int);
int FUN_0c10db5e(int);
int FUN_0c10db70(int);
int FUN_0c10dbc8(int);
int FUN_0c10dc48(int);
int FUN_0c10dd92(int);
int FUN_0c11113c(void);
int FUN_0c112910(int, int);
int FUN_0c1173a0(void);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c118412(int);
int FUN_0c118584(int);
int FUN_0c1186d4(int);
int FUN_0c1187ba(void);
int FUN_0c11ea4e(int);
int FUN_0c187798(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c10ec34(int a4);
int FUN_0c10ed92(int a4);
int FUN_0c10ee58(int a4, int a5, int a6, int a7);
int FUN_0c10eeac(int a4);
int FUN_0c10eef0(int a4, int a5, int a6, int a7);
int FUN_0c10f48a(void);
int FUN_0c10f4b2(void);
float FUN_0c10f674(int a4, int a5, int a6, int a7);
int FUN_0c10feda(int a4);

int FUN_0c10ec34(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_3 = *(signed char *)((v0_2 + 0x15));
    v0_1 = (v0_3);
    v0_0 = (0x0);
    v0_2 = (v0_2);
    if ((v0_3 == 0)) goto L_C10EC52;
    if ((v0_1 == 1)) goto L_C10EC6C;
    L_C10ED86:;
    return v0_1;
    L_C10EC6C:;
    v0_4 = *(signed char *)((v0_2 + 0x16));
    v0_1 = (v0_4);
    v0_3 = (0xC474B8C);
    if ((v0_4 == 0)) goto L_C10EC86;
    if ((v0_1 == 1)) goto L_C10EC9A;
    if ((v0_1 == 2)) goto L_C10ECC8;
    if ((v0_1 == 3)) goto L_C10ED40;
    goto L_C10ED86;
    L_C10ED40:;
    v0_4 = (((struct o22_short *)(v0_2))->v);
    (((struct o22_ushort *)(v0_2))->v) = (v0_4 + 0x1);
    v0_1 = (0x22);
    if (((int)(short)(v0_4 + 0x1) <= (int)0xA)) goto L_C10ED86;
    (((struct o14_uchar *)(((((struct o74_int *)(v0_3))->v))))->v) = 0x63;
    (((struct o74_uint *)(v0_3))->v) = v0_0;
    if ((((((struct o20_short *)(v0_2))->v)) != 0)) goto L_C10ED76;
    return FUN_0c10daf4(v0_2);
    L_C10ED76:;
    return FUN_0c10db3a(v0_2);
    L_C10ECC8:;
    (((struct o20_ushort *)(v0_2))->v) = (FUN_0c104e6a(((((struct o20_short *)(v0_2))->v)), 0x1));
    *(unsigned char *)((((((struct o74_int *)(v0_3))->v)) + 0x2)) = (*(signed char *)((v0_2 + 0x20)));
    v0_1 = (FUN_0c104d70()) != 0;
    if (v0_1) goto L_C10ED04;
    v0_4 = FUN_0c104db8();
    v0_1 = (v0_4);
    if ((v0_4 == 0)) goto L_C10ED86;
    (((struct o20_ushort *)(v0_2))->v) = 0x1;
    *(unsigned char *)((((((struct o74_int *)(v0_3))->v)) + 0x2)) = (*(signed char *)((v0_2 + 0x20)));
    L_C10ED04:;
    FUN_0c1186d4(((((struct o20_short *)(v0_2))->v)));
    (((struct o16_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x16))) + 0x1);
    (((struct o22_ushort *)(v0_2))->v) = v0_0;
    v0_1 = (0x22);
    goto L_C10ED86;
    L_C10EC9A:;
    v0_4 = FUN_0c117d54();
    v0_1 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C10ED86;
    (((struct o16_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x16))) + 0x1);
    (((struct o20_ushort *)(v0_2))->v) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = (v0_3 + 0x74);
    (((struct o74_uint *)(v0_3))->v) = (FUN_0c1187ba());
    v0_0 = *(signed char *)((v0_2 + 0x20));
    *(unsigned char *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x2)) = v0_0;
    v0_1 = (v0_0);
    goto L_C10ED86;
    L_C10EC86:;
    (((struct o16_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x16))) + 0x1);
    *(int *)((int)stk + 0) = 0xEF;
    v0_1 = ((FUN_0c117944(0xEF)));
    goto L_C10ED86;
    L_C10EC52:;
    if (((int)(*(int *)0xC4743DC) >= (int)0x3)) goto L_C10EC60;
    goto L_C10ED76;
    L_C10EC60:;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_2))->v) = v0_0;
    goto L_C10EC6C;
}

int FUN_0c10ed92(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c104cc8(0x3FCF);
            if (t0 != 0) {
                return FUN_0c10db5e(a4);
            }
            return t0;
        }
        t0 = FUN_0c117d54();
        if ((int)t0 < 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return FUN_0c117e76();
        }
        return t0;
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return (FUN_0c117944(0xF0));
}

int FUN_0c10ee58(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    return t0;
                                }
                                return ((int (*)(int, int, int, int))(0xC10EE14))(a4, a5, a6, a7);
                            }
                            return FUN_0c10dc48(a4);
                        }
                        return FUN_0c10ed92(a4);
                    }
                    return FUN_0c10ec34(a4);
                }
                return ((int (*)(int, int, int, int))(0xC10EBDA))(a4, a5, a6, a7);
            }
            return FUN_0c10dd92(a4);
        }
        return FUN_0c10dbc8(a4);
    }
    return FUN_0c10db70(a4);
}

int FUN_0c10eeac(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10EE58;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c10eef0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    int t5;
    register int t6;
    int t7;
    register int t8;
    int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;

    t11 = *(signed char *)((a4 + 0x14));
    if (t11 != 0) {
        if (t11 != 1) {
            if (t11 != 2) {
                if (t11 == 3) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    FUN_0c118584(((((struct o0_int *)0xC474744)->v)));
                    t12 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t12 + 0x1);
                    t13 = (short)(t12 + 0x1);
                    if ((int)(short)(t12 + 0x1) <= (int)0xA) {
                    } else {
                        (((struct o14_uchar *)(((((struct o4_int *)0xC474BC4)->v))))->v) = 0x63;
                        (((struct o4_uint *)0xC474BC4)->v) = 0x0;
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                        t13 = 0x14;
                    }
                    return t13;
                }
                if (t11 == 4) {
                    t12 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t12 + 0x1);
                    t13 = (short)(t12 + 0x1);
                    if ((int)(short)(t12 + 0x1) <= (int)0xA) {
                    } else {
                        (((struct o14_uchar *)(((((struct o4_int *)0xC474BC4)->v))))->v) = 0x63;
                        (((struct o4_uint *)0xC474BC4)->v) = 0x0;
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                        t13 = 0x14;
                    }
                    return t13;
                }
                if (t11 == 10) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t12 = *(signed char *)((a4 + 0x15));
                    if (t12 != 0) {
                        if (t12 != 1) {
                            t13 = t12;
                            if (t12 != 2) {
                            } else {
                                (((struct o4_uint *)0xC474BC4)->v) = (FUN_0c11113c());
                                (((struct o14_uchar *)(a4))->v) = 0x2;
                                (((struct o15_uchar *)(a4))->v) = 0x0;
                                t13 = 0x15;
                            }
                            t12 = t13;
                        } else {
                            t13 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t13 + 0x1);
                            t14 = (short)(t13 + 0x1);
                            if ((int)(short)(t13 + 0x1) <= (int)0x18) {
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                *(unsigned short *)((a4 + 0x1E)) = 0xF;
                                t14 = 0xF;
                            }
                            t12 = t14;
                        }
                        t13 = t12;
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        (((struct o14_uchar *)(((((struct o4_int *)0xC474BC4)->v))))->v) = 0x63;
                        (((struct o4_uint *)0xC474BC4)->v) = 0x0;
                        t12 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t12 + 0x1);
                        t14 = (short)(t12 + 0x1);
                        if ((int)(short)(t12 + 0x1) <= (int)0x18) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0xF;
                            t14 = 0xF;
                        }
                        t13 = t14;
                    }
                    return t13;
                }
                if (t11 == 11) {
                    t12 = *(signed char *)((a4 + 0x15));
                    if (t12 != 0) {
                        if (t12 != 1) {
                            t13 = t12;
                            if (t12 != 2) {
                            } else {
                                (((struct o4_uint *)0xC474BC4)->v) = (FUN_0c11113c());
                                (((struct o14_uchar *)(a4))->v) = 0x2;
                                (((struct o15_uchar *)(a4))->v) = 0x0;
                                t13 = 0x15;
                            }
                            t12 = t13;
                        } else {
                            t13 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t13 + 0x1);
                            t14 = (short)(t13 + 0x1);
                            if ((int)(short)(t13 + 0x1) <= (int)0x18) {
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                *(unsigned short *)((a4 + 0x1E)) = 0xF;
                                t14 = 0xF;
                            }
                            t12 = t14;
                        }
                        t13 = t12;
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        (((struct o14_uchar *)(((((struct o4_int *)0xC474BC4)->v))))->v) = 0x63;
                        (((struct o4_uint *)0xC474BC4)->v) = 0x0;
                        t12 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t12 + 0x1);
                        t14 = (short)(t12 + 0x1);
                        if ((int)(short)(t12 + 0x1) <= (int)0x18) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0xF;
                            t14 = 0xF;
                        }
                        t13 = t14;
                    }
                    return t13;
                }
                if (t11 == 20) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t12 = *(signed char *)((a4 + 0x15));
                    if (t12 != 0) {
                        if (t12 != 1) {
                            t13 = t12;
                            if (t12 != 2) {
                            } else {
                                (((struct o14_uchar *)(a4))->v) = 0x2;
                                t13 = 0x14;
                            }
                            t12 = t13;
                        } else {
                            t13 = *(signed char *)((0x14 + (*(int *)0xC474C14)));
                            t14 = t13;
                            if (t13 == 99) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t14 = 0x15;
                            }
                            t12 = t14;
                        }
                        t13 = t12;
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t12 = *(int *)((((*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) << 2) + 0xC474410));
                        t14 = FUN_0c11ea4e(0x4000);
                        if (((int)t14 >= (int)0x5) && (t0 = *(int *)(((t12 << 2) + 0xC473D04)), (t0 & 0x20) == 0)) {
                            t0 = FUN_0c112910(0x2, t12);
                            *(unsigned int *)0xC474C14 = t0;
                            t14 = t0;
                        } else {
                            if ((int)(*(int *)(((t12 << 2) + 0xC474104))) < (int)0x1) {
                                t0 = FUN_0c112910(0x3, t12);
                                *(unsigned int *)0xC474C14 = t0;
                                t15 = t0;
                            } else {
                                t0 = 0x0;
                                if (((*(int *)(((t12 << 2) + 0xC473D04))) & 0x20) != 0) {
                                    t0 = 0x1;
                                }
                                t15 = FUN_0c112910(t0, t12);
                                *(unsigned int *)0xC474C14 = t15;
                            }
                            t14 = t15;
                        }
                        t13 = t14;
                    }
                    return t13;
                }
                if (t11 == 21) {
                    t0 = *(signed char *)((a4 + 0x15));
                    if (t0 != 0) {
                        if (t0 != 1) {
                            t12 = t0;
                            if (t0 != 2) {
                            } else {
                                (((struct o14_uchar *)(a4))->v) = 0x2;
                                t12 = 0x14;
                            }
                            t0 = t12;
                        } else {
                            t12 = *(signed char *)((0x14 + (*(int *)0xC474C14)));
                            t13 = t12;
                            if (t12 == 99) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t13 = 0x15;
                            }
                            t0 = t13;
                        }
                        t12 = t0;
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t0 = *(int *)((((*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) << 2) + 0xC474410));
                        t13 = FUN_0c11ea4e(0x4000);
                        if (((int)t13 >= (int)0x5) && (t1 = *(int *)(((t0 << 2) + 0xC473D04)), (t1 & 0x20) == 0)) {
                            t1 = FUN_0c112910(0x2, t0);
                            *(unsigned int *)0xC474C14 = t1;
                            t13 = t1;
                        } else {
                            if ((int)(*(int *)(((t0 << 2) + 0xC474104))) < (int)0x1) {
                                t1 = FUN_0c112910(0x3, t0);
                                *(unsigned int *)0xC474C14 = t1;
                                t14 = t1;
                            } else {
                                t1 = 0x0;
                                if (((*(int *)(((t0 << 2) + 0xC473D04))) & 0x20) != 0) {
                                    t1 = 0x1;
                                }
                                t15 = FUN_0c112910(t1, t0);
                                *(unsigned int *)0xC474C14 = t15;
                                t14 = t15;
                            }
                            t13 = t14;
                        }
                        t12 = t13;
                    }
                    return t12;
                }
                if (t11 == 80) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                t0 = t11;
                if (t11 == 99) {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    t0 = 0x22;
                }
                return t0;
            }
            t0 = FUN_0c104cc8(0x2000);
            if (t0 != 0) {
                FUN_0c05aab6(0x0, 0x6);
                (((struct o14_uint *)0xC474744)->v) = ((((struct o0_int *)0xC474744)->v));
                t0 = (((struct o0_int *)0xC474744)->v);
                (((struct o0_uint *)0xC474744)->v) = (t0 - 1);
                if ((int)(t0 - 1) < 0) {
                    (((struct o0_uint *)0xC474744)->v) = 0x4;
                }
            }
            t0 = FUN_0c104cc8(0x1000);
            if (t0 != 0) {
                FUN_0c05aab6(0x0, 0x6);
                (((struct o14_uint *)0xC474744)->v) = ((((struct o0_int *)0xC474744)->v));
                t0 = (((struct o0_int *)0xC474744)->v);
                (((struct o0_uint *)0xC474744)->v) = (t0 + 0x1);
                if ((int)(t0 + 0x1) > (int)0x4) {
                    (((struct o0_uint *)0xC474744)->v) = 0x0;
                }
            }
            t0 = FUN_0c104cc8(0x3000);
            if ((t0 != 0) && (t2 = (((struct o0_int *)0xC474744)->v), (int)t2 < (int)0x4)) {
                FUN_0c05a080(0x13, 0x0);
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)(((0xC473C88 + (t0 << 2)) + 0x0)) = (*(int *)((0xC473C74 + (t0 << 2))));
                if ((int)(*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) < 0) {
                    t0 = (((struct o0_int *)0xC474744)->v);
                    *(unsigned int *)((0xC473C74 + (t0 << 2))) = (*(int *)((0xC29105C + (t0 << 2))));
                }
                t0 = (((struct o0_int *)0xC474744)->v);
                if ((int)(*(int *)((0xC473C74 + (t0 << 2)))) > (int)(*(int *)((0xC29105C + (t0 << 2))))) {
                    *(unsigned int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2))) = 0x0;
                }
                t0 = FUN_0c104cc8(0x2000);
                if (t0 != 0) {
                    return FUN_0c10feda(0x0);
                }
                return FUN_0c10feda(0x1);
            }
            if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            }
            if ((*(short *)((a4 + 0x1E))) != 0) {
                t0 = FUN_0c05f22c(0x101);
                if (t0 != 0) {
                    t0 = (((struct o0_int *)0xC474744)->v);
                    if (t0 != 0) {
                        if (t0 != 4) {
                            t0 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                            t1 = t0;
                            if (t0 == 0) {
                            } else {
                                t2 = (((struct o0_int *)0xC474744)->v);
                                if ((int)t2 >= (int)0x4) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t11 = 0x14;
                                } else {
                                    (((struct o14_uint *)0xC474744)->v) = t2;
                                    (((struct o0_uint *)0xC474744)->v) = 0x4;
                                    t11 = t0;
                                }
                                t1 = t11;
                            }
                            t0 = t1;
                        } else {
                            FUN_0c05aab6(0x0, 0x3);
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t0 = 0x14;
                        }
                        t1 = t0;
                    } else {
                        t0 = *(int *)((((*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) << 2) + 0xC474410));
                        if (((*(signed char *)((0xC2738B8 + ((t0 + 0x1) * 0x34)))) != 2) && ((int)t0 <= (int)0x78)) {
                            FUN_0c05aab6(0x0, 0x3);
                            (((struct o14_uchar *)(a4))->v) = 0x14;
                            t0 = 0x14;
                        } else {
                            t2 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                            t11 = t2;
                            if (t2 == 0) {
                            } else {
                                t12 = (((struct o0_int *)0xC474744)->v);
                                if ((int)t12 >= (int)0x4) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t13 = 0x14;
                                } else {
                                    (((struct o14_uint *)0xC474744)->v) = t12;
                                    (((struct o0_uint *)0xC474744)->v) = 0x4;
                                    t13 = t2;
                                }
                                t11 = t13;
                            }
                            t0 = t11;
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                    t2 = t1;
                    if (t1 == 0) {
                    } else {
                        t11 = (((struct o0_int *)0xC474744)->v);
                        if ((int)t11 >= (int)0x4) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t12 = 0x14;
                        } else {
                            (((struct o14_uint *)0xC474744)->v) = t11;
                            (((struct o0_uint *)0xC474744)->v) = 0x4;
                            t12 = t1;
                        }
                        t2 = t12;
                    }
                    t0 = t2;
                }
                return t0;
            }
            if ((int)((((struct o0_int *)0xC474744)->v)) >= (int)0x4) {
                t0 = FUN_0c05f22c(0x101);
                if (t0 != 0) {
                    t0 = (((struct o0_int *)0xC474744)->v);
                    if (t0 != 0) {
                        if (t0 != 4) {
                            t0 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                            t1 = t0;
                            if (t0 == 0) {
                            } else {
                                t2 = (((struct o0_int *)0xC474744)->v);
                                if ((int)t2 >= (int)0x4) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t11 = 0x14;
                                } else {
                                    (((struct o14_uint *)0xC474744)->v) = t2;
                                    (((struct o0_uint *)0xC474744)->v) = 0x4;
                                    t11 = t0;
                                }
                                t1 = t11;
                            }
                            t0 = t1;
                        } else {
                            FUN_0c05aab6(0x0, 0x3);
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t0 = 0x14;
                        }
                        t1 = t0;
                    } else {
                        t0 = *(int *)((((*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) << 2) + 0xC474410));
                        if (((*(signed char *)((0xC2738B8 + ((t0 + 0x1) * 0x34)))) != 2) && ((int)t0 <= (int)0x78)) {
                            FUN_0c05aab6(0x0, 0x3);
                            (((struct o14_uchar *)(a4))->v) = 0x14;
                            t0 = 0x14;
                        } else {
                            t2 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                            t11 = t2;
                            if (t2 == 0) {
                            } else {
                                t12 = (((struct o0_int *)0xC474744)->v);
                                if ((int)t12 >= (int)0x4) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t13 = 0x14;
                                } else {
                                    (((struct o14_uint *)0xC474744)->v) = t12;
                                    (((struct o0_uint *)0xC474744)->v) = 0x4;
                                    t13 = t2;
                                }
                                t11 = t13;
                            }
                            t0 = t11;
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                    t2 = t1;
                    if (t1 == 0) {
                    } else {
                        t11 = (((struct o0_int *)0xC474744)->v);
                        if ((int)t11 >= (int)0x4) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t12 = 0x14;
                        } else {
                            (((struct o14_uint *)0xC474744)->v) = t11;
                            (((struct o0_uint *)0xC474744)->v) = 0x4;
                            t12 = t1;
                        }
                        t2 = t12;
                    }
                    t0 = t2;
                }
                return t0;
            }
            t0 = FUN_0c104cc8(0x800);
            if ((t0 != 0) && (t3 = (((struct o0_int *)0xC474744)->v), t4 = *(int *)((0xC29105C + (t3 << 2))), (int)t4 >= (int)0x1)) {
                FUN_0c05a080(0x13, 0x0);
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)(((0xC473C88 + (t0 << 2)) + 0x0)) = (*(int *)((0xC473C74 + (t0 << 2))));
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)((0xC473C74 + (t0 << 2))) = ((*(int *)((0xC473C74 + (t0 << 2)))) - 1);
                if ((int)(*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) >= 0) {
                    return FUN_0c10feda(0x0);
                }
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)((0xC473C74 + (t0 << 2))) = (*(int *)((0xC29105C + (t0 << 2))));
                return FUN_0c10feda(0x1);
            }
            t0 = FUN_0c104cc8(0x400);
            if ((t0 != 0) && (t5 = (((struct o0_int *)0xC474744)->v), t6 = *(int *)((0xC29105C + (t5 << 2))), (int)t6 >= (int)0x1)) {
                FUN_0c05a080(0x13, 0x0);
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)(((0xC473C88 + (t0 << 2)) + 0x0)) = (*(int *)((0xC473C74 + (t0 << 2))));
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)((0xC473C74 + (t0 << 2))) = ((*(int *)((0xC473C74 + (t0 << 2)))) + 0x1);
                t0 = (((struct o0_int *)0xC474744)->v);
                if ((int)(*(int *)((0xC473C74 + (t0 << 2)))) > (int)(*(int *)((0xC29105C + (t0 << 2))))) {
                    *(unsigned int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2))) = 0x0;
                    return FUN_0c10feda(0x0);
                }
                return FUN_0c10feda(0x1);
            }
            t0 = FUN_0c104cc8(0x8);
            if ((t0 != 0) && (t7 = (((struct o0_int *)0xC474744)->v), t8 = *(int *)((0xC29105C + (t7 << 2))), (int)t8 >= (int)0x1)) {
                FUN_0c05a080(0x13, 0x0);
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)(((0xC473C88 + (t0 << 2)) + 0x0)) = (*(int *)((0xC473C74 + (t0 << 2))));
                t0 = (((struct o0_int *)0xC474744)->v);
                t1 = *(int *)((0xC473C74 + (t0 << 2)));
                if (t1 == 0) {
                    t2 = (((struct o0_int *)0xC474744)->v);
                    *(unsigned int *)((0xC473C74 + (t2 << 2))) = (*(int *)((0xC29105C + (t2 << 2))));
                    return FUN_0c10feda(0x1);
                }
                *(unsigned int *)((0xC473C74 + (t0 << 2))) = (t1 - 10);
                if ((int)(*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) < 0) {
                    *(unsigned int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2))) = 0x0;
                }
                return FUN_0c10feda(0x0);
            }
            t0 = FUN_0c104cc8(0x4);
            if ((t0 != 0) && (t9 = (((struct o0_int *)0xC474744)->v), t10 = *(int *)((0xC29105C + (t9 << 2))), (int)t10 >= (int)0x1)) {
                FUN_0c05a080(0x13, 0x0);
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)(((0xC473C88 + (t0 << 2)) + 0x0)) = (*(int *)((0xC473C74 + (t0 << 2))));
                t0 = (((struct o0_int *)0xC474744)->v);
                if ((*(int *)((0xC473C74 + (t0 << 2)))) == (*(int *)((0xC29105C + (t0 << 2))))) {
                    *(unsigned int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2))) = 0x0;
                    return FUN_0c10feda(0x0);
                }
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)((0xC473C74 + (t0 << 2))) = ((*(int *)((0xC473C74 + (t0 << 2)))) + 0xA);
                t0 = (((struct o0_int *)0xC474744)->v);
                if ((int)(*(int *)((0xC473C74 + (t0 << 2)))) > (int)(*(int *)((0xC29105C + (t0 << 2))))) {
                    t0 = (((struct o0_int *)0xC474744)->v);
                    *(unsigned int *)((0xC473C74 + (t0 << 2))) = (*(int *)((0xC29105C + (t0 << 2))));
                }
                return FUN_0c10feda(0x1);
            }
            t0 = FUN_0c05f22c(0x101);
            if (t0 != 0) {
                t0 = (((struct o0_int *)0xC474744)->v);
                if (t0 != 0) {
                    if (t0 != 4) {
                        t0 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                        t1 = t0;
                        if (t0 == 0) {
                        } else {
                            t2 = (((struct o0_int *)0xC474744)->v);
                            if ((int)t2 >= (int)0x4) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t3 = 0x14;
                            } else {
                                (((struct o14_uint *)0xC474744)->v) = t2;
                                (((struct o0_uint *)0xC474744)->v) = 0x4;
                                t3 = t0;
                            }
                            t1 = t3;
                        }
                        t0 = t1;
                    } else {
                        FUN_0c05aab6(0x0, 0x3);
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    t1 = t0;
                } else {
                    t0 = *(int *)((((*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) << 2) + 0xC474410));
                    if (((*(signed char *)((0xC2738B8 + ((t0 + 0x1) * 0x34)))) != 2) && ((int)t0 <= (int)0x78)) {
                        FUN_0c05aab6(0x0, 0x3);
                        (((struct o14_uchar *)(a4))->v) = 0x14;
                        t0 = 0x14;
                    } else {
                        t2 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                        t3 = t2;
                        if (t2 == 0) {
                        } else {
                            t4 = (((struct o0_int *)0xC474744)->v);
                            if ((int)t4 >= (int)0x4) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t5 = 0x14;
                            } else {
                                (((struct o14_uint *)0xC474744)->v) = t4;
                                (((struct o0_uint *)0xC474744)->v) = 0x4;
                                t5 = t2;
                            }
                            t3 = t5;
                        }
                        t0 = t3;
                    }
                    t1 = t0;
                }
                t0 = t1;
            } else {
                t1 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                t2 = t1;
                if (t1 == 0) {
                } else {
                    t3 = (((struct o0_int *)0xC474744)->v);
                    if ((int)t3 >= (int)0x4) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t4 = 0x14;
                    } else {
                        (((struct o14_uint *)0xC474744)->v) = t3;
                        (((struct o0_uint *)0xC474744)->v) = 0x4;
                        t4 = t1;
                    }
                    t2 = t4;
                }
                t0 = t2;
            }
            return t0;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    t0 = *(signed char *)((0x14 + ((((struct o0_int *)0xC474BC4)->v))));
    t1 = t0;
    if (t0 != 22) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = FUN_0c11113c();
        (((struct o4_uint *)0xC474BC4)->v) = t0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c10f48a(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10EEF0;
        return t0;
    }
    return 0x0;
}

int FUN_0c10f4b2(void)
{
    register int t0;

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 == 2) {
                return FUN_0c106510();
            }
            return (unsigned char)t0;
        }
        t0 = *(signed char *)0xC541F46;
        if ((unsigned char)t0 != 0) {
            if ((unsigned char)t0 != 1) {
                if ((unsigned char)t0 != 2) {
                    return (unsigned char)t0;
                }
                if ((int)(*(short *)0xC541F56) < (int)0x32) {
                    *(unsigned short *)0xC541F56 = ((*(short *)0xC541F56) + 0x1);
                }
                t0 = *(short *)0xC541F56;
                if (t0 == 42) {
                    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
                    return FUN_0c059c7a(0x18, 0x1);
                }
                return t0;
            }
            if ((int)(*(short *)0xC541F56) < (int)0x32) {
                *(unsigned short *)0xC541F56 = ((*(short *)0xC541F56) + 0x1);
            }
            if ((*(short *)0xC541F56) == 42) {
                FUN_0c059c7a(0x1C, 0x1);
            }
            t0 = *(signed char *)((0x14 + (*(int *)0xC474C0C)));
            if (t0 == 99) {
                (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
                *(unsigned short *)0xC541F56 = 0x0;
                FUN_0c05b052(0x28, 0x1);
                (((struct o14_uchar *)(((((struct o38_int *)0xC474B8C)->v))))->v) = 0x1E;
                (((struct o14_uchar *)(((((struct o4_int *)0xC474B8C)->v))))->v) = 0x63;
                (((struct o4_uint *)0xC474B8C)->v) = 0x0;
                (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
                (((struct o0_uint *)0xC474B8C)->v) = 0x0;
                return 0x14;
            }
            return t0;
        }
        (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
        *(unsigned short *)0xC541F56 = 0x0;
        FUN_0c05b052(0x28, 0x1);
        t0 = FUN_0c10f48a();
        *(unsigned int *)0xC474C0C = t0;
        return t0;
    }
    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
    (((struct o1_uchar *)0xC541F45)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC473C74 + t0)) = 0x0;
        *(unsigned int *)((0xC473C88 + t0)) = 0xFFFFFFFF;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x14) {
            break;
        }
    }
    (((struct o14_uchar *)(((((struct o38_int *)0xC474B8C)->v))))->v) = 0x14;
    (((struct o0_uint *)0xC474718)->v) = 0x4;
    (((struct o4_uint *)0xC474B8C)->v) = (FUN_0c1173a0());
    (((struct o2C_uint *)0xC474718)->v) = 0x0;
    t0 = FUN_0c118412(0x2);
    (((struct o0_uint *)0xC474B8C)->v) = t0;
    return t0;
}


int FUN_0c10feda(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x2, 0x9);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10F674;
        *(unsigned char *)((t0 + 0x2)) = a4;
        t1 = a4;
    }
    return t1;
}
