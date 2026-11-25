/* game/player: functions 0C10B0A0-0C10B696, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c1171f0(int);
int nlAddVector3op(int, int, int);
int FUN_0c187798(void);
int FUN_0c10b0a0(int a4, int a5);
int FUN_0c10b182(int a4, int a5);
int FUN_0c10b270(int a4);

int FUN_0c10b0a0(int a4, int a5)
{
    int stk[2];
    register int t8;
    register int t11;
    register int t12;
    register int t13;
    register int t9;
    register int t10;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    R1004 = 0x0;
    if ((int)a5 >= (int)0x3E8) {
        *(unsigned char *)((((((struct oEC_int *)(a4))->v)) + 0x0)) = 0x1;
    } else {
        *(unsigned char *)((((((struct oEC_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    if ((int)a5 >= (int)0xF4240) {
        *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x1;
    } else {
        *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    t8 = 0xF0;
    t11 = 0x989680;
    t12 = a5;
    t13 = 0x9;
    for (;;) {
        if ((int)t13 <= (int)0x1) {
            break;
        }
        t8 = t11;
        t9 = 0xC1874B0;
        t8 = ((int)((int)t12 / (int)t8));
        R1000 = t8;
        t8 = t11;
        t8 = ((int)((int)t12 % (int)t8));
        t12 = t8;
        t8 = 0xA;
        t8 = ((int)((int)t11 / (int)t8));
        t10 = t13;
        t10 = (t10 << 2);
        t9 = 0xC03744A;
        t11 = t8;
        t8 = (FUN_0c03744a((*(int *)((((0xC4 + a4) + t10) + 0x0))), (R1000), 0x2, (*(int *)0xC4B410C)));
        t9 = 0xC290BC8;
        t10 = (t10 + (0xC4 + a4));
        t10 = (*(int *)((t10 + 0x0)));
        t8 = (nlAddVector3op((t10 + 0x6C), 0xC2A0C78, (((((t13 - 2) << 1) + (t13 - 2)) << 2) + t9)));
        t9 = (R1000);
        if (t9 == 0) {
            t8 = (R1004);
            if (t8 != 1) {
                t8 = t13;
                if (t8 != 2) {
                    *(unsigned char *)((t10 + 0x0)) = 0x0;
                } else {
                    *(unsigned char *)((t10 + 0x0)) = 0x1;
                }
            } else {
                *(unsigned char *)((t10 + 0x0)) = 0x1;
            }
        } else {
            R1004 = 0x1;
            *(unsigned char *)((t10 + 0x0)) = 0x1;
        }
        t13 = (t13 - 1);
    }
    return t8;
}

int FUN_0c10b182(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t3;
    register int t4;
    register int t6;
    register int t17;
    register int t0;
    register int t2;
    register int t5;
    register int t26;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    R1000 = a4;
    R1004 = 0x0;
    t1 = 0x0;
    t3 = a5;
    t4 = 0xA;
    t6 = 0x3;
    for (;;) {
        if ((int)t6 <= (int)0x1) {
            break;
        }
        t0 = t4;
        t0 = ((int)((int)t3 / (int)t0));
        t2 = t0;
        t0 = t4;
        t1 = 0xC18760C;
        t0 = ((int)((int)t3 % (int)t0));
        t3 = t0;
        t0 = 0xA;
        t0 = ((int)((int)t4 / (int)t0));
        t4 = t0;
        t0 = (R1000);
        t5 = t6;
        t1 = 0xC4B410C;
        t5 = (t5 + 0xA);
        t5 = (t5 << 2);
        t0 = (FUN_0c03744a((*(int *)((((0xC4 + t0) + t5) + 0x0))), t2, 0x7, (*(int *)((t1 + 0x0)))));
        t1 = 0xC4;
        t0 = (R1000);
        t1 = (t1 + t0);
        t5 = (t5 + t1);
        t1 = (t6 - 2);
        t5 = (*(int *)((t5 + 0x0)));
        t17 = (((t6 - 2) << 1) + t1);
        t1 = 0xC17C130;
        t0 = (nlAddVector3op((t5 + 0x6C), 0xC2A0C78, ((t17 << 2) + 0xC290C28)));
        if (t2 == 0) {
            t0 = (R1004);
            if (t0 != 1) {
                t0 = t6;
                if (t0 != 2) {
                    t1 = 0x0;
                    *(unsigned char *)((t5 + 0x0)) = t1;
                    t26 = t1;
                } else {
                    *(unsigned char *)((t5 + 0x0)) = 0x1;
                }
            } else {
                *(unsigned char *)((t5 + 0x0)) = 0x1;
            }
        } else {
            R1004 = 0x1;
            *(unsigned char *)((t5 + 0x0)) = 0x1;
        }
        t6 = (t6 - 1);
        t1 = t26;
    }
    return t0;
}

