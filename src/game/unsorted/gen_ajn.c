/* Straight-line functions with calls and guards (batch gen_ajn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int FUN_0c064f80(int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int FUN_0c16f354(int a4);

int FUN_0c16f354(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x5A) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    t1 = nlRand();
    t2 = (t1 % 0x4000);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + t2);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c03f346(a4);
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        t0 = 0x50;
        if (0.0f > ((((struct o50_float *)(a4))->v))) {
            t1 = FUN_0c064f80(a4);
            t2 = t1;
            if (t1 != 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
        return t0;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = 0x50;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c064f80(a4);
        t2 = t1;
        if (t1 != 0) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / -2.5f);
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        t0 = t2;
    }
    return t0;
}
