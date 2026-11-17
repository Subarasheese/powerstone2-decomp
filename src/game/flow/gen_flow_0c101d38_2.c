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
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
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

int FUN_0c1020e8(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_4 = a5;
    v0_5 = a6;
    v0_6 = a7;
    v0_8 = *(signed char *)0xC541F43;
    v0_2 = ((unsigned char)v0_8);
    v0_0 = (0xC541F3C);
    v0_3 = (0xC472CEC);
    v0_1 = (0x0);
    v0_7 = (0xC541F44);
    if (((unsigned char)v0_8 == 0)) goto L_C102112;
    if ((v0_2 == 1)) goto L_C102132;
    v0_4 = *(signed char *)((v0_0 + 0x9));
    v0_2 = ((unsigned char)v0_4);
    v0_8 = (0x1);
    if (((unsigned char)v0_4 == 0)) goto L_C102198;
    if ((v0_2 == 1)) goto L_C1021C6;
    FUN_0c03f0aa();
    v0_0 = *(int *)((v0_3 + 0xC));
    v0_2 = (v0_0);
    if ((v0_0 == 6)) goto L_C1021FE;
    if ((v0_2 == 7)) goto L_C1021FE;
    if ((v0_2 == 8)) goto L_C10227C;
    if ((v0_2 == 9)) goto L_C10227C;
    if ((v0_2 == 10)) goto L_C10227C;
    L_C102282:;
    v0_9 = (0xFFFFFFFF);
    v0_2 = ((((int)stk + 0) + 0x4));
    v0_7 = ((((int)stk + 0) + 0x4));
    v0_4 = (v0_1);
    v0_5 = ((((int)stk + 0) + 0x4));
    v0_6 = ((((int)stk + 0) + 0x4));
    v0_10 = ((((int)stk + 0) + 0x4));
    L_C1022FE:;
    if (((int)v0_4 < (int)0x4)) goto L_C102294;
    *(unsigned int *)(((int)stk + 0)) = (FUN_0c04a5c4(v0_10, (*(int *)((v0_3 + 0xC)))));
    FUN_0c0498d8();
    FUN_0c036de8(0x8, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c06780e((*(int *)(((int)stk + 0))));
    FUN_0c06785c();
    v0_0 = (*(int *)((v0_3 + 0x1C))) == 0;
    v0_2 = ((FUN_0c05b7e0(0x5)));
    if (v0_0) goto L_C10233E;
    if (((*(signed char *)0xC83C554) != 0)) goto L_C10233E;
    v0_2 = ((FUN_0c04a868((*(int *)((v0_3 + 0xC))))));
    L_C10233E:;
    return v0_2;
    L_C102294:;
    v0_0 = (((v0_4 << 2) + v0_10));
    v0_7 = (((((v0_4 << 2) + v0_4) << 2) + (0xBC + v0_3)));
    if (((*(int *)((((((v0_4 << 2) + v0_4) << 2) + (0xBC + v0_3)) + 0x0))) != 2)) goto L_C1022BE;
    *(unsigned char *)((v0_0 + 0x0)) = v0_1;
    *(unsigned char *)((v0_0 + 0x1)) = v0_1;
    *(unsigned char *)((v0_0 + 0x2)) = v0_1;
    *(unsigned char *)((v0_0 + 0x3)) = v0_1;
    L_C1022F6:;
    v0_2 = ((v0_2 + 0x4));
    v0_4 = ((v0_4 + 0x1));
    v0_5 = ((v0_5 + 0x4));
    v0_6 = ((v0_6 + 0x4));
    goto L_C1022FE;
    L_C1022BE:;
    *(unsigned char *)((v0_0 + 0x0)) = v0_8;
    *(unsigned char *)((v0_0 + 0x1)) = (*(signed char *)((v0_7 + 0x8)));
    *(unsigned char *)((v0_0 + 0x2)) = (*(signed char *)((v0_7 + 0x4)));
    if (((*(int *)((v0_7 + 0x0))) != 0)) goto L_C1022D8;
    *(unsigned char *)((v0_6 + 0x3)) = v0_1;
    L_C1022DE:;
    if (((*(int *)((v0_7 + 0x10))) != 2)) goto L_C1022F6;
    if (((*(int *)((v0_7 + 0x8))) == 12)) goto L_C1022F6;
    if (((*(int *)((v0_7 + 0x8))) == 13)) goto L_C1022F6;
    *(unsigned char *)((v0_5 + 0x1)) = v0_9;
    goto L_C1022F6;
    L_C1022D8:;
    *(unsigned char *)((v0_2 + 0x3)) = v0_8;
    goto L_C1022DE;
    L_C10227C:;
    *(unsigned int *)((v0_3 + 0xC)) = ((*(int *)((v0_3 + 0xC))) - 1);
    goto L_C102282;
    L_C1021FE:;
    v0_7 = (v0_1);
    v0_4 = (0x50);
    v0_6 = (v0_1);
    L_C102246:;
    if (((unsigned int)v0_7 < (unsigned int)v0_4)) goto L_C102230;
    v0_2 = (0xC);
    v0_0 = (0xD);
    v0_5 = (v0_1);
    L_C102250:;
    v0_7 = (((0xBC + v0_3) + v0_5));
    if (((*(int *)((((0xBC + v0_3) + v0_5) + 0x0))) != 2)) goto L_C10226E;
    *(unsigned int *)((v0_7 + 0x0)) = v0_8;
    *(unsigned int *)((v0_7 + 0x4)) = v0_6;
    if (((*(int *)((v0_3 + 0xC))) != 6)) goto L_C10226A;
    *(unsigned int *)((v0_7 + 0x8)) = v0_2;
    L_C102274:;
    *(unsigned int *)((v0_3 + 0xC)) = ((*(int *)((v0_3 + 0xC))) - 1);
    goto L_C102282;
    L_C10226A:;
    *(unsigned int *)((v0_7 + 0x8)) = v0_0;
    goto L_C102274;
    L_C10226E:;
    v0_7 = (unsigned int)(v0_5 + 0x14) < (unsigned int)v0_4;
    v0_5 = ((v0_5 + 0x14));
    if (v0_7) goto L_C102250;
    goto L_C102274;
    L_C102230:;
    v0_5 = (((0xBC + v0_3) + v0_7));
    if (((*(int *)((((0xBC + v0_3) + v0_7) + 0x0))) == 2)) goto L_C102244;
    if (((*(int *)((v0_5 + 0x4))) != v0_6)) goto L_C102244;
    v0_6 = ((v0_6 + 0x1));
    L_C102244:;
    v0_7 = ((v0_7 + 0x14));
    goto L_C102246;
    L_C1021C6:;
    v0_1 = *(short *)((v0_0 + 0x14));
    *(unsigned short *)((v0_0 + 0x14)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C1021D6;
    goto L_C10233E;
    L_C1021D6:;
    v0_1 = *(signed char *)((v0_0 + 0x9));
    *(unsigned char *)((v0_0 + 0x9)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    goto L_C10233E;
    L_C102198:;
    *(unsigned short *)((v0_0 + 0x14)) = 0x20;
    *(unsigned char *)0xC542254 = v0_8;
    FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
    if (((*(int *)((v0_3 + 0x1C))) == 0)) goto L_C1021B8;
    if (((*(signed char *)0xC83C554) == 0)) goto L_C1021C0;
    L_C1021B8:;
    FUN_0c05b052(0x1E, 0x0);
    L_C1021C0:;
    *(unsigned char *)((v0_0 + 0x9)) = ((*(signed char *)((v0_0 + 0x9))) + 0x1);
    goto L_C1021C6;
    L_C102132:;
    if (((*(int *)((v0_3 + 0x1C))) != 0)) goto L_C10217A;
    if (((*(signed char *)0xC5429CB) == 0)) goto L_C10217E;
    v0_3 = *(signed char *)((v0_7 + 0x0));
    v0_2 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 == 0)) goto L_C102150;
    if ((v0_2 == 1)) goto L_C10215C;
    goto L_C10233E;
    L_C10215C:;
    v0_3 = ((int (*)(int, int, int, int))(FUN_0c04644c))(v0_7, v0_4, v0_5, v0_6);
    v0_2 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 != 0)) goto L_C10216C;
    goto L_C10233E;
    L_C10216C:;
    *(unsigned char *)((v0_0 + 0x7)) = ((*(signed char *)((v0_0 + 0x7))) + 0x1);
    *(unsigned char *)((v0_0 + 0x8)) = v0_1;
    v0_2 = (v0_1);
    goto L_C10233E;
    L_C102150:;
    FUN_0c0463fc();
    *(unsigned char *)((v0_0 + 0x8)) = ((*(signed char *)((v0_0 + 0x8))) + 0x1);
    goto L_C10215C;
    L_C10217E:;
    v0_1 = *(signed char *)((v0_0 + 0x7));
    *(unsigned char *)((v0_0 + 0x7)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    goto L_C10233E;
    L_C10217A:;
    FUN_0c102086();
    goto L_C10217E;
    L_C102112:;
    v0_0 = *(signed char *)((v0_7 + 0x0));
    v0_2 = ((unsigned char)v0_0);
    if (((unsigned char)v0_0 == 0)) goto L_C102122;
    if ((v0_2 == 1)) goto L_C10212A;
    goto L_C10233E;
    L_C10212A:;
    v0_2 = ((FUN_0c102d68()));
    goto L_C10233E;
    L_C102122:;
    v0_2 = ((FUN_0c102690()));
    goto L_C10233E;
}

int FUN_0c1023cc(int a4, int a5)
{
    int stk[9];
    register int t0;
    register int t6;
    register int t37;
    register int t40;
    register int t41;
    register int t42;
    register int t43;
    register int t53;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t96;
    register int t100;
    register int t108;
    register int t109;
    register int t110;
    register int t114;
    register int t115;
    register int t116;
    register int t123;
    register int t124;
    register int t129;
    register int t90;
    register int t55;
    int t61;
    register int t111;
    register int t112;
    register int t113;
    int t120;
    register int t122;

    t0 = *(signed char *)0xC83C554;
    t6 = t0;
    if (t0 == 3) {
        t6 = (t0 + ((*(signed char *)0xC83C555) + ((*(signed char *)0xC83C556) << 1)));
    }
    *(unsigned int *)(((int)stk + 0)) = (0xC1FC540 + (t6 * 0x1C));
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
    FUN_0c036de8(0x18, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c03ea04(0xA, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
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
        t42 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = 0x0;
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
            t53 = *(signed char *)((t42 + 0x1));
            t42 = (t42 + 0x7);
            *(unsigned int *)(((0xC472D28 + (*(int *)(((int)stk + 0)))) + 0x8)) = t53;
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x20);
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
            *(unsigned int *)(((int)stk + 0)) = t59;
            if ((t59 != 12) && (t61 = *(int *)(((int)stk + 0)), t61 != 13)) {
                if ((*(int *)(((0xC472DA8 + t58) + 0x10))) == 2) {
                    *(unsigned int *)(((0xC472DA8 + t58) + 0xC)) = t60;
                } else {
                    t56 = (*(int *)(((0xC472DA8 + t58) + 0xC)));
                    if ((int)t56 >= (int)t60) {
                        *(unsigned int *)(((0xC472DA8 + t58) + 0xC)) = 0x0;
                    }
                    t56 = 0xC472CEC;
                    t56 = (t56 + 0x24);
                    t56 = (t56 + (*(int *)(((0xC472DA8 + t58) + 0xC))));
                    t55 = (*(signed char *)((t56 + 0x0)));
                    *(unsigned int *)(((0xC472DA8 + t58) + 0x8)) = t55;
                }
            } else {
                if ((*(int *)(((0xC472DA8 + t58) + 0x10))) == 2) {
                    *(unsigned int *)(((0xC472DA8 + t58) + 0xC)) = t60;
                } else {
                    t56 = 0xC472CEC;
                    t56 = (t56 + 0x24);
                    t56 = (t56 + (*(int *)(((0xC472DA8 + t58) + 0xC))));
                    t55 = (*(signed char *)((t56 + 0x0)));
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
        *(unsigned int *)(((int)stk + 0)) = (((t96 << 2) << 2) << 1);
        *(unsigned int *)((((((t96 << 2) << 2) << 1) + 0xC472D28) + 0x0)) = (*(signed char *)(((0xC83C590 + (t96 * 0x23)) + 0x0)));
        *(unsigned int *)(((0xC472D28 + (*(int *)(((int)stk + 0)))) + 0xC)) = t96;
        t100 = *(signed char *)((((t96 * 0x23) + 0xC83C590) + 0x4));
        t96 = (t96 + 0x1);
        if (t100 != 0) {
            *(unsigned int *)(((0xC472D28 + (*(int *)(((int)stk + 0)))) + 0x10)) = 0x0;
        } else {
            *(unsigned int *)(((0xC472D28 + (*(int *)(((int)stk + 0)))) + 0x10)) = 0x2;
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
        t114 = 0xBC;
        t114 = (t114 + 0xC472CEC);
        t114 = (t114 + t115);
        t110 = (*(int *)((t114 + 0x0)));
        if ((t110 != 2) && (t120 = *(int *)((t114 + 0x10)), t112 = t120, t112 != 0)) {
            t112 = (*(int *)((t114 + 0x4)));
            t111 = 0x1;
            t111 = ((int)t111 << (int)t112);
            t116 = (t116 | t111);
        }
        t115 = (t115 + 0x14);
    }
    t123 = 0x4;
    t124 = t116;
    for (;;) {
        if ((t124 & 0x1) != 0) {
            t122 = ((((struct o0_int *)0xC472CEC)->v));
            t122 = (t122 + 0x1);
            (((struct o0_uint *)0xC472CEC)->v) = t122;
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
