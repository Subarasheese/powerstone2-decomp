/* game/unsorted: functions 0C110168-0C112910, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058906(int, int, int, int, int, int);
extern int FUN_0c058968();
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c05f22c(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c104e6a(int, int);
int FUN_0c1125a0(int);
int FUN_0c1126b6(void);
int FUN_0c1171f0(int);
int FUN_0c118810(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(int, int, int, int);
extern int FUN_0c187798();
int FUN_0c110b88(int a4);
void FUN_0c111164(int a4, int a5, int a6, int a7);
int FUN_0c1116a8(int a4, int a5, int a6);
int FUN_0c112478(int a4, int a5, int a6, int a7);
int FUN_0c1126de(int a4, int a5, int a6, int a7);




int FUN_0c112478(int a4, int a5, int a6, int a7)
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
                FUN_0c058a6e((0xB0 + a4), 0xC291458, 0xC291468, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
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
        t0 = 0xC291478;
        if ((*(signed char *)((a4 + 0x2))) == 1) {
            t0 = 0xC291484;
        }
        FUN_0c17c130((((((struct oC4_int *)(a4))->v)) + 0x6C), 0xC2A0C78, t0);
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
        FUN_0c058a6e((0xB0 + a4), 0xC291468, 0xC291458, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
        t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}

int FUN_0c1126de(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)((a4 + 0x2));
            if ((t1 != 3) && (t1 != 2)) {
                t2 = t1;
                if ((t1 != 0) && (t1 != 1)) {
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = (FUN_0c104e6a((*(short *)((a4 + 0x1C))), 0x1));
                    *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
                    t1 = FUN_0c104d70();
                    if (t1 == 0) {
                        t1 = FUN_0c104db8();
                        t3 = t1;
                        if (t1 != 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x1;
                            *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
                            FUN_0c1125a0((*(short *)((a4 + 0x1C))));
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0x0;
                            t3 = 0x0;
                        }
                        t1 = t3;
                    } else {
                        FUN_0c1125a0((*(short *)((a4 + 0x1C))));
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = 0x0;
                        t1 = 0x0;
                    }
                    t2 = t1;
                }
                t1 = t2;
            } else {
                t2 = FUN_0c05f22c(0x3FCF);
                t3 = t2;
                if (t2 == 0) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t3 = 0x14;
                }
                t1 = t3;
            }
            return t1;
        }
        if (t0 == 2) {
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
            t2 = (short)(t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0xA) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                (((struct o14_uchar *)((*(int *)0xC474C18)))->v) = 0x63;
                *(unsigned int *)0xC474C18 = 0x0;
                if ((*(short *)((a4 + 0x1C))) == 0) {
                    t1 = (((struct o22_short *)(a4))->v);
                    if ((*(signed char *)((a4 + 0x2))) == 0) {
                        FUN_0c05a080(0x1C, 0x0);
                        *(unsigned int *)(((t1 << 2) + 0xC473D04)) = ((*(int *)(((t1 << 2) + 0xC473D04))) | 0x20);
                    } else {
                        FUN_0c05a080(0x1D, 0x0);
                        *(unsigned int *)(((t1 << 2) + 0xC473D04)) = ((*(int *)(((t1 << 2) + 0xC473D04))) & 0xFFFFFFDF);
                    }
                    t1 = 0xC473D04;
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t1 = 0x14;
                }
                t2 = t1;
            }
            return t2;
        }
        if (t0 == 10) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t1 = t0;
        if (t0 == 99) {
            (((struct o14_uchar *)(a4))->v) = 0xA;
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)0xC4B410C;
    switch (t0) {
    case 0:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x10, 0x4, t1);
        t0 = *(int *)0xC4B410C;
        t1 = 0x9;
        if ((*(signed char *)0xC5429A8) == 1) {
            t1 = 0xA;
        }
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), t1, 0x3, t0);
        *(unsigned int *)0xC474C18 = (FUN_0c1126b6());
        *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
        break;
    case 1:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x11, 0x4, t1);
        *(unsigned int *)0xC474C18 = (FUN_0c1126b6());
        *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
        break;
    case 2:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0xA, t1);
        break;
    case 3:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x12, 0x4, t1);
        break;
    }
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 3) && (t0 != 2)) {
        t1 = t0;
        if ((t0 != 0) && (t0 != 1)) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = (FUN_0c104e6a((*(short *)((a4 + 0x1C))), 0x1));
            *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
            t0 = FUN_0c104d70();
            if (t0 == 0) {
                t0 = FUN_0c104db8();
                t2 = t0;
                if (t0 != 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x1;
                    *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
                    FUN_0c1125a0((*(short *)((a4 + 0x1C))));
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    t2 = 0x0;
                }
                t0 = t2;
            } else {
                FUN_0c1125a0((*(short *)((a4 + 0x1C))));
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t0 = 0x0;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c05f22c(0x3FCF);
        t2 = t1;
        if (t1 == 0) {
        } else {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t2 = 0x14;
        }
        t0 = t2;
    }
    return t0;
}
