/* game/unsorted: functions 0C0140E0-0C0141DA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
float math_sin_angle16(int);
int FUN_0c0140e0(int a4);

int FUN_0c0140e0(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register float u0;

    (((struct oA8_uchar *)(a4))->v) = ((((*(signed char *)((a4 + 0x3))) == (unsigned char)(*(signed char *)(((*(int *)0xC304B24) + 0x1))))) ? 1 : 0);
    t0 = 0xA8;
    if ((int)(unsigned char)(*(signed char *)(((*(int *)0xC304B24) + 0x0))) <= (int)0x2) {
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                u0 = 0.5f;
                u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
                (((struct oBC_float *)(a4))->v) = u0;
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                t1 = 0xB4;
            } else {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                u0 = 0.5f;
                u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
                (((struct oB0_float *)(a4))->v) = u0;
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t3 = (short)(t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
                    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = 0x15;
                }
                t1 = t3;
            }
            t0 = t1;
        } else {
            if ((*(signed char *)((a4 + 0x3))) == 0) {
                (((struct o28_float *)(a4))->v) = -120.0f;
                u0 = -94.0f;
            } else {
                (((struct o28_float *)(a4))->v) = 140.0f;
                u0 = -190.0f;
            }
            (((struct o2C_float *)(a4))->v) = u0;
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
            t3 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t0 = t3;
        }
    }
    return t0;
}
