/* game/unsorted: functions 0C14DE18-0C14E01C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o38E5_uchar { char p[0x38E5]; unsigned char v; };
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
void FUN_0c14de18(int a4, int a5, int a6, int a7);

void FUN_0c14de18(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t1 = *(int *)((a4 + 0x10));
    if (((*(signed char *)((t1 + 0x3714))) != 0) && (t0 = *(signed char *)((t1 + 0x371C)), t0 != 0)) {
        (((struct o38E5_uchar *)((*(int *)((a4 + 0x10)))))->v) = 0x1;
        if (((unsigned short)((((struct oAC_short *)((*(int *)((a4 + 0x10)))))->v)) & 0x400) != 0) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)((*(int *)((a4 + 0x10)))))->v)) * 0.899999976f);
        } else {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
            (((struct oB0_float *)(a4))->v) = 0.899999976f;
        }
        (((struct oA8_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0xA8)));
        t0 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x3715));
        if ((t0 != 5) && (t0 != 1)) {
            t0 = *(short *)((a4 + 0x1C));
            t1 = 0x2D8;
            if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) == 26) {
                t1 = 0xC16;
            }
            *(unsigned short *)((a4 + 0x1C)) = (t0 + t1);
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x888);
        }
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
            (((struct o7C_uint *)(t4))->v) = (int)(((math_sin_angle16(((int)(u1 / 1.5f) + 0x8000))) * 2949120.0f) / 360.0f);
            t2 = ((int)(u1 / 1.5f) + 0x8000);
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
    FUN_0c03f346(a4, a5, a6, a7);
}
