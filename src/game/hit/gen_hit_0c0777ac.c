/* game/hit: functions 0C0777AC-0C078792, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3744_uchar { char p[0x3744]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o378C_float { char p[0x378C]; float v; };
struct o382C_ushort { char p[0x382C]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o384C_int { char p[0x384C]; int v; };
struct o384C_uint { char p[0x384C]; unsigned int v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c037bf6(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c074774(int);
int FUN_0c07d2c4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0cb38a(int);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c179ac0(void);
float FUN_0c0e2340(int);
int FUN_0c0777ac(int a4);
int FUN_0c0779ae(int a4, int a5, int a6, int a7);
int FUN_0c0780a2(int a4, int a5, int a6, int a7);
int FUN_0c078412(int a4, int a5, int a6, int a7);
int FUN_0c0784c2(int a4);
int FUN_0c078558(int a4);
int FUN_0c07871e(int a4, int a5, int a6, int a7);

int FUN_0c0777ac(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((*(short *)((a4 + 0x1E))) == 0) {
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        }
        FUN_0c037bf6(a4);
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((((struct o3850_short *)(a4))->v)));
        (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) + ((((struct o384C_int *)(a4))->v)));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) != 0) {
            t0 = FUN_0c07d2c4(a4, (0x3744 + a4));
            if (t0 == 0) {
                return FUN_0c085cac(a4, 0x10, 0x6);
            }
            return t0;
        }
        return FUN_0c085cac(a4, 0x10, 0x6);
    }
    t0 = 0xB;
    if (((((struct o160_float *)(a4))->v)) != 0.0f) {
        t1 = 0x9;
        t0 = 0x9;
    } else {
        t1 = 0xB;
    }
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, t0, 0xFFFFFFFF, 0x0, t1);
    (((struct o3850_uint *)(a4))->v) = 0xAAA;
    (((struct o384C_uint *)(a4))->v) = 0xFFFFFFEE;
    if (((*(int *)0xC542260) & 1) != 0) {
        (((struct o3850_uint *)(a4))->v) = (-((((struct o3850_int *)(a4))->v)));
        (((struct o384C_uint *)(a4))->v) = (-((((struct o384C_int *)(a4))->v)));
    }
    (((struct o2C_float *)(a4))->v) = 1000.0f;
    (((struct o3744_uchar *)(a4))->v) = 0x14;
    (((struct o50_float *)(a4))->v) = -3.5f;
    *(unsigned short *)((a4 + 0x1C)) = 0x4A;
    *(unsigned short *)((a4 + 0x1E)) = 0x16;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c0779ae(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x16))) > 0) && (t0 = *(signed char *)((a4 + 0x130)), t0 != 0)) {
        return 0x130;
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC077950))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0778D4))(a4, a5, a6, a7);
}

int FUN_0c0780a2(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x2;
    (((struct o3830_ushort *)(a4))->v) = 0x0;
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC077FC0))(a4, 0x0, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC077F36))(a4, 0x0, a6, a7);
}

int FUN_0c078412(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x16))) == 2) {
        t0 = FUN_0c07d2c4(a4, ((0x3744 + a4) + 0x2));
        if (t0 == 0) {
            return FUN_0c074774(a4);
        }
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(0xC0783CE))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0782EC))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0781DC))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC07819E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07810C))(a4, a5, a6, a7);
}

int FUN_0c0784c2(int a4)
{
    int stk[6];
    register float t9;

    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), ((int)stk + 12));
    *(float *)(((int)stk + 12)) = (((((struct o28_float *)(a4))->v)) - (*(float *)(((int)stk + 12))));
    *(float *)(((int)stk + 16)) = (((((struct o2C_float *)(a4))->v)) - (*(float *)(((int)stk + 16))));
    *(float *)(((int)stk + 20)) = (((((struct o30_float *)(a4))->v)) - (*(float *)(((int)stk + 20))));
    t9 = FUN_0c0e2340(((int)stk + 12));
    if (t9 > 200.0f) {
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x4;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x0, 0xFFFFFFFF, 0x4, 0x0);
    }
    return (FUN_0c0cb38a(a4));
}

int FUN_0c078558(int a4)
{
    int stk[3];
    register int t0;
    register float u6;
    register float u12;
    register float u18;
    register int t19;

    t0 = 0xA;
    for (;;) {
        u6 = ((((struct o28_float *)(a4))->v));
        u6 = u6 + ((((struct o378C_float *)(a4))->v)) * ((float)(((int)((int)(FUN_0c179ac0()) % (int)0x78)) - 60));
        *(float *)(((int)stk + 0)) = u6;
        u12 = ((((struct o30_float *)(a4))->v));
        u12 = u12 + ((((struct o378C_float *)(a4))->v)) * ((float)(((int)((int)(FUN_0c179ac0()) % (int)0x78)) - 60));
        *(float *)(((int)stk + 8)) = u12;
        u18 = ((((struct o2C_float *)(a4))->v));
        u18 = u18 + ((((struct o378C_float *)(a4))->v)) * ((float)(((int)((int)(FUN_0c179ac0()) % (int)0x64)) - 50));
        *(float *)(((int)stk + 4)) = (u18 + 50.0f);
        t19 = FUN_0c150010(((int)stk + 0), 1.0f, 1.0f, 1.0f, 1.0f);
        t0 = (t0 - 0x1);
        if (t0 == 0) {
            break;
        }
    }
    return t19;
}

int FUN_0c07871e(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
    (((struct oB0_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)((a4 + 0x16))) != 0) {
        t0 = FUN_0c07d2c4(a4, ((0x3744 + a4) + 0x2));
        if (t0 == 0) {
            FUN_0c078558(a4);
            (((struct oB0_float *)(a4))->v) = 1.0f;
            return FUN_0c085d0c(a4);
        }
    }
    (((struct o382C_ushort *)(a4))->v) = 0x0;
    (((struct o3749_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC078674))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07860C))(a4, a5, a6, a7);
}
