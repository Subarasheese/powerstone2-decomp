/* Straight-line functions with calls and guards (batch gen_rr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c03f346(int, int, int, int);
float math_sin_angle16(int);
int nlRand(void);
int FUN_0c15e7e4(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c15e7e4(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t0 = *(signed char *)((t1 + 0x41D));
        if ((t0 != 7) && (t0 != 5)) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t0 = (int)((int)(nlRand()) % (int)0x14);
                    *(unsigned short *)((a4 + 0x1E)) = (t0 + 0xA);
                    t3 = (t0 + 0xA);
                } else {
                    t0 = (((struct o41C_int *)(a4))->v);
                    (((struct o41C_uint *)(a4))->v) = (t0 + 0x38E);
                    u0 = math_sin_angle16((t0 + 0x38E));
                    u1 = u0;
                    if (!(u0 > 0.0f)) {
                        u1 = 0.0f;
                    }
                    u0 = u1;
                    if (!(1.0f > u1)) {
                        u0 = 1.0f;
                    }
                    (((struct oBC_float *)(a4))->v) = u0;
                    (((struct oB8_float *)(a4))->v) = u0;
                    (((struct oB4_float *)(a4))->v) = u0;
                    t3 = 0xB4;
                }
                t2 = t3;
            }
            t0 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((int)(short)(t2 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x24;
                (((struct o41C_uint *)(a4))->v) = 0x0;
                t3 = 0x24;
            }
            t0 = t3;
        }
        return t0;
    } else {
        return FUN_0c03f346(a4, t1, a6, a7);
    }
}
