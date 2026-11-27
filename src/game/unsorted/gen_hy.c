/* Straight-line functions with calls and guards (batch gen_hy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c064d24(int, int, int, int, int, int, int, int);
void FUN_0c0eb758(int a4, int a5, int a6, float f4);

void FUN_0c0eb758(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                t0 = ((((struct o4_int *)0xC540DE0)->v));
                t1 = ((((struct o0_int *)0xC540DE0)->v));
            }
            t2 = t0;
            t0 = t1;
        } else {
            t2 = ((((struct o8_int *)0xC540DE0)->v));
            t0 = ((((struct o0_int *)0xC540DE0)->v));
        }
        t1 = t2;
        t2 = t0;
    } else {
        t1 = ((((struct o8_int *)0xC540DE0)->v));
        t2 = ((((struct o4_int *)0xC540DE0)->v));
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
    } else {
        FUN_0c064d24(a4, 0x2, 0x14, 0x1, 0x400, 0x0, 0x0, 0x5F);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t0 = *(signed char *)((a4 + 0x16));
        if (t0 == 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x14;
        }
        if ((t0 == 0) || (t0 == 1)) {
            t0 = (((struct oCC_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + ((((((struct o0_float *)0xC1CCC84)->v)) - ((((struct o18_float *)(t0))->v))) / 10.0f));
            t0 = (((struct oCC_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + ((((((struct o4_float *)0xC1CCC84)->v)) - ((((struct o1C_float *)(t0))->v))) / 10.0f));
            t0 = (((struct oCC_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + ((((((struct o8_float *)0xC1CCC84)->v)) - ((((struct o20_float *)(t0))->v))) / 10.0f));
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x3C;
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oCC_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC1CCC80); }
            }
        } else {
            if ((*(signed char *)((t2 + 0x41D))) == 2) {
                if ((*(signed char *)((t1 + 0x41D))) == 2) {
                    (((struct o41D_uchar *)(a4))->v) = 0x2;
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                }
            }
        }
    } else {
        (((struct o41D_uchar *)(a4))->v) = 0x2;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
    }
}
