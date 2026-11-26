/* game/unsorted: functions 0C15BC68-0C15BE9A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
int FUN_0c03f346(int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int FUN_0c15bc68(int a4);

int FUN_0c15bc68(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if (1.0f > ((((struct o40_float *)(a4))->v))) {
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0399999991f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0399999991f);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0399999991f);
    }
    u0 = math_sin_angle16((*(short *)((a4 + 0x1E))));
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + (int)(((float)(((int)((int)(nlRand()) % (int)0x5)) + 0x6) * 65536.0f) / 360.0f));
    u1 = math_sin_angle16(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8))) + 0x4000));
    u2 = (u0 * 4.5f);
    u3 = ((((struct o28_float *)(a4))->v));
    u3 = u3 + u2 * u1;
    (((struct o28_float *)(a4))->v) = u3;
    u1 = math_cos_angle16(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8))) + 0x4000));
    u2 = (u0 * 4.5f);
    u0 = ((((struct o30_float *)(a4))->v));
    u0 = u0 + u2 * u1;
    (((struct o30_float *)(a4))->v) = u0;
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 2.5f);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
