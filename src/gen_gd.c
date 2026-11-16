/* Straight-line functions with calls and guards (batch gen_gd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c138fae(int);
int FUN_0c1393f4(int);
int FUN_0c139d06(int, int, int, int, int);
extern int FUN_0c18778c();
extern int FUN_0c187798();
int FUN_0c139d98(int a4, int a5, int a6);

int FUN_0c139d98(int a4, int a5, int a6)
{
    int stk[8];
    register int t0;
    register int t5;
    register int t8;
    register int t9;
    register int t23;
    register int t32;
    register int t34;
    register int t63;
    register int t70;
    register int t74;
    register int t76;
    register int t84;
    register int t88;
    register int t90;
    register int t98;
    register int t114;
    register int t7;
    register int t146;
    register int t104;
    register int t18;
    register int t24;
    register int t58;
    int t72;
    int t86;

    t0 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
    }
    *(volatile signed char *)((a4 + 0x1));
    t5 = ((int (*)(int, int, int))(FUN_0c187798))(0x3, 0xC532498, a6);
    *(volatile signed char *)((a4 + 0x1));
    t8 = ((int (*)(int, int))(FUN_0c187798))(0x0, t7);
    t9 = *(signed char *)((a4 + 0x14));
    if (t9 != 0) {
        if (t9 != 1) {
            if (t9 != 2) {
                t104 = (FUN_0c03f346(a4));
            } else {
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x2) {
                    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t18)) == 0) {
                        t23 = (*(int *)((0xC2A1DC8 + (((*(short *)((a4 + 0x1E))) << 1) << 2))));
                        for (;;) {
                            if ((int)t23 > (int)(*(int *)((((((*(short *)((a4 + 0x1E))) << 1) << 2) + 0xC2A1DC8) + 0x4)))) {
                                break;
                            }
                            t24 = t23;
                            t24 = (t24 << 2);
                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                            *(unsigned int *)(((int)stk + 24)) = (*(int *)((t24 + 0xC2A1CD8)));
                            *(unsigned int *)(((int)stk + 28)) = 0x0;
                            *(float *)(((int)stk + 8)) = (*(float *)(((0xC2A1D08 + t24) + 0x0)));
                            (((struct o4_float *)(((int)stk + 8)))->v) = (*(float *)((t24 + 0xC2A1D38)));
                            *(float *)(((int)stk + 16)) = (*(float *)(((0xC2A1D08 + t24) + 0x0)));
                            t32 = *(int *)((t24 + 0xC2A1D68));
                            t34 = (*(int *)((0xC2A1D98 + t24)));
                            *(int *)((int)stk + 4) = t34;
                            FUN_0c139d06((*(signed char *)(((0x1 + (((short)t0 * (short)0x3938) + 0xC532498)) + 0x0))), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10), t32, t34);
                            t23 = (t23 + 0x1);
                        }
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    }
                    t58 = t18;
                }
                if ((*(short *)((a4 + 0x1C))) == 0) {
                    FUN_0c1393f4((*(signed char *)((a4 + 0x1))));
                } else {
                }
                if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                    *(volatile int *)((a4 + 0xC4));
                    *(volatile short *)((a4 + 0x20));
                    t63 = ((int (*)(int))(FUN_0c18778c))(t58);
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                }
                t70 = *(short *)((a4 + 0x1C));
                if (((int)t70 >= (int)((((struct o4_int *)0xC2A1DE0)->v))) && (t72 = (((struct o8_int *)0xC2A1DE0)->v), (int)t70 <= (int)t72)) {
                    t74 = ((((struct o4_int *)0xC2A1DE0)->v));
                    *(int *)((int)stk + 4) = t74;
                    t76 = ((((struct o8_int *)0xC2A1DE0)->v));
                    *(int *)((int)stk + 0) = t76;
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A1BCC, 0xC2A1BC0, (*(short *)((a4 + 0x1C))), t76, t74);
                }
                t84 = *(short *)((a4 + 0x1C));
                if (((int)t84 >= (int)((((struct oC_int *)0xC2A1DE0)->v))) && (t86 = (((struct o10_int *)0xC2A1DE0)->v), (int)t84 <= (int)t86)) {
                    t88 = ((((struct oC_int *)0xC2A1DE0)->v));
                    *(int *)((int)stk + 4) = t88;
                    t90 = ((((struct o10_int *)0xC2A1DE0)->v));
                    *(int *)((int)stk + 0) = t90;
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A1BC0, 0xC2A1BCC, (*(short *)((a4 + 0x1C))), t90, t88);
                }
                t98 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t98 + 0x1);
                t104 = (short)(t98 + 0x1);
                if ((int)(short)(t98 + 0x1) > (int)((((struct o0_int *)0xC2A1DE0)->v))) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t104 = 0x14;
                }
            }
            t146 = t104;
        } else {
            t114 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t114 + 0x1);
            t146 = (short)(t114 + 0x1);
            if ((int)(short)(t114 + 0x1) <= (int)0x14) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x10, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct oAC_ushort *)(a4))->v) = 0xF;
                (((struct oA9_uchar *)(a4))->v) = 0x21;
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
                *(volatile int *)((a4 + 0xC4));
                t146 = (((int (*)(void))(FUN_0c18778c))());
            }
        }
    } else {
        t146 = 0x8C;
        if (20.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))))->v))) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t146 = (FUN_0c138fae((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1)))));
        }
    }
    return t146;
}
