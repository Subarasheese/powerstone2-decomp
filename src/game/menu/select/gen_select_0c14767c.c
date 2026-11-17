/* game/menu/select: functions 0C14767C-0C147F54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o41C_float { char p[0x41C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c145c74(int, int);
int FUN_0c145d1c(int, int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
int FUN_0c14767c(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_0c147928(int a4, int a5, int a6);
int FUN_0c147c10(int a4, int a5);
int FUN_0c147e78(int a4, int a5);

int FUN_0c14767c(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[5];
    register int t0;
    register int t13;
    register int t8;
    register int t9;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    *(float *)(((int)stk + 16)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t13 = t0;
    if (t0 != 0) {
        (((struct o41C_float *)(t0))->v) = (*(float *)(((int)stk + 16)));
        *(unsigned int *)(((0x41C + t0) + 0x4)) = (*(int *)((a8 + 0x4)));
        *(unsigned int *)(((0x41C + t0) + 0x8)) = (*(int *)((a8 + 0x8)));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1472DC;
        *(volatile int *)((t0 + 0xCC));
        *(volatile int *)(((int)stk + 4));
        t8 = ((int (*)(int, int))(FUN_0c187798))(t0, (0x41C + t0));
        *(volatile int *)((t9 + 0xCC));
        *(volatile int *)(((int)stk + 0));
        t13 = (((int (*)(int))(FUN_0c187798))(t9));
    }
    return t13;
}

int FUN_0c147928(int a4, int a5, int a6)
{
    int stk[18];
    register int t0;
    register int t4;
    register int t8;
    register int t11;
    register int t12;
    register int t16;
    register int t18;
    register int t22;
    register int t24;
    register int t30;
    register int t33;
    register int t42;
    register int t46;
    register int t50;
    register int t73;
    register int t77;
    register int t78;
    register int t82;
    register int t84;
    register int t88;
    register int t90;
    register int t96;
    register int t99;
    register int t108;
    register int t112;
    register int t116;
    register int t125;
    register int t129;
    register int t131;
    register int t138;
    register int t142;
    register int t160;
    register int t161;
    register int t165;
    register int t167;
    register int t174;
    register int t178;
    register int t184;
    int t20;
    register int t75;
    int t86;
    int t127;
    int t163;

    *(unsigned int *)(((int)stk + 16)) = 0xC2A2640;
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    FUN_0c058adc((((int)stk + 16) + 0x20), (((int)stk + 16) + 0x20), (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532E38));
    *(volatile int *)(((int)stk + 16));
    t4 = ((int (*)(void))(FUN_0c187798))();
    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 44))) + (1.0f + 1.0f));
    FUN_0c058adc((((int)stk + 16) + 0x14), (((int)stk + 16) + 0x14), (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532E38));
    t8 = ((int (*)(void))(FUN_0c187798))();
    FUN_0c0e2390((((int)stk + 16) + 0x20), (((int)stk + 16) + 0x14), (((int)stk + 16) + 0x20));
    FUN_0c145c74((a4 + 0x34), (((int)stk + 16) + 0x20));
    t11 = *(signed char *)((a4 + 0x14));
    if (t11 != 0) {
        if (t11 != 1) {
            if (t11 != 2) {
                if (t11 == 3) {
                    t12 = (((struct oC4_int *)(a4))->v);
                    (((struct o80_uint *)(t12))->v) = (((((struct o80_int *)(t12))->v)) + ((((struct o14_int *)0xC2A26F4)->v)));
                    t16 = (((struct oC8_int *)(a4))->v);
                    (((struct o80_uint *)(t16))->v) = (((((struct o80_int *)(t16))->v)) - ((((struct o14_int *)0xC2A26F4)->v)));
                    t18 = *(short *)((a4 + 0x1C));
                    if (((int)t18 >= (int)((((struct oC_int *)0xC2A26F4)->v))) && (t20 = (((struct o10_int *)0xC2A26F4)->v), (int)t18 <= (int)t20)) {
                        *(unsigned int *)(((int)stk + 20)) = 0xC2A2700;
                        t22 = ((((struct oC_int *)0xC2A26F4)->v));
                        *(int *)((int)stk + 12) = t22;
                        *(unsigned int *)(((int)stk + 16)) = 0xC2A2704;
                        t24 = ((((struct o10_int *)0xC2A26F4)->v));
                        *(int *)((int)stk + 8) = t24;
                        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A26D0, 0xC2A26C4, (*(short *)((a4 + 0x1C))), t24, t22);
                        t30 = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
                        *(int *)((int)stk + 4) = t30;
                        t33 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                        *(int *)((int)stk + 0) = t33;
                        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A26E8, 0xC2A26DC, (*(short *)((a4 + 0x1C))), t33, t30);
                    }
                    t42 = (((struct oC4_int *)(a4))->v);
                    *(unsigned short *)((t42 + 0x6)) = ((*(short *)((t42 + 0x6))) | 0x1000);
                    FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
                    t46 = (((struct oC8_int *)(a4))->v);
                    *(unsigned short *)((t46 + 0x6)) = ((*(short *)((t46 + 0x6))) | 0x1000);
                    FUN_0c145d1c(a4, ((((struct oC8_int *)(a4))->v)));
                    t50 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t50 + 0x1);
                    t184 = (short)(t50 + 0x1);
                    if ((int)(short)(t50 + 0x1) > (int)((((struct o0_int *)0xC2A26F4)->v))) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t184 = 0x14;
                    }
                } else {
                    t184 = (FUN_0c03f346(a4));
                }
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0xA, (*(int *)((((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40DC) + 0x4))));
                FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0xA, (*(int *)((((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40DC) + 0x4))));
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
                *(volatile int *)((a4 + 0xC4));
                t73 = ((int (*)(int))(FUN_0c187798))(0x1F);
                *(unsigned short *)(((0x6 + ((((struct oC8_int *)(a4))->v))) + 0x0)) = t75;
                *(volatile int *)((a4 + 0xC8));
                t77 = ((int (*)(int))(FUN_0c187798))(t75);
                t78 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t78))->v) = (((((struct o80_int *)(t78))->v)) + ((((struct o14_int *)0xC2A26F4)->v)));
                t82 = (((struct oC8_int *)(a4))->v);
                (((struct o80_uint *)(t82))->v) = (((((struct o80_int *)(t82))->v)) - ((((struct o14_int *)0xC2A26F4)->v)));
                t84 = *(short *)((a4 + 0x1C));
                if (((int)t84 >= (int)((((struct oC_int *)0xC2A26F4)->v))) && (t86 = (((struct o10_int *)0xC2A26F4)->v), (int)t84 <= (int)t86)) {
                    *(unsigned int *)(((int)stk + 20)) = 0xC2A2700;
                    t88 = ((((struct oC_int *)0xC2A26F4)->v));
                    *(int *)((int)stk + 12) = t88;
                    *(unsigned int *)(((int)stk + 16)) = 0xC2A2704;
                    t90 = ((((struct o10_int *)0xC2A26F4)->v));
                    *(int *)((int)stk + 8) = t90;
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A26D0, 0xC2A26C4, (*(short *)((a4 + 0x1C))), t90, t88);
                    t96 = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
                    *(int *)((int)stk + 4) = t96;
                    t99 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                    *(int *)((int)stk + 0) = t99;
                    FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A26E8, 0xC2A26DC, (*(short *)((a4 + 0x1C))), t99, t96);
                }
                t108 = (((struct oC4_int *)(a4))->v);
                *(unsigned short *)((t108 + 0x6)) = ((*(short *)((t108 + 0x6))) | 0x1000);
                FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
                t112 = (((struct oC8_int *)(a4))->v);
                *(unsigned short *)((t112 + 0x6)) = ((*(short *)((t112 + 0x6))) | 0x1000);
                FUN_0c145d1c(a4, ((((struct oC8_int *)(a4))->v)));
                t116 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t116 + 0x1);
                t184 = (short)(t116 + 0x1);
                if ((int)(short)(t116 + 0x1) > (int)((((struct o0_int *)0xC2A26F4)->v))) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t184 = 0x14;
                }
            }
        } else {
            t125 = *(short *)((a4 + 0x1C));
            if (((int)t125 >= (int)((((struct o4_int *)0xC2A26F4)->v))) && (t127 = (((struct o8_int *)0xC2A26F4)->v), (int)t125 <= (int)t127)) {
                t129 = ((((struct o4_int *)0xC2A26F4)->v));
                *(int *)((int)stk + 12) = t129;
                t131 = ((((struct o8_int *)0xC2A26F4)->v));
                *(int *)((int)stk + 8) = t131;
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A26B8, 0xC2A26AC, (*(short *)((a4 + 0x1C))), t131, t129);
            }
            t138 = (((struct oC4_int *)(a4))->v);
            *(unsigned short *)((t138 + 0x6)) = ((*(short *)((t138 + 0x6))) | 0x1000);
            FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
            t142 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t142 + 0x1);
            t184 = (short)(t142 + 0x1);
            if ((int)(short)(t142 + 0x1) > (int)((((struct oC_int *)0xC2A26F4)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t184 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0xA, (*(int *)((((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40DC) + 0x4))));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x3F;
        *(volatile int *)((a4 + 0xC4));
        t160 = ((int (*)(void))(FUN_0c187798))();
        t161 = *(short *)((a4 + 0x1C));
        if (((int)t161 >= (int)((((struct o4_int *)0xC2A26F4)->v))) && (t163 = (((struct o8_int *)0xC2A26F4)->v), (int)t161 <= (int)t163)) {
            t165 = ((((struct o4_int *)0xC2A26F4)->v));
            *(int *)((int)stk + 12) = t165;
            t167 = ((((struct o8_int *)0xC2A26F4)->v));
            *(int *)((int)stk + 8) = t167;
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A26B8, 0xC2A26AC, (*(short *)((a4 + 0x1C))), t167, t165);
        }
        t174 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t174 + 0x6)) = ((*(short *)((t174 + 0x6))) | 0x1000);
        FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
        t178 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t178 + 0x1);
        t184 = (short)(t178 + 0x1);
        if ((int)(short)(t178 + 0x1) > (int)((((struct oC_int *)0xC2A26F4)->v))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t184 = 0x14;
        }
    }
    return t184;
}

int FUN_0c147c10(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        t3 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t3;
        *(unsigned int *)((t0 + 0x4)) = 0xC147928;
    }
    return t3;
}

int FUN_0c147e78(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        t3 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t3;
        *(unsigned int *)((t0 + 0x4)) = 0xC147C60;
    }
    return t3;
}
