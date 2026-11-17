/* game/unsorted: functions 0C13CC84-0C13CE1A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c13cc84(int a4);
int FUN_0c13ccfe(int a4, int a5, int a6, int a7);

int FUN_0c13cc84(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40DC))));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x400F;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13CCFE;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1E)) = (*(signed char *)((a4 + 0x3715)));
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0x38)));
        return thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (t0 + 0x28));
    }
    return t0;
}

int FUN_0c13ccfe(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x3715))) == (*(short *)((a4 + 0x1E)))) {
        t1 = *(signed char *)((a4 + 0x14));
        if (t1 != 0) {
            if (t1 != 1) {
                return t1;
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                } else {
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1555);
                }
            } else {
                if (!(((((struct o2C_float *)(a4))->v)) > ((((struct o2C_float *)(t0))->v)))) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)(t0))->v));
                    (((struct o50_float *)(a4))->v) = 15.0f;
                    (((struct o5C_float *)(a4))->v) = -1.0f;
                    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 15.0f);
                    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 15.0f);
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                return ((int (*)(int))(FUN_0c03f346))(a4);
            }
            return (short)(t1 - 1);
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (a4 + 0x28));
        (((struct o50_float *)(a4))->v) = -20.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
            } else {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1555);
            }
        } else {
            if (!(((((struct o2C_float *)(a4))->v)) > ((((struct o2C_float *)(t0))->v)))) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)(t0))->v));
                (((struct o50_float *)(a4))->v) = 15.0f;
                (((struct o5C_float *)(a4))->v) = -1.0f;
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 15.0f);
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 15.0f);
            }
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        return (short)(t0 - 1);
    }
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
}
