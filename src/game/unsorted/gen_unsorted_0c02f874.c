/* game/unsorted: functions 0C02F874-0C02FD38, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlInvertMatrix(int);
extern int FUN_0c17b1a0();
int FUN_0c17c450(int);
extern int FUN_0c187798();
int FUN_0c02f874(int a4, int a5, int a6);
int FUN_0c02fa8a(int a4, int a5, int a6, int a7);
int FUN_0c02fb24(int a4, int a5, int a6);

int FUN_0c02f874(int a4, int a5, int a6)
{
    int stk[17];
    register int t112;
    register int t1;
    register int t3;
    register int t5;
    register int t7;
    register int t10;
    register int t11;
    register int t25;
    register int t26;
    register int t106;
    register int t28;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register float u34;
    register float u35;
    register int t38;
    register int t41;
    register int t44;
    register int t47;
    register int t48;
    register int t50;
    register float u54;
    register float u57;
    register float u60;
    register float u63;
    register float u66;
    register float u69;
    register int t99;
    register int t102;
    register int t103;
    register int t4;
    register int t6;
    register int t27;
    register int t29;
    register int t85;
    register int t86;
    register int t101;
    register int t104;

    t112 = 0xA8;
    if ((*(signed char *)((a4 + 0xA8))) == 0) {
    } else {
        t1 = *(int *)((a5 + 0xC));
        *(unsigned int *)(((int)stk + 12)) = (0xC4 + a4);
        *(unsigned int *)(((int)stk + 0)) = 0xC3BB3E0;
        *(unsigned int *)(((int)stk + 16)) = (*(int *)((t1 + 0x0)));
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t3 = 0xA8;
        t5 = 0xC3BB9E0;
        t7 = (t1 + 0x4);
        for (;;) {
            if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)(((int)stk + 16)))) {
                break;
            }
            t10 = *(int *)((t7 + 0x0));
            t7 = (t7 + 0x4);
            t7 = (t7 + 0x4);
            *(unsigned int *)(((int)stk + 4)) = t10;
            t11 = *(int *)((t7 + 0x0));
            t7 = (t7 + 0x4);
            t3 = (*(int *)(((int)stk + 12)));
            t3 = (FUN_0c17b1a0(((*(int *)(((t11 << 2) + t3))) + 0x28), a5, a6));
            t4 = (*(int *)(((int)stk + 4)));
            t6 = 0x0;
            if ((int)t4 > 0) {
                for (;;) {
                    t3 = (nlCalcPoint(t7, (*(int *)(((int)stk + 0)))));
                    t3 = (nlCalcVector((t7 + 0xC), t5));
                    t4 = (*(int *)(((int)stk + 0)));
                    t6 = (t6 + 0x1);
                    t7 = (t7 + 0x18);
                    t4 = (t4 + 0xC);
                    *(unsigned int *)(((int)stk + 0)) = t4;
                    t5 = (t5 + 0xC);
                    if ((int)t6 >= (int)(*(int *)(((int)stk + 4)))) {
                        break;
                    }
                }
            }
            t4 = (*(int *)(((int)stk + 8)));
            t4 = (t4 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t4;
        }
        FUN_0c17b1a0((a5 + 0x28), a5, a6);
        t25 = *(int *)((a5 + 0x10));
        t26 = *(int *)((t25 + 0x0));
        t106 = (nlInvertMatrix(0x0));
        if ((int)t26 > 0) {
            t28 = t27;
            t30 = t29;
            t31 = 0x0;
            t32 = (t25 + 0x4);
            for (;;) {
                t33 = *(int *)((t32 + 0x0));
                t32 = (t32 + 0x4);
                *(unsigned int *)(((int)stk + 0)) = t33;
                u34 = *(float *)((t32 + 0x0));
                t32 = (t32 + 0x4);
                u35 = *(float *)((t32 + 0x0));
                t32 = (t32 + 0x4);
                if (u34 == 0.0f) {
                    t32 = (t32 + 0x4);
                    *(volatile int *)((t32 + 0x0));
                    t38 = ((int (*)(int, int))(FUN_0c187798))(t28, t30);
                    *(volatile int *)((t32 + 0x0));
                    t41 = ((int (*)(void))(FUN_0c187798))();
                    t32 = (t32 + 0x4);
                } else {
                    if (u35 == 0.0f) {
                        *(volatile int *)((t32 + 0x0));
                        t44 = ((int (*)(int, int))(FUN_0c187798))(t28, t30);
                        *(volatile int *)((t32 + 0x0));
                        t32 = (t32 + 0x4);
                        t47 = ((int (*)(void))(FUN_0c187798))();
                        t32 = (t32 + 0x4);
                    } else {
                        t48 = *(int *)((t32 + 0x0));
                        t32 = (t32 + 0x4);
                        t50 = *(int *)((t32 + 0x0));
                        t32 = (t32 + 0x4);
                        t28 = (((t48 << 1) + t48) << 2);
                        t30 = (((t50 << 1) + t50) << 2);
                        t30 = (t30 + 0xC3BB3E0);
                        t28 = (t28 + 0xC3BB3E0);
                        u54 = ((*(float *)((t30 + 0x0))) * u35);
                        u54 = u54 + u34 * (*(float *)((t28 + 0x0)));
                        *(float *)(((int)stk + 56)) = u54;
                        u57 = (((((struct o4_float *)(t30))->v)) * u35);
                        u57 = u57 + u34 * ((((struct o4_float *)(t28))->v));
                        *(float *)(((int)stk + 60)) = u57;
                        u60 = (((((struct o8_float *)(t30))->v)) * u35);
                        u60 = u60 + u34 * ((((struct o8_float *)(t28))->v));
                        t30 = (((t50 << 1) + t50) << 2);
                        t28 = (((t48 << 1) + t48) << 2);
                        t30 = (t30 + 0xC3BB9E0);
                        t28 = (t28 + 0xC3BB9E0);
                        *(float *)(((int)stk + 64)) = u60;
                        u63 = ((*(float *)((t30 + 0x0))) * u35);
                        u63 = u63 + u34 * (*(float *)((t28 + 0x0)));
                        *(float *)(((int)stk + 44)) = u63;
                        u66 = (((((struct o4_float *)(t30))->v)) * u35);
                        u66 = u66 + u34 * ((((struct o4_float *)(t28))->v));
                        *(float *)(((int)stk + 48)) = u66;
                        u69 = (((((struct o8_float *)(t30))->v)) * u35);
                        u69 = u69 + u34 * ((((struct o8_float *)(t28))->v));
                        *(float *)(((int)stk + 52)) = u69;
                        t85 = t28;
                        t86 = t30;
                    }
                }
                t28 = t85;
                t30 = t86;
                t30 = ((int)stk + 0);
                t28 = ((int)stk + 0);
                t30 = (t30 + 0x20);
                t28 = (t28 + 0x38);
                nlCalcPoint(t28, t30);
                t30 = ((int)stk + 0);
                t28 = ((int)stk + 0);
                t30 = (t30 + 0x14);
                t28 = (t28 + 0x2C);
                nlCalcVector(t28, t30);
                t28 = ((int)stk + 0);
                t28 = (t28 + 0x14);
                FUN_0c17c450(t28);
                t28 = (*(int *)(((int)stk + 0)));
                *(volatile int *)((a5 + 0x8));
                t28 = (t28 << 2);
                t99 = ((int (*)(int))(FUN_0c187798))(t28);
                *(volatile int *)((a5 + 0x8));
                t28 = t101;
                t102 = ((int (*)(int))(FUN_0c187798))(t28);
                t103 = *(int *)((a5 + 0x8));
                t31 = (t31 + 0x1);
                t30 = 0x1;
                t28 = t104;
                *(unsigned int *)((t28 + t103)) = ((*(int *)((t104 + t103))) | t30);
                if ((int)t31 < (int)t26) continue;
                break;
            }
            t106 = t103;
        }
        t112 = t106;
    }
    return t112;
}

int FUN_0c02fa8a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a6 != 0) {
        t0 = ((((a5 * 0x10E0) + ((0x444 + a4) + 0x24)) + (((((a7 << 2) << 1) + a7) << 2) << 2)) + 0x28);
        if (a6 != 1) {
            t1 = ((((0x21E4 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2)) + 0x28);
            if (a6 != 2) {
                t1 = ((((0x2784 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2)) + 0x28);
                if (a6 != 3) {
                    t1 = ((((0x2D24 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2)) + 0x28);
                    if (a6 != 4) {
                        t1 = 0x0;
                    }
                }
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t1 = ((*(int *)((((a7 << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
    }
    return t1;
}

int FUN_0c02fb24(int a4, int a5, int a6)
{
    int stk[18];
    register int t119;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t10;
    register int t14;
    register int t15;
    register int t26;
    register int t28;
    register int t29;
    register int t112;
    register int t32;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register float u38;
    register float u39;
    register int t42;
    register int t43;
    register int t46;
    register int t47;
    register int t50;
    register int t51;
    register int t54;
    register int t55;
    register int t56;
    register int t58;
    register float u62;
    register float u65;
    register float u68;
    register float u71;
    register float u74;
    register float u77;
    register int t105;
    register int t108;
    register int t109;
    register int t8;
    register int t9;
    register int t30;
    register int t31;
    register int t33;
    register int t91;
    register int t93;
    register int t94;
    register int t107;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (*(signed char *)((a4 + 0x371A)));
    t6 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0xA8));
    t119 = 0xA8;
    if (t6 == 0) {
    } else {
        t3 = *(int *)((a5 + 0xC));
        *(unsigned int *)(((int)stk + 0)) = 0xC3BB9E0;
        *(unsigned int *)(((int)stk + 16)) = (*(int *)((t3 + 0x0)));
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t5 = 0xA8;
        t7 = 0xC3BB3E0;
        t10 = (t3 + 0x4);
        for (;;) {
            if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)(((int)stk + 16)))) {
                break;
            }
            t8 = *(int *)((t10 + 0x0));
            t10 = (t10 + 0x4);
            t14 = *(int *)((t10 + 0x0));
            t10 = (t10 + 0x4);
            t15 = *(int *)((t10 + 0x0));
            t10 = (t10 + 0x4);
            *(unsigned int *)(((int)stk + 20)) = t15;
            t5 = (FUN_0c02fa8a((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), t14, t15));
            t6 = 0xC17B1A0;
            t5 = (((int (*)(int))(FUN_0c17b1a0))(t5));
            t9 = 0x0;
            if ((int)t8 > 0) {
                for (;;) {
                    t6 = 0xC17A870;
                    t5 = (nlCalcPoint(t10, t7));
                    t5 = (nlCalcVector((t10 + 0xC), (*(int *)(((int)stk + 0)))));
                    t6 = (*(int *)(((int)stk + 0)));
                    t9 = (t9 + 0x1);
                    t7 = (t7 + 0xC);
                    t6 = (t6 + 0xC);
                    t10 = (t10 + 0x18);
                    *(unsigned int *)(((int)stk + 0)) = t6;
                    if ((int)t9 >= (int)t8) {
                        break;
                    }
                }
            }
            t6 = (*(int *)(((int)stk + 8)));
            t6 = (t6 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t6;
        }
        t26 = ((int (*)(int, int, int))(FUN_0c17b1a0))((a5 + 0x28), a5, a6);
        t28 = *(int *)((a5 + 0x10));
        t29 = *(int *)((t28 + 0x0));
        t112 = (nlInvertMatrix(0x0));
        if ((int)t29 > 0) {
            t32 = t31;
            t34 = t33;
            t35 = 0x0;
            t36 = (t28 + 0x4);
            for (;;) {
                t37 = *(int *)((t36 + 0x0));
                t36 = (t36 + 0x4);
                u38 = *(float *)((t36 + 0x0));
                t36 = (t36 + 0x4);
                u39 = *(float *)((t36 + 0x0));
                t36 = (t36 + 0x4);
                if (u38 == 0.0f) {
                    t36 = (t36 + 0x4);
                    t30 = (*(int *)((t36 + 0x0)));
                    t42 = t30;
                    t30 = (t30 << 1);
                    t30 = (t30 + t42);
                    t30 = (t30 << 2);
                    t30 = (t30 + 0xC3BB3E0);
                    t43 = ((int (*)(int, int))(FUN_0c187798))(t32, t34);
                    t30 = (*(int *)((t36 + 0x0)));
                    t46 = t30;
                    t30 = (t30 << 1);
                    t30 = (t30 + t46);
                    t30 = (t30 << 2);
                    t30 = (t30 + 0xC3BB9E0);
                    t47 = ((int (*)(void))(FUN_0c187798))();
                    t36 = (t36 + 0x4);
                } else {
                    if (u39 == 0.0f) {
                        t30 = (*(int *)((t36 + 0x0)));
                        t50 = t30;
                        t30 = (t30 << 1);
                        t30 = (t30 + t50);
                        t30 = (t30 << 2);
                        t30 = (t30 + 0xC3BB3E0);
                        t51 = ((int (*)(int, int))(FUN_0c187798))(t32, t34);
                        t30 = *(int *)((t36 + 0x0));
                        t36 = (t36 + 0x4);
                        t54 = t30;
                        t30 = (t30 << 1);
                        t30 = (t30 + t54);
                        t30 = (t30 << 2);
                        t30 = (t30 + 0xC3BB9E0);
                        t55 = ((int (*)(void))(FUN_0c187798))();
                        t36 = (t36 + 0x4);
                    } else {
                        t56 = *(int *)((t36 + 0x0));
                        t36 = (t36 + 0x4);
                        t58 = *(int *)((t36 + 0x0));
                        t36 = (t36 + 0x4);
                        t32 = (((t56 << 1) + t56) << 2);
                        t34 = (((t58 << 1) + t58) << 2);
                        t34 = (t34 + 0xC3BB3E0);
                        t32 = (t32 + 0xC3BB3E0);
                        u62 = ((*(float *)((t34 + 0x0))) * u39);
                        u62 = u62 + u38 * (*(float *)((t32 + 0x0)));
                        *(float *)(((int)stk + 60)) = u62;
                        u65 = (((((struct o4_float *)(t34))->v)) * u39);
                        u65 = u65 + u38 * ((((struct o4_float *)(t32))->v));
                        *(float *)(((int)stk + 64)) = u65;
                        u68 = (((((struct o8_float *)(t34))->v)) * u39);
                        u68 = u68 + u38 * ((((struct o8_float *)(t32))->v));
                        t32 = (((t58 << 1) + t58) << 2);
                        t34 = (((t56 << 1) + t56) << 2);
                        t32 = (t32 + 0xC3BB9E0);
                        t34 = (t34 + 0xC3BB9E0);
                        *(float *)(((int)stk + 68)) = u68;
                        u71 = ((*(float *)((t32 + 0x0))) * u39);
                        u71 = u71 + u38 * (*(float *)((t34 + 0x0)));
                        *(float *)(((int)stk + 48)) = u71;
                        u74 = (((((struct o4_float *)(t32))->v)) * u39);
                        u74 = u74 + u38 * ((((struct o4_float *)(t34))->v));
                        *(float *)(((int)stk + 52)) = u74;
                        u77 = (((((struct o8_float *)(t32))->v)) * u39);
                        u77 = u77 + u38 * ((((struct o8_float *)(t34))->v));
                        *(float *)(((int)stk + 56)) = u77;
                        t91 = t30;
                        t93 = t32;
                        t94 = t34;
                    }
                }
                t30 = t91;
                t32 = t93;
                t34 = t94;
                t34 = ((int)stk + 0);
                t32 = ((int)stk + 0);
                t34 = (t34 + 0x24);
                t32 = (t32 + 0x3C);
                nlCalcPoint(t32, t34);
                t30 = 0xC17A8D0;
                t34 = ((int)stk + 0);
                t32 = ((int)stk + 0);
                t34 = (t34 + 0x18);
                t32 = (t32 + 0x30);
                nlCalcVector(t32, t34);
                *(volatile int *)((a5 + 0x8));
                t32 = t37;
                t30 = ((int)stk + 0);
                t32 = (t32 << 2);
                t30 = (t30 + 0x24);
                t105 = ((int (*)(int))(FUN_0c187798))(t32);
                *(volatile int *)((a5 + 0x8));
                t30 = ((int)stk + 0);
                t30 = (t30 + 0x18);
                t32 = t107;
                t108 = ((int (*)(int))(FUN_0c187798))(t32);
                t109 = *(int *)((a5 + 0x8));
                t35 = (t35 + 0x1);
                t34 = 0x1;
                t30 = (*(int *)((t32 + t109)));
                t30 = (t30 | t34);
                *(unsigned int *)((t32 + t109)) = t30;
                if ((int)t35 < (int)t29) continue;
                break;
            }
            t112 = t109;
        }
        t119 = t112;
    }
    return t119;
}
