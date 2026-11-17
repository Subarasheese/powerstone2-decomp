/* game/unsorted: functions 0C0D7F60-0C0D8034, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0d805c(int);
int FUN_0c0d7f60(int a4, int a5, int a6, int a7);

int FUN_0c0d7f60(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC54223C) == 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.0500000007f);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct oAC_ushort *)(a4))->v) = 0xF;
                    (((struct o14_uchar *)(a4))->v) = 0x0;
                    t1 = 0x14;
                }
                t0 = t1;
            } else {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t0 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    (((struct oAC_ushort *)(a4))->v) = 0x40F;
                    (((struct oB0_float *)(a4))->v) = 0.0f;
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x14;
                }
            }
            t1 = t0;
        } else {
            t0 = 0x160;
            if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                (((struct o12E_ushort *)(a4))->v) = 0x0;
                (((struct o12C_ushort *)(a4))->v) = 0x0;
                FUN_0c0d805c(a4);
                thunk_FUN_0c05abb2(0x40, 0x0);
                *(unsigned short *)((a4 + 0x1C)) = 0x12C;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
        (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFEF;
        (((struct o132_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x3;
        (((struct o160_float *)(a4))->v) = 150.0f;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}
