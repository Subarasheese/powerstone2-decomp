/* game/flow: functions 0C101D38-0C103FB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o34_int { char p[0x34]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int FUN_0c01e99c(void);
int FUN_0c02d046(int);
int FUN_0c036de8(int);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f0aa(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0463fc(void);
extern int FUN_0c04644c();
int FUN_0c0472e8(void);
int FUN_0c0498d8(void);
int FUN_0c04a5c4(int, int);
int FUN_0c04a868(int);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int game_reset_objects(void);
int FUN_0c05b048(int, int);
int FUN_0c05b052(int, int);
int FUN_0c05b7e0(int);
int FUN_0c05f332(int, int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c101dce(int);
int FUN_0c101e1a(int);
int FUN_0c102086(void);
int FUN_0c102690(void);
int FUN_0c102d68(void);
int FUN_0c1030c0(int);
int FUN_0c1034ba(int);
int FUN_0c10384a(void);
int FUN_0c1039c4(void);
int FUN_0c10446c(void);
int FUN_0c1047ea(void);
int FUN_0c16f7ba(void);
float math_sin_angle16(int);
int FUN_0c101e4c(void);
int FUN_0c101f04(int a4, int a5, int a6);
int FUN_0c1020e8(int a4, int a5, int a6, int a7);
int FUN_0c1023cc(int a4, int a5);
int FUN_0c103a3e(int a4, int a5, int a6, int a7);
int FUN_0c103c44(int a4, int a5, int a6, int a7);
struct o10_int { char p[0x10]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int FUN_0c101e4c(void)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o0_uint *)0xC472D08)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC83C590 + t0) + 0x0)) = 0x1;
        *(unsigned char *)(((0xC83C590 + t0) + 0x1)) = 0x1;
        *(unsigned char *)(((0xC83C590 + t0) + 0x2)) = 0x1;
        *(unsigned char *)(((0xC83C590 + t0) + 0x4)) = 0x1;
        *(unsigned char *)(((0xC83C590 + t0) + 0x5)) = 0x0;
        *(unsigned char *)(((0xC83C590 + t0) + 0x6)) = 0x3;
        *(unsigned char *)(((0xC83C590 + t0) + 0x8)) = ((*(signed char *)0xC542B8B) + 0x4);
        t1 = (0xC83C590 + t0);
        t0 = (t0 + 0x23);
        *(unsigned char *)((t1 + 0x9)) = 0xFFFFFFFF;
        if ((unsigned int)t0 >= (unsigned int)0x8C) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = (0xC472DA8 + t0);
        t0 = (t0 + 0x14);
        *(unsigned int *)((t1 + 0xC)) = 0x0;
        *(unsigned int *)((t1 + 0x8)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0x50) {
            break;
        }
    }
    t0 = *(signed char *)0xC542B8A;
    t1 = 0xFFF;
    if ((int)t0 >= (int)0x1) {
        t1 = 0x8FFF;
    }
    t2 = t1;
    if ((int)t0 >= (int)0x2) {
        t2 = (t1 | 0x4000);
    }
    t0 = FUN_0c101dce(t2);
    (((struct o1C_uint *)0xC472D08)->v) = 0x1;
    return t0;
}

int FUN_0c101f04(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t1 = *(signed char *)0xC83C554;
    if (t1 != 0) {
        if (t1 != 3) {
            if (t1 != 1) {
                if (t1 != 2) {
                } else {
                    (((struct o8_uchar *)0xC5429AC)->v) = 0x1;
                    *(unsigned char *)0xC542377 = 0x0;
                }
            } else {
                (((struct o8_uchar *)0xC5429AC)->v) = 0x1;
                *(unsigned char *)0xC542377 = 0x1;
            }
            t2 = t1;
        } else {
            t3 = *(signed char *)0xC83C556;
            t4 = *(signed char *)0xC83C555;
            (((struct o8_uchar *)0xC5429AC)->v) = 0x1;
            *(unsigned char *)0xC542377 = 0x0;
            t2 = (t1 + (t4 + (t3 << 1)));
        }
        t3 = t2;
    } else {
        (((struct o8_uchar *)0xC5429AC)->v) = 0x0;
        *(unsigned char *)0xC542377 = 0x0;
        (((struct o0_uchar *)0xC541F70)->v) = 0x0;
        (((struct o5_uchar *)0xC5429AC)->v) = 0x0;
        (((struct o1_uchar *)0xC541F70)->v) = 0x0;
        (((struct o4_uchar *)0xC5429AC)->v) = 0x0;
        (((struct o0_uchar *)0xC5429AC)->v) = 0x0;
        FUN_0c05f332(0x5, 0x0);
        t3 = t1;
    }
    (((struct o0_uint *)0xC472D08)->v) = 0x1;
    t1 = FUN_0c01e99c();
    t2 = (FUN_0c02d046((signed char)t1));
    t1 = (0xC1FC540 + (t3 * 0x1C));
    t4 = t0;
    t0 = 0x0;
    t5 = 0x0;
    t6 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)0x4) {
            break;
        }
        t4 = 0x23;
        t7 = 0xC83C554;
        t7 = (t7 + 0x3C);
        t4 = (t0 * t4);
        t7 = (t7 + t4);
        t2 = 0x0;
        t8 = 0xC83C554;
        t8 = (t8 + 0x3C);
        t8 = (t8 + t4);
        *(unsigned char *)((t7 + 0x1)) = t2;
        *(unsigned char *)((t8 + 0x4)) = t2;
        t8 = 0xC83C554;
        t7 = (*(signed char *)((t1 + 0x0)));
        t8 = (t8 + 0x3C);
        t8 = (t8 + t4);
        *(unsigned char *)((t8 + 0x0)) = t7;
        t8 = 0xC83C554;
        t2 = (*(signed char *)((t1 + 0x2)));
        t8 = (t8 + 0x3C);
        t8 = (t8 + t4);
        *(unsigned char *)((t8 + 0x2)) = t2;
        t8 = 0xC83C554;
        t2 = (*(signed char *)((t1 + 0x3)));
        t8 = (t8 + 0x3C);
        t8 = (t8 + t4);
        *(unsigned char *)((t8 + 0x5)) = t2;
        t8 = 0xC83C554;
        t2 = (*(signed char *)((t1 + 0x4)));
        t8 = (t8 + 0x3C);
        t8 = (t8 + t4);
        *(unsigned char *)((t8 + 0x6)) = t2;
        t8 = 0xC83C554;
        t2 = (*(signed char *)((t1 + 0x5)));
        t8 = (t8 + 0x3C);
        t8 = (t8 + t4);
        *(unsigned char *)((t8 + 0x9)) = t2;
        t8 = 0xC83C554;
        t8 = (t8 + 0x3C);
        t2 = (*(signed char *)((t1 + 0x6)));
        t4 = (t4 + t8);
        *(unsigned char *)((t4 + 0x3)) = t2;
        if (t3 == 0) {
            t7 = 0xC83C554;
            t7 = (t7 + 0x3C);
            t7 = (t7 + t5);
            t2 = 0x4;
        } else {
            t8 = 0xC542B8B;
            t7 = 0xC83C554;
            t7 = (t7 + 0x3C);
            t2 = (*(signed char *)((t8 + 0x0)));
            t7 = (t7 + t6);
            t2 = (t2 + 0x4);
        }
        t5 = (t5 + 0x23);
        *(unsigned char *)((t7 + 0x8)) = t2;
        t1 = (t1 + 0x7);
        t6 = (t6 + 0x23);
        t0 = (t0 + 0x1);
    }
    t0 = *(short *)0xC83C6A4;
    FUN_0c101dce(t0);
    t1 = FUN_0c101e1a(t0);
    (((struct o1C_uint *)0xC472D08)->v) = t1;
    return t1;
}

/* manual: match-end task on game_work[7]: sub-task by [8], wait for the save, then give the next rank to the first slot still at 2
   (stages 6,7), build the 4x4 standings table and show it; 282 cases, 286 of 286 instructions */
int FUN_0c1020e8(int a4, int a5, int a6, int a7)
{
    unsigned char *g = (unsigned char *)0xC541F3C;
    int *m = (int *)0xC472CEC;
    int (*p)[5];
    signed char buf[4][4];
    int r, i, n;

    switch (g[7]) {
    case 0:
        r = g[8];
        if (r == 0) return FUN_0c102690();
        if (r == 1) return FUN_0c102d68();
        return r;
    case 1:
        if (m[7] != 0) {
            FUN_0c102086();
        } else if (*(char *)0xC5429CB != 0) {
            r = g[8];
            if (r == 0) {
                FUN_0c0463fc();
                g[8]++;
            } else if (r != 1) {
                return r;
            }
            r = (unsigned char)((int (*)(int, int, int, int))FUN_0c04644c)((int)(g + 8), a5, a6, a7);
            if (r != 0) {
                g[7]++;
                r = 0;
                g[8] = r;
            }
            return r;
        }
        r = (signed char)g[7] + 1;
        g[7] = r;
        return r;
    }
    switch (g[9]) {
    case 0:
        *(short *)(g + 0x14) = 32;
        *(char *)0xC542254 = 1;
        FUN_0c0573cc(-1, 0, 30);
        if (m[7] == 0 || *(char *)0xC83C554 != 0) FUN_0c05b052(30, 0);
        g[9]++;
    case 1:
        r = *(short *)(g + 0x14) - 1;
        *(short *)(g + 0x14) = r;
        if ((short)r > 0) return (short)r;
        r = (signed char)g[9] + 1;
        g[9] = r;
        return r;
    }
    FUN_0c03f0aa();
    r = m[3];
    p = (int (*)[5])0xC472DA8;
    if (r >= 6 && r <= 10) {
        if (r < 8) {
            n = 0;
            for (i = 0; i < 4; i++)
                if (p[i][0] != 2 && p[i][1] == n) n++;
            for (i = 0; i < 4; i++)
                if (p[i][0] == 2) {
                    p[i][0] = 1;
                    p[i][1] = n;
                    p[i][2] = m[3] == 6 ? 12 : 13;
                    break;
                }
        }
        m[3]--;
    }
    for (i = 0; i < 4; i++) {
        if (p[i][0] == 2) {
            buf[i][0] = 0;
            buf[i][1] = 0;
            buf[i][2] = 0;
            buf[i][3] = 0;
        } else {
            buf[i][0] = 1;
            buf[i][1] = p[i][2];
            buf[i][2] = p[i][1];
            buf[i][3] = p[i][0] != 0;
            if (p[i][4] == 2 && p[i][2] != 12 && p[i][2] != 13) buf[i][1] = -1;
        }
    }
    r = FUN_0c04a5c4((int)buf, m[3]);
    FUN_0c0498d8();
    FUN_0c036de8(8);
    FUN_0c06780e(r);
    FUN_0c06785c();
    r = FUN_0c05b7e0(5);
    if (m[7] != 0 && *(char *)0xC83C554 == 0) r = FUN_0c04a868(m[3]);
    return r;
}

int FUN_0c1023cc(int a4, int a5)
{
    int t40;
    int t58;
    int R1000;
    int t96;
    int t56;
    int t57;
    int t108;
    int t113;
    int s0;
    int t120;
    int t61;
    int t129;
    int t109;
    int t100;
    int t53;
    int t90;
    int t110;
    int t59;
    int t43;
    int t37;
    int t6;
    int t112;
    int t55;
    int t124;
    int t123;
    int t116;
    int t60;
    int t42;
    int t41;
    int t0;
    int t115;
    int t114;

    R1000 = s0;

    t0 = *(signed char *)0xC83C554;
    t6 = t0;
    if (t0 == 3) {
        t6 = (t0 + ((*(signed char *)0xC83C555) + ((*(signed char *)0xC83C556) << 1)));
    }
    R1000 = (0xC1FC540 + (t6 * 0x1C));
    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
    (((struct o1_uchar *)0xC541F42)->v) = 0x0;
    (((struct o2_uchar *)0xC541F42)->v) = 0x0;
    (((struct o3_uchar *)0xC541F42)->v) = 0x0;
    FUN_0c0527e6();
    FUN_0c03eff6();
    if (((((struct o1C_int *)0xC472CEC)->v)) == 0) {
        FUN_0c16f7ba();
    }
    game_reset_objects();
    FUN_0c036de8(0x18);
    FUN_0c03ea04(0xA, 0x0);
    (((struct o8_uint *)0xC542440)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC542440)->v) = 0xFFFFFFFF;
    (((struct o0_uint *)0xC542440)->v) = 0xFFFFFFFF;
    FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
    FUN_0c05b048(0x1, 0x0);
    FUN_0c10384a();
    FUN_0c1039c4();
    if (((((struct o1C_int *)0xC472CEC)->v)) == 0) {
        if ((*(signed char *)0xC5429CB) != 0) {
            FUN_0c0472e8();
        }
    } else {
        FUN_0c1047ea();
    }
    t37 = (((struct o1C_int *)0xC472CEC)->v);
    if (t37 != 0) {
        (((struct o14_uint *)0xC472CEC)->v) = 0x0;
        t42 = R1000;
        R1000 = 0x0;
        t40 = 0x0;
        t41 = 0x0;
        for (;;) {
            t43 = *(signed char *)((((t40 * 0x23) + 0xC83C590) + 0x2));
            *(unsigned int *)((((((t40 << 2) + t40) << 2) + 0xC472DA8) + 0x0)) = t43;
            if (t43 == 0) {
                (((struct o14_uint *)0xC472CEC)->v) = (((((struct o14_int *)0xC472CEC)->v)) + 0x1);
                *(unsigned int *)((((((t40 << 2) + t40) << 2) + 0xC472DA8) + 0x10)) = 0x1;
                *(unsigned int *)((((((t40 << 2) + t40) << 2) + 0xC472DA8) + 0xC)) = 0x0;
                *(unsigned int *)((((((t40 << 2) + t40) << 2) + 0xC472DA8) + 0x8)) = ((*(signed char *)0xC472D10));
            } else {
                *(unsigned int *)((((((t40 << 2) + t40) << 2) + 0xC472DA8) + 0x10)) = 0x2;
            }
            *(unsigned int *)((((((t40 << 2) + t40) << 2) + 0xC472DA8) + 0x4)) = (*(signed char *)(((0xC83C590 + t41) + 0x3)));
            t40 = (t40 + 0x1);
            t53 = *(signed char *)(t42 + 0x1);
            t42 = (t42 + 0x7);
            *(unsigned int *)(((0xC472D28 + (R1000)) + 0x8)) = t53;
            R1000 = ((R1000) + 0x20);
            t41 = (t41 + 0x23);
            if ((int)t40 >= (int)0x4) {
                break;
            }
        }
        t90 = 0x1;
    } else {
        t56 = t37;
        t57 = 0x0;
        t58 = 0x0;
        for (;;) {
            *(unsigned int *)(((0xC472D28 + t57) + 0x8)) = 0x0;
            t59 = *(int *)(((0xC472DA8 + t58) + 0x8));
            t60 = (((struct o34_int *)0xC472CEC)->v);
            R1000 = t59;
            if ((t59 != 12) && (t61 = R1000, t61 != 13)) {
                if ((*(int *)(((0xC472DA8 + t58) + 0x10))) == 2) {
                    *(unsigned int *)(((0xC472DA8 + t58) + 0xC)) = t60;
                } else {
                    t56 = (*(int *)(((0xC472DA8 + t58) + 0xC)));
                    if ((int)t56 >= (int)t60) {
                        *(unsigned int *)(((0xC472DA8 + t58) + 0xC)) = 0x0;
                    }
                    t56 = ((0xC472CEC + 0x24) + (*(int *)(((0xC472DA8 + t58) + 0xC))));
                    t55 = (*(signed char *)(t56));
                    *(unsigned int *)(((0xC472DA8 + t58) + 0x8)) = t55;
                }
            } else {
                if ((*(int *)(((0xC472DA8 + t58) + 0x10))) == 2) {
                    *(unsigned int *)(((0xC472DA8 + t58) + 0xC)) = t60;
                } else {
                    t56 = ((0xC472CEC + 0x24) + (*(int *)(((0xC472DA8 + t58) + 0xC))));
                    t55 = (*(signed char *)(t56));
                    *(unsigned int *)(((0xC472DA8 + t58) + 0x8)) = t55;
                }
                *(unsigned int *)(((0xC472DA8 + t58) + 0x0)) = 0x2;
            }
            t57 = (t57 + 0x20);
            t58 = (t58 + 0x14);
            if ((unsigned int)t57 >= (unsigned int)0x80) {
                break;
            }
        }
        t90 = 0x0;
    }
    FUN_0c1030c0(t90);
    (((struct o18_uint *)0xC472CEC)->v) = 0x0;
    (((struct o10_uint *)0xC472CEC)->v) = 0xFFFFFFFF;
    t96 = 0x0;
    for (;;) {
        R1000 = (((t96 << 2) << 2) << 1);
        *(unsigned int *)((((((t96 << 2) << 2) << 1) + 0xC472D28) + 0x0)) = (*(signed char *)(((0xC83C590 + (t96 * 0x23)) + 0x0)));
        *(unsigned int *)(((0xC472D28 + (R1000)) + 0xC)) = t96;
        t100 = *(signed char *)((((t96 * 0x23) + 0xC83C590) + 0x4));
        t96 = (t96 + 0x1);
        if (t100 != 0) {
            *(unsigned int *)(((0xC472D28 + (R1000)) + 0x10)) = 0x0;
        } else {
            *(unsigned int *)(((0xC472D28 + (R1000)) + 0x10)) = 0x2;
        }
        if ((int)t96 >= (int)0x4) {
            break;
        }
    }
    t108 = 0x0;
    for (;;) {
        t109 = FUN_0c1034ba(t108);
        t108 = (t108 + 0x1);
        if ((int)t108 >= (int)0x4) {
            break;
        }
    }
    (((struct o0_uint *)0xC472CEC)->v) = 0x0;
    t110 = t109;
    t114 = t113;
    t115 = 0x0;
    t116 = 0x0;
    for (;;) {
        if ((unsigned int)t115 >= (unsigned int)0x50) {
            break;
        }
        t114 = ((0xBC + 0xC472CEC) + t115);
        t110 = (*(int *)(t114));
        if ((t110 != 2) && (t120 = (((struct o10_int *)(t114))->v), t112 = t120, t112 != 0)) {
            t112 = ((((struct o4_int *)(t114))->v));
            t116 = (t116 | ((int)0x1 << (int)t112));
        }
        t115 = (t115 + 0x14);
    }
    t123 = 0x4;
    t124 = t116;
    for (;;) {
        if ((t124 & 0x1) != 0) {
            (((struct o0_uint *)0xC472CEC)->v) = (((((struct o0_int *)0xC472CEC)->v)) + 0x1);
        }
        t124 = (t124 >> 1);
        t123 = (t123 - 0x1);
        if (t123 == 0) {
            break;
        }
    }
    (((struct o20_uint *)0xC472CEC)->v) = 0x4B0;
    t129 = FUN_0c10446c();
    (((struct oE_ushort *)0xC541F42)->v) = 0x1;
    return t129;
}

int FUN_0c103a3e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x1));
    (((struct o28_float *)(a4))->v) = (*(float *)(((((*(int *)((((((t0 << 2) << 2) << 1) + 0xC472D28) + 0xC))) << 2) + (0xC1FC61C + ((t0 << 2) << 2))) + 0x0)));
    t0 = *(signed char *)((a4 + 0x1));
    (((struct o2C_float *)(a4))->v) = (*(float *)(((((*(int *)((((((t0 << 2) << 2) << 1) + 0xC472D28) + 0x10))) << 2) + (0xC1FC65C + (((t0 << 1) + t0) << 2))) + 0x0)));
    if ((*(int *)(((((((*(signed char *)((a4 + 0x1))) << 2) << 2) << 1) + 0xC472D28) + 0x0))) != 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        t1 = (((struct oC4_int *)(a4))->v);
        u0 = math_sin_angle16(((((((struct o22_short *)(a4))->v)) << 8) << 2));
        u1 = (((struct o4_float *)0xC103C14)->v);
        u2 = ((math_sin_angle16((((((((struct o22_short *)(a4))->v)) << 8) << 2) << 1))) * ((((struct o0_float *)0xC103C14)->v)));
        u2 = u2 + u1 * u0;
        (((struct o6C_float *)(t1))->v) = u2;
        if (((*(signed char *)((a4 + 0x1))) & 1) != 0) {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o6C_float *)(t1))->v) = (-((((struct o6C_float *)(t1))->v)));
        }
        t1 = *(signed char *)0xC541F44;
        t2 = (unsigned char)t1;
        if ((unsigned char)t1 == 1) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            (((struct oB0_float *)(a4))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        return t2;
    }
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0333333351f);
    if (0.0f > ((((struct oB0_float *)(a4))->v))) {
        return FUN_0c03f346(a4, 0xC472CEC, t0, a7);
    }
    return 0xB0;
}

int FUN_0c103c44(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0333333351f);
                if (0.0f > ((((struct oB0_float *)(a4))->v))) {
                    return FUN_0c03f346(a4, 0x400, a6, a7);
                }
                return 0xB0;
            }
            t0 = *(signed char *)0xC541F44;
            t1 = (unsigned char)t0;
            if ((unsigned char)t0 != 1) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                (((struct oB0_float *)(a4))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.0333333351f);
    t0 = 0xB0;
    if (((((struct oB0_float *)(a4))->v)) > 1.0f) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}
