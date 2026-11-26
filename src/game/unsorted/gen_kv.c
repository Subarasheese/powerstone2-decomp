/* Straight-line functions with calls and guards (batch gen_kv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c05a080(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
void FUN_0c11d032(int a4, int a5, int a6, int a7);
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


/* manual: a state machine on byte 20 of the object: 0 start (copy 7 sub-object vectors, call FUN_0c03733c), 2/3/4 a random-angle shake
   of 4 or 6 sub-objects (one loop over the table, scale float at 0C29242C + 0/4/8), 5-8 and 11-14 a 30/60 frame angle ramp (up or down)
   on sub-object C8 / CC, 10 FUN_0c03f346, 20/30/99 flag stores; cases: 206 (36 old + 170 hand), 1360 of 1360 instructions */
static const unsigned char tbl_0c11d032[9] = { 0xC4, 0xC8, 0xCC, 0xD0, 0xD8, 0xD4, 0xDC, 0xC8, 0xCC };

void FUN_0c11d032(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int k;
    int n;
    int ph;
    float u0;
    float u1;
    float f;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0x0;
        FUN_0c03733c(a4, 0x14, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x40) = *(struct mv3 *)(0xC2A0C84); }
        for (k = 0; k < 7; k++) {
            t1 = *(int *)(a4 + tbl_0c11d032[k]);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1 + 0x90) = *(struct mv3 *)(t1 + 0x6C); }
        }
        return;
    }
    if (t0 == 1) {
        return;
    }
    if (t0 >= 2 && t0 <= 4) {
        n = (t0 == 4) ? 6 : 4;
        for (k = 0; k < n; k++) {
            t1 = nlRand() % 0x10;
            ph = *(int *)(a4 + tbl_0c11d032[k + 3]);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(ph + 0x6C) = *(struct mv3 *)(ph + 0x90); }
            u1 = (((((float)t1 * 360.0f) / 16.0f) * 65536.0f) / 360.0f);
            f = *(float *)(0xC29242C + ((t0 == 3) ? 4 : ((k >= 4) ? 8 : 0)));
            u0 = ((((struct o6C_float *)(ph))->v)) + f * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o6C_float *)(ph))->v) = u0;
            u0 = ((((struct o70_float *)(ph))->v)) + f * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
            (((struct o70_float *)(ph))->v) = u0;
        }
        return;
    }
    if (t0 == 10) {
        FUN_0c03f346(a4, a5, a6, a7);
        return;
    }
    if (t0 == 5 || t0 == 6 || t0 == 7 || t0 == 8 || (t0 >= 11 && t0 <= 14)) {
        if (t0 == 5 || t0 == 7 || t0 == 11 || t0 == 13) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
        }
        ph = *(signed char *)(a4 + 0x15);
        if (ph == 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            (((struct o1E_ushort *)(a4))->v) = 0x0;
            if (t0 == 5 || t0 == 6 || t0 == 11 || t0 == 12) {
                for (k = 0; k < 6; k++) {
                    t1 = *(int *)(a4 + tbl_0c11d032[k + 3]);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t1 + 0x6C) = *(struct mv3 *)((0x90 + t1)); }
                }
            }
        } else if (ph != 1) {
            return;
        }
        f = (t0 <= 8) ? 60.0f : 30.0f;
        t1 = *(int *)(a4 + ((t0 <= 8) ? 0xC8 : 0xCC));
        if (t0 == 5 || t0 == 6 || t0 == 11 || t0 == 12) {
            u0 = (((float)((((struct o1E_short *)(a4))->v)) * 90.0f) / f);
        } else {
            u0 = (((-(((float)((((struct o1E_short *)(a4))->v)) * 90.0f) / f))) + 90.0f);
        }
        *(unsigned int *)(t1 + ((t0 <= 8) ? 0x78 : 0x7C)) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        n = (((struct o1E_short *)(a4))->v);
        (((struct o1E_ushort *)(a4))->v) = (n + 0x1);
        if ((int)(short)(n + 0x1) > ((t0 <= 8) ? 0x3C : 0x1E)) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            if (t0 <= 8) {
                FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                FUN_0c05a080(0xD, 0x0);
            }
        }
        return;
    }
    switch (t0) {
    case 20:
        (((struct o14_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        break;
    case 30:
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        break;
    case 99:
        (((struct o14_uchar *)(a4))->v) = 0xA;
        break;
    }
}
