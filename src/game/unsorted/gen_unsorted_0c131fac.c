/* game/unsorted: functions 0C131FAC-0C132546, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c131fac(int a4, int a5, int a6, int a7);
int FUN_0c13241a(int a4, int a5);

int FUN_0c131fac(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t5;
    register int t8;
    register float u14;
    register int t15;
    register int t17;
    register int t18;
    register int t19;
    register float u20;
    register int t23;
    register int t33;
    register int t42;
    register int t47;
    register int t49;
    register float u54;
    register int t55;
    register int t57;
    register int t58;
    register float u59;
    register int t62;
    register int t73;
    register int t82;
    register int t86;
    register int t100;
    register int t89;
    register int t90;
    register int t92;
    register int t96;
    register int t107;
    register int t108;
    register int t110;
    register int t114;
    register int t16;
    register float u21;
    register int t56;
    register float u60;
    register int t93;
    register int t94;
    register int t97;
    register int t98;
    register int t111;
    register int t112;
    register int t115;
    register int t116;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -0.5f);
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 0.0f);
                (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.333333343f);
                t5 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t5 + 0x1);
                t8 = (short)(t5 + 0x1);
                if ((int)(short)(t5 + 0x1) < (int)0x3D) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o7C_uint *)(t0))->v) = 0xE001;
                    *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
                    t8 = 0xD8;
                }
                return t8;
            }
            if (t1 == 3) {
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -2.74576283f);
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 5.62711859f);
                u14 = (((struct o74_float *)(t0))->v);
                (((struct o74_float *)(t0))->v) = (u14 + 3.72881365f);
                t15 = 0x406EA4E2;
                t17 = 0xC2A1524;
                t18 = 0xC;
                t19 = 0x4;
                u20 = (u14 + 3.72881365f);
                for (;;) {
                    if ((unsigned int)t19 >= (unsigned int)0x18) {
                        break;
                    }
                    t17 = 0xC2A156C;
                    t16 = (*(int *)((((0xC4 + a4) + t19) + 0x0)));
                    t17 = (t17 + t18);
                    *(int *)((int)stk + 0) = (0x78 + t16);
                    *(unsigned int *)(((int)stk + 4)) = (0xC2A15B4 + t18);
                    t23 = *(short *)((a4 + 0x1C));
                    t16 = t23;
                    u21 = ((*(float *)((t17 + 0x0))) - (*(float *)(((0xC2A15B4 + t18) + 0x0))));
                    u20 = (math_sin_angle16(((int)(((((float)(((t23 << 1) + t16) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    u21 = (u21 * u20);
                    t15 = (0x78 + t16);
                    u21 = (u21 * 65536.0f);
                    u21 = (u21 / 360.0f);
                    u21 = (u21 + 0.5f);
                    t16 = (int)u21;
                    t16 = (t16 & 0xFFFF);
                    *(unsigned int *)((t15 + 0x0)) = t16;
                    t16 = (*(int *)((((0xC4 + a4) + t19) + 0x0)));
                    *(int *)((int)stk + 0) = (0x7C + t16);
                    t15 = (*(int *)(((int)stk + 4)));
                    t33 = *(short *)((a4 + 0x1C));
                    t16 = t33;
                    u21 = (((((struct o4_float *)(t17))->v)) - ((((struct o4_float *)(t15))->v)));
                    u20 = (math_sin_angle16(((int)(((((float)(((t33 << 1) + t16) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    u21 = (u21 * u20);
                    t15 = (0x7C + t16);
                    u21 = (u21 * 65536.0f);
                    u21 = (u21 / 360.0f);
                    u21 = (u21 + 0.5f);
                    t16 = (int)u21;
                    t16 = (t16 & 0xFFFF);
                    *(unsigned int *)((t15 + 0x0)) = t16;
                    t16 = (*(int *)((((0xC4 + a4) + t19) + 0x0)));
                    *(int *)((int)stk + 0) = (0x80 + t16);
                    t15 = (*(int *)(((int)stk + 4)));
                    t42 = *(short *)((a4 + 0x1C));
                    t16 = t42;
                    u21 = (((((struct o8_float *)(t17))->v)) - ((((struct o8_float *)(t15))->v)));
                    u20 = (math_sin_angle16(((int)(((((float)(((t42 << 1) + t16) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    u21 = (u21 * u20);
                    t15 = (0x80 + t16);
                    t19 = (t19 + 0x4);
                    t18 = (t18 + 0xC);
                    u21 = (u21 * 65536.0f);
                    u21 = (u21 / 360.0f);
                    u21 = (u21 + 0.5f);
                    t16 = (int)u21;
                    t16 = (t16 & 0xFFFF);
                    *(unsigned int *)((t15 + 0x0)) = t16;
                }
                t47 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t47 + 0x1);
                t49 = (short)(t47 + 0x1);
                if ((int)(short)(t47 + 0x1) >= (int)0x78) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t49 = 0x14;
                }
                return t49;
            }
            return FUN_0c03f346(a4, a5, 0x0, a7);
        }
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -2.34545445f);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + -2.36363626f);
        u54 = (((struct o74_float *)(t0))->v);
        (((struct o74_float *)(t0))->v) = (u54 + 2.0181818f);
        t55 = 0x400129E4;
        t57 = 0xC;
        t58 = 0x4;
        u59 = (u54 + 2.0181818f);
        for (;;) {
            if ((unsigned int)t58 >= (unsigned int)0x18) {
                break;
            }
            t55 = 0xC2A156C;
            t56 = (*(int *)((((0xC4 + a4) + t58) + 0x0)));
            t55 = (t55 + t57);
            *(int *)((int)stk + 0) = (0x78 + t56);
            *(unsigned int *)(((int)stk + 8)) = t55;
            *(unsigned int *)(((int)stk + 4)) = (0xC2A15B4 + t57);
            t62 = *(short *)((a4 + 0x1C));
            t56 = t62;
            u60 = ((*(float *)((t55 + 0x0))) - (*(float *)(((0xC2A15B4 + t57) + 0x0))));
            u59 = (math_sin_angle16(((int)(((((float)(((t62 << 1) + t56) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
            u60 = (u60 * u59);
            t55 = (0x78 + t56);
            u60 = (u60 * 65536.0f);
            u60 = (u60 / 360.0f);
            u60 = (u60 + 0.5f);
            t56 = (int)u60;
            t56 = (t56 & 0xFFFF);
            *(unsigned int *)((t55 + 0x0)) = t56;
            t56 = (*(int *)((((0xC4 + a4) + t58) + 0x0)));
            *(int *)((int)stk + 0) = (0x7C + t56);
            t55 = (*(int *)(((int)stk + 8)));
            t73 = *(short *)((a4 + 0x1C));
            t56 = t73;
            u60 = (((((struct o4_float *)(t55))->v)) - ((((struct o4_float *)((*(int *)(((int)stk + 4)))))->v)));
            u59 = (math_sin_angle16(((int)(((((float)(((t73 << 1) + t56) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
            u60 = (u60 * u59);
            t55 = (0x7C + t56);
            u60 = (u60 * 65536.0f);
            u60 = (u60 / 360.0f);
            u60 = (u60 + 0.5f);
            t56 = (int)u60;
            t56 = (t56 & 0xFFFF);
            *(unsigned int *)((t55 + 0x0)) = t56;
            t56 = (*(int *)((((0xC4 + a4) + t58) + 0x0)));
            *(int *)((int)stk + 0) = (0x80 + t56);
            t55 = (*(int *)(((int)stk + 8)));
            t82 = *(short *)((a4 + 0x1C));
            t56 = t82;
            u60 = (((((struct o8_float *)(t55))->v)) - ((((struct o8_float *)((*(int *)(((int)stk + 4)))))->v)));
            u59 = (math_sin_angle16(((int)(((((float)(((t82 << 1) + t56) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
            u60 = (u60 * u59);
            t55 = (0x80 + t56);
            t58 = (t58 + 0x4);
            t57 = (t57 + 0xC);
            u60 = (u60 * 65536.0f);
            u60 = (u60 / 360.0f);
            u60 = (u60 + 0.5f);
            t56 = (int)u60;
            t56 = (t56 & 0xFFFF);
            *(unsigned int *)((t55 + 0x0)) = t56;
        }
        t86 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t86 + 0x1);
        t100 = (short)(t86 + 0x1);
        if ((int)(short)(t86 + 0x1) >= (int)0x37) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t89 = 0x4;
            t90 = 0xC;
            for (;;) {
                if ((unsigned int)t89 >= (unsigned int)0x18) {
                    break;
                }
                *(volatile int *)((((0xC4 + a4) + t89) + 0x0));
                t92 = ((int (*)(int, int, int))(FUN_0c187798))(t89, t90, 0x0);
                t90 = t93;
                t89 = t94;
                *(volatile int *)((((0xC4 + a4) + t94) + 0x0));
                t96 = ((int (*)(int, int))(FUN_0c187798))(t89, t90);
                t89 = (t97 + 0x4);
                t90 = (t98 + 0xC);
            }
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x1;
            t100 = 0xD8;
        }
        return t100;
    }
    (((struct o6C_float *)(t0))->v) = 179.0f;
    (((struct o70_float *)(t0))->v) = 139.0f;
    (((struct o74_float *)(t0))->v) = -99.0f;
    (((struct o7C_uint *)(t0))->v) = 0xDC73;
    t107 = 0x4;
    t108 = 0xC;
    for (;;) {
        if ((unsigned int)t107 >= (unsigned int)0x18) {
            break;
        }
        *(volatile int *)((((0xC4 + a4) + t107) + 0x0));
        t110 = ((int (*)(int, int, int))(FUN_0c187798))(t107, t108, 0x0);
        t108 = t111;
        t107 = t112;
        *(volatile int *)((((0xC4 + a4) + t112) + 0x0));
        t114 = ((int (*)(int, int))(FUN_0c187798))(t107, t108);
        t107 = (t115 + 0x4);
        t108 = (t116 + 0xC);
    }
    *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c13241a(int a4, int a5)
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
    register int t9;
    register int t10;
    register int t11;

    t0 = a4;
    t1 = a5;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)0x3) {
            break;
        }
        t3 = (*(signed char *)((a4 + 0x1)));
        t4 = 0xC037320;
        t1 = t3;
        t3 = 0xC4B40FC;
        t1 = (t1 << 2);
        t1 = (*(int *)((t1 + t3)));
        t0 = 0xE;
        t3 = (FUN_0c037320(t0, t1));
        t5 = 0xC03F444;
        t1 = 0x0;
        t0 = 0x5;
        t3 = (FUN_0c03f444(t0, t1, t3));
        t6 = t3;
        if (t3 != 0) {
            t3 = (*(signed char *)((a4 + 0x1)));
            t1 = 0xE;
            t4 = 0xC03733C;
            t7 = t3;
            t3 = 0xC4B40FC;
            t0 = t6;
            t3 = (FUN_0c03733c(t0, t1, (*(int *)(((t7 << 2) + t3)))));
            t3 = 0xA8;
            t4 = 0x5;
            t5 = 0x21;
            *(unsigned char *)((t6 + t3)) = 0x1;
            t3 = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t6 + 0x1)) = t3;
            t3 = 0xAC;
            *(unsigned short *)((t6 + t3)) = t4;
            t3 = (t3 - 3);
            *(unsigned char *)((t6 + t3)) = t5;
            t3 = 0x14;
            *(unsigned char *)((t6 + t3)) = 0x0;
            t3 = 0x15;
            *(unsigned char *)((t6 + t3)) = 0x0;
            t3 = 0x0;
            t7 = t6;
            t5 = a4;
            t4 = 0xC187798;
            t5 = (t5 + 0x28);
            *(unsigned short *)((t6 + 0x1C)) = t3;
            t7 = (t7 + 0x28);
            *(unsigned short *)((t6 + 0x1E)) = t3;
            t3 = 0xC;
            t3 = (FUN_0c187798());
            t5 = a4;
            t7 = t6;
            t5 = (t5 + 0x34);
            t7 = (t7 + 0x34);
            t3 = 0xC;
            t3 = (FUN_0c187798());
            t5 = 0xC2A1608;
            t7 = t6;
            t7 = (t7 + 0x40);
            t3 = 0xC;
            t3 = (FUN_0c187798());
            t3 = 0x3;
            t4 = 0xC18760C;
            t7 = t2;
            t3 = ((int)((int)t7 % (int)t3));
            t7 = t3;
            t2 = t3;
            t3 = 0xC2A14C8;
            t7 = (t7 << 2);
            t0 = 0x0;
            t4 = (*(int *)((t7 + t3)));
            *(unsigned int *)((t6 + 0x4)) = t4;
            for (;;) {
                t5 = 0xC4;
                t8 = t0;
                t8 = (t8 << 2);
                t5 = (t5 + t6);
                t5 = (t5 + t8);
                t4 = (*(int *)((t5 + 0x0)));
                t3 = 0x7;
                t5 = 0xC4;
                *(unsigned char *)((t4 + 0x0)) = 0x1;
                t5 = (t5 + t6);
                t5 = (t5 + t8);
                t4 = (*(int *)((t5 + 0x0)));
                *(unsigned short *)((t4 + 0x6)) = t3;
                if (t0 == 0) {
                    t5 = 0xC4;
                    t3 = 0x68;
                    t5 = (t5 + t6);
                    t5 = (t5 + t8);
                    t4 = (*(int *)((t5 + 0x0)));
                    *(unsigned int *)((t4 + t3)) = 0x0;
                } else {
                    t1 = 0xC4;
                    t1 = (t1 + t6);
                    t3 = t8;
                    t5 = (*(int *)((t1 + t3)));
                    t3 = 0xC2A14D4;
                    t3 = (*(signed char *)((t0 + t3)));
                    t3 = (t3 << 2);
                    t4 = (*(int *)((t1 + t3)));
                    t3 = 0x68;
                    t7 = t4;
                    t7 = (t7 + 0x28);
                    *(unsigned int *)((t5 + t3)) = t7;
                    t8 = t1;
                }
                t4 = 0x6;
                t1 = t8;
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)t4) {
                    break;
                }
            }
            t6 = t7;
            t8 = t5;
            t9 = t4;
            t10 = t0;
            t11 = t1;
        }
        t7 = t6;
        t2 = (t2 + 0x1);
        t5 = t8;
        t4 = t9;
        t0 = t10;
        t1 = t11;
    }
    return t3;
}
