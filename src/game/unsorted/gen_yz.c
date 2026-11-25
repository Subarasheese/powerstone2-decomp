/* Straight-line functions with calls and guards (batch gen_yz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
float math_sin_angle16(int);
int FUN_0c01b16a(int a4);

int FUN_0c01b16a(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o28_float *)(a4))->v) = (*(float *)((0xC20E128 + (((*(signed char *)((a4 + 0x3))) << 2) << 1))));
        (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)((0xC20E128 + (((*(signed char *)((a4 + 0x3))) << 2) << 1))))->v));
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
    }
    t1 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        t0 = *(signed char *)((a4 + 0x2));
        t1 = t0;
        if (t0 == 13) {
            u0 = 1.20000005f;
            u0 = u0 + 0.200000003f * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)));
            (((struct o40_float *)(a4))->v) = u0;
            u0 = 1.0f;
            u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 2)));
            (((struct o44_float *)(a4))->v) = u0;
            t1 = 0x44;
        }
    }
    return t1;
}
