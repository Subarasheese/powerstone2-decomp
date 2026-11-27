/* Straight-line functions with calls and guards (batch gen_kz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c10b0a0(int, int);
int FUN_0c10b182(int, int);
int FUN_0c1171f0(int);
int nlAddVector3op(int, int, int);
int FUN_0c10b270(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


/* manual: state machine on byte a4[20]: 0 init (then the common step), 1 the common step, 2 cost + two calls, 10 and 11 the common step with the
   tail of the second copy (the original wrote the common step out twice), 99 sets state 10; hand cases (state, a4[2], a1E, slot index), 483 of 483 instructions */
int FUN_0c10b270(int a4)
{
    int t0;
    int t1;
    int s;
    int late;
    int d;

    s = *(signed char *)(a4 + 0x14);
    if (s != 0) {
        if (s == 1) {
            late = 0;
        } else if (s == 2) {
            late = 2;
        } else if (s == 10) {
            *(unsigned char *)(a4 + 0x14) = s + 1;
            *(float *)(*(int *)(a4 + 0xC4) + 0x90) = 25.0f;
            *(unsigned short *)(a4 + 0x1E) = 0;
            late = 1;
        } else if (s == 11) {
            late = 1;
        } else {
            t0 = s;
            if (s == 99) {
                *(unsigned char *)(a4 + 0x14) = 0xA;
                t0 = 0x14;
            }
            return t0;
        }
    } else {
        *(unsigned char *)(a4 + 0x14) = s + 1;
        *(unsigned char *)(a4 + 0xA8) = 0x1;
        *(unsigned short *)(a4 + 0xAC) = 0x1F;
        *(unsigned char *)(a4 + 0xA9) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(*(int *)(a4 + 0xC4), 0xE, 0xD, *(int *)0xC4B410C);
        FUN_0c03744a(*(int *)(a4 + 0xC8), 0xA, 0x2, *(int *)0xC4B410C);
        FUN_0c03744a(*(int *)(a4 + 0xEC), 0xB, 0x2, *(int *)0xC4B410C);
        *(unsigned char *)(*(int *)(a4 + 0xEC)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(*(int *)(a4 + 0xEC) + 0x6C) = *(struct mv3 *)(0xC290C58); }
        FUN_0c03744a(*(int *)(a4 + 0xF0), 0xB, 0x2, *(int *)0xC4B410C);
        *(unsigned char *)(*(int *)(a4 + 0xF0)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(*(int *)(a4 + 0xF0) + 0x6C) = *(struct mv3 *)(0xC290C64); }
        FUN_0c03744a(*(int *)(a4 + 0x100), 0x7, 0x4, *(int *)0xC4B410C);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(*(int *)(a4 + 0x100) + 0x6C) = *(struct mv3 *)(0xC290C40); }
        t0 = *(int *)(a4 + 0xC4);
        *(float *)(t0 + 0x6C) = *(float *)(t0 + 0x6C) + 400.0f;
        *(float *)(t0 + 0x90) = -25.0f;
        late = 0;
    }
    if (late != 2) {
        t0 = *(int *)(a4 + 0xC4);
        *(float *)(t0 + 0x6C) = *(float *)(t0 + 0x6C) + *(float *)(t0 + 0x90);
        nlAddVector3op(*(int *)(a4 + 0xC8) + 0x6C, 0xC290C4C, *(int *)(a4 + 0xC4) + 0x6C);
        nlAddVector3op(*(int *)(a4 + 0xEC) + 0x6C, 0xC290C58, *(int *)(a4 + 0xC4) + 0x6C);
        nlAddVector3op(*(int *)(a4 + 0xF0) + 0x6C, 0xC290C64, *(int *)(a4 + 0xC4) + 0x6C);
        nlAddVector3op(*(int *)(a4 + 0x100) + 0x6C, 0xC290C40, *(int *)(a4 + 0xC4) + 0x6C);
    }
    if (*(signed char *)(a4 + 0x2) == 0) {
        t0 = *(short *)(a4 + 0x1C);
        t1 = *(int *)(((*(int *)(0xC474410 + (*(int *)0xC474404 << 2))) << 3) + 0xC29D7D0 + 0x4);
    } else {
        t0 = *(short *)(a4 + 0x1C);
        t1 = *(int *)(((*(int *)(0xC474410 + (*(int *)0xC474404 << 2))) << 3) + 0xC29D7D0);
    }
    FUN_0c10b0a0(a4, t0 * t1);
    if (late == 2) {
        return FUN_0c10b182(a4, *(short *)(a4 + 0x1C));
    }
    t0 = 0x8;
    t1 = 0xC290BC8;
    for (;;) {
        nlAddVector3op(*(int *)(t0 + (0xC4 + a4)) + 0x6C, t1, *(int *)(a4 + 0xC4) + 0x6C);
        t1 = t1 + 0xC;
        t0 = t0 + 0x4;
        if ((unsigned int)t1 >= (unsigned int)0xC290C28) {
            break;
        }
    }
    FUN_0c10b182(a4, *(short *)(a4 + 0x1C));
    t0 = 0x30;
    t1 = 0xC290C28;
    for (;;) {
        nlAddVector3op(*(int *)(t0 + (0xC4 + a4)) + 0x6C, t1, *(int *)(a4 + 0xC4) + 0x6C);
        t1 = t1 + 0xC;
        t0 = t0 + 0x4;
        if ((unsigned int)t1 >= (unsigned int)0xC290C40) {
            break;
        }
    }
    d = *(short *)(a4 + 0x1E);
    *(unsigned short *)(a4 + 0x1E) = d + 1;
    t1 = (short)(d + 1);
    if (t1 >= 0x10) {
        if (late != 0) {
            return FUN_0c03f346(a4);
        }
        *(unsigned char *)(a4 + 0x14) = *(signed char *)(a4 + 0x14) + 1;
        *(unsigned short *)(a4 + 0x1E) = 0x0;
        t1 = 0x0;
    }
    return t1;
}
