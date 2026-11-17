/* game/effect: functions 0C0BAB5C-0C0BAC3C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0bab5c(int a4, int a5, int a6, int a7);
int FUN_0c0bab8c(int a4);
int FUN_0c0babea(int a4);
int FUN_0c0bac0c(int a4);

int FUN_0c0bab5c(int a4, int a5, int a6, int a7)
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
                        return ((int (*)(int, int, int, int))(0xC0BAB38))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0BA790))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0BA936))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0BAB38))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0BA790))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0BA936))(a4, a5, a6, a7);
}

int FUN_0c0bab8c(int a4)
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

int FUN_0c0babea(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0bac0c(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0babea(a4);
    }
    return FUN_0c0bab8c(a4);
}
