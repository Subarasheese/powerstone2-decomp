/* game/player: functions 0C0DEB54-0C0DF270, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int thunk_FUN_0c05abb2(int, int);
int FUN_0c073ed0(int a4, int a5, int a6, float f4);
int FUN_0c07d15c(int);
int math_angle_between_points_xz(int, int);
int FUN_0c07e328(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c57e0(int, int, int);
int FUN_0c0c5a88(int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0e2700(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0deb54(int a4, int a5, int a6);
int FUN_0c0deba6(int a4);
int FUN_0c0decfc(int a4, int a5, int a6);
int FUN_0c0ded18(int a4);
int FUN_0c0ded42(int a4);
int FUN_0c0dede8(int a4, int a5);
int FUN_0c0deee0(int a4, int a5);
int FUN_0c0def74(int a4, float f4);
int FUN_0c0deff6(int a4);
int FUN_0c0df09c(int a4);

int FUN_0c0deb54(int a4, int a5, int a6)
{
    (((struct oA4_uint *)(a4))->v) = 0x0;
    FUN_0c0c57e0(a4, a5, a6);
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
    FUN_0c07e328(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C6))));
    (((struct o22_ushort *)(a4))->v) = 0xB4;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0deba6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((a4 + 0x131))) != 0) {
        (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
        t0 = FUN_0c07d15c(a4);
        if (t0 != 0) {
            *(unsigned char *)((a4 + 0x1)) = (t0 - 1);
            *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), ((((t0 - 1) * 0x3938) + 0xC532498) + 0x28)));
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            u0 = (((struct o28_float *)((((t0 - 1) * 0x3938) + 0xC532498)))->v);
            (((struct o28_float *)(a4))->v) = (u0 - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * 100.0f)));
            u0 = (((struct o30_float *)((((t0 - 1) * 0x3938) + 0xC532498)))->v);
            (((struct o30_float *)(a4))->v) = (u0 - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * 100.0f)));
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x6;
            thunk_FUN_0c05abb2(0x2E, (a4 + 0x28));
            t0 = 0x9;
            t1 = (*(signed char *)((a4 + 0x1)));
        } else {
            t0 = 0xA;
            t1 = (*(signed char *)((a4 + 0x1)));
        }
        t2 = (FUN_0c0c2d56(a4, t0, t1));
    } else {
        if (((((struct o404_int *)(a4))->v)) != 0) {
            t0 = FUN_0c0c2ce4(a4);
            (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
            if (t0 == 1) {
                t0 = 0x2;
                t1 = (*(signed char *)((a4 + 0x1)));
            } else {
                t0 = 0xA;
                t1 = (*(signed char *)((a4 + 0x1)));
            }
            t2 = (FUN_0c0c2d56(a4, t0, t1));
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x71C);
            FUN_0c0c5a88(a4);
            t0 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t0 - 1);
            t1 = 0x22;
            if ((short)(t0 - 1) == 0) {
                t1 = (FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
            }
            t2 = t1;
        }
    }
    return t2;
}

int FUN_0c0decfc(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0deba6(a4);
    }
    return FUN_0c0deb54(a4, a5, a6);
}

int FUN_0c0ded18(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - 0x105B);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0ded42(int a4)
{
    register int t0;
    register int t2;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t2 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x6;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c0dede8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(short *)((a4 + 0x1E));
    t1 = t0;
    if (t0 != 0) {
        t0 = *(int *)((a4 + 0x38));
        t2 = *(short *)0xC5413E8;
        t3 = *(short *)((a4 + 0x1E));
        t4 = (unsigned short)(t2 - t0);
        if ((0x8000 & (unsigned short)(t2 - t0)) != 0) {
            t4 = ((unsigned short)(t2 - t0) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (((int)((int)t4 / (int)t3)) + (*(int *)((a4 + 0x38))));
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        t1 = (t0 - 1);
    }
    return t1;
}

int FUN_0c0deee0(int a4, int a5)
{
    register int t0;
    register int t1;

    FUN_0c0dede8(a4, a5);
    t0 = (((struct oC4_int *)(a4))->v);
    t1 = 0xF200;
    if ((int)((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x6)) > (int)0x2) {
        t1 = 0xE00;
    }
    (((struct o80_uint *)(t0))->v) = t1;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x6;
        (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
        *(unsigned int *)((a4 + 0x38)) = (*(int *)0xC5413E8);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0def74(int a4, float f4)
{
    int t0;
    register int t1;
    register int t2;

    t1 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) - 0x105B);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    t2 = (short)(t1 - 1);
    if ((short)(t1 - 1) == 0) {
        t1 = *(signed char *)((a4 + 0x1));
        if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x14))) == 1) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3739)), t0 == 19)) {
            t0 = *(signed char *)((a4 + 0x1));
            *(unsigned char *)((a4 + 0x1)) = 0xFFFFFFFF;
            t1 = *(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C7));
            FUN_0c073ed0(a4, t0, ((*(int *)0xC25AD18) + ((((unsigned char)t1 << 2) + (unsigned char)t1) << 2)), f4);
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x28;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c0deff6(int a4)
{
    register int t1;

    (((struct oA8_uchar *)(a4))->v) = ((*(short *)((a4 + 0x1C))) & 0x1);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((short)(t1 - 1) == 0) {
        return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    }
    return (short)(t1 - 1);
}

int FUN_0c0df09c(int a4)
{
    FUN_0c0e2700((a4 + 0x28), 0x2, 0x0, 0x1);
    FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    return FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
}
