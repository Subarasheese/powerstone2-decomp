/* game/system: functions 0C05B794-0C05C15A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o3A_uchar { char p[0x3A]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5A_uchar { char p[0x5A]; unsigned char v; };
struct o5B_uchar { char p[0x5B]; unsigned char v; };
struct o5C_uchar { char p[0x5C]; unsigned char v; };
struct o5D_uchar { char p[0x5D]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c038548(int);
int FUN_0c038566(void);
int FUN_0c038e88(int);
int res_cockpit_faces_release_all(void);
int FUN_0c038ec2(int);
int FUN_0c038ee0(int);
int FUN_0c038f1a(int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c04309a(int);
int FUN_0c0433b0(void);
int FUN_0c045392(void);
int FUN_0c045a38(void);
int FUN_0c045fe0(void);
int FUN_0c04a556(void);
int FUN_0c04a99c(void);
int FUN_0c04d76c(void);
int FUN_0c0527e6(void);
int FUN_0c0573d8(void);
int game_reset_objects(void);
int FUN_0c05b1d4(void);
int FUN_0c05bd22(void);
int game_mode_handler_6(void);
int FUN_0c05bf24(void);
int FUN_0c060c00(void);
int FUN_0c063f24(void);
int FUN_0c067a58(void);
int FUN_0c07c23e(void);
int FUN_0c0bb47e(void);
int FUN_0c0d05f2(void);
int FUN_0c10208a(int, int);
int FUN_0c11f982(void);
int FUN_0c120f18(int);
int FUN_0c05b794(void);
int FUN_0c05b7e0(int a4);
int FUN_0c05b80c(void);
int FUN_0c05b8cc(int a4, int a5, int a6, int a7);
int FUN_0c05b978(void);
int FUN_0c05ba86(void);
int FUN_0c05bae8(void);
int FUN_0c05bb6c(void);
int FUN_0c05bc10(void);
int FUN_0c05bc9a(void);
int FUN_0c05bd74(void);
int FUN_0c05c008(void);
int FUN_0c05c052(void);
int FUN_0c05c084(void);

int FUN_0c05b794(void)
{
    *(unsigned char *)0xC541F40 = ((*(signed char *)0xC541F40) + 0x1);
    (((struct o8_uint *)0xC542440)->v) = 0x0;
    (((struct o4_uint *)0xC542440)->v) = 0x0;
    (((struct o0_uint *)0xC542440)->v) = 0x0;
    FUN_0c03eff6();
    game_reset_objects();
    FUN_0c0573d8();
    (((struct o0_uchar *)0xC542236)->v) = 0x0;
    (((struct o2E_uchar *)0xC542236)->v) = 0x0;
    (((struct o1F_uchar *)0xC542236)->v) = 0x0;
    (((struct o3A_uchar *)0xC54232B)->v) = 0x0;
    (((struct o0_uchar *)0xC54232B)->v) = 0x0;
    FUN_0c0527e6();
    FUN_0c05b1d4();
    return FUN_0c07c23e();
}

int FUN_0c05b7e0(int a4)
{
    (((struct o0_uchar *)0xC541F41)->v) = a4;
    (((struct o4_uchar *)0xC541F41)->v) = 0x0;
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    (((struct o8_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o7_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o6_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o5_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o4_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o3_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o2_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o1_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o0_uchar *)0xC5421F9)->v) = 0x0;
    return 0x0;
}

int FUN_0c05b80c(void)
{
    register int t6;

    if ((int)(unsigned char)(*(signed char *)0xC541F41) > 0) {
        FUN_0c05c084();
    }
    t6 = *(signed char *)0xC541F41;
    if ((unsigned char)t6 != 0) {
        if ((unsigned char)t6 != 1) {
            if ((unsigned char)t6 != 2) {
                if ((unsigned char)t6 != 3) {
                    if ((unsigned char)t6 != 4) {
                        if ((unsigned char)t6 != 5) {
                            if ((unsigned char)t6 != 6) {
                                if ((unsigned char)t6 != 7) {
                                    if ((unsigned char)t6 != 8) {
                                        if ((unsigned char)t6 != 9) {
                                            return (unsigned char)t6;
                                        }
                                        return FUN_0c05bf24();
                                    }
                                    return FUN_0c04d76c();
                                }
                                return FUN_0c04a99c();
                            }
                            return game_mode_handler_6();
                        }
                        return FUN_0c05bd22();
                    }
                    return FUN_0c04a556();
                }
                return FUN_0c045fe0();
            }
            return FUN_0c045a38();
        }
        return FUN_0c045392();
    }
    return FUN_0c05bae8();
}

int FUN_0c05b8cc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC541F41;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 5) {
                return (unsigned char)t0;
            }
            return FUN_0c05bd22();
        }
        return FUN_0c10208a(a4, a5);
    }
    return FUN_0c05bb6c();
}

int FUN_0c05b978(void)
{
    register int t6;

    if ((int)(unsigned char)(*(signed char *)0xC541F41) > 0) {
        FUN_0c05c084();
    }
    t6 = *(signed char *)0xC541F41;
    if ((unsigned char)t6 != 0) {
        if ((unsigned char)t6 != 1) {
            if ((unsigned char)t6 != 2) {
                if ((unsigned char)t6 != 3) {
                    if ((unsigned char)t6 != 4) {
                        if ((unsigned char)t6 != 5) {
                            if ((unsigned char)t6 != 6) {
                                if ((unsigned char)t6 != 7) {
                                    if ((unsigned char)t6 != 8) {
                                        if ((unsigned char)t6 != 9) {
                                            return (unsigned char)t6;
                                        }
                                        return FUN_0c05bf24();
                                    }
                                    return FUN_0c04d76c();
                                }
                                return FUN_0c04a99c();
                            }
                            return game_mode_handler_6();
                        }
                        return FUN_0c05bd22();
                    }
                    return FUN_0c04a556();
                }
                return FUN_0c045fe0();
            }
            return FUN_0c045a38();
        }
        return FUN_0c045392();
    }
    return FUN_0c05bc9a();
}

int FUN_0c05ba86(void)
{
    register int t0;

    t0 = *(signed char *)0xC541F40;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return ((int (*)(void))(0xC05BA30))();
        }
        return ((int (*)(void))(0xC05B9F4))();
    }
    FUN_0c05b794();
    return ((int (*)(void))(0xC05B9F4))();
}

int FUN_0c05bae8(void)
{
    register int t0;

    (((struct o0_uchar *)0xC541F41)->v) = 0x1;
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        (((struct o5A_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5B_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5C_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5D_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o44_ushort *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        *(unsigned int *)((((t0 * 0x98) + 0xC541CDC) + 0x20)) = 0x0;
        FUN_0c04309a(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    *(unsigned char *)0xC542377 = 0x0;
    *(unsigned char *)0xC54232B = 0x0;
    FUN_0c03eff6();
    FUN_0c0bb47e();
    FUN_0c120f18(0x1);
    return FUN_0c0d05f2();
}

int FUN_0c05bb6c(void)
{
    register int t0;

    (((struct o0_uchar *)0xC541F41)->v) = 0x1;
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        (((struct o5A_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5B_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5C_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5D_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        *(unsigned int *)((((t0 * 0x98) + 0xC541CDC) + 0x20)) = 0x0;
        FUN_0c04309a(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    *(unsigned char *)0xC542377 = 0x0;
    *(unsigned char *)0xC54232B = 0x0;
    FUN_0c03eff6();
    FUN_0c0bb47e();
    FUN_0c120f18(0x1);
    return FUN_0c0d05f2();
}

int FUN_0c05bc10(void)
{
    register int t0;

    (((struct o0_uchar *)0xC541F41)->v) = 0x1;
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        (((struct o5A_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5B_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5C_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5D_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o44_ushort *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        *(unsigned int *)((((t0 * 0x98) + 0xC541CDC) + 0x20)) = 0x0;
        FUN_0c04309a(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    *(unsigned char *)0xC542377 = 0x0;
    *(unsigned char *)0xC54232B = 0x0;
    FUN_0c03eff6();
    FUN_0c0bb47e();
    FUN_0c120f18(0x1);
    FUN_0c11f982();
    return FUN_0c0d05f2();
}

int FUN_0c05bc9a(void)
{
    register int t0;

    (((struct o0_uchar *)0xC541F41)->v) = 0x1;
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        (((struct o5A_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5B_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5C_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5D_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o44_ushort *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        *(unsigned int *)((((t0 * 0x98) + 0xC541CDC) + 0x20)) = 0x0;
        FUN_0c04309a(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    (((struct o30_uchar *)0xC542347)->v) = 0x1;
    (((struct o0_uchar *)0xC542347)->v) = 0x3;
    FUN_0c03eff6();
    FUN_0c0bb47e();
    FUN_0c120f18(0x1);
    return FUN_0c0d05f2();
}

int FUN_0c05bd74(void)
{
    FUN_0c067a58();
    FUN_0c038566();
    res_cockpit_faces_release_all();
    FUN_0c03f40c(0x9);
    FUN_0c038ec2(0x9);
    FUN_0c03f40c(0x2);
    FUN_0c038548(0x2);
    FUN_0c038e88(0x2);
    FUN_0c03f40c(0x1);
    FUN_0c038ec2(0x1);
    FUN_0c060c00();
    FUN_0c063f24();
    res_cockpit_faces_release_all();
    FUN_0c038ee0(0x2);
    FUN_0c038f1a(0x1);
    FUN_0c038f1a(0x9);
    FUN_0c03f40c(0x5);
    FUN_0c038ec2(0x5);
    FUN_0c03f40c(0x6);
    FUN_0c038ec2(0x6);
    FUN_0c03f40c(0x8);
    return (FUN_0c038ec2(0x8));
}

int FUN_0c05c008(void)
{
    register int t1;
    register int t2;
    register int t0;
    int t4;
    register int t5;

    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if (((((int)0x1 << (int)t1) & (unsigned char)(*(signed char *)0xC3BD445)) != 0) && (t4 = (int)(((unsigned int)(((t1 << 2) + t1) << 2)) >> 31), t5 = *(short *)(((((((t1 << 2) + t1) << 2) << 1) + 0xC542854) + 0x10)), t0 = t5, t0 = (unsigned short)t0, (t0 & 0x8) != 0)) {
            t2 = 0x1;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    return t2;
}

int FUN_0c05c052(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t5;

    t0 = *(signed char *)0xC3BD445;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        t5 = (((int)0x1 << (int)t1) & (unsigned char)t0) != 0;
        t1 = (t1 + 0x1);
        if (t5) {
            t2 = (t2 + 0x1);
        }
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    if ((int)t2 > (int)0x1) {
        return 0x0;
    }
    return ((((unsigned char)t0 == (*(int *)0xC40DC4C))) ? 1 : 0);
}

int FUN_0c05c084(void)
{

    register int R0;
    register int R1;
    register int R3;
    register int R8;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = *(signed char *)0xC3BD445;
    v0_1 = (v0_0);
    if (((unsigned char)v0_0 == 0)) goto L_C05C120;
    if (((*(signed char *)0xC542254) != 0)) goto L_C05C120;
    v0_2 = *(signed char *)0xC541F41;
    R0 = ((unsigned char)v0_2);
    v0_0 = (0xC541F3C);
    v0_3 = (0xC541F41);
    if (((unsigned char)v0_2 == 9)) goto L_C05C120;
    if (((*(signed char *)0xC3BD447) == 0)) goto L_C05C0C2;
    v0_2 = *(signed char *)((v0_3 + 0x0));
    R0 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 == 1)) goto L_C05C120;
    *(unsigned char *)0xC54225C = v0_1;
    R0 = (0x9);
    L_C05C11A:;
    *(unsigned char *)((v0_0 + 0x5)) = R0;
    *(unsigned char *)((v0_0 + 0x6)) = 0x0;
    R0 = (0x0);
    L_C05C120:;
    return R0;
    L_C05C0C2:;
    v0_1 = *(signed char *)0xC5429B4;
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C05C0D4;
    if ((v0_2 != 4)) goto L_C05C108;
    L_C05C0D4:;
    if (((*(signed char *)0xC5429CF) != 0)) goto L_C05C0E4;
    v0_1 = (FUN_0c05c008()) == 0;
    if (v0_1) goto L_C05C108;
    L_C05C0E4:;
    if (((unsigned char)(*(signed char *)0xC541F41) != 5)) goto L_C05C108;
    if (((*(signed char *)0xC5421F9) != 7)) goto L_C05C108;
    v0_1 = (FUN_0c05c052()) == 0;
    if (v0_1) goto L_C05C108;
    return FUN_0c0433b0();
    L_C05C108:;
    v0_1 = *(signed char *)((v0_0 + 0x5));
    R0 = ((unsigned char)v0_1);
    if (((unsigned char)v0_1 == 1)) goto L_C05C120;
    *(unsigned char *)0xC54225C = (*(signed char *)0xC3BD445);
    R0 = (0x1);
    goto L_C05C11A;
}
