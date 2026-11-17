/* game/stage: functions 0C0B06CC-0C0B0804, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c059e60(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0b06cc(int a4);
int FUN_0c0b0742(int a4, int a5, int a6);

int FUN_0c0b06cc(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x1C, (t0), 0x1, 0x1C);
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
    FUN_0c07d030(a4, 0x0);
    *(unsigned short *)((a4 + 0x1C)) = 0x5;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x7;
    (((struct o17_uchar *)(a4))->v) = 0x5;
    return 0x17;
}

int FUN_0c0b0742(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        (((struct o17_uchar *)(a4))->v) = 0x4;
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x1D, (t0), 0x1, 0x1D);
        *(unsigned short *)((a4 + 0x1E)) = 0x1;
        return 0x1;
    }
    if ((int)((((struct o22_short *)(a4))->v)) > 0) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
        if (((((struct o22_short *)(a4))->v)) == 0) {
            FUN_0c059e60(a4, 0x20);
            FUN_0c059e60(a4, 0x9);
        }
    }
    FUN_0c038362(a4);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        (((struct o17_uchar *)(a4))->v) = 0x1;
        return 0x17;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
