/* Straight-line functions with calls and guards (batch gen_nf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c1171f0(int);
float math_sin_angle16(int);
int FUN_0c0fd6e4(int a4);

int FUN_0c0fd6e4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(0xC28EBF0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(0xC28EC08); }
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, 0x1A, (*(int *)0xC4B410C));
        FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x0, 0x1B, (*(int *)0xC4B410C));
        t2 = (((struct oC8_int *)(a4))->v);
        *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x400);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    t2 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC28EBFC); }
        if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((a4 + 0x4C)); }
        FUN_0c1171f0(a4);
        t0 = *(signed char *)((a4 + 0x15));
        switch (t0) {
        case 0:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 1) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 1:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) != 0) {
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x20) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x4);
                    if ((int)(*(short *)((a4 + 0x1E))) >= (int)0x20) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x20;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    }
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x3;
            }
            break;
        case 2:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 0) {
                (((struct o15_uchar *)(a4))->v) = 0x3;
            }
            break;
        case 3:
            if ((*(signed char *)(((t1 + 0x41C) + 0x0))) == 1) {
                (((struct o15_uchar *)(a4))->v) = 0x1;
            } else {
                if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                    if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x0;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                }
            }
            break;
        }
        if ((*(signed char *)((a4 + 0x15))) != 0) {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (int)((float)((((struct o7C_int *)(t0))->v)) + (((float)((((struct o4_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
            t0 = (((struct oC8_int *)(a4))->v);
            u0 = (((((struct o8_float *)0xC28EC14)->v)) * (math_sin_angle16((*(short *)((a4 + 0x1C))))));
            (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            *(unsigned short *)((a4 + 0x1C)) = (int)((float)(*(short *)((a4 + 0x1C))) + (((float)((((struct o0_int *)0xC28EC14)->v)) * ((float)(*(short *)((a4 + 0x1E))) / 32.0f))));
            (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1E))) / 32.0f);
        } else {
            (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        }
        t2 = 0x14;
    }
    return t2;
}
