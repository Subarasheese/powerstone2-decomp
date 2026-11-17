/* game/unsorted: functions 0C110168-0C112910, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
extern int FUN_0c03f346();
int FUN_0c110168(int);
int FUN_0c1103ac(int);
int FUN_0c1105a4(int);
int FUN_0c110800(int);
int FUN_0c110b3c(int);
int FUN_0c110e50(int, int);
int FUN_0c111854(int);
int FUN_0c1119fc(int);
int FUN_0c111f04(int);
int FUN_0c1122a2(int);
int FUN_0c112444(int);
int FUN_0c11e964(int);
int FUN_0c11ea4e(int);
int FUN_0c110e8a(int a4);

int FUN_0c110e8a(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t8;
    register int t6;
    register int t13;
    register int t15;
    register int t18;
    register int t19;
    register int t25;
    register int t29;
    register int t30;
    register int t53;
    register int t80;
    register int t86;
    register int t88;
    int t92;
    register int t96;
    register int t120;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = (((struct o0_int *)0xC4739A4)->v);
    if (t0 != 0) {
        if (t0 == 1) {
            return t0;
        }
        if (t0 == 2) {
            t3 = *(int *)((t1 + 0x38));
            *(unsigned int *)((t1 + 0x38)) = (t3 + 0x1);
            t8 = t0;
            if ((int)(t3 + 0x1) > (int)(*(int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x3C)))) {
                (((struct o14_uchar *)(a4))->v) = 0x1;
                t6 = (((struct o0_int *)0xC4739A4)->v);
                *(unsigned int *)((t6 + 0x38)) = (*(int *)((t6 + 0x3C)));
                t8 = 0x14;
            }
            return t8;
        }
        if (t0 == 3) {
            t13 = *(int *)((t1 + 0x38));
            *(unsigned int *)((t1 + 0x38)) = (t13 - 1);
            t15 = t0;
            if ((int)(t13 - 1) < 0) {
                (((struct o14_uchar *)(a4))->v) = 0x2;
                *(unsigned int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x38)) = 0x0;
                t15 = 0x14;
            }
            return t15;
        }
        if (t0 == 4) {
            t18 = *(int *)((t1 + 0x38));
            *(unsigned int *)((t1 + 0x38)) = (t18 - 1);
            if ((int)(t18 - 1) < 0) {
                return FUN_0c03f346(a4, 0x0, 0x4, 0x2);
            }
            return t0;
        }
        t19 = t0;
        if (t0 == 99) {
            (((struct o14_uchar *)(a4))->v) = 0x4;
            t19 = 0x14;
        }
        return t19;
    }
    if (((((struct o4_int *)0xC4739A4)->v)) != 0) {
        (((struct o4_uint *)0xC4739A4)->v) = 0x0;
    } else {
        (((struct o4_uint *)0xC4739A4)->v) = 0x1;
    }
    (((struct o0_uint *)0xC4739A4)->v) = ((((((((struct o4_int *)0xC4739A4)->v)) << 2) << 2) << 2) + 0xC47478C);
    (((struct o14_uchar *)(a4))->v) = 0x2;
    t25 = 0x0;
    for (;;) {
        *(unsigned int *)((t25 + ((((struct o0_int *)0xC4739A4)->v)))) = (*(int *)(((t25 + 0xC473C74) + 0x0)));
        t29 = *(int *)(((t25 + 0xC473C74) + 0x0));
        t30 = ((((((struct o0_int *)0xC4739A4)->v)) + 0x20) + t25);
        t25 = (t25 + 0x4);
        *(unsigned int *)((t30 + 0x0)) = t29;
        if ((unsigned int)t25 >= (unsigned int)0x10) {
            break;
        }
    }
    *(unsigned int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x34)) = (*(int *)0xC474744);
    *(unsigned int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x30)) = 0x4;
    *(unsigned int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x38)) = 0x0;
    *(unsigned int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x3C)) = 0xA;
    *(unsigned int *)(((((((struct o0_int *)0xC4739A4)->v)) + 0x10) + 0x0)) = ((FUN_0c11ea4e(0x802001)) - 1);
    *(unsigned int *)(((((((struct o0_int *)0xC4739A4)->v)) + 0x14) + 0x0)) = ((FUN_0c11ea4e(0x802002)) - 1);
    *(unsigned int *)(((((((struct o0_int *)0xC4739A4)->v)) + 0x18) + 0x0)) = ((FUN_0c11ea4e(0x802004)) - 1);
    *(unsigned int *)(((((((struct o0_int *)0xC4739A4)->v)) + 0x1C) + 0x0)) = ((FUN_0c11ea4e(0x802010)) - 1);
    (((struct o0_uint *)0xC29105C)->v) = (*(int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x10)));
    (((struct o4_uint *)0xC29105C)->v) = (*(int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x14)));
    (((struct o8_uint *)0xC29105C)->v) = (*(int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x18)));
    (((struct oC_uint *)0xC29105C)->v) = (*(int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x1C)));
    t53 = *(int *)0xC474744;
    switch (t53) {
    case 0:
        FUN_0c11e964(0x802001);
        break;
    case 1:
        FUN_0c11e964(0x802002);
        break;
    case 2:
        FUN_0c11e964(0x802004);
        break;
    case 3:
        FUN_0c11e964(0x802010);
        break;
    }
    t80 = *(int *)((0xC473C74 + ((*(int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x34))) << 2)));
    t86 = t80;
    if ((int)t80 >= 0) {
        t86 = (*(int *)((((*(int *)((0xC473C74 + ((*(int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x34))) << 2)))) << 2) + 0xC474410)));
    }
    t88 = (((struct o0_int *)0xC4739A4)->v);
    if ((*(int *)((((*(int *)((t88 + 0x34))) << 2) + (t88 + 0x10)))) == -1) {
        return FUN_0c110e50(a4, 0x2);
    }
    t92 = *(int *)(((t86 << 2) + 0xC473D04));
    if (((0x4000 & t92) != 0) && ((0x10 & t92) == 0)) {
        FUN_0c110e50(a4, 0x1);
        FUN_0c1119fc(a4);
        FUN_0c110800(a4);
        t96 = FUN_0c110168(a4);
        if ((*(int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x34))) == 0) {
            return FUN_0c1105a4(a4);
        }
        return t96;
    }
    FUN_0c110e50(a4, 0x0);
    FUN_0c110b3c(a4);
    FUN_0c111854(a4);
    FUN_0c1119fc(a4);
    FUN_0c110800(a4);
    FUN_0c110168(a4);
    if ((*(int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x34))) != 3) {
        FUN_0c1103ac(a4);
        FUN_0c112444(a4);
    }
    if ((*(int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x34))) == 0) {
        FUN_0c111f04(a4);
        FUN_0c1105a4(a4);
    }
    t120 = *(int *)((((((struct o0_int *)0xC4739A4)->v)) + 0x34));
    if (t120 == 3) {
        return FUN_0c1122a2(a4);
    }
    return t120;
}
