/* Straight-line functions with calls and guards (batch gen_qw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c11fcc6(int a4, int a5, int a6, int a7);
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };


int FUN_0c11fcc6(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    float u0;
    int t1;
    int t4;
    int t3;

    t0 = *(signed char *)(a4 + 0x15);
    t1 = 0;
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        } else {
            t1 = 1;
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        if (((*(signed char *)(a4 + 0x2)) & 1) == 0) {
            t0 = 0x0;
            t2 = a7;
            for (;;) {
                if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                    break;
                }
                t3 = (t0 << 2);
                if (t0 == 0) {
                    t4 = *(int *)((((0xC4 + a4) + t3) + 0x0));
                    (((struct o6_ushort *)(t4))->v) = (((((struct o6_short *)(t4))->v)) | 0x200);
                    t2 = (*(int *)((((0xC4 + a4) + t3) + 0x0)));
                    (((struct o20_float *)(t2))->v) = 0.0f;
                    (((struct o1C_float *)(t2))->v) = 0.0f;
                    (((struct o18_float *)(t2))->v) = 0.0f;
                } else {
                    t4 = *(int *)((((0xC4 + a4) + t3) + 0x0));
                    (((struct o6_ushort *)(t4))->v) = (((((struct o6_short *)(t4))->v)) | 0x200);
                    t2 = (*(int *)((((0xC4 + a4) + t3) + 0x0)));
                    (((struct o20_float *)(t2))->v) = 1.0f;
                    (((struct o1C_float *)(t2))->v) = 1.0f;
                    (((struct o18_float *)(t2))->v) = 1.0f;
                }
                t0 = (t0 + 0x1);
            }
        }
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 0.0f;
        t1 = 1;
    }
    if (t1) {
        t0 = *(signed char *)(a4 + 0x16);
        switch (t0) {
        case 0:
            u0 = 0.0500000007f;
            if ((*(signed char *)(a4 + 0x1B)) == 2) {
                u0 = 0.0562499985f;
            }
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + u0);
            if (!(1.0f > ((((struct oB0_float *)(a4))->v)))) {
                (((struct oB0_float *)(a4))->v) = 1.0f;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
            }
            break;
        case 1:
            if (!(1.0f > ((((struct o2C_float *)(a4))->v)))) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
            }
            break;
        case 2:
            u0 = 0.0500000007f;
            if ((*(signed char *)(a4 + 0x1B)) == 2) {
                u0 = 0.0562499985f;
            }
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - u0);
            if (!(((((struct oB0_float *)(a4))->v)) > 0.0f)) {
                (((struct oB0_float *)(a4))->v) = 0.0f;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
            break;
        }
        u0 = 0.00999999978f;
        if ((*(signed char *)(a4 + 0x1B)) == 2) {
            u0 = 0.0112500004f;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u0);
        t0 = 0x2C;
        if (!((1.0f + 1.0f) > ((((struct o2C_float *)(a4))->v)))) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            t0 = 0x15;
        }
        t1 = t0;
    } else {
        t1 = 0x14;
    }
    return t1;
}
