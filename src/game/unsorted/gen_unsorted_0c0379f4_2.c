/* game/unsorted: functions 0C0379F4-0C037EC0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o114_int { char p[0x114]; int v; };
struct o84_uchar { char p[0x84]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_uchar { char p[0xA6]; unsigned char v; };
struct oA8_float { char p[0xA8]; float v; };
int FUN_0c0379f4(int, int, int);
int FUN_0c037a3c(int, int, int);
int FUN_0c037bf6(int a4, int a5, int a6);

int FUN_0c037bf6(int a4, int a5, int a6)
{
    int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t131;
    register int t134;
    register float u135;
    register float u136;
    register int t52;
    register int t59;
    register int t61;
    register int t76;
    register int t79;
    register int t0;
    int t1;
    register int t7;
    register int t8;
    register int t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register int t133;
    register float u128;
    register float u129;
    int t83;
    register float u121;
    register float u122;
    int t96;
    register float u114;
    register float u115;
    register int t146;
    register int t148;
    register int t149;
    register int t150;
    register int t151;
    register float u152;

    t2 = a4;
    t3 = a5;
    t4 = a6;
    t5 = 0x0;
    t6 = 0x0;
    for (;;) {
        if ((int)t5 < (int)((((struct o114_int *)(a4))->v))) {
            t1 = 0x118;
            t9 = t5;
            t9 = (t9 << 2);
            t1 = (t1 + a4);
            t9 = (t9 + t1);
            t9 = (*(int *)((t9 + 0x0)));
            t1 = (*(signed char *)(((t9 + 0x7E) + 0x0)));
            if ((int)t1 < 0) {
                t2 = 0xC4B4524;
                t8 = (*(int *)((t2 + 0x0)));
                t2 = 0xC4C0568;
                t7 = (*(int *)((t2 + 0x0)));
            } else {
                t2 = t9;
                t2 = (t2 + 0x7E);
                t2 = (*(signed char *)((t2 + 0x0)));
                t3 = 0xC4B4528;
                t2 = (t2 << 2);
                t8 = (*(int *)((t3 + t2)));
                t3 = 0xC4C0558;
                t7 = (*(int *)((t3 + t2)));
            }
            u12 = ((((struct o90_float *)(t9))->v));
            for (;;) {
                u14 = 1.0f;
                if (u12 > u14) {
                    u13 = u14;
                } else {
                    u13 = u12;
                }
                t1 = t9;
                t2 = t9;
                t2 = (t2 + 0x74);
                u11 = ((((struct o8C_float *)(t9))->v));
                t1 = (t1 + 0x78);
                t2 = (*(short *)((t2 + 0x0)));
                u12 = (u12 - u14);
                u11 = (u11 + u13);
                t3 = (*(int *)((t8 + 0x4)));
                t2 = (t2 + (*(short *)((t1 + 0x0))));
                t4 = t2;
                t2 = (t2 - 1);
                (((struct o8C_float *)(t9))->v) = u11;
                u10 = ((((struct o94_float *)(t9))->v));
                t4 = (t4 << 2);
                u11 = 0.0f;
                t4 = (t4 << 1);
                u10 = (u10 - u13);
                t2 = (t2 << 2);
                t2 = (t2 << 1);
                t4 = (t4 + t3);
                (((struct o94_float *)(t9))->v) = u10;
                u10 = ((((struct o94_float *)(t9))->v));
                t2 = (t2 + t3);
                t131 = t0;
                t134 = t4;
                u135 = u10;
                u136 = u11;
                if (u10 > u11) {
                    t133 = t3;
                } else {
                    t3 = 0x80;
                    if (((unsigned char)(*(signed char *)((t4 + 0x5))) & t3) != 0) {
                        t2 = t9;
                        t2 = (t2 + 0x74);
                        t1 = t9;
                        t1 = (t1 + 0x78);
                        t3 = t9;
                        *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                        t2 = t9;
                        t2 = (t2 + 0x78);
                        *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                        t52 = *(int *)((t4 + 0x0));
                        t4 = t9;
                        t4 = (t4 + 0x74);
                        *(unsigned short *)((t1 + 0x0)) = t52;
                        t1 = t9;
                        t1 = (t1 + 0x78);
                        t4 = (*(short *)((t4 + 0x0)));
                        u10 = ((((struct o94_float *)(t9))->v));
                        t4 = (t4 + (*(short *)((t1 + 0x0))));
                        t2 = (*(int *)((t8 + 0x4)));
                        t4 = (t4 << 2);
                        u10 = (-u10);
                        t4 = (t4 << 1);
                        (((struct o8C_float *)(t9))->v) = u10;
                        t4 = (t4 + t2);
                        t2 = t8;
                        t59 = FUN_0c0379f4(t2, t3, t4);
                        t2 = 0x0;
                        for (;;) {
                            t1 = t9;
                            t1 = (t1 + 0x78);
                            if ((int)t2 >= (int)(*(short *)((t1 + 0x0)))) {
                                break;
                            }
                            t1 = t9;
                            t1 = (t1 + 0x74);
                            t61 = *(short *)((t1 + 0x0));
                            t1 = (*(int *)((t8 + 0x4)));
                            t0 = 0x8C;
                            t59 = (*(signed char *)((((((t61 + t2) << 2) << 1) + t1) + 0x4)));
                            t0 = (t0 + t9);
                            u10 = (*(float *)((t0 + 0x0)));
                            t2 = (t2 + 0x1);
                            t1 = (unsigned char)t59;
                            u11 = (float)t1;
                            u10 = (u10 + u11);
                            *(float *)((t0 + 0x0)) = u10;
                        }
                        u11 = ((((struct o8C_float *)(t9))->v));
                        t2 = (int)u11;
                        (((struct oA6_uchar *)(t9))->v) = 0x0;
                        for (;;) {
                            t1 = ((((struct oA4_short *)(t9))->v));
                            t1 = (unsigned short)t1;
                            t1 = (t1 + (unsigned char)(*(signed char *)((t9 + 0xA6))));
                            t1 = (t1 << 2);
                            t1 = (t1 + (*(int *)((t7 + 0x4))));
                            if ((int)((unsigned char)(*(signed char *)((t1 + 0x2))) + 0x1) >= (int)t2) {
                                break;
                            }
                            (((struct oA6_uchar *)(t9))->v) = ((*(signed char *)((t9 + 0xA6))) + 0x1);
                        }
                        t1 = (*(signed char *)((t9 + 0xA6)));
                        t1 = (unsigned char)t1;
                        t76 = ((unsigned short)((((struct oA4_short *)(t9))->v)) + t1);
                        t1 = (*(int *)((t7 + 0x4)));
                        t1 = (unsigned char)(*(signed char *)((((t76 << 2) + t1) + 0x2)));
                        t79 = t1;
                        t1 = t9;
                        t1 = (t1 + 0x78);
                        u11 = (float)t79;
                        u11 = (u11 + u14);
                        (((struct oA8_float *)(t9))->v) = u11;
                        *(unsigned short *)((t1 + 0x0)) = ((*(short *)((t1 + 0x0))) + 0x1);
                        t1 = 0x80;
                        (((struct o84_uchar *)(t9))->v) = ((*(signed char *)((t9 + 0x84))) | t1);
                        t6 = (t6 | t1);
                        u129 = u11;
                    } else {
                        t1 = t9;
                        t1 = (t1 + 0x78);
                        if (((*(short *)((t1 + 0x0))) != 0) && (t83 = *(signed char *)((t2 + 0x5)), ((unsigned char)t83 & 64) != 0)) {
                            t2 = t9;
                            t2 = (t2 + 0x74);
                            *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                            t2 = t9;
                            t2 = (t2 + 0x78);
                            *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                            t2 = t9;
                            t2 = (t2 + 0x68);
                            t1 = (*(int *)((t2 + 0x4)));
                            *(unsigned int *)((t2 + 0x8)) = t1;
                            t2 = t9;
                            t2 = (t2 + 0x68);
                            *(unsigned int *)((t2 + 0x4)) = (*(int *)((t2 + 0x0)));
                            t1 = 0x40;
                            u11 = ((((struct o94_float *)(t9))->v));
                            u11 = (u11 + u13);
                            (((struct o94_float *)(t9))->v) = u11;
                            u10 = ((((struct o8C_float *)(t9))->v));
                            u10 = (u10 - u13);
                            (((struct o8C_float *)(t9))->v) = u10;
                            (((struct o84_uchar *)(t9))->v) = ((*(signed char *)((t9 + 0x84))) | t1);
                            t6 = (t6 | t1);
                            t131 = t0;
                            t133 = t3;
                            t134 = t4;
                            u121 = u10;
                            u122 = u11;
                        } else {
                            t1 = t9;
                            t1 = (t1 + 0x78);
                            if (((*(short *)((t1 + 0x0))) == 0) && (t96 = *(signed char *)((t4 + 0x5)), ((unsigned char)t96 & 64) != 0)) {
                                t3 = t9;
                                t2 = t8;
                                FUN_0c0379f4(t2, t3, t4);
                                t2 = t9;
                                t2 = (t2 + 0x74);
                                *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                                t2 = t9;
                                t2 = (t2 + 0x78);
                                *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                                t1 = 0x40;
                                u11 = ((((struct o94_float *)(t9))->v));
                                u11 = (u11 + u13);
                                (((struct o94_float *)(t9))->v) = u11;
                                u10 = ((((struct o8C_float *)(t9))->v));
                                u10 = (u10 - u13);
                                (((struct o8C_float *)(t9))->v) = u10;
                                (((struct o84_uchar *)(t9))->v) = ((*(signed char *)((t9 + 0x84))) | t1);
                                t6 = (t6 | t1);
                                u114 = u10;
                                u115 = u11;
                            } else {
                                t3 = t9;
                                t2 = t8;
                                FUN_0c0379f4(t2, t3, t4);
                                t2 = t9;
                                t2 = (t2 + 0x74);
                                t1 = t9;
                                t1 = (t1 + 0x78);
                                *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                                t2 = t9;
                                t2 = (t2 + 0x78);
                                *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                                t2 = 0x40;
                                *(unsigned short *)((t1 + 0x0)) = ((*(short *)((t1 + 0x0))) + 0x1);
                                t1 = (*(signed char *)((t9 + (t2 + 0x44))));
                                t1 = (unsigned char)t1;
                                if ((t1 & t2) != 0) {
                                    t1 = 0x84;
                                    t1 = (t1 + 0x3B);
                                    (((struct o84_uchar *)(t9))->v) = ((*(signed char *)((t9 + 0x84))) & t1);
                                }
                            }
                            u121 = u114;
                            u122 = u115;
                        }
                        u128 = u121;
                        u129 = u122;
                    }
                    u135 = u128;
                    u136 = u129;
                }
                u10 = u135;
                u11 = u136;
                t0 = t131;
                t3 = t133;
                t4 = t134;
                u11 = ((((struct oA8_float *)(t9))->v));
                u10 = ((((struct o8C_float *)(t9))->v));
                if (u10 > u11) {
                    t3 = t9;
                    (((struct oA6_uchar *)(t9))->v) = ((*(signed char *)((t9 + 0xA6))) + 0x1);
                    t4 = ((((struct oA4_short *)(t9))->v));
                    t1 = (*(signed char *)((t9 + 0xA6)));
                    t4 = (unsigned short)t4;
                    t1 = (unsigned char)t1;
                    t4 = (t4 + t1);
                    t1 = (*(int *)((t7 + 0x4)));
                    t4 = (t4 << 2);
                    t4 = (t4 + t1);
                    t2 = a4;
                    FUN_0c037a3c(t2, t3, t4);
                } else {
                    t146 = t0;
                    t148 = t1;
                    t149 = t2;
                    t150 = t3;
                    t151 = t4;
                    u152 = u10;
                }
                u10 = u152;
                u11 = 0.0f;
                t0 = t146;
                t1 = t148;
                t2 = t149;
                t3 = t150;
                t4 = t151;
                if (u12 > u11) continue;
                break;
            }
            t5 = (t5 + 0x1);
            continue;
        }
        break;
    }
    return t6;
}
