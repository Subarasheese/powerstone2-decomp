/* Straight-line functions with calls and guards (batch gen_aie): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o19C8_uchar { char p[0x19C8]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o3850_short { char p[0x3850]; short v; };
struct o430_short { char p[0x430]; short v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c085d0c(int);
int FUN_0c12fcf4(int, int, int);
int FUN_0c1328b4(int, int);
int FUN_0c09fb92(int a4, int a5, int a6);

int FUN_0c09fb92(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    if (((((struct o20_short *)(a4))->v)) != 0) {
        t1 = *(int *)((a4 + 0x38));
        t2 = (((struct o3850_short *)(a4))->v);
        t3 = (unsigned short)(t2 - t1);
        if ((0x8000 & (unsigned short)(t2 - t1)) != 0) {
            t3 = ((unsigned short)(t2 - t1) | 0xFFFF0000);
        }
        if ((int)((((struct o20_short *)(a4))->v)) > 0) {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)t3 / (int)((((struct o20_short *)(a4))->v)))));
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) > 30.0f) {
        if ((((((struct o37B8_float *)(a4))->v)) > 0.0f) && (t0 = (((struct o430_short *)(a4))->v), ((unsigned short)t0 & 0x200) != 0)) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return 0x16;
        }
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = *(short *)((a4 + 0x1C));
                t2 = t0;
                if ((int)t0 >= (int)0x5) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    FUN_0c12fcf4(a4, (*(short *)((a4 + 0x1E))), 0x0);
                    t0 = *(short *)((a4 + 0x1E));
                    t3 = t0;
                    if ((int)t0 >= (int)0x2) {
                        (((struct o19C8_uchar *)(a4))->v) = 0x1;
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        t3 = 0x0;
                    }
                    t2 = t3;
                }
                t1 = t2;
            }
            return t1;
        }
        t0 = *(short *)((a4 + 0x1C));
        t1 = 0xE;
        if ((*(signed char *)((a4 + 0x375A))) == 0) {
            t1 = 0xA;
        }
        if ((int)t0 >= (int)t1) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            return FUN_0c12fcf4(a4, (*(short *)((a4 + 0x1E))), 0x0);
        }
        return t0;
    }
    t0 = *(short *)((a4 + 0x1C));
    if ((int)t0 >= (int)0x3) {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o19C8_uchar *)(a4))->v) = 0x0;
        t1 = 0xF;
        if ((*(signed char *)((a4 + 0x375A))) == 0) {
            t1 = 0xB;
        }
        return FUN_0c1328b4(a4, t1);
    }
    return t0;
}
