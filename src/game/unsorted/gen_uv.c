/* Straight-line functions with calls and guards (batch gen_uv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c1080d4(int a4, int a5, int a6, int a7);

int FUN_0c1080d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                return t0;
            }
            if (t0 == 10) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o90_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o4_float *)0xC1082A8)->v));
            } else if (t0 == 11) {
            } else {
                if (t0 == 80) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                t1 = t0;
                if (t0 == 99) {
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                    t1 = 0x14;
                }
                return t1;
            }
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x4C)) = *(struct mv3 *)((t0 + 0x6C)); }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x10) {
                (((struct o14_uchar *)(a4))->v) = 0x50;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x4, 0xD, (*(int *)0xC4B410C));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 200.0f);
        FUN_0c1171f0(a4);
        t0 = FUN_0c03f444(0x8, 0x0, 0x14);
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t0 + 0x4)) = 0xC108028;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)); }
            *(unsigned int *)((t0 + 0x10)) = a4;
            *(unsigned int *)((a4 + 0x10)) = t0;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 300.0f);
        (((struct o90_float *)(t0))->v) = ((((struct o0_float *)0xC1082A8)->v));
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x4C)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}
