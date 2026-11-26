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

