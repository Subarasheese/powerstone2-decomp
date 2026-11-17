/* game/flow: functions 0C03FD58-0C041E2A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o134_uchar { char p[0x134]; unsigned char v; };
struct o38_short { char p[0x38]; short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3D_uchar { char p[0x3D]; unsigned char v; };
struct o44_short { char p[0x44]; short v; };
struct o5C_uchar { char p[0x5C]; unsigned char v; };
struct o66_uchar { char p[0x66]; unsigned char v; };
struct o7C_int { char p[0x7C]; int v; };
int FUN_0c031720(void);
int FUN_0c031c5a(void);
int FUN_0c031e6c(void);
int FUN_0c035024(void);
int FUN_0c0353e8(void);
int FUN_0c038548(int);
int FUN_0c038566(void);
int FUN_0c038e88(int);
int res_cockpit_faces_release_all(void);
int FUN_0c038ec2(int);
int FUN_0c038ee0(int);
int FUN_0c038f1a(int);
int FUN_0c038f70(void);
extern int FUN_0c03f40c();
extern int FUN_0c03fef2();
int FUN_0c03ffbe(void);
int FUN_0c041026(int, int, int, int);
int FUN_0c041084(int);
int FUN_0c0410fa(void);
int FUN_0c041124(void);
int FUN_0c041218(void);
int FUN_0c041340(void);
int FUN_0c041792(void);
int FUN_0c04182c(void);
int FUN_0c04193c(void);
int FUN_0c041a04(int, int, int);
int FUN_0c0d5188(void);
int FUN_0c0548e0(int);
int FUN_0c056d12(int, int, int, int);
int FUN_0c056eae(int);
int FUN_0c056eee(void);
int FUN_0c059c54(int);
int FUN_0c059c7a(int, int);
int FUN_0c059e60(int, int);
int FUN_0c05a044(void);
int FUN_0c05aaf6(int);
int FUN_0c05ab04(int);
int FUN_0c05b052(int, int);
int FUN_0c060c00(void);
int FUN_0c063f24(void);
int thunk_FUN_0c066b82(void);
int FUN_0c067a58(void);
int FUN_0c073682(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0b2794(int);
int FUN_0c0cfc04(void);
int FUN_0c1210e8(void);
int FUN_0c1539c0(int);
int FUN_0c1574d4(int, int, int, int, int, int, int, int, int, int);
int FUN_0c15f60a(int);
int FUN_0c16c730(void);
int FUN_0c040158(int a4, int a5, int a6, int a7);
int FUN_0c0401cc(int a4, int a5, int a6, int a7);
int FUN_0c040740(int a4, int a5, int a6, int a7);
int FUN_0c040a98(int a4, int a5, int a6, int a7);
int FUN_0c041450(void);
int FUN_0c041a7c(int a4, int a5, int a6);

int FUN_0c040158(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t27;
    int t6;
    register int t7;
    register int t8;
    register int t15;
    register int t5;

    t0 = *(signed char *)0xC541F3D;
    t27 = (unsigned char)t0;
    if ((unsigned char)t0 == 2) {
        if (((*(signed char *)0xC5429B4) != 0) && (t15 = *(signed char *)0xC5429B4, t15 != 4)) {
        } else {
            t6 = 0xC5429B4;
            t7 = 0x0;
            for (;;) {
                t8 = (((struct o7C_int *)(((t7 * 0x98) + 0xC541CDC)))->v);
                if (((int)t8 < (int)0x2) || ((int)t8 > (int)0x3)) {
                    t5 = 0x1;
                    t5 = ((int)t5 << (int)t7);
                    t6 = (*(signed char *)0xC3BD447);
                    t6 = (unsigned char)t6;
                    if ((t5 & t6) == 0) {
                        t6 = (*(int *)0xC40DC50);
                        t6 = (t6 & (~((int)0x1 << (int)t7)));
                        *(unsigned int *)0xC40DC50 = t6;
                    }
                }
                t7 = (t7 + 0x1);
                if ((int)t7 >= (int)0x4) {
                    break;
                }
            }
            t15 = 0x7C;
        }
        t27 = t15;
    }
    return t27;
}

int FUN_0c0401cc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;

    t0 = *(signed char *)0xC54225E;
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = ((int (*)(int, int, int, int))(FUN_0c03f40c))(0x6, a5, a6, a7);
            FUN_0c038ec2(0x6);
            t1 = ((int (*)(int))(FUN_0c03f40c))(0x8);
            FUN_0c038ec2(0x8);
            t1 = ((int (*)(int))(FUN_0c03f40c))(0x7);
            return (FUN_0c038ec2(0x7));
        }
        if (t0 == 2) {
            *(unsigned int *)0xC542260 = ((*(int *)0xC542260) + 0x1);
            FUN_0c067a58();
            t1 = ((int (*)(int))(FUN_0c03f40c))(0x6);
            FUN_0c063f24();
            FUN_0c038566();
            FUN_0c038548(0x6);
            res_cockpit_faces_release_all();
            FUN_0c038f70();
            FUN_0c038e88(0x2);
            FUN_0c038e88(0x1);
            FUN_0c038e88(0x9);
            FUN_0c038e88(0x5);
            FUN_0c038e88(0x6);
            t1 = *(signed char *)0xC5421F9;
            if ((t1 != 3) && (t1 != 6)) {
                return t1;
            }
            return thunk_FUN_0c066b82();
        }
        return t0;
    }
    *(unsigned int *)0xC542260 = ((*(int *)0xC542260) + 0x1);
    FUN_0c056eae(0x4);
    FUN_0c067a58();
    FUN_0c056eee();
    FUN_0c038566();
    res_cockpit_faces_release_all();
    FUN_0c056eae(0x2);
    FUN_0c0cfc04();
    t0 = ((int (*)(int))(FUN_0c03f40c))(0x9);
    FUN_0c038ec2(0x9);
    t0 = ((int (*)(int))(FUN_0c03f40c))(0x2);
    FUN_0c038548(0x2);
    FUN_0c038e88(0x2);
    t0 = ((int (*)(int))(FUN_0c03f40c))(0x1);
    FUN_0c038ec2(0x1);
    FUN_0c056eee();
    FUN_0c056eae(0x5);
    FUN_0c060c00();
    FUN_0c056eee();
    t0 = *(signed char *)0xC5421F9;
    if ((t0 != 3) && (t0 != 6)) {
    } else {
        thunk_FUN_0c066b82();
    }
    FUN_0c063f24();
    FUN_0c056eae(0x2);
    res_cockpit_faces_release_all();
    FUN_0c038ee0(0x2);
    FUN_0c038f1a(0x1);
    FUN_0c038f1a(0x9);
    FUN_0c056eee();
    FUN_0c056eae(0x6);
    t0 = ((int (*)(int))(FUN_0c03f40c))(0x5);
    FUN_0c038ec2(0x5);
    FUN_0c056eee();
    t0 = ((int (*)(int))(FUN_0c03f40c))(0x6);
    FUN_0c038ec2(0x6);
    FUN_0c056eae(0x5);
    t0 = ((int (*)(int))(FUN_0c03f40c))(0x8);
    FUN_0c056eee();
    FUN_0c056eae(0x2);
    FUN_0c038ec2(0x8);
    FUN_0c056eee();
    t0 = ((int (*)(int))(FUN_0c03f40c))(0x7);
    return (FUN_0c038ec2(0x7));
}

int FUN_0c040740(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    t1 = 0xC532498;
    t2 = 0x0;
    for (;;) {
        if ((unsigned int)t1 >= (unsigned int)0xC540978) {
            break;
        }
        t3 = 0x3714;
        t4 = (*(signed char *)((t1 + t3)));
        t1 = (t1 + 0x3938);
        if (t4 != 0) {
            t2 = (t2 + 0x1);
        }
    }
    if ((int)t2 <= (int)0x2) {
        t4 = t3;
        t3 = 0x2;
        t5 = t1;
        t1 = t2;
        t2 = 0x0;
        t6 = 0xC532498;
        t7 = 0xC532498;
        for (;;) {
            if ((unsigned int)t6 >= (unsigned int)0xC540978) {
                break;
            }
            t4 = 0x3714;
            t8 = (*(signed char *)((t6 + t4)));
            if (t8 != 0) {
                t1 = t7;
                t1 = (t1 + 0x28);
                t5 = t2;
                t4 = (((int (*)(int, int, int, int))(FUN_0c03fef2))(t5, t1, a6, a7));
                t2 = (t2 + 0x2);
                *(unsigned int *)((t7 + 0x38)) = t4;
            } else {
                t9 = t3;
                t10 = t8;
                t11 = t5;
                t12 = t1;
            }
            t6 = (t6 + 0x3938);
            t3 = t9;
            t8 = t10;
            t5 = t11;
            t1 = t12;
            t7 = (t7 + 0x3938);
        }
        t1 = t4;
    } else {
        t2 = FUN_0c0d5188();
        if ((t2 != 0) && (t0 = *(signed char *)0xC30541F, t0 == 0)) {
            *(unsigned int *)0xC5324D0 = (((int (*)(int, int))(FUN_0c03fef2))(0x0, 0xC5324C0));
            *(unsigned int *)0xC535E08 = (((int (*)(int, int))(FUN_0c03fef2))(0x2, 0xC535DF8));
            *(unsigned int *)0xC539740 = (((int (*)(int, int))(FUN_0c03fef2))(0x1, 0xC539730));
            t0 = ((int (*)(int, int))(FUN_0c03fef2))(0x3, 0xC53D068);
            *(unsigned int *)0xC53D078 = t0;
            t2 = t0;
        } else {
            t0 = 0x0;
            for (;;) {
                t3 = ((int (*)(int, int))(FUN_0c03fef2))(t0, (((t0 * 0x3938) + 0xC532498) + 0x28));
                t4 = ((t0 * 0x3938) + 0xC532498);
                t0 = (t0 + 0x1);
                *(unsigned int *)((t4 + 0x38)) = t3;
                if ((int)t0 >= (int)0x4) {
                    break;
                }
            }
            t2 = t3;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c040a98(int a4, int a5, int a6, int a7)
{
    int stk[10];

    register int R1;
    register int R3;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_6 = *(signed char *)0xC5421FA;
    v0_4 = (v0_6);
    v0_2 = (0x1);
    v0_0 = (0xC085CAC);
    v0_3 = (0xC532498);
    v0_1 = (0x3938);
    v0_0 = (0xC5421F8);
    v0_7 = (0x5A);
    v0_5 = (0xE4E0);
    if ((v0_6 == 0)) goto L_C040AE6;
    if ((v0_4 == 1)) goto L_C040B78;
    if ((v0_4 != 2)) goto L_C040ACA;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    *(unsigned int *)((v0_0 + 0x10)) = v0_7;
    FUN_0c05aaf6(0x80);
    (((struct o134_uchar *)(v0_0))->v) = 0x0;
    v0_2 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((*(signed char *)((v0_0 + 0x3F))) << 2) + 0xC2402AC)))))(0x0, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    *(unsigned int *)(((int)stk + 4)) = (v0_5 + v0_3);
    v0_7 = (v0_3);
    v0_6 = (v0_3);
    L_C040EE8:;
    if (((unsigned int)v0_6 < (unsigned int)(*(int *)(((int)stk + 4))))) goto L_C040EC4;
    if (((unsigned char)(*(signed char *)0xC541F3D) == 1)) goto L_C040F60;
    FUN_0c1574d4(v0_7, R5, R6, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
    if (((*(signed char *)((v0_0 + 0x17F))) != 0)) goto L_C040F0C;
    FUN_0c1539c0(v0_7);
    L_C040F0C:;
    v0_1 = (FUN_0c0d5188()) != 0;
    if (v0_1) goto L_C040F60;
    if (((*(signed char *)0xC5429B4) != 0)) goto L_C040F60;
    if (((*(signed char *)((v0_0 + 0x166))) == 0)) goto L_C040F58;
    v0_7 = (0x1);
    L_C040F5A:;
    FUN_0c15f60a(v0_7);
    L_C040F60:;
    v0_1 = *(signed char *)((v0_0 + 0x166));
    v0_4 = (v0_1);
    if ((v0_1 != 1)) goto L_C041012;
    return FUN_0c0b2794((((short)(*(signed char *)((v0_0 + 0x16B))) * (short)0x3938) + v0_3));
    L_C041012:;
    return v0_4;
    L_C040F58:;
    v0_7 = (0x0);
    goto L_C040F5A;
    L_C040EC4:;
    if (((*(signed char *)((v0_6 + 0x3714))) == 0)) goto L_C040EE0;
    if (((*(signed char *)((v0_6 + 0x2))) == 12)) goto L_C040EE0;
    if (((*(signed char *)((v0_6 + 0x2))) == 13)) goto L_C040EE0;
    FUN_0c085cac((*(int *)(((int)stk + 0))), 0x0, 0x0);
    L_C040EE0:;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + v0_1);
    v0_6 = ((v0_6 + v0_1));
    goto L_C040EE8;
    L_C040ACA:;
    if ((v0_4 != 3)) goto L_C040AD2;
    v0_1 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)((v0_0 + 0x10)) = (v0_1 - 1);
    if (((int)(v0_1 - 1) >= 0)) goto L_C041012;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    *(unsigned int *)((v0_0 + 0x10)) = v0_7;
    (((struct o3D_uchar *)(v0_0))->v) = v0_2;
    v0_0 = *(int *)((((*(signed char *)((v0_0 + 0x3F))) << 2) + 0xC2402AC));
    return ((int (*)(int, int, int, int))(v0_0))(0xA, R5, R6, a7);
    L_C040AD2:;
    if ((v0_4 != 4)) goto L_C040ADA;
    v0_1 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)((v0_0 + 0x10)) = (v0_1 - 1);
    if (((int)(v0_1 - 1) >= 0)) goto L_C041012;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    *(unsigned int *)((v0_0 + 0x10)) = 0x3C;
    FUN_0c031720();
    return FUN_0c05aaf6(0x81);
    L_C040ADA:;
    if ((v0_4 != 5)) goto L_C040AE2;
    v0_1 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)((v0_0 + 0x10)) = (v0_1 - 1);
    if (((int)(v0_1 - 1) >= 0)) goto L_C041012;
    L_C040FFA:;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    *(unsigned char *)((v0_0 + 0x2)) = (v0_1 + 0x1);
    v0_4 = ((v0_1 + 0x1));
    goto L_C041012;
    L_C040AE2:;
    *(unsigned char *)((v0_0 + 0x1)) = ((*(signed char *)((v0_0 + 0x1))) + 0x1);
    *(unsigned char *)((v0_0 + 0x2)) = 0x0;
    (((struct o3D_uchar *)(v0_0))->v) = 0x2;
    v0_4 = (0x3D);
    goto L_C041012;
    L_C040B78:;
    v0_4 = (FUN_0c0d5188()) != 0;
    v0_5 = (0xC1B7AC0);
    v0_6 = (0xC1B7B00);
    if (!(v0_4)) goto L_C040DAA;
    if (((*(signed char *)0xC30541F) == 0)) goto L_C040B96;
    goto L_C040DAA;
    L_C040DAA:;
    v0_7 = *(int *)((v0_0 + 0x18));
    v0_4 = (v0_7);
    if ((v0_7 == 0)) goto L_C040DC4;
    if ((v0_4 == 120)) goto L_C040DC4;
    if ((v0_4 == 0xF0)) goto L_C040DC4;
    if ((v0_4 == 0x168)) goto L_C040DC4;
    L_C040E70:;
    *(unsigned int *)((v0_0 + 0x18)) = ((*(int *)((v0_0 + 0x18))) + 0x1);
    v0_1 = FUN_0c03ffbe();
    v0_4 = (v0_1);
    if ((v0_1 == 0)) goto L_C040E82;
    *(unsigned int *)((v0_0 + 0x10)) = v0_2;
    v0_4 = ((FUN_0c05a044()));
    L_C040E82:;
    v0_1 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)((v0_0 + 0x10)) = (v0_1 - 1);
    if (((int)(v0_1 - 1) > 0)) goto L_C040E90;
    goto L_C040FFA;
    L_C040E90:;
    goto L_C041012;
    L_C040DC4:;
    R5 = (0x4);
    if (((int)(*(int *)((v0_0 + 0x14))) >= (int)0x4)) goto L_C040E70;
    L_C040DD6:;
    v0_4 = *(int *)((v0_0 + 0x14));
    v0_7 = (((v0_4 * v0_1) + v0_3));
    if (((*(signed char *)((((v0_4 * v0_1) + v0_3) + 0x3714))) == 0)) goto L_C040DD0;
    if (((*(signed char *)((v0_7 + 0x2))) == 12)) goto L_C040DD0;
    if (((*(signed char *)((v0_7 + 0x2))) == 13)) goto L_C040DD0;
    *(unsigned int *)(((int)stk + 0)) = (v0_0 + 0x14);
    v0_4 = ((v0_0 + 0x14));
    if (((int)(*(int *)(((v0_0 + 0x14) + 0x0))) >= (int)R5)) goto L_C040E70;
    FUN_0c0548e0((*(int *)((v0_4 + 0x0))));
    *(unsigned int *)(((int)stk + 0)) = (v0_0 + 0x14);
    R5 = (0x13);
    if (((*(signed char *)((v0_0 + 0x166))) != 2)) goto L_C040E40;
    v0_4 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = ((v0_4 * v0_1) + v0_3);
    R6 = ((*(signed char *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + (((*(signed char *)((((v0_4 * v0_1) + v0_3) + 0x2))) << 2) + v0_6)))));
    L_C040E58:;
    FUN_0c085cac((*(int *)(((int)stk + 4))), R5, R6);
    FUN_0c059e60((((*(int *)((v0_0 + 0x14))) * v0_1) + v0_3), 0x13);
    *(unsigned int *)((v0_0 + 0x14)) = ((*(int *)((v0_0 + 0x14))) + 0x1);
    goto L_C040E70;
    L_C040E40:;
    v0_4 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = ((v0_4 * v0_1) + v0_3);
    R6 = ((*(signed char *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + (((*(signed char *)((((v0_4 * v0_1) + v0_3) + 0x2))) << 2) + v0_5)))));
    goto L_C040E58;
    L_C040DD0:;
    *(unsigned int *)((v0_0 + 0x14)) = ((*(int *)((v0_0 + 0x14))) + 0x1);
    goto L_C040DD6;
    L_C040B96:;
    v0_7 = *(int *)((v0_0 + 0x18));
    v0_4 = (v0_7);
    if ((v0_7 == 0)) goto L_C040BB8;
    if ((v0_4 == 120)) goto L_C040C44;
    if ((v0_4 != 0xF0)) goto L_C040BAA;
    *(unsigned int *)((v0_0 + 0x14)) = v0_2;
    v0_7 = (((v0_2 * v0_1) + v0_3));
    if (((*(signed char *)((((v0_2 * v0_1) + v0_3) + 0x3714))) != 0)) goto L_C040CCA;
    goto L_C040E70;
    L_C040CCA:;
    if (((*(signed char *)((v0_7 + 0x2))) != 12)) goto L_C040CD4;
    goto L_C040E70;
    L_C040CD4:;
    if (((*(signed char *)((v0_7 + 0x2))) != 13)) goto L_C040CDE;
    goto L_C040E70;
    L_C040CDE:;
    FUN_0c0548e0((*(int *)((v0_0 + 0x14))));
    R5 = (0x13);
    if (((*(signed char *)((v0_0 + 0x166))) != 2)) goto L_C040D06;
    v0_4 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 0)) = ((v0_4 * v0_1) + v0_3);
    R6 = ((*(signed char *)(((*(int *)((v0_0 + 0x14))) + (((*(signed char *)((((v0_4 * v0_1) + v0_3) + 0x2))) << 2) + v0_6)))));
    L_C040D1A:;
    FUN_0c085cac((*(int *)(((int)stk + 0))), R5, R6);
    L_C040D98:;
    FUN_0c059e60((((*(int *)((v0_0 + 0x14))) * v0_1) + v0_3), 0x13);
    goto L_C040E70;
    L_C040D06:;
    v0_4 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 0)) = ((v0_4 * v0_1) + v0_3);
    R6 = ((*(signed char *)(((*(int *)((v0_0 + 0x14))) + (((*(signed char *)((((v0_4 * v0_1) + v0_3) + 0x2))) << 2) + v0_5)))));
    goto L_C040D1A;
    L_C040BAA:;
    if ((v0_4 != 0x168)) goto L_C040BB4;
    *(unsigned int *)((v0_0 + 0x14)) = 0x3;
    v0_7 = (((0x3 * v0_1) + v0_3));
    if (((*(signed char *)((((0x3 * v0_1) + v0_3) + 0x3714))) != 0)) goto L_C040D44;
    goto L_C040E70;
    L_C040D44:;
    if (((*(signed char *)((v0_7 + 0x2))) != 12)) goto L_C040D4E;
    goto L_C040E70;
    L_C040D4E:;
    if (((*(signed char *)((v0_7 + 0x2))) != 13)) goto L_C040D58;
    goto L_C040E70;
    L_C040D58:;
    FUN_0c0548e0((*(int *)((v0_0 + 0x14))));
    R5 = (0x13);
    if (((*(signed char *)((v0_0 + 0x166))) != 2)) goto L_C040D80;
    v0_4 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 0)) = ((v0_4 * v0_1) + v0_3);
    R6 = ((*(signed char *)(((*(int *)((v0_0 + 0x14))) + (((*(signed char *)((((v0_4 * v0_1) + v0_3) + 0x2))) << 2) + v0_6)))));
    L_C040D94:;
    FUN_0c085cac((*(int *)(((int)stk + 0))), R5, R6);
    goto L_C040D98;
    L_C040D80:;
    v0_4 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 0)) = ((v0_4 * v0_1) + v0_3);
    R6 = ((*(signed char *)(((*(int *)((v0_0 + 0x14))) + (((*(signed char *)((((v0_4 * v0_1) + v0_3) + 0x2))) << 2) + v0_5)))));
    goto L_C040D94;
    L_C040BB4:;
    goto L_C040E70;
    L_C040C44:;
    *(unsigned int *)((v0_0 + 0x14)) = 0x2;
    v0_7 = (((0x2 * v0_1) + v0_3));
    if (((*(signed char *)((((0x2 * v0_1) + v0_3) + 0x3714))) != 0)) goto L_C040C5C;
    goto L_C040E70;
    L_C040C5C:;
    if (((*(signed char *)((v0_7 + 0x2))) != 12)) goto L_C040C66;
    goto L_C040E70;
    L_C040C66:;
    if (((*(signed char *)((v0_7 + 0x2))) != 13)) goto L_C040C70;
    goto L_C040E70;
    L_C040C70:;
    FUN_0c0548e0((*(int *)((v0_0 + 0x14))));
    R5 = (0x13);
    if (((*(signed char *)((v0_0 + 0x166))) != 2)) goto L_C040C98;
    v0_4 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 0)) = ((v0_4 * v0_1) + v0_3);
    R6 = ((*(signed char *)(((*(int *)((v0_0 + 0x14))) + (((*(signed char *)((((v0_4 * v0_1) + v0_3) + 0x2))) << 2) + v0_6)))));
    L_C040CAC:;
    FUN_0c085cac((*(int *)(((int)stk + 0))), R5, R6);
    goto L_C040D98;
    L_C040C98:;
    v0_4 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 0)) = ((v0_4 * v0_1) + v0_3);
    R6 = ((*(signed char *)(((*(int *)((v0_0 + 0x14))) + (((*(signed char *)((((v0_4 * v0_1) + v0_3) + 0x2))) << 2) + v0_5)))));
    goto L_C040CAC;
    L_C040BB8:;
    *(unsigned int *)((v0_0 + 0x14)) = 0x0;
    v0_7 = (((0x0 * v0_1) + v0_3));
    if (((*(signed char *)((((0x0 * v0_1) + v0_3) + 0x3714))) != 0)) goto L_C040BD0;
    goto L_C040E70;
    L_C040BD0:;
    if (((*(signed char *)((v0_7 + 0x2))) != 12)) goto L_C040BDA;
    goto L_C040E70;
    L_C040BDA:;
    if (((*(signed char *)((v0_7 + 0x2))) != 13)) goto L_C040BE4;
    goto L_C040E70;
    L_C040BE4:;
    FUN_0c0548e0((*(int *)((v0_0 + 0x14))));
    R5 = (0x13);
    if (((*(signed char *)((v0_0 + 0x166))) != 2)) goto L_C040C28;
    v0_4 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 0)) = ((v0_4 * v0_1) + v0_3);
    R6 = ((*(signed char *)(((*(int *)((v0_0 + 0x14))) + (((*(signed char *)((((v0_4 * v0_1) + v0_3) + 0x2))) << 2) + v0_6)))));
    L_C040C3C:;
    FUN_0c085cac((*(int *)(((int)stk + 0))), R5, R6);
    goto L_C040D98;
    L_C040C28:;
    v0_4 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 0)) = ((v0_4 * v0_1) + v0_3);
    R6 = ((*(signed char *)(((*(int *)((v0_0 + 0x14))) + (((*(signed char *)((((v0_4 * v0_1) + v0_3) + 0x2))) << 2) + v0_5)))));
    goto L_C040C3C;
    L_C040AE6:;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    v0_4 = (0x166);
    if (((*(signed char *)((v0_0 + 0x166))) == 0)) goto L_C040B4C;
    *(unsigned int *)((v0_0 + 0x10)) = 0x0;
    *(unsigned int *)((v0_0 + 0x14)) = 0x0;
    *(unsigned int *)((v0_0 + 0x18)) = 0x0;
    v0_7 = (v0_3);
    R5 = ((v0_3 + v0_5));
    L_C040B44:;
    if (((unsigned int)v0_7 < (unsigned int)R5)) goto L_C040B28;
    goto L_C041012;
    L_C040B28:;
    v0_4 = (0x3714);
    if (((*(signed char *)((v0_7 + 0x3714))) == 0)) goto L_C040B42;
    v0_2 = *(signed char *)((v0_7 + 0x2));
    v0_4 = (v0_2);
    if ((v0_2 == 12)) goto L_C040B42;
    v0_2 = *(signed char *)((v0_7 + 0x2));
    v0_4 = (v0_2);
    if ((v0_2 == 13)) goto L_C040B42;
    *(unsigned int *)((v0_0 + 0x10)) = ((*(int *)((v0_0 + 0x10))) + 0x78);
    L_C040B42:;
    v0_7 = ((v0_7 + v0_1));
    goto L_C040B44;
    L_C040B4C:;
    *(unsigned int *)((v0_0 + 0x10)) = 0x1E;
    *(unsigned int *)((v0_0 + 0x14)) = 0x0;
    *(unsigned int *)((v0_0 + 0x18)) = 0x0;
    v0_7 = (v0_3);
    R5 = ((v0_3 + v0_5));
    L_C040B70:;
    if (((unsigned int)v0_7 < (unsigned int)R5)) goto L_C040B60;
    goto L_C041012;
    L_C040B60:;
    v0_2 = (*(signed char *)((v0_7 + 0x3714))) == 0;
    v0_4 = (0x3714);
    v0_7 = ((v0_7 + v0_1));
    if (v0_2) goto L_C040B70;
    *(unsigned int *)((v0_0 + 0x10)) = ((*(int *)((v0_0 + 0x10))) + 0x78);
    goto L_C040B70;
}

int FUN_0c041450(void)
{

    register int R1;
    register int R2;
    register int R3;
    register int R4;
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
    FUN_0c0410fa();
    v0_0 = (FUN_0c0d5188()) == 0;
    if (v0_0) goto L_C041476;
    v0_1 = ((FUN_0c041340()));
    L_C04148C:;
    v0_6 = (0x4);
    v0_5 = (0xC532498);
    v0_2 = (0x1);
    v0_3 = (0x3938);
    v0_8 = (0xC3BD447);
    v0_4 = (0x0);
    if (((*(signed char *)0xC5429B4) == 1)) goto L_C0414C4;
    R4 = (v0_4);
    L_C0414C0:;
    if (!(((int)R4 < (int)v0_6))) goto L_C0414C4;
    if (((*(signed char *)((0x3715 + ((R4 * v0_3) + v0_5)))) != 41)) goto L_C0414BE;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & (~((int)v0_2 << (int)R4)));
    goto L_C0414BE;
    L_C0414C4:;
    v0_0 = (0xC5421F8);
    if ((v0_1 == 0)) goto L_C04159A;
    if (((unsigned char)(*(signed char *)0xC541F3D) == 1)) goto L_C04159A;
    *(unsigned char *)((v0_0 + 0x1)) = ((*(signed char *)((v0_0 + 0x1))) + 0x1);
    *(unsigned char *)((v0_0 + 0x2)) = v0_4;
    *(unsigned char *)((v0_0 + 0x3)) = v0_4;
    *(unsigned char *)((v0_0 + 0x4)) = v0_4;
    (((struct o5C_uchar *)(v0_0))->v) = v0_2;
    (((struct o3D_uchar *)(v0_0))->v) = v0_4;
    FUN_0c041026(R4, v0_1, R6, R7);
    R4 = (0x98);
    v0_1 = (v0_4);
    R6 = (0xC541CDC);
    L_C04155A:;
    if (((int)v0_1 < (int)v0_6)) goto L_C041518;
    v0_3 = *(signed char *)0xC5429B4;
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C04156E;
    if ((v0_1 != 4)) goto L_C04158E;
    L_C04156E:;
    v0_1 = (v0_4);
    L_C04158A:;
    if (!(((int)v0_1 < (int)v0_6))) goto L_C04158E;
    if (((((int)v0_2 << (int)v0_1) & (unsigned char)(*(signed char *)((v0_8 + 0x0)))) == 0)) goto L_C041588;
    *(unsigned int *)((((v0_1 * R4) + R6) + 0x24)) = (*(int *)((((v0_1 * R4) + R6) + 0x20)));
    goto L_C041588;
    L_C04158E:;
    *(unsigned char *)(((v0_0 + 0x41) + 0x1)) = ((*(signed char *)(((v0_0 + 0x41) + 0x0))) & 0xF);
    L_C041764:;
    v0_0 = *(signed char *)0xC5429B4;
    v0_7 = (v0_0);
    if ((v0_0 != 2)) goto L_C041780;
    return FUN_0c1210e8();
    L_C041780:;
    return v0_7;
    L_C041588:;
    v0_1 = ((v0_1 + 0x1));
    goto L_C04158A;
    L_C041518:;
    if ((((*(signed char *)(((v0_0 + 0x41) + 0x0))) & ((int)v0_2 << (int)v0_1)) == 0)) goto L_C041558;
    v0_7 = *(signed char *)((((v0_1 * v0_3) + v0_5) + 0x2));
    R7 = (v0_7);
    if ((v0_7 == 12)) goto L_C041558;
    if ((R7 == 13)) goto L_C041558;
    v0_7 = (0x44);
    if (((int)((((struct o44_short *)(((v0_1 * R4) + R6)))->v)) >= (int)0x63)) goto L_C041558;
    *(unsigned short *)((((v0_1 * R4) + R6) + v0_7)) = ((*(short *)((((v0_1 * R4) + R6) + v0_7))) + 0x1);
    L_C041558:;
    v0_1 = ((v0_1 + 0x1));
    goto L_C04155A;
    L_C04159A:;
    v0_8 = *(signed char *)((v0_0 + 0x2));
    v0_7 = (v0_8);
    v0_6 = (0xC073682);
    R4 = ((v0_0 + 0xC));
    if ((v0_8 == 0)) goto L_C0415C2;
    if ((v0_7 == 1)) goto L_C04160C;
    if ((v0_7 == 2)) goto L_C041660;
    if ((v0_7 != 3)) goto L_C0415B6;
    v0_1 = FUN_0c041084(0x5A);
    v0_3 = (v0_1);
    if ((v0_1 != 1)) goto L_C0416C8;
    FUN_0c05ab04(0xCC);
    L_C0416C8:;
    if ((v0_3 != 2)) goto L_C041764;
    FUN_0c05ab04(0xCC);
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    FUN_0c031c5a();
    FUN_0c16c730();
    (((struct o66_uchar *)(v0_0))->v) = v0_2;
    *(unsigned int *)((v0_0 + 0xC)) = 0x78;
    goto L_C041764;
    L_C0415B6:;
    if ((v0_7 != 4)) goto L_C0415BE;
    v0_2 = *(int *)((R4 + 0x0));
    *(unsigned int *)((R4 + 0x0)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) > 0)) goto L_C041744;
    *(unsigned char *)((v0_0 + 0x2)) = 0x63;
    (((struct o66_uchar *)(v0_0))->v) = v0_4;
    v0_2 = ((0xE4E0 + v0_5));
    v0_0 = (v0_5);
    L_C04173C:;
    if (((unsigned int)v0_0 < (unsigned int)v0_2)) goto L_C041734;
    goto L_C041764;
    L_C041734:;
    FUN_0c073682(v0_0, 0x10);
    v0_0 = ((v0_0 + v0_3));
    goto L_C04173C;
    L_C041744:;
    v0_2 = *(int *)(((v0_0 + 0xC) + 0x0));
    v0_7 = (v0_2);
    R4 = ((v0_0 + 0xC));
    if (!((v0_2 != 118))) goto L_C04174E;
    if ((v0_7 != 110)) goto L_C041764;
    FUN_0c05aaf6(0x88);
    goto L_C041764;
    L_C04174E:;
    FUN_0c056d12(R4, v0_1, R6, R7);
    goto L_C041764;
    L_C0415BE:;
    goto L_C041764;
    L_C041660:;
    v0_2 = *(int *)((R4 + 0x0));
    *(unsigned int *)((R4 + 0x0)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) > 0)) goto L_C0416AC;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    (((struct o38_ushort *)(v0_0))->v) = 0x9;
    (((struct o3A_ushort *)(v0_0))->v) = 0x5A;
    (((struct o66_uchar *)(v0_0))->v) = v0_4;
    FUN_0c0353e8();
    FUN_0c059c7a(0x1B, 0x0);
    FUN_0c059c54(0xF);
    v0_2 = ((0xE4E0 + v0_5));
    v0_0 = (v0_5);
    L_C0416A4:;
    if (((unsigned int)v0_0 < (unsigned int)v0_2)) goto L_C04169C;
    goto L_C041764;
    L_C04169C:;
    FUN_0c073682(v0_0, 0xF);
    v0_0 = ((v0_0 + v0_3));
    goto L_C0416A4;
    L_C0416AC:;
    if (((*(int *)((v0_0 + 0xC))) == 118)) goto L_C04174E;
    goto L_C041764;
    L_C04160C:;
    R4 = ((v0_0 + 0x38));
    if ((((((struct o38_short *)(v0_0))->v)) != 0)) goto L_C041624;
    if (((*(short *)((R4 + 0x2))) != 30)) goto L_C041624;
    FUN_0c05b052(0x1E, 0x0);
    L_C041624:;
    v0_1 = (FUN_0c041084(0x5A)) == 2;
    if (v0_1) goto L_C041630;
    goto L_C041764;
    L_C041630:;
    if (((*(signed char *)((v0_0 + 0x166))) == 0)) goto L_C04163E;
    *(unsigned char *)((v0_0 + 0x2)) = 0x63;
    goto L_C041764;
    L_C04163E:;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    FUN_0c035024();
    FUN_0c059c7a(0x1A, 0x0);
    (((struct o66_uchar *)(v0_0))->v) = v0_2;
    *(unsigned int *)((v0_0 + 0xC)) = 0x78;
    FUN_0c16c730();
    goto L_C041764;
    L_C0415C2:;
    v0_1 = (FUN_0c041084(0x3C)) == 2;
    if (v0_1) goto L_C0415CE;
    goto L_C041764;
    L_C0415CE:;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    FUN_0c031e6c();
    FUN_0c05aaf6(0x89);
    FUN_0c0353e8();
    (((struct o38_ushort *)(v0_0))->v) = 0x9;
    (((struct o3A_ushort *)(v0_0))->v) = 0x5A;
    goto L_C041764;
    L_C0414BE:;
    R4 = ((R4 + 0x1));
    goto L_C0414C0;
    L_C041476:;
    if (((*(signed char *)0xC5429B4) != 0)) goto L_C041486;
    v0_7 = ((FUN_0c041124()));
    L_C04148A:;
    v0_1 = (v0_7);
    goto L_C04148C;
    L_C041486:;
    v0_7 = ((FUN_0c041218()));
    goto L_C04148A;
}

int FUN_0c041a7c(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)0xC5421FA;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c041a04(a4, a5, a6);
            }
            return FUN_0c04193c();
        }
        return FUN_0c04182c();
    }
    return FUN_0c041792();
}
