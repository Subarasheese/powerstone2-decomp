/* game/unsorted: functions 0C15D044-0C15D160, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o430_short { char p[0x430]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c03f346(int, int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c15d044(int a4, int a5, int a6, int a7);

int FUN_0c15d044(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = *(signed char *)((a4 + 0x1));
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    FUN_0c187798(a4, a5, a6);
    if (((unsigned short)((((struct o430_short *)((((short)t1 * (short)0x3938) + 0xC532498)))->v)) & 0x3C00) != 0) {
        t2 = (int)((int)(FUN_0c179ac0()) % (int)0x24);
        t3 = (int)((int)(FUN_0c179ac0()) % (int)0x5);
        u0 = math_sin_angle16((int)(((float)(((t2 << 2) + t2) << 1) * 65536.0f) / 360.0f));
        (((struct o4C_float *)(a4))->v) = (u0 * ((float)t3 + 3.0f));
        u0 = math_cos_angle16((int)(((float)(((t2 << 2) + t2) << 1) * 65536.0f) / 360.0f));
        (((struct o54_float *)(a4))->v) = (u0 * ((float)t3 + 3.0f));
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
        if ((short)(t2 - 1) == 0) {
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
        }
    }
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715))) == 32) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3739)), t0 == 27)) {
        t1 = t0;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
