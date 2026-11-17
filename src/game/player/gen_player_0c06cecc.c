/* game/player: functions 0C06CECC-0C06D0BC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372B_uchar { char p[0x372B]; unsigned char v; };
struct o372D_uchar { char p[0x372D]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o3868_int { char p[0x3868]; int v; };
struct o3868_uint { char p[0x3868]; unsigned int v; };
struct o430_short { char p[0x430]; short v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c059fae(int, int, int);
int FUN_0c07d6cc(int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c080364(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c15360e(int);
int math_vec3_accumulate(int, int);
int FUN_0c06cecc(int a4);
int FUN_0c06cf84(int a4);

int FUN_0c06cecc(int a4)
{
    int t0;
    int t1;

    if (((*(signed char *)((a4 + 0x3731))) == 0) && (t0 = *(signed char *)((a4 + 0x372D)), t0 != 0)) {
        (((struct o3868_uint *)(a4))->v) = (unsigned short)((FUN_0c07d6cc(a4)) - (*(int *)((a4 + 0x38))));
        if ((((((struct o3868_int *)(a4))->v)) & 0x8000) != 0) {
            (((struct o3868_uint *)(a4))->v) = (((((struct o3868_int *)(a4))->v)) | 0xFFFF0000);
        }
        if ((int)(*(signed char *)((a4 + 0x372D))) > 0) {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)((((struct o3868_int *)(a4))->v)) / (int)(*(signed char *)((a4 + 0x372D))))));
        }
        (((struct o372D_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x372D))) - 1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if (((short)(t0 - 1) == 0) && (t1 = *(signed char *)((a4 + 0x3728)), t1 == 0)) {
        (((struct o3728_uchar *)(a4))->v) = 0x1;
        if (((((struct o3770_int *)(a4))->v)) != 0) {
            (((struct oA4_uint *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
            (((struct o372B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
            (((struct o371D_uchar *)(a4))->v) = 0x0;
            FUN_0c059e60(a4, 0x10);
        }
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c06cf84(int a4)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t9;
    register int t10;
    register int t12;
    register int t23;
    register float u62;
    register int t63;
    register int t64;
    register int t65;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        t8 = *(int *)((a4 + 0x38));
        t9 = (((struct o3850_short *)(a4))->v);
        t10 = *(int *)((a4 + 0x38));
        t12 = (unsigned short)(t9 - t8);
        if ((0x8000 & (unsigned short)(t9 - t8)) != 0) {
            t12 = ((unsigned short)(t9 - t8) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t10 + ((int)((int)t12 / (int)(*(short *)((a4 + 0x1C))))));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    } else {
        *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
    }
    t23 = FUN_0c07ebd0(a4);
    if (t23 != 0) {
        (((struct o3850_uint *)(a4))->v) = (unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
        FUN_0c080364(a4, ((((struct o3850_int *)(a4))->v)));
        if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x3C00) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t65 = 0x20;
        if (((((struct o20_short *)(a4))->v)) == 0) {
            t65 = 0x8C;
            if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) > ((((struct o8_float *)0xC06D124)->v))) {
                FUN_0c15360e(a4);
                FUN_0c059fae((*(signed char *)((a4 + 0x1))), 0x2, ((((struct o22_short *)(a4))->v)));
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) ^ 0x1);
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                t65 = 0x20;
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
        FUN_0c085cac(a4, 0x0, 0x0);
        u62 = (((struct o0_float *)0xC06D124)->v);
        t63 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t63))->v) = u62;
        (((struct o94_float *)(t63))->v) = u62;
        t64 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t64))->v) = u62;
        (((struct o94_float *)(t64))->v) = u62;
        t65 = 0x94;
    }
    return t65;
}
