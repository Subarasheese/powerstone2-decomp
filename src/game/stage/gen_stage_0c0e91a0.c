/* game/stage: functions 0C0E91A0-0C0EA276, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03ea04(int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c052c00(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0cfecc(int, int, int);
int FUN_0c0d04b4(int);
int FUN_0c0e9220(int, int, int);
int nlRand(void);
int nlAddVector3op(int, int, int);
extern int FUN_0c187798();
int FUN_0c0e91a0(int a4, int a5, int a6);
int FUN_0c0e9246(void);
int FUN_0c0e92f8(int a4);
int FUN_0c0e9338(void);
int FUN_0c0e9348(int a4);
int FUN_0c0e9378(void);
int FUN_0c0e9398(int a4);
int FUN_0c0e956e(void);
void FUN_0c0e99c8(void);
int FUN_0c0e99e4(int a4);
int FUN_0c0e9a32(int a4, int a5, int a6, int a7);
int FUN_0c0e9a88(int a4, int a5, float f4);
int FUN_0c0e9ada(int a4, int a5, int a6, float f4);


int FUN_0c0e9246(void)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t10;
    register int t11;
    register int t13;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((((int)stk + 0) + (t0 << 2))) = t0;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t2 = 0xA;
    for (;;) {
        t3 = nlRand();
        t4 = ((~(((~t3) + 0x1) & 0x3)) + 0x1);
        if ((int)t3 >= 0) {
            t4 = (t3 & 0x3);
        }
        t6 = nlRand();
        t7 = ((~(((~t6) + 0x1) & 0x3)) + 0x1);
        if ((int)t6 >= 0) {
            t7 = (t6 & 0x3);
        }
        t10 = *(int *)((((t4 << 2) + ((int)stk + 0)) + 0x0));
        t2 = (t2 - 0x1);
        *(unsigned int *)((((t4 << 2) + ((int)stk + 0)) + 0x0)) = (*(int *)((((t7 << 2) + ((int)stk + 0)) + 0x0)));
        *(unsigned int *)((((t7 << 2) + ((int)stk + 0)) + 0x0)) = t10;
        if (t2 == 0) {
            break;
        }
    }
    t11 = 0x0;
    for (;;) {
        t13 = FUN_0c0e9220((*(int *)((((int)stk + 0) + (t11 << 2)))), t11, t7);
        t11 = (t11 + 0x1);
        if ((int)t11 >= (int)0x4) {
            break;
        }
    }
    return t13;
}

int FUN_0c0e92f8(int a4)
{
    register int t0;
    register int t1;

    *(unsigned char *)0xC54223C = a4;
    *(unsigned short *)0xC540996 = 0x0;
    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t0 << 2) << 1) + t0) << 2) + 0xC286D34) + (((t1 << 1) + t1) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int FUN_0c0e9338(void)
{
    register int t0;

    t0 = *(signed char *)0xC54223C;
    if (t0 == 0) {
        return FUN_0c0e9246();
    }
    return t0;
}

int FUN_0c0e9348(int a4)
{
    *(volatile signed char *)0xC54223C;
    
    return (FUN_0c052c00(0x2000, 0x1000, a4));
}

int FUN_0c0e9378(void)
{
    if ((*(signed char *)0xC54223C) != 0) {
        
    } else {
        thunk_FUN_0c05abb2(0x59, 0x0);
    }
    return FUN_0c0e9348(0xA);
}

int FUN_0c0e9398(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        t0 = 0x0;
                        if (a4 == 5) {
                            *(unsigned short *)0xC540996 = 0x0;
                            t1 = FUN_0c0cfecc(((((struct o28_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o2C_int *)0xC1CCBD0)->v)));
                            *(unsigned short *)0xC540996 = 0x0;
                            t2 = FUN_0c0cfecc(((((struct o20_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o24_int *)0xC1CCBD0)->v)));
                            *(unsigned short *)0xC540996 = 0x0;
                            t0 = (((0x0 + t1) + t2) + (FUN_0c0cfecc(((((struct o10_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o14_int *)0xC1CCBD0)->v)))));
                        }
                        t1 = t0;
                    } else {
                        *(unsigned short *)0xC540996 = 0x0;
                        t0 = FUN_0c0cfecc(((((struct o28_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o2C_int *)0xC1CCBD0)->v)));
                        *(unsigned short *)0xC540996 = 0x0;
                        t2 = FUN_0c0cfecc(((((struct o20_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o24_int *)0xC1CCBD0)->v)));
                        *(unsigned short *)0xC540996 = 0x0;
                        t3 = FUN_0c0cfecc(((((struct o18_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o1C_int *)0xC1CCBD0)->v)));
                        *(unsigned short *)0xC540996 = 0x0;
                        t1 = ((((0x0 + t0) + t2) + t3) + (FUN_0c0cfecc(((((struct o8_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct oC_int *)0xC1CCBD0)->v)))));
                    }
                    t0 = t1;
                } else {
                    *(unsigned short *)0xC540996 = 0x0;
                    t1 = FUN_0c0cfecc(((((struct o28_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o2C_int *)0xC1CCBD0)->v)));
                    *(unsigned short *)0xC540996 = 0x0;
                    t2 = FUN_0c0cfecc(((((struct o18_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o1C_int *)0xC1CCBD0)->v)));
                    *(unsigned short *)0xC540996 = 0x0;
                    t0 = ((t1 + t2) + (FUN_0c0cfecc(((((struct o0_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o4_int *)0xC1CCBD0)->v)))));
                }
                t1 = t0;
            } else {
                *(unsigned short *)0xC540996 = 0x0;
                t1 = (0x0 + (FUN_0c0cfecc(((((struct o10_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o14_int *)0xC1CCBD0)->v)))));
            }
            t0 = t1;
        } else {
            *(unsigned short *)0xC540996 = 0x0;
            t1 = FUN_0c0cfecc(((((struct o8_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct oC_int *)0xC1CCBD0)->v)));
            *(unsigned short *)0xC540996 = 0x0;
            t0 = ((0x0 + t1) + (FUN_0c0cfecc(((((struct o20_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o24_int *)0xC1CCBD0)->v)))));
        }
        t1 = t0;
    } else {
        t0 = FUN_0c0cfecc(((((struct o0_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o4_int *)0xC1CCBD0)->v)));
        *(unsigned short *)0xC540996 = 0x0;
        t2 = FUN_0c0cfecc(((((struct o18_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o1C_int *)0xC1CCBD0)->v)));
        *(unsigned short *)0xC540996 = 0x0;
        t1 = (((0x0 + t0) + t2) + (FUN_0c0cfecc(((((struct o28_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o2C_int *)0xC1CCBD0)->v)))));
    }
    t0 = 0x0;
    if ((int)t1 < 0) {
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c0e956e(void)
{
    register int t0;
    int t1;

    t0 = *(short *)0xC540998;
    *(unsigned short *)0xC540998 = (t0 - 1);
    if (((int)(short)(t0 - 1) <= 0) && (t1 = *(signed char *)0xC54223C, t1 == 0)) {
        *(unsigned short *)0xC540998 = 0x12C;
        return thunk_FUN_0c05abb2(0x4A, 0x0);
    }
    return 0x20;
}

void FUN_0c0e99c8(void)
{
    
}

int FUN_0c0e99e4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(signed char *)0xC54098D;
    if ((t0 & 0xF0) != 16) {
        t2 = (t0 & 0xF0);
        if (((t0 & 0xF0) == 32) || ((t0 & 0xF0) == 48)) {
            t3 = (t0 & 0xF0);
            if ((int)t1 >= (int)0xD) {
                t3 = 0xE;
                if ((int)t1 <= (int)0xE) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t3 = 0x14;
                }
            }
            t2 = t3;
        }
        t3 = t2;
    } else {
        t2 = (t0 & 0xF0);
        if ((int)t1 >= (int)0x8) {
            t0 = 0xE;
            if ((int)t1 > (int)0xE) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            t2 = t0;
        }
        t3 = t2;
    }
    return t3;
}

int FUN_0c0e9a32(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return FUN_0c0e99e4(a4);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1;
    if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
        (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) + 0x64);
    }
    return FUN_0c0e99e4(a4);
}

int FUN_0c0e9a88(int a4, int a5, float f4)
{

    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_1 = a5;
    w0_0 = f4;
    v0_0 = ((*(int *)((((v0_1 << 2) + (0xC4 + v0_0)) + 0x0))));
    w0_2 = (0.0f);
    w0_1 = (1.0f);
    if ((!(0.0f > w0_0))) goto L_C0E9AA6;
    v0_1 = (0x20);
    if ((!(((((struct o20_float *)(v0_0))->v)) > w0_2))) goto L_C0E9AD6;
    L_C0E9AAE:;
    w0_2 = (((struct o20_float *)(v0_0))->v);
    (((struct o20_float *)(v0_0))->v) = (w0_2 + w0_0);
    v0_1 = (0x20);
    w0_3 = (0.0f);
    if (((w0_2 + w0_0) > 0.0f)) goto L_C0E9AC4;
    *(float *)((v0_0 + v0_1)) = w0_3;
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    L_C0E9ACC:;
    w0_0 = *(float *)((v0_0 + v0_1));
    (((struct o1C_float *)(v0_0))->v) = w0_0;
    (((struct o18_float *)(v0_0))->v) = w0_0;
    v0_1 = (0x18);
    L_C0E9AD6:;
    return v0_1;
    L_C0E9AC4:;
    if ((w0_1 > (*(float *)((v0_0 + v0_1))))) goto L_C0E9ACC;
    *(float *)((v0_0 + v0_1)) = w0_1;
    goto L_C0E9ACC;
    L_C0E9AA6:;
    v0_1 = (0x20);
    if ((!(w0_1 > ((((struct o20_float *)(v0_0))->v))))) goto L_C0E9AD6;
    goto L_C0E9AAE;
}



