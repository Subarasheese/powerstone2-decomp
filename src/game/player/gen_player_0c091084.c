/* game/player: functions 0C091084-0C091448, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1818_uchar { char p[0x1818]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o738_uchar { char p[0x738]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07f566(void);
int pl_ryoma_cue_table_next(int, int, int, int);
int FUN_0c125cd0(int);
int FUN_0c126618(int);
int FUN_0c1267e0(int, int);
int FUN_0c126c4c(int);
int FUN_0c127068(int);
int FUN_0c091084(int a4);
int FUN_0c0910f6(int a4);
int FUN_0c091148(int a4);
int FUN_0c091164(int a4);
int FUN_0c091412(int a4);

int FUN_0c091084(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x6, 0x6, (t0), 0x6, 0x6);
    (((struct o446_uchar *)(a4))->v) = 0x0;
    (((struct o447_uchar *)(a4))->v) = 0x1;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c0910f6(int a4)
{
    register int t0;
    register int t1;

    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    t0 = (((struct o22_short *)(a4))->v);
    pl_ryoma_cue_table_next(a4, (((t0 << 1) + t0) + 0xC1C6136), ((((struct o20_short *)(a4))->v)), (a4 + 0x22));
    if (((((struct o20_short *)(a4))->v)) == 21) {
        FUN_0c1267e0(a4, 0x4E);
    }
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c091148(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0910f6(a4);
    }
    return FUN_0c091084(a4);
}


int FUN_0c091412(int a4)
{
    register int t0;

    t0 = FUN_0c07f566();
    if (t0 != 0) {
        return 0x1;
    }
    t0 = FUN_0c07f566();
    if (t0 != 0) {
        return 0x0;
    }
    return 0x63;
}
