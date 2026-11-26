/* game/menu/option: functions 0C01EA00-0C01FA4E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct oA_short { char p[0xA]; short v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int FUN_0c010448(void);
int FUN_0c018e74(int);
int FUN_0c01cb7c(void);
int FUN_0c01cd40(int);
int FUN_0c01d094(void);
int FUN_0c01d27a(void);
int FUN_0c01e294(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c01e96a(int, int, int, int);
int FUN_0c01e9e4(void);
int FUN_0c01f6f8(void);
int FUN_0c01fc62(int, int, int, int);
int FUN_0c02b182(int);
int FUN_0c02e9d4(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05b05c(int, int);
int nlWaitVSync(void);
int FUN_0c183074(int);
int FUN_0c18422a(void);
int pl_ayame_frame_hook(int, int, int, int);
int FUN_0c184a90(int, int, int, int, int, int);
int FUN_0c184b4c(void);
int FUN_0c184c0c(int);
int FUN_0c184c48(int);
int FUN_0c1854a0(int);
int FUN_0c18589e(int, int);
int FUN_0c185940(int, int, int);
int FUN_0c185d50(int);
int FUN_0c186380(int);
int FUN_0c1868e0(int, int, int);
int FUN_0c187d24(int, int);
int strcpy(int, int, int);
int syCfgGetIndividualID(int);
int FUN_0c01ea00(int a4, int a5, int a6, int a7);
int FUN_0c01ea2c(void);
int FUN_0c01ea32(int a4, int a5, int a6, int a7);
int FUN_0c01f08a(void);
int FUN_0c01f0e2(int a4);
int FUN_0c01f2a4(void);
int FUN_0c01f30c(void);
int FUN_0c01f5c4(void);
int FUN_0c01f618(void);
int FUN_0c01f6ac(void);
int FUN_0c01f6e4(void);
int FUN_0c01f7f4(void);
int FUN_0c01f86c(void);
int FUN_0c01f870(void);
int FUN_0c01f8a2(void);
int FUN_0c01f8dc(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c01f9ec(void);

int FUN_0c01ea00(int a4, int a5, int a6, int a7)
{
    if ((unsigned char)(*(signed char *)0xC541F3D) != 99) {
        if ((*(signed char *)0xC30B6FC) != 0) {
            FUN_0c01e96a(a4, a5, a6, a7);
        }
        FUN_0c02e9d4();
        FUN_0c02b182(0x1);
    }
    return nlWaitVSync();
}

int FUN_0c01ea2c(void)
{
    return FUN_0c18422a();
}

int FUN_0c01ea32(int a4, int a5, int a6, int a7)
{
    return pl_ayame_frame_hook(0x0, a5, a6, a7);
}

int FUN_0c01f08a(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t0 = FUN_0c01cd40(0x8000);
    if ((short)t0 != 0) {
        *(unsigned int *)0xC30B6F8 = ((*(int *)0xC30B6F8) + 0x1);
    } else {
        *(unsigned int *)0xC30B6F8 = 0x0;
    }
    t1 = (short)t0;
    if ((int)(*(int *)0xC30B6F8) > (int)0x3C) {
        *(unsigned short *)0xC30540C = 0x0;
        t1 = 0x0;
    }
    t0 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned char *)0xC309859 = ((*(signed char *)0xC309859) + 0x1);
        return t1;
    }
    return FUN_0c184c48(0xC3050F4);
}

int FUN_0c01f0e2(int a4)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;

    *(unsigned int *)0xC83C6C0 = 0x1;
    (((struct oC_uchar *)0xC3050FC)->v) = 0xFFFFFFF8;
    t0 = (((struct o0_short *)0xC3050FC)->v);
    if (t0 == 4) {
        (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
        t1 = t0;
    } else {
        t0 = FUN_0c01cd40(0x8000);
        if ((short)t0 != 0) {
            *(unsigned int *)0xC30B6F8 = ((*(int *)0xC30B6F8) + 0x1);
        } else {
            *(unsigned int *)0xC30B6F8 = 0x0;
        }
        if ((int)(*(int *)0xC30B6F8) <= (int)0x3C) {
            t2 = (((struct o0_short *)0xC3050FC)->v);
            if ((t2 != 8) && (t2 != 5)) {
                (((struct o1_uchar *)0xC309858)->v) = 0x2;
                *(unsigned short *)0xC30540C = 0x64;
                t3 = t2;
            } else {
                t2 = (((struct oA_short *)0xC3050FC)->v);
                switch (t2) {
                case 2:
                    (((struct oC_uchar *)0xC3050FC)->v) = 0xFFFFFFF4;
                    break;
                case 3:
                    (((struct oC_uchar *)0xC3050FC)->v) = 0xFFFFFFF2;
                    break;
                case 6:
                    (((struct oC_uchar *)0xC3050FC)->v) = 0xFFFFFFF3;
                    break;
                default:
                    (((struct oC_uchar *)0xC3050FC)->v) = 0xFFFFFFF8;
                    break;
                }
                (((struct o0_uchar *)0xC309858)->v) = 0x5;
                (((struct o1_uchar *)0xC309858)->v) = 0x0;
                t3 = t2;
            }
            t2 = t3;
        } else {
            (((struct o0_uchar *)0xC309858)->v) = 0x5;
            (((struct o1_uchar *)0xC309858)->v) = 0x0;
            t2 = (short)t0;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c01f2a4(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC309859) << 2) + 0xC20E360));
    return ((int (*)(void))(t1))();
}


int FUN_0c01f5c4(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c01cd40(0x8000);
    if ((short)t0 != 0) {
        *(unsigned int *)0xC30B6F8 = ((*(int *)0xC30B6F8) + 0x1);
    } else {
        *(unsigned int *)0xC30B6F8 = 0x0;
    }
    t1 = (short)t0;
    if ((int)(*(int *)0xC30B6F8) > (int)0x3C) {
        *(unsigned short *)0xC30540C = 0x0;
        t1 = 0x0;
    }
    t0 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned char *)0xC309859 = ((*(signed char *)0xC309859) + 0x1);
        return t1;
    }
    return FUN_0c184c48(0xC3050F4);
}

int FUN_0c01f618(void)
{
    register int t0;
    register int t1;
    int t2;

    (((struct oC_uchar *)0xC3050FC)->v) = 0xFFFFFFF1;
    t0 = (((struct o0_short *)0xC3050FC)->v);
    if (t0 != 4) {
        t1 = FUN_0c01cd40(0x8000);
        if ((short)t1 != 0) {
            *(unsigned int *)0xC30B6F8 = ((*(int *)0xC30B6F8) + 0x1);
        } else {
            *(unsigned int *)0xC30B6F8 = 0x0;
        }
        if ((int)(*(int *)0xC30B6F8) <= (int)0x3C) {
            t2 = (((struct o0_short *)0xC3050FC)->v);
            if ((t2 != 8) && (t2 != 5)) {
                (((struct o1_uchar *)0xC309858)->v) = 0x2;
                *(unsigned short *)0xC30540C = 0x64;
                return t2;
            }
            t2 = (((struct oA_short *)0xC3050FC)->v);
            if (t2 == 6) {
                (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
                (((struct o3_uchar *)0xC309858)->v) = 0x0;
                *(unsigned short *)0xC30540C = 0x3C;
                return FUN_0c0573cc(0xFF000000, 0x0, 0x14);
            }
            (((struct o0_uchar *)0xC309858)->v) = 0x5;
            (((struct o1_uchar *)0xC309858)->v) = 0x0;
            return t2;
        }
        (((struct o0_uchar *)0xC309858)->v) = 0x5;
        (((struct o1_uchar *)0xC309858)->v) = 0x0;
        return (short)t1;
    }
    (((struct o0_uchar *)0xC309858)->v) = 0x5;
    (((struct o1_uchar *)0xC309858)->v) = 0x0;
    return t0;
}

int FUN_0c01f6ac(void)
{
    register int t0;
    register int t1;

    t0 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        t0 = FUN_0c01f6f8();
        t1 = t0;
        if (t0 != 0) {
            t0 = FUN_0c01e9e4();
            (((struct o0_uchar *)0xC309858)->v) = 0x1;
            (((struct o1_uchar *)0xC309858)->v) = 0x0;
            (((struct o2_uchar *)0xC309858)->v) = 0x0;
            (((struct o3_uchar *)0xC309858)->v) = 0x0;
            t1 = t0;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c01f6e4(void)
{
    register int t1;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t1 = *(int *)((((*(signed char *)0xC309859) << 2) + 0xC20E374));
    return ((int (*)(void))(t1))();
}

int FUN_0c01f7f4(void)
{
    int stk[4];
    register int t0;
    register int t3;
    register int t7;
    register int t8;
    register int t9;
    register int t12;
    register int t6;

    t0 = FUN_0c1868e0(0x2, 0x1, 0x0);
    *(unsigned int *)0xC309994 = t0;
    if ((int)t0 >= 0) {
        FUN_0c18589e(((int)stk + 0), 0x10);
        *(unsigned short *)(((int)stk + 0)) = 0x2;
        *(unsigned short *)(((int)stk + 2)) = (FUN_0c185d50(0x22B8));
        t3 = FUN_0c1854a0(0xC1A88BC);
        if (t3 != 0) {
            t7 = 0x4;
            t8 = (((int)stk + 0) + 0x4);
            t9 = (*(int *)(((*(int *)((t3 + 0x10))) + 0x0)));
            for (;;) {
                if (t7 == 0) {
                    break;
                }
                t6 = (*(signed char *)((t9 + 0x0)));
                t9 = (t9 + 0x1);
                t7 = (t7 - 1);
                *(unsigned char *)((t8 + 0x0)) = t6;
                t8 = (t8 + 0x1);
            }
            t12 = FUN_0c185940((*(int *)0xC309994), ((int)stk + 0), 0x10);
            if ((int)t12 < 0) {
                FUN_0c186380((*(int *)0xC309994));
                return 0xFFFFFFFF;
            }
            return 0x0;
        }
        FUN_0c186380((*(int *)0xC309994));
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int FUN_0c01f86c(void)
{
    return FUN_0c01f2a4();
}

int FUN_0c01f870(void)
{
    register int t2;

    t2 = FUN_0c01f7f4();
    if (t2 == -1) {
        (((struct o0_uchar *)0xC309858)->v) = 0x5;
    } else {
        (((struct o0_uchar *)0xC309858)->v) = ((*(signed char *)0xC309858) + 0x1);
        (((struct o1_uchar *)0xC309858)->v) = 0x0;
        (((struct o2_ushort *)0xC30AF96)->v) = 0x1C20;
        (((struct o0_ushort *)0xC30AF96)->v) = 0x1;
        t2 = 0xC30AF98;
    }
    return t2;
}

int FUN_0c01f8a2(void)
{
    return FUN_0c01f6e4();
}

int FUN_0c01f8dc(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t0 = *(signed char *)0xC309859;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        (((struct o0_uchar *)0xC309858)->v) = 0x8;
                        (((struct o3_uchar *)0xC309858)->v) = 0x0;
                        (((struct o2_uchar *)0xC309858)->v) = 0x0;
                        (((struct o1_uchar *)0xC309858)->v) = 0x0;
                        if ((*(signed char *)0xC309993) != 0) {
                            *(unsigned char *)0xC3054C4 = 0x1;
                        } else {
                            *(unsigned char *)0xC3054C4 = 0x0;
                        }
                        FUN_0c01fc62(0xC3054C4, 0x1, a6, a7);
                        return FUN_0c05b05c(0x1E, 0x0);
                    }
                    t1 = *(short *)0xC30EF6C;
                    *(unsigned short *)0xC30EF6C = (t1 - 1);
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
                    }
                    return t0;
                }
                t1 = FUN_0c01e294(a4, 0x1, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
                if (t1 != 0) {
                    if (t1 == 1) {
                        (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
                        t2 = FUN_0c018e74(0x10);
                        *(unsigned short *)0xC30EF6C = 0x20;
                        return t2;
                    }
                    return FUN_0c010448();
                }
                return t1;
            }
            t1 = FUN_0c01f6f8();
            if (t1 != 0) {
                (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
                (((struct o2_uchar *)0xC309858)->v) = 0x0;
                (((struct o3_uchar *)0xC309858)->v) = 0x0;
                FUN_0c01d27a();
                return FUN_0c01d094();
            }
            return t1;
        }
        t1 = *(short *)0xC30540C;
        *(unsigned short *)0xC30540C = (t1 - 1);
        if ((int)(short)(t1 - 1) >= 0) {
        } else {
            (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
        }
        return t0;
    }
    t0 = FUN_0c186380((*(int *)0xC309994));
    (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
    (((struct o3_uchar *)0xC309858)->v) = 0x0;
    *(unsigned short *)0xC30540C = 0x3C;
    return t0;
}

int FUN_0c01f9ec(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC309859;
    if (t0 == 0) {
        t1 = FUN_0c186380((*(int *)0xC309994));
        *(unsigned short *)0xC30540C = 0x3C;
        (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
        (((struct o3_uchar *)0xC309858)->v) = 0x0;
        t2 = t1;
    } else {
        if ((signed char)t0 == 1) {
            t1 = *(short *)0xC30540C;
            *(unsigned short *)0xC30540C = (t1 - 1);
            if ((int)(short)(t1 - 1) < 0) {
                (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
            }
            t1 = (signed char)t0;
        } else {
            t0 = FUN_0c01f6f8();
            t1 = t0;
            if (t0 != 0) {
                (((struct o0_uchar *)0xC309858)->v) = 0xF;
                (((struct oA_uchar *)0xC309858)->v) = (*(signed char *)0xC305108);
                t1 = 0xC305108;
            }
        }
        t2 = t1;
    }
    return t2;
}

/* manual: opens the screen: player name up to a comma into a save comment, console ID as 12 hex digits, three records in a frame
   block handed to FUN_0c184c0c; 12 cases, 274 of 274 instructions */
int FUN_0c01f30c(void)
{
    int f[30];
    short *s = (short *)f;
    signed char *name = (signed char *)0xC30A3FC;
    unsigned char *id = (unsigned char *)0xC309963;
    int i, n, x, hi, lo, c;

    FUN_0c183074(0xC01EA00);
    FUN_0c01e9e4();
    FUN_0c018e74(2);
    FUN_0c01cb7c();
    FUN_0c0573c0(0xFF000000, 0, 20);
    *(int *)0xC30B6F8 = 0;
    ++*(signed char *)0xC309859;
    *(char *)0xC3054C5 = 1;
    f[0] = (int)(f + 25);
    f[1] = (int)(f + 19);
    f[2] = (int)(f + 11);
    f[3] = 0xC1A8838;
    f[4] = 0xC1A8893;
    f[5] = 0xC305109;
    f[6] = 0xC309963;
    f[7] = 0xC30997F;
    f[9] = f[10] = 0;
    s[50] = 4;
    s[52] = 2;
    s[51] = s[54] = s[53] = 0;
    f[28] = f[29] = 0;
    s[40] = 120;
    s[42] = 30;
    s[39] = s[41] = 0;
    f[22] = 0xC1A88A0;
    f[23] = f[24] = 0;
    s[27] = 1500;
    f[14] = 0x12345678;
    s[30] = s[31] = s[32] = 0;
    s[26] = 4;
    f[17] = f[18] = 0;
    s[38] = (**(int **)0xC3BABB4 & 0x100) != 0;

    *name = 0;
    for (n = 0; n < 5; n++) {
        if (*(unsigned char *)(*(int *)0xC3BABB4 + 52 + n) == ',') {
            for (i = 0; i < n; i++)
                name[i] = *(signed char *)(*(int *)0xC3BABB4 + 52 + i);
            name[n] = 0;
            break;
        }
    }
    if (*name != 0) {
        strcpy(0xC305109, (int)name, (int)name);
        FUN_0c187d24(0xC305109, 0xC1A88A8);
        FUN_0c187d24(0xC305109, 0xC1A88AC);
    } else {
        strcpy(0xC305109, 0xC1A88AC, (int)name);
    }
    syCfgGetIndividualID(0xC309998);
    for (i = 0; i < 6; i++) {
        x = ((signed char *)0xC309998)[i];
        hi = (x & 0xF0) >> 4;
        lo = x & 15;
        c = hi < 10 ? hi + '0' : hi + '7';
        id[i * 2] = c;
        id[i * 2 + 1] = lo < 10 ? lo + '0' : lo + '7';
    }
    id[i * 2] = 0;
    strcpy(0xC30997F, 0xC1A88A4, c);
    FUN_0c184b4c();
    FUN_0c01ea2c();
    FUN_0c184a90(0, 0, 0, 0, 0, 0);
    *(int *)0xC305068 = (short)FUN_0c184c0c((int)f);
    ++*(signed char *)0xC309859;
    *(short *)0xC30540C = 100;
    return 0xC30540C;
}

