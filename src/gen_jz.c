/* Straight-line functions with calls and guards (batch gen_jz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371A_uchar { char p[0x371A]; unsigned char v; };
struct o371C_uchar { char p[0x371C]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03b9f0(int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059dae(int, int);
int FUN_0c059df2(int, int);
int FUN_0c067294(int, int);
int FUN_0c067734(int);
int FUN_0c070320(int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c074054(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c07c4b0(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c080320(int, float);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0bb6bc(int);
int FUN_0c1171f0(int);
int FUN_0c135b00(int, int, int, int, float);
int FUN_0c13c890(int, int);
int FUN_0c15877c(int, int);
int FUN_0c179ac0(void);
int FUN_0c18778c(void);
int FUN_0c187798(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c0845da(int a4);
int FUN_0c1675f6(int a4, int a5, int a6, int a7);
int FUN_0c0a2a28(int a4, int a5, int a6, int a7);
int FUN_0c117234(int a4, int a5, int a6, int a7);
int FUN_0c12bcbe(int a4, int a5, int a6, int a7, float f4, float f5, float f6);


int FUN_0c1675f6(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A3554)->v))) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A358C, 0xC2A3580, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3554)->v))), 0x0);
        }
        t2 = *(short *)((a4 + 0x1C));
        if (((int)t2 >= (int)((((struct o4_int *)0xC2A3554)->v))) && (t0 = (((struct o0_int *)0xC2A3554)->v), (int)t2 <= (int)t0)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3570, 0xC2A3560, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3554)->v))), (((((struct o4_int *)0xC2A3554)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t2 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A3554)->v))) {
            (((struct o14_uchar *)(a4))->v) = 0x3;
            t2 = 0x14;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x4, 0x52, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x2F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
    t0 = (((struct oC4_int *)(a4))->v);
    t2 = FUN_0c179ac0();
    t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x3);
    }
    t2 = (t3 * 0x1E);
    if ((int)(t3 * 0x1E) < 0) {
        t2 = ((t3 * 0x1E) + 0x3);
    }
    (((struct o80_uint *)(t0))->v) = ((int)(((((float)((t2 >> 1) >> 1) * ((((struct o0_float *)0xC16778C)->v))) / ((((struct o4_float *)0xC16778C)->v)))) + ((((struct o8_float *)0xC16778C)->v))) & 0xFFFF);
    *(volatile int *)((a4 + 0xC4));
    FUN_0c18778c();
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A3554)->v))) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A358C, 0xC2A3580, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3554)->v))), 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o4_int *)0xC2A3554)->v))) && (t1 = (((struct o0_int *)0xC2A3554)->v), (int)t0 <= (int)t1)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3570, 0xC2A3560, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3554)->v))), (((((struct o4_int *)0xC2A3554)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A3554)->v))) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
        t1 = 0x14;
    }
    return t1;
}


int FUN_0c117234(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                return t0;
            }
            if (t0 != 10) {
                if (t0 != 11) {
                    t1 = t0;
                    if (t0 == 99) {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                        t1 = 0x14;
                    }
                    return t1;
                }
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                u0 = *(float *)0xC1173CC;
                t0 = 0x0;
                for (;;) {
                    t1 = ((0xC4 + a4) + t0);
                    t0 = (t0 + 0x4);
                    (((struct o94_float *)((*(int *)((t1 + 0x0)))))->v) = u0;
                    if ((unsigned int)t0 >= (unsigned int)0x8) {
                        break;
                    }
                }
            }
            t0 = 0x0;
            for (;;) {
                t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
                t0 = (t0 + 0x4);
                (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + ((((struct o94_float *)(t1))->v)));
                if ((unsigned int)t0 >= (unsigned int)0x8) {
                    break;
                }
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x10) {
                return FUN_0c03f346(a4, t1, a6, a7);
            }
            return (short)(t0 + 0x1);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0xD, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), ((*(int *)0xC474718) + 0x1), 0xB, (*(int *)0xC4B410C));
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
            t0 = (t0 + 0x4);
            (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 300.0f);
            (((struct o94_float *)(t1))->v) = -18.75f;
            if ((unsigned int)t0 >= (unsigned int)0x8) {
                break;
            }
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + ((((struct o94_float *)(t1))->v)));
        if ((unsigned int)t0 >= (unsigned int)0x8) {
            break;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c12bcbe(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;

    t7 = *(signed char *)((a4 + 0x14));
    if (t7 != 0) {
        if (t7 != 1) {
            if (t7 != 2) {
                if (t7 != 3) {
                    return FUN_0c03f346(a4, 0x222, 0xA, a7);
                }
                t7 = (((struct oC4_int *)(a4))->v);
                (((struct o7C_uint *)(t7))->v) = (((((struct o7C_int *)(t7))->v)) + 0x222);
                *(volatile int *)((a4 + 0x10));
                FUN_0c187798(a4, 0x222, 0xA);
                if ((*(signed char *)((t0 + 0x2))) == 0) {
                    u0 = (((((struct o2C_float *)(t0))->v)) + f4);
                } else {
                    u0 = (((((struct o2C_float *)(t0))->v)) + f5);
                }
                (((struct o2C_float *)(t0))->v) = u0;
                u0 = (((struct o48_float *)(t0))->v);
                (((struct o48_float *)(t0))->v) = (u0 - f6);
                (((struct o44_float *)(t0))->v) = (u0 - f6);
                (((struct o40_float *)(t0))->v) = (u0 - f6);
                t7 = *(short *)((t0 + 0x1C));
                *(unsigned short *)((t0 + 0x1C)) = (t7 - 1);
                t8 = (short)(t7 - 1);
                if ((short)(t7 - 1) == 0) {
                    (((struct o14_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x14))) + 0x1);
                    t8 = 0x14;
                }
                return t8;
            }
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x222);
            *(volatile int *)((a4 + 0x10));
            FUN_0c187798(a4, 0x222, 0xA);
            if ((*(signed char *)((t4 + 0x2))) == 0) {
                u0 = (((((struct o2C_float *)(t4))->v)) + f4);
            } else {
                u0 = (((((struct o2C_float *)(t4))->v)) + f5);
            }
            (((struct o2C_float *)(t4))->v) = u0;
            t0 = *(short *)((t4 + 0x1C));
            *(unsigned short *)((t4 + 0x1C)) = (t0 - 1);
            if (((short)(t0 - 1) != 0) && (t1 = *(int *)((t4 + 0x10)), t2 = *(signed char *)((0x3715 + t1)), t2 == 26)) {
                t0 = t2;
            } else {
                *(unsigned short *)((t4 + 0x1C)) = t3;
                (((struct o14_uchar *)(t4))->v) = ((*(signed char *)((t4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x222);
        *(volatile int *)((a4 + 0x10));
        FUN_0c187798(a4, 0x222, 0xA);
        if ((*(signed char *)((t5 + 0x2))) == 0) {
            u0 = (((((struct o2C_float *)(t5))->v)) + f4);
        } else {
            u0 = (((((struct o2C_float *)(t5))->v)) + f5);
        }
        (((struct o2C_float *)(t5))->v) = u0;
        u0 = (((struct o48_float *)(t5))->v);
        (((struct o48_float *)(t5))->v) = (u0 + f6);
        (((struct o44_float *)(t5))->v) = (u0 + f6);
        (((struct o40_float *)(t5))->v) = (u0 + f6);
        t0 = *(short *)((t5 + 0x1C));
        *(unsigned short *)((t5 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned short *)((t5 + 0x1C)) = 0x64;
            (((struct o14_uchar *)(t5))->v) = ((*(signed char *)((t5 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x222);
    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(a4, 0x222, 0xA);
    if ((*(signed char *)((t6 + 0x2))) == 0) {
        u0 = (((((struct o2C_float *)(t6))->v)) + f4);
    } else {
        u0 = (((((struct o2C_float *)(t6))->v)) + f5);
    }
    (((struct o2C_float *)(t6))->v) = u0;
    u0 = (((struct o48_float *)(t6))->v);
    (((struct o48_float *)(t6))->v) = (u0 + f6);
    (((struct o44_float *)(t6))->v) = (u0 + f6);
    (((struct o40_float *)(t6))->v) = (u0 + f6);
    t0 = *(short *)((t6 + 0x1C));
    *(unsigned short *)((t6 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((t6 + 0x1C)) = 0x64;
        (((struct o14_uchar *)(t6))->v) = ((*(signed char *)((t6 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
