/* game/player: functions 0C06CBA8-0C06CEBE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c06ccf0(int a4, int a5, int a6);

int FUN_0c06ccf0(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x16));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        t2 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t2 != 0) {
            if ((*(short *)((a4 + 0x1C))) == (*(signed char *)0xC540990)) {
                (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) + 300.0f);
                if (((((struct o160_float *)(a4))->v)) > 1000.0f) {
                    (((struct o160_float *)(a4))->v) = 1000.0f;
                }
                return FUN_0c085d0c(a4);
            }
            return FUN_0c085cac(a4, 0x11, 0x4);
        }
        t2 = 0x8C;
        if (!(14.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            if (((((struct o22_short *)(a4))->v)) == 0) {
                if ((((((struct o376C_int *)(a4))->v)) != 0) && (t0 = (((struct o376C_int *)(a4))->v), t1 = *(signed char *)((t0 + 0x41C)), (unsigned char)t1 == 0xC9)) {
                    *(unsigned short *)((a4 + 0x1C)) = (*(signed char *)((((((struct o376C_int *)(a4))->v)) + 0x2)));
                    FUN_0c081dfc(a4);
                }
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            }
            t2 = 0x22;
        }
        return t2;
    }
    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x13, 0xFFFFFFFF, 0x3, 0x13);
        t0 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 10.0f;
        (((struct o94_float *)(t0))->v) = 10.0f;
        t0 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 10.0f;
        (((struct o94_float *)(t0))->v) = 10.0f;
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x2C);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}
