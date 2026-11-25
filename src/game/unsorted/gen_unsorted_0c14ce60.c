/* game/unsorted: functions 0C14CE60-0C14CFE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o404_int { char p[0x404]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c05aae4(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int nlRand(void);
int math_vec3_accumulate(int, int);
int FUN_0c14ce60(int a4, int a5, int a6, int a7);

int FUN_0c14ce60(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)0xC542260) & 0x2);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1555);
        if (0.0f > ((((struct o50_float *)(a4))->v))) {
            t0 = FUN_0c064f80(a4);
            if (t0 != 0) {
                t0 = FUN_0c064ee4(a4, 0x2);
                if (t0 == 0) {
                    u0 = ((((struct o50_float *)(a4))->v));
                    u0 *= -0.699999988f;
                    (((struct o50_float *)(a4))->v) = u0;
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
                    if ((int)(short)(t0 + 0x1) > (int)0x2) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    } else {
                        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                        t0 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
                    }
                    t1 = t0;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                t0 = t1;
            } else {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                t0 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
            }
            t1 = t0;
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t1 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
        }
        return t1;
    }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xC16);
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x222);
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o12A_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
    }
    if (((((struct o404_int *)(a4))->v)) != 0) {
        (((struct o50_float *)(a4))->v) = 20.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o4C_float *)(a4))->v) = ((-((((struct o4C_float *)(a4))->v))) / 5.0f);
        (((struct o54_float *)(a4))->v) = ((-((((struct o54_float *)(a4))->v))) / 5.0f);
        t0 = *(signed char *)((a4 + 0x1B));
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        if (t1 == 0) {
            FUN_0c05aae4(0x2E, (a4 + 0x28));
        }
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + ((int)((int)(nlRand()) % (int)0x14)));
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    } else {
        t0 = (math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C)));
    }
    return t0;
}
