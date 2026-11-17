/* game/player: functions 0C0DEB54-0C0DF270, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0dede8(int);
float math_cos_angle16(int);
int FUN_0c0ded5e(int a4, int a5, int a6, int a7);
int FUN_0c0dee20(int a4);
int FUN_0c0dee7a(int a4);

int FUN_0c0ded5e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xC16);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))), a6, a7);
        (((struct o50_float *)(a4))->v) = -4.0f;
        (((struct o5C_float *)(a4))->v) = -0.800000012f;
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        *(unsigned short *)((a4 + 0x1E)) = 0xA;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0dee20(int a4)
{
    register int t0;

    FUN_0c0dede8(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) != 0) {
        t0 = FUN_0c0c2ce4(a4);
        if (t0 != 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        return 0x50;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o12E_ushort *)(a4))->v) = 0x0;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0dee7a(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    FUN_0c0dede8(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)((t0 + 0x1) - 1) > (int)0x8) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    u0 = (float)((short)(*(short *)((a4 + 0x1C))) * (short)0x2D);
    u1 = math_cos_angle16((int)((u0 * ((((struct o0_float *)0xC0DEF24)->v))) / ((((struct o4_float *)0xC0DEF24)->v))));
    u0 = ((((struct oC_float *)0xC0DEF24)->v));
    u0 = u0 + ((((struct o10_float *)0xC0DEF24)->v)) * u1;
    (((struct o44_float *)(a4))->v) = u0;
    return 0x44;
}
