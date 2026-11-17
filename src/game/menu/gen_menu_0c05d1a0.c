/* game/menu: functions 0C05D1A0-0C05E4FA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o44_short { char p[0x44]; short v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o68_uchar { char p[0x68]; unsigned char v; };
struct o69_uchar { char p[0x69]; unsigned char v; };
struct o6A_uchar { char p[0x6A]; unsigned char v; };
struct o6B_uchar { char p[0x6B]; unsigned char v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
int FUN_0c05a812(void);
int FUN_0c05aab6(int, int);
int FUN_0c05b250(void);
int FUN_0c05b288(int, float, float, float, float);
int FUN_0c05cf04(void);
int FUN_0c05d530(int);
int FUN_0c05d90c(void);
int FUN_0c02cade(void);
int FUN_0c0fb6cc(void);
int FUN_0c17a4c0(int, int);
int dbg_printf(int, ...);
int FUN_0c18778c(int, int, int);
int memset(int, int, int);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c05d1a0(int a4);
void FUN_0c05d1d4(int a4);
int FUN_0c05d21c(void);
int FUN_0c05d280(int a4);
int FUN_0c05d2cc(int a4, int a5, int a6, int a7);
int FUN_0c05d45c(int a4);
int FUN_0c05d480(int a4);
int FUN_0c05d4a4(int a4);
int FUN_0c05d4c8(int a4);
int FUN_0c05d608(int a4, int a5);
int FUN_0c05d648(int a4);
int FUN_0c05d6a6(int a4, int a5, int a6, int a7);
void FUN_0c05d908(void);
void FUN_0c05d974(void);
int FUN_0c05d978(int a4);
int FUN_0c05d9b4(int a4);
int FUN_0c05d9d6(int a4);
int FUN_0c05da24(int a4);
int FUN_0c05db24(int a4);
int FUN_0c05db54(int a4);
int FUN_0c05db92(int a4);
void FUN_0c05dcac(int a4);
int FUN_0c05dd10(int a4);
int FUN_0c05dd3e(int a4);
int FUN_0c05dfc2(int a4);
int FUN_0c05e07a(int a4, int a5, int a6, int a7);
int FUN_0c05e13a(int a4, int a5);
int FUN_0c05e238(int a4);
int FUN_0c05e478(void);

int FUN_0c05d1a0(int a4)
{
    int stk[1];
    register float u1;
    register float u2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    u1 = *(float *)0xC05D2AC;
    u2 = (float)(((short)(*(signed char *)(((int)stk + 0))) * (short)0x1B) + 0x1);
    return FUN_0c05b288(0xC1C3F58, (u2 * u1), u1, 1.0f, 1.0f);
}

void FUN_0c05d1d4(int a4)
{
    int stk[1];
    register float u3;
    register float u4;

    *(unsigned char *)(((int)stk + 0)) = a4;
    if (((*(signed char *)0xC542257) & ((*(signed char *)(((int)stk + 0))) + 0x1)) == 0) {
        u3 = *(float *)0xC05D2AC;
        u4 = (float)(((short)(*(signed char *)(((int)stk + 0))) * (short)0x1A) + 0x1);
        FUN_0c05b288(0xC1C3F64, (u4 * u3), u3, 1.0f, 1.0f);
    return;
    }
}

int FUN_0c05d21c(void)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC54208F) == 0) {
        t0 = 0x0;
        for (;;) {
            *(unsigned char *)((((t0 * 0x98) + 0xC541CDC) + 0x9)) = t0;
            t1 = FUN_0c05d530(((t0 * 0x98) + 0xC541CDC));
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c05d280(int a4)
{
    int t1;

    if (((*(signed char *)0xC542255) == 0) && (t1 = *(signed char *)0xC542254, t1 == 0)) {
        *(volatile signed char *)((a4 + 0x9));
        return FUN_0c05d90c();
    }
    return FUN_0c05d1a0((*(signed char *)((a4 + 0x9))));
}

int FUN_0c05d2cc(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)0xC541F40;
    if ((unsigned char)t0 != 5) {
        return (unsigned char)t0;
    }
    u0 = *(float *)0xC05D504;
    t0 = *(signed char *)0xC542259;
    if ((t0 != 1) && (t0 != 2)) {
        t0 = *(signed char *)0xC54225C;
        if (t0 != 0) {
            if ((signed char)t0 == ((*(signed char *)((a4 + 0x9))) + 0x1)) {
                t0 = 0x1D;
                if ((*(signed char *)((a4 + 0x9))) == 0) {
                    t0 = 0x1;
                }
                return FUN_0c05b288(0xC1C3FA4, ((float)t0 * u0), u0, 1.0f, 1.0f);
            }
            if (((((struct o44_short *)(a4))->v)) != 0) {
                if ((int)((((struct o44_short *)(a4))->v)) > (int)0x1) {
                    *(volatile short *)((a4 + 0x44));
                    if ((*(signed char *)((a4 + 0x9))) == 0) {
                        t0 = 0xC1C3FB0;
                    } else {
                        t0 = 0xC1C3FBC;
                    }
                    t1 = t0;
                } else {
                    *(volatile short *)((a4 + 0x44));
                    if ((*(signed char *)((a4 + 0x9))) == 0) {
                        t0 = 0xC1C3FD4;
                    } else {
                        t0 = 0xC1C3FDC;
                    }
                    t1 = t0;
                }
                FUN_0c187cac(0xC4B107C, 0xC5421F8, a6, a7, t1);
                u1 = (float)(((short)(*(signed char *)((a4 + 0x9))) * (short)0x13) + 0x1);
                return FUN_0c05b288(0xC4B107C, (u1 * u0), u0, 1.0f, 1.0f);
            }
            return 0x44;
        }
        return 0x64;
    }
    t0 = *(signed char *)((a4 + 0x9));
    if (((*(signed char *)0xC542257) - 1) != t0) {
        return t0;
    }
    *(volatile short *)((((a4 + 0x12) + 0x6) + 0x4));
    *(volatile short *)(((a4 + 0x12) + 0x0));
    *(volatile short *)(((a4 + 0x12) + 0x4));
    *(volatile short *)((((a4 + 0x12) + 0x6) + 0x2));
    *(volatile short *)(((a4 + 0x12) + 0x2));
    *(volatile short *)((((a4 + 0x12) + 0x6) + 0x0));
    
    *(volatile float *)0xC05D508;
    if ((*(signed char *)((a4 + 0x9))) == 0) {
        t0 = 0xC1C3F74;
    } else {
        t0 = 0xC1C3F88;
    }
    FUN_0c187cac(0xC4B107C, (a4 + 0x12), (a4 + 0x12), a7, t0);
    u1 = (float)(((short)(*(signed char *)((a4 + 0x9))) * (short)0x13) + 0x1);
    return FUN_0c05b288(0xC4B107C, (u1 * u0), u0, 1.0f, 1.0f);
}

int FUN_0c05d45c(int a4)
{
    int t1;

    if (((*(signed char *)0xC542255) == 0) && (t1 = *(signed char *)0xC542254, t1 == 0)) {
        return 0x5C;
    }
    return FUN_0c05d1a0((*(signed char *)((a4 + 0x9))));
}

int FUN_0c05d480(int a4)
{
    int t1;

    if (((*(signed char *)0xC542255) == 0) && (t1 = *(signed char *)0xC542254, t1 == 0)) {
        return 0x5C;
    }
    return FUN_0c05d1a0((*(signed char *)((a4 + 0x9))));
}

int FUN_0c05d4a4(int a4)
{
    int t1;

    if (((*(signed char *)0xC542255) == 0) && (t1 = *(signed char *)0xC542254, t1 == 0)) {
        return 0x5C;
    }
    return FUN_0c05d1a0((*(signed char *)((a4 + 0x9))));
}

int FUN_0c05d4c8(int a4)
{
    if ((*(signed char *)0xC541F71) == 0) {
        if ((((*(signed char *)0xC542257) | (*(signed char *)0xC542259)) & ((int)0x1 << (int)((-(*(signed char *)((a4 + 0x9)))) + 0x1))) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c05d608(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t1;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 4));
    t1 = *(int *)(((int)stk + 0));
    return FUN_0c05b288((*(int *)(((((((((unsigned char)t0 << 2) + t1) << 1) + (((unsigned char)t0 << 2) + t1)) << 2) + 0xC1C3FF4) + 0x8))), (*(float *)(((((((((unsigned char)t0 << 2) + t1) << 1) + (((unsigned char)t0 << 2) + t1)) << 2) + 0xC1C3FF4) + 0x0))), ((((struct o4_float *)((((((((unsigned char)t0 << 2) + t1) << 1) + (((unsigned char)t0 << 2) + t1)) << 2) + 0xC1C3FF4)))->v)), 1.0f, 1.0f);
}

int FUN_0c05d648(int a4)
{
    int stk[3];
    register int t0;
    register float u4;
    register int t5;

    *(unsigned char *)(((int)stk + 8)) = a4;
    t0 = FUN_0c05cf04();
    if ((int)t0 > (int)0x1) {
        *(int *)((int)stk + 4) = (t0);
        *(int *)((int)stk + 0) = 0xC1C40B4;
        FUN_0c187cac(0xC4B107C, 0x0, 0x0, 0x0, 0xC1C40B4);
        u4 = *(float *)0xC05D770;
        t5 = 0x15;
        if ((*(signed char *)(((int)stk + 8))) == 0) {
            t5 = 0x1;
        }
        return FUN_0c05b288(0xC4B107C, ((float)t5 * u4), u4, 1.0f, 1.0f);
    }
    return t0;
}

int FUN_0c05d6a6(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t5;
    register int t9;
    register int t16;
    register int t26;

    *(unsigned char *)(((int)stk + 24)) = a4;
    if ((*(signed char *)0xC541F65) != 0) {
        return a4;
    }
    t5 = 0x0;
    if ((*(int *)0xC542408) == 0) {
    } else {
        t5 = (*(signed char *)(((int)stk + 24)));
    }
    if ((*(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x8))) == 1) {
        *(unsigned int *)(((int)stk + 32)) = ((((signed char)t5 << 2) << 2) + 0xC5423C4);
        t9 = *(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x0));
        *(unsigned int *)(((int)stk + 20)) = t9;
        *(int *)((int)stk + 16) = (t9);
        *(int *)((int)stk + 12) = ((*(int *)((0xC257904 + (((((unsigned int)(*(int *)(((int)stk + 20))) > (unsigned int)0x1)) ? 1 : 0) << 2)))));
        *(int *)((int)stk + 8) = 0xC1C40C8;
        FUN_0c187cac(0xC4B107C, a5, a6, a7, 0xC1C40C8);
    } else {
        if ((*(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x4))) == 0) {
            *(unsigned int *)(((int)stk + 28)) = ((((signed char)t5 << 2) << 2) + 0xC5423C4);
            t16 = *(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x0));
            *(unsigned int *)(((int)stk + 20)) = t16;
            *(int *)((int)stk + 16) = (t16);
            *(int *)((int)stk + 12) = ((*(int *)((0xC257904 + (((((unsigned int)(*(int *)(((int)stk + 20))) > (unsigned int)0x1)) ? 1 : 0) << 2)))));
            *(int *)((int)stk + 8) = 0xC1C40C8;
            FUN_0c187cac(0xC4B107C, a5, a6, a7, 0xC1C40C8);
        } else {
            *(int *)((int)stk + 16) = ((*(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x8))));
            *(int *)((int)stk + 12) = ((*(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x4))));
            t26 = *(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x0));
            *(unsigned int *)(((int)stk + 20)) = t26;
            *(int *)((int)stk + 8) = (t26);
            *(int *)((int)stk + 4) = ((*(int *)((0xC257904 + (((((unsigned int)(*(int *)(((int)stk + 20))) > (unsigned int)0x1)) ? 1 : 0) << 2)))));
            *(int *)((int)stk + 0) = 0xC1C40D0;
            FUN_0c187cac(0xC4B107C, a5, a6, a7, 0xC1C40D0);
        }
    }
    return FUN_0c05b288(0xC4B107C, ((float)(*(signed char *)(((int)stk + 24))) * ((((struct o4_float *)0xC05D88C)->v))), ((((struct o0_float *)0xC05D88C)->v)), 1.0f, 1.0f);
}

void FUN_0c05d908(void)
{
    
}

void FUN_0c05d974(void)
{
    
}

int FUN_0c05d978(int a4)
{
    (((struct o68_uchar *)(a4))->v) = (*(signed char *)0xC1C40E1);
    (((struct o69_uchar *)(a4))->v) = (*(signed char *)0xC1C410B);
    (((struct o6A_uchar *)(a4))->v) = (*(signed char *)0xC1C410B);
    (((struct o6B_uchar *)(a4))->v) = (*(signed char *)0xC1C410B);
    return 0x6B;
}

int FUN_0c05d9b4(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)((((t0 << 2) + 0xC54229C) + 0x0))) > (unsigned int)(*(int *)((a4 + 0x20)))) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x5) {
                break;
            }
            continue;
        }
        break;
    }
    return t0;
}

int FUN_0c05d9d6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t6;
    register int t7;

    t0 = 0x260;
    t1 = 0xC541CDC;
    t2 = 0xC541CDC;
    t3 = 0x0;
    for (;;) {
        if ((((((struct o78_int *)(t1))->v)) != ((((struct o78_int *)(a4))->v))) && (t6 = *(int *)((t2 + 0x20)), t7 = *(int *)((a4 + 0x20)), t0 = t7, (unsigned int)t6 >= (unsigned int)t0)) {
            t3 = (t3 + 0x1);
        }
        t1 = (t1 + 0x98);
        t2 = (t2 + 0x98);
        if ((unsigned int)t1 >= (unsigned int)0xC541F3C) {
            break;
        }
    }
    return t3;
}

int FUN_0c05da24(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = FUN_0c05d9b4(a4);
    t1 = t0;
    if ((int)t0 < (int)0x5) {
        if ((int)0x9 > (int)t0) {
            t2 = 0x9;
            for (;;) {
                *(unsigned char *)(((0xC542271 + (t2 << 2)) + 0x0)) = (*(signed char *)(((0xC542271 + ((t2 - 1) << 2)) + 0x0)));
                *(unsigned char *)(((0xC542271 + (t2 << 2)) + 0x1)) = (*(signed char *)(((0xC542271 + ((t2 - 1) << 2)) + 0x1)));
                *(unsigned char *)(((0xC542271 + (t2 << 2)) + 0x2)) = (*(signed char *)(((0xC542271 + ((t2 - 1) << 2)) + 0x2)));
                *(unsigned char *)(((0xC542271 + (t2 << 2)) + 0x3)) = (*(signed char *)(((0xC542271 + ((t2 - 1) << 2)) + 0x3)));
                *(unsigned int *)(((t2 << 2) + 0xC54229C)) = (*(int *)((((t2 - 1) << 2) + 0xC54229C)));
                *(unsigned char *)((0xC542267 + t2)) = (*(signed char *)((((t2 - 1) + 0xC542267) + 0x0)));
                t3 = t2;
                t4 = (t2 - 1);
                t2 = (t2 - 1);
                *(unsigned char *)((0xC54237C + t3)) = (*(signed char *)(((t4 + 0xC54237C) + 0x0)));
                if ((int)t2 <= (int)t0) {
                    break;
                }
            }
        }
        *(unsigned char *)(((0xC542271 + (t0 << 2)) + 0x0)) = (*(signed char *)(((a4 + 0x68) + 0x0)));
        *(unsigned char *)(((0xC542271 + (t0 << 2)) + 0x1)) = (*(signed char *)((a4 + 0x69)));
        *(unsigned char *)(((0xC542271 + (t0 << 2)) + 0x2)) = (*(signed char *)((a4 + 0x6A)));
        *(unsigned char *)(((0xC542271 + (t0 << 2)) + 0x3)) = (*(signed char *)((a4 + 0x6B)));
        *(unsigned int *)((((t0 << 2) + 0xC54229C) + 0x0)) = (*(int *)((a4 + 0x20)));
        *(unsigned char *)(((0xC542267 + t0) + 0x0)) = (*(signed char *)((a4 + 0x49)));
        t2 = FUN_0c0fb6cc();
        *(unsigned char *)(((t0 + 0xC54237C) + 0x0)) = t2;
        t1 = t2;
    }
    return t1;
}

int FUN_0c05db24(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)((((t0 << 2) + 0xC5422F8) + 0x0))) > (unsigned int)(*(int *)((a4 + 0x20)))) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x5) {
                break;
            }
            continue;
        }
        break;
    }
    return t0;
}

int FUN_0c05db54(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t6;
    register int t7;

    t0 = 0x260;
    t1 = 0xC541CDC;
    t2 = 0xC541CDC;
    t3 = 0x0;
    for (;;) {
        if ((((((struct o78_int *)(t1))->v)) != ((((struct o78_int *)(a4))->v))) && (t6 = *(int *)((t2 + 0x20)), t7 = *(int *)((a4 + 0x20)), t0 = t7, (unsigned int)t6 >= (unsigned int)t0)) {
            t3 = (t3 + 0x1);
        }
        t1 = (t1 + 0x98);
        t2 = (t2 + 0x98);
        if ((unsigned int)t1 >= (unsigned int)0xC541F3C) {
            break;
        }
    }
    return t3;
}

int FUN_0c05db92(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = FUN_0c05db24(a4);
    t1 = t0;
    if ((int)t0 < (int)0x5) {
        if ((int)0x9 > (int)t0) {
            t2 = 0x9;
            for (;;) {
                *(unsigned char *)(((0xC5422CE + (t2 << 2)) + 0x0)) = (*(signed char *)(((0xC5422CE + ((t2 - 1) << 2)) + 0x0)));
                *(unsigned char *)(((0xC5422CE + (t2 << 2)) + 0x1)) = (*(signed char *)(((0xC5422CE + ((t2 - 1) << 2)) + 0x1)));
                *(unsigned char *)(((0xC5422CE + (t2 << 2)) + 0x2)) = (*(signed char *)(((0xC5422CE + ((t2 - 1) << 2)) + 0x2)));
                *(unsigned char *)(((0xC5422CE + (t2 << 2)) + 0x3)) = (*(signed char *)(((0xC5422CE + ((t2 - 1) << 2)) + 0x3)));
                *(unsigned int *)(((t2 << 2) + 0xC5422F8)) = (*(int *)((((t2 - 1) << 2) + 0xC5422F8)));
                *(unsigned char *)((0xC5422C4 + t2)) = (*(signed char *)((((t2 - 1) + 0xC5422C4) + 0x0)));
                t3 = t2;
                t4 = (t2 - 1);
                t2 = (t2 - 1);
                *(unsigned char *)((0xC542386 + t3)) = (*(signed char *)(((t4 + 0xC542386) + 0x0)));
                if ((int)t2 <= (int)t0) {
                    break;
                }
            }
        }
        *(unsigned char *)(((0xC5422CE + (t0 << 2)) + 0x0)) = (*(signed char *)(((a4 + 0x68) + 0x0)));
        *(unsigned char *)(((0xC5422CE + (t0 << 2)) + 0x1)) = (*(signed char *)((a4 + 0x69)));
        *(unsigned char *)(((0xC5422CE + (t0 << 2)) + 0x2)) = (*(signed char *)((a4 + 0x6A)));
        *(unsigned char *)(((0xC5422CE + (t0 << 2)) + 0x3)) = (*(signed char *)((a4 + 0x6B)));
        *(unsigned int *)((((t0 << 2) + 0xC5422F8) + 0x0)) = (*(int *)((a4 + 0x20)));
        *(unsigned char *)(((0xC5422C4 + t0) + 0x0)) = (*(signed char *)((a4 + 0x49)));
        t2 = FUN_0c0fb6cc();
        *(unsigned char *)(((t0 + 0xC542386) + 0x0)) = t2;
        t1 = t2;
    }
    return t1;
}

void FUN_0c05dcac(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((unsigned int)0xC257920 < (unsigned int)0xC2579C8) {
        t0 = 0xC257920;
        t1 = 0xC257920;
        for (;;) {
            t2 = *(int *)((t0 + 0x0));
            if ((*(signed char *)((t2 + 0x0))) == (*(signed char *)(((a4 + 0x68) + 0x0)))) {
                t3 = (*(signed char *)((t2 + 0x1)));
                t4 = t3;
                t3 = (*(signed char *)(((a4 + 0x68) + 0x1)));
                if (t4 == t3) {
                    t3 = (*(signed char *)((t2 + 0x2)));
                    t2 = t3;
                    t3 = (*(signed char *)(((a4 + 0x68) + 0x2)));
                    if (t2 == t3) {
                        break;
                    }
                    t0 = (t0 + 0x8);
                    t1 = (t1 + 0x8);
                    if ((unsigned int)t0 >= (unsigned int)0xC2579C8) {
                        return;
                    }
                    continue;
                }
                t0 = (t0 + 0x8);
                t1 = (t1 + 0x8);
                if ((unsigned int)t0 >= (unsigned int)0xC2579C8) {
                    return;
                }
                continue;
            }
            t0 = (t0 + 0x8);
            t1 = (t1 + 0x8);
            if ((unsigned int)t0 >= (unsigned int)0xC2579C8) {
                return;
            }
        }
        (((struct o68_uchar *)(a4))->v) = (*(signed char *)(((*(int *)(((t1 + 0x4) + 0x0))) + 0x0)));
        (((struct o69_uchar *)(a4))->v) = (*(signed char *)(((*(int *)(((t1 + 0x4) + 0x0))) + 0x1)));
        (((struct o6A_uchar *)(a4))->v) = (*(signed char *)(((*(int *)(((t1 + 0x4) + 0x0))) + 0x2)));
        return;
    }
}

int FUN_0c05dd10(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x9));
    t2 = *(short *)((0xC542868 + ((((t0 << 2) + t0) << 2) << 1)));
    if ((0x200 & (unsigned short)t2) == 0) {
        if ((0x80 & (unsigned short)t2) == 0) {
            if ((0x100 & (unsigned short)t2) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c05dd3e(int a4)
{
    int t0;
    register int t11;
    register int t22;
    register int t46;
    register int t24;
    register int t43;
    register int t27;
    register int t29;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    int t58;
    register int t61;
    register int t66;
    register int t82;
    register int t112;
    register int t84;
    register int t87;
    register int t89;
    register int t90;
    register int t91;
    register int t92;
    register int t93;
    register int t106;
    register int t123;
    register int t129;
    register int t147;
    register int t151;
    register int t156;
    register int t114;
    register int t44;
    register int t110;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 == 3) {
                if ((((((struct o6C_int *)(a4))->v)) & 0xC00) != 0) {
                    FUN_0c05aab6((*(signed char *)((a4 + 0x9))), 0x5);
                    t11 = 0x2C;
                    if ((*(signed char *)((a4 + 0x4))) == 44) {
                        t11 = 0x2B;
                    }
                    *(unsigned char *)((a4 + 0x4)) = t11;
                }
                *(unsigned char *)((((*(signed char *)(((a4 + 0x1) + 0x2))) + (a4 + 0x68)) + 0x0)) = (*(signed char *)((0xC1C40E1 + (*(signed char *)(((a4 + 0x1) + 0x3))))));
                t22 = FUN_0c05dd10(a4);
                t46 = t22;
                if (t22 != 0) {
                    t24 = *(signed char *)((a4 + 0x4));
                    if (t24 == 43) {
                        *(unsigned short *)((a4 + 0xA)) = 0x1;
                        t44 = (FUN_0c05aab6((*(signed char *)((a4 + 0x9))), 0x2));
                    } else {
                        t43 = t24;
                        if (t24 == 44) {
                            t27 = *(signed char *)((a4 + 0x3));
                            t31 = *(signed char *)0xC1C410B;
                            *(unsigned char *)(((t27 + (a4 + 0x68)) + 0x0)) = t31;
                            t29 = *(signed char *)((a4 + 0x3));
                            *(unsigned char *)((a4 + 0x3)) = (t29 - 1);
                            t30 = (t29 - 1);
                            t32 = (t27 + (a4 + 0x68));
                            t33 = 0x0;
                            for (;;) {
                                if ((int)t33 > (int)0x2C) {
                                    break;
                                }
                                t32 = 0x3;
                                t31 = a4;
                                t32 = (t32 + a4);
                                t32 = (*(signed char *)((t32 + 0x0)));
                                t31 = (t31 + 0x68);
                                t32 = (t32 + t31);
                                t32 = (*(signed char *)((t32 + 0x0)));
                                t30 = t33;
                                t31 = (*(signed char *)((0xC1C40E1 + t30)));
                                if (t32 == t31) {
                                    t30 = t33;
                                    *(unsigned char *)((a4 + 0x4)) = t30;
                                }
                                t33 = (t33 + 0x1);
                            }
                            t43 = (FUN_0c05aab6((*(signed char *)((a4 + 0x9))), 0x4));
                        }
                        t44 = t43;
                    }
                    t46 = t44;
                }
                t114 = t46;
            } else {
                t114 = t0;
                if (t0 == 4) {
                    *(unsigned short *)((a4 + 0xA)) = 0x1;
                    *(unsigned char *)((a4 + 0x4)) = 0x2A;
                    (((struct o6B_uchar *)(a4))->v) = (*(signed char *)((0xC1C40E1 + (*(signed char *)((a4 + 0x4))))));
                    t114 = 0x6B;
                }
            }
        } else {
            t58 = (((struct o6C_int *)(a4))->v);
            if ((0x800 & t58) != 0) {
                FUN_0c05aab6((*(signed char *)((a4 + 0x9))), 0x5);
                t61 = *(signed char *)((a4 + 0x4));
                *(unsigned char *)((a4 + 0x4)) = (t61 - 1);
                if ((int)(signed char)(t61 - 1) < 0) {
                    *(unsigned char *)((a4 + 0x4)) = 0x2C;
                }
            } else {
                if ((0x400 & t58) != 0) {
                    FUN_0c05aab6((*(signed char *)((a4 + 0x9))), 0x5);
                    t66 = *(signed char *)((a4 + 0x4));
                    *(unsigned char *)((a4 + 0x4)) = (t66 + 0x1);
                    if ((int)(signed char)(t66 + 0x1) > (int)0x2C) {
                        *(unsigned char *)((a4 + 0x4)) = 0x0;
                    }
                }
            }
            *(unsigned char *)((((*(signed char *)(((a4 + 0x1) + 0x2))) + (a4 + 0x68)) + 0x0)) = (*(signed char *)((0xC1C40E1 + (*(signed char *)(((a4 + 0x1) + 0x3))))));
            t82 = FUN_0c05dd10(a4);
            t112 = t82;
            if (t82 == 0) {
            } else {
                t84 = *(signed char *)((a4 + 0x4));
                if (t84 == 43) {
                    *(unsigned short *)((a4 + 0xA)) = 0x1;
                    t110 = (FUN_0c05aab6((*(signed char *)((a4 + 0x9))), 0x3));
                } else {
                    if (t84 == 44) {
                        t87 = *(signed char *)((a4 + 0x3));
                        t91 = *(signed char *)0xC1C410B;
                        *(unsigned char *)(((t87 + (a4 + 0x68)) + 0x0)) = t91;
                        t89 = *(signed char *)((a4 + 0x3));
                        *(unsigned char *)((a4 + 0x3)) = (t89 - 1);
                        t90 = (t89 - 1);
                        t92 = (t87 + (a4 + 0x68));
                        t93 = 0x0;
                        for (;;) {
                            if ((int)t93 > (int)0x2C) {
                                break;
                            }
                            t92 = 0x3;
                            t91 = a4;
                            t92 = (t92 + a4);
                            t92 = (*(signed char *)((t92 + 0x0)));
                            t91 = (t91 + 0x68);
                            t92 = (t92 + t91);
                            t92 = (*(signed char *)((t92 + 0x0)));
                            t90 = t93;
                            t91 = (*(signed char *)((0xC1C40E1 + t90)));
                            if (t92 == t91) {
                                t90 = t93;
                                *(unsigned char *)((a4 + 0x4)) = t90;
                            }
                            t93 = (t93 + 0x1);
                        }
                        t110 = (FUN_0c05aab6((*(signed char *)((a4 + 0x9))), 0x4));
                    } else {
                        FUN_0c05aab6((*(signed char *)((a4 + 0x9))), 0x3);
                        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
                        t106 = *(signed char *)((a4 + 0x3));
                        t110 = t106;
                        if (t106 == 3) {
                            *(unsigned char *)((a4 + 0x4)) = 0x2B;
                            t110 = 0x2B;
                        }
                    }
                }
                t112 = t110;
            }
            t114 = t112;
        }
        t156 = t114;
    } else {
        if ((0x800 & ((((struct o6C_int *)(a4))->v))) != 0) {
            FUN_0c05aab6((*(signed char *)((a4 + 0x9))), 0x5);
            t123 = *(signed char *)((a4 + 0x4));
            *(unsigned char *)((a4 + 0x4)) = (t123 - 1);
            if ((int)(signed char)(t123 - 1) < 0) {
                *(unsigned char *)((a4 + 0x4)) = 0x2B;
            }
        } else {
            if ((0x400 & ((((struct o6C_int *)(a4))->v))) != 0) {
                FUN_0c05aab6((*(signed char *)((a4 + 0x9))), 0x5);
                t129 = *(signed char *)((a4 + 0x4));
                *(unsigned char *)((a4 + 0x4)) = (t129 + 0x1);
                if ((int)(signed char)(t129 + 0x1) > (int)0x2B) {
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                }
            }
        }
        *(unsigned char *)((((*(signed char *)(((a4 + 0x1) + 0x2))) + (a4 + 0x68)) + 0x0)) = (*(signed char *)((0xC1C40E1 + (*(signed char *)(((a4 + 0x1) + 0x3))))));
        t147 = FUN_0c05dd10(a4);
        t156 = t147;
        if (t147 == 0) {
        } else {
            FUN_0c05aab6((*(signed char *)((a4 + 0x9))), 0x3);
            if ((*(signed char *)((a4 + 0x4))) == 43) {
                *(unsigned short *)((a4 + 0xA)) = 0x1;
                t156 = 0x1;
            } else {
                t151 = *(signed char *)((a4 + 0x3));
                *(unsigned char *)((a4 + 0x3)) = (t151 + 0x1);
                t156 = (t151 + 0x1);
            }
        }
    }
    return t156;
}

int FUN_0c05dfc2(int a4)
{
    int stk[1];
    register int t0;
    register int t5;
    register float u17;
    register int t18;
    int t13;

    t0 = *(signed char *)0xC541F40;
    if ((unsigned char)t0 != 7) {
        if ((unsigned char)t0 != 8) {
            t5 = *(signed char *)((a4 + 0x2));
            if (t5 != 0) {
                if (t5 != 1) {
                    return t5;
                }
                if ((*(short *)((a4 + 0xA))) != 0) {
                    *(unsigned short *)((a4 + 0xA)) = ((*(short *)((a4 + 0xA))) - 1);
                }
                if (((*(short *)((a4 + 0xA))) == 0) && (t13 = *(signed char *)0xC542254, t13 == 0)) {
                    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((a4 + 0x9)));
                    memset(a4, 0x0, 0x98);
                    *(unsigned char *)((a4 + 0x9)) = (*(signed char *)(((int)stk + 0)));
                    *(unsigned char *)((a4 + 0x1)) = 0x0;
                    return 0x0;
                }
                u17 = *(float *)0xC05E0F4;
                t18 = *(signed char *)((a4 + 0x9));
                return FUN_0c05b288(0xC1C4110, ((float)(((((t18 << 2) << 2) << 1) - t18) + 0x1) * u17), u17, 1.0f, 1.0f);
            }
            *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
            *(unsigned short *)((a4 + 0xA)) = 0xB4;
            return 0xB4;
        }
        return (unsigned char)t0;
    }
    return (unsigned char)t0;
}

int FUN_0c05e07a(int a4, int a5, int a6, int a7)
{
    *(unsigned char *)((((a4 * 0x98) + 0xC541CDC) + 0x9)) = a4;
    (((struct o4C_uchar *)(((a4 * 0x98) + 0xC541CDC)))->v) = a5;
    return ((int (*)(int, int, int, int))(0xC05D904))(((a4 * 0x98) + 0xC541CDC), a5, a6, a7);
}

int FUN_0c05e13a(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;

    t6 = *(signed char *)0xC2579C8;
    if (t6 != 0) {
        if (t6 == 1) {
            if ((*(signed char *)0xC541F5E) == 0) {
                (((struct o1_uchar *)0xC5423C0)->v) = (*(signed char *)0xC5423C0);
                if ((*(signed char *)0xC5423C0) != 0) {
                    (((struct o0_uchar *)0xC5423C0)->v) = 0x0;
                    FUN_0c05b250();
                }
            }
            FUN_0c05a812();
            if (((*(signed char *)0xC54208F) == 0) && (t0 = *(signed char *)0xC542092, t0 == 0)) {
                *(unsigned int *)0xC542098 = ((*(int *)0xC542098) + 0x1);
                t0 = 0x0;
                t6 = 0xA0;
                for (;;) {
                    FUN_0c18778c(t0, t6, 0xC5426C4);
                    t0 = (t1 + 0x28);
                    t6 = t2;
                    if ((unsigned int)t0 >= (unsigned int)t2) {
                        break;
                    }
                }
            }
        }
    } else {
        *(unsigned char *)0xC2579C8 = ((*(signed char *)0xC2579C8) + 0x1);
        (((struct o2E_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o2C_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o2A_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o28_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o6_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o4_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o2_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o0_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o2E_ushort *)0xC542864)->v) = 0x0;
        (((struct o2C_ushort *)0xC542864)->v) = 0x0;
        (((struct o2A_ushort *)0xC542864)->v) = 0x0;
        (((struct o28_ushort *)0xC542864)->v) = 0x0;
        (((struct o6_ushort *)0xC542864)->v) = 0x0;
        (((struct o4_ushort *)0xC542864)->v) = 0x0;
        (((struct o2_ushort *)0xC542864)->v) = 0x0;
        (((struct o0_ushort *)0xC542864)->v) = 0x0;
        memset(0xC54239C, 0x0, 0x94);
        (((struct o1_uchar *)0xC54208F)->v) = 0x0;
        (((struct o0_uchar *)0xC54208F)->v) = 0x0;
        (((struct o2_uchar *)0xC54208F)->v) = 0x0;
        if ((*(signed char *)0xC541F5E) == 0) {
            (((struct o1_uchar *)0xC5423C0)->v) = (*(signed char *)0xC5423C0);
            if ((*(signed char *)0xC5423C0) != 0) {
                (((struct o0_uchar *)0xC5423C0)->v) = 0x0;
                FUN_0c05b250();
            }
        }
        FUN_0c05a812();
        if (((*(signed char *)0xC54208F) == 0) && (t3 = *(signed char *)0xC542092, t3 == 0)) {
            *(unsigned int *)0xC542098 = ((*(int *)0xC542098) + 0x1);
            t0 = 0x0;
            t1 = 0xA0;
            for (;;) {
                FUN_0c18778c(t0, t1, 0xC5426C4);
                t0 = (t4 + 0x28);
                t1 = t5;
                if ((unsigned int)t0 >= (unsigned int)t5) {
                    break;
                }
            }
        }
    }
    return FUN_0c02cade();
}

int FUN_0c05e238(int a4)
{
    int stk[7];
    register int t0;
    register int t3;
    register int t16;
    register int t22;
    register int t28;
    register int t34;
    register int t40;
    register int t46;
    register int t53;
    register int t59;
    register int t66;
    register int t72;
    register int t79;
    register int t85;
    register int t92;

    *(unsigned char *)(((int)stk + 24)) = a4;
    t0 = *(signed char *)(((int)stk + 24));
    FUN_0c17a4c0(((((t0 << 2) + t0) << 1) + 0x29), 0x35);
    t3 = *(signed char *)(((int)stk + 24));
    *(int *)((int)stk + 20) = ((*(signed char *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x4))));
    *(int *)((int)stk + 16) = 0xC1C4230;
    dbg_printf(0xC1C4230);
    FUN_0c17a4c0(((((t0 << 2) + t0) << 1) + 0x29), 0x36);
    *(int *)((int)stk + 12) = (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)));
    *(int *)((int)stk + 8) = 0xC1C423C;
    dbg_printf(0xC1C423C);
    FUN_0c17a4c0(((((t0 << 2) + t0) << 1) + 0x29), 0x37);
    *(int *)((int)stk + 4) = (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0xC)));
    *(int *)((int)stk + 0) = 0xC1C4244;
    dbg_printf(0xC1C4244);
    FUN_0c17a4c0(((((t0 << 2) + t0) << 1) + 0x29), 0x38);
    t16 = 0x0;
    if ((0x2000 & (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)))) != 0) {
        t16 = 0x1;
    }
    *(int *)((int)stk + 20) = (t16);
    *(int *)((int)stk + 16) = 0xC1C4250;
    dbg_printf(0xC1C4250);
    FUN_0c17a4c0(((((t0 << 2) + t0) << 1) + 0x29), 0x3A);
    t22 = 0x0;
    if ((0x1000 & (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)))) != 0) {
        t22 = 0x1;
    }
    *(int *)((int)stk + 20) = (t22);
    *(int *)((int)stk + 16) = 0xC1C4250;
    dbg_printf(0xC1C4250);
    FUN_0c17a4c0(((((t0 << 2) + t0) << 1) + 0x28), 0x39);
    t28 = 0x0;
    if ((0x800 & (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)))) != 0) {
        t28 = 0x1;
    }
    *(int *)((int)stk + 20) = (t28);
    *(int *)((int)stk + 16) = 0xC1C4250;
    dbg_printf(0xC1C4250);
    FUN_0c17a4c0(((((t0 << 2) + t0) << 1) + 0x2A), 0x39);
    t34 = 0x0;
    if ((0x400 & (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)))) != 0) {
        t34 = 0x1;
    }
    *(int *)((int)stk + 20) = (t34);
    *(int *)((int)stk + 16) = 0xC1C4250;
    dbg_printf(0xC1C4250);
    FUN_0c17a4c0(((((t0 << 2) + t0) << 1) + 0x2C), 0x38);
    t40 = 0x0;
    if ((0x8000 & (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)))) != 0) {
        t40 = 0x1;
    }
    *(int *)((int)stk + 20) = (t40);
    *(int *)((int)stk + 16) = 0xC1C4250;
    dbg_printf(0xC1C4250);
    *(unsigned int *)(((int)stk + 24)) = ((((t0 << 2) + t0) << 1) + 0x2D);
    FUN_0c17a4c0(((((t0 << 2) + t0) << 1) + 0x2D), 0x39);
    t46 = 0x0;
    if ((0x200 & (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)))) != 0) {
        t46 = 0x1;
    }
    *(int *)((int)stk + 20) = (t46);
    *(int *)((int)stk + 16) = 0xC1C4250;
    dbg_printf(0xC1C4250);
    FUN_0c17a4c0((*(int *)(((int)stk + 24))), 0x3A);
    t53 = 0x0;
    if ((0x100 & (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)))) != 0) {
        t53 = 0x1;
    }
    *(int *)((int)stk + 20) = (t53);
    *(int *)((int)stk + 16) = 0xC1C4250;
    dbg_printf(0xC1C4250);
    *(unsigned int *)(((int)stk + 24)) = ((((t0 << 2) + t0) << 1) + 0x2E);
    FUN_0c17a4c0(((((t0 << 2) + t0) << 1) + 0x2E), 0x39);
    t59 = 0x0;
    if ((0x80 & (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)))) != 0) {
        t59 = 0x1;
    }
    *(int *)((int)stk + 20) = (t59);
    *(int *)((int)stk + 16) = 0xC1C4250;
    dbg_printf(0xC1C4250);
    FUN_0c17a4c0((*(int *)(((int)stk + 24))), 0x3A);
    t66 = 0x0;
    if ((0x40 & (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)))) != 0) {
        t66 = 0x1;
    }
    *(int *)((int)stk + 20) = (t66);
    *(int *)((int)stk + 16) = 0xC1C4250;
    dbg_printf(0xC1C4250);
    *(unsigned int *)(((int)stk + 24)) = ((((t0 << 2) + t0) << 1) + 0x2F);
    FUN_0c17a4c0(((((t0 << 2) + t0) << 1) + 0x2F), 0x39);
    t72 = 0x0;
    if ((0x8 & (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)))) != 0) {
        t72 = 0x1;
    }
    *(int *)((int)stk + 20) = (t72);
    *(int *)((int)stk + 16) = 0xC1C4250;
    dbg_printf(0xC1C4250);
    FUN_0c17a4c0((*(int *)(((int)stk + 24))), 0x3A);
    t79 = 0x0;
    if ((0x4 & (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)))) != 0) {
        t79 = 0x1;
    }
    *(int *)((int)stk + 20) = (t79);
    *(int *)((int)stk + 16) = 0xC1C4250;
    dbg_printf(0xC1C4250);
    *(unsigned int *)(((int)stk + 24)) = ((((t0 << 2) + t0) << 1) + 0x30);
    FUN_0c17a4c0(((((t0 << 2) + t0) << 1) + 0x30), 0x39);
    t85 = 0x0;
    if ((0x2 & (unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10)))) != 0) {
        t85 = 0x1;
    }
    *(int *)((int)stk + 20) = (t85);
    *(int *)((int)stk + 16) = 0xC1C4250;
    dbg_printf(0xC1C4250);
    FUN_0c17a4c0((*(int *)(((int)stk + 24))), 0x3A);
    t92 = 0x1;
    if (((unsigned short)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + 0xC5426C4) + 0x10))) & 0x1) == 0) {
        t92 = 0x0;
    }
    *(int *)((int)stk + 20) = (t92);
    *(int *)((int)stk + 16) = 0xC1C4250;
    return (dbg_printf(0xC1C4250));
}

int FUN_0c05e478(void)
{
    FUN_0c05e238(0x0);
    FUN_0c05e238(0x1);
    FUN_0c05e238(0x2);
    return FUN_0c05e238(0x3);
}
