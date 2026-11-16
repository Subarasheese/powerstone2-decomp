/* Straight-line functions with calls and guards (batch gen_gx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c179ac0(void);
extern int FUN_0c187798();
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c152ad4(int a4, int a5, int a6, int a7);
int FUN_0c11383a(int a4, int a5, int a6, int a7);

int FUN_0c152ad4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        t0 = *(short *)((a4 + 0x1E));
        t2 = *(int *)((((t0 << 2) + (0xC4 + a4)) + 0x0));
        t3 = t0;
        if ((*(signed char *)((t2 + 0x0))) == 0) {
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            (((struct o14_float *)(t2))->v) = 1.0f;
            FUN_0c187798(0x1, a5, a6);
            t0 = FUN_0c179ac0();
            t4 = ((~(((~t0) + 0x1) & 0x1F)) + 0x1);
            if ((int)t0 >= 0) {
                t4 = (t0 & 0x1F);
            }
            (((struct o7C_uint *)(t2))->v) = (((t4 << 8) << 2) << 1);
            t0 = FUN_0c179ac0();
            t4 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
            if ((int)t0 >= 0) {
                t4 = (t0 & 0xF);
            }
            (((struct o8C_float *)(t2))->v) = ((float)(t4 + 0x5) / 10.0f);
            (((struct o88_float *)(t2))->v) = ((float)(t4 + 0x5) / 10.0f);
            (((struct o84_float *)(t2))->v) = ((float)(t4 + 0x5) / 10.0f);
            (((struct o94_float *)(t2))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xA)) + 14.0f);
            (((struct oA0_uint *)(t2))->v) = 0xFFFFFFFF;
            t0 = (int)((int)(FUN_0c179ac0()) % (int)0x6);
            (((struct o90_float *)(t2))->v) = ((math_cos_angle16(((-((((struct o7C_int *)(t2))->v))) + 0x14000))) * (float)(t0 + 0x2));
            (((struct o98_float *)(t2))->v) = ((math_sin_angle16(((-((((struct o7C_int *)(t2))->v))) + 0x14000))) * (float)(t0 + 0x2));
            *(unsigned short *)((a4 + 0x1C)) = 0x6;
            t0 = (int)((int)((*(short *)((a4 + 0x1E))) + 0x1) % (int)0xA);
            *(unsigned short *)((a4 + 0x1E)) = t0;
            t3 = t0;
        }
        t1 = t3;
    }
    t0 = t1;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
        if ((*(signed char *)((t2 + 0x0))) != 0) {
            t0 = 0x6C;
            t3 = t0;
            t3 = (t3 + 0x24);
            t3 = (t3 + t2);
            u0 = (*(float *)((t2 + t0)));
            u1 = (*(float *)((t3 + 0x0)));
            u0 = (u0 + u1);
            *(float *)((t2 + t0)) = u0;
            t0 = 0x74;
            t3 = t0;
            t3 = (t3 + 0x24);
            t3 = (t3 + t2);
            u0 = (*(float *)((t2 + t0)));
            u1 = (*(float *)((t3 + 0x0)));
            u0 = (u0 + u1);
            *(float *)((t2 + t0)) = u0;
            t0 = 0x70;
            t3 = t0;
            t3 = (t3 + 0x24);
            t3 = (t3 + t2);
            u0 = (*(float *)((t2 + t0)));
            u1 = (*(float *)((t3 + 0x0)));
            u0 = (u0 + u1);
            *(float *)((t2 + t0)) = u0;
            t0 = (t0 + 0x24);
            u0 = (*(float *)((t2 + t0)));
            u1 = (float)((((struct oA0_int *)(t2))->v));
            u0 = (u0 + u1);
            *(float *)((t2 + t0)) = u0;
            t0 = (t0 + 0x1C);
            u1 = (*(float *)(((*(int *)((a4 + 0x10))) + t0)));
            t0 = 0x18;
            *(float *)((t2 + t0)) = u1;
            t0 = 0xB0;
            u1 = (*(float *)(((*(int *)((a4 + 0x10))) + t0)));
            t0 = 0x1C;
            *(float *)((t2 + t0)) = u1;
            t0 = 0xB0;
            u1 = (*(float *)(((*(int *)((a4 + 0x10))) + t0)));
            t0 = 0x20;
            *(float *)((t2 + t0)) = u1;
            t0 = 0x70;
            u0 = (*(float *)((t2 + t0)));
            u1 = 0.0f;
            if (u1 > u0) {
                *(unsigned char *)((t2 + 0x0)) = 0x0;
            }
        }
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x28) {
            break;
        }
    }
    if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14))) >= (int)0x2) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    return 0x14;
}

int FUN_0c11383a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
                t1 = (t1 + 0x4);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
                if ((unsigned int)t1 >= (unsigned int)0x10) {
                    break;
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            t2 = (short)(t1 + 0x1);
            if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t2 = 0x0;
            }
            return t2;
        }
        if (t0 == 2) {
            *(volatile int *)0xC474770;
            *(volatile int *)((a4 + 0xC8));
            return (((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6));
        }
        if (t0 == 10) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t1 = 0x0;
            for (;;) {
                t2 = ((0xC4 + a4) + t1);
                t1 = (t1 + 0x4);
                (((struct o90_float *)((*(int *)((t2 + 0x0)))))->v) = -18.75f;
                if ((unsigned int)t1 >= (unsigned int)0x10) {
                    break;
                }
            }
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
                t1 = (t1 + 0x4);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
                if ((unsigned int)t1 >= (unsigned int)0x10) {
                    break;
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                return FUN_0c03f346(a4, t2, a6, a7);
            }
            return (short)(t1 + 0x1);
        }
        if (t0 == 11) {
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
                t1 = (t1 + 0x4);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
                if ((unsigned int)t1 >= (unsigned int)0x10) {
                    break;
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                return FUN_0c03f346(a4, t2, a6, a7);
            }
            return (short)(t1 + 0x1);
        }
        t1 = t0;
        if (t0 == 99) {
            (((struct o14_uchar *)(a4))->v) = 0xA;
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x4, 0xC, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0xF, 0xC, (*(int *)0xC4B410C));
    t0 = *(int *)0xC4B410C;
    t1 = 0x3;
    if ((int)(*(signed char *)0xC542B8A) >= (int)0x1) {
        t1 = 0x1;
    }
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), t1, 0xA, t0);
    *(volatile int *)((a4 + 0xCC));
    t0 = ((int (*)(void))(FUN_0c187798))();
    t0 = *(int *)0xC4B410C;
    t1 = 0x3;
    if ((*(signed char *)0xC542B8A) == 2) {
        t1 = 0x2;
    }
    FUN_0c03744a(((((struct oD0_int *)(a4))->v)), t1, 0xA, t0);
    *(volatile int *)((a4 + 0xD0));
    t0 = ((int (*)(void))(FUN_0c187798))();
    *(volatile int *)0xC474770;
    *(volatile int *)((a4 + 0xC8));
    t0 = ((int (*)(void))(FUN_0c187798))();
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 300.0f);
        (((struct o90_float *)(t1))->v) = 18.75f;
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o90_float *)(t1))->v)));
        if ((unsigned int)t0 >= (unsigned int)0x10) {
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
