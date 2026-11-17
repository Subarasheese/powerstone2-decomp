/* game/unsorted: functions 0C124C04-0C124F08, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o3818_short { char p[0x3818]; short v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f346(int, int, int, int);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c124c04(int a4, int a5, int a6, int a7);

int FUN_0c124c04(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t2 = *(int *)((a4 + 0x10));
    t3 = a5;
    if (((*(signed char *)((t2 + 0x3715))) == 26) && (t0 = (((struct o3818_short *)(t2))->v), (unsigned short)t0 == 0x113)) {
    } else {
        if ((int)(*(signed char *)((a4 + 0x14))) < (int)0x3) {
            (((struct o14_uchar *)(a4))->v) = 0x3;
        }
        t3 = 0x3;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 3) {
            if (t0 == 4) {
                (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
                u0 = (((struct oB4_float *)(a4))->v);
                (((struct oBC_float *)(a4))->v) = u0;
                (((struct oB8_float *)(a4))->v) = u0;
                t4 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                if ((int)(short)(t4 - 1) <= 0) {
                    return FUN_0c03f346(a4, t3, a6, a7);
                }
                return (short)(t4 - 1);
            }
            return t0;
        }
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return FUN_0c03f346(a4, t3, a6, a7);
        }
        return (short)(t0 - 1);
    }
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(t2, t3, a6);
    t0 = ((int (*)(int))(FUN_0c187798))(t1);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xAAA);
    t1 = *(short *)((a4 + 0x1E));
    u0 = math_sin_angle16((int)(((float)((t1 << 2) + t1) * 65536.0f) / 360.0f));
    u1 = 1.0f;
    u1 = u1 + 0.300000012f * u0;
    (((struct o8C_float *)(t0))->v) = u1;
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - 2730);
    t1 = *(short *)((a4 + 0x1E));
    u0 = math_sin_angle16((int)(((float)(((t1 << 2) + t1) + 0x1E) * 65536.0f) / 360.0f));
    u1 = 1.0f;
    u1 = u1 + 0.300000012f * u0;
    (((struct o8C_float *)(t0))->v) = u1;
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xE38);
    if (1.5f > ((((struct o8C_float *)(t0))->v))) {
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) * 1.02999997f);
    }
    return 0x8C;
}
