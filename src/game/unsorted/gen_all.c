/* Straight-line functions with calls and guards (batch gen_all): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0ec6ac(int);
int FUN_0c0ec6ce(int);
int FUN_0c0ec6ec(int);
int FUN_0c0ec722(int);
int FUN_0c0ec848(int);
int FUN_0c0eca3c(int);
int FUN_0c0ecb48(int a4, int a5, int a6, int a7, float f4);

/* manual: three-float fade by mode, one loop over the fields with an up/down bit per field; 177 cases, 368 of 368 instructions */
int FUN_0c0ecb48(int a4, int a5, int a6, int a7, float f4)
{
    int s, mode, up, i;
    float *v;

    if (*(signed char *)0x0C54098D >= 14) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    s = *(signed char *)(a4 + 0x14);
    if (s != 0) {
        if (s != 1) {
            return s;
        }
    } else {
        *(char *)(a4 + 0x14) = *(signed char *)(a4 + 0x14) + 1;
        *(char *)(a4 + 0xA8) = 1;
        if (*(signed char *)(a4 + 0x1B) >= 0) {
            *(int *)(a4 + 0xA4) = ((int *)0x0C540D94)[*(signed char *)(a4 + 0x1B)] + 100;
            *(int *)(a4 + 0x10) = ((int *)0x0C540D94)[*(signed char *)(a4 + 0x1B)];
        }
        *(short *)(a4 + 0x128) = 0x40;
        *(short *)(a4 + 0x12C) = -1;
        *(short *)(*(int *)(a4 + 0xF4) + 6) |= 0x200;
        *(float *)(*(int *)(a4 + 0xF4) + 0x18) = 0.0f;
        *(float *)(*(int *)(a4 + 0xF4) + 0x1C) = 1.0f;
        *(float *)(*(int *)(a4 + 0xF4) + 0x20) = 0.0f;
    }
    mode = *(signed char *)(a4 + 0x15);
    if (mode == 1) {
        up = 1;
    } else if (mode == 2) {
        up = 3;
    } else {
        FUN_0c0ec722(a4);
        switch (*(signed char *)(*(int *)(a4 + 0x10) + 0x15)) {
        case 5:
            *(char *)(a4 + 0x15) = 1;
            goto clear;
        case 99:
            *(char *)(a4 + 0x15) = 2;
        clear:
            *(char *)(a4 + 0x16) = 0;
            goto done;
        case 7:
        case 8:
        case 9:
            up = 1;
            break;
        default:
            up = 2;
            break;
        }
    }
    /* bit n of up: field n rises to 1, else it falls to 0 */
    for (i = 0x18; i <= 0x20; i += 4, up >>= 1) {
        v = (float *)(*(int *)(a4 + 0xF4) + i);
        if (up & 1) {
            if (1.0f > *v) {
                *(float *)(*(int *)(a4 + 0xF4) + i) += 0.05f;
            }
        } else if (*v > 0.0f) {
            *(float *)(*(int *)(a4 + 0xF4) + i) -= 0.05f;
        }
    }
    if (mode == 1) {
        FUN_0c0ec848(a4);
    } else if (mode == 2) {
        FUN_0c0eca3c(a4);
    }
done:
    FUN_0c0ec6ac(a4);
    FUN_0c0ec6ce(a4);
    return FUN_0c0ec6ec(a4);
}
