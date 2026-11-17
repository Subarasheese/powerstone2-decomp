/* game/unsorted: functions 0C156924-0C156A02, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o420_short { char p[0x420]; short v; };
struct o84_float { char p[0x84]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c156924(int a4, int a5, int a6, int a7);

int FUN_0c156924(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, 0x1, 0x0, a7);
            }
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = *(signed char *)((a4 + 0x2));
            t1 = (((short)t0 * (short)0x3938) + 0xC532498);
            if (((((struct o376C_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) != 0) {
                t0 = 0x41C;
                if ((*(signed char *)((((((struct o376C_int *)((0xC532498 + ((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938))))->v)) + 0x41C))) != 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                    t2 = *(signed char *)((a4 + 0x2));
                    (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)((((struct o420_short *)(((((struct o376C_int *)((((short)t2 * (short)0x3938) + 0xC532498)))->v))))->v)) / (float)(*(short *)((((unsigned short)(unsigned char)(*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x3721))) * (unsigned short)0x34) + 0xC2738D2))));
                    t0 = 0x84;
                }
                t1 = t0;
            }
            return t1;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x2));
    *(unsigned short *)((a4 + 0x1C)) = ((((t0 << 2) + t0) << 1) + 0xA0);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
