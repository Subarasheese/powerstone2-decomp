/* game/unsorted: functions 0C05F7A0-0C05FA58, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int FUN_0c03eff6(void);
int FUN_0c0573d8(void);
int FUN_0c05add4(int);
int game_reset_objects(void);
int FUN_0c05fa10(int, int, int);
int FUN_0c07c436(void);
extern int FUN_0c0fb90e();
extern int gfx_set_background_color();
int FUN_0c2b1b16(int);
int FUN_0c2b1b1c(void);
int FUN_0c05f7a0(int a4);
int FUN_0c05f7e2(int a4);
int FUN_0c05f80a(void);
int FUN_0c05f826(void);
int FUN_0c05f842(int a4, int a5, int a6);

int FUN_0c05f7a0(int a4)
{
    register int t2;

    FUN_0c07c436();
    (((struct o14_uint *)0xC46E1D0)->v) = (unsigned char)(*(signed char *)0xC541F3D);
    *(unsigned char *)0xC541F3D = 0x63;
    (((struct o0_uint *)0xC46E1D0)->v) = 0x2;
    (((struct o4_uint *)0xC46E1D0)->v) = a4;
    (((struct o10_uint *)0xC46E1D0)->v) = 0x0;
    t2 = FUN_0c05add4(0x1);
    (((struct o8_uint *)0xC46E1D0)->v) = 0x0;
    (((struct o18_uint *)0xC46E1D0)->v) = 0x0;
    return t2;
}

int FUN_0c05f7e2(int a4)
{
    register int t0;

    t0 = FUN_0c05f7a0(0x4);
    *(unsigned int *)0xC46E1E8 = a4;
    return t0;
}

int FUN_0c05f80a(void)
{
    register int t0;

    t0 = FUN_0c2b1b1c();
    if (t0 == 1) {
        return FUN_0c2b1b16(0x0);
    }
    return t0;
}

int FUN_0c05f826(void)
{
    register int t0;

    t0 = FUN_0c2b1b1c();
    if (t0 == 0) {
        return FUN_0c2b1b16(0x1);
    }
    return t0;
}

int FUN_0c05f842(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R9;
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
    v0_4 = a6;
    v0_0 = R9;
    v0_2 = (((struct o4_int *)0xC46E1D0)->v);
    v0_5 = (v0_2);
    v0_1 = (0xC46E1D4);
    v0_0 = (0xC1777B0);
    v0_7 = (0xFF000000);
    v0_6 = (0xFFC0C0C0);
    v0_0 = (0xC46E1E4);
    R9 = (0xC03EFF6);
    if ((v0_2 == 0)) goto L_C05F882;
    if ((v0_5 == 3)) goto L_C05F882;
    if ((v0_5 == 1)) goto L_C05F882;
    if ((v0_5 == 2)) goto L_C05F892;
    if ((v0_5 == 5)) goto L_C05F892;
    if ((v0_5 == 7)) goto L_C05F892;
    if ((v0_5 == 4)) goto L_C05F896;
    if ((v0_5 == 6)) goto L_C05F8A2;
    L_C05F902:;
    v0_6 = *(int *)((v0_0 + 0x0));
    v0_5 = (v0_6);
    v0_2 = (v0_6);
    if ((v0_6 == 6)) goto L_C05F912;
    v0_5 = (v0_2);
    if ((v0_2 != 7)) goto L_C05F922;
    L_C05F912:;
    v0_6 = ((((struct o10_int *)0xC46E1D0)->v)) == 0;
    if (v0_6) goto L_C05F922;
    v0_3 = FUN_0c05fa10(v0_2, v0_3, v0_4);
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C05FA00;
    L_C05F922:;
    v0_3 = (((struct o0_int *)0xC46E1D0)->v);
    (((struct o0_uint *)0xC46E1D0)->v) = (v0_3 - 1);
    if (((int)(v0_3 - 1) >= 0)) goto L_C05FA00;
    (((struct o0_uchar *)0xC541F3D)->v) = (*(int *)((v0_1 + 0x0)));
    (((struct oC_uchar *)0xC541F3D)->v) = 0x0;
    (((struct oB_uchar *)0xC541F3D)->v) = 0x0;
    (((struct oA_uchar *)0xC541F3D)->v) = 0x0;
    (((struct o9_uchar *)0xC541F3D)->v) = 0x0;
    (((struct o8_uchar *)0xC541F3D)->v) = 0x0;
    (((struct o7_uchar *)0xC541F3D)->v) = 0x0;
    (((struct o6_uchar *)0xC541F3D)->v) = 0x0;
    (((struct o5_uchar *)0xC541F3D)->v) = 0x0;
    (((struct o4_uchar *)0xC541F3D)->v) = 0x0;
    (((struct o3_uchar *)0xC541F3D)->v) = 0x0;
    (((struct o3_uchar *)0xC54208F)->v) = 0x0;
    (((struct o0_uchar *)0xC54208F)->v) = 0x0;
    v0_1 = *(int *)((v0_1 + 0x0));
    v0_5 = (v0_1);
    v0_6 = (0xC541F3C);
    if ((v0_1 == 1)) goto L_C05F980;
    if ((v0_5 == 0)) goto L_C05F996;
    if ((v0_5 == 3)) goto L_C05F996;
    if ((v0_5 == 2)) goto L_C05F996;
    if ((v0_5 == 7)) goto L_C05F996;
    if ((v0_5 == 4)) goto L_C05F9A4;
    if ((v0_5 == 5)) goto L_C05F9D0;
    if ((v0_5 == 6)) goto L_C05F9EA;
    L_C05F9EE:;
    return FUN_0c0573d8();
    L_C05F9EA:;
    FUN_0c05f80a();
    goto L_C05F9EE;
    L_C05F9D0:;
    FUN_0c05f826();
    v0_1 = (*(int *)((v0_0 + 0x0))) == 7;
    if (v0_1) goto L_C05F9E0;
    v0_0 = (*(int *)((v0_0 + 0x0))) != 6;
    if (v0_0) goto L_C05F9EE;
    L_C05F9E0:;
    v0_0 = ((int (*)(int))(FUN_0c0fb90e))(v0_2);
    goto L_C05F9EE;
    L_C05F9A4:;
    FUN_0c05f826();
    game_reset_objects();
    *(unsigned short *)((v0_6 + 0xE)) = ((((struct o18_short *)0xC46E1D0)->v));
    goto L_C05F9EE;
    L_C05F996:;
    FUN_0c05f826();
    game_reset_objects();
    goto L_C05F9EE;
    L_C05F980:;
    v0_0 = *(int *)((v0_0 + 0x0));
    v0_2 = (v0_0);
    if ((v0_0 == 7)) goto L_C05F990;
    if ((v0_2 != 6)) goto L_C05F996;
    L_C05F990:;
    v0_0 = ((int (*)(int))(FUN_0c0fb90e))(v0_2);
    goto L_C05F996;
    L_C05FA00:;
    return v0_5;
    L_C05F8A2:;
    FUN_0c03eff6();
    v0_2 = (*(int *)((v0_0 + 0x0))) == 7;
    if (v0_2) goto L_C05F8B2;
    v0_2 = (*(int *)((v0_0 + 0x0))) != 6;
    if (!(v0_2)) goto L_C05F8B2;
    v0_2 = (v0_6);
    v0_3 = (v0_6);
    v0_4 = (v0_6);
    goto L_C05F8FE;
    L_C05F8B2:;
    v0_2 = (v0_7);
    v0_3 = (v0_7);
    v0_4 = (v0_7);
    L_C05F8FE:;
    v0_2 = ((int (*)(int, int, int))(gfx_set_background_color))(v0_2, v0_3, v0_4);
    goto L_C05F902;
    L_C05F896:;
    v0_2 = ((int (*)(int, int, int))(gfx_set_background_color))(v0_6, v0_6, v0_6);
    goto L_C05F902;
    L_C05F892:;
    FUN_0c03eff6();
    goto L_C05F896;
    L_C05F882:;
    v0_2 = ((int (*)(int, int, int))(gfx_set_background_color))(v0_7, v0_7, v0_7);
    FUN_0c03eff6();
    goto L_C05F902;
}
