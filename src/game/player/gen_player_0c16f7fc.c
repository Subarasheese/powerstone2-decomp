/* game/player: functions 0C16F7FC-0C1717A4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_short { char p[0x28]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c036518(int);
int FUN_0c0365c8(int);
int res_pl_textures_release_all(void);
int FUN_0c0365f0(int);
int FUN_0c03681e(void);
int FUN_0c036864(int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c039fbc(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05ffa4(int, int, int);
int FUN_0c05ffe2(int, int, int, int);
int FUN_0c060180(int, int, int);
int FUN_0c060428(int, int);
int FUN_0c064128(void);
int FUN_0c067008(int);
int FUN_0c16fad0(int);
int FUN_0c16fbd0(void);
int FUN_0c16fe50(void);
int FUN_0c170d30(void);
int FUN_0c17a4c0(int, int);
int FUN_0c17a550(int);
int dbg_printf(int, ...);
int nlSelectMatrixStack(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int nlScaleV(int);
int nlTranslateV(int);
int nlUnitMatrix(void);
int FUN_0c17c6f0(int, float, float, float);
int FUN_0c17d6d0(float);
int nlObjPutWorldMatrixMode(void);
int nlObjPut(int);
int FUN_0c0dcc80(float, float, float);
int FUN_0c17e740(float, float, float);
extern int FUN_0c18778c();
int FUN_0c16f7fc(void);
int FUN_0c16f87a(int a4, int a5);
int FUN_0c16f890(int a4, int a5, int a6, int a7, int a8);
int FUN_0c16f91e(int a4, int a5, int a6, int a7, int a8);
int FUN_0c16f996(int a4, int a5, int a6, int a7, int a8);
int FUN_0c16fa18(int a4, int a5, float f4, float f5, float f6);
void FUN_0c16fa76(int a4);
void FUN_0c16fa90(int a4, int a5);
void FUN_0c16fab2(int a4);
int FUN_0c16fafc(void);
int FUN_0c16fd4a(int a4, int a5);
int FUN_0c17053a(void);
int FUN_0c170b3c(void);
int FUN_0c170db6(void);
int FUN_0c170f22(void);
int FUN_0c17106e(void);
int FUN_0c1710d4(void);
int FUN_0c171154(void);
void FUN_0c171398(void);
int FUN_0c1713d0(int a4, int a5, float f4, float f5);
int FUN_0c17143e(int a4, int a5, float f4);
int FUN_0c17149c(int a4, int a5, int a6);
int FUN_0c171554(void);
int FUN_0c171698(int a4, int a5, int a6, int a7);
int FUN_0c1716d0(int a4, int a5);

int FUN_0c16f7fc(void)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o0_uint *)0xC475AE4)->v) = (unsigned short)((((struct o4_short *)0xC5426FC)->v));
    t0 = (((struct o0_short *)0xC5426FC)->v);
    if (((unsigned short)t0 & 0x3C00) != 0) {
        t1 = (unsigned short)t0;
        if ((int)((((struct o4_int *)0xC475AE4)->v)) < (int)0x14) {
            t2 = (((struct o4_int *)0xC475AE4)->v);
            (((struct o4_uint *)0xC475AE4)->v) = (t2 + 0x1);
            t1 = (t2 + 0x1);
        }
        t2 = t1;
    } else {
        (((struct o4_uint *)0xC475AE4)->v) = 0x0;
        t2 = (unsigned short)t0;
    }
    t0 = t2;
    if ((int)((((struct o4_int *)0xC475AE4)->v)) >= (int)0x14) {
        t1 = (((struct o8_int *)0xC475AE4)->v);
        (((struct o8_uint *)0xC475AE4)->v) = (t1 ^ 0x1);
        t2 = (t1 ^ 0x1);
        if ((t1 ^ 0x1) != 0) {
            (((struct o0_uint *)0xC475AE4)->v) = (unsigned short)((((struct o0_short *)0xC5426FC)->v));
            t2 = 0x80;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c16f87a(int a4, int a5)
{
    register int t0;

    t0 = 0xFFFFFFFF;
    if ((signed char)a4 == (signed char)a5) {
        t0 = 0xFFFF7F00;
    }
    return FUN_0c17a550(t0);
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

int FUN_0c16f91e(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    register int t1;
    register int t3;
    register int t10;
    register int t12;
    register int t19;

    t0 = *(int *)0xC475AE4;
    if (a8 == 0) {
        if ((0x800 & t0) != 0) {
            t1 = *(signed char *)((a4 + 0x0));
            *(unsigned char *)((a4 + 0x0)) = (t1 - a7);
            if ((int)(signed char)(t1 - a7) >= (int)(signed char)a5) {
            } else {
                *(unsigned char *)((a4 + 0x0)) = a5;
            }
            t19 = 0x1;
        } else {
            t19 = 0x0;
            if ((t0 & 0x400) != 0) {
                t3 = *(signed char *)((a4 + 0x0));
                *(unsigned char *)((a4 + 0x0)) = (t3 + a7);
                if ((int)(signed char)(t3 + a7) <= (int)(signed char)a6) {
                } else {
                    *(unsigned char *)((a4 + 0x0)) = a6;
                }
                t19 = 0x1;
            }
        }
    } else {
        if ((0x800 & t0) != 0) {
            t10 = *(signed char *)((a4 + 0x0));
            *(unsigned char *)((a4 + 0x0)) = (t10 - a7);
            if ((int)(signed char)(t10 - a7) < (int)(signed char)a5) {
                *(unsigned char *)((a4 + 0x0)) = a6;
            }
            t19 = 0x1;
        } else {
            t19 = 0x0;
            if ((t0 & 0x400) != 0) {
                t12 = *(signed char *)((a4 + 0x0));
                *(unsigned char *)((a4 + 0x0)) = (t12 + a7);
                if ((int)(signed char)(t12 + a7) > (int)(signed char)a6) {
                    *(unsigned char *)((a4 + 0x0)) = a5;
                }
                t19 = 0x1;
            }
        }
    }
    return t19;
}

int FUN_0c16f996(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    register int t1;
    register int t3;
    register int t10;
    register int t12;
    register int t19;

    t0 = *(int *)0xC475AE4;
    if (a8 == 0) {
        if ((0x800 & t0) != 0) {
            t1 = *(signed char *)((a4 + 0x0));
            *(unsigned char *)((a4 + 0x0)) = (t1 - a7);
            if ((int)(unsigned char)(t1 - a7) >= (int)(unsigned char)a5) {
            } else {
                *(unsigned char *)((a4 + 0x0)) = a5;
            }
            t19 = 0x1;
        } else {
            t19 = 0x0;
            if ((t0 & 0x400) != 0) {
                t3 = *(signed char *)((a4 + 0x0));
                *(unsigned char *)((a4 + 0x0)) = (t3 + a7);
                if ((int)(unsigned char)(t3 + a7) <= (int)(unsigned char)a6) {
                } else {
                    *(unsigned char *)((a4 + 0x0)) = a6;
                }
                t19 = 0x1;
            }
        }
    } else {
        if ((0x800 & t0) != 0) {
            t10 = *(signed char *)((a4 + 0x0));
            *(unsigned char *)((a4 + 0x0)) = (t10 - a7);
            if ((int)(unsigned char)(t10 - a7) < (int)(unsigned char)a5) {
                *(unsigned char *)((a4 + 0x0)) = a6;
            }
            t19 = 0x1;
        } else {
            t19 = 0x0;
            if ((t0 & 0x400) != 0) {
                t12 = *(signed char *)((a4 + 0x0));
                *(unsigned char *)((a4 + 0x0)) = (t12 + a7);
                if ((int)(unsigned char)(t12 + a7) > (int)(unsigned char)a6) {
                    *(unsigned char *)((a4 + 0x0)) = a5;
                }
                t19 = 0x1;
            }
        }
    }
    return t19;
}

int FUN_0c16fa18(int a4, int a5, float f4, float f5, float f6)
{
    int t0;
    register float u1;
    register float u3;
    register float u5;
    register float u7;

    t0 = *(int *)0xC475AE4;
    if (a5 == 0) {
        if ((0x800 & t0) != 0) {
            u1 = *(float *)((a4 + 0x0));
            *(float *)((a4 + 0x0)) = (u1 - f6);
            if (!(f4 > (u1 - f6))) {
            } else {
                *(float *)((a4 + 0x0)) = f4;
            }
            return 0x1;
        }
        if ((t0 & 0x400) != 0) {
            u3 = *(float *)((a4 + 0x0));
            *(float *)((a4 + 0x0)) = (u3 + f6);
            if (!((u3 + f6) > f5)) {
            } else {
                *(float *)((a4 + 0x0)) = f5;
            }
            return 0x1;
        }
        return 0x0;
    }
    if ((0x800 & t0) != 0) {
        u5 = *(float *)((a4 + 0x0));
        *(float *)((a4 + 0x0)) = (u5 - f6);
        if (f4 > (u5 - f6)) {
            *(float *)((a4 + 0x0)) = f5;
        }
        return 0x1;
    }
    if ((t0 & 0x400) != 0) {
        u7 = *(float *)((a4 + 0x0));
        *(float *)((a4 + 0x0)) = (u7 + f6);
        if ((u7 + f6) > f5) {
            *(float *)((a4 + 0x0)) = f4;
        }
        return 0x1;
    }
    return 0x0;
}

void FUN_0c16fa76(int a4)
{
    if (a4 != 0) {
        res_pl_textures_release_all();
        FUN_0c036518(0x0);
    return;
    }
}

void FUN_0c16fa90(int a4, int a5)
{
    if (a4 != 0) {
        FUN_0c03681e();
        FUN_0c036864(a5);
    return;
    }
}

void FUN_0c16fab2(int a4)
{
    
}

int FUN_0c16fafc(void)
{
    register int t0;
    register int t1;

    t0 = (((struct o4_int *)0xC475A64)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct o0_uint *)0xC475A64)->v) = 0x0;
                t0 = (((struct o0_int *)0xC475AAC)->v);
                if (t0 != 0) {
                    t1 = t0;
                } else {
                    FUN_0c16fad0(0x1);
                    (((struct o8_uint *)0xC475AAC)->v) = 0x0;
                    (((struct o38_uint *)0xC475A64)->v) = 0x0;
                    t1 = 0x50;
                }
            }
            t0 = t1;
        } else {
            FUN_0c16f890(0xC475AAC, 0x0, 0x1, 0x1, 0x1);
            if ((((((struct o38_int *)0xC475AAC)->v)) & 0x200) != 0) {
                (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
            }
            FUN_0c17a550(0xFFFF0000);
            FUN_0c17a4c0(0x14, 0x2);
            dbg_printf(0xC203EEC);
            FUN_0c17a4c0(0x1E, 0x2);
            if (((((struct o0_int *)0xC475AAC)->v)) == 0) {
                t1 = 0xC203EF4;
            } else {
                t1 = 0xC203EF8;
            }
            t0 = (dbg_printf(t1));
        }
        t1 = t0;
    } else {
        (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
        (((struct o0_uint *)0xC475AAC)->v) = 0x1;
        FUN_0c16f890(0xC475AAC, 0x0, 0x1, 0x1, 0x1);
        if ((((((struct o38_int *)0xC475AAC)->v)) & 0x200) != 0) {
            (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
        }
        FUN_0c17a550(0xFFFF0000);
        FUN_0c17a4c0(0x14, 0x2);
        dbg_printf(0xC203EEC);
        FUN_0c17a4c0(0x1E, 0x2);
        if (((((struct o0_int *)0xC475AAC)->v)) == 0) {
            t0 = 0xC203EF4;
        } else {
            t0 = 0xC203EF8;
        }
        t1 = (dbg_printf(t0));
    }
    return t1;
}

int FUN_0c16fd4a(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_2 = a4;
    v0_3 = a5;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    v0_1 = *(int *)0xC475AA0;
    v0_0 = (0xC475A64);
    v0_2 = (v0_1);
    if ((v0_1 != 0)) goto L_C16FD66;
    v0_5 = (0x8C);
    L_C16FD68:;
    v0_1 = (*(int *)((v0_0 + v0_5)));
    v0_5 = (v0_2);
    v0_1 = v0_1;
    v0_6 = (0xC4B40DC);
    if ((v0_2 == 0)) goto L_C16FD88;
    if ((v0_5 == 1)) goto L_C16FD8C;
    if ((v0_5 == 2)) goto L_C16FD92;
    if ((v0_5 == 3)) goto L_C16FDAC;
    if (!((v0_5 == 4))) goto L_C16FDCC;
    v0_3 = *(signed char *)0xC53249A;
    v0_2 = (v0_3);
    if ((v0_3 == 12)) goto L_C16FDC4;
    if ((v0_2 != 13)) goto L_C16FDC8;
    goto L_C16FDC4;
    L_C16FDCC:;
    v0_2 = (*(int *)(((int)stk + 4))) != 0;
    v0_4 = ((FUN_0c037320(((((struct o40_int *)(v0_0))->v)), v0_3)));
    if (v0_2) goto L_C16FDF0;
    *(int *)((int)stk + 0) = 0x1;
    v0_2 = FUN_0c16f890(0xC475AA8, 0xFFFFFFFF, v0_4, 0x1, 0x1);
    v0_5 = (v0_2);
    if ((v0_2 == 0)) goto L_C16FE44;
    L_C16FDF0:;
    v0_3 = (((struct o44_int *)(v0_0))->v);
    v0_5 = (v0_3);
    v0_2 = (0x0);
    v0_6 = (0x1);
    if ((v0_3 != -1)) goto L_C16FE1A;
    v0_3 = (v0_2);
    v0_7 = (v0_2);
    if (((int)v0_4 <= 0)) goto L_C16FE44;
    L_C16FE04:;
    *(unsigned char *)(((*(int *)((((0xC4 + v0_1) + v0_3) + 0x0))) + 0x0)) = v0_6;
    v0_0 = (int)(v0_7 + 0x1) < (int)v0_4;
    v0_3 = ((v0_3 + 0x4));
    v0_7 = ((v0_7 + 0x1));
    if (v0_0) goto L_C16FE04;
    L_C16FE44:;
    return v0_5;
    L_C16FE1A:;
    v0_3 = (v0_2);
    v0_7 = (v0_2);
    if (((int)v0_4 <= 0)) goto L_C16FE34;
    L_C16FE22:;
    *(unsigned char *)(((*(int *)((((0xC4 + v0_1) + v0_3) + 0x0))) + 0x0)) = v0_2;
    v0_5 = (int)(v0_7 + 0x1) < (int)v0_4;
    v0_3 = ((v0_3 + 0x4));
    v0_7 = ((v0_7 + 0x1));
    if (v0_5) goto L_C16FE22;
    L_C16FE34:;
    *(unsigned char *)(((*(int *)((((((((struct o44_int *)(v0_0))->v)) << 2) + (0xC4 + v0_1)) + 0x0))) + 0x0)) = v0_6;
    v0_5 = (0x44);
    goto L_C16FE44;
    L_C16FDC4:;
    v0_3 = ((*(int *)((v0_6 + 0x4))));
    goto L_C16FDCC;
    L_C16FDC8:;
    v0_3 = (((((struct o30_int *)0xC4B40CC)->v)));
    goto L_C16FDCC;
    L_C16FDAC:;
    v0_3 = (((((struct o0_int *)0xC4B40CC)->v)));
    goto L_C16FDCC;
    L_C16FD92:;
    v0_3 = (((((struct oC_int *)0xC4B40CC)->v)));
    goto L_C16FDCC;
    L_C16FD8C:;
    v0_3 = ((*(int *)0xC4B410C));
    goto L_C16FDCC;
    L_C16FD88:;
    v0_3 = ((*(int *)((v0_6 + 0x0))));
    goto L_C16FDCC;
    L_C16FD66:;
    v0_5 = (0x90);
    goto L_C16FD68;
}

int FUN_0c17053a(void)
{
    int stk[17];
    register int t5;
    register int t20;
    register int t33;
    register int t50;
    register int t96;
    register int t99;
    register int t101;
    register int t107;
    register int t149;
    register int t151;
    register int t153;
    register int t160;
    register int t161;
    register int t176;
    register int t191;
    register int t198;
    register int t210;
    register int t211;
    register int t234;
    register int t252;
    register int t269;
    register int t278;

    FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), 0x0);
    FUN_0c17a4c0(0x5, 0x1);
    *(int *)((int)stk + 40) = 0xC203F0C;
    dbg_printf(0xC203F0C);
    FUN_0c17a4c0(0xE, 0x1);
    t5 = (((struct o20_int *)0xC475A6C)->v);
    switch (t5) {
    case 0:
        *(int *)((int)stk + 40) = 0xC203F18;
        dbg_printf(0xC203F18);
        break;
    case 1:
        *(int *)((int)stk + 40) = 0xC203F20;
        dbg_printf(0xC203F20);
        break;
    case 2:
        *(int *)((int)stk + 40) = 0xC203F28;
        dbg_printf(0xC203F28);
        break;
    }
    FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), 0x1);
    FUN_0c17a4c0(0x5, 0x2);
    *(int *)((int)stk + 40) = 0xC203F30;
    dbg_printf(0xC203F30);
    FUN_0c17a4c0(0xE, 0x2);
    t20 = (((struct o24_int *)0xC475A6C)->v);
    switch (t20) {
    case 0:
        *(int *)((int)stk + 40) = 0xC203F3C;
        dbg_printf(0xC203F3C);
        break;
    case 1:
        *(int *)((int)stk + 40) = 0xC203F44;
        dbg_printf(0xC203F44);
        break;
    case 2:
        *(int *)((int)stk + 40) = 0xC203F4C;
        dbg_printf(0xC203F4C);
        break;
    }
    FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), 0x2);
    FUN_0c17a4c0(0x5, 0x3);
    t33 = (((struct o24_int *)0xC475A6C)->v);
    if (t33 != 0) {
        if (t33 != 1) {
            *(int *)((int)stk + 40) = 0xC203F74;
            dbg_printf(0xC203F74);
        } else {
            *(int *)((int)stk + 40) = (((((struct o2C_int *)0xC475A6C)->v)));
            *(int *)((int)stk + 36) = 0xC203F64;
            dbg_printf(0xC203F64);
        }
    } else {
        *(int *)((int)stk + 40) = (((((struct o28_int *)0xC475A6C)->v)));
        *(int *)((int)stk + 36) = 0xC203F54;
        dbg_printf(0xC203F54);
    }
    FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), 0x3);
    FUN_0c17a4c0(0x5, 0x4);
    *(int *)((int)stk + 40) = 0xC203F7C;
    dbg_printf(0xC203F7C);
    FUN_0c17a4c0(0xE, 0x4);
    t50 = (((struct o34_int *)0xC475A6C)->v);
    switch (t50) {
    case 0:
        *(int *)((int)stk + 40) = 0xC203F3C;
        dbg_printf(0xC203F3C);
        break;
    case 1:
        *(int *)((int)stk + 40) = 0xC203F44;
        dbg_printf(0xC203F44);
        break;
    case 2:
        *(int *)((int)stk + 40) = 0xC203F88;
        dbg_printf(0xC203F88);
        break;
    case 3:
        *(int *)((int)stk + 40) = 0xC203F90;
        dbg_printf(0xC203F90);
        break;
    case 4:
        *(int *)((int)stk + 40) = 0xC203F98;
        dbg_printf(0xC203F98);
        break;
    }
    FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), 0x4);
    FUN_0c17a4c0(0x5, 0x5);
    *(int *)((int)stk + 40) = (((((struct o38_int *)0xC475A6C)->v)));
    *(int *)((int)stk + 36) = 0xC203FA0;
    dbg_printf(0xC203FA0);
    FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), 0x5);
    FUN_0c17a4c0(0x5, 0x6);
    *(int *)((int)stk + 32) = (((((struct o3C_int *)0xC475A6C)->v)));
    *(int *)((int)stk + 28) = 0xC203FAC;
    dbg_printf(0xC203FAC);
    FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), 0x6);
    FUN_0c17a4c0(0x5, 0x7);
    *(int *)((int)stk + 24) = ((*(int *)(((((((struct o24_int *)0xC475A6C)->v)) << 2) + 0xC2A5B58))));
    *(int *)((int)stk + 20) = (((((struct o30_int *)0xC475A6C)->v)));
    *(int *)((int)stk + 16) = 0xC203FB8;
    dbg_printf(0xC203FB8);
    *(unsigned int *)(((int)stk + 56)) = (FUN_0c05ffa4((((((struct o24_int *)0xC475A6C)->v)) + 0x1), 0x0, ((((struct o30_int *)0xC475A6C)->v))));
    FUN_0c17a550(0xFFFF0000);
    FUN_0c17a4c0(0x5, 0x8);
    *(int *)((int)stk + 12) = ((*(signed char *)(((*(int *)(((int)stk + 56))) + 0x3))));
    *(int *)((int)stk + 8) = 0xC203FD0;
    dbg_printf(0xC203FD0);
    t96 = 0x0;
    for (;;) {
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0x7));
        t99 = (int)((int)t96 % (int)0x5);
        t101 = (int)((int)t96 / (int)0x5);
        FUN_0c17a4c0(((t101 * 0x37) + 0x5), ((((t99 << 2) + t99) << 1) + 0x9));
        *(int *)((int)stk + 40) = 0xC203FDC;
        dbg_printf(0xC203FDC);
        FUN_0c17a4c0(((t101 * 0x37) + 0xA), ((((t99 << 2) + t99) << 1) + 0x9));
        t107 = *(signed char *)(((*(int *)(((int)stk + 56))) + (((t96 << 2) << 2) << 1)));
        switch (t107) {
        case 0:
            *(int *)((int)stk + 40) = 0xC203FE4;
            dbg_printf(0xC203FE4);
            break;
        case 1:
            FUN_0c17a550(0xFFFF0000);
            *(int *)((int)stk + 40) = 0xC203FE8;
            dbg_printf(0xC203FE8);
            break;
        case 2:
            FUN_0c17a550(0xFF0000FF);
            *(int *)((int)stk + 40) = 0xC203FEC;
            dbg_printf(0xC203FEC);
            break;
        case 4:
            FUN_0c17a550(0xFF00FF00);
            *(int *)((int)stk + 40) = 0xC203FF0;
            dbg_printf(0xC203FF0);
            break;
        case 3:
            FUN_0c17a550(0xFFFF00FF);
            *(int *)((int)stk + 40) = 0xC203FF4;
            dbg_printf(0xC203FF4);
            break;
        case 5:
            FUN_0c17a550(0xFFFFFF00);
            *(int *)((int)stk + 40) = 0xC203FF8;
            dbg_printf(0xC203FF8);
            break;
        case 6:
            FUN_0c17a550(0xFF00FFFF);
            *(int *)((int)stk + 40) = 0xC203FFC;
            dbg_printf(0xC203FFC);
            break;
        case 7:
            FUN_0c17a550(0xFFFFFFFF);
            *(int *)((int)stk + 40) = 0xC204000;
            dbg_printf(0xC204000);
            break;
        }
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0x8));
        t149 = (int)((int)t96 % (int)0x5);
        *(unsigned int *)(((int)stk + 44)) = (((t149 << 2) + t149) << 1);
        t151 = (int)((int)t96 / (int)0x5);
        *(unsigned int *)(((int)stk + 52)) = (t151 * 0x37);
        *(unsigned int *)(((int)stk + 48)) = ((t151 * 0x37) + 0xD);
        FUN_0c17a4c0(((t151 * 0x37) + 0xD), ((((t149 << 2) + t149) << 1) + 0x9));
        t153 = *(int *)(((int)stk + 56));
        *(int *)((int)stk + 40) = ((*(signed char *)((((((t96 << 2) << 2) << 1) + t153) + 0x2))));
        *(int *)((int)stk + 36) = 0xC204004;
        dbg_printf(0xC204004);
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0x9));
        t160 = *(int *)(((int)stk + 44));
        *(unsigned int *)(((int)stk + 60)) = (t160 + 0xA);
        t161 = *(int *)(((int)stk + 52));
        *(unsigned int *)(((int)stk + 64)) = (t161 + 0x5);
        FUN_0c17a4c0((t161 + 0x5), (t160 + 0xA));
        *(int *)((int)stk + 32) = ((*(signed char *)((((((t96 << 2) << 2) << 1) + t153) + 0x4))));
        *(int *)((int)stk + 28) = 0xC204010;
        dbg_printf(0xC204010);
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0xA));
        FUN_0c17a4c0((*(int *)(((int)stk + 48))), (*(int *)(((int)stk + 60))));
        *(int *)((int)stk + 24) = ((*(signed char *)((((((t96 << 2) << 2) << 1) + t153) + 0x5))));
        *(int *)((int)stk + 20) = 0xC204018;
        dbg_printf(0xC204018);
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0xB));
        t176 = *(int *)(((int)stk + 44));
        *(unsigned int *)(((int)stk + 60)) = (t176 + 0xB);
        FUN_0c17a4c0((*(int *)(((int)stk + 64))), (t176 + 0xB));
        *(int *)((int)stk + 16) = (unsigned char)(*(signed char *)((((((t96 << 2) << 2) << 1) + t153) + 0x6)));
        *(int *)((int)stk + 12) = 0xC204018;
        dbg_printf(0xC204018);
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0xC));
        FUN_0c17a4c0((*(int *)(((int)stk + 48))), (*(int *)(((int)stk + 60))));
        *(int *)((int)stk + 8) = ((*(signed char *)((((((t96 << 2) << 2) << 1) + t153) + 0x7))));
        *(int *)((int)stk + 4) = 0xC204018;
        dbg_printf(0xC204018);
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0xD));
        t191 = *(int *)(((int)stk + 44));
        *(unsigned int *)(((int)stk + 48)) = (t191 + 0xC);
        FUN_0c17a4c0((*(int *)(((int)stk + 64))), (t191 + 0xC));
        *(int *)((int)stk + 0) = 0xC204020;
        dbg_printf(0xC204020);
        FUN_0c17a4c0(((*(int *)(((int)stk + 52))) + 0xC), (*(int *)(((int)stk + 48))));
        t198 = *(signed char *)((((((t96 << 2) << 2) << 1) + t153) + 0x1));
        switch (t198) {
        case 0:
            *(int *)((int)stk + 40) = 0xC204028;
            dbg_printf(0xC204028);
            break;
        case 1:
            *(int *)((int)stk + 40) = 0xC20402C;
            dbg_printf(0xC20402C);
            break;
        case 2:
            *(int *)((int)stk + 40) = 0xC204030;
            dbg_printf(0xC204030);
            break;
        }
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0xE));
        t210 = *(int *)(((int)stk + 52));
        t211 = *(int *)(((int)stk + 44));
        *(unsigned int *)(((int)stk + 48)) = (t210 + 0x5);
        FUN_0c17a4c0((t210 + 0x5), (t211 + 0xD));
        *(int *)((int)stk + 40) = (int)((((struct o8_float *)(((((t96 << 2) << 2) << 1) + t153)))->v));
        *(int *)((int)stk + 36) = 0xC204034;
        dbg_printf(0xC204034);
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0xF));
        FUN_0c17a4c0((*(int *)(((int)stk + 48))), ((*(int *)(((int)stk + 44))) + 0xE));
        *(int *)((int)stk + 32) = (int)((((struct oC_float *)(((((t96 << 2) << 2) << 1) + t153)))->v));
        *(int *)((int)stk + 28) = 0xC204040;
        dbg_printf(0xC204040);
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0x10));
        FUN_0c17a4c0((*(int *)(((int)stk + 48))), ((*(int *)(((int)stk + 44))) + 0xF));
        *(int *)((int)stk + 24) = (int)((((struct o10_float *)(((((t96 << 2) << 2) << 1) + t153)))->v));
        *(int *)((int)stk + 20) = 0xC20404C;
        dbg_printf(0xC20404C);
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0x11));
        FUN_0c17a4c0((*(int *)(((int)stk + 48))), ((*(int *)(((int)stk + 44))) + 0x10));
        t234 = *(signed char *)((((((t96 << 2) << 2) << 1) + t153) + 0x1));
        switch (t234) {
        case 0:
            *(int *)((int)stk + 40) = (int)((((struct o14_float *)(((((t96 << 2) << 2) << 1) + t153)))->v));
            *(int *)((int)stk + 36) = 0xC204058;
            dbg_printf(0xC204058);
            break;
        case 1:
            *(int *)((int)stk + 40) = (int)((((struct o14_float *)(((((t96 << 2) << 2) << 1) + t153)))->v));
            *(int *)((int)stk + 36) = 0xC204034;
            dbg_printf(0xC204034);
            break;
        case 2:
            *(int *)((int)stk + 40) = (int)((((struct o14_float *)(((((t96 << 2) << 2) << 1) + t153)))->v));
            *(int *)((int)stk + 36) = 0xC204058;
            dbg_printf(0xC204058);
            break;
        }
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0x12));
        FUN_0c17a4c0(((*(int *)(((int)stk + 52))) + 0x5), ((*(int *)(((int)stk + 44))) + 0x11));
        t252 = *(signed char *)((((((t96 << 2) << 2) << 1) + t153) + 0x1));
        switch (t252) {
        case 0:
            *(int *)((int)stk + 40) = 0xC204064;
            dbg_printf(0xC204064);
            break;
        case 1:
            *(int *)((int)stk + 40) = (int)((((struct o18_float *)(((((t96 << 2) << 2) << 1) + t153)))->v));
            *(int *)((int)stk + 36) = 0xC204040;
            dbg_printf(0xC204040);
            break;
        case 2:
            *(int *)((int)stk + 40) = (int)((((struct o18_float *)(((((t96 << 2) << 2) << 1) + t153)))->v));
            *(int *)((int)stk + 36) = 0xC204068;
            dbg_printf(0xC204068);
            break;
        }
        FUN_0c16f87a(((((struct o0_int *)0xC475A6C)->v)), (((short)t96 * (short)0xD) + 0x13));
        FUN_0c17a4c0(((*(int *)(((int)stk + 52))) + 0x5), ((*(int *)(((int)stk + 44))) + 0x12));
        t269 = *(signed char *)((((((t96 << 2) << 2) << 1) + t153) + 0x1));
        if (t269 != 0) {
            if (t269 != 1) {
                t278 = t269;
                if (t269 != 2) {
                } else {
                    *(int *)((int)stk + 40) = 0xC204064;
                    t278 = (dbg_printf(0xC204064));
                }
            } else {
                *(int *)((int)stk + 40) = (int)((((struct o1C_float *)(((((t96 << 2) << 2) << 1) + t153)))->v));
                *(int *)((int)stk + 36) = 0xC20404C;
                t278 = (dbg_printf(0xC20404C));
            }
        } else {
            *(int *)((int)stk + 40) = 0xC204064;
            t278 = (dbg_printf(0xC204064));
        }
        t96 = (t96 + 0x1);
        if ((int)t96 < (int)0xA) continue;
        break;
    }
    return t278;
}

int FUN_0c170b3c(void)
{
    int stk[3];
    int t0;

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
    t0 = *(int *)0xC475AE4;
    v0_0 = (0x0);
    v0_2 = (0x0);
    v0_1 = (0xC475A64);
    v0_3 = (0xC475A68);
    v0_4 = (t0);
    if (((0x2000 & t0) == 0)) goto L_C170B6A;
    v0_4 = *(int *)((v0_3 + 0x0));
    *(unsigned int *)((v0_3 + 0x0)) = (v0_4 - 1);
    if (((int)(v0_4 - 1) >= 0)) goto L_C170B7E;
    *(unsigned int *)((v0_1 + 0x4)) = v0_0;
    L_C170B7E:;
    v0_4 = *(int *)((v0_1 + 0x4));
    v0_3 = (v0_4);
    v0_5 = (0x1);
    if ((v0_4 == 0)) goto L_C170BA6;
    if ((v0_3 == 1)) goto L_C170BBA;
    if ((v0_3 == 2)) goto L_C170BEC;
    if ((v0_3 == 3)) goto L_C170C28;
    if ((v0_3 == 4)) goto L_C170C52;
    if ((v0_3 == 5)) goto L_C170C7C;
    if ((v0_3 != 6)) goto L_C170BA2;
    v0_2 = v0_5;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = ((((struct o60_int *)(v0_1))->v)) != 0;
    v0_2 = ((FUN_0c16f890((v0_1 + 0x7C), 0x0, 0xFF, 0x1, v0_2)));
    if (v0_3) goto L_C170CCE;
    if ((v0_2 == 0)) goto L_C170D02;
    (((struct o70_uint *)(v0_1))->v) = ((((struct o7C_int *)(v0_1))->v));
    L_C170CCE:;
    if ((v0_2 == 0)) goto L_C170D02;
    v0_2 = ((((struct o70_int *)(v0_1))->v));
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = (((struct o6C_int *)(v0_1))->v);
    v0_4 = (((struct o68_int *)(v0_1))->v);
    *(unsigned int *)(((int)stk + 8)) = 0xC532498;
    FUN_0c037ac4(0xC532498, 0x0, v0_4, v0_3, v0_2);
    v0_2 = ((((struct o7C_int *)(v0_1))->v));
    *(int *)((int)stk + 0) = v0_2;
    FUN_0c037ac4((*(int *)(((int)stk + 8))), 0x1, ((((struct o74_int *)(v0_1))->v)), ((((struct o78_int *)(v0_1))->v)), v0_2);
    L_C170D02:;
    v0_2 = *(short *)0xC542700;
    v0_3 = ((unsigned short)v0_2);
    if ((((unsigned short)v0_2 & 64) == 0)) goto L_C170D10;
    *(unsigned int *)((v0_1 + 0x0)) = v0_0;
    *(unsigned int *)((v0_1 + 0x4)) = v0_0;
    L_C170D10:;
    return v0_3;
    L_C170BA2:;
    goto L_C170CCE;
    L_C170C7C:;
    v0_2 = v0_5;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = ((((struct o60_int *)(v0_1))->v)) != 0;
    v0_2 = ((FUN_0c16f890((v0_1 + 0x78), 0x0, 0x6, 0x1, v0_2)));
    if (v0_3) goto L_C170CCE;
    if ((v0_2 == 0)) goto L_C170D02;
    (((struct o6C_uint *)(v0_1))->v) = ((((struct o78_int *)(v0_1))->v));
    goto L_C170CCE;
    L_C170C52:;
    v0_2 = v0_5;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = ((((struct o60_int *)(v0_1))->v)) != 0;
    v0_2 = ((FUN_0c16f890((v0_1 + 0x74), 0xFFFFFFFF, 0x0, 0x1, v0_2)));
    if (v0_3) goto L_C170CCE;
    if ((v0_2 == 0)) goto L_C170D02;
    (((struct o68_uint *)(v0_1))->v) = ((((struct o74_int *)(v0_1))->v));
    goto L_C170CCE;
    L_C170C28:;
    v0_2 = v0_5;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = ((((struct o60_int *)(v0_1))->v)) != 0;
    v0_2 = ((FUN_0c16f890((v0_1 + 0x70), 0x0, 0xFF, 0x1, v0_2)));
    if (v0_3) goto L_C170CCE;
    if ((v0_2 == 0)) goto L_C170D02;
    (((struct o7C_uint *)(v0_1))->v) = ((((struct o70_int *)(v0_1))->v));
    goto L_C170CCE;
    L_C170BEC:;
    v0_2 = v0_5;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = ((((struct o60_int *)(v0_1))->v)) != 0;
    v0_2 = ((FUN_0c16f890((v0_1 + 0x6C), 0x0, 0x6, 0x1, v0_2)));
    if (v0_3) goto L_C170CCE;
    if ((v0_2 != 0)) goto L_C170C10;
    goto L_C170D02;
    L_C170C10:;
    (((struct o78_uint *)(v0_1))->v) = ((((struct o6C_int *)(v0_1))->v));
    goto L_C170CCE;
    L_C170BBA:;
    v0_2 = v0_5;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = ((((struct o60_int *)(v0_1))->v)) == 0;
    v0_2 = ((FUN_0c16f890((v0_1 + 0x68), 0xFFFFFFFF, 0x0, 0x1, v0_2)));
    if (v0_3) goto L_C170BDA;
    goto L_C170CCE;
    L_C170BDA:;
    if ((v0_2 != 0)) goto L_C170BE2;
    goto L_C170D02;
    L_C170BE2:;
    (((struct o74_uint *)(v0_1))->v) = ((((struct o68_int *)(v0_1))->v));
    goto L_C170CCE;
    L_C170BA6:;
    v0_3 = v0_5;
    *(int *)((int)stk + 4) = v0_3;
    FUN_0c16f890((v0_1 + 0x60), 0x0, 0x1, 0x1, v0_3);
    goto L_C170CCE;
    L_C170B6A:;
    if (((v0_4 & 0x1000) == 0)) goto L_C170B7E;
    v0_5 = *(int *)((v0_3 + 0x0));
    *(unsigned int *)((v0_3 + 0x0)) = (v0_5 + 0x1);
    v0_4 = (0x6);
    if (((int)(v0_5 + 0x1) <= (int)0x6)) goto L_C170B7E;
    *(unsigned int *)((v0_1 + 0x4)) = v0_4;
    goto L_C170B7E;
}


int FUN_0c170f22(void)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    FUN_0c17a4c0(0x1, 0x0);
    dbg_printf(0xC204074);
    FUN_0c16f7fc();
    t0 = *(int *)0xC475A64;
    switch (t0) {
    case 0:
        FUN_0c16fe50();
        break;
    case 1:
        FUN_0c16fbd0();
        break;
    case 2:
        FUN_0c16fafc();
        break;
    case 3:
        FUN_0c170b3c();
        break;
    }
    FUN_0c170db6();
    FUN_0c17053a();
    FUN_0c171154();
    nlSelectMatrixStack(0x2);
    nlObjPutWorldMatrixMode();
    nlSelectMatrixStack(0x1);
    t0 = *(signed char *)0xC5421DC;
    u0 = (((struct o8_float *)(((0xEC + (((short)t0 * (short)0x2F8) + 0xC5410FC)) + 0xC)))->v);
    u1 = (((struct o4_float *)(((0xEC + (((short)t0 * (short)0x2F8) + 0xC5410FC)) + 0xC)))->v);
    u2 = (((struct o4_float *)(((0xBC + (((short)t0 * (short)0x2F8) + 0xC5410FC)) + 0xC)))->v);
    u3 = (((struct oC_float *)((0xEC + (((short)t0 * (short)0x2F8) + 0xC5410FC))))->v);
    u4 = (((struct oC_float *)((0xBC + (((short)t0 * (short)0x2F8) + 0xC5410FC))))->v);
    FUN_0c0dcc80((u3 - u4), (u1 - u2), (u0 - ((((struct o8_float *)(((0xBC + (((short)t0 * (short)0x2F8) + 0xC5410FC)) + 0xC)))->v))));
    FUN_0c171554();
    nlSelectMatrixStack(0x3);
    nlUnitMatrix();
    FUN_0c17c6f0(0x1D28, ((((struct o8_float *)0xC1710A8)->v)), ((((struct o4_float *)0xC1710A8)->v)), ((((struct o0_float *)0xC1710A8)->v)));
    nlSelectMatrixStack(0x1);
    FUN_0c17a550(0xFFFFFFFF);
    FUN_0c17a4c0(0xA, 0x0);
    *(volatile int *)0xC475A88;
    *(volatile int *)0xC475A84;
    *(volatile int *)0xC475A80;
    *(volatile int *)0xC475A7C;
    *(volatile int *)0xC475A78;
    *(volatile int *)0xC475A74;
    *(volatile int *)0xC475A70;
    *(volatile int *)0xC475A6C;
    *(volatile int *)0xC475A68;
    *(volatile int *)0xC475A64;
    dbg_printf(0xC204080);
    return FUN_0c064128();
}

int FUN_0c17106e(void)
{
    if ((unsigned char)(*(signed char *)0xC541F44) == 0) {
        FUN_0c170d30();
    }
    return FUN_0c170f22();
}

int FUN_0c1710d4(void)
{
    register int t15;

    (((struct o0_uchar *)0xC53249A)->v) = ((((struct o0_int *)0xC475A94)->v));
    FUN_0c0365c8(0x0);
    FUN_0c0365f0(0x0);
    FUN_0c067008(0x0);
    FUN_0c039fbc();
    *(float *)0xC5324C0 = 0.0f;
    *(float *)0xC5324C4 = 0.0f;
    *(float *)0xC5324C8 = 0.0f;
    *(unsigned char *)0xC535BB6 = 0x1;
    (((struct o1C_uint *)0xC475AD4)->v) = 0xC532498;
    FUN_0c037ac4(0xC532498, 0x0, ((((struct o38_int *)0xC475A94)->v)), ((((struct o3C_int *)0xC475A94)->v)), (((((struct o0_int *)0xC475AD4)->v))));
    FUN_0c037ac4(0xC532498, 0x1, ((((struct o4_int *)0xC475AD4)->v)), ((((struct o8_int *)0xC475AD4)->v)), (((((struct oC_int *)0xC475AD4)->v))));
    t15 = FUN_0c1716d0(0x0, 0x0);
    (((struct o20_uint *)0xC475AD4)->v) = t15;
    return t15;
}

int FUN_0c171154(void)
{
    int t0;
    register int t2;
    register int t3;
    register int t4;

    if (((((struct o3C_int *)0xC475A64)->v)) != 0) {
        (((struct oA8_uchar *)(((((struct o2C_int *)0xC475AC4)->v))))->v) = 0x0;
        (((struct oA8_uchar *)(((((struct o30_int *)0xC475AC4)->v))))->v) = 0x1;
        t3 = 0xA8;
    } else {
        (((struct oA8_uchar *)(((((struct o2C_int *)0xC475AC4)->v))))->v) = 0x1;
        (((struct oA8_uchar *)(((((struct o30_int *)0xC475AC4)->v))))->v) = 0x0;
        if (((((struct o0_int *)0xC475A64)->v)) == 3) {
            FUN_0c17a4c0(0x1E, 0x3);
            FUN_0c16f87a(((((struct o4_int *)0xC475A64)->v)), 0x0);
            if (((((struct o0_int *)0xC475AC4)->v)) == 0) {
                t4 = 0xC2040A8;
            } else {
                t4 = 0xC2040B0;
            }
            dbg_printf(t4);
            FUN_0c16f87a(((((struct o4_int *)0xC475A64)->v)), 0x1);
            *(volatile int *)0xC475ACC;
            dbg_printf(0xC2040B8);
            FUN_0c16f87a(((((struct o4_int *)0xC475A64)->v)), 0x2);
            *(volatile int *)0xC475AD0;
            dbg_printf(0xC2040C8);
            FUN_0c16f87a(((((struct o4_int *)0xC475A64)->v)), 0x3);
            *(volatile int *)0xC475AD4;
            dbg_printf(0xC2040D8);
            FUN_0c16f87a(((((struct o4_int *)0xC475A64)->v)), 0x4);
            *(volatile int *)0xC475AD8;
            dbg_printf(0xC2040E8);
            FUN_0c16f87a(((((struct o4_int *)0xC475A64)->v)), 0x5);
            *(volatile int *)0xC475ADC;
            dbg_printf(0xC2040F8);
            FUN_0c16f87a(((((struct o4_int *)0xC475A64)->v)), 0x6);
        } else {
            FUN_0c17a550(0xFFFFFFFF);
            FUN_0c17a4c0(0x1E, 0x3);
            if (((((struct o0_int *)0xC475AC4)->v)) == 0) {
                t4 = 0xC2040A8;
            } else {
                t4 = 0xC2040B0;
            }
            dbg_printf(t4);
            *(volatile int *)0xC475ACC;
            dbg_printf(0xC2040B8);
            *(volatile int *)0xC475AD0;
            dbg_printf(0xC2040C8);
            *(volatile int *)0xC475AD4;
            dbg_printf(0xC2040D8);
            *(volatile int *)0xC475AD8;
            dbg_printf(0xC2040E8);
            *(volatile int *)0xC475ADC;
            dbg_printf(0xC2040F8);
        }
        *(volatile int *)0xC475AE0;
        dbg_printf(0xC204108);
        if ((((unsigned short)(*(short *)0xC542700) & 0x200) != 0) && (t0 = (((struct o0_int *)0xC475A64)->v), t0 == 3)) {
            FUN_0c037ac4(0xC532498, 0x0, ((((struct o8_int *)0xC475AC4)->v)), ((((struct oC_int *)0xC475AC4)->v)), (((((struct o10_int *)0xC475AC4)->v))));
            FUN_0c037ac4(0xC532498, 0x1, ((((struct o14_int *)0xC475AC4)->v)), ((((struct o18_int *)0xC475AC4)->v)), (((((struct o1C_int *)0xC475AC4)->v))));
        }
        if ((((((struct o4_int *)0xC475AC4)->v)) != 0) && ((t3 = *(short *)0xC542700, ((unsigned short)t3 & 0x100) == 0) || (t2 = (((struct o0_int *)0xC475A64)->v), t2 != 3))) {
        } else {
            FUN_0c037bf6(0xC532498);
        }
        t0 = *(short *)0xC542700;
        t3 = (unsigned short)t0;
        if (((unsigned short)t0 & 128) != 0) {
            t0 = (((struct o0_int *)0xC475A64)->v);
            t2 = t0;
            if (t0 == 3) {
                (((struct o4_uint *)0xC475AC4)->v) = (((((struct o4_int *)0xC475AC4)->v)) ^ 0x1);
                t2 = 0x64;
            }
            t3 = t2;
        }
    }
    return t3;
}

void FUN_0c171398(void)
{
    
}

int FUN_0c1713d0(int a4, int a5, float f4, float f5)
{
    register float u8;

    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlTranslateV(a4);
    nlScale(f5, f4, f5);
    FUN_0c17e740((*(float *)((a5 + 0x0))), ((((struct o4_float *)(a5))->v)), ((((struct o8_float *)(a5))->v)));
    u8 = f4;
    if (f5 > f4) {
        u8 = f5;
    }
    FUN_0c17d6d0(u8);
    nlObjPut(0xC2A3C28);
    FUN_0c17e740(1.0f, 1.0f, 1.0f);
    return nlPopMatrix(0x1);
}

int FUN_0c17143e(int a4, int a5, float f4)
{
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlTranslateV(a4);
    nlScale(f4, f4, f4);
    FUN_0c17e740((*(float *)((a5 + 0x0))), ((((struct o4_float *)(a5))->v)), ((((struct o8_float *)(a5))->v)));
    FUN_0c17d6d0(f4);
    nlObjPut(0xC2A4968);
    FUN_0c17e740(1.0f, 1.0f, 1.0f);
    return nlPopMatrix(0x1);
}

int FUN_0c17149c(int a4, int a5, int a6)
{
    register int t24;

    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlTranslateV(a4);
    nlScaleV(a5);
    FUN_0c17e740((*(float *)((a6 + 0x0))), ((((struct o4_float *)(a6))->v)), ((((struct o8_float *)(a6))->v)));
    if ((*(float *)((a5 + 0x0))) > ((((struct o4_float *)(a5))->v))) {
        if ((*(float *)((a5 + 0x0))) > ((((struct o8_float *)(a5))->v))) {
            FUN_0c17d6d0((*(float *)((a5 + 0x0))));
        } else {
            FUN_0c17d6d0(((((struct o8_float *)(a5))->v)));
        }
    } else {
        t24 = 0x4;
        if (!(((((struct o4_float *)(a5))->v)) > ((((struct o8_float *)(a5))->v)))) {
            t24 = 0x8;
        }
        FUN_0c17d6d0((*(float *)((a5 + t24))));
    }
    nlObjPut(0xC2A39F0);
    FUN_0c17e740(1.0f, 1.0f, 1.0f);
    return nlPopMatrix(0x1);
}


int FUN_0c171698(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 1.0f;
    (((struct o40_float *)(a4))->v) = 1.0f;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    return 0xA8;
}

int FUN_0c1716d0(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 == 4) {
                        t0 = *(signed char *)0xC53249A;
                        if ((t0 != 12) && (t0 != 13)) {
                            t0 = ((((struct o30_int *)0xC4B40CC)->v));
                        } else {
                            t0 = ((((struct o14_int *)0xC4B40CC)->v));
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t0 = ((((struct o0_int *)0xC4B40CC)->v));
                }
                t1 = t0;
            } else {
                t1 = ((((struct oC_int *)0xC4B40CC)->v));
            }
            t0 = t1;
        } else {
            t0 = (*(int *)0xC4B410C);
        }
        t1 = t0;
    } else {
        t1 = ((((struct o10_int *)0xC4B40CC)->v));
    }
    t0 = FUN_0c037320(a5, t1);
    t2 = a5;
    t3 = t0;
    if ((int)t0 < 0) {
        t2 = 0x0;
        t3 = (FUN_0c037320(0x0, t1));
    }
    t0 = FUN_0c03f444(0x5, 0x0, t3);
    if (t0 != 0) {
        FUN_0c03733c(t0, t2, t1);
        *(unsigned int *)((t0 + 0x4)) = 0xC171698;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned short *)((t0 + 0x1E)) = t2;
        (((struct o30_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 0.0f;
    }
    return t0;
}
