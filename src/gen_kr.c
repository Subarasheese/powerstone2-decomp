/* Straight-line functions with calls and guards (batch gen_kr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c13683e(int, int, int, int, int, int, int, int);
int FUN_0c187798(int);
float math_sin_angle16(int);
int FUN_0c13691a(int a4);
int FUN_0c04b67a(int a4);

int FUN_0c13691a(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC136886;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)((0xC53258C + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938)))) + 0x28);
        FUN_0c13683e((*(signed char *)((t0 + 0x1))), (t0 + 0x64), t0, (*(int *)(((*(int *)(((((*(int *)0xC4B40CC) + 0x10) + 0x6A0) + 0x1C))) + 0x0))), 0xA0, 0x60, 0xC2A16FC, 0xC2A1708);
        FUN_0c13683e((*(signed char *)((t0 + 0x1))), (t0 + 0x64), t0, (*(int *)(((*(int *)(((((*(int *)0xC4B40CC) + 0x10) + 0x6A0) + 0x1C))) + 0x0))), 0xA0, 0x60, 0xC2A1714, 0xC2A1720);
    }
    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC136886;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)((0xC53257C + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938)))) + 0x28);
        FUN_0c13683e((*(signed char *)((t0 + 0x1))), (t0 + 0x64), t0, (*(int *)(((*(int *)(((((*(int *)0xC4B40CC) + 0x10) + 0x6A0) + 0x1C))) + 0x0))), 0xA0, 0x60, 0xC2A16FC, 0xC2A1708);
        FUN_0c13683e((*(signed char *)((t0 + 0x1))), (t0 + 0x64), t0, (*(int *)(((*(int *)(((((*(int *)0xC4B40CC) + 0x10) + 0x6A0) + 0x1C))) + 0x0))), 0xA0, 0x60, 0xC2A1714, 0xC2A1720);
    }
    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC1368C0;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)((0xC53255C + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938)))) + 0x28);
        t1 = (FUN_0c187798(t0));
    }
    return t1;
}

int FUN_0c04b67a(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x71C);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            u0 = 1083.0f;
            u0 = u0 + 50.0f * (math_sin_angle16((((*(short *)((a4 + 0x1E))) << 8) << 1)));
            (((struct o2C_float *)(a4))->v) = u0;
            if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0x3) {
                return FUN_0c03f346(a4);
            }
            return 0x2C;
        }
    } else {
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o30_float *)(a4))->v) = 0.0f;
        (((struct o2C_float *)(a4))->v) = 500.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 10.0f);
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    u0 = 1083.0f;
    u0 = u0 + 50.0f * (math_sin_angle16((((*(short *)((a4 + 0x1E))) << 8) << 1)));
    (((struct o2C_float *)(a4))->v) = u0;
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    if (((((struct o20_short *)(a4))->v)) == 15) {
        FUN_0c059e9a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x30, (a4 + 0x28));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
