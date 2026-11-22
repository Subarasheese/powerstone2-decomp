/* Straight-line functions with calls and guards (batch gen_hy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c154e00(int a4, int a5, int a6, int a7);

int FUN_0c154e00(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if ((unsigned int)t0 >= (unsigned int)0xC) {
        return FUN_0c03f346(a4, 0x0, 0x1, a7);
    }
    switch ((t0 << 1)) {
        case 0:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - 0x4000);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - 0x4000);
            (((struct o84_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
            (((struct o84_float *)(((((struct oD0_int *)(a4))->v))))->v) = 0.0f;
            (((struct o88_float *)(((((struct oD0_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
            (((struct o84_float *)(((((struct oD4_int *)(a4))->v))))->v) = 5.0f;
            (((struct o88_float *)(((((struct oD4_int *)(a4))->v))))->v) = 5.0f;
            t0 = *(signed char *)((a4 + 0x2));
            *(unsigned short *)((a4 + 0x1C)) = ((((t0 << 1) + t0) << 2) + 0x1);
            t0 = (((struct o22_short *)(a4))->v);
            *(unsigned short *)((a4 + 0x1C)) = ((((t0 << 1) + t0) << 2) + 0x1);
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
            break;
        case 2:
        {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
            break;
        case 4:
        {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x444);
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x444);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                t1 = *(signed char *)((a4 + 0x2));
                *(unsigned short *)((a4 + 0x1C)) = ((-(((t1 << 1) + t1) << 2)) + 0x2D);
                t1 = (((struct o22_short *)(a4))->v);
                *(unsigned short *)((a4 + 0x1C)) = ((-(((t1 << 1) + t1) << 2)) + 0x2D);
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
            break;
        case 6:
        {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
            break;
        case 8:
        {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) - 0.00499999989f);
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.00499999989f);
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) - 0.00499999989f);
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.00499999989f);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x32;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
            break;
        case 10:
        {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.00600000005f);
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) - 0.00200000009f);
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.00600000005f);
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) - 0.00200000009f);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x28;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
            break;
        case 12:
        {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) - 0.00499999989f);
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) - 0.00499999989f);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                t1 = *(signed char *)((a4 + 0x2));
                *(unsigned short *)((a4 + 0x1C)) = ((((t1 << 2) + t1) << 1) + 0x1);
                t1 = (((struct o22_short *)(a4))->v);
                *(unsigned short *)((a4 + 0x1C)) = ((((t1 << 2) + t1) << 1) + 0x1);
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
            break;
        case 14:
        {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
            break;
        case 16:
        {
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.100000001f);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x28;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
            break;
        case 18:
        {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
            break;
        case 20:
        {
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.100000001f);
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.100000001f);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1;
                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1;
                *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0x1;
                *(unsigned short *)((((((struct oD0_int *)(a4))->v)) + 0x6)) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
            break;
        default:
        {
            if ((*(float *)((0xC5325F8 + ((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938)))) > 0.0f) {
                *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
                (((struct o84_float *)(((((struct oD4_int *)(a4))->v))))->v) = 5.0f;
                (((struct o88_float *)(((((struct oD4_int *)(a4))->v))))->v) = 5.0f;
                t1 = 0x88;
            } else {
                *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
                t2 = 0x84;
                if (((((struct o84_float *)(((((struct oD4_int *)(a4))->v))))->v)) > 1.0f) {
                    t3 = (((struct oD4_int *)(a4))->v);
                    (((struct o84_float *)(t3))->v) = (((((struct o84_float *)(t3))->v)) - 0.100000001f);
                    t3 = (((struct oD4_int *)(a4))->v);
                    (((struct o88_float *)(t3))->v) = (((((struct o88_float *)(t3))->v)) - 0.100000001f);
                    t2 = 0x88;
                }
                t1 = t2;
            }
            t0 = t1;
        }
            break;
    }
    return t0;
}
