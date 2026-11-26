/* Straight-line functions with calls and guards (batch gen_me): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct v3 { float x, y, z; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c15a5aa(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int FUN_0c15a8bc(int a4, int a5, int a6, int a7);

/* manual: state byte +0x14: 0 or 1 spawn with a random offset (state 0 once, then in both at the end of each period), count frame +0x1C up to
   the end; others tail call; 90 cases, 347 of 347 instructions */
int FUN_0c15a8bc(int a4, int a5, int a6, int a7)
{
    int ang[3];
    struct v3 pos, zero, tmp;
    float v, s;
    int i, j, t;

    i = *(signed char *)(a4 + 0x14);
    if (i != 0 && i != 1)
        return FUN_0c03f346(a4, a5, a6, a7);
    if (i == 0)
        (*(unsigned char *)(a4 + 0x14))++;
    for (; i < 2; i++) {
        if (i == 0 || *(short *)(a4 + 0x1C) % *(int *)0xC2A2AD0 == *(int *)0xC2A2AD0 - 1) {
            for (j = 0; j < 3; j++)
                ang[j] = (nlRand() % 16) << 12;
            v = *(float *)0xC2A2AF8;
            t = nlRand() % *(int *)0xC2A2AD4;
            v = v * (float)t / (float)*(int *)0xC2A2AD4;
            s = math_cos_angle16(ang[0]);
            pos.x = *(float *)(a4 + 0x28) + v * s;
            s = math_sin_angle16(ang[1]);
            pos.y = *(float *)(a4 + 0x2C) + v * s;
            s = math_sin_angle16(ang[2]);
            v = *(float *)0xC2A2AF8;
            t = nlRand() % *(int *)0xC2A2AD4;
            v = v * (float)t / (float)*(int *)0xC2A2AD4;
            pos.z = *(float *)(a4 + 0x30) + v * s;
            zero.x = zero.y = zero.z = 0.0f;
            tmp = zero;
            FUN_0c15a5aa((int)&pos, (int)&zero, (int)&tmp);
        }
    }
    t = *(int *)0xC2A2ACC;
    i = *(short *)(a4 + 0x1C);
    if (i == t) {
        (*(unsigned char *)(a4 + 0x14))++;
        return 0x14;
    }
    *(short *)(a4 + 0x1C) = i + 1;
    return i + 1;
}
