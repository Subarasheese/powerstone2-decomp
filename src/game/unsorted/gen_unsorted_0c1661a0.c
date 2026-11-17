/* game/unsorted: functions 0C1661A0-0C166246, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
int FUN_0c03f346(int, int, int, int);
float math_sin_angle16(int);
int FUN_0c1661a0(int a4, int a5, int a6, int a7);

int FUN_0c1661a0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(short *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC535CB0));
    if (((unsigned short)t0 != 0x310) && ((unsigned short)t0 != 0x386)) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x9B);
            u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
            u1 = 3.0f;
            u1 = u1 + 0.5f * u0;
            (((struct o40_float *)(a4))->v) = u1;
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = u0;
            (((struct o44_float *)(a4))->v) = u0;
            t1 = 0x44;
        }
        t0 = t1;
    } else {
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.200000003f);
        if (!(3.0f > (u0 + 0.200000003f))) {
            (((struct o40_float *)(a4))->v) = 3.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = u0;
        (((struct o44_float *)(a4))->v) = u0;
        t0 = 0x44;
    }
    return t0;
}
