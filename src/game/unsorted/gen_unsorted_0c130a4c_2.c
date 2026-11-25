/* game/unsorted: functions 0C130A4C-0C130D3E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int nlRand(void);
int FUN_0c130c02(int a4);

int FUN_0c130c02(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t2 = *(int *)((a4 + 0x10));
    t3 = *(int *)((a4 + 0x38));
    u0 = (float)(int)(((float)((int)((int)(nlRand()) % (int)0x1E)) * 65536.0f) / 360.0f);
    *(unsigned int *)((a4 + 0x38)) = (t3 + (int)((u0 * 65536.0f) / 360.0f));
    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                return t3;
            }
            return FUN_0c03f346(a4);
        }
        t3 = (((struct oC4_int *)(a4))->v);
        (((struct o18_float *)(t3))->v) = (((((struct o18_float *)(t3))->v)) - 0.100000001f);
        if (!(((((struct o18_float *)(t3))->v)) > 0.0f)) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t4 = 0x14;
        } else {
            u0 = (((struct o18_float *)(t3))->v);
            (((struct o20_float *)(t3))->v) = u0;
            (((struct o1C_float *)(t3))->v) = u0;
            t4 = 0x1C;
        }
        return t4;
    }
    t3 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
    t4 = 0x15;
    if (((int)(short)(t3 - 1) > 0) && ((t0 = *(signed char *)((t2 + 0x3715)), t0 == 26) && (t1 = *(signed char *)((t2 + 0x15)), (int)t1 <= (int)0x2))) {
    } else {
        t0 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
        (((struct o20_float *)(t0))->v) = 1.0f;
        (((struct o1C_float *)(t0))->v) = 1.0f;
        (((struct o18_float *)(t0))->v) = 1.0f;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t4 = 0x14;
    }
    return t4;
}
