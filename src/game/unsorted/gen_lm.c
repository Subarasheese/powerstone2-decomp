/* Straight-line functions with calls and guards (batch gen_lm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int nlRand(void);
int FUN_0c16638c(int a4, int a5, int a6, int a7);

struct mv4 { int w[4]; };
#define P(o) (*(int *)(a4 + (o)))
#define T (*(short *)(a4 + 28))

/* manual: object state 0 sets up two models (ids by kind) with a random angle, states 0/1 run its keyframes from the table
   at 0C2A3364, other states hand to FUN_0c03f346; 315 cases, 451 of 451 instructions */
int FUN_0c16638c(int a4, int a5, int a6, int a7)
{
    int *t = (int *)0xC2A3364;
    int i;
    int k;
    int p;

    switch (*(signed char *)(a4 + 20)) {
    case 0:
        *(unsigned char *)(a4 + 20) += 1;
        *(unsigned char *)(a4 + 168) = 1;
        *(short *)(a4 + 172) = 15;
        *(unsigned char *)(a4 + 169) = 33;
        k = *(signed char *)(a4 + 2);
        if ((unsigned int)k <= 4) {
            i = 3;
            p = 2;
            if (k == 4) {
                i = 7;
                p = 8;
            }
            FUN_0c03744a(P(196), i, 52, *(int *)0xC4B40CC);
            FUN_0c03744a(P(200), p, 52, *(int *)0xC4B40CC);
            for (i = 196; i <= 200; i += 4) {
                *(unsigned char *)P(i) = 1;
                *(unsigned short *)(P(i) + 6) = 543;
                if (i == 196) {
                    p = P(196);
                    /* the original keeps p + 128 pushed across nlRand */
                    *(int *)(p + 128) = (int)((float)(((((int (*)(int, ...))nlRand)(p + 128) % 4) * 22) / 4) * 65536.0f / 360.0f + 0.5f) & 0xFFFF;
                }
                *(struct mv4 *)(P(i) + 20) = *(struct mv4 *)0xC2A337C;
            }
        }
    case 1:
        break;
    default:
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    if (T <= t[0])
        FUN_0c0588bc(P(200) + 132, 0xC2A33E4, 0xC2A33D8, T, t[0], 0);
    for (i = 0; i < 2; i++) {
        if (T >= t[2 + i * 2] && T <= t[3 + i * 2])
            FUN_0c0588bc(P(196) + 132, 0xC2A33B4 + i * 24, 0xC2A33A8 + i * 24, T, t[3 + i * 2], t[2 + i * 2]);
    }
    if (T >= t[1] && T <= t[0]) {
        for (i = 196; i <= 200; i += 4)
            FUN_0c058a6e(P(i) + 20, 0xC2A338C, 0xC2A337C, T, t[0], t[1]);
    }
    k = T + 1;
    T = k;
    k = (short)k;
    if (k > t[0]) {
        *(unsigned char *)(a4 + 20) = 3;
        k = 20;
    }
    return k;
}
