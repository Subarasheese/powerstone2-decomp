/* game/player: functions 0C16F7FC-0C1717A4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c16f890(int, int, int, int, int);
extern int FUN_0c16fad0();
int FUN_0c17a4c0(int, int);
int FUN_0c17a550(int);
int dbg_printf(int, ...);
int FUN_0c16fbd0(int a4, int a5);

int FUN_0c16fbd0(int a4, int a5)
{
    int stk[4];
    register int t0;
    register int t3;
    register int t61;
    register int t19;
    register int t21;
    register int t27;
    register int t29;
    register int t44;
    register int t46;
    register int t63;
    register int t67;
    register int t68;
    register int t84;
    register int t86;
    register int t92;
    register int t94;
    register int t109;
    register int t111;
    register int t128;
    register int t145;
    register int t169;
    register int t179;
    register int t126;

    t0 = (((struct o4_int *)0xC475A64)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            t179 = t0;
            if (t0 != 2) {
            } else {
                (((struct o0_uint *)0xC475A64)->v) = 0x0;
                t179 = (((struct o0_int *)0xC475AAC)->v);
                if (t179 != 0) {
                    if (t179 != 1) {
                    } else {
                        t3 = (((struct o8_int *)0xC475A64)->v);
                        t61 = a5;
                        if (t3 != 0) {
                            if (t3 != 1) {
                                t61 = a5;
                                if (t3 != 2) {
                                } else {
                                    if (((((struct o4_int *)0xC475AAC)->v)) == 0) {
                                        if (((((struct o2C_int *)0xC475A64)->v)) == 0) {
                                            t19 = (((struct o30_int *)0xC475A64)->v);
                                            (((struct o30_uint *)0xC475A64)->v) = (t19 - 1);
                                            if ((int)(t19 - 1) < 0) {
                                                (((struct o30_uint *)0xC475A64)->v) = 0xF;
                                            }
                                        } else {
                                            t21 = (((struct o34_int *)0xC475A64)->v);
                                            (((struct o34_uint *)0xC475A64)->v) = (t21 - 1);
                                            if ((int)(t21 - 1) < 0) {
                                                (((struct o34_uint *)0xC475A64)->v) = 0x10;
                                            }
                                        }
                                    } else {
                                        if (((((struct o2C_int *)0xC475A64)->v)) == 0) {
                                            t27 = (((struct o30_int *)0xC475A64)->v);
                                            (((struct o30_uint *)0xC475A64)->v) = (t27 + 0x1);
                                            if ((int)(t27 + 0x1) > (int)0xF) {
                                                (((struct o30_uint *)0xC475A64)->v) = 0x0;
                                            }
                                        } else {
                                            t29 = (((struct o34_int *)0xC475A64)->v);
                                            (((struct o34_uint *)0xC475A64)->v) = (t29 + 0x1);
                                            if ((int)(t29 + 0x1) > (int)0x10) {
                                                (((struct o34_uint *)0xC475A64)->v) = 0x0;
                                            }
                                        }
                                    }
                                    t61 = 0x10;
                                }
                            } else {
                                if (((((struct o4_int *)0xC475AAC)->v)) == 0) {
                                    t44 = (((struct o2C_int *)0xC475A64)->v);
                                    (((struct o2C_uint *)0xC475A64)->v) = (t44 - 1);
                                    if ((int)(t44 - 1) < 0) {
                                        (((struct o2C_uint *)0xC475A64)->v) = 0x2;
                                    }
                                } else {
                                    t46 = (((struct o2C_int *)0xC475A64)->v);
                                    (((struct o2C_uint *)0xC475A64)->v) = (t46 + 0x1);
                                    if ((int)(t46 + 0x1) > (int)0x2) {
                                        (((struct o2C_uint *)0xC475A64)->v) = 0x0;
                                    }
                                }
                                t61 = a5;
                            }
                        }
                        t63 = ((int (*)(int, int))(FUN_0c16fad0))(0x1, t61);
                        (((struct o8_uint *)0xC475AAC)->v) = 0x0;
                        (((struct o38_uint *)0xC475A64)->v) = 0x0;
                        t179 = 0x50;
                    }
                } else {
                    t67 = ((int (*)(int))(FUN_0c16fad0))(0x0);
                    t68 = (((struct o8_int *)0xC475A64)->v);
                    if (t68 != 0) {
                        if (t68 != 1) {
                            if (t68 != 2) {
                            } else {
                                if (((((struct o4_int *)0xC475AAC)->v)) == 0) {
                                    if (((((struct o2C_int *)0xC475A64)->v)) == 0) {
                                        t84 = (((struct o30_int *)0xC475A64)->v);
                                        (((struct o30_uint *)0xC475A64)->v) = (t84 - 1);
                                        if ((int)(t84 - 1) < 0) {
                                            (((struct o30_uint *)0xC475A64)->v) = 0xF;
                                        }
                                    } else {
                                        t86 = (((struct o34_int *)0xC475A64)->v);
                                        (((struct o34_uint *)0xC475A64)->v) = (t86 - 1);
                                        if ((int)(t86 - 1) < 0) {
                                            (((struct o34_uint *)0xC475A64)->v) = 0x10;
                                        }
                                    }
                                } else {
                                    if (((((struct o2C_int *)0xC475A64)->v)) == 0) {
                                        t92 = (((struct o30_int *)0xC475A64)->v);
                                        (((struct o30_uint *)0xC475A64)->v) = (t92 + 0x1);
                                        if ((int)(t92 + 0x1) > (int)0xF) {
                                            (((struct o30_uint *)0xC475A64)->v) = 0x0;
                                        }
                                    } else {
                                        t94 = (((struct o34_int *)0xC475A64)->v);
                                        (((struct o34_uint *)0xC475A64)->v) = (t94 + 0x1);
                                        if ((int)(t94 + 0x1) > (int)0x10) {
                                            (((struct o34_uint *)0xC475A64)->v) = 0x0;
                                        }
                                    }
                                }
                                t126 = 0x10;
                            }
                        } else {
                            if (((((struct o4_int *)0xC475AAC)->v)) == 0) {
                                t109 = (((struct o2C_int *)0xC475A64)->v);
                                (((struct o2C_uint *)0xC475A64)->v) = (t109 - 1);
                                if ((int)(t109 - 1) < 0) {
                                    (((struct o2C_uint *)0xC475A64)->v) = 0x2;
                                }
                            } else {
                                t111 = (((struct o2C_int *)0xC475A64)->v);
                                (((struct o2C_uint *)0xC475A64)->v) = (t111 + 0x1);
                                if ((int)(t111 + 0x1) > (int)0x2) {
                                    (((struct o2C_uint *)0xC475A64)->v) = 0x0;
                                }
                            }
                        }
                    }
                    t128 = ((int (*)(int, int, int, int, int, int))(FUN_0c16fad0))(0x1, t126, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                    (((struct o8_uint *)0xC475AAC)->v) = 0x0;
                    (((struct o38_uint *)0xC475A64)->v) = 0x0;
                    t179 = 0x50;
                }
            }
        } else {
            *(int *)((int)stk + 0) = 0x1;
            FUN_0c16f890(0xC475AAC, 0x0, 0x2, 0x1, 0x1);
            if ((((((struct o38_int *)0xC475AAC)->v)) & 0x200) != 0) {
                (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
            }
            FUN_0c17a550(0xFFFF0000);
            FUN_0c17a4c0(0x14, 0x2);
            *(int *)((int)stk + 0) = 0xC203F00;
            dbg_printf(0xC203F00);
            FUN_0c17a4c0(0x1E, 0x2);
            t145 = (((struct o0_int *)0xC475AAC)->v);
            if (t145 != 0) {
                if (t145 != 1) {
                    t179 = t145;
                    if (t145 != 2) {
                    } else {
                        *(int *)((int)stk + 0) = 0xC203EF8;
                        t179 = (dbg_printf(0xC203EF8));
                    }
                } else {
                    *(int *)((int)stk + 0) = 0xC203F08;
                    t179 = (dbg_printf(0xC203F08));
                }
            } else {
                *(int *)((int)stk + 0) = 0xC203EF4;
                t179 = (dbg_printf(0xC203EF4));
            }
        }
    } else {
        (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
        (((struct o0_uint *)0xC475AAC)->v) = 0x2;
        *(int *)((int)stk + 0) = 0x1;
        FUN_0c16f890(0xC475AAC, 0x0, 0x2, 0x1, 0x1);
        if ((((((struct o38_int *)0xC475AAC)->v)) & 0x200) != 0) {
            (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
        }
        FUN_0c17a550(0xFFFF0000);
        FUN_0c17a4c0(0x14, 0x2);
        *(int *)((int)stk + 0) = 0xC203F00;
        dbg_printf(0xC203F00);
        FUN_0c17a4c0(0x1E, 0x2);
        t169 = (((struct o0_int *)0xC475AAC)->v);
        if (t169 != 0) {
            if (t169 != 1) {
                t179 = t169;
                if (t169 != 2) {
                } else {
                    *(int *)((int)stk + 0) = 0xC203EF8;
                    t179 = (dbg_printf(0xC203EF8));
                }
            } else {
                *(int *)((int)stk + 0) = 0xC203F08;
                t179 = (dbg_printf(0xC203F08));
            }
        } else {
            *(int *)((int)stk + 0) = 0xC203EF4;
            t179 = (dbg_printf(0xC203EF4));
        }
    }
    return t179;
}
