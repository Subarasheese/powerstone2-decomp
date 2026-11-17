/* game/unsorted: functions 0C01436C-0C0144F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c01c62a(int);
int FUN_0c01cd2c(int);
float math_sin_angle16(int);
int FUN_0c01436c(int a4);
int FUN_0c0144ce(int a4);

int FUN_0c01436c(int a4)
{
    register int t0;
    int t1;
    int t2;
    register float u0;

    (((struct o2C_float *)(a4))->v) = (*(float *)((((*(signed char *)0xC305415) << 2) + 0xC1A5DA4)));
    (((struct o28_float *)(a4))->v) = -154.0f;
    if (((*(signed char *)0xC30A51A) == 0) && ((t0 = *(signed char *)0xC30EFA2, t0 == 0) && (t1 = *(signed char *)((a4 + 0x15)), (int)t1 < (int)0x3))) {
        t0 = FUN_0c01cd2c(0x101);
        if (((short)t0 != 0) && (t2 = *(short *)0xC30EF6C, t2 == 0)) {
            (((struct o15_uchar *)(a4))->v) = 0x3;
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    t0 = FUN_0c01c62a(a4);
                    t2 = (signed char)t0;
                    if ((signed char)t0 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                u0 = 0.5f;
                u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
                (((struct oBC_float *)(a4))->v) = u0;
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                t0 = 0xB4;
            }
            t1 = t0;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            u0 = 0.5f;
            u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
            (((struct oB0_float *)(a4))->v) = u0;
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o28_float *)(a4))->v) = -154.0f;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 0.5f;
        (((struct oB8_float *)(a4))->v) = 0.5f;
        (((struct oB4_float *)(a4))->v) = 0.5f;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        u0 = 0.5f;
        u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
        (((struct oB0_float *)(a4))->v) = u0;
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0144ce(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x15));
    t2 = t0;
    if (t0 == 0) {
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o2C_float *)(a4))->v) = 208.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}
