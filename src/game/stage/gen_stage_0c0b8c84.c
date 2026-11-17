/* game/stage: functions 0C0B8C84-0C0B930C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c07d086(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07f566(void);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0b8e2e(int, int, int);
int FUN_0c0b8fe4(int, int, int);
int FUN_0c0b8c84(int a4);
int FUN_0c0b8cba(int a4, int a5, int a6, int a7);
int FUN_0c0b90ca(int a4, int a5, int a6, int a7);
int FUN_0c0b9138(int a4, int a5, int a6, int a7);
int FUN_0c0b9176(int a4, int a5, int a6, int a7);
int FUN_0c0b9216(int a4);

int FUN_0c0b8c84(int a4)
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

int FUN_0c0b8cba(int a4, int a5, int a6, int a7)
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
    FUN_0c07e79c(a4, t1, 0x2, 0x1C, (t1), 0x2, 0x1C);
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
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x3, 0xDE, 0xFFFFFFFF, 0x3, 0xDE);
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
    FUN_0c07d086(a4, 0x0, (*(float *)0xC0B8E78));
    t0 = (((struct o3770_int *)(a4))->v);
    (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) ^ 0xF);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0xE;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0b90ca(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        FUN_0c0b8cba(a4, a5, a6, a7);
        break;
    case 1:
        FUN_0c0b8e2e(a4, a5, a6);
        break;
    case 2:
        FUN_0c0b8fe4(a4, a5, a6);
        break;
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c0b9138(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    return FUN_0c0b90ca(a4, a5, a6, a7);
}

int FUN_0c0b9176(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC0B9142))(a4, a5, a6, a7);
}

int FUN_0c0b9216(int a4)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c037bf6(a4);
    }
    t0 = *(signed char *)((a4 + 0x17));
    if ((t0 != 0) && (t0 != 1)) {
        if (t0 != 2) {
            if (t0 != 3) {
            } else {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x6, 0x36, (t0), 0x6, 0x36);
            }
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x4, (t0), 0x6, 0x4);
        }
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x6, 0x32, (t0), 0x6, 0x32);
        FUN_0c059e60(a4, 0x12);
    }
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
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}
