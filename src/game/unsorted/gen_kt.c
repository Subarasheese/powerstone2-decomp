/* Straight-line functions with calls and guards (batch gen_kt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o41C_short { char p[0x41C]; short v; };
struct o41C_ushort { char p[0x41C]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
extern int FUN_0c03f346();
int FUN_0c0cff28(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d4010(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0d1ec4(int a4, int a5, int a6, int a7);

/* manual: task: init (state byte +0x14 = 0) falls into the run state (1): wait/countdown, or a four-phase slide of three
   sub-objects; calls FUN_0c03f346 when the owner's state is 2; 1119 cases, 272 of 272 instructions */
int FUN_0c0d1ec4(int a4, int a5, int a6, int a7)
{
    char *p = (char *)a4;
    int s, i, t;

    if (*(signed char *)0xC54223C != 0) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    s = *(signed char *)(p + 0x14);
    switch (s) {
    case 0:
        p[0x14]++;
        p[0x16] = 0;
        p[0x15] = 0;
        p[0xA8] = 1;
        *(int *)(p + 0x10) = 0;
        *(short *)(p + 0x41C) = 0;
        *(short *)(p + 0x1E) = ((int *)0xC1C7AE8)[*(signed char *)(p + 2)];
        if (*(signed char *)(p + 0x1B) >= 0) {
            *(int *)(p + 0xA4) = ((int *)0xC540D94)[*(signed char *)(p + 0x1B)] + 100;
        }
        FUN_0c0d04c4((int)(p + 0xAC), (int)(p + 0x34));
        for (i = 0; i < *(int *)(p + 0xC0); i++) {
            *(short *)(((int *)(p + 0xC4))[i] + 6) = 3;
        }
        a5 = 3;
    case 1:
        switch (*(signed char *)(p + 0x15)) {
        case 0:
            t = *(int *)(p + 0x10);
            if (t != 0 && *(short *)(t + 0x24) == *(short *)(p + 0x41C)) {
                break;
            }
            if (--*(short *)(p + 0x1E) <= 0) {
                FUN_0c0cff28(a4, 1);
                p[0x16] = 0;
            }
            break;
        case 1:
            switch (*(signed char *)(p + 0x16)) {
            case 0:
                p[0x16]++;
                *(short *)(p + 0x1E) = 15;
                *(int *)(p + 0x10) = 0;
                *(short *)(p + 0x41C) = 0;
                FUN_0c0d4010(a4);
                thunk_FUN_0c05abb2(0x49, (int)(p + 0x28));
            case 1:
                *(float *)(*(int *)(p + 0xC8) + 0x6C) -= 2.0f;
                *(float *)(*(int *)(p + 0xCC) + 0x6C) += 2.0f;
                if (--*(short *)(p + 0x1E) <= 0) {
                    p[0x16]++;
                    *(short *)(p + 0x1E) = 30;
                }
                break;
            case 2:
                *(int *)(*(int *)(p + 0xC4) + 0x78) += 0x444;
                a5 = (int)(p + 0xC4);
                *(int *)(((int *)a5)[1] + 0x78) = -*(int *)(((int *)a5)[0] + 0x78);
                *(int *)(((int *)a5)[2] + 0x78) = *(int *)(((int *)a5)[1] + 0x78);
                if (--*(short *)(p + 0x1E) <= 0) {
                    p[0x16]++;
                    *(short *)(p + 0x1E) = 15;
                    for (i = 0; i < 3; i++) {
                        *(int *)(((int *)(p + 0xC4))[i] + 0x78) = 0;
                    }
                }
                break;
            case 3:
                *(float *)(*(int *)(p + 0xC8) + 0x6C) += 2.0f;
                *(float *)(*(int *)(p + 0xCC) + 0x6C) -= 2.0f;
                if (--*(short *)(p + 0x1E) <= 0) {
                    FUN_0c0cff28(a4, 0);
                    p[0x16] = 0;
                    *(short *)(p + 0x1E) = 300;
                    if (*(int *)(p + 0x10) != 0) {
                        *(short *)(p + 0x41C) = *(short *)(*(int *)(p + 0x10) + 0x24);
                    }
                }
                break;
            }
            break;
        }
        s = *(signed char *)(((int *)0xC540D94)[*(signed char *)(p + 0x1B)] + 0x14);
        if (s == 2) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
    }
    return s;
}
