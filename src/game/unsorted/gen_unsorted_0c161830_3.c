/* game/unsorted: functions 0C161830-0C163134, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(int);
int FUN_0c162348(int a4);
int FUN_0c162488(int a4, int a5, int a6);
int FUN_0c1625ae(int a4, int a5);

int FUN_0c162348(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = math_sin_angle16((((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x14)) * 0x71C));
    u1 = 4.0f;
    u1 = u1 + 0.5f * u0;
    (((struct o40_float *)(a4))->v) = u1;
    (((struct o44_float *)(a4))->v) = u1;
    (((struct o48_float *)(a4))->v) = u1;
    u0 = math_sin_angle16((*(short *)((a4 + 0x1E))));
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + (int)(((float)(((int)((int)(FUN_0c179ac0()) % (int)0x5)) + 0x4) * 65536.0f) / 360.0f));
    u1 = math_sin_angle16(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8))) + 0x4000));
    u2 = (u0 * 4.5f);
    u3 = ((((struct o28_float *)(a4))->v));
    u3 = u3 + u2 * u1;
    (((struct o28_float *)(a4))->v) = u3;
    u1 = math_cos_angle16(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8))) + 0x4000));
    u2 = (u0 * 4.5f);
    u0 = ((((struct o30_float *)(a4))->v));
    u0 = u0 + u2 * u1;
    (((struct o30_float *)(a4))->v) = u0;
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 2.5f);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c162488(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t11;
    register int t9;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC162348;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798(t0);
        *(unsigned int *)((t7 + 0x34)) = 0x0;
        *(unsigned int *)((t7 + 0x38)) = 0x0;
        *(unsigned int *)((t7 + 0x3C)) = 0x0;
        *(unsigned short *)((t7 + 0x1C)) = 0x46;
        *(unsigned short *)((t7 + 0x1E)) = 0x0;
        t9 = (((struct oC4_int *)(t7))->v);
        FUN_0c03744a(t9, 0x0, 0x29, (*(int *)0xC4B40D0));
        *(unsigned char *)((t9 + 0x0)) = 0x1;
        *(unsigned short *)((t9 + 0x6)) = 0x23F;
        (((struct o8C_float *)(t9))->v) = 4.0f;
        (((struct o88_float *)(t9))->v) = 4.0f;
        (((struct o84_float *)(t9))->v) = 4.0f;
        (((struct o18_float *)(t9))->v) = 1.0f;
        (((struct o20_float *)(t9))->v) = 0.200000003f;
        (((struct o1C_float *)(t9))->v) = 0.200000003f;
        t11 = 0x1C;
    }
    return t11;
}

int FUN_0c1625ae(int a4, int a5)
{
    int stk[6];
    register int t9;
    register float u10;
    register float u6;
    register int t13;
    register int t15;
    register int t18;
    register int t39;
    register int t22;
    register int t23;
    register float u24;
    register int t26;
    register int t50;
    register float u2;

    *(unsigned int *)(((int)stk + 0)) = a4;
    if ((unsigned int)a5 >= (unsigned int)0x2710) {
    } else {
        t9 = 0x4;
        u10 = 21.0f;
        if ((unsigned int)a5 >= (unsigned int)0x3E8) {
        } else {
            t9 = 0x3;
            u6 = 22.0f;
            if ((unsigned int)a5 >= (unsigned int)0x64) {
            } else {
                t9 = 0x1;
                if ((unsigned int)a5 >= (unsigned int)0xA) {
                    t9 = 0x2;
                    u2 = 11.0f;
                }
                u6 = u2;
            }
            u10 = u6;
        }
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0xC)) = ((int)((unsigned int)a5 / (unsigned int)0x3E8));
        t13 = (int)((unsigned int)a5 % (unsigned int)0x3E8);
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x8)) = ((int)((unsigned int)t13 / (unsigned int)0x64));
        t15 = (int)((unsigned int)t13 % (unsigned int)0x64);
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = ((int)((unsigned int)t15 / (unsigned int)0xA));
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = ((int)((unsigned int)t15 % (unsigned int)0xA));
        t18 = FUN_0c03f444(0x5, 0x0, t9);
        t39 = t18;
        if (t18 != 0) {
            *(unsigned char *)((t18 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t18 + 0x4)) = 0xC162560;
            (((struct oA8_uchar *)(t18))->v) = 0x1;
            (((struct oAC_ushort *)(t18))->v) = 0x21;
            (((struct oA9_uchar *)(t18))->v) = 0x21;
            (((struct o48_float *)(t18))->v) = 1.0f;
            (((struct o44_float *)(t18))->v) = 1.0f;
            (((struct o40_float *)(t18))->v) = 1.0f;
            *(volatile int *)(((int)stk + 0));
            FUN_0c187798(0x21);
            (((struct o2C_float *)(t18))->v) = (((((struct o2C_float *)(t18))->v)) + 55.0f);
            *(unsigned short *)((t18 + 0x1C)) = 0x64;
            if ((int)t9 > 0) {
                t22 = 0x0;
                t23 = 0x0;
                u24 = u10;
                for (;;) {
                    t26 = *(int *)((((0xC4 + t18) + t23) + 0x0));
                    FUN_0c03744a(t26, 0x0, (*(int *)((((*(int *)(((((int)stk + 0) + 0x4) + t23))) << 2) + 0xC2A2E38))), (*(int *)0xC4B40D0));
                    *(unsigned char *)((t26 + 0x0)) = 0x1;
                    *(unsigned short *)((t26 + 0x6)) = 0x30;
                    (((struct o8C_float *)(t26))->v) = 2.20000005f;
                    (((struct o88_float *)(t26))->v) = 2.20000005f;
                    (((struct o84_float *)(t26))->v) = 2.20000005f;
                    (((struct o6C_float *)(t26))->v) = u24;
                    u24 = (u24 - 22.0f);
                    (((struct o70_float *)(t26))->v) = 0.0f;
                    t22 = (t22 + 0x1);
                    (((struct o74_float *)(t26))->v) = 0.0f;
                    t23 = (t23 + 0x4);
                    if ((int)t22 >= (int)t9) {
                        break;
                    }
                }
            }
            *(unsigned short *)((t18 + 0x1C)) = 0xE;
            t39 = 0xE;
        }
        t50 = t39;
    }
    return t50;
}
