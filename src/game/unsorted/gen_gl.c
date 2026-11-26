/* Straight-line functions with calls and guards (batch gen_gl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c12f292(int);
int FUN_0c12f2c6(int);
int FUN_0c12ed48(int a4, int a5, int a6, int a7);
struct o10_int { char p[0x10]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };


/* manual: the state machine on byte a4[20] (states 0-8; 9 and up, and -1, tail-call FUN_0c03f346): the nine states' counting ramps written once (one shared tail: obj float(s) = counter / k, state 10 when it is spent, counter - 1) and the two equal shake states 2/3 as one (flags +0x200 / +0x400); 421 cases (381 hand), 651 of 651 instructions */
int FUN_0c12ed48(int a4, int a5, int a6, int a7)
{
    int obj;
    int s;
    int p;
    int c;
    int tri;
    float k;
    float x;
    float u;

    obj = *(int *)(a4 + 0xC4);
    s = *(signed char *)(*(int *)(a4 + 0x10) + 0x3715);
    if ((s != 26) && ((s != 33) && (s != 20))) {
        *(signed char *)(a4 + 0x14) = -1;
    }
    s = *(signed char *)(a4 + 0x14);
    if ((unsigned int)s > 8) {
        return FUN_0c03f346(a4, 3, a6, a7);
    }
    p = *(signed char *)(a4 + 0x15);
    tri = 1;
    k = 60.0f;
    switch (s) {
    case 0:
        if (p == 0) {
            FUN_0c12f292(a4);
            *(int *)(a4 + 0x38) += 0x800;
            goto wrap;
        }
        if (p != 1) {
            return p;
        }
        *(int *)(a4 + 0x38) += 0x800;
        k = 30.0f;
        goto ramp;
    case 1:
        if (p != 0) {
            return p;
        }
        *(int *)(a4 + 0x38) += 0x4000;
        *(float *)(a4 + 0x40) += 0.02f;
        *(float *)(a4 + 0x48) += 0.02f;
        k = 20.0f;
        goto ramp;
    case 2:
    case 3:
        *(int *)(a4 + 0x38) += (s - 1) << 9;
        if (p == 0) {
            *(short *)(a4 + 0x1E) = 2;
            *(signed char *)(a4 + 0x15) = *(signed char *)(a4 + 0x15) + 1;
            p = 1;
        }
        if (p == 4) {
            *(float *)(a4 + 0x40) += 0.02f;
            *(float *)(a4 + 0x48) += 0.02f;
            goto ramp;
        }
        if ((p < 1) || (p > 3)) {
            return p;
        }
        if (p != 2) {
            u = (p == 1) ? 0.5f : -0.5f;
            *(float *)(a4 + 0x40) += u;
            *(float *)(a4 + 0x48) += u;
        }
        c = *(short *)(a4 + 0x1E) - 1;
        *(short *)(a4 + 0x1E) = c;
        if ((short)c != 0) {
            return (short)c;
        }
        *(short *)(a4 + 0x1E) = (p == 2) ? 3 : 2;
        *(signed char *)(a4 + 0x15) = *(signed char *)(a4 + 0x15) + 1;
        return 0x15;
    case 4:
        if (p == 0) {
            *(int *)(a4 + 0x38) += 0x200;
            *(float *)(a4 + 0x40) -= 0.01f;
            *(float *)(a4 + 0x48) -= 0.01f;
            goto wrap;
        }
        if (p != 1) {
            return p;
        }
        *(int *)(a4 + 0x38) += 0x400;
        *(float *)(a4 + 0x40) -= 0.02f;
        *(float *)(a4 + 0x48) -= 0.02f;
        k = 30.0f;
        tri = 0;
        goto ramp;
    case 5:
        if (p != 0) {
            return p;
        }
        *(int *)(a4 + 0x38) += 0x400;
        *(float *)(a4 + 0x40) += 0.03f;
        *(float *)(a4 + 0x48) += 0.03f;
        *(float *)(a4 + 0x44) -= 0.01f;
        tri = 0;
        goto ramp;
    case 6:
        if (p != 0) {
            return p;
        }
        *(float *)(a4 + 0x40) -= 0.01f;
        *(float *)(a4 + 0x48) -= 0.01f;
        *(float *)(a4 + 0x44) += 0.01f;
        tri = 0;
        goto ramp;
    case 7:
        if (p != 0) {
            return p;
        }
        u = *(float *)0xC12F2EC;
        *(float *)(a4 + 0x4C) += u;
        *(float *)(a4 + 0x50) += u;
        *(float *)(a4 + 0x54) += u;
        *(float *)(a4 + 0x40) += *(float *)(a4 + 0x4C);
        *(float *)(a4 + 0x44) += *(float *)(a4 + 0x50);
        *(float *)(a4 + 0x48) += *(float *)(a4 + 0x54);
        goto ramp;
    default:
        if (p != 0) {
            return p;
        }
        FUN_0c12f2c6(a4);
        u = *(float *)0xC12F2F0;
        *(float *)(a4 + 0x40) -= u;
        *(float *)(a4 + 0x44) += 0.02f;
        *(float *)(a4 + 0x48) -= u;
        k = 20.0f;
        goto ramp;
    }
wrap:
    c = *(short *)(a4 + 0x1C) - 1;
    *(short *)(a4 + 0x1C) = c;
    if ((short)c != 0) {
        return (short)c;
    }
    *(short *)(a4 + 0x1C) = 30;
    *(signed char *)(a4 + 0x15) = *(signed char *)(a4 + 0x15) + 1;
    return (s == 0) ? 0x15 : 30;
ramp:
    x = (float)*(short *)(a4 + 0x1C) / k;
    if (tri) {
        *(float *)(obj + 0x18) = x;
        *(float *)(obj + 0x1C) = x;
        *(float *)(obj + 0x20) = x;
    } else {
        *(float *)(obj + 0x14) = x;
    }
    if (!(x > 0.0f)) {
        *(signed char *)(a4 + 0x14) = 10;
    }
    c = *(short *)(a4 + 0x1C);
    *(short *)(a4 + 0x1C) = c - 1;
    return c - 1;
}
