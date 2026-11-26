/* game/unsorted: functions 0C0497D8-0C04A844, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o166_uchar { char p[0x166]; unsigned char v; };
struct o168_uchar { char p[0x168]; unsigned char v; };
struct o16B_uchar { char p[0x16B]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o3719_uchar { char p[0x3719]; unsigned char v; };
struct o3720_uchar { char p[0x3720]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o82_uchar { char p[0x82]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oE2BC_uchar { char p[0xE2BC]; unsigned char v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03ac42(void);
int thunk_FUN_0c2b2456(void);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03f0aa(void);
int FUN_0c03ffbe(void);
int FUN_0c0d5188(void);
int FUN_0c04666c(void);
int FUN_0c047064(int, int, int, int);
int FUN_0c047114(void);
int FUN_0c047186(void);
int FUN_0c04a080(void);
int FUN_0c04a69a(void);
int FUN_0c056e44(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c54(int);
int FUN_0c059c7a(int, int);
int FUN_0c059ce8(int);
int FUN_0c05aeac(void);
int FUN_0c05af8a(void);
int FUN_0c05b048(int, int);
int FUN_0c05b052(int, int);
int FUN_0c05b7e0(int);
int FUN_0c06780e(int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c0bbf8e(void);
int nlRand(void);
int FUN_0c187798(void);
int FUN_0c0497d8(int a4, int a5, int a6, int a7);
int FUN_0c04987e(void);
int FUN_0c0498d8(void);
int FUN_0c049962(void);
int FUN_0c049a10(int a4, int a5, int a6, int a7);
int FUN_0c049d7e(int a4);
int FUN_0c049de4(void);
int FUN_0c049f00(void);
int FUN_0c04a028(void);
int FUN_0c04a060(void);
int FUN_0c04a13e(int a4, int a5, int a6, int a7);
int FUN_0c04a286(int a4, int a5, int a6, int a7);
int FUN_0c04a408(void);
int FUN_0c04a556(int a4, int a5, int a6, int a7);
int FUN_0c04a5c4(int a4, int a5);


int FUN_0c04987e(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t5;

    t0 = 0xE4E0;
    t1 = 0xC532498;
    t2 = 0xC532498;
    t3 = 0x0;
    for (;;) {
        if (((*(signed char *)((t1 + 0x3714))) != 0) && (t5 = *(signed char *)((t1 + 0x2)), t5 != -1)) {
            t0 = 0x1;
            t0 = ((int)t0 << (int)(*(signed char *)((t2 + 0x2))));
            t3 = (t3 | t0);
        }
        t1 = (t1 + 0x3938);
        t2 = (t2 + 0x3938);
        if ((unsigned int)t1 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t3;
}

int FUN_0c0498d8(void)
{
    register int t2;
    register int t3;
    register int t4;
    int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t19;
    register int t11;
    register int t16;
    register int t14;
    register int t1;

    t2 = 0xE4E0;
    t3 = 0xC532498;
    t4 = 0xC540978;
    t5 = (FUN_0c04987e());
    t6 = 0xC541CDC;
    t7 = 0xC532498;
    t8 = 0xC532498;
    for (;;) {
        t19 = 0x3714;
        if ((*(signed char *)((t8 + 0x3714))) != 0) {
            t11 = *(signed char *)((t8 + 0x2));
            t16 = t11;
            if (t11 == -1) {
                for (;;) {
                    t2 = 0xC179AC0;
                    t1 = (nlRand());
                    t14 = (int)((int)t1 % (int)((*(signed char *)0xC5429B2) + 0xC));
                    t1 = 0xC1B7CDC;
                    t4 = 0x1;
                    t3 = (*(int *)((t1 + (t14 << 2))));
                    t4 = ((int)t4 << (int)t3);
                    if ((t4 & t5) == 0) {
                        break;
                    }
                }
                t5 = (t5 | t4);
                *(unsigned char *)((t7 + 0x2)) = t3;
                (((struct o82_uchar *)(t6))->v) = t3;
                t16 = 0x82;
            }
            t19 = t16;
        }
        t2 = 0xC540978;
        t8 = (t8 + 0x3938);
        t7 = (t7 + 0x3938);
        t6 = (t6 + 0x98);
        if ((unsigned int)t8 >= (unsigned int)t2) {
            break;
        }
    }
    return t19;
}

int FUN_0c049962(void)
{
    register int t1;
    register int t0;

    t1 = 0x0;
    for (;;) {
        if (((*(signed char *)0xC542347) & ((int)0x1 << (int)t1)) != 0) {
            t0 = (t1 * 0x3938);
            t0 = (t0 + 0xC532498);
            (((struct o3714_uchar *)(t0))->v) = 0x1;
            if ((((int)0x1 << (int)t1) & (unsigned char)(*(signed char *)0xC3BD447)) == 0) {
                (((struct o3720_uchar *)(((t1 * 0x3938) + 0xC532498)))->v) = 0x1;
            }
            if ((*(signed char *)((((t1 * 0x3938) + 0xC532498) + 0x3720))) != 0) {
                *(unsigned char *)((((t1 * 0x3938) + 0xC532498) + 0x2)) = 0xFFFFFFFF;
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    FUN_0c0498d8();
    *(unsigned char *)0xC54235E = 0x0;
    return (unsigned char)(*(signed char *)0xC3BD447);
}

int FUN_0c049a10(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_9 = a5;
    v0_10 = a6;
    v0_7 = a7;
    v0_0 = (0x98);
    v0_1 = (0xC5421F8);
    v0_2 = (0xC532498);
    v0_3 = (0x3938);
    v0_4 = (0x1);
    v0_6 = (0x0);
    v0_5 = (0xC541CDC);
    if (((*(signed char *)0xC542236) != 2)) goto L_C049A3C;
    v0_8 = (0x1);
    L_C049A3E:;
    (((struct o166_uchar *)(v0_1))->v) = v0_8;
    (((struct o16B_uchar *)(v0_1))->v) = 0xFFFFFFFF;
    v0_7 = (0xFFFFFFFF);
    if (((*(signed char *)((v0_1 + 0x166))) != 1)) goto L_C049A68;
    v0_8 = (0x5);
    L_C049A6A:;
    (((struct o168_uchar *)(v0_1))->v) = v0_8;
    v0_9 = *(signed char *)0xC3BD447;
    v0_7 = (((unsigned char)v0_9 - 1));
    v0_8 = (0xC3BD447);
    v0_8 = (0x7270);
    if (!(((unsigned int)((unsigned char)v0_9 - 1) < (unsigned int)0xF))) goto L_C049CCC;
    switch (((v0_7 << 1))) { case 0: goto L_C049AB6; case 2: goto L_C049AB6; case 4: goto L_C049BE8; case 6: goto L_C049AB6; case 8: goto L_C049C36; case 10: goto L_C049C58; case 12: goto L_C049CCC; case 14: goto L_C049AB6; case 16: goto L_C049C7C; case 18: goto L_C049C98; case 20: goto L_C049CCC; case 22: goto L_C049C0C; case 24: goto L_C049CCC; case 26: goto L_C049CCC; case 28: goto L_C049CCC; }
    goto L_C049C98;
    L_C049CCC:;
    (((struct o166_uchar *)(v0_1))->v) = v0_6;
    *(unsigned int *)(((int)stk + 8)) = v0_6;
    v0_7 = (0x166);
    L_C049D62:;
    if (!(((int)(*(int *)(((int)stk + 8))) < (int)0x4))) goto L_C049D6A;
    v0_6 = *(int *)(((int)stk + 8));
    v0_7 = (0x14F);
    v0_8 = (((int)v0_4 << (int)v0_6));
    if ((((*(signed char *)((v0_1 + 0x14F))) & ((int)v0_4 << (int)v0_6)) == 0)) goto L_C049D5C;
    (((struct o3714_uchar *)((((*(int *)(((int)stk + 8))) * v0_3) + v0_2)))->v) = v0_4;
    v0_7 = (0x3714);
    if (((v0_8 & (unsigned char)(*(signed char *)0xC3BD447)) != 0)) goto L_C049D5C;
    if (((*(signed char *)((0x82 + (((*(int *)(((int)stk + 8))) * v0_0) + v0_5)))) != -1)) goto L_C049D3A;
    v0_6 = *(int *)(((int)stk + 8));
    *(int *)((int)stk + 4) = (0x82 + ((v0_6 * v0_0) + v0_5));
    v0_7 = *(int *)(((int)stk + 8));
    *(int *)((int)stk + 0) = (0x2 + ((v0_7 * v0_3) + v0_2));
    v0_8 = (int)((int)(nlRand()) % (int)0xC);
    *(unsigned char *)(((0x2 + ((v0_7 * v0_3) + v0_2)) + 0x0)) = v0_8;
    (((struct o82_uchar *)(((v0_6 * v0_0) + v0_5)))->v) = v0_8;
    goto L_C049D50;
    L_C049D6A:;
    return v0_7;
    L_C049D50:;
    (((struct o3720_uchar *)((((*(int *)(((int)stk + 8))) * v0_3) + v0_2)))->v) = v0_4;
    v0_7 = (0x3720);
    L_C049D5C:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    goto L_C049D62;
    L_C049D3A:;
    *(unsigned char *)(((((*(int *)(((int)stk + 8))) * v0_3) + v0_2) + 0x2)) = (*(signed char *)((0x82 + (((*(int *)(((int)stk + 8))) * v0_0) + v0_5))));
    goto L_C049D50;
    L_C049C98:;
    (((struct o16B_uchar *)(v0_1))->v) = v0_6;
    (((struct o3714_uchar *)(v0_2))->v) = v0_4;
    v0_9 = (v0_2);
    if (((*(signed char *)((v0_1 + 0x3E))) != 2)) goto L_C049CBC;
    v0_7 = (0xC);
    L_C049CBE:;
    *(unsigned char *)((v0_9 + 0x2)) = v0_7;
    (((struct o3720_uchar *)(v0_9))->v) = v0_4;
    (((struct o3714_uchar *)((v0_8 + v0_2)))->v) = v0_6;
    v0_7 = (0x3714);
    goto L_C049D6A;
    L_C049CBC:;
    v0_7 = (0xD);
    goto L_C049CBE;
    L_C049C7C:;
    (((struct o16B_uchar *)(v0_1))->v) = v0_4;
    (((struct o3714_uchar *)((v0_2 + v0_3)))->v) = v0_4;
    v0_9 = ((v0_2 + v0_3));
    if (((*(signed char *)((v0_1 + 0x3E))) != 2)) goto L_C049C94;
    v0_7 = (0xC);
    goto L_C049CBE;
    L_C049C94:;
    v0_7 = (0xD);
    goto L_C049CBE;
    L_C049C58:;
    (((struct o16B_uchar *)(v0_1))->v) = v0_6;
    (((struct o3714_uchar *)(v0_2))->v) = v0_4;
    v0_8 = (v0_2);
    if (((*(signed char *)((v0_1 + 0x3E))) != 2)) goto L_C049C6E;
    v0_7 = (0xC);
    L_C049C70:;
    *(unsigned char *)((v0_8 + 0x2)) = v0_7;
    (((struct o3720_uchar *)(v0_8))->v) = v0_4;
    L_C049C76:;
    (((struct oE2BC_uchar *)(v0_2))->v) = v0_6;
    v0_7 = (0xE2BC);
    goto L_C049D6A;
    L_C049C6E:;
    v0_7 = (0xD);
    goto L_C049C70;
    L_C049C36:;
    (((struct o16B_uchar *)(v0_1))->v) = v0_4;
    (((struct o3714_uchar *)((v0_2 + v0_3)))->v) = v0_4;
    v0_8 = ((v0_2 + v0_3));
    if (((*(signed char *)((v0_1 + 0x3E))) != 2)) goto L_C049C4E;
    v0_7 = (0xC);
    L_C049C50:;
    *(unsigned char *)((v0_8 + 0x2)) = v0_7;
    (((struct o3720_uchar *)(v0_8))->v) = v0_4;
    goto L_C049C76;
    L_C049C4E:;
    v0_7 = (0xD);
    goto L_C049C50;
    L_C049C0C:;
    (((struct o16B_uchar *)(v0_1))->v) = v0_6;
    (((struct o3714_uchar *)(v0_2))->v) = v0_4;
    v0_8 = (v0_2);
    if (((*(signed char *)((v0_1 + 0x3E))) != 2)) goto L_C049C22;
    v0_7 = (0xC);
    L_C049C24:;
    *(unsigned char *)((v0_8 + 0x2)) = v0_7;
    (((struct o3720_uchar *)(v0_8))->v) = v0_4;
    (((struct o3714_uchar *)((v0_2 + v0_3)))->v) = v0_6;
    v0_7 = (0x3714);
    goto L_C049D6A;
    L_C049C22:;
    v0_7 = (0xD);
    goto L_C049C24;
    L_C049BE8:;
    (((struct o16B_uchar *)(v0_1))->v) = 0x2;
    (((struct o3714_uchar *)((v0_2 + v0_8)))->v) = v0_4;
    v0_9 = ((v0_2 + v0_8));
    if (((*(signed char *)((v0_1 + 0x3E))) != 2)) goto L_C049C02;
    v0_7 = (0xC);
    L_C049C04:;
    *(unsigned char *)((v0_9 + 0x2)) = v0_7;
    (((struct o3720_uchar *)(v0_9))->v) = v0_4;
    goto L_C049C76;
    L_C049C02:;
    v0_7 = (0xD);
    goto L_C049C04;
    L_C049AB6:;
    v0_8 = (v0_6);
    v0_9 = (v0_4);
    v0_7 = (0xC40F828);
    L_C049B14:;
    if (((int)v0_8 < (int)0x4)) goto L_C049ABE;
    v0_8 = (v0_6);
    L_C049BCE:;
    if (((int)v0_8 < (int)0x4)) goto L_C049B1E;
    return FUN_0c0498d8();
    L_C049B1E:;
    if (((*(signed char *)((((v0_8 * v0_3) + v0_2) + 0x3714))) != 0)) goto L_C049BCC;
    if (((*(signed char *)((v0_1 + 0x16B))) != -1)) goto L_C049B58;
    (((struct o16B_uchar *)(v0_1))->v) = v0_8;
    (((struct o3714_uchar *)(((v0_8 * v0_3) + v0_2)))->v) = v0_4;
    v0_10 = (((v0_8 * v0_3) + v0_2));
    if (((*(signed char *)((v0_1 + 0x3E))) != 2)) goto L_C049B4E;
    v0_7 = (0xC);
    L_C049B50:;
    *(unsigned char *)((v0_10 + 0x2)) = v0_7;
    v0_7 = (0x3720);
    L_C049B82:;
    *(unsigned char *)((v0_10 + v0_7)) = v0_4;
    L_C049BCA:;
    v0_9 = ((v0_9 + 0x1));
    L_C049BCC:;
    v0_8 = ((v0_8 + 0x1));
    goto L_C049BCE;
    L_C049B4E:;
    v0_7 = (0xD);
    goto L_C049B50;
    L_C049B58:;
    if (((*(signed char *)((v0_1 + 0x17F))) == 0)) goto L_C049B86;
    if (((int)v0_9 >= (int)0x2)) goto L_C049B8C;
    *(unsigned char *)((((v0_8 * v0_3) + v0_2) + 0x2)) = 0xFFFFFFFF;
    (((struct o82_uchar *)(((v0_8 * v0_0) + v0_5)))->v) = 0xFFFFFFFF;
    (((struct o3714_uchar *)(((v0_8 * v0_3) + v0_2)))->v) = v0_4;
    v0_7 = (0x3720);
    v0_10 = (((v0_8 * v0_3) + v0_2));
    goto L_C049B82;
    L_C049B8C:;
    (((struct o3714_uchar *)(((v0_8 * v0_3) + v0_2)))->v) = v0_6;
    goto L_C049BCC;
    L_C049B86:;
    if (((int)v0_9 < (int)0x3)) goto L_C049BAC;
    goto L_C049B8C;
    L_C049BAC:;
    *(unsigned char *)((((v0_8 * v0_3) + v0_2) + 0x2)) = 0xFFFFFFFF;
    (((struct o82_uchar *)(((v0_8 * v0_0) + v0_5)))->v) = 0xFFFFFFFF;
    (((struct o3714_uchar *)(((v0_8 * v0_3) + v0_2)))->v) = v0_4;
    (((struct o3720_uchar *)(((v0_8 * v0_3) + v0_2)))->v) = v0_4;
    goto L_C049BCA;
    L_C049ABE:;
    if ((((((~(unsigned char)(*(signed char *)0xC3BD447)) & (unsigned char)(*(signed char *)((v0_7 + 0x0)))) & ((int)v0_4 << (int)v0_8)) & (*(signed char *)((v0_1 + 0x14F)))) == 0)) goto L_C049B12;
    if (((*(signed char *)((0x82 + ((v0_8 * v0_0) + v0_5)))) == -1)) goto L_C049B08;
    *(unsigned char *)((((v0_8 * v0_3) + v0_2) + 0x2)) = (*(signed char *)((0x82 + ((v0_8 * v0_0) + v0_5))));
    (((struct o3714_uchar *)(((v0_8 * v0_3) + v0_2)))->v) = v0_4;
    (((struct o3720_uchar *)(((v0_8 * v0_3) + v0_2)))->v) = v0_4;
    v0_9 = ((v0_9 + 0x1));
    L_C049B12:;
    v0_8 = ((v0_8 + 0x1));
    goto L_C049B14;
    L_C049B08:;
    (((struct o3714_uchar *)(((v0_8 * v0_3) + v0_2)))->v) = v0_6;
    goto L_C049B12;
    L_C049A68:;
    v0_8 = (0x6);
    goto L_C049A6A;
    L_C049A3C:;
    v0_8 = (0x2);
    goto L_C049A3E;
}

int FUN_0c049d7e(int a4)
{
    register int t1;
    register int t0;

    t1 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t1) & (unsigned char)(*(signed char *)0xC3BD447)) != 0) {
            t0 = (*(signed char *)((((t1 * 0x3938) + 0xC532498) + 0x2)));
            if (t0 == (signed char)a4) {
                break;
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x4) {
                t0 = 0x0;
                return t0;
            }
            continue;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            t0 = 0x0;
            return t0;
        }
    }
    return 0x1;
}

int FUN_0c049de4(void)
{
    int stk[2];
    register int t2;
    register int t27;
    register int t28;
    register int t5;
    register int t7;
    register int t33;
    register int t34;
    register int t38;
    register int t0;
    register int t1;

    *(unsigned char *)0xC54235E = 0x0;
    t2 = 0x0;
    for (;;) {
        t27 = t0;
        t28 = t1;
        if (((*(signed char *)0xC542347) & ((int)0x1 << (int)t2)) != 0) {
            t1 = 0xC3BD447;
            t0 = (t2 * 0x3938);
            t0 = (t0 + 0xC532498);
            (((struct o3714_uchar *)(t0))->v) = 0x1;
            t27 = t0;
            t28 = t1;
            if ((((int)0x1 << (int)t2) & (unsigned char)(*(signed char *)((t1 + 0x0)))) == 0) {
                *(unsigned char *)((((t2 * 0x3938) + 0xC532498) + 0x2)) = 0xFFFFFFFF;
                (((struct o3720_uchar *)(((t2 * 0x3938) + 0xC532498)))->v) = 0x1;
                *(unsigned int *)(((int)stk + 0)) = ((t2 * 0x98) + 0xC541CDC);
                t5 = *(signed char *)((0x82 + ((t2 * 0x98) + 0xC541CDC)));
                *(unsigned char *)(((int)stk + 4)) = t5;
                t27 = t0;
                t28 = t1;
                if (t5 != -1) {
                    t7 = FUN_0c049d7e((*(signed char *)(((int)stk + 4))));
                    if (t7 == 0) {
                        t0 = 0x82;
                        t1 = (t2 * 0x3938);
                        t1 = (t1 + 0xC532498);
                        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)((t0 + ((t2 * 0x98) + 0xC541CDC))));
                        t27 = t0;
                        t28 = t1;
                    }
                }
            }
        }
        t0 = t27;
        t1 = t28;
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x4) {
            break;
        }
    }
    FUN_0c0498d8();
    t33 = 0xC532498;
    t34 = 0xC541CDC;
    for (;;) {
        t38 = 0xFFFFFFFF;
        if ((*(signed char *)((t33 + 0x3720))) != 0) {
            t38 = (*(signed char *)((t33 + 0x2)));
        }
        (((struct o82_uchar *)(t34))->v) = t38;
        t34 = (t34 + 0x98);
        t33 = (t33 + 0x3938);
        if ((unsigned int)t34 >= (unsigned int)0xC541F3C) {
            break;
        }
    }
    return 0x82;
}

int FUN_0c049f00(void)
{
    int stk[2];
    register int t0;
    int t8;
    register int t11;
    register int t13;
    register int t30;
    register int t33;
    register int t36;
    register int t1;

    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & (unsigned char)(*(signed char *)0xC3BD447)) != 0) {
            (((struct o3714_uchar *)(((t0 * 0x3938) + 0xC532498)))->v) = 0x1;
            t1 = t0;
        } else {
            (((struct o3714_uchar *)(((t0 * 0x3938) + 0xC532498)))->v) = 0x0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t8 = *(signed char *)0xC542236;
    if ((t8 != 2) && (t8 != 4)) {
        (((struct o0_uchar *)0xC54235E)->v) = 0x0;
        (((struct o3714_uchar *)((((0x3 - t1) * 0x3938) + 0xC532498)))->v) = 0x1;
        *(unsigned char *)(((((0x3 - t1) * 0x3938) + 0xC532498) + 0x2)) = 0xFFFFFFFF;
        *(unsigned int *)(((int)stk + 0)) = (((0x3 - t1) * 0x98) + 0xC541CDC);
        t11 = *(signed char *)((0x82 + (((0x3 - t1) * 0x98) + 0xC541CDC)));
        *(unsigned char *)(((int)stk + 4)) = t11;
        if (t11 != -1) {
            t13 = FUN_0c049d7e((*(signed char *)(((int)stk + 4))));
            if (t13 == 0) {
                *(unsigned char *)(((((0x3 - t1) * 0x3938) + 0xC532498) + 0x2)) = (*(signed char *)((0xC541D5E + ((0x3 - t1) * 0x98))));
            }
        }
        FUN_0c0498d8();
    } else {
        t30 = 0x2;
        if ((*(signed char *)0xC542236) == 2) {
            t30 = 0x1;
        }
        (((struct o0_uchar *)0xC54235E)->v) = t30;
        t33 = 0x6;
        if ((*(signed char *)0xC54235E) == 1) {
            t33 = 0x5;
        }
        (((struct o2_uchar *)0xC54235E)->v) = t33;
        (((struct o3714_uchar *)((((0x3 - t1) * 0x3938) + 0xC532498)))->v) = 0x1;
        t36 = 0xD;
        if ((*(signed char *)0xC54235E) == 1) {
            t36 = 0xC;
        }
        *(unsigned char *)(((((0x3 - t1) * 0x3938) + 0xC532498) + 0x2)) = t36;
        (((struct o5_uchar *)0xC54235E)->v) = (0x3 - t1);
    }
    (((struct o3720_uchar *)((((0x3 - t1) * 0x3938) + 0xC532498)))->v) = 0x1;
    (((struct o3719_uchar *)((((0x3 - t1) * 0x3938) + 0xC532498)))->v) = (0x3 - t1);
    *(unsigned char *)(((((0x3 - t1) * 0x3938) + 0xC532498) + 0x1)) = (0x3 - t1);
    return (0x3 - t1);
}

int FUN_0c04a028(void)
{
    register int t1;
    register int t0;

    t1 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t1) & (unsigned char)(*(signed char *)0xC3BD447)) != 0) {
            t0 = 0x3714;
            *(unsigned char *)((((t1 * 0x3938) + 0xC532498) + t0)) = 0x1;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    *(unsigned char *)0xC54235E = 0x0;
    return t0;
}

int FUN_0c04a060(void)
{
    if ((*(signed char *)0xC542361) != 0) {
        FUN_0c04a028();
    } else {
        FUN_0c049f00();
    }
    return (unsigned char)(*(signed char *)0xC3BD447);
}


int FUN_0c04a286(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;

    t1 = *(signed char *)0xC541F43;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 != 2) {
                if ((unsigned char)t1 != 3) {
                    if ((unsigned char)t1 == 4) {
                        *(unsigned char *)0xC542254 = 0x0;
                        t1 = FUN_0c03ffbe();
                        if (t1 != 0) {
                            (((struct oE_ushort *)0xC541F42)->v) = 0x1;
                        }
                        t1 = (((struct oE_short *)0xC541F42)->v);
                        (((struct oE_ushort *)0xC541F42)->v) = (t1 - 1);
                        t2 = (short)(t1 - 1);
                        if ((int)(short)(t1 - 1) <= 0) {
                            t1 = *(signed char *)0xC541F43;
                            (((struct o1_uchar *)0xC541F42)->v) = (t1 + 0x1);
                            t2 = (t1 + 0x1);
                        }
                        t1 = t2;
                    } else {
                        FUN_0c047186();
                        (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                        (((struct o1_uchar *)0xC541F42)->v) = 0x0;
                        t1 = 0x0;
                    }
                    t2 = t1;
                } else {
                    t1 = *(signed char *)0xC5429B4;
                    if (((t1 != 0) && ((t1 != 4) && (t1 != 2))) || (t0 = *(signed char *)0xC5429CB, t0 == 0)) {
                        (((struct o1_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F43) + 0x1);
                        (((struct o2_uchar *)0xC541F42)->v) = 0x0;
                    } else {
                        t0 = FUN_0c0d5188();
                        if (t0 == 0) {
                            FUN_0c04666c();
                        } else {
                            (((struct o1_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F43) + 0x1);
                            (((struct o2_uchar *)0xC541F42)->v) = 0x0;
                        }
                    }
                    t0 = (((struct oE_short *)0xC541F42)->v);
                    (((struct oE_ushort *)0xC541F42)->v) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((int)(short)(t0 - 1) <= (int)0x3C) {
                        if ((unsigned char)(*(signed char *)0xC40F820) == 2) {
                            (((struct o0_uchar *)0xC40F820)->v) = 0x4;
                        }
                        if ((unsigned char)(*(signed char *)0xC40F821) == 2) {
                            (((struct o1_uchar *)0xC40F820)->v) = 0x4;
                        }
                        if ((unsigned char)(*(signed char *)0xC40F822) == 2) {
                            (((struct o2_uchar *)0xC40F820)->v) = 0x4;
                        }
                        if ((unsigned char)(*(signed char *)0xC40F823) == 2) {
                            (((struct o3_uchar *)0xC40F820)->v) = 0x4;
                        }
                        thunk_FUN_0c2b2456();
                        FUN_0c03ac42();
                        (((struct o1_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F43) + 0x1);
                        (((struct o2_uchar *)0xC541F42)->v) = 0x0;
                        t1 = 0x0;
                    }
                    t2 = t1;
                }
                t0 = t2;
            } else {
                *(unsigned char *)0xC542254 = 0x1;
                FUN_0c047064(0xC5421F8, a5, a6, a7);
                FUN_0c047114();
                (((struct o1_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F43) + 0x1);
                (((struct o2_uchar *)0xC541F42)->v) = 0x0;
                t0 = 0x0;
            }
            t1 = t0;
        } else {
            (((struct o1_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F43) + 0x1);
            (((struct o2_uchar *)0xC541F42)->v) = 0x0;
            t1 = 0x0;
        }
        t0 = t1;
    } else {
        (((struct oE_ushort *)0xC541F42)->v) = 0x12C;
        (((struct o1_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F43) + 0x1);
        (((struct o2_uchar *)0xC541F42)->v) = 0x0;
        t0 = 0x0;
    }
    return t0;
}


int FUN_0c04a556(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC541F42;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            FUN_0c04a408();
        } else {
            FUN_0c04a286(a4, a5, a6, a7);
        }
    } else {
        FUN_0c04a13e(a4, a5, a6, a7);
    }
    return ((int (*)(void))(0xC04A4EC))();
}

int FUN_0c04a5c4(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t24;
    register int t29;

    *(unsigned char *)0xC3BD447 = 0x0;
    (((struct o5_uchar *)0xC54235E)->v) = 0xFFFFFFFF;
    (((struct o3_uchar *)0xC54235E)->v) = 0x1;
    (((struct o0_uchar *)0xC54235E)->v) = 0x0;
    (((struct o0_uchar *)0xC542235)->v) = 0x1;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = 0x0;
    for (;;) {
        (((struct o3714_uchar *)(((t0 * 0x3938) + 0xC532498)))->v) = (*(signed char *)((((t0 << 2) + a4) + 0x0)));
        (((struct o3720_uchar *)(((t0 * 0x3938) + 0xC532498)))->v) = (*(signed char *)((((t0 << 2) + a4) + 0x3)));
        *(unsigned char *)((((t0 * 0x3938) + 0xC532498) + 0x2)) = (*(signed char *)((((t0 << 2) + a4) + 0x1)));
        if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2))) == 12) {
            (((struct o5_uchar *)0xC54235E)->v) = t0;
            (((struct o3720_uchar *)(((t0 * 0x3938) + 0xC532498)))->v) = 0x1;
            (((struct o0_uchar *)0xC54235E)->v) = 0x1;
        } else {
            if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2))) == 13) {
                (((struct o5_uchar *)0xC54235E)->v) = t0;
                (((struct o3720_uchar *)(((t0 * 0x3938) + 0xC532498)))->v) = 0x1;
                (((struct o0_uchar *)0xC54235E)->v) = 0x2;
            } else {
                if ((*(signed char *)((((t0 << 2) + a4) + 0x0))) != 0) {
                    *(unsigned char *)0xC3BD447 = ((*(signed char *)0xC3BD447) | ((int)0x1 << (int)t0));
                }
            }
        }
        (((struct o3719_uchar *)(((t0 * 0x3938) + 0xC532498)))->v) = (*(signed char *)((((t0 << 2) + a4) + 0x2)));
        t24 = *(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x3714));
        t29 = ((int)0x1 << (int)t0);
        t0 = (t0 + 0x1);
        if (t24 != 0) {
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) | t29);
        }
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    (((struct o2_uchar *)0xC542235)->v) = a5;
    (((struct o2_uchar *)0xC54235E)->v) = a5;
    return (*(int *)(((int)stk + 0)));
}


