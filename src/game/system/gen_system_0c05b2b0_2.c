/* game/system: functions 0C05B2B0-0C05B768, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int FUN_0c0102da(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c02c96a(void);
extern int FUN_0c02e9d4();
int FUN_0c0300da(void);
int FUN_0c03036c(void);
int FUN_0c030c94(int);
int FUN_0c03ac42(void);
int FUN_0c03ad28(void);
int thunk_FUN_0c03e600(void);
int FUN_0c03ec80(void);
int cam_init_records(void);
int FUN_0c0524bc(void);
int ui_sprite_queue_reset(void);
int FUN_0c05a0b8(void);
int FUN_0c05a812(void);
int game_reset_objects(void);
int FUN_0c05b122(int);
int FUN_0c05b2da(void);
int FUN_0c05b30e(int);
int FUN_0c05b490(void);
int FUN_0c05b4ba(void);
int FUN_0c05ba86(void);
int FUN_0c05c158(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c05c71c(void);
int FUN_0c05e13a(void);
int FUN_0c05e51c(void);
int FUN_0c05ee64(void);
int FUN_0c05f3d4(void);
int FUN_0c05f436(void);
int FUN_0c05f842(int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d05f2(void);
int FUN_0c100cbc(void);
int FUN_0c121412(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c05b494(void);
int FUN_0c05b4e4(void);

int FUN_0c05b494(void)
{
    (((struct o0_uchar *)0xC541F65)->v) = 0x1;
    (((struct o0_uchar *)0xC5429B4)->v) = 0x0;
    (((struct o1_uchar *)0xC5429B4)->v) = 0x1;
    (((struct o2_uchar *)0xC5429B4)->v) = 0x1;
    FUN_0c0d05f2();
    (((struct oC_uchar *)0xC541F65)->v) = 0x1;
    return FUN_0c05b490();
}

int FUN_0c05b4e4(void)
{
    int stk[5];
    register int t0;
    register int t13;
    register int t16;
    register int t17;
    register int t21;
    register int t22;
    register int t23;
    register int t27;
    register int t28;
    register int t29;
    register int t31;
    register int t32;
    register int t33;
    register int t35;
    register int t36;
    register int t37;
    register int t44;
    register int t45;
    register int t50;
    register int t51;
    register int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t59;
    register int t60;
    register int t64;
    register int t65;
    register int t66;
    register int t68;
    int t70;
    register int t78;
    register int t79;
    register int t84;
    register int t85;
    register int t86;
    register int t109;
    register int t112;
    register int t113;
    register int t117;
    register int t118;
    register int t119;
    register int t123;
    register int t124;
    register int t125;
    register int t127;
    register int t128;
    register int t129;
    register int t131;
    register int t132;
    register int t133;
    register int t140;
    register int t141;
    register int t146;
    register int t147;
    register int t148;
    register int t149;
    register int t150;
    register int t151;
    register int t155;
    register int t156;
    register int t160;
    register int t161;
    register int t162;
    register int t164;
    int t166;
    register int t174;
    register int t175;
    register int t180;
    register int t181;
    register int t182;

    t0 = *(signed char *)0xC541F3C;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        if ((unsigned char)(*(signed char *)0xC541F3D) != 7) {
            FUN_0c0300da();
            FUN_0c05e13a();
            FUN_0c05b4ba();
            FUN_0c03ad28();
        } else {
            FUN_0c05a812();
        }
        *(unsigned int *)(((int)stk + 0)) = (unsigned char)(*(signed char *)0xC541F3D);
        if ((*(signed char *)0xC54208F) != 0) {
            t13 = *(int *)(((int)stk + 0));
            if (t13 != 99) {
                return ((int (*)(int))(FUN_0c02e9d4))(0xC541F3D);
            }
            *(unsigned int *)0xC542434 = 0x1;
            return t13;
        }
        if ((*(signed char *)0xC542092) != 0) {
            t16 = *(int *)(((int)stk + 0));
            if (t16 != 99) {
                return ((int (*)(int))(FUN_0c02e9d4))(0xC541F3D);
            }
            *(unsigned int *)0xC542434 = 0x1;
            return t16;
        }
        t17 = *(signed char *)0xC541F3D;
        if ((unsigned char)t17 != 0) {
            if ((unsigned char)t17 != 2) {
                if ((unsigned char)t17 != 1) {
                    if ((unsigned char)t17 != 3) {
                        if ((unsigned char)t17 != 4) {
                            if ((unsigned char)t17 == 5) {
                                FUN_0c121412(0xC541F3D, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                                FUN_0c0524bc();
                                FUN_0c03ec80();
                                t21 = FUN_0c05b30e(0x1);
                                if (t21 == 0) {
                                    t22 = FUN_0c05b2da();
                                    if (t22 == 0) {
                                        t23 = *(int *)(((int)stk + 0));
                                        if (t23 != 99) {
                                            return ((int (*)(void))(FUN_0c02e9d4))();
                                        }
                                        *(unsigned int *)0xC542434 = 0x1;
                                        return t23;
                                    }
                                    return t22;
                                }
                                return t21;
                            }
                            if ((unsigned char)t17 == 6) {
                                FUN_0c0102da(0xC541F3D, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                                FUN_0c0524bc();
                                FUN_0c03ec80();
                                t27 = FUN_0c05b30e(0x1);
                                if (t27 == 0) {
                                    t28 = FUN_0c05b2da();
                                    if (t28 == 0) {
                                        t29 = *(int *)(((int)stk + 0));
                                        if (t29 != 99) {
                                            return ((int (*)(void))(FUN_0c02e9d4))();
                                        }
                                        *(unsigned int *)0xC542434 = 0x1;
                                        return t29;
                                    }
                                    return t28;
                                }
                                return t27;
                            }
                            if ((unsigned char)t17 == 7) {
                                FUN_0c02c96a();
                                t31 = FUN_0c05b30e(0x1);
                                if (t31 == 0) {
                                    t32 = FUN_0c05b2da();
                                    if (t32 == 0) {
                                        t33 = *(int *)(((int)stk + 0));
                                        if (t33 != 99) {
                                            return ((int (*)(void))(FUN_0c02e9d4))();
                                        }
                                        *(unsigned int *)0xC542434 = 0x1;
                                        return t33;
                                    }
                                    return t32;
                                }
                                return t31;
                            }
                            if ((unsigned char)t17 == 10) {
                                FUN_0c05f436();
                                t35 = FUN_0c05b30e(0x1);
                                if (t35 == 0) {
                                    t36 = FUN_0c05b2da();
                                    if (t36 == 0) {
                                        t37 = *(int *)(((int)stk + 0));
                                        if (t37 != 99) {
                                            return ((int (*)(void))(FUN_0c02e9d4))();
                                        }
                                        *(unsigned int *)0xC542434 = 0x1;
                                        return t37;
                                    }
                                    return t36;
                                }
                                return t35;
                            }
                            if ((unsigned char)t17 == 99) {
                                FUN_0c05f842(0xC541F3D, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
                            }
                            t44 = FUN_0c05b2da();
                            if (t44 == 0) {
                                t45 = *(int *)(((int)stk + 0));
                                if (t45 != 99) {
                                    return ((int (*)(void))(FUN_0c02e9d4))();
                                }
                                *(unsigned int *)0xC542434 = 0x1;
                                return t45;
                            }
                            return t44;
                        }
                        FUN_0c05ee64();
                        FUN_0c0524bc();
                        FUN_0c03ec80();
                        if ((unsigned char)(*(signed char *)0xC541F41) == 6) {
                            t50 = FUN_0c05b30e(0x1);
                            if (t50 != 0) {
                                return FUN_0c100cbc();
                            }
                            t51 = FUN_0c05b2da();
                            if (t51 == 0) {
                                t52 = *(int *)(((int)stk + 0));
                                if (t52 != 99) {
                                    return ((int (*)(void))(FUN_0c02e9d4))();
                                }
                                *(unsigned int *)0xC542434 = 0x1;
                                return t52;
                            }
                            return t51;
                        }
                        t53 = FUN_0c05b30e(0x1);
                        if (t53 == 0) {
                            t54 = FUN_0c05b2da();
                            if (t54 == 0) {
                                t55 = *(int *)(((int)stk + 0));
                                if (t55 != 99) {
                                    return ((int (*)(void))(FUN_0c02e9d4))();
                                }
                                *(unsigned int *)0xC542434 = 0x1;
                                return t55;
                            }
                            return t54;
                        }
                        return t53;
                    }
                    FUN_0c05e51c();
                    FUN_0c0524bc();
                    FUN_0c03ec80();
                    t59 = FUN_0c05b2da();
                    if (t59 == 0) {
                        t60 = *(int *)(((int)stk + 0));
                        if (t60 != 99) {
                            return ((int (*)(void))(FUN_0c02e9d4))();
                        }
                        *(unsigned int *)0xC542434 = 0x1;
                        return t60;
                    }
                    return t59;
                }
                FUN_0c05c71c();
                FUN_0c0524bc();
                FUN_0c03ec80();
                t64 = FUN_0c05b30e(0x0);
                if (t64 == 0) {
                    t65 = FUN_0c05b2da();
                    if (t65 == 0) {
                        t66 = *(int *)(((int)stk + 0));
                        if (t66 != 99) {
                            return ((int (*)(void))(FUN_0c02e9d4))();
                        }
                        *(unsigned int *)0xC542434 = 0x1;
                        return t66;
                    }
                    return t65;
                }
                return t64;
            }
            FUN_0c05f3d4();
            t68 = FUN_0c05b30e(0x1);
            if (t68 != 0) {
                return t68;
            }
            t70 = *(signed char *)0xC5429B4;
            if ((t70 != 0) && (t70 != 4)) {
            } else {
                FUN_0c030c94(t70);
            }
            FUN_0c05ba86();
            FUN_0c0524bc();
            FUN_0c03ec80();
            t78 = FUN_0c05b2da();
            if (t78 == 0) {
                t79 = *(int *)(((int)stk + 0));
                if (t79 != 99) {
                    return ((int (*)(void))(FUN_0c02e9d4))();
                }
                *(unsigned int *)0xC542434 = 0x1;
                return t79;
            }
            return t78;
        }
        FUN_0c03036c();
        FUN_0c05c158(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c0524bc();
        FUN_0c03ec80();
        t84 = FUN_0c05b30e(0x0);
        if (t84 != 0) {
            return t84;
        }
        t85 = FUN_0c05b2da();
        if (t85 == 0) {
            t86 = *(int *)(((int)stk + 0));
            if (t86 != 99) {
                return ((int (*)(void))(FUN_0c02e9d4))();
            }
            *(unsigned int *)0xC542434 = 0x1;
            return t86;
        }
        return t85;
    }
    (((struct o0_uchar *)0xC541F3C)->v) = ((*(signed char *)0xC541F3C) + 0x1);
    (((struct o1_uchar *)0xC541F3C)->v) = 0x0;
    FUN_0c05b494();
    cam_init_records();
    thunk_FUN_0c03e600();
    FUN_0c05a0b8();
    game_reset_objects();
    FUN_0c05b122((*(signed char *)0xC541F68));
    ui_sprite_queue_reset();
    FUN_0c03ac42();
    if ((unsigned char)(*(signed char *)0xC541F3D) != 7) {
        FUN_0c0300da();
        FUN_0c05e13a();
        FUN_0c05b4ba();
        FUN_0c03ad28();
    } else {
        FUN_0c05a812();
    }
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)(*(signed char *)0xC541F3D);
    if ((*(signed char *)0xC54208F) != 0) {
        t109 = *(int *)(((int)stk + 0));
        if (t109 != 99) {
            return ((int (*)(int))(FUN_0c02e9d4))(0xC541F3D);
        }
        *(unsigned int *)0xC542434 = 0x1;
        return t109;
    }
    if ((*(signed char *)0xC542092) != 0) {
        t112 = *(int *)(((int)stk + 0));
        if (t112 != 99) {
            return ((int (*)(int))(FUN_0c02e9d4))(0xC541F3D);
        }
        *(unsigned int *)0xC542434 = 0x1;
        return t112;
    }
    t113 = *(signed char *)0xC541F3D;
    if ((unsigned char)t113 != 0) {
        if ((unsigned char)t113 != 2) {
            if ((unsigned char)t113 != 1) {
                if ((unsigned char)t113 != 3) {
                    if ((unsigned char)t113 != 4) {
                        if ((unsigned char)t113 == 5) {
                            FUN_0c121412(0xC541F3D, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                            FUN_0c0524bc();
                            FUN_0c03ec80();
                            t117 = FUN_0c05b30e(0x1);
                            if (t117 == 0) {
                                t118 = FUN_0c05b2da();
                                if (t118 == 0) {
                                    t119 = *(int *)(((int)stk + 0));
                                    if (t119 != 99) {
                                        return ((int (*)(void))(FUN_0c02e9d4))();
                                    }
                                    *(unsigned int *)0xC542434 = 0x1;
                                    return t119;
                                }
                                return t118;
                            }
                            return t117;
                        }
                        if ((unsigned char)t113 == 6) {
                            FUN_0c0102da(0xC541F3D, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                            FUN_0c0524bc();
                            FUN_0c03ec80();
                            t123 = FUN_0c05b30e(0x1);
                            if (t123 == 0) {
                                t124 = FUN_0c05b2da();
                                if (t124 == 0) {
                                    t125 = *(int *)(((int)stk + 0));
                                    if (t125 != 99) {
                                        return ((int (*)(void))(FUN_0c02e9d4))();
                                    }
                                    *(unsigned int *)0xC542434 = 0x1;
                                    return t125;
                                }
                                return t124;
                            }
                            return t123;
                        }
                        if ((unsigned char)t113 == 7) {
                            FUN_0c02c96a();
                            t127 = FUN_0c05b30e(0x1);
                            if (t127 == 0) {
                                t128 = FUN_0c05b2da();
                                if (t128 == 0) {
                                    t129 = *(int *)(((int)stk + 0));
                                    if (t129 != 99) {
                                        return ((int (*)(void))(FUN_0c02e9d4))();
                                    }
                                    *(unsigned int *)0xC542434 = 0x1;
                                    return t129;
                                }
                                return t128;
                            }
                            return t127;
                        }
                        if ((unsigned char)t113 == 10) {
                            FUN_0c05f436();
                            t131 = FUN_0c05b30e(0x1);
                            if (t131 == 0) {
                                t132 = FUN_0c05b2da();
                                if (t132 == 0) {
                                    t133 = *(int *)(((int)stk + 0));
                                    if (t133 != 99) {
                                        return ((int (*)(void))(FUN_0c02e9d4))();
                                    }
                                    *(unsigned int *)0xC542434 = 0x1;
                                    return t133;
                                }
                                return t132;
                            }
                            return t131;
                        }
                        if ((unsigned char)t113 == 99) {
                            FUN_0c05f842(0xC541F3D, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
                        }
                        t140 = FUN_0c05b2da();
                        if (t140 == 0) {
                            t141 = *(int *)(((int)stk + 0));
                            if (t141 != 99) {
                                return ((int (*)(void))(FUN_0c02e9d4))();
                            }
                            *(unsigned int *)0xC542434 = 0x1;
                            return t141;
                        }
                        return t140;
                    }
                    FUN_0c05ee64();
                    FUN_0c0524bc();
                    FUN_0c03ec80();
                    if ((unsigned char)(*(signed char *)0xC541F41) == 6) {
                        t146 = FUN_0c05b30e(0x1);
                        if (t146 != 0) {
                            return FUN_0c100cbc();
                        }
                        t147 = FUN_0c05b2da();
                        if (t147 == 0) {
                            t148 = *(int *)(((int)stk + 0));
                            if (t148 != 99) {
                                return ((int (*)(void))(FUN_0c02e9d4))();
                            }
                            *(unsigned int *)0xC542434 = 0x1;
                            return t148;
                        }
                        return t147;
                    }
                    t149 = FUN_0c05b30e(0x1);
                    if (t149 == 0) {
                        t150 = FUN_0c05b2da();
                        if (t150 == 0) {
                            t151 = *(int *)(((int)stk + 0));
                            if (t151 != 99) {
                                return ((int (*)(void))(FUN_0c02e9d4))();
                            }
                            *(unsigned int *)0xC542434 = 0x1;
                            return t151;
                        }
                        return t150;
                    }
                    return t149;
                }
                FUN_0c05e51c();
                FUN_0c0524bc();
                FUN_0c03ec80();
                t155 = FUN_0c05b2da();
                if (t155 == 0) {
                    t156 = *(int *)(((int)stk + 0));
                    if (t156 != 99) {
                        return ((int (*)(void))(FUN_0c02e9d4))();
                    }
                    *(unsigned int *)0xC542434 = 0x1;
                    return t156;
                }
                return t155;
            }
            FUN_0c05c71c();
            FUN_0c0524bc();
            FUN_0c03ec80();
            t160 = FUN_0c05b30e(0x0);
            if (t160 == 0) {
                t161 = FUN_0c05b2da();
                if (t161 == 0) {
                    t162 = *(int *)(((int)stk + 0));
                    if (t162 != 99) {
                        return ((int (*)(void))(FUN_0c02e9d4))();
                    }
                    *(unsigned int *)0xC542434 = 0x1;
                    return t162;
                }
                return t161;
            }
            return t160;
        }
        FUN_0c05f3d4();
        t164 = FUN_0c05b30e(0x1);
        if (t164 != 0) {
            return t164;
        }
        t166 = *(signed char *)0xC5429B4;
        if ((t166 != 0) && (t166 != 4)) {
        } else {
            FUN_0c030c94(t166);
        }
        FUN_0c05ba86();
        FUN_0c0524bc();
        FUN_0c03ec80();
        t174 = FUN_0c05b2da();
        if (t174 == 0) {
            t175 = *(int *)(((int)stk + 0));
            if (t175 != 99) {
                return ((int (*)(void))(FUN_0c02e9d4))();
            }
            *(unsigned int *)0xC542434 = 0x1;
            return t175;
        }
        return t174;
    }
    FUN_0c03036c();
    FUN_0c05c158(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c0524bc();
    FUN_0c03ec80();
    t180 = FUN_0c05b30e(0x0);
    if (t180 != 0) {
        return t180;
    }
    t181 = FUN_0c05b2da();
    if (t181 == 0) {
        t182 = *(int *)(((int)stk + 0));
        if (t182 != 99) {
            return ((int (*)(void))(FUN_0c02e9d4))();
        }
        *(unsigned int *)0xC542434 = 0x1;
        return t182;
    }
    return t181;
}
