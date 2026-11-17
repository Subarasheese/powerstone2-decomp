/* game/hit: functions 0C0733B0-0C076C3C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o373F_uchar { char p[0x373F]; unsigned char v; };
struct o3758_uchar { char p[0x3758]; unsigned char v; };
struct o3774_int { char p[0x3774]; int v; };
struct o3774_uint { char p[0x3774]; unsigned int v; };
struct o383E_short { char p[0x383E]; short v; };
struct o414_int { char p[0x414]; int v; };
struct o418_int { char p[0x418]; int v; };
struct o418_uint { char p[0x418]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c073448(int, int);
int FUN_0c073b24(int);
int FUN_0c073ed0(int, int, int);
int FUN_0c07434c(int, int);
int FUN_0c074602(int);
int FUN_0c074c0c(int);
int FUN_0c07c5dc(int, int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c161128(int);
int FUN_0c073d64(int a4, int a5, int a6, int a7);
int FUN_0c073eb8(int a4, int a5, int a6);
int FUN_0c073f6c(int a4, int a5, int a6);
int FUN_0c074c80(int a4, float f4);
int FUN_0c0751e4(int a4, int a5, int a6);
int FUN_0c0758c8(int a4);
int FUN_0c075b5c(int a4);

int FUN_0c073d64(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x134))) == 0) {
        if ((*(signed char *)((a4 + 0x0))) == 0) {
            t0 = ((*(int *)((0xC25ACBC + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x14);
        } else {
            t0 = ((*(int *)0xC25AD1C) + 0xA0);
        }
        (((struct o418_uint *)(a5))->v) = t0;
    } else {
        (((struct o418_uint *)(a5))->v) = ((((struct o414_int *)(a4))->v));
    }
    (((struct o3774_uint *)(a5))->v) = a4;
    if (((((struct o3774_int *)(a5))->v)) != 0) {
        (((struct o373F_uchar *)(a5))->v) = (*(signed char *)((((((struct o3774_int *)(a5))->v)) + 0x1)));
    } else {
        (((struct o373F_uchar *)(a5))->v) = 0xFFFFFFFF;
    }
    t0 = *(signed char *)((((((struct o418_int *)(a5))->v)) + 0x4));
    (((struct o130_uchar *)(a4))->v) = t0;
    (((struct o130_uchar *)(a5))->v) = t0;
    if ((unsigned char)(*(signed char *)((((((struct o418_int *)(a5))->v)) + 0x7))) == 2) {
        (((struct o130_uchar *)((((short)(*(signed char *)((((((struct o3774_int *)(a5))->v)) + 0x1))) * (short)0x3938) + 0xC532498)))->v) = (*(signed char *)((((((struct o418_int *)(a5))->v)) + 0x4)));
        (((struct o131_uchar *)((((short)(*(signed char *)((((((struct o3774_int *)(a5))->v)) + 0x1))) * (short)0x3938) + 0xC532498)))->v) = (*(signed char *)(((0x131 + a4) + 0x0)));
    }
    t0 = *(signed char *)((a5 + 0x3721));
    if (((unsigned char)t0 != 15) && (((unsigned char)t0 != 37) && ((unsigned char)t0 != 63))) {
        if (((((struct o383E_short *)(a5))->v)) == 0) {
            FUN_0c073448(a5, 0x0);
        }
        if ((*(signed char *)((a5 + 0x373F))) != -1) {
            if ((*(signed char *)((a5 + 0x3719))) != (*(signed char *)(((0xC532498 + ((short)(*(signed char *)((a5 + 0x373F))) * (short)0x3938)) + 0x3719)))) {
                FUN_0c07434c(a5, 0x0);
            }
        } else {
            FUN_0c07434c(a5, 0x0);
        }
        t0 = *(signed char *)((a4 + 0x0));
        t1 = (FUN_0c073b24(a5));
        if (t0 == 0) {
            (((struct o3758_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x3758))) + 0x1);
            t1 = 0x3758;
        }
        return t1;
    }
    return FUN_0c085cac(a5, 0x24, 0x0, a7);
}

int FUN_0c073eb8(int a4, int a5, int a6)
{
    (((struct o418_uint *)(((a5 * 0x3938) + 0xC532498)))->v) = a6;
    return FUN_0c07434c(((a5 * 0x3938) + 0xC532498), 0x1);
}

int FUN_0c073f6c(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)(((((short)(signed char)a5 * (short)0x3938) + 0xC532498) + 0x2));
    if (t0 != 12) {
        if (t0 != 13) {
            (((struct o418_uint *)((((short)(signed char)a5 * (short)0x3938) + 0xC532498)))->v) = a6;
            (((struct o3774_uint *)((((short)(signed char)a5 * (short)0x3938) + 0xC532498)))->v) = a4;
            if (((((struct o3774_int *)((((short)(signed char)a5 * (short)0x3938) + 0xC532498)))->v)) != 0) {
                (((struct o373F_uchar *)((((short)(signed char)a5 * (short)0x3938) + 0xC532498)))->v) = (*(signed char *)((((((struct o3774_int *)((((short)(signed char)a5 * (short)0x3938) + 0xC532498)))->v)) + 0x1)));
            } else {
                (((struct o373F_uchar *)((((short)(signed char)a5 * (short)0x3938) + 0xC532498)))->v) = 0xFFFFFFFF;
            }
            if ((*(signed char *)(((((short)(signed char)a5 * (short)0x3938) + 0xC532498) + 0x373F))) != -1) {
                if ((*(signed char *)(((((short)(signed char)a5 * (short)0x3938) + 0xC532498) + 0x3719))) != (*(signed char *)(((0xC532498 + ((short)(*(signed char *)(((((short)(signed char)a5 * (short)0x3938) + 0xC532498) + 0x373F))) * (short)0x3938)) + 0x3719)))) {
                    FUN_0c07434c((((short)(signed char)a5 * (short)0x3938) + 0xC532498), 0x0);
                }
            } else {
                FUN_0c07434c((((short)(signed char)a5 * (short)0x3938) + 0xC532498), 0x0);
            }
            return FUN_0c073448((((short)(signed char)a5 * (short)0x3938) + 0xC532498), 0x0);
        }
        return t0;
    }
    return t0;
}

int FUN_0c074c80(int a4, float f4)
{
    register int t8;

    if (((((struct o160_float *)(a4))->v)) != 0.0f) {
        t8 = *(signed char *)((((((struct o418_int *)(a4))->v)) + 0x12));
        if (((0xC & (unsigned char)t8) != 12) && ((0x20 & (unsigned char)t8) == 0)) {
            if ((*(signed char *)((a4 + 0x371C))) == 0) {
                if ((*(signed char *)((a4 + 0x374D))) != 0) {
                    return FUN_0c074c0c(a4);
                }
                return 0x374D;
            }
            return 0x371C;
        }
        return FUN_0c074c0c(a4);
    }
    return FUN_0c07c5dc(a4, (*(signed char *)((a4 + 0x374D))), 0x1, f4);
}

int FUN_0c0751e4(int a4, int a5, int a6)
{
    register int t0;
    int t1;
    register int t2;

    FUN_0c037bf6(a4, a5, a6);
    t2 = *(signed char *)((a4 + 0x373F));
    if (((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x3715))) == 8) && ((t0 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x15)), t0 == 8) && (t1 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x17)), (int)t1 < (int)0x2))) {
    } else {
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c073ed0((((short)t2 * (short)0x3938) + 0xC532498), (*(signed char *)((a4 + 0x1))), ((*(int *)0xC25AD18) + 0x898));
    }
    return 0x20;
}

int FUN_0c0758c8(int a4)
{
    register int t0;
    register int t1;

    FUN_0c074602(a4);
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2D, 0xFFFFFFFF, 0x4, 0x2D);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    FUN_0c037bf6(a4, t1, t0);
    (((struct o372C_uchar *)(a4))->v) = 0x0;
    FUN_0c161128((*(signed char *)((a4 + 0x1))));
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c075b5c(int a4)
{
    int t0;
    register int t1;

    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
    FUN_0c074602(a4);
    t0 = *(signed char *)((((((struct o418_int *)(a4))->v)) + 0x8));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                t0 = *(signed char *)((a4 + 0x373B));
                if ((t0 != 0) && ((t0 != 2) && (t0 != 3))) {
                    if (t0 == 1) {
                        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x44, 0xFFFFFFFF, 0x4, 0x44);
                        (((struct o372C_uchar *)(a4))->v) = 0x1;
                        (((struct o50_float *)(a4))->v) = (*(float *)0xC075D50);
                    }
                } else {
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x46, 0xFFFFFFFF, 0x4, 0x46);
                    (((struct o372C_uchar *)(a4))->v) = 0x0;
                    (((struct o50_float *)(a4))->v) = (*(float *)0xC075D50);
                }
            } else {
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x44, 0xFFFFFFFF, 0x4, 0x44);
                (((struct o372C_uchar *)(a4))->v) = 0x1;
                (((struct o50_float *)(a4))->v) = (*(float *)0xC075D50);
            }
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x46, 0xFFFFFFFF, 0x4, 0x46);
            (((struct o372C_uchar *)(a4))->v) = 0x0;
            (((struct o50_float *)(a4))->v) = (*(float *)0xC075D50);
        }
    } else {
        t0 = *(signed char *)((a4 + 0x373B));
        if ((t0 != 0) && ((t0 != 2) && (t0 != 3))) {
            if (t0 == 1) {
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x44, 0xFFFFFFFF, 0x4, 0x44);
                (((struct o372C_uchar *)(a4))->v) = 0x1;
                (((struct o50_float *)(a4))->v) = (*(float *)0xC075D50);
            }
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x46, 0xFFFFFFFF, 0x4, 0x46);
            (((struct o372C_uchar *)(a4))->v) = 0x0;
            (((struct o50_float *)(a4))->v) = (*(float *)0xC075D50);
        }
    }
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    FUN_0c037bf6(a4, t1, (0x118 + a4));
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}
