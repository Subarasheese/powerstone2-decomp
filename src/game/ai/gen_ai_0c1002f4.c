/* game/ai: functions 0C1002F4-0C101BF6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_short { char p[0x10]; short v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA_short { char p[0xA]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c02ec70(void);
int FUN_0c02f4ac(void);
int FUN_0c02f4c2(int);
int FUN_0c02f7a0(void);
int FUN_0c02f80c(void);
int FUN_0c02f81c(void);
int FUN_0c036606(void);
int FUN_0c036de8(int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c0527e6(void);
int FUN_0c056e44(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c05a344(void);
int FUN_0c05f222(void);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c0fe4ec(int);
int FUN_0c0fe530(void);
int FUN_0c100604(void);
int FUN_0c1008c4(void);
int FUN_0c10489c(void);
int FUN_0c10491c(void);
int FUN_0c10662c(void);
int FUN_0c10af74(void);
int FUN_0c10c9ce(void);
int FUN_0c10f4b2(void);
int FUN_0c111680(void);
int FUN_0c114c34(void);
int FUN_0c115d96(void);
int FUN_0c118d7a(int);
int FUN_0c118e94(void);
int FUN_0c119c94(void);
int FUN_0c11e19c(void);
int FUN_0c16f7ba(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlLocate(int, int);
int FUN_0c17a550(int);
int dbg_printf(int, ...);
int FUN_0c187798(void);
int syRtcGetDate(int);
int FUN_0c2b1b16(int);
int FUN_0c2b1b1c(void);
int FUN_0c1002f4(void);
int FUN_0c10056c(void);
int FUN_0c100650(void);
int thunk_FUN_0c10af74(float f4);
int FUN_0c100660(void);
int thunk_FUN_0c10c9ce(void);
int FUN_0c100672(void);
int thunk_FUN_0c10f4b2(float f4);
int FUN_0c100684(void);
int thunk_FUN_0c114c34(void);
int FUN_0c100696(void);
int FUN_0c1006a2(void);
int FUN_0c100706(void);
int FUN_0c100712(void);
int FUN_0c100780(int a4);
int FUN_0c10085a(void);
int FUN_0c100cbc(void);
int FUN_0c101000(void);
int FUN_0c1016e8(void);
int FUN_0c101b30(void);


int FUN_0c10056c(void)
{
    register int t0;

    t0 = *(int *)0xC474738;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        FUN_0c100706();
                        return FUN_0c100604();
                    }
                    FUN_0c100696();
                    return FUN_0c100604();
                }
                FUN_0c100684();
                return FUN_0c100604();
            }
            FUN_0c100672();
            return FUN_0c100604();
        }
        FUN_0c100660();
        return FUN_0c100604();
    }
    FUN_0c100650();
    return FUN_0c100604();
}

int FUN_0c100650(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x0;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int thunk_FUN_0c10af74(float f4)
{
    return FUN_0c10af74();
}

int FUN_0c100660(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x1;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int thunk_FUN_0c10c9ce(void)
{
    return FUN_0c10c9ce();
}

int FUN_0c100672(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x2;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int thunk_FUN_0c10f4b2(float f4)
{
    return FUN_0c10f4b2();
}

int FUN_0c100684(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x3;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int thunk_FUN_0c114c34(void)
{
    return FUN_0c114c34();
}

int FUN_0c100696(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x4;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}


int FUN_0c100706(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x5;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int FUN_0c100712(void)
{
    register int t0;

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return (unsigned char)t0;
            }
            return FUN_0c05f222();
        }
        return FUN_0c0fe530();
    }
    *(unsigned char *)0xC541F45 = ((*(signed char *)0xC541F45) + 0x1);
    FUN_0c100cbc();
    FUN_0c0fe4ec(0x7);
    return FUN_0c0fe530();
}

int FUN_0c100780(int a4)
{
    int s0;
    register int t23;
    int R1000;

    R1000 = s0;

    R1000 = 0xC532498;
    if (a4 == 0) {
        FUN_0c06780e(0x5);
        FUN_0c03ea04(0xB, 0x0);
        *(unsigned char *)(((R1000) + 0x2)) = 0xE;
        *(unsigned char *)0xC53970A = 0x0;
        FUN_0c036de8(0x15);
        FUN_0c036606();
        FUN_0c06785c();
        FUN_0c03ea04(0xB, 0x0);
    } else {
        FUN_0c06780e(0x5);
        FUN_0c03ea04(0xB, 0x0);
        *(unsigned char *)(((R1000) + 0x2)) = 0xE;
        *(unsigned char *)0xC53970A = 0xF;
        FUN_0c036de8(0x15);
        FUN_0c036606();
        FUN_0c06785c();
        FUN_0c03ea04(0xB, 0x0);
        (((struct o3714_uchar *)((R1000)))->v) = 0x0;
    }
    *(unsigned char *)0xC5397B0 = 0x0;
    (((struct o18_uint *)0xC474720)->v) = 0x0;
    (((struct o0_uint *)0xC474720)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC474720)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xC474720)->v) = 0xFFFFFFFF;
    (((struct o0_uint *)0xC474B9C)->v) = (FUN_0c115d96());
    (((struct oC_uint *)0xC474B9C)->v) = (FUN_0c119c94());
    (((struct o10_uint *)0xC474B9C)->v) = (FUN_0c11e19c());
    (((struct o28_uint *)0xC474B9C)->v) = (FUN_0c111680());
    t23 = FUN_0c118e94();
    *(unsigned int *)0xC474C3C = t23;
    return t23;
}

int FUN_0c10085a(void)
{
    (((struct o14_uchar *)(((((struct o0_int *)0xC474B9C)->v))))->v) = 0x63;
    (((struct o14_uchar *)(((((struct oC_int *)0xC474B9C)->v))))->v) = 0x63;
    (((struct o14_uchar *)(((((struct o10_int *)0xC474B9C)->v))))->v) = 0x63;
    (((struct o14_uchar *)(((((struct o28_int *)0xC474B9C)->v))))->v) = 0x63;
    (((struct o14_uchar *)((*(int *)0xC474C3C)))->v) = 0x63;
    return 0x14;
}

int FUN_0c100cbc(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned int *)0xC542B80 = (*(int *)0xC47471C);
    t0 = 0x1B8;
    t1 = 0xC47471C;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 < (int)0xBF) {
            t1 = 0xC5429C8;
            t1 = (t1 + 0x4C);
            t1 = (t1 + t2);
            t0 = t2;
            t0 = (t0 << 2);
            t0 = (*(int *)((0xC474104 + t0)));
            *(unsigned char *)((t1 + 0x1)) = t0;
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0xC0) {
            break;
        }
    }
    t1 = 0xC473D04;
    t2 = 0xC474104;
    for (;;) {
        t3 = *(int *)((t2 + 0x0));
        if ((int)t3 > 0) {
            t4 = (*(int *)((t1 + 0x0)));
            t4 = (t4 | 0x10);
            *(unsigned int *)((t1 + 0x0)) = t4;
        }
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0xC474404) {
            break;
        }
    }
    t1 = t0;
    t0 = t3;
    t2 = 0x300;
    t3 = 0x10;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 < (int)0xBF) {
            t2 = 0x1C8;
            t3 = t4;
            t3 = (t3 << 2);
            t2 = (t2 + 0xC5429C8);
            t2 = (t2 + t3);
            t1 = t3;
            t0 = (*(int *)((0xC473D04 + t1)));
            t0 = (t0 & 0xFFFFEFFF);
            *(unsigned int *)((t2 + 0x4)) = t0;
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0xC0) {
            break;
        }
    }
    (((struct o0_uchar *)0xC542F9C)->v) = 0x0;
    (((struct o1_uchar *)0xC542F9C)->v) = 0x0;
    (((struct o2_uchar *)0xC542F9C)->v) = 0x0;
    (((struct o3_uchar *)0xC542F9C)->v) = 0x0;
    t0 = 0x0;
    t1 = t4;
    for (;;) {
        if (((*(int *)((0xC473D04 + (t0 << 2)))) & 0x40) != 0) {
            t1 = 0x5D4;
            t1 = (t1 + 0xC5429C8);
            if ((int)(*(int *)((0xC474104 + (t0 << 2)))) > 0) {
                *(unsigned char *)((t1 + 0x0)) = (t0 + 0x1);
            } else {
                *(unsigned char *)((t1 + 0x0)) = 0x0;
            }
        }
        if (((*(int *)((0xC473D04 + (t0 << 2)))) & 0x80) != 0) {
            t1 = 0x5D4;
            t1 = (t1 + 0xC5429C8);
            t1 = (t1 + 0x1);
            if ((int)(*(int *)((0xC474104 + (t0 << 2)))) > 0) {
                *(unsigned char *)((t1 + 0x0)) = (t0 + 0x1);
            } else {
                *(unsigned char *)((t1 + 0x0)) = 0x0;
            }
        }
        if (((*(int *)((0xC473D04 + (t0 << 2)))) & 0x100) != 0) {
            t1 = 0x5D4;
            t1 = (t1 + 0xC5429C8);
            t1 = (t1 + 0x2);
            if ((int)(*(int *)((0xC474104 + (t0 << 2)))) > 0) {
                *(unsigned char *)((t1 + 0x0)) = (t0 + 0x1);
            } else {
                *(unsigned char *)((t1 + 0x0)) = 0x0;
            }
        }
        t4 = *(int *)((0xC473D04 + (t0 << 2)));
        t3 = t4;
        if ((t4 & 0x200) != 0) {
            t1 = 0x5D4;
            t1 = (t1 + 0xC5429C8);
            t4 = *(int *)((0xC474104 + (t0 << 2)));
            t1 = (t1 + 0x3);
            if ((int)t4 > 0) {
                *(unsigned char *)((t1 + 0x0)) = (t0 + 0x1);
                t5 = (t0 + 0x1);
            } else {
                *(unsigned char *)((t1 + 0x0)) = 0x0;
                t5 = t4;
            }
            t3 = t5;
        }
        t2 = (t0 << 2);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xC0) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = (0xC542FA0 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t4 = t2;
    t2 = t1;
    t1 = t3;
    t3 = 0x0;
    t5 = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 <= (int)0x4) {
            t5 = t3;
            t5 = (t5 << 2);
            t4 = t5;
            t1 = (*(int *)((0xC473D04 + t4)));
            if ((t1 & 0x20) != 0) {
                t4 = t5;
                t1 = (*(int *)((0xC474104 + t4)));
                if ((int)t1 > 0) {
                    t2 = 0x5D8;
                    t1 = t3;
                    t1 = (t1 + 0x1);
                    t2 = (t2 + 0xC5429C8);
                    t2 = (t2 + t0);
                    t0 = (t0 + 0x1);
                    *(unsigned char *)((t2 + 0x0)) = t1;
                }
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0xC0) {
                break;
            }
            continue;
        }
        break;
    }
    return t4;
}

int FUN_0c101000(void)
{
    int s0;
    int s4;
    int s8;
    int s12;
    int s16;
    int s20;
    int s24;
    int s28;
    int s32;
    int s36;
    int s40;
    int s44;
    int s48;
    int s52;
    int s56;
    int s60;
    int s64;
    int s68;
    int s72;
    int s76;
    int s80;
    int s84;
    int s88;
    int s92;
    int s96;
    int s100;
    int s104;
    int s108;
    int s112;
    int s116;
    int s120;
    int s124;
    float u12;
    float u16;
    int t49;
    int t321;
    int t137;
    int t206;
    int t207;
    int t231;
    int t232;
    int t265;
    int t266;
    int t279;
    int t305;
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    int R1036;
    int R1040;
    int R1044;
    int R1048;
    int R1056;
    int R1064;
    int R1072;
    int R1080;
    int R1088;
    int R1096;
    int R1104;
    int R1108;
    int R1112;
    int R1116;
    int R1120;
    int R1124;

    R1000 = s0;
    R1004 = s4;
    R1008 = s8;
    R1012 = s12;
    R1016 = s16;
    R1020 = s20;
    R1024 = s24;
    R1028 = s28;
    R1032 = s32;
    R1036 = s36;
    R1040 = s40;
    R1044 = s44;
    R1048 = s48;
    R1056 = s56;
    R1064 = s64;
    R1072 = s72;
    R1080 = s80;
    R1088 = s88;
    R1096 = s96;
    R1104 = s104;
    R1108 = s108;
    R1112 = s112;
    R1116 = s116;
    R1120 = s120;
    R1124 = s124;

    if (((unsigned short)(*(short *)0xC5428B4) & 0x800) != 0) {
        (((struct o1C_uint *)0xC5324B4)->v) = (((((struct o1C_int *)0xC5324B4)->v)) + 0x200);
    }
    if (((unsigned short)(*(short *)0xC5428B4) & 0x400) != 0) {
        (((struct o1C_uint *)0xC5324B4)->v) = (((((struct o1C_int *)0xC5324B4)->v)) - 0x200);
    }
    if (((unsigned short)(*(short *)0xC5428B4) & 0x2000) != 0) {
        R1116 = 0xC5324C0;
        u12 = ((((struct oC_float *)0xC5324B4)->v)) + 1.0f * (math_sin_angle16(((((struct o1C_int *)0xC5324B4)->v))));
        (((struct oC_float *)0xC5324B4)->v) = u12;
        R1116 = 0xC5324C8;
        u16 = ((((struct o14_float *)0xC5324B4)->v)) + 1.0f * (math_cos_angle16(((((struct o1C_int *)0xC5324B4)->v))));
        (((struct o14_float *)0xC5324B4)->v) = u16;
    }
    if (((unsigned short)(*(short *)0xC5428B4) & 0x1000) != 0) {
        R1116 = 0xC5324C0;
        (((struct oC_float *)0xC5324B4)->v) = (((((struct oC_float *)0xC5324B4)->v)) + ((-((math_sin_angle16(((((struct o1C_int *)0xC5324B4)->v)))) * 1.0f))));
        R1116 = 0xC5324C8;
        (((struct o14_float *)0xC5324B4)->v) = (((((struct o14_float *)0xC5324B4)->v)) + ((-((math_cos_angle16(((((struct o1C_int *)0xC5324B4)->v)))) * 1.0f))));
    }
    if (((unsigned short)(*(short *)0xC542868) & 128) != 0) {
        *(unsigned int *)0xC290750 = ((*(int *)0xC290750) + 0x1);
    }
    if ((int)(*(int *)0xC290750) > (int)0x3) {
        *(unsigned int *)0xC290750 = 0x0;
    }
    t49 = *(int *)0xC290750;
    t321 = 0x0;
    if (t49 == 0) {
    } else {
        if (t49 != 1) {
            if (t49 == 2) {
                FUN_0c1016e8();
                t305 = 0x1;
            } else {
                t305 = t49;
                if (t49 == 3) {
                    FUN_0c101b30();
                    t305 = 0x1;
                }
            }
        } else {
            nlLocate(0x4, 0x0);
            FUN_0c17a550(0xFFFF0000);
            R1116 = (unsigned char)(*(signed char *)0xC541F43);
            R1112 = 0xC1FBC50;
            dbg_printf(0xC1FBC50);
            R1108 = (((((struct o0_short *)0xC541F50)->v)));
            R1104 = 0xC1FBC64;
            dbg_printf(0xC1FBC64);
            s100 = (unsigned char)(*(signed char *)0xC541F44);
            R1096 = 0xC1FBC78;
            dbg_printf(0xC1FBC78);
            s92 = (unsigned char)(*(signed char *)0xC541F45);
            R1088 = 0xC1FBC8C;
            dbg_printf(0xC1FBC8C);
            s84 = (unsigned char)(*(signed char *)0xC541F46);
            R1080 = 0xC1FBCA0;
            dbg_printf(0xC1FBCA0);
            s76 = (unsigned char)(*(signed char *)0xC541F47);
            R1072 = 0xC1FBCB4;
            dbg_printf(0xC1FBCB4);
            s68 = (unsigned char)(*(signed char *)0xC541F48);
            R1064 = 0xC1FBCC8;
            dbg_printf(0xC1FBCC8);
            s60 = (((((struct o4_short *)0xC541F50)->v)));
            R1056 = 0xC1FBCDC;
            dbg_printf(0xC1FBCDC);
            s52 = (((((struct o6_short *)0xC541F50)->v)));
            R1048 = 0xC1FBCF0;
            dbg_printf(0xC1FBCF0);
            R1044 = (((((struct o8_short *)0xC541F50)->v)));
            R1040 = 0xC1FBD04;
            dbg_printf(0xC1FBD04);
            R1036 = (((((struct oA_short *)0xC541F50)->v)));
            R1032 = 0xC1FBD18;
            dbg_printf(0xC1FBD18);
            R1028 = ((*(signed char *)0xC535BAD));
            R1024 = 0xC1FBD2C;
            dbg_printf(0xC1FBD2C);
            R1020 = ((*(signed char *)0xC535BAE));
            R1016 = 0xC1FBD40;
            dbg_printf(0xC1FBD40);
            R1012 = ((*(signed char *)0xC5324AC));
            R1008 = 0xC1FBD54;
            dbg_printf(0xC1FBD54);
            R1004 = ((*(signed char *)0xC5324AD));
            R1000 = 0xC1FBD68;
            dbg_printf(0xC1FBD68);
            R1116 = ((*(signed char *)0xC5324AE));
            R1112 = 0xC1FBD7C;
            dbg_printf(0xC1FBD7C);
            R1108 = (((((struct o0_short *)0xC5324B4)->v)));
            R1104 = 0xC1FBD90;
            dbg_printf(0xC1FBD90);
            (*(float *)&s100) = ((((struct oC_float *)0xC5324B4)->v));
            R1096 = 0xC1FBDA4;
            dbg_printf(0xC1FBDA4);
            (*(float *)&s92) = ((((struct o10_float *)0xC5324B4)->v));
            R1088 = 0xC1FBDB8;
            dbg_printf(0xC1FBDB8);
            (*(float *)&s84) = ((((struct o14_float *)0xC5324B4)->v));
            R1080 = 0xC1FBDCC;
            dbg_printf(0xC1FBDCC);
            (*(float *)&s76) = ((((struct o30_float *)0xC5324B4)->v));
            R1072 = 0xC1FBDE0;
            dbg_printf(0xC1FBDE0);
            (*(float *)&s68) = ((((struct o34_float *)0xC5324B4)->v));
            R1064 = 0xC1FBDB8;
            dbg_printf(0xC1FBDB8);
            (*(float *)&s60) = ((((struct o38_float *)0xC5324B4)->v));
            R1056 = 0xC1FBDCC;
            dbg_printf(0xC1FBDCC);
            (*(float *)&s52) = ((((struct o8C_float *)((*(int *)0xC5325B0)))->v));
            R1048 = 0xC1FBDF4;
            dbg_printf(0xC1FBDF4);
            R1044 = (((((struct o1C_int *)0xC5324B4)->v)));
            R1040 = 0xC1FBE08;
            dbg_printf(0xC1FBE08);
            FUN_0c17a550(0xFFFFFFFF);
            FUN_0c17a550(0xFF00FF00);
            t137 = 0x0;
            for (;;) {
                if ((*(int *)((0xC290694 + (t137 << 2)))) == 0) {
                    break;
                }
                if ((*(int *)((0xC474B8C + (t137 << 2)))) != 0) {
                    R1116 = ((*(int *)((0xC290694 + (t137 << 2)))));
                    R1112 = 0xC1FBE1C;
                    dbg_printf(0xC1FBE1C);
                }
                t137 = (t137 + 0x1);
            }
            nlLocate(0x20, 0x0);
            FUN_0c17a550(0xFF00FFFF);
            R1116 = (((((struct o24_int *)0xC474714)->v)));
            R1112 = 0xC1FBE20;
            dbg_printf(0xC1FBE20);
            R1108 = (((((struct o8_int *)0xC474714)->v)));
            R1104 = 0xC1FBE38;
            dbg_printf(0xC1FBE38);
            s100 = (((((struct o18_int *)0xC474714)->v)));
            R1096 = 0xC1FBE50;
            dbg_printf(0xC1FBE50);
            s92 = (((((struct o1C_int *)0xC474714)->v)));
            R1088 = 0xC1FBE68;
            dbg_printf(0xC1FBE68);
            s84 = (((((struct oC_int *)0xC474714)->v)));
            R1080 = 0xC1FBE80;
            dbg_printf(0xC1FBE80);
            s76 = (((((struct o10_int *)0xC474714)->v)));
            R1072 = 0xC1FBE98;
            dbg_printf(0xC1FBE98);
            FUN_0c17a550(0xFF00FF00);
            s68 = (((((struct o0_int *)0xC474714)->v)));
            R1064 = 0xC1FBEB0;
            dbg_printf(0xC1FBEB0);
            s60 = (((((struct o0_int *)0xC474404)->v)));
            R1056 = 0xC1FBEC8;
            dbg_printf(0xC1FBEC8);
            s52 = (((((struct o4_int *)0xC474404)->v)));
            R1048 = 0xC1FBEE0;
            dbg_printf(0xC1FBEE0);
            R1044 = (((((struct o8_int *)0xC474404)->v)));
            R1040 = 0xC1FBEF8;
            dbg_printf(0xC1FBEF8);
            FUN_0c17a550(0xFFFF0000);
            R1036 = ((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))));
            R1032 = 0xC1FBF10;
            dbg_printf(0xC1FBF10);
            R1028 = ((*(signed char *)((((((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))) + 0x1) * 0x34) + 0xC2738B8) + 0x3))));
            R1024 = 0xC1FBF28;
            dbg_printf(0xC1FBF28);
            R1020 = ((*(signed char *)((((((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))) + 0x1) * 0x34) + 0xC2738B8) + 0x10))));
            R1016 = 0xC1FBF40;
            dbg_printf(0xC1FBF40);
            R1012 = ((*(int *)((((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))) << 2) + 0xC473D04))));
            R1008 = 0xC1FBF58;
            dbg_printf(0xC1FBF58);
            R1004 = ((*(int *)((((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))) << 2) + 0xC474104))));
            R1000 = 0xC1FBF70;
            dbg_printf(0xC1FBF70);
            t206 = (FUN_0c17a550(0xFFFF00FF));
            t207 = 0x0;
            for (;;) {
                if ((int)t207 >= (int)0x2) {
                    break;
                }
                R1120 = ((t207 << 2) + 0xC473CC0);
                R1116 = ((*(int *)((((t207 << 2) + 0xC473CC0) + 0x0))));
                R1112 = (t207);
                R1108 = 0xC1FBF88;
                t206 = (dbg_printf(0xC1FBF88));
                R1104 = ((*(signed char *)((((((*(int *)(((R1120) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x3))));
                s100 = 0xC1FBF28;
                t206 = (dbg_printf(0xC1FBF28));
                R1096 = ((*(signed char *)((((((*(int *)(((R1120) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x10))));
                s92 = 0xC1FBF40;
                t206 = (dbg_printf(0xC1FBF40));
                t206 = (*(int *)(((R1120) + 0x0)));
                if (t206 != -1) {
                    R1116 = ((*(int *)((((*(int *)(((t207 << 2) + 0xC473CC0))) << 2) + 0xC473D04))));
                    R1112 = 0xC1FBFA4;
                    t206 = (dbg_printf(0xC1FBFA4));
                } else {
                    R1116 = 0xC1FBFBC;
                    t206 = (dbg_printf(0xC1FBFBC));
                }
                t207 = (t207 + 0x1);
            }
            t231 = t206;
            t232 = 0x0;
            for (;;) {
                if ((int)t232 < (int)0x4) {
                    R1120 = ((t232 << 2) + 0xC473CCC);
                    R1116 = ((*(int *)((((t232 << 2) + 0xC473CCC) + 0x0))));
                    R1112 = (t232);
                    R1108 = 0xC1FBFD4;
                    t231 = (dbg_printf(0xC1FBFD4));
                    R1104 = ((*(signed char *)((((((*(int *)(((R1120) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x3))));
                    s100 = 0xC1FBF28;
                    t231 = (dbg_printf(0xC1FBF28));
                    R1096 = ((*(signed char *)((((((*(int *)(((R1120) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x10))));
                    s92 = 0xC1FBF40;
                    t231 = (dbg_printf(0xC1FBF40));
                    t231 = (*(int *)(((R1120) + 0x0)));
                    if (t231 != -1) {
                        R1116 = ((*(int *)((((*(int *)(((t232 << 2) + 0xC473CCC))) << 2) + 0xC473D04))));
                        R1112 = 0xC1FBFA4;
                        t231 = (dbg_printf(0xC1FBFA4));
                    } else {
                        R1116 = 0xC1FBFBC;
                        t231 = (dbg_printf(0xC1FBFBC));
                    }
                    t232 = (t232 + 0x1);
                    continue;
                }
                break;
            }
            FUN_0c17a550(0xFF00FF00);
            R1116 = (((((struct o0_int *)0xC473CE4)->v)));
            R1112 = 0xC1FBFF0;
            dbg_printf(0xC1FBFF0);
            R1108 = (((((struct o10_int *)0xC473CE4)->v)));
            R1104 = 0xC1FC008;
            dbg_printf(0xC1FC008);
            FUN_0c17a550(0xFFFF0000);
            t265 = *(int *)(((((((struct o30_int *)0xC474714)->v)) << 2) + 0xC473C74));
            t266 = (((struct o30_int *)0xC474714)->v);
            t279 = t265;
            if (t266 != 0) {
                t279 = (t265 + 0x80);
                if (t266 != 1) {
                    t279 = (t265 + 0x96);
                    if (t266 != 2) {
                        t279 = (t265 + 0xA0);
                        if (t266 != 3) {
                            t279 = t265;
                        }
                    }
                }
            }
            FUN_0c17a550(0xFF00FFFF);
            R1124 = (t279 << 2);
            R1120 = ((t279 << 2) + 0xC474410);
            R1116 = ((*(int *)((((t279 << 2) + 0xC474410) + 0x0))));
            R1112 = 0xC1FC020;
            dbg_printf(0xC1FC020);
            R1108 = ((*(signed char *)((((((*(int *)(((R1120) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x3))));
            R1104 = 0xC1FBF28;
            dbg_printf(0xC1FBF28);
            s100 = ((*(signed char *)((((((*(int *)(((R1120) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x10))));
            R1096 = 0xC1FBF40;
            dbg_printf(0xC1FBF40);
            if (t279 != -1) {
                R1116 = ((*(int *)((((*(int *)(((R1124) + 0xC474410))) << 2) + 0xC473D04))));
                R1112 = 0xC1FBFA4;
                dbg_printf(0xC1FBFA4);
            } else {
                R1116 = 0xC1FBFBC;
                dbg_printf(0xC1FBFBC);
            }
            FUN_0c17a550(0xFFFFFFFF);
            t305 = 0x0;
        }
        t321 = t305;
    }
    return t321;
}


