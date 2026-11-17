/* game/player: functions 0C08E1A0-0C08E522, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_int { char p[0x8C]; int v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c070320(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int pl_ryoma_cue_table_next(int a4, int a5, int a6, int a7);
int FUN_0c08e1c4(int a4);
int FUN_0c08e226(int a4);

int pl_ryoma_cue_table_next(int a4, int a5, int a6, int a7)
{
    register int t4;

    if ((*(signed char *)((a5 + 0x0))) == (short)a6) {
        (((struct o446_uchar *)(a4))->v) = (*(signed char *)(((a5 + 0x1) + 0x0)));
        (((struct o447_uchar *)(a4))->v) = (*(signed char *)((((a5 + 0x1) + 0x1) + 0x0)));
        *(unsigned short *)((a7 + 0x0)) = ((*(short *)((a7 + 0x0))) + 0x1);
        t4 = 0x447;
    }
    return t4;
}

int FUN_0c08e1c4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3733));
    t1 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x4));
    t2 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x0));
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, t2, t1, (t0), (t2), (t1));
    (((struct o20_ushort *)(a4))->v) = 0x0;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    return 0x4C;
}

int FUN_0c08e226(int a4)
{
    int stk[5];
    register int t0;
    register int t2;
    register int t9;
    register int t22;
    register int t26;
    register int t27;
    register int t37;
    register int t41;
    register int t42;
    register int t52;
    register int t56;
    register int t57;
    register int t99;
    register int t103;
    register int t104;
    register int t116;
    register int t120;
    register int t121;
    register int t153;
    register int t72;
    register int t76;
    register int t87;
    register int t91;

    t0 = *(signed char *)((a4 + 0x3733));
    if ((int)(*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x8))) < 0) {
    } else {
        t2 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t2 + 0x1);
        if ((short)(t2 + 0x1) != (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0xC)))) {
        } else {
            t9 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x8));
            switch (t9) {
            case 0:
                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                    *(int *)((int)stk + 12) = 0xC1C5F74;
                    *(int *)((int)stk + 8) = 0xC1C5F68;
                    *(int *)((int)stk + 4) = 0x52;
                    t116 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t116;
                    FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, t116, 0x52, 0xC1C5F68, 0xC1C5F74);
                } else {
                    *(int *)((int)stk + 12) = 0xC1C5F8C;
                    *(int *)((int)stk + 8) = 0xC1C5F80;
                    *(int *)((int)stk + 4) = 0x52;
                    t120 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t120;
                    t121 = *(signed char *)((a4 + 0x1));
                    (((struct o10_uchar *)(((int)stk + 0)))->v) = t121;
                    FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((0xC4B40FC + (t121 << 2))))))->v)) + 0x0))), t120, 0x52, 0xC1C5F80, 0xC1C5F8C);
                }
                break;
            case 1:
                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                    *(int *)((int)stk + 12) = 0xC1C5FD4;
                    *(int *)((int)stk + 8) = 0xC1C5FC8;
                    *(int *)((int)stk + 4) = 0x42;
                    t99 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t99;
                    FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0xA, 0x1, t99, 0x42, 0xC1C5FC8, 0xC1C5FD4);
                } else {
                    *(int *)((int)stk + 12) = 0xC1C5FEC;
                    *(int *)((int)stk + 8) = 0xC1C5FE0;
                    *(int *)((int)stk + 4) = 0x42;
                    t103 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t103;
                    t104 = *(signed char *)((a4 + 0x1));
                    (((struct o10_uchar *)(((int)stk + 0)))->v) = t104;
                    FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x7, (*(int *)((((((struct o8C_int *)((*(int *)((0xC4B40FC + (t104 << 2))))))->v)) + 0x0))), t103, 0x42, 0xC1C5FE0, 0xC1C5FEC);
                }
                break;
            case 2:
                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                    *(int *)((int)stk + 12) = 0xC1C6034;
                    *(int *)((int)stk + 8) = 0xC1C6028;
                    *(int *)((int)stk + 4) = 0x53;
                    t87 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t87;
                    t91 = 0x5;
                } else {
                    *(int *)((int)stk + 12) = 0xC1C6034;
                    *(int *)((int)stk + 8) = 0xC1C6028;
                    *(int *)((int)stk + 4) = 0x53;
                    t87 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t87;
                    t91 = 0x6;
                }
                FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x0, 0xE, t91, t87, 0x53, 0xC1C6028, 0xC1C6034);
                break;
            case 3:
                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                    *(int *)((int)stk + 12) = 0xC1C6034;
                    *(int *)((int)stk + 8) = 0xC1C6028;
                    *(int *)((int)stk + 4) = 0x53;
                    t72 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t72;
                    t76 = 0x5;
                } else {
                    *(int *)((int)stk + 12) = 0xC1C6034;
                    *(int *)((int)stk + 8) = 0xC1C6028;
                    *(int *)((int)stk + 4) = 0x53;
                    t72 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t72;
                    t76 = 0x6;
                }
                FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x0, 0x11, t76, t72, 0x53, 0xC1C6028, 0xC1C6034);
                break;
            case 4:
                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                    *(int *)((int)stk + 12) = 0xC1C5F74;
                    *(int *)((int)stk + 8) = 0xC1C5F68;
                    *(int *)((int)stk + 4) = 0x42;
                    t22 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t22;
                    FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, t22, 0x42, 0xC1C5F68, 0xC1C5F74);
                } else {
                    *(int *)((int)stk + 12) = 0xC1C5F8C;
                    *(int *)((int)stk + 8) = 0xC1C5F80;
                    *(int *)((int)stk + 4) = 0x42;
                    t26 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t26;
                    t27 = *(signed char *)((a4 + 0x1));
                    (((struct o10_uchar *)(((int)stk + 0)))->v) = t27;
                    FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((0xC4B40FC + (t27 << 2))))))->v)) + 0x0))), t26, 0x42, 0xC1C5F80, 0xC1C5F8C);
                }
                break;
            default:
                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                    *(int *)((int)stk + 12) = 0xC1C5F74;
                    *(int *)((int)stk + 8) = 0xC1C5F68;
                    *(int *)((int)stk + 4) = 0x52;
                    t37 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t37;
                    FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, t37, 0x52, 0xC1C5F68, 0xC1C5F74);
                } else {
                    *(int *)((int)stk + 12) = 0xC1C5F8C;
                    *(int *)((int)stk + 8) = 0xC1C5F80;
                    *(int *)((int)stk + 4) = 0x52;
                    t41 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t41;
                    t42 = *(signed char *)((a4 + 0x1));
                    (((struct o10_uchar *)(((int)stk + 0)))->v) = t42;
                    FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((0xC4B40FC + (t42 << 2))))))->v)) + 0x0))), t41, 0x52, 0xC1C5F80, 0xC1C5F8C);
                }
                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                    *(int *)((int)stk + 12) = 0xC1C5FD4;
                    *(int *)((int)stk + 8) = 0xC1C5FC8;
                    *(int *)((int)stk + 4) = 0x42;
                    t52 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t52;
                    FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0xA, 0x1, t52, 0x42, 0xC1C5FC8, 0xC1C5FD4);
                } else {
                    *(int *)((int)stk + 12) = 0xC1C5FEC;
                    *(int *)((int)stk + 8) = 0xC1C5FE0;
                    *(int *)((int)stk + 4) = 0x42;
                    t56 = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1C6040) + 0x10)));
                    *(int *)((int)stk + 0) = t56;
                    t57 = *(signed char *)((a4 + 0x1));
                    (((struct o10_uchar *)(((int)stk + 0)))->v) = t57;
                    FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x7, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t57 << 2) + 0xC4B40FC)))))->v)) + 0x0))), t56, 0x42, 0xC1C5FE0, 0xC1C5FEC);
                }
                break;
            }
        }
    }
    t153 = FUN_0c037bf6(a4);
    if ((unsigned char)t153 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    return FUN_0c070320(a4);
}
