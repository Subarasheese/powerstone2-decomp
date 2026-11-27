/* Straight-line functions with calls and guards (batch gen_ahy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c0e0548(int, int);
float math_cos_angle16(int);
int FUN_0c0e08e0(int a4);

int FUN_0c0e08e0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 == 0) {
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        t1 = *(short *)((a4 + 0x1C));
        t2 = t1;
        if ((int)t1 <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t2 = 0x16;
        }
        t1 = t2;
    } else {
        if (t0 != 2) {
            if (t0 != 3) {
                t2 = t0;
                if (t0 != 4) {
                } else {
                    t0 = (((struct oC8_int *)(a4))->v);
                    (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 109);
                    if ((int)((((struct o78_int *)(((((struct oC8_int *)(a4))->v))))->v)) <= 0) {
                        (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
                        FUN_0c0e0548(a4, 0x0);
                        *(unsigned short *)((a4 + 0x1C)) = 0x78;
                    }
                    t2 = 0x78;
                }
                t0 = t2;
            } else {
                t2 = (((struct oC8_int *)(a4))->v);
                u0 = 3276.0f;
                u0 = u0 + 364.0f * (math_cos_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                (((struct o78_uint *)(t2))->v) = (int)u0;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                t2 = *(short *)((a4 + 0x1C));
                t0 = t2;
                if ((int)t2 <= 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o131_uchar *)(a4))->v) = 0x0;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    t0 = 0x12A;
                }
            }
            t2 = t0;
        } else {
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0x6D);
            t0 = 0x78;
            if ((int)((((struct o78_int *)(((((struct oC8_int *)(a4))->v))))->v)) >= (int)0xCCC) {
                (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0xCCC;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t0 = 0x3C;
            }
            t2 = t0;
        }
        t1 = t2;
    }
    return t1;
}
