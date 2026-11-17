/* game/unsorted: functions 0C128598-0C128788, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c128598(int a4, int a5);
int FUN_0c12862c(int a4, int a5, int a6, int a7);

int FUN_0c128598(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t14;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t14 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, 0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t3 + 0x4)) = 0xC12862C;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        (((struct o28_float *)(t3))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o2C_float *)(t3))->v) = ((((struct o2C_float *)(a4))->v));
        (((struct o30_float *)(t3))->v) = ((((struct o30_float *)(a4))->v));
        *(unsigned int *)((t3 + 0x3C)) = 0x0;
        *(unsigned int *)((t3 + 0x38)) = 0x0;
        *(unsigned int *)((t3 + 0x34)) = 0x0;
        (((struct o22_ushort *)(t3))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        t14 = 0x22;
    }
    return t14;
}

int FUN_0c12862c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 == 4) {
                        return FUN_0c03f346(a4, a5, a6, a7);
                    }
                    if (t1 == 5) {
                        return FUN_0c03f346(a4, a5, a6, a7);
                    }
                    return t1;
                }
                t1 = (((struct oC4_int *)(a4))->v);
                u0 = (((struct o8C_float *)(t1))->v);
                (((struct o8C_float *)(t1))->v) = (u0 - 0.100000001f);
                (((struct o84_float *)(t1))->v) = (u0 - 0.100000001f);
                (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
                (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v));
                (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x182D);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if (((((struct o22_short *)(a4))->v)) == 3) {
                t1 = (((struct oC4_int *)(a4))->v);
                t2 = (int)((int)(FUN_0c179ac0()) % (int)0x3C);
                (((struct o8C_float *)(t1))->v) = (((float)t2 / 100.0f) + 0.699999988f);
                (((struct o84_float *)(t1))->v) = (((float)t2 / 100.0f) + 0.699999988f);
            }
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
            (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x182D);
            t1 = *(int *)((a4 + 0x10));
            if (((int)(*(signed char *)((t1 + 0x17))) <= (int)0x2) && (t0 = *(signed char *)((t1 + 0x3715)), t0 == 26)) {
                t1 = t0;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o8C_float *)(t0))->v);
    (((struct o8C_float *)(t0))->v) = (u0 + 0.100000001f);
    (((struct o84_float *)(t0))->v) = (u0 + 0.100000001f);
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x182D);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
