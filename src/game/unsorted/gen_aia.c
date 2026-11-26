/* Straight-line functions with calls and guards (batch gen_aia): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c04875e(int a4, int a5, int a6, int a7);

int FUN_0c04875e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t3;
    register int t4;
    register int t5;
    register int t14;
    register int t20;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        t1 = *(signed char *)((a4 + 0x14));
        (((struct o14_uchar *)(a4))->v) = (t1 + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 5.0f);
        t3 = (t1 + 0x1);
        t4 = 0x0;
        t5 = a7;
        for (;;) {
            if ((int)t4 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t3 = 0xC4;
            t5 = t4;
            t5 = (t5 << 2);
            t3 = (t3 + a4);
            t5 = (t5 + t3);
            t3 = 0x1;
            t3 = ((int)t3 << (int)t4);
            t5 = (*(int *)((t5 + 0x0)));
            if (((*(signed char *)((a4 + 0x1B))) & t3) == 0) {
                *(unsigned char *)((t5 + 0x0)) = 0x1;
            } else {
                *(unsigned char *)((t5 + 0x0)) = 0x0;
            }
            t4 = (t4 + 0x1);
        }
    }
    t14 = *(signed char *)((a4 + 0x15));
    t20 = t14;
    if (t14 == 0) {
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 0.100000001f);
        t20 = 0x30;
        if (!(((((struct o30_float *)(a4))->v)) > -5.01000023f)) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t20 = 0x15;
        }
    }
    return t20;
}
