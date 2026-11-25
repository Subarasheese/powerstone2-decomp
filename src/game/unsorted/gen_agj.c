/* Straight-line functions with calls and guards (batch gen_agj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c0c2d56(int, int, int, int, float);
int FUN_0c0d47e0(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0d47e0(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1C8004); }
        *(unsigned int *)((a4 + 0x38)) = 0x0;
        (((struct o7C_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
        (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        (((struct o420_ushort *)(a4))->v) = (*(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2)));
        (((struct o160_float *)(a4))->v) = (*(float *)0xC286EAC);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x1A4;
        (((struct o126_uchar *)(a4))->v) = 0x1;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    t1 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))), a7, f4);
            (((struct oAA_uchar *)(a4))->v) = 0x1;
            (((struct oAB_uchar *)(a4))->v) = 0x5;
            t1 = 0xAB;
        }
    }
    return t1;
}
