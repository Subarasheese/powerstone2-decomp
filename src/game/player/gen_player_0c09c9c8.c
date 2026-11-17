/* game/player: functions 0C09C9C8-0C09CAC8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o375A_uchar { char p[0x375A]; unsigned char v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o38F8_int { char p[0x38F8]; int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c09c9c8(int a4);
int FUN_0c09ca20(int a4, int a5);

int FUN_0c09c9c8(int a4)
{
    int t0;

    if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
        if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x100) != 0) {
            return 0x2;
        }
        if ((((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) && (t0 = (((struct o42C_short *)(a4))->v), ((unsigned short)t0 & 128) != 0)) {
            return 0x3;
        }
    }
    t0 = (((struct o430_short *)(a4))->v);
    if (((0x200 & (unsigned short)t0) == 0) && ((0x80 & (unsigned short)t0) == 0)) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c09ca20(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t5;
    register int t6;
    float u0;

    t1 = 0x0;
    if (((*(signed char *)((a4 + 0x371A))) != 0) && (u0 = (((struct o37B8_float *)(a4))->v), !(0.0f > u0))) {
        t2 = FUN_0c09c9c8(a4);
        t1 = 0x0;
        if ((t2 != 0) && ((t2 == 3) || (t0 = (((struct o38F8_int *)(a4))->v), (int)t0 < (int)0x2))) {
            if (a5 == 1) {
                t0 = 0x0;
                if (t2 == 0) {
                    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    t5 = t2;
                    if (t1 == 0) {
                        t5 = (t2 + 0x3);
                    }
                    (((struct o375A_uchar *)(a4))->v) = (t5 - 1);
                    if (t5 == 1) {
                        t1 = 0x2;
                        if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
                            t1 = 0x0;
                        }
                        (((struct o3731_uchar *)(a4))->v) = t1;
                    }
                    FUN_0c085cac(a4, 0x1A, 0x0);
                    t0 = 0x1;
                }
                t1 = t0;
            } else {
                t0 = 0x0;
                if ((a5 != 2) || (t2 != 0)) {
                    t5 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    t6 = t2;
                    if (t5 == 0) {
                        t6 = (t2 + 0x3);
                    }
                    (((struct o375A_uchar *)(a4))->v) = (t6 - 1);
                    if (t6 == 1) {
                        t2 = 0x2;
                        if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
                            t2 = 0x0;
                        }
                        (((struct o3731_uchar *)(a4))->v) = t2;
                    }
                    FUN_0c085cac(a4, 0x1A, 0x0);
                    t0 = 0x1;
                }
                t1 = t0;
            }
        }
    }
    return t1;
}
