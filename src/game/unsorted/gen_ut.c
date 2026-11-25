/* Straight-line functions with calls and guards (batch gen_ut): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c031a94(int a4, int a5, int a6, int a7, float f4);

int FUN_0c031a94(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        t0 = *(signed char *)((a4 + 0x15));
        t1 = 0;
        if (t0 != 0) {
            if (t0 != 1) {
                t2 = t0;
                if (t0 == 2) {
                    u0 = (((struct o0_float *)0xC031D10)->v);
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - u0);
                    t0 = (((struct oC8_int *)(a4))->v);
                    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - u0);
                    t0 = 0x6C;
                    if (((((struct o4_float *)0xC031D10)->v)) > ((((struct o6C_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    t2 = t0;
                }
            } else {
                t1 = 1;
            }
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                t0 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x0;
                *(unsigned short *)((t0 + 0x6)) = 0x11F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A94D0)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A94D0) + 0xC)); }
                t0 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A94D0) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t0 + 0x0)) = 0x0;
                *(unsigned short *)((t0 + 0x6)) = 0x31F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A94D0)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A94D0) + 0xC)); }
                (((struct o18_float *)(t0))->v) = 0.0f;
                (((struct o1C_float *)(t0))->v) = 0.0f;
                (((struct o20_float *)(t0))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 1;
            } else {
                t1 = 1;
            }
        }
        if (t1) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 4.0f);
                t0 = (((struct oC8_int *)(a4))->v);
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 4.0f);
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            t0 = t1;
        } else {
            t0 = t2;
        }
        return t0;
    } else {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
