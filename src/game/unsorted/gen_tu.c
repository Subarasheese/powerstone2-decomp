/* Straight-line functions with calls and guards (batch gen_tu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
extern int FUN_0c03f346();
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c13ccfe(int a4, int a5, int a6, int a7);

int FUN_0c13ccfe(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x3715))) == (*(short *)((a4 + 0x1E)))) {
        t1 = *(signed char *)((a4 + 0x14));
        if (t1 != 0) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (a4 + 0x28));
            (((struct o50_float *)(a4))->v) = -20.0f;
            (((struct o5C_float *)(a4))->v) = -2.0f;
        }
        if ((t1 == 0) || (t1 == 1)) {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t2 = *(signed char *)((a4 + 0x15));
            if (t2 != 0) {
                if (t2 != 1) {
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
        } else {
            return t1;
        }
    }
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
}
