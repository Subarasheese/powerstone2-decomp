/* game/unsorted: functions 0C04666C-0C0472CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03aeec(int, int, int);
int FUN_0c03d3b6(int);
extern int FUN_0c03d44a();
int FUN_0c03f346(int, int, int, int);
int FUN_0c047064(int, int, int, int);
int FUN_0c04666c(int a4, int a5, int a6, int a7);
int FUN_0c047114(void);
int FUN_0c047186(void);
int FUN_0c0471fc(int a4, int a5, int a6, int a7);

int FUN_0c04666c(int a4, int a5, int a6, int a7)
{

    register int R10;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_1 = a6;
    v0_3 = *(signed char *)0xC541F44;
    v0_0 = ((unsigned char)v0_3);
    if (((unsigned int)(unsigned char)v0_3 < (unsigned int)0x10)) goto L_C046680;
    if (((int)(*(short *)0xC541F50) > (int)0x78)) goto L_C046ACA;
    (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = 0x0;
    v0_0 = (0xC541F43);
    L_C046AD8:;
    return v0_0;
    L_C046ACA:;
    FUN_0c047064(v0_2, a5, v0_1, a7);
    v0_0 = FUN_0c047114();
    (((struct o1_uchar *)0xC541F43)->v) = 0x0;
    v0_0 = (v0_0);
    goto L_C046AD8;
    L_C046680:;
    switch (((v0_0 << 1))) { case 0: goto L_C0466B0; case 2: goto L_C0466FC; case 4: goto L_C04673E; case 6: goto L_C04676E; case 8: goto L_C0467A4; case 10: goto L_C0467F0; case 12: goto L_C046832; case 14: goto L_C046862; case 16: goto L_C0468B0; case 18: goto L_C0468FC; case 20: goto L_C04693E; case 22: goto L_C04696E; case 24: goto L_C0469A4; case 26: goto L_C0469F8; case 28: goto L_C046A36; case 30: goto L_C046A66; }
    L_C046A66:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x7, 0x0, v0_1);
    v0_0 = (v0_1);
    if ((v0_1 == -1)) goto L_C046AD8;
    if ((v0_0 != 0)) goto L_C046A86;
    (((struct o3_uchar *)0xC40F820)->v) = 0x3;
    v0_0 = ((FUN_0c03d3b6(0x3)));
    L_C046A8C:;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C046AD8;
    L_C046A86:;
    (((struct o3_uchar *)0xC40F820)->v) = 0x4;
    goto L_C046A8C;
    L_C046A36:;
    v0_2 = FUN_0c03aeec(v0_2, 0x0, v0_1);
    v0_0 = (v0_2);
    if ((v0_2 == -1)) goto L_C046AD8;
    if (((v0_0 & 128) == 0)) goto L_C046A50;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C046A66;
    L_C046A50:;
    (((struct o3_uchar *)0xC40F820)->v) = 0x4;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    v0_0 = (0xC541F44);
    L_C046A5E:;
    v0_1 = *(signed char *)((v0_0 + 0x0));
    *(unsigned char *)((v0_0 + 0x0)) = (v0_1 + 0x1);
    v0_0 = ((v0_1 + 0x1));
    goto L_C046AD8;
    L_C0469F8:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x6, 0x0, v0_1);
    v0_0 = (v0_1);
    if ((v0_1 == -1)) goto L_C046AD8;
    if ((v0_0 != 0)) goto L_C046A18;
    (((struct o3_uchar *)0xC40F820)->v) = 0x3;
    v0_0 = ((FUN_0c03d3b6(0x3)));
    L_C046A1E:;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C046AD8;
    L_C046A18:;
    (((struct o3_uchar *)0xC40F820)->v) = 0x4;
    goto L_C046A1E;
    L_C0469A4:;
    v0_3 = *(signed char *)0xC40F823;
    v0_0 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 == 2)) goto L_C0469CA;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    v0_1 = (0xC541F44);
    L_C0469C2:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    goto L_C046AD8;
    L_C0469CA:;
    v0_2 = FUN_0c03aeec(v0_2, 0x0, v0_1);
    v0_0 = (v0_2);
    if ((v0_2 != -1)) goto L_C0469DA;
    goto L_C046AD8;
    L_C0469DA:;
    if (((v0_0 & 64) == 0)) goto L_C0469E8;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C0469F8;
    L_C0469E8:;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    v0_1 = (0xC541F44);
    L_C0469F0:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    goto L_C046AD8;
    L_C04696E:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x5, 0x0, v0_1);
    v0_0 = (v0_1);
    if ((v0_1 != -1)) goto L_C04697E;
    goto L_C046AD8;
    L_C04697E:;
    if ((v0_0 != 0)) goto L_C046992;
    (((struct o2_uchar *)0xC40F820)->v) = 0x3;
    v0_0 = ((FUN_0c03d3b6(0x2)));
    L_C046998:;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C046AD8;
    L_C046992:;
    (((struct o2_uchar *)0xC40F820)->v) = 0x4;
    goto L_C046998;
    L_C04693E:;
    v0_2 = FUN_0c03aeec(v0_2, 0x0, v0_1);
    v0_0 = (v0_2);
    if ((v0_2 != -1)) goto L_C04694E;
    goto L_C046AD8;
    L_C04694E:;
    if (((v0_0 & 32) == 0)) goto L_C04695C;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C04696E;
    L_C04695C:;
    (((struct o2_uchar *)0xC40F820)->v) = 0x4;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    v0_0 = (0xC541F44);
    goto L_C046A5E;
    L_C0468FC:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x4, 0x0, v0_1);
    v0_0 = (v0_1);
    if ((v0_1 != -1)) goto L_C04690C;
    goto L_C046AD8;
    L_C04690C:;
    if ((v0_0 != 0)) goto L_C046920;
    (((struct o2_uchar *)0xC40F820)->v) = 0x3;
    v0_0 = ((FUN_0c03d3b6(0x2)));
    L_C046926:;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C046AD8;
    L_C046920:;
    (((struct o2_uchar *)0xC40F820)->v) = 0x4;
    goto L_C046926;
    L_C0468B0:;
    v0_3 = *(signed char *)0xC40F822;
    v0_0 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 == 2)) goto L_C0468D2;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    v0_1 = (0xC541F44);
    goto L_C0469C2;
    L_C0468D2:;
    v0_2 = FUN_0c03aeec(v0_2, 0x0, v0_1);
    v0_0 = (v0_2);
    if ((v0_2 != -1)) goto L_C0468E2;
    goto L_C046AD8;
    L_C0468E2:;
    if (((v0_0 & 16) == 0)) goto L_C0468F0;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C0468FC;
    L_C0468F0:;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    v0_1 = (0xC541F44);
    goto L_C0469F0;
    L_C046862:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x3, 0x0, v0_1);
    v0_0 = (v0_1);
    if ((v0_1 != -1)) goto L_C046872;
    goto L_C046AD8;
    L_C046872:;
    if ((v0_0 != 0)) goto L_C046886;
    (((struct o1_uchar *)0xC40F820)->v) = 0x3;
    v0_0 = ((FUN_0c03d3b6(0x1)));
    L_C04688C:;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C046AD8;
    L_C046886:;
    (((struct o1_uchar *)0xC40F820)->v) = 0x4;
    goto L_C04688C;
    L_C046832:;
    v0_2 = FUN_0c03aeec(v0_2, 0x0, v0_1);
    v0_0 = (v0_2);
    if ((v0_2 != -1)) goto L_C046842;
    goto L_C046AD8;
    L_C046842:;
    if (((v0_0 & 8) == 0)) goto L_C046850;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C046862;
    L_C046850:;
    (((struct o1_uchar *)0xC40F820)->v) = 0x4;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    v0_0 = (0xC541F44);
    goto L_C046A5E;
    L_C0467F0:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x2, 0x0, v0_1);
    v0_0 = (v0_1);
    if ((v0_1 != -1)) goto L_C046800;
    goto L_C046AD8;
    L_C046800:;
    if ((v0_0 != 0)) goto L_C046814;
    (((struct o1_uchar *)0xC40F820)->v) = 0x3;
    v0_0 = ((FUN_0c03d3b6(0x1)));
    L_C04681A:;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C046AD8;
    L_C046814:;
    (((struct o1_uchar *)0xC40F820)->v) = 0x4;
    goto L_C04681A;
    L_C0467A4:;
    v0_3 = *(signed char *)0xC40F821;
    v0_0 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 == 2)) goto L_C0467C6;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    v0_1 = (0xC541F44);
    goto L_C0469C2;
    L_C0467C6:;
    v0_2 = FUN_0c03aeec(v0_2, 0x0, v0_1);
    v0_0 = (v0_2);
    if ((v0_2 != -1)) goto L_C0467D6;
    goto L_C046AD8;
    L_C0467D6:;
    if (((v0_0 & 4) == 0)) goto L_C0467E4;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C0467F0;
    L_C0467E4:;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    v0_1 = (0xC541F44);
    goto L_C0469F0;
    L_C04676E:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x1, 0x0, v0_1);
    v0_0 = (v0_1);
    if ((v0_1 != -1)) goto L_C04677E;
    goto L_C046AD8;
    L_C04677E:;
    if ((v0_0 != 0)) goto L_C046792;
    (((struct o0_uchar *)0xC40F820)->v) = 0x3;
    v0_0 = ((FUN_0c03d3b6(0x0)));
    L_C046798:;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C046AD8;
    L_C046792:;
    (((struct o0_uchar *)0xC40F820)->v) = 0x4;
    goto L_C046798;
    L_C04673E:;
    v0_2 = FUN_0c03aeec(v0_2, 0x0, v0_1);
    v0_0 = (v0_2);
    if ((v0_2 != -1)) goto L_C04674E;
    goto L_C046AD8;
    L_C04674E:;
    if (((v0_0 & 2) == 0)) goto L_C04675C;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C04676E;
    L_C04675C:;
    (((struct o0_uchar *)0xC40F820)->v) = 0x4;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    v0_0 = (0xC541F44);
    goto L_C046A5E;
    L_C0466FC:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c03d44a))(0x0, 0x0, v0_1);
    v0_0 = (v0_1);
    if ((v0_1 != -1)) goto L_C04670C;
    goto L_C046AD8;
    L_C04670C:;
    if ((v0_0 != 0)) goto L_C046720;
    (((struct o0_uchar *)0xC40F820)->v) = 0x3;
    v0_0 = ((FUN_0c03d3b6(0x0)));
    L_C046726:;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C046AD8;
    L_C046720:;
    (((struct o0_uchar *)0xC40F820)->v) = 0x4;
    goto L_C046726;
    L_C0466B0:;
    v0_3 = *(signed char *)0xC40F820;
    v0_0 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 == 2)) goto L_C0466D2;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    v0_1 = (0xC541F44);
    goto L_C0469C2;
    L_C0466D2:;
    v0_2 = FUN_0c03aeec(v0_2, 0x0, v0_1);
    v0_0 = (v0_2);
    if ((v0_2 != -1)) goto L_C0466E2;
    goto L_C046AD8;
    L_C0466E2:;
    if (((v0_0 & 1) == 0)) goto L_C0466F0;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    goto L_C0466FC;
    L_C0466F0:;
    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
    v0_1 = (0xC541F44);
    goto L_C0469F0;
}

int FUN_0c047114(void)
{
    register int t18;
    register int t20;
    register int t22;

    if (((unsigned char)(*(signed char *)0xC3BD447) & 1) != 0) {
        if ((unsigned char)(*(signed char *)0xC40F820) == 1) {
            (((struct o0_uchar *)0xC40F820)->v) = 0x2;
        }
    } else {
        (((struct o0_uchar *)0xC40F820)->v) = 0x0;
    }
    if (((unsigned char)(*(signed char *)0xC3BD447) & 0x2) != 0) {
        if ((unsigned char)(*(signed char *)0xC40F821) == 1) {
            (((struct o1_uchar *)0xC40F820)->v) = 0x2;
        }
    } else {
        (((struct o1_uchar *)0xC40F820)->v) = 0x0;
    }
    if (((unsigned char)(*(signed char *)0xC3BD447) & 4) != 0) {
        if ((unsigned char)(*(signed char *)0xC40F822) == 1) {
            (((struct o2_uchar *)0xC40F820)->v) = 0x2;
        }
    } else {
        (((struct o2_uchar *)0xC40F820)->v) = 0x0;
    }
    t18 = *(signed char *)0xC3BD447;
    if (((unsigned char)t18 & 8) != 0) {
        t20 = *(signed char *)0xC40F823;
        if ((unsigned char)t20 == 1) {
            (((struct o3_uchar *)0xC40F820)->v) = 0x2;
        }
        t22 = (unsigned char)t20;
    } else {
        (((struct o3_uchar *)0xC40F820)->v) = 0x0;
        t22 = (unsigned char)t18;
    }
    return t22;
}

int FUN_0c047186(void)
{
    register int t14;

    if ((unsigned char)(*(signed char *)0xC40F820) == 3) {
        (((struct o0_uchar *)0xC40F820)->v) = 0x5;
    }
    if ((unsigned char)(*(signed char *)0xC40F820) == 4) {
        (((struct o0_uchar *)0xC40F820)->v) = 0x6;
    }
    if ((unsigned char)(*(signed char *)0xC40F821) == 3) {
        (((struct o1_uchar *)0xC40F820)->v) = 0x5;
    }
    if ((unsigned char)(*(signed char *)0xC40F821) == 4) {
        (((struct o1_uchar *)0xC40F820)->v) = 0x6;
    }
    if ((unsigned char)(*(signed char *)0xC40F822) == 3) {
        (((struct o2_uchar *)0xC40F820)->v) = 0x5;
    }
    if ((unsigned char)(*(signed char *)0xC40F822) == 4) {
        (((struct o2_uchar *)0xC40F820)->v) = 0x6;
    }
    if ((unsigned char)(*(signed char *)0xC40F823) == 3) {
        (((struct o3_uchar *)0xC40F820)->v) = 0x5;
    }
    t14 = *(signed char *)0xC40F823;
    if ((unsigned char)t14 == 4) {
        (((struct o3_uchar *)0xC40F820)->v) = 0x6;
    }
    return (unsigned char)t14;
}

int FUN_0c0471fc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x0, 0x1E, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        t0 = *(short *)((a4 + 0x1E));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t0 = *(signed char *)0xC541F62;
                t3 = 0x74;
                if (((unsigned char)t0 != 0) && ((unsigned char)t0 != 1)) {
                    t3 = 0x78;
                }
                t0 = (((struct oC4_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, t3, (*(int *)0xC4B410C));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x1F;
                (((struct o6C_float *)(t0))->v) = -234.0f;
                (((struct o70_float *)(t0))->v) = 192.0f;
                t2 = 0x70;
            }
            t0 = t2;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = 0xC4;
        }
        t1 = t0;
    }
    return t1;
}
