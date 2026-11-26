/* Straight-line functions with calls and guards (batch gen_ph): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
int FUN_0c17a550(int);
int dbg_printf(int, ...);
int nlLocate(int, int);
int FUN_0c16fbd0(void);

int FUN_0c16fbd0(void)
{
    int stk[4];
    register int t0;
    register int t13;
    register int t23;
    register int t24;
    register int t27;
    register int t43;
    register int t45;
    register int t51;
    register int t53;
    register int t68;
    register int t70;
    register int t87;
    register int t95;
    register int t85;
    register int R1004;

    R1004 = *(int *)((int)stk + 0);

    t0 = (((struct o4_int *)0xC475A64)->v);
    if (t0 == 0) {
        (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
        (((struct o0_uint *)0xC475AAC)->v) = 0x2;
    }
    if ((t0 == 0) || (t0 == 1)) {
        R1004 = 0x1;
        FUN_0c16f890(0xC475AAC, 0x0, 0x2, 0x1, 0x1);
        if ((((((struct o38_int *)0xC475AAC)->v)) & 0x200) != 0) {
            (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
        }
        FUN_0c17a550(0xFFFF0000);
        nlLocate(0x14, 0x2);
        R1004 = 0xC203F00;
        dbg_printf(0xC203F00);
        nlLocate(0x1E, 0x2);
        t13 = (((struct o0_int *)0xC475AAC)->v);
        if (t13 != 0) {
            if (t13 != 1) {
                t95 = t13;
                if (t13 != 2) {
                } else {
                    R1004 = 0xC203EF8;
                    t95 = (dbg_printf(0xC203EF8));
                }
            } else {
                R1004 = 0xC203F08;
                t95 = (dbg_printf(0xC203F08));
            }
        } else {
            R1004 = 0xC203EF4;
            t95 = (dbg_printf(0xC203EF4));
        }
    } else {
        t95 = t0;
        if (t0 != 2) {
        } else {
            (((struct o0_uint *)0xC475A64)->v) = 0x0;
            t23 = (((struct o0_int *)0xC475AAC)->v);
            if (t23 != 0) {
            } else {
                t24 = ((int (*)(int))(FUN_0c16fad0))(0x0);
            }
            if ((t23 == 0) || (t23 == 1)) {
                t27 = (((struct o8_int *)0xC475A64)->v);
                if (t27 != 0) {
                    if (t27 != 1) {
                        if (t27 != 2) {
                        } else {
                            if (((((struct o4_int *)0xC475AAC)->v)) == 0) {
                                if (((((struct o2C_int *)0xC475A64)->v)) == 0) {
                                    t43 = (((struct o30_int *)0xC475A64)->v);
                                    (((struct o30_uint *)0xC475A64)->v) = (t43 - 1);
                                    if ((int)(t43 - 1) < 0) {
                                        (((struct o30_uint *)0xC475A64)->v) = 0xF;
                                    }
                                } else {
                                    t45 = (((struct o34_int *)0xC475A64)->v);
                                    (((struct o34_uint *)0xC475A64)->v) = (t45 - 1);
                                    if ((int)(t45 - 1) < 0) {
                                        (((struct o34_uint *)0xC475A64)->v) = 0x10;
                                    }
                                }
                            } else {
                                if (((((struct o2C_int *)0xC475A64)->v)) == 0) {
                                    t51 = (((struct o30_int *)0xC475A64)->v);
                                    (((struct o30_uint *)0xC475A64)->v) = (t51 + 0x1);
                                    if ((int)(t51 + 0x1) > (int)0xF) {
                                        (((struct o30_uint *)0xC475A64)->v) = 0x0;
                                    }
                                } else {
                                    t53 = (((struct o34_int *)0xC475A64)->v);
                                    (((struct o34_uint *)0xC475A64)->v) = (t53 + 0x1);
                                    if ((int)(t53 + 0x1) > (int)0x10) {
                                        (((struct o34_uint *)0xC475A64)->v) = 0x0;
                                    }
                                }
                            }
                            t85 = 0x10;
                        }
                    } else {
                        if (((((struct o4_int *)0xC475AAC)->v)) == 0) {
                            t68 = (((struct o2C_int *)0xC475A64)->v);
                            (((struct o2C_uint *)0xC475A64)->v) = (t68 - 1);
                            if ((int)(t68 - 1) < 0) {
                                (((struct o2C_uint *)0xC475A64)->v) = 0x2;
                            }
                        } else {
                            t70 = (((struct o2C_int *)0xC475A64)->v);
                            (((struct o2C_uint *)0xC475A64)->v) = (t70 + 0x1);
                            if ((int)(t70 + 0x1) > (int)0x2) {
                                (((struct o2C_uint *)0xC475A64)->v) = 0x0;
                            }
                        }
                    }
                }
                t87 = ((int (*)(int))(FUN_0c16fad0))(0x1);
                (((struct o8_uint *)0xC475AAC)->v) = 0x0;
                (((struct o38_uint *)0xC475A64)->v) = 0x0;
                t95 = 0x50;
            } else {
                t95 = t23;
            }
        }
    }
    return t95;
}
