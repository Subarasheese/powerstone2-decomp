/* game/hit: functions 0C01FAA0-0C021470, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

/* @runtime _slow_strcpy=0C187990 */
/* @runtime _quick_strcpy=0C1878F0 */
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c01cd62(int, int);
int FUN_0c01fbdc(void);
int FUN_0c01fd10(void);
int FUN_0c0206d6(void);
int FUN_0c020be4(int);
int FUN_0c02c95e(void);
int FUN_0c05aab6(int, int);
int FUN_0c183480(int, int, int);
int FUN_0c18353e(int, int, int);
int FUN_0c1837cc(int, int);
extern char *_builtin_strcpy(char *, const char *);
int strlen(int);
int FUN_0c187d98(int, int, int);
int FUN_0c020168(void);
int FUN_0c0203e0(void);
int FUN_0c021198(int a4);


int FUN_0c0203e0(void)
{
    int stk[10];
    register int t1;
    register int t3;
    register int t4;
    register int t8;
    register int t13;
    register int t16;
    register int t17;
    register int t19;
    register int t22;
    register int t24;
    register int t32;
    register int t34;
    register int t36;
    register int t47;
    register int t39;
    register int t5;
    int t6;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t1 = FUN_0c1837cc((*(int *)0xC305430), 0xC305434);
    if ((*(signed char *)0xC30543E) != 0) {
        t3 = *(signed char *)0xC309850;
        t4 = *(int *)((0xC309830 + (t3 << 2)));
        *(unsigned int *)((0xC309830 + (t3 << 2))) = (t4 + 0x1);
        if ((int)(t4 + 0x1) > (int)0xF0) {
            (((struct o8_uchar *)0xC309850)->v) = 0x10;
            (((struct o12_uchar *)0xC309850)->v) = 0xFFFFFFFA;
            t39 = (t3 << 2);
        } else {
            *(unsigned int *)(((int)stk + 20)) = 0xC30983C;
            *(unsigned int *)(((int)stk + 16)) = 0xC309840;
            *(unsigned int *)(((int)stk + 12)) = 0xC309830;
            *(unsigned int *)(((int)stk + 24)) = 0xC309834;
            *(unsigned int *)(((int)stk + 8)) = 0xC309838;
            for (;;) {
                t8 = FUN_0c183480((*(int *)0xC305430), ((int)stk + 4), 0x1);
                if (t8 == 0) {
                    break;
                }
                t6 = (*(signed char *)(((int)stk + 4)));
                if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)t6))) & 0x7) == 0) && ((t6 != 10) && (t6 != 13))) continue;
                t5 = 0xC305440;
                if ((t6 != 10) && (t6 != 13)) {
                    t13 = *(int *)0xC3054C0;
                    *(unsigned int *)0xC3054C0 = (t13 + 0x1);
                    *(unsigned char *)((t5 + ((t13 + 0x1) - 1))) = (*(signed char *)(((int)stk + 4)));
                    continue;
                }
                t6 = 0xC187D98;
                *(unsigned char *)((t5 + (*(int *)0xC3054C0))) = 0x0;
                *(unsigned int *)0xC3054C0 = 0x0;
                t16 = FUN_0c187d98(t5, 0xC1A8988, 0x4);
                if (t16 == 0) {
                    t17 = *(signed char *)0xC309850;
                    t6 = 0xC187D88;
                    t5 = 0xC18353E;
                    (((struct o0_uchar *)0xC309850)->v) = (t17 + 0x1);
                    if ((int)(signed char)((t17 + 0x1) - 1) < (int)0x3) {
                        _builtin_strcpy((char *)stk + 0x1C, (const char *)0xC1A8990);
                        t19 = strlen((((int)stk + 4) + 0x18));
                        FUN_0c18353e((*(int *)0xC305430), (((int)stk + 4) + 0x18), t19);
                        t22 = *(signed char *)0xC309850;
                        *(unsigned int *)((0xC309830 + (t22 << 2))) = 0x0;
                        (((struct o12_uchar *)0xC309850)->v) = 0x0;
                        return (t22 << 2);
                    }
                    t24 = (*(int *)(((int)stk + 20)));
                    *(int *)((int)stk + 0) = t24;
                    t32 = (int)((int)((((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)))) + (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))) + 0x3) / (int)0x6);
                    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = t32;
                    *(unsigned int *)((t24 + 0x0)) = t32;
                    _builtin_strcpy((char *)stk + 0x1C, (const char *)0xC1A8998);
                    t34 = strlen((((int)stk + 4) + 0x18));
                    t36 = FUN_0c18353e((*(int *)0xC305430), (((int)stk + 4) + 0x18), t34);
                    (((struct o8_uchar *)0xC309850)->v) = ((*(signed char *)0xC309858) + 0x1);
                    (((struct o8_uchar *)0xC309850)->v) = ((*(signed char *)0xC309858) + 0x1);
                    (((struct o12_uchar *)0xC309850)->v) = 0x0;
                    return t36;
                }
            }
            (((struct o12_uchar *)0xC309850)->v) = 0x0;
            t39 = t8;
        }
        t47 = t39;
    } else {
        (((struct o8_uchar *)0xC309850)->v) = 0x10;
        (((struct o12_uchar *)0xC309850)->v) = 0xFFFFFFFA;
        t47 = t1;
    }
    return t47;
}

int FUN_0c021198(int a4)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_5 = a4;
    FUN_0c1837cc((*(int *)0xC305430), 0xC305434);
    v0_0 = (0x2);
    v0_1 = (0x1);
    v0_2 = (0xC30541B);
    v0_3 = (0xC305419);
    v0_4 = (0xC309993);
    if (((*(signed char *)0xC30543E) == 0)) goto L_C0211CE;
    if (((*(signed char *)0xC309828) != 0)) goto L_C0211F4;
    L_C0211CE:;
    (((struct o30_uchar *)0xC309830)->v) = ((*(signed char *)0xC309860) + 0x1);
    *(unsigned char *)((v0_3 + 0x1)) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    *(unsigned char *)((v0_2 + 0x1)) = v0_0;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    v0_6 = ((FUN_0c05aab6(((*(signed char *)((v0_4 + 0x0))) << 1), 0x4)));
    L_C02145C:;
    return v0_6;
    L_C0211F4:;
    v0_5 = FUN_0c0206d6();
    v0_6 = (v0_5);
    if ((v0_5 != 0)) goto L_C021200;
    goto L_C02145C;
    L_C021200:;
    v0_7 = ((((struct o0_short *)0xC30540E)->v)) == 0;
    v0_6 = ((FUN_0c020be4((*(signed char *)0xC3054C4))));
    v0_5 = (0xC30540E);
    if (v0_7) goto L_C021216;
    *(unsigned short *)((v0_5 + 0x0)) = ((*(short *)((v0_5 + 0x0))) - 1);
    goto L_C02145C;
    L_C021216:;
    v0_5 = ((*(signed char *)0xC305420));
    v0_8 = (0xC309E07);
    if (((*(signed char *)((v0_4 + 0x0))) != 0)) goto L_C021280;
    *(unsigned char *)(((int)stk + 4)) = v0_5;
    *(unsigned char *)(((int)stk + 5)) = (*(signed char *)((v0_8 + 0x0)));
    L_C02128A:;
    v0_7 = (0x0);
    L_C02128C:;
    if (!(((*(signed char *)((v0_2 + v0_7))) == 0))) goto L_C0213B0;
    *(unsigned char *)(((int)stk + 0)) = (v0_7 << 1);
    v0_5 = (short)(FUN_0c01cd62((v0_7 << 1), 0x101)) == 0;
    v0_6 = (0xC01CD62);
    if (v0_5) goto L_C021330;
    v0_9 = *(signed char *)0xC30541F;
    v0_6 = (v0_9);
    v0_5 = ((v0_7 + v0_2));
    v0_8 = ((((((((v0_7 << 1) << 2) + (v0_7 << 1)) << 2) << 1) + 0xC5426C4) + 0x28));
    if ((v0_9 == 2)) goto L_C0212D6;
    if ((v0_6 == 3)) goto L_C0212EA;
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_3 + v0_7))) + 0x1);
    goto L_C021322;
    L_C0213B0:;
    v0_5 = (int)(v0_7 + 0x1) >= (int)v0_0;
    v0_7 = ((v0_7 + 0x1));
    if (v0_5) goto L_C0213BA;
    goto L_C02128C;
    L_C0213BA:;
    v0_5 = (0xC30EFA8);
    if (((*(int *)0xC30EFA8) == 0)) goto L_C0213E6;
    v0_6 = *(int *)((v0_5 + 0x0));
    *(unsigned int *)((v0_5 + 0x0)) = (v0_6 - 1);
    if (((v0_6 - 1) != 0)) goto L_C0213E6;
    *(unsigned char *)((v0_3 + 0x1)) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    *(unsigned char *)((v0_2 + 0x1)) = v0_0;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    FUN_0c05aab6(((*(signed char *)((v0_4 + 0x0))) << 1), 0x4);
    L_C0213E6:;
    v0_5 = (0xC30540C);
    if (((*(signed char *)((v0_2 + 0x0))) != 1)) goto L_C021426;
    v0_4 = *(signed char *)((v0_2 + 0x1));
    v0_6 = (v0_4);
    if ((v0_4 != 1)) goto L_C021426;
    v0_0 = *(short *)((v0_5 + 0x0));
    *(unsigned short *)((v0_5 + 0x0)) = (v0_0 - 1);
    if (((short)(v0_0 - 1) != 0)) goto L_C02145C;
    FUN_0c01fd10();
    FUN_0c02c95e();
    v0_0 = (int)((int)(((((((struct o0_int *)0xC309830)->v)) + ((((struct o4_int *)0xC309830)->v))) + ((((struct o8_int *)0xC309830)->v))) + 0x3) / (int)0x6);
    (((struct o10_uint *)0xC309830)->v) = v0_0;
    (((struct oC_uint *)0xC309830)->v) = v0_0;
    v0_6 = (v0_0);
    goto L_C02145C;
    L_C021426:;
    if (((*(signed char *)((v0_2 + 0x0))) == 2)) goto L_C021432;
    v0_4 = *(signed char *)((v0_2 + 0x1));
    v0_6 = (v0_4);
    if ((v0_4 != 2)) goto L_C02145C;
    L_C021432:;
    *(unsigned char *)((v0_3 + 0x1)) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    *(unsigned char *)((v0_2 + 0x1)) = v0_0;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    v0_1 = *(short *)((v0_5 + 0x0));
    *(unsigned short *)((v0_5 + 0x0)) = (v0_1 - 1);
    v0_6 = (v0_0);
    if (((short)(v0_1 - 1) != 0)) goto L_C02145C;
    (((struct o30_uchar *)0xC309830)->v) = ((*(signed char *)0xC309860) + 0x1);
    (((struct o8_uchar *)0xC30540E)->v) = 0x0;
    goto L_C02145C;
    L_C021322:;
    FUN_0c05aab6(((*(signed char *)((v0_4 + 0x0))) << 1), 0x3);
    goto L_C0213B0;
    L_C0212EA:;
    if (((*(signed char *)((((((int)stk + 0) + 0x4) + v0_7) + 0x0))) == 0)) goto L_C02130A;
    if (((*(int *)((v0_8 + 0x0))) != 0)) goto L_C02130A;
    if (((*(signed char *)((v0_3 + v0_7))) == 0)) goto L_C0213B0;
    L_C021306:;
    *(unsigned char *)((v0_5 + 0x0)) = v0_0;
    goto L_C021322;
    L_C02130A:;
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_3 + v0_7))) + 0x1);
    goto L_C021322;
    L_C0212D6:;
    if (((*(int *)((v0_8 + 0x0))) != 0)) goto L_C02130A;
    if (((*(signed char *)((v0_3 + v0_7))) != 0)) goto L_C021306;
    goto L_C0213B0;
    L_C021330:;
    v0_5 = (short)(FUN_0c01cd62((*(signed char *)(((int)stk + 0))), 0x40)) != 0;
    if (v0_5) goto L_C021346;
    if (!(((int)(*(short *)0xC309BCA) < (int)0xA))) goto L_C021346;
    v0_5 = (short)(FUN_0c01cd62((*(signed char *)(((int)stk + 0))), 0x800)) == 0;
    if (v0_5) goto L_C02138C;
    if (((*(signed char *)((v0_7 + 0xC305419))) != 1)) goto L_C02138C;
    *(unsigned char *)((v0_3 + v0_7)) = 0x0;
    goto L_C0213A6;
    L_C021346:;
    *(unsigned char *)((v0_3 + v0_7)) = v0_1;
    goto L_C0213B0;
    L_C0213A6:;
    FUN_0c05aab6(((*(signed char *)((v0_4 + 0x0))) << 1), 0x5);
    goto L_C0213B0;
    L_C02138C:;
    v0_5 = (short)(FUN_0c01cd62((*(signed char *)(((int)stk + 0))), 0x400)) == 0;
    if (v0_5) goto L_C0213B0;
    if (((*(signed char *)((v0_7 + 0xC305419))) != 0)) goto L_C0213B0;
    *(unsigned char *)((v0_3 + v0_7)) = v0_1;
    goto L_C0213A6;
    L_C021280:;
    *(unsigned char *)(((int)stk + 5)) = v0_5;
    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)((v0_8 + 0x0)));
    goto L_C02128A;
}

extern char *_builtin_strcpy(char *, const char *);
/* manual: reads the modem's reply lines (CONNECT, NOCARRIER, BUSY, DELAYED, NO DIALTONE, RING -> answer with ATA), with a
   time-out in mode 1; 307 cases, 184 of 184 instructions */
int FUN_0c020168(void)
{
    char buf[16];
    signed char *err = (signed char *)0xC309862;
    signed char *mode = (signed char *)0xC309858;
    int *len = (int *)0xC3054C0;
    int n, c, v;
    char *line = (char *)0xC305440;

    *(int *)0xC83C6C0 = 1;
    FUN_0c01fbdc();
    if (*(signed char *)0xC3054C4 == 1) {
        if ((short)--*(short *)0xC3052C6 < 0) {
            *mode = 21;
            *err = -16;
            _builtin_strcpy(line, (char *)0xC1A8940);
            return 0xC305440;
        }
    }
    for (;;) {
        n = FUN_0c183480(*(int *)0xC305430, (int)buf, 1);
        if (n == 0) {
            *err = 0;
            return n;
        }
        c = (signed char)buf[0];
        v = *(unsigned char *)(0xC206298 + (unsigned char)c) & 7;
        if (c != 10 && c != 13) {
            if (!v)
                continue;
            v = *len;
            *len = v + 1;
            line[v] = buf[0];
            continue;
        }
        line[*len] = 0;
        if (*len != 0)
            _builtin_strcpy((char *)0xC305244, line);
        *len = 0;
        n = FUN_0c187d98((int)line, 0xC1A894C, 7);
        if (n == 0) {
            *err = 1;
            ++*mode;
            return n;
        }
        if ((n = FUN_0c187d98((int)line, 0xC1A8940, 9)) == 0) {
            *err = -16;
            goto set;
        }
        if ((n = FUN_0c187d98((int)line, 0xC1A8954, 4)) == 0) {
            *err = -3;
            goto set;
        }
        if ((n = FUN_0c187d98((int)line, 0xC1A895C, 7)) == 0) {
            *err = -4;
            goto set;
        }
        if ((n = FUN_0c187d98((int)line, 0xC1A8964, 11)) == 0) {
            *err = -5;
            goto set;
        }
        if (FUN_0c187d98((int)line, 0xC1A8970, 4) == 0) {
            *err = 2;
            _builtin_strcpy(buf + 4, (char *)0xC1A8978);
            n = FUN_0c18353e(*(int *)0xC305430, (int)(buf + 4), strlen((int)(buf + 4)));
            *(short *)0xC3052C6 = 6000;
            return n;
        } else
            continue;
    set:
        *mode = 21;
        return n;
    }
}

