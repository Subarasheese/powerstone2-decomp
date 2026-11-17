/* game/unsorted: functions 0C0D9B1C-0C0D9EA0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o54_float { char p[0x54]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c07e420(int, int);
int FUN_0c0d9b62(int, int);
int FUN_0c0d9c40(void);
float math_sin_angle16(int);
int FUN_0c0d9c96(int a4, int a5, int a6, int a7);

int FUN_0c0d9c96(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    switch (t0) {
    case 0:
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x40F;
        (((struct oB0_float *)(a4))->v) = 1.0f;
        FUN_0c0d9b62(a4, 0x0);
        FUN_0c0d9b62(a4, 0x1);
        (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        if ((*(signed char *)((a4 + 0x132))) == 0) {
        } else {
            thunk_FUN_0c05abb2(0x47, 0x0);
            FUN_0c07e420(a4, 0x2);
            (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o54_float *)(a4))->v) = 30.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        break;
    case 1:
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        if ((*(signed char *)((a4 + 0x132))) == 0) {
        } else {
            thunk_FUN_0c05abb2(0x47, 0x0);
            FUN_0c07e420(a4, 0x2);
            (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o54_float *)(a4))->v) = 30.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        break;
    case 2:
        if ((*(signed char *)((a4 + 0x132))) == 0) {
        } else {
            thunk_FUN_0c05abb2(0x47, 0x0);
            FUN_0c07e420(a4, 0x2);
            (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o54_float *)(a4))->v) = 30.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        break;
    case 3:
        u0 = ((math_sin_angle16((*(short *)((a4 + 0x1C))))) * ((((struct o54_float *)(a4))->v)));
        *(unsigned int *)((a4 + 0x3C)) = (int)((u0 * 65536.0f) / 360.0f);
        t0 = (((struct oC4_int *)(a4))->v);
        u0 = ((math_sin_angle16((*(short *)((a4 + 0x1C))))) * ((((struct o54_float *)(a4))->v)));
        (((struct o80_uint *)(t0))->v) = (-(int)((u0 * 65536.0f) / 360.0f));
        t0 = (((struct oC8_int *)(a4))->v);
        u0 = ((math_sin_angle16((*(short *)((a4 + 0x1C))))) * ((((struct o54_float *)(a4))->v)));
        (((struct o80_uint *)(t0))->v) = (int)((u0 * 65536.0f) / 360.0f);
        t0 = *(signed char *)((a4 + 0x132));
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x200);
            }
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 0x200);
        }
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.100000001f);
        if (10.0f > ((((struct o54_float *)(a4))->v))) {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        }
        if (0.0f > ((((struct o54_float *)(a4))->v))) {
            thunk_FUN_0c05abb2(0x48, 0x0);
            (((struct o132_uchar *)(a4))->v) = 0x0;
            (((struct o14_uchar *)(a4))->v) = 0x1;
        }
        break;
    }
    t0 = FUN_0c0d9c40();
    if (t0 != 0) {
        (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0199999996f);
        if (0.5f > ((((struct oB0_float *)(a4))->v))) {
            (((struct oB0_float *)(a4))->v) = 0.5f;
        }
    } else {
        (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.0199999996f);
        if (((((struct oB0_float *)(a4))->v)) > 1.0f) {
            (((struct oB0_float *)(a4))->v) = 1.0f;
        }
    }
    return 0xB0;
}
