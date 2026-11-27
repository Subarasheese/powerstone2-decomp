/* Straight-line functions with calls and guards (batch gen_op): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
extern int FUN_0c03f346();
int nlRand(void);
int FUN_0c0e2194(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };


int FUN_0c0e2194(int a4, int a5, int a6, int a7)
{
    int t1;
    float u0;
    int t2;
    int t0;
    int t3;

    if ((*(signed char *)0xC54223C) != 2) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        u0 = ((((struct o30_float *)(a4))->v)) + 50.0f * (((float)((int)((int)(nlRand()) % (int)0x7)) + -3.0f));
        (((struct o30_float *)(a4))->v) = u0;
        (((struct o3_uchar *)(a4))->v) = ((int)((int)(nlRand()) % (int)0x3));
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = *(signed char *)(a4 + 0x15);
        if (t1 == 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            (((struct o1C_ushort *)(a4))->v) = 0xA;
        }
        if ((t1 == 0) || (t1 == 1)) {
            (((struct o38_uint *)(a4))->v) = (((((struct o38_int *)(a4))->v)) + 0x888);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)((0xC1CA72C + ((*(signed char *)(a4 + 0x3)) << 2)))));
            u0 = (((struct o48_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = u0;
            (((struct o40_float *)(a4))->v) = u0;
            t2 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((int)(short)(t2 - 1) <= 0) {
                (((struct o1C_ushort *)(a4))->v) = 0xA;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                t3 = 0x15;
            }
            return t3;
        } else {
            if (t1 != 2) {
                if (t1 != 3) {
                    return t1;
                }
                (((struct o38_uint *)(a4))->v) = (((((struct o38_int *)(a4))->v)) - 0x1111);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)((0xC1CA744 + ((*(signed char *)(a4 + 0x3)) << 2)))));
                u0 = (((struct o48_float *)(a4))->v);
                (((struct o44_float *)(a4))->v) = u0;
                (((struct o40_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0666666701f);
                if (0.0f > ((((struct oB4_float *)(a4))->v))) {
                    (((struct oB4_float *)(a4))->v) = 0.0f;
                }
                u0 = (((struct oB4_float *)(a4))->v);
                (((struct oBC_float *)(a4))->v) = u0;
                (((struct oB8_float *)(a4))->v) = u0;
                t1 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    return ((int (*)(int, int))(FUN_0c03f346))(a4, 0xA);
                }
                return (short)(t1 - 1);
            }
            (((struct o38_uint *)(a4))->v) = (((((struct o38_int *)(a4))->v)) + 0x1111);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)((0xC1CA738 + ((*(signed char *)(a4 + 0x3)) << 2)))));
            u0 = (((struct o48_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = u0;
            (((struct o40_float *)(a4))->v) = u0;
            t1 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o1C_ushort *)(a4))->v) = 0xF;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
                (((struct oBC_float *)(a4))->v) = 1.0f;
                (((struct oB8_float *)(a4))->v) = 1.0f;
                (((struct oB4_float *)(a4))->v) = 1.0f;
                t2 = 0xB4;
            }
            return t2;
        }
    } else {
        return t0;
    }
}
