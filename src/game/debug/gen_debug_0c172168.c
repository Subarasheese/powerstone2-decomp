/* game/debug: functions 0C172168-0C1732C0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o45_uchar { char p[0x45]; unsigned char v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c067672(int);
int thunk_FUN_0c0385e0(int);
int FUN_0c17a550(int);
int nlUnitMatrix(void);
int FUN_0c181bb0(void);
int FUN_0c181c30(float);
int FUN_0c172168(void);
int FUN_0c172204(int a4);
int FUN_0c1723b4(int a4, int a5, int a6);
int FUN_0c172434(int a4, int a5);

int FUN_0c172168(void)
{
    register float u2;
    register float u3;
    register int t4;
    register float u6;
    register int t8;

    nlUnitMatrix();
    FUN_0c181c30(1.0f);
    u2 = (((struct o0_float *)0xC172270)->v);
    u3 = (((struct o4_float *)0xC172270)->v);
    t4 = 0x0;
    for (;;) {
        u6 = ((float)t4 * ((((struct o8_float *)0xC172270)->v)));
        FUN_0c181bb0();
        t8 = FUN_0c181bb0();
        t4 = (t4 + 0x1);
        if ((int)t4 > (int)0x14) {
            break;
        }
    }
    return t8;
}

int FUN_0c172204(int a4)
{
    int stk[7];
    register int t0;
    register float u5;
    register int t13;
    register int t14;
    register int t15;
    register float u25;
    register float u33;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    nlUnitMatrix();
    FUN_0c181c30(10.0f);
    u5 = -100.0f;
    if ((*(short *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1C))) == 0) {
        u5 = 100.0f;
    }
    *(float *)(((int)stk + 24)) = u5;
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        *(float *)(((int)stk + 16)) = -180.0f;
    } else {
        *(float *)(((int)stk + 16)) = 20.0f;
    }
    *(float *)(((int)stk + 20)) = 200.0f;
    t13 = 0x10;
    t14 = (*(int *)((((*(signed char *)(((0x371E + (((short)t0 * (short)0x3938) + 0xC532498)) + 0x0))) << 2) + ((((FUN_0c067672((((short)t0 * (short)0x3938) + 0xC532498))) * 0x58) + 0xC28865C) + ((short)(*(signed char *)(((0x371A + (((short)t0 * (short)0x3938) + 0xC532498)) + 0x0))) * (short)0x2C)))));
    for (;;) {
        t15 = 0x10;
        for (;;) {
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 16))) + 3.0f);
            *(float *)(((int)stk + 8)) = (*(float *)(((int)stk + 20)));
            *(float *)(((int)stk + 12)) = (*(float *)(((int)stk + 24)));
            *(volatile short *)((t14 + 0x0));
            t14 = (t14 + 0x2);
            FUN_0c181bb0();
            u25 = 12.0f;
            if ((*(short *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1C))) == 0) {
                u25 = 9.0f;
            }
            t15 = (t15 - 0x1);
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u25);
            if (t15 == 0) {
                break;
            }
        }
        if ((*(signed char *)(((int)stk + 0))) == 0) {
            *(float *)(((int)stk + 16)) = -180.0f;
        } else {
            *(float *)(((int)stk + 16)) = 20.0f;
        }
        u33 = 10.0f;
        if ((*(short *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1C))) == 0) {
            u33 = 6.80000019f;
        }
        t13 = (t13 - 0x1);
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - u33);
        if (t13 == 0) {
            break;
        }
    }
    return 0x14;
}

int FUN_0c1723b4(int a4, int a5, int a6)
{
    register int t2;

    if ((*(signed char *)((a5 + 0x45))) == 0) {
        (((struct o48_uint *)(a5))->v) = (((((struct o48_int *)(a5))->v)) + 0x1);
        t2 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t2 == 0x80) {
            (((struct o48_uint *)(a5))->v) = 0x0;
        }
        FUN_0c038362(a4);
        if ((unsigned char)(*(signed char *)((0x84 + ((((struct o118_int *)(a4))->v))))) == 64) {
            (((struct o48_uint *)(a5))->v) = 0x0;
            (((struct o45_uchar *)(a5))->v) = 0x1;
        }
        if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) > ((((struct o4C_float *)(a5))->v))) {
            (((struct o4C_float *)(a5))->v) = ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v));
        }
        return thunk_FUN_0c0385e0(a4);
    }
    return 0x45;
}

int FUN_0c172434(int a4, int a5)
{
    register int t0;

    t0 = 0xFFFFFFFF;
    if ((signed char)a4 == (signed char)a5) {
        t0 = 0xFFFF7F00;
    }
    return FUN_0c17a550(t0);
}
