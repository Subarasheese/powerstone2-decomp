/* game/unsorted: functions 0C15EF70-0C15F182, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_short { char p[0x24]; short v; };
struct o38A0_short { char p[0x38A0]; short v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c03f346(int, int, int, int);
float math_sin_angle16(int);
void FUN_0c15ef70(int a4, int a5, int a6, int a7);

void FUN_0c15ef70(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t5 = *(int *)((a4 + 0x10));
    if (((unsigned char)(*(signed char *)(((0x389C + t5) + 0x0))) == (*(signed char *)((a4 + 0x2)))) && ((t0 = *(short *)(((0x389C + t5) + 0x2)), t1 = (((struct o24_short *)(a4))->v), t0 == t1) && (t2 = *(signed char *)((t5 + 0x3714)), t2 != 0))) {
        if (((unsigned short)((((struct oAC_short *)((*(int *)((a4 + 0x10)))))->v)) & 0x400) != 0) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            u0 = ((((struct oB0_float *)((*(int *)((a4 + 0x10)))))->v));
        } else {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
            u0 = 1.0f;
        }
        (((struct oB0_float *)(a4))->v) = u0;
        t0 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0xA8));
        (((struct oA8_uchar *)(a4))->v) = t0;
        if ((t0 != 0) && (t3 = *(int *)((a4 + 0x10)), t4 = (((struct o38A0_short *)(t3))->v), (int)t4 < (int)0x3C)) {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)0xC542260) & 0x1);
        }
        t0 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x3715));
        t1 = 0xAAA;
        if ((t0 != 5) && (t0 != 1)) {
            t1 = 0x444;
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + t1);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1E)) = 0x4000;
        t1 = *(short *)((a4 + 0x1E));
        if ((unsigned int)(unsigned short)t0 < (unsigned int)(unsigned short)t1) {
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = (int)(((math_sin_angle16(((unsigned short)t0 << 1))) * 786432.0f) / 360.0f);
            t2 = ((unsigned short)t0 << 1);
            t3 = (((((struct oD4_int *)(a4))->v)) + 0x7C);
            u0 = 786432.0f;
        } else {
            t4 = (((struct oC8_int *)(a4))->v);
            u1 = (float)((unsigned short)t0 - (unsigned short)t1);
            if ((int)((unsigned short)t0 - (unsigned short)t1) < 0) {
                u1 = ((float)((unsigned short)t0 - (unsigned short)t1) + 4.2949673e+09f);
            }
            (((struct o7C_uint *)(t4))->v) = (int)(((math_sin_angle16((int)((u1 / 1.5f) + 32768.0f))) * 2949120.0f) / 360.0f);
            t2 = (int)((u1 / 1.5f) + 32768.0f);
            t3 = (((((struct oD4_int *)(a4))->v)) + 0x7C);
            u0 = 2949120.0f;
        }
        *(unsigned int *)((t3 + 0x0)) = (-(int)(((math_sin_angle16(t2)) * u0) / 360.0f));
        *(unsigned short *)((a4 + 0x1E)) = 0xFFFF8000;
        if ((unsigned int)(unsigned short)t0 < (unsigned int)(unsigned short)(*(short *)((a4 + 0x1E)))) {
            (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = (int)(((math_sin_angle16((unsigned short)t0)) * 1638400.0f) / 360.0f);
            t1 = ((((struct oD8_int *)(a4))->v));
            u0 = 1638400.0f;
        } else {
            (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = (int)(((math_sin_angle16((unsigned short)t0)) * 3276800.0f) / 360.0f);
            t1 = ((((struct oD8_int *)(a4))->v));
            u0 = 3276800.0f;
        }
        (((struct o7C_uint *)(t1))->v) = (-(int)(((math_sin_angle16((unsigned short)t0)) * u0) / 360.0f));
        return;
    }
    FUN_0c03f346(a4, t5, a6, a7);
}
