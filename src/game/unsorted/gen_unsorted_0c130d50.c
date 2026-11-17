/* game/unsorted: functions 0C130D50-0C130E40, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int);
int FUN_0c179ac0(void);
int FUN_0c130d50(int a4);

int FUN_0c130d50(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)((a4 + 0x38));
    u0 = (float)(int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x1E)) * 65536.0f) / 360.0f);
    *(unsigned int *)((a4 + 0x38)) = (t0 + (int)((u0 * 65536.0f) / 360.0f));
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xE38);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c03f346(a4);
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) * 0.100000001f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) < 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    } else {
        t1 = (((struct oC8_int *)(a4))->v);
        if (3.5f > ((((struct o84_float *)(t1))->v))) {
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.75f);
        }
        (((struct o8C_float *)(t1))->v) = ((((struct o84_float *)(t1))->v));
        (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) * 1.10000002f);
        if (((((struct o88_float *)(t1))->v)) > 4.0f) {
            (((struct o88_float *)(t1))->v) = 4.0f;
        }
        t0 = 0x88;
    }
    return t0;
}
