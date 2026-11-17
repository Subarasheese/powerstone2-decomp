/* game/unsorted: functions 0C0EDE50-0C0EE318, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o80_int { char p[0x80]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c0ede50(int);
int FUN_0c0edfac(int);
int FUN_0c0ee148(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0ee148(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            if ((*(signed char *)((a4 + 0x15))) != 1) {
                FUN_0c0ede50(a4);
                t1 = *(signed char *)((0x15 + (*(int *)((a4 + 0x10)))));
                t2 = t1;
                if ((t1 != 4) && ((t1 != 5) && ((t1 != 6) && ((t1 != 8) && ((t1 != 9) && ((t1 != 99) && (t1 == 7))))))) {
                    (((struct o15_uchar *)(a4))->v) = 0x1;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t2 = 0x16;
                }
                return t2;
            }
            return FUN_0c0edfac(a4);
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x168;
                t0 = 0x168;
            } else {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    t1 = *(signed char *)((a4 + 0x15));
                    (((struct o15_uchar *)(a4))->v) = (t1 + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                    t2 = (t1 + 0x1);
                }
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) + 0.0166666675f);
                if (!(1.0f > ((((struct oBC_float *)(a4))->v)))) {
                    (((struct oBC_float *)(a4))->v) = 1.0f;
                }
                u0 = (((struct oBC_float *)(a4))->v);
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                t1 = t2;
                t2 = 0x0;
                t3 = a7;
                t4 = 0x0;
                for (;;) {
                    if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                        break;
                    }
                    t3 = 0xC4;
                    t4 = t2;
                    t4 = (t4 << 2);
                    t3 = (t3 + a4);
                    t3 = (t3 + t4);
                    t3 = (*(int *)((t3 + 0x0)));
                    t2 = (t2 + 0x1);
                    t1 = 0x80;
                    t1 = (t1 + t3);
                    *(unsigned int *)((t1 + 0x0)) = (((((struct o80_int *)(t3))->v)) - ((int)((int)(*(int *)((0xC1CD224 + t4))) / (int)0x3C)));
                }
                t0 = 0xC0;
            }
            t1 = t0;
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t2 = 0x3C;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t1 = 0x1;
        t2 = a7;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)0xC540E20) + 0x64);
            t3 = *(int *)0xC540E20;
            *(unsigned int *)((a4 + 0x10)) = t3;
            t1 = t3;
            t2 = 0xC540978;
        }
        t3 = t1;
        t1 = 0x0;
        t4 = t2;
        t2 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = 0xC4;
            t4 = t1;
            t4 = (t4 << 2);
            t2 = (t2 + a4);
            t2 = (t2 + t4);
            t2 = (*(int *)((t2 + 0x0)));
            t3 = 0x80;
            t1 = (t1 + 0x1);
            t3 = (t3 + t2);
            *(unsigned int *)((t3 + 0x0)) = (*(int *)((0xC1CD224 + t4)));
        }
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x348;
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            t2 = 0x3C;
        }
        t0 = t2;
    }
    return t0;
}
