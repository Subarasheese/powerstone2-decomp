/* game/unsorted: functions 0C110168-0C112910, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c02ee3e(void);
int FUN_0c02f6da(int, int, int, int, int, int, int, int);
int FUN_0c02f7fc(void);
int FUN_0c02f82c(void);
int FUN_0c02f83c(void);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1103e0(int, int);
int FUN_0c1171f0(int);
int FUN_0c117a6e(int, ...);
int FUN_0c11e938(int);
int FUN_0c187798(int, int);
int FUN_0c110168(int a4);
int FUN_0c1101c0(int a4, int a5);
int FUN_0c110286(int a4);
int FUN_0c1103ac(int a4);
int FUN_0c110460(int a4);
int FUN_0c1105a4(int a4);
int FUN_0c1105d8(int a4, int a5);
int FUN_0c1106b8(int a4);
int FUN_0c110800(int a4);
int FUN_0c110b3c(int a4);
int FUN_0c110e50(int a4, int a5);
int FUN_0c11113c(void);
int FUN_0c111680(void);
int FUN_0c111854(int a4);
int FUN_0c1119fc(int a4);
int FUN_0c111f04(int a4);
int FUN_0c1122a2(int a4);
int FUN_0c1122d6(int a4);
int FUN_0c112444(int a4);
int FUN_0c1125a0(int a4);
int FUN_0c1126b6(void);

int FUN_0c110168(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x6);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC110024;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}


int FUN_0c110286(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)0xC4739A4;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    t2 = FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0);
                    if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                        return FUN_0c03f346(a4);
                    }
                    return t2;
                }
                return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
            }
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x61F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    FUN_0c1171f0(a4);
    return FUN_0c1101c0(a4, (*(int *)((((*(int *)((((*(int *)((((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2) + 0xC473C74))) << 2) + 0xC474410))) << 2) + 0xC474104))));
}

int FUN_0c1103ac(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x2);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC110286;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c110460(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)0xC4739A4;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    t2 = FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0);
                    if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                        return FUN_0c03f346(a4);
                    }
                    return t2;
                }
                return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
            }
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x61F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x4, 0xA, (*(int *)0xC4B410C));
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    FUN_0c1171f0(a4);
    t0 = *(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)));
    t1 = t0;
    if ((int)t0 >= 0) {
        t1 = (*(int *)((((*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) << 2) + 0xC474410)));
    }
    return FUN_0c1103e0(a4, (*(signed char *)((((t1 + 0x1) * 0x34) + 0xC2738BB))));
}

int FUN_0c1105a4(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x2);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC110460;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}


int FUN_0c1106b8(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)0xC4739A4;
    if (t0 != 0) {
        if (t0 == 1) {
            return t0;
        }
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    return t0;
                }
                t0 = FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0);
                if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                    return FUN_0c03f346(a4);
                }
                return t0;
            }
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
        }
        return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x61F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    FUN_0c1171f0(a4);
    t0 = FUN_0c11e938((*(int *)((((*(int *)((((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2) + 0xC473C74))) << 2) + 0xC474410))));
    t1 = *(int *)(((*(int *)0xC4739A4) + 0x34));
    t2 = (t0 + 0x1);
    if (t1 != 0) {
        t2 = ((t0 + 0x1) - 0x80);
        if (t1 != 1) {
            t2 = ((t0 + 0x1) - 0x96);
            if (t1 != 2) {
                t2 = ((t0 + 0x1) - 0xA0);
                if (t1 != 3) {
                    t2 = (t0 + 0x1);
                }
            }
        }
    }
    return FUN_0c1105d8(a4, t2);
}

int FUN_0c110800(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x3);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1106B8;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c110b3c(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC110844;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c110e50(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0xA);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC110B88;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned char *)((t0 + 0x2)) = a5;
        return t0;
    }
    return 0x0;
}

int FUN_0c11113c(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0xB);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC110E8A;
        return t0;
    }
    return 0x0;
}

int FUN_0c111680(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC111164;
        return t0;
    }
    return 0x0;
}

int FUN_0c111854(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x14);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1117A0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c1119fc(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x2, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1118AC;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c111f04(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x2, 0x9);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC111A30;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c1122a2(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x2, 0x9);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC111F38;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c1122d6(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            return t0;
        }
        if (t0 == 2) {
            return t0;
        }
        if (t0 != 3) {
            if (t0 != 4) {
                return t0;
            }
            FUN_0c117a6e(0xFFFFFFFF);
            return FUN_0c03f346(a4);
        }
        FUN_0c117a6e(0xFFFFFFFF);
        FUN_0c02f82c();
        return FUN_0c03f346(a4);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                FUN_0c02f7fc();
                FUN_0c02f83c();
                (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
                t1 = 0x14;
            }
            t0 = t1;
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t0 = 0x15;
        }
        t1 = t0;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = *(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)));
        t2 = t0;
        if ((int)t0 >= 0) {
            t2 = (*(int *)((((*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) << 2) + 0xC474410)));
        }
        FUN_0c02ee3e();
        t0 = 0x0;
        t3 = 0x0;
        t4 = t2;
        for (;;) {
            t5 = *(short *)(((*(int *)((((t2 << 2) + 0xC29D4D0) + 0x0))) + ((t0 << 2) << 2)));
            if (t5 == -1) {
                break;
            }
            t4 = (*(int *)((((t2 << 2) + 0xC29D4D0) + 0x0)));
            t4 = (t4 + t3);
            FUN_0c02f6da((int)(((((struct o0_float *)0xC29144C)->v)) + (float)(*(short *)((t4 + 0x0)))), (int)(((((struct o4_float *)0xC29144C)->v)) + (float)(*(short *)((t4 + 0x2)))), 0xF763, 0x18, 0x18, ((*(short *)((t4 + 0x6)))), 0xC1FC71C, ((*(int *)((t4 + 0x8)))));
            t3 = (t3 + 0x10);
            t0 = (t0 + 0x1);
        }
        t1 = t5;
    }
    return t1;
}

int FUN_0c112444(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1122D6;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c1125a0(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC112478;
        *(unsigned char *)((t0 + 0x2)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c1126b6(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1125D4;
        return t0;
    }
    return 0x0;
}
