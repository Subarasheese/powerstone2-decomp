/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4B_uchar { char p[0x4B]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c016244(void);
int FUN_0c017a2e(void);
int FUN_0c017be8(void);
int FUN_0c017c70(int, int, int);
int FUN_0c035c1a(int, int);
int FUN_0c035c44(int, int);
int FUN_0c035d74(int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c0377b2(int);
int FUN_0c0385b2(int);
int FUN_0c0385e0(int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03ae7a(void);
int FUN_0c03aeec(void);
int FUN_0c03b05a(void);
int FUN_0c03b14a(void);
int FUN_0c03b1c8(void);
int FUN_0c03da62(int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c03f4d4(void);
int FUN_0c03f64c(void);
int FUN_0c03f7ce(void);
int FUN_0c03faf8(void);
int FUN_0c05f22c(int);
int FUN_0c067784(void);
int FUN_0c10356c(int);
int FUN_0c115238(void);
int FUN_0c115292(int, int, int, float);
int FUN_0c1152fe(void);
int FUN_0c11534c(void);
int FUN_0c1153bc(void);
int FUN_0c11549a(void);
int FUN_0c11550e(void);
int FUN_0c115680(int, int, int, int);
int FUN_0c1159a4(int, int, int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c163a70(int, int, int, int);
int FUN_0c163cc0(int, int, int);
int FUN_0c16fa76(int);
int FUN_0c187798(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c187b48(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c1034ba(int a4);
int FUN_0c1035c2(int a4);
int FUN_0c128da4(int a4);
int FUN_0c116218(int a4);
int FUN_0c16ab9e(int a4, int a5);
int FUN_0c16f890(int a4, int a5, int a6, int a7, int a8);
int FUN_0c16498c(int a4, int a5, int a6, int a7);
int FUN_0c115c38(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0167da(void);
int FUN_0c0360dc(int a4, int a5, int a6, int a7);
int FUN_0c036a9c(int a4, int a5, int a6, int a7, int a8);
int FUN_0c03da82(int a4, int a5, int a6, int a7);
int FUN_0c03f0aa(void);
int FUN_0c064892(int a4, int a5);

int FUN_0c1034ba(int a4)
{
    register int t0;
    register int t10;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t10 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            (((struct o6C_float *)((*(int *)((((0xC4 + t0) + t1) + 0x0)))))->v) = (*(float *)((((a4 << 2) + 0xC2908A8) + 0x0)));
            (((struct o70_float *)((*(int *)((((0xC4 + t0) + t1) + 0x0)))))->v) = (*(float *)((t1 + 0xC2908B8)));
            t2 = (t2 + 0x1);
            (((struct o74_float *)((*(int *)((((0xC4 + t0) + t1) + 0x0)))))->v) = (*(float *)((0xC2908D8 + t1)));
            t1 = (t1 + 0x4);
            if ((int)t2 >= (int)0x4) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC10324C;
        t10 = a4;
    }
    return t10;
}

int FUN_0c1035c2(int a4)
{
    register int t15;
    register int t18;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)(((*(int *)0xC290914) + 0x0))), (*(int *)0xC4B410C));
        *(unsigned short *)((a4 + 0x1C)) = (*(short *)((0xC541D20 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x98))));
        FUN_0c10356c(a4);
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        t15 = *(signed char *)0xC541F44;
        t18 = (unsigned char)t15;
        if ((unsigned char)t15 == 1) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            (((struct oB0_float *)(a4))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t18 = 0x15;
        }
        return t18;
    }
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0333333351f);
    if (0.0f > ((((struct oB0_float *)(a4))->v))) {
        return FUN_0c03f346(a4);
    }
    return 0xB0;
}

int FUN_0c128da4(int a4)
{
    register int t3;
    register int t14;

    FUN_0c037320(0xE, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, 0x1);
    t14 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC128E32;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03744a(((((struct oC4_int *)(t3))->v)), 0x0, 0xE, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)0xC2A0F98) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(a4))->v)) + (*(float *)0xC128F08));
        t14 = 0x2C;
    }
    return t14;
}

int FUN_0c116218(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    t0 = FUN_0c05f22c(0x3FCF);
                    t1 = t0;
                    if (t0 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o18_uchar *)(a4))->v) = 0x0;
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t1 = 0x16;
                    }
                }
                return t1;
            }
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                return FUN_0c117e76();
            }
            return t0;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    }
    FUN_0c117944(0xC0);
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c16ab9e(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c037320((*(int *)(((a5 << 2) + 0xC203B78))), (*(int *)0xC4B40D8));
    t2 = FUN_0c03f444(0x1, 0x0, t1);
    t1 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, (*(int *)(((a5 << 2) + 0xC203B78))), (*(int *)0xC4B40D8));
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x4)) = 0xC16AA88;
        *(unsigned char *)((t2 + 0x2)) = a5;
        t3 = ((int (*)(int))(FUN_0c187798))(0x1);
        t3 = ((int (*)(void))(FUN_0c187798))();
        *(unsigned int *)((t2 + 0x10)) = a4;
        (((struct oAA_uchar *)(t2))->v) = t0;
        (((struct oAB_uchar *)(t2))->v) = 0x2;
        t1 = 0xAB;
    }
    return t1;
}

int FUN_0c16f890(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    register int t1;
    register int t3;
    register int t5;
    register int t7;

    t0 = *(int *)0xC475AE4;
    if (a8 == 0) {
        if ((0x800 & t0) != 0) {
            t1 = *(int *)((a4 + 0x0));
            *(unsigned int *)((a4 + 0x0)) = (t1 - a7);
            if ((int)(t1 - a7) >= (int)a5) {
            } else {
                *(unsigned int *)((a4 + 0x0)) = a5;
            }
            return 0x1;
        }
        if ((t0 & 0x400) != 0) {
            t3 = *(int *)((a4 + 0x0));
            *(unsigned int *)((a4 + 0x0)) = (t3 + a7);
            if ((int)(t3 + a7) <= (int)a6) {
            } else {
                *(unsigned int *)((a4 + 0x0)) = a6;
            }
            return 0x1;
        }
        return 0x0;
    }
    if ((0x800 & t0) != 0) {
        t5 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t5 - a7);
        if ((int)(t5 - a7) < (int)a5) {
            *(unsigned int *)((a4 + 0x0)) = a6;
        }
        return 0x1;
    }
    if ((t0 & 0x400) != 0) {
        t7 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t7 + a7);
        if ((int)(t7 + a7) > (int)a6) {
            *(unsigned int *)((a4 + 0x0)) = a5;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16498c(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (a7 != 0) {
        if (a7 != 1) {
            if (a7 != 2) {
                return a7;
            }
            t0 = FUN_0c163a70(a4, a5, a6, 0x2);
            if (t0 != 0) {
                *(unsigned int *)((t0 + 0x4)) = 0xC164644;
                *(unsigned char *)((t0 + 0x2)) = a7;
                *(unsigned char *)((t0 + 0x1)) = a4;
            }
            return FUN_0c163cc0(a4, a5, a6);
        }
        t0 = FUN_0c163a70(a4, a5, a6, 0x1);
        if (t0 != 0) {
            *(unsigned int *)((t0 + 0x4)) = 0xC1642FC;
            *(unsigned char *)((t0 + 0x2)) = a7;
            *(unsigned char *)((t0 + 0x1)) = a4;
        }
        return FUN_0c163cc0(a4, a5, a6);
    }
    t0 = FUN_0c163a70(a4, a5, a6, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC163F9E;
        *(unsigned char *)((t0 + 0x2)) = a7;
        *(unsigned char *)((t0 + 0x1)) = a4;
    }
    return FUN_0c163cc0(a4, a5, a6);
}

int FUN_0c115c38(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    t0 = *(signed char *)0xC535BAD;
    if ((unsigned int)(t0 - 1) < (unsigned int)0xC) {
        switch (((t0 - 1) << 1)) {
            case 0:
            {
                FUN_0c115238();
            }
                break;
            case 2:
            {
                FUN_0c115292(a4, a5, a6, f4);
            }
                break;
            case 4:
            {
                FUN_0c1152fe();
            }
                break;
            case 6:
            {
                FUN_0c11534c();
            }
                break;
            case 8:
            {
                FUN_0c1153bc();
            }
                break;
            case 10:
            {
                FUN_0c11549a();
            }
                break;
            case 12:
            {
                FUN_0c11550e();
            }
                break;
            case 14:
            {
                FUN_0c115680(a4, a5, a6, a7);
            }
                break;
            case 16:
            {
                FUN_0c1159a4(a4, a5, a6);
            }
                break;
            default:
            {
                FUN_0c115238();
            }
                break;
        }
    }
    return FUN_0c0385e0(0xC532498);
}

int FUN_0c0167da(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = FUN_0c016244();
    t1 = *(int *)0xC304BA0;
    if (t0 != (unsigned char)(*(signed char *)((t1 + 0x4F)))) {
        t2 = *(signed char *)((t1 + 0x4F));
        if (((unsigned char)t2 != 0) && ((unsigned char)t2 != 1)) {
            if ((unsigned char)t2 != 2) {
                if ((unsigned char)t2 != 3) {
                    FUN_0c017c70(t1, 0xC304BA0, t0);
                    FUN_0c017be8();
                    return FUN_0c017a2e();
                }
                t2 = *(signed char *)((t1 + 0x4A));
                if (((unsigned char)t2 & 32) == 0) {
                    (((struct o4B_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x4B))) & 0x4);
                    t3 = *(int *)0xC304BA0;
                    (((struct o4B_uchar *)(t3))->v) = ((*(signed char *)((t3 + 0x4B))) | (*(signed char *)(((0x4F + t3) + 0x0))));
                    FUN_0c017c70(t1, 0xC304BA0, t0);
                    FUN_0c017be8();
                    return FUN_0c017a2e();
                }
                return (unsigned char)t2;
            }
            t2 = *(signed char *)((t1 + 0x4A));
            if (((unsigned char)t2 & 28) == 0) {
                t3 = *(signed char *)((t1 + 0x4A));
                if (((unsigned char)t3 & 32) == 0) {
                    (((struct o4B_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x4B))) & 0x4);
                    t4 = *(int *)0xC304BA0;
                    (((struct o4B_uchar *)(t4))->v) = ((*(signed char *)((t4 + 0x4B))) | (*(signed char *)(((0x4F + t4) + 0x0))));
                    FUN_0c017c70(t1, 0xC304BA0, t0);
                    FUN_0c017be8();
                    return FUN_0c017a2e();
                }
                return (unsigned char)t3;
            }
            return (unsigned char)t2;
        }
        t2 = *(signed char *)((t1 + 0x4A));
        if (((unsigned char)t2 & 2) == 0) {
            (((struct o4B_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x4F))) | 0x4);
            FUN_0c017c70(t1, 0xC304BA0, t0);
            FUN_0c017be8();
            return FUN_0c017a2e();
        }
        return (unsigned char)t2;
    }
    return 0x4F;
}

int FUN_0c0360dc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(FUN_0c035c44))(((*(int *)(((((a7 << 1) << 2) + a6) + 0x0))) + a6), (*(int *)(((((a7 << 1) << 2) + a6) + 0x4))), a6, a7);
    FUN_0c187a88((*(int *)((((a4 << 2) + 0xC4C0558) + 0x0))), (*(int *)0xC3BD45C), t0);
    FUN_0c0385b2((*(int *)((((a4 << 2) + 0xC4C0558) + 0x0))));
    if ((*(signed char *)0xC478C2C) != 0) {
        return FUN_0c16fa76(0x1);
    }
    t0 = ((int (*)(int, int))(FUN_0c035c44))(((*(int *)((((((a7 + 0x1) << 1) << 2) + a6) + 0x0))) + a6), (*(int *)((((((a7 + 0x1) << 1) << 2) + a6) + 0x4))));
    return FUN_0c187a88((*(int *)(((a4 << 2) + 0xC4F458C))), (*(int *)0xC3BD45C), t0);
}


int FUN_0c03da82(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03add8(a4, a5, a6, a7);
    *(unsigned int *)((a4 + 0x4)) = t0;
    t1 = 0xFFFFFFFF;
    if ((int)t0 < 0) {
    } else {
        if ((*(int *)((a4 + 0x4))) != 0) {
            *(unsigned int *)((a4 + 0xC)) = (FUN_0c03ae7a());
            *(unsigned int *)((a4 + 0x8)) = (FUN_0c03b14a());
            *(unsigned int *)((a4 + 0x10)) = (FUN_0c03aeec());
            *(unsigned int *)((a4 + 0x18)) = (FUN_0c03b05a());
            *(unsigned int *)((a4 + 0x14)) = (FUN_0c03b1c8());
            if ((*(int *)((a4 + 0xC))) != 0) {
                FUN_0c03da62(a4);
                (((struct o0_uchar *)0xC3DC242)->v) = 0x6;
                (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                t0 = 0x1;
            } else {
                if ((*(int *)((a4 + 0x8))) != 0) {
                    (((struct o0_uchar *)0xC3DC242)->v) = 0x8;
                    (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                    t1 = 0x1;
                } else {
                    t1 = 0x0;
                    if ((*(signed char *)((a4 + 0x2))) == 4) {
                    } else {
                        (((struct o0_uchar *)0xC3DC242)->v) = 0x4;
                        (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                        t1 = 0x1;
                    }
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            t0 = 0x0;
            if ((*(signed char *)((a4 + 0x2))) == 4) {
            } else {
                (((struct o0_uchar *)0xC3DC242)->v) = 0x4;
                (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                t0 = 0x1;
            }
            t1 = t0;
        }
    }
    return t1;
}

int FUN_0c03f0aa(void)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c03f4d4();
    FUN_0c03faf8();
    FUN_0c03f64c();
    FUN_0c03f7ce();
    (((struct o0_uint *)0xC532484)->v) = 0xC4FDEB4;
    t0 = 0x1;
    t1 = 0xC4FDEB4;
    t2 = 0xC4FDEB4;
    for (;;) {
        FUN_0c187b48(t1, 0x0, 0x430);
        if (t0 != 0xC8) {
            *(unsigned int *)((t2 + 0x8)) = (t2 + 0x430);
        }
        t1 = (t1 + 0x430);
        t2 = (t2 + 0x430);
        t0 = (t0 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)0xC532434) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC532434 + t0)) = 0x0;
        *(unsigned int *)((0xC53245C + t0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x28) {
            break;
        }
    }
    (((struct o4_uint *)0xC532484)->v) = 0xC8;
    return FUN_0c067784();
}

int FUN_0c064892(int a4, int a5)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t3;
    register int t8;
    register int t0;
    register int t4;
    register int t7;
    int t9;
    register int t10;
    register float u11;
    register float u12;
    register int t15;
    register int t17;
    register int t19;

    t1 = 0x0;
    t2 = (0xC + a4);
    t3 = 0x1;
    for (;;) {
        if ((int)t3 >= (int)a5) {
            break;
        }
        t2 = (t2 + 0xC);
        t0 = 0xC;
        t0 = (FUN_0c187798(a4, a5, t1));
        t8 = t7;
        for (;;) {
            if (((int)t8 >= 0) && (t9 = (int)(((unsigned int)t8) >> 31), t0 = 0x8, u11 = *(float *)((((((t8 << 1) + t8) << 2) + t10) + t0)), t0 = 0x8, u12 = *(float *)((((int)stk + 0) + t0)), u11 > u12)) {
                t4 = t8;
                t4 = (t4 << 1);
                t4 = (t4 + t8);
                t4 = (t4 << 2);
                t4 = (t4 + t10);
                t0 = 0xC;
                t0 = (FUN_0c187798(t10, 0x0, t8));
                t8 = (t15 - 1);
                continue;
            }
            break;
        }
        t0 = 0xC;
        t0 = (FUN_0c187798(t17, 0x0, t8));
        t1 = (t19 + 0x1);
        t3 = (t3 + 0x1);
    }
    return t0;
}
