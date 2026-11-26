/* game/unsorted: functions 0C0303FC-0C030DBE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
int FUN_0c0303fc(int);
int FUN_0c0305d8(int);
int FUN_0c03063c(int, int);
int FUN_0c030728(int);
int FUN_0c030866(int, int, int);
int FUN_0c030c2c(int, int);
int FUN_0c030ffc(int);
int FUN_0c03107c(int);
int FUN_0c03119c(int);
int FUN_0c0311fe(int);
int FUN_0c031294(int);
int FUN_0c0312ee(int);
int FUN_0c05d978(int);
int FUN_0c05d9b4(int);
int FUN_0c05d9d6(int);
int FUN_0c05da24(int);
int FUN_0c05db24(int);
int FUN_0c05db54(int);
int FUN_0c05db92(int);
int FUN_0c05dcac(int);
int FUN_0c05dd3e(int);
int FUN_0c03090c(int a4, int a5, int a6);
int FUN_0c030c94(int a4, int a5, int a6);


int FUN_0c030c94(int a4, int a5, int a6)
{
    int stk[8];
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t60;
    register int t61;
    register int t65;
    register int t68;
    register int t48;
    register int t49;
    register int t50;

    t6 = *(signed char *)0xC5429B4;
    if (t6 == 0) {
        t3 = 0x4;
    }
    if (t6 == 4) {
        t3 = 0x4;
    }
    if ((int)t3 > 0) {
        t5 = 0xC5429B4;
        t7 = 0x4;
        t8 = 0x0;
        t9 = 0xC541CDC;
        for (;;) {
            t10 = (((struct o7C_int *)(t9))->v);
            if (t10 != 0) {
                if (t10 != 1) {
                    if (t10 != 2) {
                        if (t10 != 3) {
                            if (t10 != 4) {
                                if (t10 != 5) {
                                    t48 = t5;
                                    t49 = t6;
                                    t50 = t7;
                                } else {
                                    t6 = t9;
                                    FUN_0c030c2c(t6, t7);
                                    t6 = t9;
                                    FUN_0c0312ee(t6);
                                }
                            } else {
                                t6 = t9;
                                FUN_0c03090c(t6, t7, a6);
                            }
                        } else {
                            t6 = t9;
                            FUN_0c030728(t6);
                            t6 = t9;
                            FUN_0c0311fe(t6);
                        }
                    } else {
                        t6 = t9;
                        FUN_0c03063c(t6, t7);
                        t5 = 0xC03119C;
                        t6 = t9;
                        FUN_0c03119c(t6);
                    }
                } else {
                    t6 = t9;
                    FUN_0c0305d8(t6);
                    t6 = t9;
                    FUN_0c03107c(t6);
                }
            } else {
                t6 = t9;
                FUN_0c0303fc(t6);
                t6 = t9;
                FUN_0c030ffc(t6);
            }
            t8 = (t8 + 0x1);
            t5 = t48;
            t6 = t49;
            t7 = t50;
            t9 = (t9 + 0x98);
            if ((int)t8 >= (int)t3) {
                break;
            }
        }
    }
    (((struct o0_uchar *)0xC542252)->v) = 0x0;
    (((struct o1_uchar *)0xC542252)->v) = 0x0;
    t60 = 0xC541CDC;
    t61 = 0xC541CDC;
    for (;;) {
        t65 = *(signed char *)(((t61 + 0x4A) + 0x1));
        t68 = t65;
        if ((int)(((short)(*(signed char *)0xC542252) * (short)0x64) + (*(signed char *)0xC542253)) < (int)(((short)(*(signed char *)(((t61 + 0x4A) + 0x0))) * (short)0x64) + t65)) {
            (((struct o0_uchar *)0xC542252)->v) = (*(signed char *)(((t60 + 0x4A) + 0x0)));
            (((struct o1_uchar *)0xC542252)->v) = (*(signed char *)((t60 + 0x4B)));
            t68 = 0x5B;
        }
        t61 = (t61 + 0x98);
        t60 = (t60 + 0x98);
        if ((unsigned int)t61 >= (unsigned int)0xC541F3C) {
            break;
        }
    }
    return t68;
}
