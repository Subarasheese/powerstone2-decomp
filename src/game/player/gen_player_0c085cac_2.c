/* game/player: functions 0C085CAC-0C085F5A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3733_uchar { char p[0x3733]; unsigned char v; };
struct o3742_uchar { char p[0x3742]; unsigned char v; };
struct o378C_float { char p[0x378C]; float v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c067734(int);
int FUN_0c0736f2(int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085f66(int, int, int, int);
int FUN_0c085d0c(int a4, int a5, int a6, int a7);

int FUN_0c085d0c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    int t4;
    int t5;
    int t6;
    register float u0;

    (((struct o14_uchar *)(a4))->v) = 0x0;
    (((struct o19_uchar *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o3742_uchar *)(a4))->v) = 0x0;
    u0 = (((struct o378C_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = u0;
    (((struct o44_float *)(a4))->v) = u0;
    (((struct o40_float *)(a4))->v) = u0;
    (((struct o3733_uchar *)(a4))->v) = 0x0;
    (((struct o37C0_float *)(a4))->v) = ((((struct o168_float *)(a4))->v));
    t6 = *(signed char *)((a4 + 0x371D));
    if ((t6 != 3) && ((t6 != 5) && (t6 != 6))) {
    } else {
        t6 = FUN_0c085f66(a4, a5, a6, a7);
        if (t6 == 0) {
            (((struct o371D_uchar *)(a4))->v) = 0x0;
        }
    }
    FUN_0c067734(a4);
    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC54223C, t0 == 1)) {
        return FUN_0c085cac(a4, 0x1B, 0x0);
    }
    if (!(((((struct o160_float *)(a4))->v)) > 0.0f) && (t1 = *(signed char *)((a4 + 0x3715)), t1 == 34)) {
        return FUN_0c0736f2(a4, 0x8);
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        if (t0 != 2) {
            t0 = FUN_0c07ebd0(a4);
            if ((t0 != 0) && (((t2 = *(signed char *)((a4 + 0x371D)), t2 == 3) && ((t3 = *(signed char *)((a4 + 0x3715)), t3 == 7) && (t4 = *(signed char *)((a4 + 0x3732)), t4 == 11))) || ((t2 == 3) && (t5 = *(signed char *)((a4 + 0x3715)), t5 == 6)))) {
                return FUN_0c085cac(a4, 0x1, 0x1);
            }
            return FUN_0c085cac(a4, 0x0, 0x0);
        }
        t0 = FUN_0c07ebd0(a4);
        if (t0 != 0) {
            FUN_0c085cac(a4, 0xD, 0x0);
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
            return 0x94;
        }
        return FUN_0c085cac(a4, 0x0, 0x0);
    }
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    return FUN_0c085cac(a4, 0x5, 0x7);
}
