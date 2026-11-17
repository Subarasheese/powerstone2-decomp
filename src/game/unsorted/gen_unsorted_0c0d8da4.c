/* game/unsorted: functions 0C0D8DA4-0C0D8F0C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c07c19c(int);
float math_cos_angle16(int);
int FUN_0c0d8da4(int a4, int a5, int a6, int a7);

int FUN_0c0d8da4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            return FUN_0c03f346(a4, a5, a6, a7);
                        }
                        return (short)(t0 - 1);
                    }
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 54);
                    t0 = 0x78;
                    if ((int)((((struct o78_int *)(((((struct oC4_int *)(a4))->v))))->v)) < (int)0x4000) {
                        (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x4000;
                        *(unsigned short *)((a4 + 0x1C)) = 0x384;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    return t0;
                }
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x80);
                (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (((-(int)(((math_cos_angle16((*(short *)((a4 + 0x1E))))) * 11796480.0f) / 360.0f)) + 0x8000) & 0xFFFF);
                t0 = (((struct oC4_int *)(a4))->v);
                t1 = t0;
                if ((int)((((struct o78_int *)(t0))->v)) > (int)0x471C) {
                    thunk_FUN_0c05abb2(0x4A, 0x0);
                    FUN_0c07c19c(0xE);
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                return t1;
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                thunk_FUN_0c05abb2(0x4B, 0x0);
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (((-(int)(((math_cos_angle16((*(short *)((a4 + 0x1E))))) * 11796480.0f) / 360.0f)) + 0x8000) & 0xFFFF);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)0xC54098D;
    t1 = t0;
    if (t0 == 3) {
        *(unsigned short *)((a4 + 0x1C)) = 0x8E8;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
