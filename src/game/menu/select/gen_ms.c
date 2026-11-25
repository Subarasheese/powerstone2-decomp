/* Straight-line functions with calls and guards (batch gen_ms): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c145c74(int, int);
int FUN_0c145d1c(int, int);
int nlSubVector3op(int, int, int);
int FUN_0c147928(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };


int FUN_0c147928(int a4)
{
    int stk[18];
    int t8;
    int t108;
    int R1020;
    int t39;
    int t62;
    int t101;
    int t20;
    int t71;
    int t22;
    int t84;
    int t81;
    int t45;
    int R1024;
    int R1016;
    int R1012;
    int t97;
    int t93;
    int t75;
    int t73;
    int t69;
    int t67;
    int t63;
    int t35;
    int t26;
    int t24;

    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);
    R1020 = *(int *)((int)stk + 16);
    R1024 = *(int *)((int)stk + 20);

    R1020 = 0xC2A2640;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x20)) = *(struct mv3 *)(0xC2A2640); }
    FUN_0c058adc((((int)stk + 16) + 0x20), (((int)stk + 16) + 0x20), (((short)(*(signed char *)(a4 + 0x2)) * (short)0x3938) + 0xC532E38));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x14)) = *(struct mv3 *)((R1020)); }
    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 44))) + (1.0f + 1.0f));
    FUN_0c058adc((((int)stk + 16) + 0x14), (((int)stk + 16) + 0x14), (((short)(*(signed char *)(a4 + 0x2)) * (short)0x3938) + 0xC532E38));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)((((int)stk + 16) + 0x20)); }
    nlSubVector3op((((int)stk + 16) + 0x20), (((int)stk + 16) + 0x14), (((int)stk + 16) + 0x20));
    FUN_0c145c74((a4 + 0x34), (((int)stk + 16) + 0x20));
    t8 = *(signed char *)(a4 + 0x14);
    if (t8 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0xA, (*(int *)((((((*(signed char *)(a4 + 0x2)) << 2) << 1) + 0xC4B40DC) + 0x4))));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x3F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A26AC); }
    }
    if ((t8 == 0) || (t8 == 1)) {
        t20 = (((struct o1C_short *)(a4))->v);
        if (((int)t20 >= (int)((((struct o4_int *)0xC2A26F4)->v))) && (t22 = (((struct o8_int *)0xC2A26F4)->v), (int)t20 <= (int)t22)) {
            t24 = ((((struct o4_int *)0xC2A26F4)->v));
            R1016 = t24;
            t26 = ((((struct o8_int *)0xC2A26F4)->v));
            R1012 = t26;
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A26B8, 0xC2A26AC, ((((struct o1C_short *)(a4))->v)), t26, t24);
        }
        t35 = (((struct oC4_int *)(a4))->v);
        (((struct o6_ushort *)(t35))->v) = (((((struct o6_short *)(t35))->v)) | 0x1000);
        FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
        t39 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t39 + 0x1);
        t108 = (short)(t39 + 0x1);
        if ((int)(short)(t39 + 0x1) > (int)((((struct oC_int *)0xC2A26F4)->v))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            t108 = 0x14;
        }
    } else {
        t62 = 0;
        if (t8 != 2) {
            if (t8 == 3) {
                t62 = 1;
            } else {
                t45 = FUN_0c03f346(a4);
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0xA, (*(int *)((((((*(signed char *)(a4 + 0x2)) << 2) << 1) + 0xC4B40DC) + 0x4))));
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0xA, (*(int *)((((((*(signed char *)(a4 + 0x2)) << 2) << 1) + 0xC4B40DC) + 0x4))));
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A26C4); }
            *(unsigned short *)(((0x6 + ((((struct oC8_int *)(a4))->v))) + 0x0)) = 0x1F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A26DC); }
            t62 = 1;
        }
        if (t62) {
            t63 = (((struct oC4_int *)(a4))->v);
            (((struct o80_uint *)(t63))->v) = (((((struct o80_int *)(t63))->v)) + ((((struct o14_int *)0xC2A26F4)->v)));
            t67 = (((struct oC8_int *)(a4))->v);
            (((struct o80_uint *)(t67))->v) = (((((struct o80_int *)(t67))->v)) - ((((struct o14_int *)0xC2A26F4)->v)));
            t69 = (((struct o1C_short *)(a4))->v);
            if (((int)t69 >= (int)((((struct oC_int *)0xC2A26F4)->v))) && (t71 = (((struct o10_int *)0xC2A26F4)->v), (int)t69 <= (int)t71)) {
                R1024 = 0xC2A2700;
                t73 = ((((struct oC_int *)0xC2A26F4)->v));
                R1016 = t73;
                R1020 = 0xC2A2704;
                t75 = ((((struct o10_int *)0xC2A26F4)->v));
                R1012 = t75;
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A26D0, 0xC2A26C4, ((((struct o1C_short *)(a4))->v)), t75, t73);
                t81 = (*(int *)(((R1024) + 0x0)));
                t84 = (*(int *)(((R1020) + 0x0)));
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A26E8, 0xC2A26DC, ((((struct o1C_short *)(a4))->v)), t84, t81);
            }
            t93 = (((struct oC4_int *)(a4))->v);
            (((struct o6_ushort *)(t93))->v) = (((((struct o6_short *)(t93))->v)) | 0x1000);
            FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
            t97 = (((struct oC8_int *)(a4))->v);
            (((struct o6_ushort *)(t97))->v) = (((((struct o6_short *)(t97))->v)) | 0x1000);
            FUN_0c145d1c(a4, ((((struct oC8_int *)(a4))->v)));
            t101 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t101 + 0x1);
            t108 = (short)(t101 + 0x1);
            if ((int)(short)(t101 + 0x1) > (int)((((struct o0_int *)0xC2A26F4)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                t108 = 0x14;
            }
        } else {
            t108 = t45;
        }
    }
    return t108;
}
