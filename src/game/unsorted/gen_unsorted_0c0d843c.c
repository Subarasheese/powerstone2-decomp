/* game/unsorted: functions 0C0D843C-0C0D8596, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
extern int FUN_0c03f346();
int FUN_0c07e420(int, int);
int FUN_0c0d843c(int a4, int a5, int a6, int a7);

int FUN_0c0d843c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC54223C) == 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                    if (t0 != 4) {
                    } else {
                        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x14)) == 0) {
                            FUN_0c07e420(a4, 0x1);
                        }
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        t2 = (short)(t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o14_uchar *)(a4))->v) = 0x4;
                            t2 = 0x14;
                        }
                        t1 = t2;
                    }
                    t0 = t1;
                } else {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 2.20000005f);
                    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x14)) == 0) {
                        FUN_0c07e420(a4, 0x1);
                    }
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) == 0) {
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
                    *(unsigned short *)((a4 + 0x1C)) = 0x4B0;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(signed char *)0xC54098D;
            t2 = t1;
            if (t1 == 3) {
                *(unsigned short *)((a4 + 0x1C)) = 0x708;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        FUN_0c07e420(a4, 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o30_float *)(a4))->v) = 0.0f;
        (((struct o2C_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 1400.0f);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 2000.0f);
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 600.0f);
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
