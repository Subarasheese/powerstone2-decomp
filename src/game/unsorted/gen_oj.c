/* Straight-line functions with calls and guards (batch gen_oj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c0ede64(void);
int FUN_0c0edf44(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0edfac(int a4, int a5, int a6);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };


int FUN_0c0edfac(int a4, int a5, int a6)
{
    int t2;
    int t0;
    int t1;
    int t3;
    int t4;

    t2 = *(signed char *)(a4 + 0x16);
    if (t2 == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0x12C;
        (((struct o1E_ushort *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    if ((t2 == 0) || (t2 == 1)) {
        t2 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t2 - 1);
        if ((short)(t2 - 1) == 0) {
            t2 = *(signed char *)(a4 + 0x16);
            (((struct o16_uchar *)(a4))->v) = (t2 + 0x1);
            t3 = (t2 + 0x1);
        }
        t2 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t2 - 1);
        if ((int)(short)(t2 - 1) <= 0) {
            (((struct o20_ushort *)(a4))->v) = 0x3C;
            thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
        } else {
            t2 = t3;
        }
        t3 = t2;
        t2 = 0x0;
        t4 = t0;
        t0 = t1;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t4 = (*(int *)((((t2 << 2) + (0xC4 + a4)) + 0x0)));
            t0 = ((((((t2 << 2) << 1) + t2) << 2) << 1) + 0xC1CD104);
            t1 = (int)((int)((((struct o1E_short *)(a4))->v)) % (int)0x6);
            (((struct o78_uint *)(t4))->v) = (*(int *)((t0 + (((t1 << 1) + t1) << 2))));
            t1 = (int)((int)((((struct o1E_short *)(a4))->v)) % (int)0x6);
            t0 = (t0 + (((t1 << 1) + t1) << 2));
            t3 = ((((struct o4_int *)(t0))->v));
            t2 = (t2 + 0x1);
            (((struct o7C_uint *)(t4))->v) = t3;
        }
        if (((int)((int)((((struct o1E_short *)(a4))->v)) % (int)0xA)) == 0) {
            t0 = 0x4;
            for (;;) {
                FUN_0c0ede64();
                t0 = (t0 - 0x1);
                if (t0 == 0) {
                    break;
                }
            }
        }
        t0 = 0xC532498;
        t1 = 0xC532498;
        for (;;) {
            t2 = FUN_0c0edf44(t1);
            if (t2 != 0) {
                (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 7.0f);
            }
            t1 = (t1 + 0x3938);
            t0 = (t0 + 0x3938);
            if ((unsigned int)t1 >= (unsigned int)0xC540978) {
                break;
            }
        }
        (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) + 0x1);
    } else {
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o136_uchar *)(a4))->v) = 0x0;
        t0 = 0x0;
        t1 = a5;
        t2 = a6;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t1 = (*(int *)((((t0 << 2) + (0xC4 + a4)) + 0x0)));
            t2 = ((((((t0 << 2) << 1) + t0) << 2) << 1) + 0xC1CD104);
            t0 = (t0 + 0x1);
            (((struct o78_uint *)(t1))->v) = ((*(int *)(t2)));
            (((struct o7C_uint *)(t1))->v) = ((((struct o4_int *)(t2))->v));
        }
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
    }
    (((struct oBC_float *)(a4))->v) = 1.0f;
    (((struct oB8_float *)(a4))->v) = 1.0f;
    (((struct oB4_float *)(a4))->v) = 1.0f;
    return 0xB4;
}
