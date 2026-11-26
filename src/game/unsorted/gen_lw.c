/* Straight-line functions with calls and guards (batch gen_lw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058906(int, int, int, int, int, int);
int FUN_0c058968(int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
void FUN_0c111164(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };


/* manual: state machine on a4[20] (0 start, 1 and 21/31 ramps with the shared tail, 20/30 advance, 40/50 flags, 99 tail call); the two ramp states are one block (sw = 12 for 21, 0 for 31); 161 cases, 588 of 588 instructions */
void FUN_0c111164(int a4, int a5, int a6, int a7)
{
    int s;
    int t;
    int sw;
    int lo;
    int hi;
    int tail;
    int q;
    int r;

    s = *(signed char *)(a4 + 0x14);
    tail = 0;
    if (s == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, 0xE, (*(int *)0xC4B410C));
        FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x1, 0xE, (*(int *)0xC4B410C));
        FUN_0c037498(((((struct oCC_int *)(a4))->v)), 0x2, 0xE, (*(int *)0xC4B410C));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)(0xC2912C8); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x40) = *(struct mv3 *)(0xC2912E0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x34) = *(struct mv3 *)(0xC2912F8); }
        return;
    }
    if (s == 1) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x78)) = *(struct mv3 *)(0xC291314); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oCC_int *)(a4))->v)) + 0x78)) = *(struct mv3 *)(0xC291320); }
        tail = 1;
    } else if (s == 20 || s == 30) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0x0;
        s = s + 1;
    } else if (s == 22) {
        return;
    } else if (s == 40) {
        (((struct o14_uchar *)(a4))->v) = 0x1;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        return;
    } else if (s == 50) {
        (((struct o14_uchar *)(a4))->v) = 0x1;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        return;
    } else if (s == 99) {
        FUN_0c03f346(a4, a5, a6, a7);
        return;
    }
    if (s == 21 || s == 31) {
        sw = 0;
        lo = 20;
        hi = 40;
        if (s == 21) {
            sw = 12;
            lo = 0;
            hi = 20;
        }
        t = (((struct o1C_short *)(a4))->v);
        if (t >= lo && t <= hi) {
            FUN_0c0588bc((a4 + 0x28), 0xC2912C8 + sw, 0xC2912D4 - sw, ((((struct o1C_short *)(a4))->v)), hi, lo);
            FUN_0c058906((a4 + 0x34), 0xC2912F8 + sw, 0xC291304 - sw, ((((struct o1C_short *)(a4))->v)), hi, lo);
        }
        t = (((struct o1C_short *)(a4))->v);
        lo = 0;
        hi = 25;
        if (sw) {
            lo = 15;
            hi = 40;
        }
        if (t >= lo && t <= hi) {
            FUN_0c0588bc((a4 + 0x40), 0xC2912E0 + sw, 0xC2912EC - sw, ((((struct o1C_short *)(a4))->v)), hi, lo);
            t = (((struct o1C_short *)(a4))->v);
            if (t >= lo && t <= hi) {
                FUN_0c058968((((((struct oC8_int *)(a4))->v)) + 0x78), 0xC291314 + sw * 2, 0xC29132C - sw * 2, ((((struct o1C_short *)(a4))->v)), hi, lo);
                FUN_0c058968((((((struct oCC_int *)(a4))->v)) + 0x78), 0xC291320 + sw * 2, 0xC291338 - sw * 2, ((((struct o1C_short *)(a4))->v)), hi, lo);
                tail = 1;
            }
        }
    }
    if (tail) {
        q = *(int *)(a4 + 0xCC);
        r = *(int *)(a4 + 0xC8);
        (((struct o78_uint *)(q))->v) = (((((struct o78_int *)(q))->v)) + ((((struct o78_int *)(r))->v)));
        q = *(int *)(a4 + 0xCC);
        (((struct o7C_uint *)(q))->v) = (((((struct o7C_int *)(q))->v)) + ((((struct o7C_int *)(r))->v)));
        q = *(int *)(a4 + 0xCC);
        (((struct o80_uint *)(q))->v) = (((((struct o80_int *)(q))->v)) + ((((struct o80_int *)(r))->v)));
        (((struct o6C_float *)((*(int *)(a4 + 0xCC))))->v) = (-((*(float *)0xC291310) * (math_cos_angle16(((((struct o80_int *)((*(int *)(a4 + 0xC8))))->v))))));
        (((struct o70_float *)((*(int *)(a4 + 0xCC))))->v) = (-((*(float *)0xC291310) * (math_sin_angle16(((((struct o80_int *)((*(int *)(a4 + 0xC8))))->v))))));
    }
    if (s == 21) {
        t = (((struct o1C_short *)(a4))->v);
        if (t >= 0x28) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        } else {
            (((struct o1C_ushort *)(a4))->v) = (t + 0x1);
        }
    } else if (s == 31) {
        t = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t + 0x1);
        if ((int)(short)(t + 0x1) > (int)0x28) {
            (((struct o14_uchar *)(a4))->v) = 0x1;
        }
    }
}
