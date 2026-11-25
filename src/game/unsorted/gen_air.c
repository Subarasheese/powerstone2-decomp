/* Straight-line functions with calls and guards (batch gen_air): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c03f346(int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0f8298(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c0f8298(int a4)
{
    int t2;
    int t1;
    int t0;
    int t3;
    float u0;
    int t4;

    if ((*(signed char *)(a4 + 0x14)) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        (((struct o1C_ushort *)(a4))->v) = (*(short *)((0xC1FB370 + ((*(signed char *)(a4 + 0x2)) << 1))));
        (((struct o1E_ushort *)(a4))->v) = 0x0;
    }
    t1 = *(signed char *)(a4 + 0x15);
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            u0 = (((struct oBC_float *)(a4))->v);
            (((struct oB8_float *)(a4))->v) = u0;
            (((struct oB4_float *)(a4))->v) = u0;
            (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0500000007f);
            t1 = 0xBC;
            if (!(((((struct oBC_float *)(a4))->v)) > 0.0f)) {
                (((struct oBC_float *)(a4))->v) = 0.0f;
                (((struct oB8_float *)(a4))->v) = 0.0f;
                (((struct oB4_float *)(a4))->v) = 0.0f;
                t3 = nlRand();
                t4 = (t3 % 0x2);
                (((struct o1C_ushort *)(a4))->v) = ((short)(t4 + 0x1) * (short)(*(short *)((0xC1FB378 + ((*(signed char *)(a4 + 0x2)) << 1)))));
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t1 = 0x15;
            }
            t2 = t1;
        }
        t1 = t2;
    } else {
        t2 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t2 - 1);
        t3 = (short)(t2 - 1);
        if ((int)(short)(t2 - 1) > 0) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            (((struct oBC_float *)(a4))->v) = 1.0f;
            (((struct oB8_float *)(a4))->v) = 1.0f;
            (((struct oB4_float *)(a4))->v) = 1.0f;
            t2 = nlRand();
            (((struct o28_float *)(a4))->v) = ((float)((t2 % 0x20) - 16) * 20.0f);
            t2 = nlRand();
            t4 = (t2 % 0x20);
            (((struct o2C_float *)(a4))->v) = ((float)t4 * 5.0f);
            u0 = (200.0f) + 1000.0f * (float)(-(*(signed char *)(a4 + 0x2)));
            (((struct o30_float *)(a4))->v) = u0;
            if ((((((struct o1E_short *)(a4))->v)) & 3) == 0) {
                t2 = 0x2;
                if (((*(signed char *)(a4 + 0x2)) == 0) && (t0 = (((struct o1E_short *)(a4))->v), (t0 & 4) != 0)) {
                    t2 = 0x1;
                }
                thunk_FUN_0c05abb2(t2, 0x0);
            }
            t0 = (((struct o1E_short *)(a4))->v);
            (((struct o1E_ushort *)(a4))->v) = (t0 + 0x1);
            t3 = (t0 + 0x1);
        }
        t1 = t3;
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0xE) {
        return FUN_0c03f346(a4);
    }
    return t1;
}
