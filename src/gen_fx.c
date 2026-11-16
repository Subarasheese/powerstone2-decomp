/* Straight-line functions with calls and guards (batch gen_fx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o382A_short { char p[0x382A]; short v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9C_float { char p[0x9C]; float v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c0e2390(int, int, int);
int FUN_0c14f960(int, int);
int FUN_0c17c450(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c151494(int a4);

int FUN_0c151494(int a4)
{
    int stk[4];
    register int t0;
    register int t4;
    register int t5;
    register int t8;
    register int t19;
    register int t49;
    register int t73;
    register int t74;
    register int t75;
    register int t76;
    register int t77;
    register int t80;
    register int t82;
    register int t83;
    register int t84;
    register int t100;
    register int t113;
    register int t2;
    int t3;
    int t47;
    register int t138;
    register float u78;
    register float u79;
    register int t90;
    register int t91;
    register int t92;
    register int t93;
    register float u94;
    register float u95;

    t0 = *(int *)((a4 + 0x10));
    if ((((((struct o382A_short *)(t0))->v)) != 0) && ((t2 = *(signed char *)((t0 + 0x3743)), (unsigned char)t2 == 64) && (t3 = *(signed char *)((t0 + 0xA8)), t3 != 0))) {
        *(unsigned int *)(((int)stk + 0)) = 0xC5410FC;
        t4 = 0xC2033C0;
        t5 = 0x0;
        for (;;) {
            t8 = *(signed char *)((t4 + 0x0));
            t4 = (t4 + 0x1);
            thunk_FUN_0c058310(((*(int *)((((t8 << 2) + (0xC53255C + ((short)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), ((*(int *)((((0xC4 + a4) + t5) + 0x0))) + 0x6C));
            FUN_0c0e2390((((int)stk + 0) + 0x4), ((*(int *)((((0xC4 + a4) + t5) + 0x0))) + 0x6C), (((*(int *)(((int)stk + 0))) + 0xBC) + 0xC));
            FUN_0c17c450((((int)stk + 0) + 0x4));
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) * 30.0f);
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) * 30.0f);
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) * 30.0f);
            t19 = *(int *)((((0xC4 + a4) + t5) + 0x0));
            FUN_0c0e2390((t19 + 0x6C), (t19 + 0x6C), (((int)stk + 0) + 0x4));
            t5 = (t5 + 0x4);
            if ((unsigned int)t5 >= (unsigned int)0x14) {
                break;
            }
        }
        if (((*(int *)0xC542260) & 15) == 0) {
            FUN_0c14f960((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1))), ((*(int *)((((((((struct o22_short *)(a4))->v)) << 2) + (0xC4 + a4)) + 0x0))) + 0x6C));
            (((struct o22_ushort *)(a4))->v) = ((int)((int)(((((struct o22_short *)(a4))->v)) + 0x1) % (int)0x5));
            t73 = (0x22 + a4);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = 0x2;
        t76 = t0;
    }
    t75 = *(int *)((a4 + 0x10));
    t74 = (((struct o382A_short *)(t75))->v);
    if ((t74 == 0) && (t47 = *(short *)((a4 + 0x1E)), t47 == 0)) {
        *(unsigned short *)((a4 + 0x1E)) = 0x1;
    }
    t49 = *(signed char *)((a4 + 0x14));
    if (t49 != 0) {
        if (t49 == 1) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t138 = (FUN_0c03f346(a4));
        } else {
            if (t49 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t138 = (FUN_0c03f346(a4));
            } else {
                t138 = t49;
                if (t49 == 3) {
                    t138 = (FUN_0c03f346(a4));
                }
            }
        }
    } else {
        t77 = 0x0;
        for (;;) {
            t80 = *(int *)((((0xC4 + a4) + t77) + 0x0));
            if ((*(signed char *)(((0x9C + t80) + 0x4))) != 0) {
                t82 = *(signed char *)(((0x9C + t80) + 0x5));
                *(unsigned char *)(((0x9C + t80) + 0x5)) = (t82 - 1);
                if ((signed char)(t82 - 1) == 0) {
                    *(unsigned char *)(((0x9C + t80) + 0x5)) = 0x2;
                    t83 = *(signed char *)(((0x9C + t80) + 0x6));
                    t84 = ((~(((~(t83 + 0x1)) + 0x1) & 0x3)) + 0x1);
                    if ((int)(t83 + 0x1) >= 0) {
                        t84 = ((t83 + 0x1) & 0x3);
                    }
                    t74 = 0xC4B40CC;
                    *(unsigned char *)(((0x9C + t80) + 0x6)) = t84;
                    t75 = 0xC037498;
                    t76 = t80;
                    FUN_0c037498(t76, (*(signed char *)(((0x9C + t80) + 0x6))), 0x13, (*(int *)((t74 + 0x0))));
                } else {
                    t90 = t73;
                    t91 = t74;
                    t92 = t75;
                    t93 = t76;
                    u94 = u78;
                    u95 = u79;
                }
                u78 = u94;
                u79 = u95;
                t73 = t90;
                t74 = t91;
                t75 = t92;
                t76 = t93;
                if ((*(short *)((a4 + 0x1E))) != 0) {
                    if ((*(signed char *)(((0x9C + t80) + 0x9))) == 0) {
                        t100 = *(signed char *)(((0x9C + t80) + 0x7));
                        *(unsigned char *)(((0x9C + t80) + 0x7)) = (t100 - 1);
                        if ((signed char)(t100 - 1) == 0) {
                            t73 = 0xC2033C5;
                            *(unsigned char *)(((0x9C + t80) + 0x7)) = (*(signed char *)((t73 + ((*(signed char *)(((0x9C + t80) + 0x8))) << 1))));
                            *(unsigned char *)(((0x9C + t80) + 0x9)) = ((*(signed char *)(((0x9C + t80) + 0x9))) + 0x1);
                            *(unsigned char *)((t80 + 0x0)) = 0x0;
                            u78 = ((((struct o84_float *)(t80))->v));
                            u79 = ((((struct o9C_float *)(t80))->v));
                            u78 = (u78 - u79);
                            (((struct o84_float *)(t80))->v) = u78;
                            u78 = ((((struct o88_float *)(t80))->v));
                            u79 = ((((struct o9C_float *)(t80))->v));
                            u78 = (u78 - u79);
                            (((struct o88_float *)(t80))->v) = u78;
                            u78 = ((((struct o8C_float *)(t80))->v));
                            u79 = ((((struct o9C_float *)(t80))->v));
                            u78 = (u78 - u79);
                            (((struct o8C_float *)(t80))->v) = u78;
                        }
                    } else {
                        t113 = *(signed char *)(((0x9C + t80) + 0x7));
                        *(unsigned char *)(((0x9C + t80) + 0x7)) = (t113 - 1);
                        if ((signed char)(t113 - 1) == 0) {
                            t73 = 0xC2033C6;
                            *(unsigned char *)(((0x9C + t80) + 0x7)) = (*(signed char *)((t73 + ((*(signed char *)(((0x9C + t80) + 0x8))) << 1))));
                            *(unsigned char *)(((0x9C + t80) + 0x8)) = ((*(signed char *)(((0x9C + t80) + 0x8))) + 0x1);
                            *(unsigned char *)(((0x9C + t80) + 0x9)) = 0x0;
                            t75 = 0x1;
                            *(unsigned char *)((t80 + 0x0)) = t75;
                            t75 = (*(signed char *)(((0x9C + t80) + 0x8)));
                            u79 = (float)t75;
                            if (!(4.0f > u79)) {
                                *(unsigned char *)(((0x9C + t80) + 0x4)) = 0x0;
                                t75 = ((((struct o20_short *)(a4))->v));
                                t75 = (t75 - 1);
                                (((struct o20_ushort *)(a4))->v) = t75;
                                *(unsigned char *)((t80 + 0x0)) = 0x0;
                            }
                        }
                    }
                }
            }
            t77 = (t77 + 0x4);
            if ((unsigned int)t77 >= (unsigned int)0x14) {
                break;
            }
        }
        t138 = 0x20;
        if (((((struct o20_short *)(a4))->v)) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t138 = 0x14;
        }
    }
    return t138;
}
