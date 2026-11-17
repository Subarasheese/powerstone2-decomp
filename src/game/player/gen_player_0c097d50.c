/* game/player: functions 0C097D50-0C098118, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07d086(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07f566(void);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0980e0(int, int, int, int);
int FUN_0c097d50(int a4, int a5, int a6, int a7);
int FUN_0c097d88(int a4);
int FUN_0c097de6(int a4);
int FUN_0c097e08(int a4);
int FUN_0c097e24(int a4);
int FUN_0c097e72(int a4, int a5, int a6, int a7);
int FUN_0c09810e(int a4, int a5, int a6, int a7);

int FUN_0c097d50(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC097D14))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC097966))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0974A2))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC097B58))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC097966))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC096FAC))(a4, a5, a6, a7);
}

int FUN_0c097d88(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x6, 0x6, (t0), 0x6, 0x6);
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

int FUN_0c097de6(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t2 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c097e08(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c097de6(a4);
    }
    return FUN_0c097d88(a4);
}

int FUN_0c097e24(int a4)
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

int FUN_0c097e72(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t1 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t1, 0x5, 0x2, (t1), 0x5, 0x2);
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x3, 0xFFFFFFFF, 0x5, 0x3);
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o98_float *)(t3))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t3))->v) = 1.0f;
    (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    u1 = *(float *)0xC541098;
    if ((((((struct o168_float *)(a4))->v)) > u1) && (t0 = (((struct o3770_int *)(a4))->v), u0 = (((struct o168_float *)(t0))->v), u0 > u1)) {
        u0 = (((struct o168_float *)(a4))->v);
        u1 = (((struct o168_float *)(((((struct o3770_int *)(a4))->v))))->v);
        u2 = u1;
        if (u1 > u0) {
            u2 = u0;
        }
        (((struct o2C_float *)(a4))->v) = u2;
    }
    (((struct o446_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o447_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    FUN_0c07d086(a4, 0x0, (*(float *)0xC098048));
    t0 = (((struct o3770_int *)(a4))->v);
    (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) ^ 0xF);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0xE;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c09810e(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    return FUN_0c0980e0(a4, a5, a6, a7);
}
