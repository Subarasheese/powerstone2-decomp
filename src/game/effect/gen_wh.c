/* Straight-line functions with calls and guards (batch gen_wh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
int thunk_FUN_0c058310(int, int);
int FUN_0c134c9c(int a4, float f4);

int FUN_0c134c9c(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(signed char *)((a4 + 0x18));
    if (t1 == 0) {
        (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0x3C;
    }
    if ((t1 == 0) || (t1 == 1)) {
        t1 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
        }
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (a4 + 0x4C));
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.00499999989f);
        u0 = (((struct o0_float *)0xC134DEC)->v);
        if (u0 > ((((struct o40_float *)(a4))->v))) {
            (((struct o40_float *)(a4))->v) = u0;
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = u0;
        (((struct o44_float *)(a4))->v) = u0;
        u0 = (((struct o4_float *)0xC134DEC)->v);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o4C_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((((struct o50_float *)(a4))->v)) - ((((struct o2C_float *)(a4))->v))) / u0));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o54_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))) / u0));
        t0 = 0x30;
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t0 = 0x16;
    }
    return t0;
}
