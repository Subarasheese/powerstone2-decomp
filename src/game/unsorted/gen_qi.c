/* Straight-line functions with calls and guards (batch gen_qi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c059e60(int, int);
float math_sin_angle16(int);
int FUN_0c137f8e(int a4, int a5, int a6, int a7);

int FUN_0c137f8e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((0x3715 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))) != 26) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 == 1) {
        } else {
            FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x25);
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
    } else {
        FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x24);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A199C); }
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A199C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC2A19B4); }
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A199C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC2A19C0); }
        t2 = (((struct oC4_int *)(a4))->v);
        u0 = ((math_sin_angle16(((((struct o20_int *)0xC2A19CC)->v)))) * ((((struct o28_float *)0xC2A19CC)->v)));
        (((struct o7C_uint *)(t2))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t2 = (((struct oC8_int *)(a4))->v);
        u0 = ((math_sin_angle16((-((((struct o20_int *)0xC2A19CC)->v))))) * ((((struct o28_float *)0xC2A19CC)->v)));
        (((struct o7C_uint *)(t2))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t2 = (((struct oC4_int *)(a4))->v);
        u0 = ((math_sin_angle16(((((struct o24_int *)0xC2A19CC)->v)))) * ((((struct o2C_float *)0xC2A19CC)->v)));
        (((struct o78_uint *)(t2))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t2 = (((struct oC8_int *)(a4))->v);
        u0 = ((math_sin_angle16((-((((struct o24_int *)0xC2A19CC)->v))))) * ((((struct o2C_float *)0xC2A19CC)->v)));
        (((struct o78_uint *)(t2))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    }
    t2 = *(short *)((a4 + 0x1C));
    if (((int)t2 >= (int)((((struct o4_int *)0xC2A19CC)->v))) && (t0 = (((struct o8_int *)0xC2A19CC)->v), (int)t2 <= (int)t0)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
    }
    if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A19A8); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A199C); }
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o14_int *)0xC2A19CC)->v))) && (t1 = (((struct o0_int *)0xC2A19CC)->v), (int)t0 <= (int)t1)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A19CC)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
