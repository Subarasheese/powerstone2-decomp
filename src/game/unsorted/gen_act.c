/* Straight-line functions with calls and guards (batch gen_act): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c12cf48(int a4, int a5, int a6, int a7);

int FUN_0c12cf48(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = 0;
    if ((t0 != 0) && (t0 != 2)) {
        if ((t0 != 1) && (t0 != 3)) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                t1 = 1;
            }
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x4;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
    } else {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                t1 = 1;
            }
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x4;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
    }
    if (t1) {
        t0 = *(short *)((a4 + 0x1C));
        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)t0 / 4.0f);
        if (!(((float)t0 / 4.0f) > 0.0f)) {
            (((struct o14_uchar *)(a4))->v) = 0xA;
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0x200);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x200);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x200);
    return 0x80;
}
