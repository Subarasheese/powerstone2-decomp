/* game/player: functions 0C16F7FC-0C1717A4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c0365f0(int);
int FUN_0c03681e(void);
int FUN_0c036864(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c036de8(int);
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c039fbc(void);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int);
int FUN_0c0522be(int);
int FUN_0c05ffa4(int, int, int);
int FUN_0c064116(void);
int FUN_0c067008(int);
int FUN_0c067294(int, int, int);
int FUN_0c16f890(int, int, int, int, int);
int FUN_0c16f91e(int, int, int, int, int);
int FUN_0c16f996(int, int, int, int, int);
int FUN_0c16fa18(int, int, float, float, float);
int FUN_0c16fa76(int);
int FUN_0c16fa90(int, int);
int FUN_0c16fab2(int);
extern int FUN_0c16fd4a();
int FUN_0c1710d4(void);
int FUN_0c171398(void);
int FUN_0c1716d0(int, int);
int memset(int, int, int);
int FUN_0c16fad0(int a4);
int FUN_0c16fe50(void);
int FUN_0c170d30(void);

int FUN_0c16fad0(int a4)
{
    register int t0;

    t0 = (((struct o0_int *)0xC475A90)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c16fab2(a4);
        }
        return FUN_0c16fa90(a4, ((((struct o8_int *)0xC475A90)->v)));
    }
    *(volatile int *)0xC475A94;
    return FUN_0c16fa76(a4);
}

int FUN_0c16fe50(void)
{
    int stk[15];
    int t3;
    register int t5;
    register int t7;
    register int t24;
    register int t25;
    register int t27;
    register int t42;
    register int t48;
    register int t51;
    int t57;
    register int t58;
    register int t60;
    register int t61;
    register int t67;
    register int t78;
    register int t84;
    register int t95;
    register int t101;
    register int t112;
    register int t118;
    register int t133;
    register int t137;
    register int t300;
    register int t138;
    register int t139;
    register int t141;
    register int t288;
    register int t293;
    register int t154;
    register int t158;
    register int t162;
    register int t165;
    register int t173;
    register int t186;
    register int t199;
    register int t211;
    register int t218;
    register int t231;
    register int t252;
    register int t257;
    register int t370;
    register int t372;
    register int t373;
    register int t393;
    register int t400;
    register int t405;
    register int t429;
    register int t475;
    register int t477;
    register int t479;
    register int t491;
    register int t519;
    register int t543;
    register int t544;
    register int t545;
    register int t506;
    register int t280;
    register int t285;
    int t366;
    register int t426;
    register int t427;
    int t473;
    register int t496;

    if (((unsigned short)((((struct o4_short *)0xC5426FC)->v)) & 64) != 0) {
        (((struct o0_uint *)0xC475A64)->v) = 0x3;
        (((struct o4_uint *)0xC475A64)->v) = 0x0;
    }
    t3 = (((struct o0_int *)0xC475AE4)->v);
    if (((unsigned short)((((struct o0_short *)0xC5426FC)->v)) & 0x200) == 0) {
        if ((0x2000 & t3) != 0) {
            t5 = (((struct o8_int *)0xC475A64)->v);
            (((struct o8_uint *)0xC475A64)->v) = (t5 - 1);
            if ((int)(t5 - 1) < 0) {
                (((struct o8_uint *)0xC475A64)->v) = 0x0;
            }
        } else {
            if ((t3 & 0x1000) != 0) {
                t7 = (((struct o8_int *)0xC475A64)->v);
                (((struct o8_uint *)0xC475A64)->v) = (t7 + 0x1);
                if ((int)(t7 + 0x1) > (int)0x88) {
                    (((struct o8_uint *)0xC475A64)->v) = 0x88;
                }
            }
        }
    }
    t24 = FUN_0c05ffa4((((((struct o2C_int *)0xC475A64)->v)) + 0x1), 0x0, ((((struct o38_int *)0xC475A64)->v)));
    t25 = (((struct o0_int *)0xC475AE4)->v);
    *(unsigned int *)(((int)stk + 8)) = ((((struct o2C_int *)0xC475A64)->v));
    t27 = (((struct o8_int *)0xC475A64)->v);
    if (t27 != 0) {
        if (t27 != 1) {
            if (t27 != 2) {
                if (t27 == 3) {
                    *(int *)((int)stk + 4) = 0x1;
                    t42 = FUN_0c16f890(0xC475AA0, 0x0, 0x4, 0x1, 0x1);
                    if (t42 == 0) {
                    } else {
                        (((struct o0_uint *)0xC475AA4)->v) = 0x0;
                        FUN_0c03f346(((((struct o10_int *)0xC475AE4)->v)));
                        (((struct o10_uint *)0xC475AE4)->v) = (FUN_0c1716d0(((((struct o3C_int *)0xC475A64)->v)), ((((struct o0_int *)0xC475AA4)->v))));
                        (((struct o4_uint *)0xC475AA4)->v) = 0xFFFFFFFF;
                        t48 = ((int (*)(int))(FUN_0c16fd4a))(0x1);
                    }
                } else {
                    if (t27 == 4) {
                        t51 = (((struct o3C_int *)0xC475A64)->v);
                        switch (t51) {
                        case 0:
                            break;
                        case 1:
                            *(int *)((int)stk + 4) = 0x1;
                            t112 = FUN_0c16f890(0xC475AA4, 0x0, (*(int *)(((*(int *)0xC4B410C) + 0xC))), 0x1, 0x1);
                            if (t112 == 0) {
                            } else {
                                FUN_0c03f346(((((struct o10_int *)0xC475AE4)->v)));
                                (((struct o10_uint *)0xC475AE4)->v) = (FUN_0c1716d0(((((struct o3C_int *)0xC475A64)->v)), ((((struct o0_int *)0xC475AA4)->v))));
                                (((struct o4_uint *)0xC475AA4)->v) = 0xFFFFFFFF;
                                t118 = ((int (*)(int))(FUN_0c16fd4a))(0x1);
                            }
                            break;
                        case 2:
                            *(int *)((int)stk + 4) = 0x1;
                            t95 = FUN_0c16f890(0xC475AA4, 0x0, (*(int *)((((((struct oC_int *)0xC4B40CC)->v)) + 0xC))), 0x1, 0x1);
                            if (t95 == 0) {
                            } else {
                                FUN_0c03f346(((((struct o10_int *)0xC475AE4)->v)));
                                (((struct o10_uint *)0xC475AE4)->v) = (FUN_0c1716d0(((((struct o3C_int *)0xC475A64)->v)), ((((struct o0_int *)0xC475AA4)->v))));
                                (((struct o4_uint *)0xC475AA4)->v) = 0xFFFFFFFF;
                                t101 = ((int (*)(int))(FUN_0c16fd4a))(0x1);
                            }
                            break;
                        case 3:
                            *(int *)((int)stk + 4) = 0x1;
                            t78 = FUN_0c16f890(0xC475AA4, 0x0, (*(int *)((((((struct o0_int *)0xC4B40CC)->v)) + 0xC))), 0x1, 0x1);
                            if (t78 == 0) {
                            } else {
                                FUN_0c03f346(((((struct o10_int *)0xC475AE4)->v)));
                                (((struct o10_uint *)0xC475AE4)->v) = (FUN_0c1716d0(((((struct o3C_int *)0xC475A64)->v)), ((((struct o0_int *)0xC475AA4)->v))));
                                (((struct o4_uint *)0xC475AA4)->v) = 0xFFFFFFFF;
                                t84 = ((int (*)(int))(FUN_0c16fd4a))(0x1);
                            }
                            break;
                        case 4:
                            t57 = *(signed char *)0xC53249A;
                            t58 = 0xC4B40E0;
                            if ((t57 != 12) && (t57 != 13)) {
                                t58 = 0xC4B40FC;
                            }
                            t60 = *(int *)(((*(int *)((t58 + 0x0))) + 0xC));
                            *(int *)((int)stk + 4) = 0x1;
                            t61 = FUN_0c16f890(0xC475AA4, 0x0, t60, 0x1, 0x1);
                            if (t61 == 0) {
                            } else {
                                FUN_0c03f346(((((struct o10_int *)0xC475AE4)->v)));
                                (((struct o10_uint *)0xC475AE4)->v) = (FUN_0c1716d0(((((struct o3C_int *)0xC475A64)->v)), ((((struct o0_int *)0xC475AA4)->v))));
                                (((struct o4_uint *)0xC475AA4)->v) = 0xFFFFFFFF;
                                t67 = ((int (*)(int))(FUN_0c16fd4a))(0x1);
                            }
                            break;
                        }
                    } else {
                        if (t27 == 5) {
                            t133 = ((int (*)(int, int))(FUN_0c16fd4a))(0x0, 0xC475A64);
                        } else {
                            if (t27 == 6) {
                                *(int *)((int)stk + 4) = 0x1;
                                FUN_0c16f890(0xC475A9C, 0x0, ((*(int *)((((*(int *)(((int)stk + 8))) << 2) + 0xC2A5B58))) - 1), 0x1, 0x1);
                            } else {
                                t137 = (((struct o0_short *)0xC5426FC)->v);
                                t300 = (unsigned short)t137;
                                if (((unsigned short)t137 & 0x200) == 0) {
                                } else {
                                    t138 = (((struct o8_int *)0xC475A64)->v);
                                    t139 = (int)((int)(t138 - 7) / (int)0xD);
                                    t141 = (int)((int)(t138 - 7) % (int)0xD);
                                    t288 = 0xC18760C;
                                    t293 = 0x200;
                                    if ((unsigned int)t141 >= (unsigned int)0xD) {
                                    } else {
                                        switch ((t141 << 1)) {
                                            case 0:
                                            {
                                                *(int *)((int)stk + 4) = 0x1;
                                                t285 = (FUN_0c16f91e(((((t139 << 2) << 2) << 1) + t24), 0x0, 0x7, 0x1, 0x1));
                                            }
                                                break;
                                            case 2:
                                            {
                                                *(int *)((int)stk + 4) = 0x1;
                                                t285 = (FUN_0c16f91e((((((t139 << 2) << 2) << 1) + t24) + 0x2), 0xFFFFFFFF, 0x13, 0x1, 0x1));
                                            }
                                                break;
                                            case 4:
                                            {
                                                *(int *)((int)stk + 4) = 0x1;
                                                t285 = (FUN_0c16f91e((((((t139 << 2) << 2) << 1) + t24) + 0x4), 0x0, 0x14, 0x1, 0x1));
                                            }
                                                break;
                                            case 6:
                                            {
                                                *(int *)((int)stk + 4) = 0x1;
                                                t285 = (FUN_0c16f91e((((((t139 << 2) << 2) << 1) + t24) + 0x5), 0x0, 0x2, 0x1, 0x1));
                                            }
                                                break;
                                            case 8:
                                            {
                                                *(int *)((int)stk + 4) = 0x1;
                                                t285 = (FUN_0c16f996((((((t139 << 2) << 2) << 1) + t24) + 0x6), 0x0, 0xFF, 0x1, 0x1));
                                            }
                                                break;
                                            case 10:
                                            {
                                                *(int *)((int)stk + 4) = 0x1;
                                                t285 = (FUN_0c16f91e((((((t139 << 2) << 2) << 1) + t24) + 0x7), 0x0, 0xFFFFFFFF, 0x1, 0x1));
                                            }
                                                break;
                                            case 12:
                                            {
                                                *(int *)((int)stk + 4) = 0x1;
                                                t285 = FUN_0c16f91e((((((t139 << 2) << 2) << 1) + t24) + 0x1), 0x0, 0x2, 0x1, 0x1);
                                                if (t285 == 0) {
                                                } else {
                                                    memset((((((t139 << 2) << 2) << 1) + t24) + 0x8), 0x0, 0x18);
                                                }
                                            }
                                                break;
                                            case 14:
                                            {
                                                t154 = 0x1;
                                                if (((unsigned short)((((struct o0_short *)0xC5426FC)->v)) & 128) != 0) {
                                                    t154 = 0x64;
                                                }
                                                t285 = (FUN_0c16fa18((((((t139 << 2) << 2) << 1) + t24) + 0x8), 0x1, -9000.0f, 9000.0f, (float)t154));
                                            }
                                                break;
                                            case 16:
                                            {
                                                t158 = 0x1;
                                                if (((unsigned short)((((struct o0_short *)0xC5426FC)->v)) & 128) != 0) {
                                                    t158 = 0x64;
                                                }
                                                t285 = (FUN_0c16fa18((((((t139 << 2) << 2) << 1) + t24) + 0xC), 0x1, -9000.0f, 9000.0f, (float)t158));
                                            }
                                                break;
                                            case 18:
                                            {
                                                t162 = 0x1;
                                                if (((unsigned short)((((struct o0_short *)0xC5426FC)->v)) & 128) != 0) {
                                                    t162 = 0x64;
                                                }
                                                t285 = (FUN_0c16fa18((((((t139 << 2) << 2) << 1) + t24) + 0x10), 0x1, -9000.0f, 9000.0f, (float)t162));
                                            }
                                                break;
                                            case 20:
                                            {
                                                t165 = *(signed char *)((((((t139 << 2) << 2) << 1) + t24) + 0x1));
                                                if (t165 != 0) {
                                                    if (t165 != 1) {
                                                        t285 = 0x200;
                                                        if (t165 != 2) {
                                                            t280 = 0xC18760C;
                                                        } else {
                                                            t173 = 0x1;
                                                            if (((unsigned short)((((struct o0_short *)0xC5426FC)->v)) & 128) != 0) {
                                                                t173 = 0x64;
                                                            }
                                                            t285 = (FUN_0c16fa18((((((t139 << 2) << 2) << 1) + t24) + 0x14), 0x1, 0.0f, 5000.0f, (float)t173));
                                                        }
                                                    } else {
                                                        t186 = 0x1;
                                                        if (((unsigned short)((((struct o0_short *)0xC5426FC)->v)) & 128) != 0) {
                                                            t186 = 0x64;
                                                        }
                                                        t285 = (FUN_0c16fa18((((((t139 << 2) << 2) << 1) + t24) + 0x14), 0x1, 0.0f, 5000.0f, (float)t186));
                                                    }
                                                } else {
                                                    t199 = 0x1;
                                                    if (((unsigned short)((((struct o0_short *)0xC5426FC)->v)) & 128) != 0) {
                                                        t199 = 0x64;
                                                    }
                                                    t285 = (FUN_0c16fa18((((((t139 << 2) << 2) << 1) + t24) + 0x14), 0x1, 0.0f, 5000.0f, (float)t199));
                                                }
                                            }
                                                break;
                                            case 22:
                                            {
                                                t211 = *(signed char *)((((((t139 << 2) << 2) << 1) + t24) + 0x1));
                                                t280 = 0xC18760C;
                                                t285 = 0x200;
                                                if (t211 != 0) {
                                                    if (t211 != 1) {
                                                        t285 = 0x200;
                                                        if (t211 != 2) {
                                                            t280 = 0xC18760C;
                                                        } else {
                                                            t218 = 0x1;
                                                            if (((unsigned short)((((struct o0_short *)0xC5426FC)->v)) & 128) != 0) {
                                                                t218 = 0x64;
                                                            }
                                                            t285 = (FUN_0c16fa18((((((t139 << 2) << 2) << 1) + t24) + 0x18), 0x1, 0.0f, 5000.0f, (float)t218));
                                                        }
                                                    } else {
                                                        t231 = 0x1;
                                                        if (((unsigned short)((((struct o0_short *)0xC5426FC)->v)) & 128) != 0) {
                                                            t231 = 0x64;
                                                        }
                                                        t285 = (FUN_0c16fa18((((((t139 << 2) << 2) << 1) + t24) + 0x18), 0x1, 0.0f, 5000.0f, (float)t231));
                                                    }
                                                }
                                            }
                                                break;
                                            default:
                                            {
                                                t252 = *(signed char *)((((((t139 << 2) << 2) << 1) + t24) + 0x1));
                                                t280 = 0xC18760C;
                                                t285 = 0x200;
                                                if (t252 != 0) {
                                                    if (t252 != 1) {
                                                        t280 = 0xC18760C;
                                                        t285 = 0x200;
                                                    } else {
                                                        t257 = 0x1;
                                                        if (((unsigned short)((((struct o0_short *)0xC5426FC)->v)) & 128) != 0) {
                                                            t257 = 0x64;
                                                        }
                                                        t285 = (FUN_0c16fa18((((((t139 << 2) << 2) << 1) + t24) + 0x1C), 0x1, 0.0f, 5000.0f, (float)t257));
                                                    }
                                                }
                                            }
                                                break;
                                        }
                                        t288 = t280;
                                        t293 = t285;
                                    }
                                    if (t293 != 0) {
                                        (((struct o10_uint *)0xC475AA4)->v) = 0x1;
                                    }
                                    t300 = t288;
                                }
                                t506 = t300;
                            }
                        }
                    }
                }
            } else {
                if ((*(int *)(((int)stk + 8))) == 2) {
                } else {
                    if (((t25 & 0xC00) != 0) && (t366 = (((struct o10_int *)0xC475AA4)->v), t366 != 0)) {
                        (((struct o0_uint *)0xC475A64)->v) = 0x1;
                        (((struct o4_uint *)0xC475A64)->v) = 0x0;
                        t370 = 0x1;
                        if ((0x800 & ((((struct o0_int *)0xC475AE4)->v))) != 0) {
                            t370 = 0x0;
                        }
                        (((struct oC_uint *)0xC475AA4)->v) = t370;
                        t426 = 0xC475A64;
                        t427 = 0x800;
                    } else {
                        t372 = *(int *)(((int)stk + 8));
                        if (t372 != 0) {
                            if (t372 != 1) {
                                t426 = 0xC475A64;
                                t427 = 0x800;
                            } else {
                                *(int *)((int)stk + 4) = 0x1;
                                t373 = FUN_0c16f890(0xC475A98, 0x0, 0x6, 0x1, 0x1);
                                if (t373 != 0) {
                                    FUN_0c16fad0(0x1);
                                    (((struct o38_uint *)0xC475A64)->v) = 0x0;
                                    FUN_0c03f346(((((struct o10_int *)0xC475AE4)->v)));
                                    FUN_0c03681e();
                                    FUN_0c036864(((((struct o34_int *)0xC475A64)->v)), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24));
                                    (((struct o10_uint *)0xC475AE4)->v) = (FUN_0c1716d0(((((struct o3C_int *)0xC475A64)->v)), ((((struct o0_int *)0xC475AA4)->v))));
                                    (((struct o0_uint *)0xC475AA4)->v) = 0x0;
                                }
                            }
                        } else {
                            *(int *)((int)stk + 4) = 0x1;
                            t393 = FUN_0c16f890(0xC475A94, 0x0, 0xF, 0x1, 0x1);
                            if (t393 != 0) {
                                FUN_0c16fad0(0x1);
                                (((struct o38_uint *)0xC475A64)->v) = 0x0;
                                (((struct o0_uchar *)0xC53249A)->v) = ((((struct o30_int *)0xC475A64)->v));
                                FUN_0c0365f0(0x0);
                                FUN_0c067008(0x0);
                                FUN_0c039fbc();
                                *(float *)0xC5324C0 = 0.0f;
                                *(float *)0xC5324C4 = 0.0f;
                                *(float *)0xC5324C8 = 0.0f;
                                (((struct o4_uchar *)0xC535BB2)->v) = 0x1;
                                t400 = ((((struct o30_int *)0xC475AA4)->v));
                                *(int *)((int)stk + 4) = t400;
                                FUN_0c037ac4(0xC532498, 0x0, ((((struct o28_int *)0xC475AA4)->v)), ((((struct o2C_int *)0xC475AA4)->v)), t400);
                                t405 = ((((struct o3C_int *)0xC475AA4)->v));
                                *(int *)((int)stk + 0) = t405;
                                FUN_0c037ac4(0xC532498, 0x1, ((((struct o34_int *)0xC475AA4)->v)), ((((struct o38_int *)0xC475AA4)->v)), t405);
                            }
                        }
                    }
                    t429 = (((struct o2C_int *)0xC475A64)->v);
                    t506 = t429;
                    if (t429 != 0) {
                    } else {
                        t506 = (((struct o0_int *)0xC475AE4)->v);
                        if ((t506 & 0x8000) == 0) {
                        } else {
                            (((struct o0_uchar *)0xC535BB2)->v) = ((-(*(signed char *)0xC535BB2)) + 0x1);
                            FUN_0c067294(0xC532498, t426, t427);
                        }
                    }
                }
            }
        } else {
            if (((t25 & 0xC00) != 0) && (t473 = (((struct o10_int *)0xC475AA4)->v), t473 != 0)) {
                (((struct o0_uint *)0xC475A64)->v) = 0x1;
                (((struct o4_uint *)0xC475A64)->v) = 0x0;
                t496 = (((struct o0_int *)0xC475AE4)->v);
                t475 = 0x1;
                if ((0x800 & t496) != 0) {
                    t475 = 0x0;
                }
                (((struct oC_uint *)0xC475AA4)->v) = t475;
            } else {
                *(int *)((int)stk + 4) = 0x1;
                t477 = FUN_0c16f890(0xC475A90, 0x0, 0x2, 0x1, 0x1);
                if (t477 == 0) {
                } else {
                    FUN_0c16fad0(0x1);
                    (((struct o38_uint *)0xC475A64)->v) = 0x0;
                    t479 = (((struct o2C_int *)0xC475A64)->v);
                    switch (t479) {
                    case 0:
                        (((struct o3C_uint *)0xC475A64)->v) = 0x0;
                        break;
                    case 1:
                        (((struct o3C_uint *)0xC475A64)->v) = 0x1;
                        break;
                    case 2:
                        (((struct o3C_uint *)0xC475A64)->v) = 0x2;
                        break;
                    }
                    (((struct o0_uint *)0xC475AA4)->v) = 0x0;
                    FUN_0c03f346(((((struct o10_int *)0xC475AE4)->v)));
                    (((struct o10_uint *)0xC475AE4)->v) = (FUN_0c1716d0(((((struct o3C_int *)0xC475A64)->v)), ((((struct o0_int *)0xC475AA4)->v))));
                    (((struct o4_uint *)0xC475AA4)->v) = 0xFFFFFFFF;
                    t491 = ((int (*)(int))(FUN_0c16fd4a))(0x1);
                }
            }
            t506 = t496;
        }
        t544 = t506;
    } else {
        *(int *)((int)stk + 4) = 0x1;
        FUN_0c16f890(0xC475A8C, 0x0, 0x2, 0x1, 0x1);
        if ((0x200 & ((((struct o0_int *)0xC475AE4)->v))) == 0) {
        } else {
            t519 = (((struct o28_int *)0xC475A64)->v);
            if (t519 == 0) {
            } else {
                if (t519 != 1) {
                    if (t519 != 2) {
                    } else {
                        (((struct o0_uint *)0xC475A64)->v) = 0x2;
                        (((struct o4_uint *)0xC475A64)->v) = 0x0;
                        t544 = 0x2;
                    }
                } else {
                    (((struct o0_uint *)0xC475A64)->v) = 0x1;
                    (((struct o4_uint *)0xC475A64)->v) = 0x0;
                }
            }
        }
    }
    *(unsigned char *)((t24 + 0x3)) = 0x0;
    t543 = 0x0;
    t545 = t24;
    for (;;) {
        if ((unsigned int)t545 >= (unsigned int)(0x140 + t24)) {
            break;
        }
        t544 = (*(signed char *)((t545 + 0x0)));
        t545 = (t545 + 0x20);
        if (t544 != 0) {
            t543 = (*(signed char *)((t24 + 0x3)));
            t543 = (t543 + 0x1);
            *(unsigned char *)((t24 + 0x3)) = t543;
        }
    }
    return t543;
}

int FUN_0c170d30(void)
{
    int stk[1];

    (((struct o0_uchar *)0xC541F44)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    memset(0xC475A64, 0x0, 0x98);
    FUN_0c03eff6();
    *(unsigned char *)0xC535BAC = 0x1;
    *(unsigned char *)0xC540754 = 0x0;
    *(unsigned char *)0xC53CE1C = 0x0;
    *(unsigned char *)0xC5394E4 = 0x0;
    (((struct o4_uint *)0xC542440)->v) = 0xFF000080;
    (((struct o0_uint *)0xC542440)->v) = 0xFF000080;
    (((struct o8_uint *)0xC542440)->v) = 0xFF008080;
    FUN_0c0522be((*(int *)0xC241B60));
    FUN_0c036de8(0x1);
    FUN_0c036864(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    FUN_0c064116();
    FUN_0c1710d4();
    FUN_0c171398();
    FUN_0c03ea04(0x0, 0x0);
    (((struct o8_float *)0xC5410B8)->v) = 0.0f;
    (((struct o0_float *)0xC5410B8)->v) = 0.0f;
    (((struct o4_float *)0xC5410B8)->v) = -1.0f;
    return 0x744;
}
