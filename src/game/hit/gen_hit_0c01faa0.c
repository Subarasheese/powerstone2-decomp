/* game/hit: functions 0C01FAA0-0C021470, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

/* @runtime _slow_strcpy=0C187990 */
/* @runtime _quick_strcpy=0C1878F0 */
extern char *_builtin_strcpy(char *, const char *);
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o16_short { char p[0x16]; short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o18_short { char p[0x18]; short v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_short { char p[0x1A]; short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o39_uchar { char p[0x39]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c01b990(void);
int FUN_0c02b182(int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03ec80(void);
int FUN_0c03f40c(int);
int FUN_0c0433f0(void);
int FUN_0c0433f8(void);
int FUN_0c0524bc(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c059c54(int);
int FUN_0c05b048(int, int);
int dbg_set_cell_size(int, int);
int nlLocate(int, int);
int FUN_0c17a550(int);
int dbg_printf(int, ...);
int FUN_0c183280(void);
int FUN_0c1832a4(int, int, int, int);
int FUN_0c18330c(int, int, int, int, int, int);
int FUN_0c183480(int, int, int);
int FUN_0c18353e(int, int, int);
int FUN_0c1837cc(int, int);
int FUN_0c1839f8(int, int, int, int);
int FUN_0c183a4e(void);
int strlen(int);
int FUN_0c187d98(int, int, int);
int FUN_0c01faa0(void);
void FUN_0c01fbdc(void);
int FUN_0c01fc62(int a4, int a5, int a6, int a7);
int FUN_0c01fce0(int a4, int a5, int a6, int a7);
void FUN_0c01fd10(void);
int FUN_0c01fd34(void);
int FUN_0c02032a(void);
int FUN_0c0205a0(void);
int FUN_0c02068e(void);
void FUN_0c0206b0(void);
int FUN_0c0206b4(int a4, int a5, int a6, int a7);
int FUN_0c0206be(void);
int FUN_0c020950(void);
int FUN_0c0209c6(int a4, int a5, int a6, int a7);
void FUN_0c020e8a(void);
int FUN_0c020e94(int a4, int a5, int a6, int a7);
int FUN_0c020eac(void);
int FUN_0c020f1c(int a4, int a5, int a6, int a7);
int FUN_0c020f98(void);
int FUN_0c020fe0(void);

int FUN_0c01faa0(void)
{
    register int t0;
    register int t4;

    t0 = *(signed char *)0xC30AF89;
    if (t0 != 0) {
        if ((signed char)t0 == 2) {
            *(unsigned char *)0xC309858 = 0x6;
        } else {
            *(unsigned char *)0xC309858 = 0x1;
        }
        t4 = (signed char)t0;
    } else {
        *(unsigned char *)0xC309858 = 0x6;
    }
    *(unsigned char *)0xC3052CA = 0x0;
    return t4;
}

void FUN_0c01fbdc(void)
{
    
}

int FUN_0c01fc62(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t2;

    FUN_0c01fce0(a4, a5, a6, a7);
    FUN_0c1832a4(0xC309728, 0xC309628, 0x100, 0x100);
    t2 = FUN_0c18330c(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    *(unsigned int *)0xC305430 = t2;
    if (t2 == -1) {
        *(unsigned char *)0xC309828 = 0x0;
    } else {
        *(unsigned char *)0xC309828 = 0x1;
    }
    return t2;
}

int FUN_0c01fce0(int a4, int a5, int a6, int a7)
{
    register int t4;

    if ((*(signed char *)0xC309828) != 0) {
        FUN_0c1839f8((*(int *)0xC305430), a5, a6, a7);
        t4 = FUN_0c183a4e();
        *(unsigned char *)0xC309828 = 0x0;
        (((struct o1_uchar *)0xC3054C5)->v) = 0x0;
        (((struct o0_uchar *)0xC3054C5)->v) = 0x0;
        *(unsigned char *)0xC30AF8A = 0x0;
    }
    return t4;
}

void FUN_0c01fd10(void)
{
    (((struct o0_uchar *)0xC309858)->v) = 0x0;
    (((struct o1_uchar *)0xC309858)->v) = 0x0;
    (((struct o2_uchar *)0xC309858)->v) = 0x0;
    (((struct o3_uchar *)0xC309858)->v) = 0x0;
    (((struct oA_uchar *)0xC309858)->v) = 0x0;
    (((struct o8_uchar *)0xC309858)->v) = 0x0;
    (((struct o0_ushort *)0xC30AC28)->v) = 0x0;
    (((struct o2_ushort *)0xC30AC28)->v) = 0x0;
}

int FUN_0c01fd34(void)
{
    register int t2;

    t2 = ((int (*)(void))((*(int *)((((*(signed char *)0xC309858) << 2) + 0xC20E520)))))();
    return (*(signed char *)0xC309862);
}

int FUN_0c02032a(void)
{
    int stk[3];
    register int t1;
    register int t16;
    register int t6;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t1 = FUN_0c1837cc((*(int *)0xC305430), 0xC305434);
    t16 = t1;
    if ((*(signed char *)0xC30543E) != 0) {
        if ((*(signed char *)0xC3054C4) == 0) {
            _builtin_strcpy((char *)stk, (const char *)0xC1A8980);
            t6 = strlen(((int)stk + 0));
            t16 = FUN_0c18353e((*(int *)0xC305430), ((int)stk + 0), t6);
            (((struct o20_uchar *)0xC309830)->v) = 0x0;
            (((struct o0_uint *)0xC309830)->v) = 0x0;
        } else {
            (((struct o28_uchar *)0xC309830)->v) = ((*(signed char *)0xC309858) + 0x1);
            t16 = t1;
        }
        (((struct o28_uchar *)0xC309830)->v) = ((*(signed char *)0xC309858) + 0x1);
    }
    (((struct o32_uchar *)0xC309830)->v) = 0x0;
    *(unsigned int *)0xC3054C0 = 0x0;
    return t16;
}

int FUN_0c0205a0(void)
{
    int stk[4];
    register int t5;
    int t8;
    register int t10;
    register int t13;
    register int t14;
    register int t16;
    register int t19;
    register int t3;

    *(unsigned int *)0xC83C6C0 = 0x1;
    FUN_0c1837cc((*(int *)0xC305430), 0xC305434);
    if ((*(signed char *)0xC30543E) == 0) {
        (((struct o0_uchar *)0xC309858)->v) = 0x10;
        (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFFA;
        t19 = 0x10;
    } else {
        for (;;) {
            t5 = FUN_0c183480((*(int *)0xC305430), ((int)stk + 0), 0x1);
            if (t5 != 0) {
                t8 = *(signed char *)(((int)stk + 0));
                if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)t8))) & 0x7) == 0) && ((t8 != 10) && (t8 != 13))) continue;
                t3 = 0xC305440;
                if ((t8 != 10) && (t8 != 13)) {
                    t10 = *(int *)0xC3054C0;
                    *(unsigned int *)0xC3054C0 = (t10 + 0x1);
                    *(unsigned char *)((t3 + ((t10 + 0x1) - 1))) = (*(signed char *)(((int)stk + 0)));
                    continue;
                }
                *(unsigned char *)((t3 + (*(int *)0xC3054C0))) = 0x0;
                *(unsigned int *)0xC3054C0 = 0x0;
                t13 = FUN_0c187d98(t3, 0xC1A89A0, 0x4);
                if (t13 == 0) {
                    break;
                }
                t14 = FUN_0c187d98(t3, 0xC1A89B0, 0x5);
                if (t14 == 0) {
                    (((struct o0_uchar *)0xC309858)->v) = 0x7;
                    (((struct oA_uchar *)0xC309858)->v) = 0x3;
                    return t14;
                }
                continue;
            }
            (((struct oA_uchar *)0xC309858)->v) = 0x0;
            return t5;
        }
        _builtin_strcpy((char *)stk + 0x4, (const char *)0xC1A89A8);
        t16 = strlen((((int)stk + 0) + 0x4));
        t19 = FUN_0c18353e((*(int *)0xC305430), (((int)stk + 0) + 0x4), t16);
        (((struct oA_uchar *)0xC309858)->v) = 0x0;
    }
    return t19;
}

int FUN_0c02068e(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t0 = (((struct o0_int *)0xC30983C)->v);
    (((struct o0_uint *)0xC30983C)->v) = (t0 - 1);
    t1 = 0xC83C6C0;
    if ((int)(t0 - 1) <= 0) {
        (((struct o1C_uchar *)0xC30983C)->v) = 0x7;
        (((struct o26_uchar *)0xC30983C)->v) = 0x3;
        t1 = 0x3;
    }
    return t1;
}

void FUN_0c0206b0(void)
{
    
}

int FUN_0c0206b4(int a4, int a5, int a6, int a7)
{
    *(unsigned char *)0xC309858 = ((*(signed char *)0xC309858) + 0x1);
    return FUN_0c01fce0(0xC309858, a5, a6, a7);
}

int FUN_0c0206be(void)
{
    (((struct o0_uchar *)0xC309858)->v) = 0x7;
    (((struct o1_uchar *)0xC3054C5)->v) = 0x0;
    (((struct o0_uchar *)0xC3054C5)->v) = 0x0;
    (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFF9;
    return 0xC3054C6;
}

int FUN_0c020950(void)
{
    register int t0;
    register int t1;

    (((struct o30_uchar *)0xC309829)->v) = 0x0;
    (((struct o39_uchar *)0xC309829)->v) = 0x0;
    (((struct o1_uchar *)0xC309584)->v) = 0x1;
    (((struct o0_uchar *)0xC309584)->v) = 0x1;
    (((struct o1_uchar *)0xC307580)->v) = 0x1;
    (((struct o0_uchar *)0xC307580)->v) = 0x1;
    (((struct o3_uchar *)0xC3054C6)->v) = 0x0;
    (((struct o2_uchar *)0xC3054C6)->v) = 0x0;
    (((struct o2_uchar *)0xC309584)->v) = 0x0;
    (((struct o1_uchar *)0xC309829)->v) = 0x0;
    (((struct o0_uchar *)0xC309829)->v) = 0x0;
    (((struct o0_uchar *)0xC3054C6)->v) = 0x1;
    t0 = 0xC309588;
    t1 = 0x0;
    for (;;) {
        *(unsigned short *)((t0 + 0xC)) = 0x0;
        t1 = (t1 + 0x1);
        *(unsigned short *)((t0 + 0xE)) = 0x0;
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = 0x0;
        *(unsigned short *)((t0 + 0x16)) = 0x0;
        *(unsigned short *)((t0 + 0x14)) = 0x0;
        *(unsigned short *)((t0 + 0x10)) = 0x0;
        *(unsigned short *)((t0 + 0x12)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x18)) = 0x0;
        *(unsigned short *)((t0 + 0x1A)) = 0x0;
        (((struct o26_ushort *)(t0))->v) = 0x0;
        (((struct o24_ushort *)(t0))->v) = 0x0;
        (((struct o20_ushort *)(t0))->v) = 0x0;
        (((struct o22_ushort *)(t0))->v) = 0x0;
        t0 = (t0 + 0x28);
        if ((int)(unsigned char)t1 >= (int)0x4) {
            break;
        }
    }
    return 0x22;
}

/* manual: network handshake by state byte 0C309862 (0 send "\nREDY\n" or wait; 1/3 read lines for REDY/START; 2 read for OK; 4 count down);
   78 cases, 233 of 233 instructions */
int FUN_0c0209c6(int a4, int a5, int a6, int a7)
{
    char msg[16];
    char ch;
    char first = a4;
    char *text;
    int state, next;

    if (*(short *)0x0C30AC2A > 1200)
        FUN_0c01fce0(0x0C30AC2A, a5, a6, a7);
    else
        ++*(unsigned short *)0x0C30AC2A;
    state = *(signed char *)0x0C309862;
    switch (state) {
    case 0:
        if (first != 0) {
            *(unsigned char *)0x0C309862 = 1;
            *(int *)0x0C3054C0 = 0;
            break;
        }
        text = (char *)0x0C1A89B8;
        next = 2;
        goto send;
    case 2:
        if (((int (*)(int))FUN_0c183280)(*(int *)0x0C305430) == 0)
            break;
    case 1:
    case 3:
        for (;;) {
            if (FUN_0c183480(*(int *)0x0C305430, (int)&ch, 1) == 0)
                break;
            if (!(((unsigned char *)0x0C206298)[(unsigned char)ch] & 7) && ch != 10 && ch != 13)
                continue;
            if (ch != 10 && ch != 13) {
                ((char *)0x0C305440)[(*(int *)0x0C3054C0)++] = ch;
                continue;
            }
            ((char *)0x0C305440)[*(int *)0x0C3054C0] = 0;
            *(int *)0x0C3054C0 = 0;
            if (state == 2) {
                if (FUN_0c187d98(0x0C305440, 0x0C1A89D0, 2) == 0) {
                    text = (char *)0x0C1A8998;
                    next = 4;
                    goto send;
                }
                continue;
            }
            if (FUN_0c187d98(0x0C305440, 0x0C1A89C0, 4) == 0) {
                text = (char *)0x0C1A89C8;
                next = 3;
                goto send;
            }
            if (FUN_0c187d98(0x0C305440, 0x0C1A89B0, 5) == 0) {
                *(unsigned char *)0x0C309862 = 5;
                break;
            }
        }
        break;
    case 4:
        if (--*(int *)0x0C309840 <= 0)
            *(unsigned char *)0x0C309862 = 5;
        break;
    }
    return *(signed char *)0x0C309862;
send:
    _builtin_strcpy(msg, text);
    FUN_0c18353e(*(int *)0x0C305430, (int)msg, strlen((int)msg));
    *(unsigned char *)0x0C309862 = next;
    if (next == 2)
        *(int *)0x0C3054C0 = 0;
    return *(signed char *)0x0C309862;
}

void FUN_0c020e8a(void)
{
    *(unsigned char *)0xC309858 = ((*(signed char *)0xC309858) + 0x1);
}

int FUN_0c020e94(int a4, int a5, int a6, int a7)
{
    register int t1;

    *(unsigned char *)0xC309858 = ((*(signed char *)0xC309858) + 0x1);
    t1 = FUN_0c01fce0(0xC309858, a5, a6, a7);
    *(unsigned short *)0xC3052C8 = 0x12C;
    return t1;
}

int FUN_0c020eac(void)
{
    register int t3;

    dbg_set_cell_size(0x10, 0x10);
    FUN_0c17a550(0xFFC00000);
    nlLocate(0xD, 0xF);
    t3 = dbg_printf(0xC1A89D4);
    *(unsigned char *)0xC309858 = 0x0;
    return t3;
}

int FUN_0c020f1c(int a4, int a5, int a6, int a7)
{
    (((struct o0_uchar *)0xC309860)->v) = ((*(signed char *)0xC309860) + 0x1);
    (((struct o2_uchar *)0xC309860)->v) = 0x1;
    (((struct o1_uchar *)0xC3054C5)->v) = 0x0;
    (((struct o0_uchar *)0xC3054C5)->v) = 0x0;
    *(unsigned char *)0xC30AF8A = 0x0;
    return FUN_0c01fce0(0xC309860, a5, a6, a7);
}

int FUN_0c020f98(void)
{
    register int t2;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t2 = ((int (*)(void))((*(int *)((((*(signed char *)0xC309860) << 2) + 0xC20E588)))))();
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    FUN_0c038e88(0x8);
    FUN_0c0524bc();
    FUN_0c03ec80();
    return FUN_0c02b182(0x0);
}

int FUN_0c020fe0(void)
{
    int t7;

    *(unsigned char *)0xC309860 = ((*(signed char *)0xC309860) + 0x1);
    FUN_0c01b990();
    *(volatile signed char *)0xC309993;
    *(unsigned int *)0xC30A50C = ((*(int *)0xC30A50C) + (FUN_0c0433f8()));
    (((struct o0_ushort *)0xC309BCA)->v) = (((((struct o0_short *)0xC309BCA)->v)) + 0x1);
    (((struct o16_ushort *)0xC30540C)->v) = (((((struct o16_short *)0xC30540C)->v)) + 0x1);
    t7 = FUN_0c0433f0();
    if (((0x1 & t7) != 0) && ((0x4 & t7) != 0)) {
        (((struct o2_ushort *)0xC309BCA)->v) = (((((struct o2_short *)0xC309BCA)->v)) + 0x1);
        (((struct o0_ushort *)0xC309C6C)->v) = (((((struct o0_short *)0xC309C6C)->v)) + 0x1);
        (((struct o18_ushort *)0xC30540C)->v) = (((((struct o18_short *)0xC30540C)->v)) + 0x1);
        (((struct o0_ushort *)0xC30A3E8)->v) = (((((struct o0_short *)0xC30A3E8)->v)) + 0x1);
    } else {
        if (((0x1 & t7) == 0) && ((0x4 & t7) == 0)) {
            (((struct o4_ushort *)0xC309BCA)->v) = (((((struct o4_short *)0xC309BCA)->v)) + 0x1);
            (((struct o2_ushort *)0xC309C6C)->v) = (((((struct o2_short *)0xC309C6C)->v)) + 0x1);
            (((struct o1A_ushort *)0xC30540C)->v) = (((((struct o1A_short *)0xC30540C)->v)) + 0x1);
            (((struct o2_ushort *)0xC30A3E8)->v) = (((((struct o2_short *)0xC30A3E8)->v)) + 0x1);
        } else {
            if (((0x1 & t7) != 0) && ((0x4 & t7) == 0)) {
                if ((*(signed char *)0xC309993) != 0) {
                    (((struct o4_ushort *)0xC309BCA)->v) = (((((struct o4_short *)0xC309BCA)->v)) + 0x1);
                    (((struct o2_ushort *)0xC309C6C)->v) = (((((struct o2_short *)0xC309C6C)->v)) + 0x1);
                    (((struct o1A_ushort *)0xC30540C)->v) = (((((struct o1A_short *)0xC30540C)->v)) + 0x1);
                    (((struct o0_ushort *)0xC30A3E8)->v) = (((((struct o0_short *)0xC30A3E8)->v)) + 0x1);
                } else {
                    (((struct o2_ushort *)0xC309BCA)->v) = (((((struct o2_short *)0xC309BCA)->v)) + 0x1);
                    (((struct o0_ushort *)0xC309C6C)->v) = (((((struct o0_short *)0xC309C6C)->v)) + 0x1);
                    (((struct o18_ushort *)0xC30540C)->v) = (((((struct o18_short *)0xC30540C)->v)) + 0x1);
                    (((struct o2_ushort *)0xC30A3E8)->v) = (((((struct o2_short *)0xC30A3E8)->v)) + 0x1);
                }
            } else {
                if (((0x1 & t7) == 0) && ((t7 & 0x4) != 0)) {
                    if ((*(signed char *)0xC309993) == 0) {
                        (((struct o4_ushort *)0xC309BCA)->v) = (((((struct o4_short *)0xC309BCA)->v)) + 0x1);
                        (((struct o2_ushort *)0xC309C6C)->v) = (((((struct o2_short *)0xC309C6C)->v)) + 0x1);
                        (((struct o1A_ushort *)0xC30540C)->v) = (((((struct o1A_short *)0xC30540C)->v)) + 0x1);
                        (((struct o0_ushort *)0xC30A3E8)->v) = (((((struct o0_short *)0xC30A3E8)->v)) + 0x1);
                    } else {
                        (((struct o2_ushort *)0xC309BCA)->v) = (((((struct o2_short *)0xC309BCA)->v)) + 0x1);
                        (((struct o0_ushort *)0xC309C6C)->v) = (((((struct o0_short *)0xC309C6C)->v)) + 0x1);
                        (((struct o18_ushort *)0xC30540C)->v) = (((((struct o18_short *)0xC30540C)->v)) + 0x1);
                        (((struct o2_ushort *)0xC30A3E8)->v) = (((((struct o2_short *)0xC30A3E8)->v)) + 0x1);
                    }
                }
            }
        }
    }
    (((struct o10_uchar *)0xC30540C)->v) = 0x0;
    (((struct oF_uchar *)0xC30540C)->v) = 0x0;
    (((struct oE_uchar *)0xC30540C)->v) = 0x0;
    (((struct oD_uchar *)0xC30540C)->v) = 0x0;
    if ((int)((((struct o0_short *)0xC309BCA)->v)) >= (int)0xA) {
        (((struct oE_uchar *)0xC30540C)->v) = 0x1;
        (((struct oD_uchar *)0xC30540C)->v) = 0x1;
    }
    FUN_0c059c54(0x14);
    FUN_0c05b048(0x1E, 0x0);
    (((struct o0_uchar *)0xC30EFA5)->v) = 0x1;
    FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x14);
    (((struct o0_ushort *)0xC30540C)->v) = 0x1A;
    (((struct o2_ushort *)0xC30540C)->v) = 0x14;
    *(unsigned int *)0xC30EFA8 = 0xE10;
    return 0xC30540E;
}
