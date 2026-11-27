/* Straight-line functions with calls and guards (batch gen_agb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0e90a0(int a4, int a5, int a6, int a7);

int FUN_0c0e90a0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = a5;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o30_float *)(a4))->v) = ((((struct o0_float *)0xC0E9184)->v));
        (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)0xC0E9184)->v));
        (((struct oAC_ushort *)(a4))->v) = 0x1;
        t1 = 0x0;
    }
    if ((t0 == 0) || (t0 == 1)) {
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 20.0f);
            t2 = 0x2C;
            if (!(0.0f > ((((struct o2C_float *)(a4))->v)))) {
                (((struct o2C_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x5;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            return t2;
        }
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
        if ((int)(short)(t2 - 1) <= 0) {
            return FUN_0c03f346(a4, t1, a6, a7);
        }
        return (short)(t2 - 1);
    } else {
        return t0;
    }
}
