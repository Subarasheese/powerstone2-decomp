/* Straight-line functions with calls and guards (batch gen_ko): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c10873c();
int FUN_0c108838();
int FUN_0c1088f2();
int FUN_0c1089c0();
extern int FUN_0c108acc();
int FUN_0c108bf8(int, int, int);
int FUN_0c11e20c(int);
int FUN_0c11e28e(int);
int nlRand(void);
void FUN_0c108d12(int a4, int a5, int a6);

#define G ((int *)0xC473CCC)
#define PAIR(x, y) (((x) == a4 && (y) == a5) || ((x) == a5 && (y) == a4))
#define REC(k) ((signed char *)(0xC2738B8 + ((k) + 1) * 52))
#define LA ((int *)0xC473358)
#define LB ((int *)0xC473058)

/* manual: picks the next character ids for the pair (a4, a5) and the request code a6 into the int block at 0C473CCC;
   818 cases, 1294 of 1398 instructions */
void FUN_0c108d12(int a4, int a5, int a6)
{
    int i, j, k, s, n, v, any;
    int found = -1, sa = 0, sb = 0, mode = -1;
    short *e, *p;

    G[0] = -1;
    G[1] = -1;
    G[2] = -1;
    G[3] = -1;
    G[8] = 1;
    G[13] = 0;
    G[10] = 0;
    G[4] = -1;
    G[6] = 0;
    for (i = 0; i <= 120 && found == -1; i++) {
        for (j = 0; j < 7; j++) {
            e = (short *)(0xC29620E + (i * 7 + j) * 14);
            for (s = 0; s < 2; s++) {
                if (e[s] >= 192 && e[s] <= 194) {
                    for (k = 0; (p = *(short **)(0xC290B8C + (e[s] - 192) * 4))[k] != -1; k++) {
                        if (PAIR(p[k], e[1 - s])) {
                            goto hit;
                        }
                    }
                }
            }
            if (PAIR(e[0], e[1])) {
                goto hit;
            }
        }
        continue;
    hit:
        sa += e[5];
        sb += e[6];
        found = i;
    }

    switch (a6) {
    case 151:
        G[4] = 0;
        G[0] = 182;
        FUN_0c11e20c(G[0]);
        return;
    case 158:
        G[4] = 1;
        if (a4 < 0 || a4 > 120) {
            break;
        }
        n = 0;
        v = 1;
        for (k = 0; k <= 120; k++) {
            if (REC(a4)[16] == REC(k)[16] && REC(k)[3] <= 6) {
                LA[n++] = k;
                if (REC(k)[3] > v) {
                    v = REC(k)[3];
                }
            }
        }
        if (n == 0) {
            break;
        }
        s = 0;
        for (k = 0; k < n; k++) {
            if (REC(LA[k])[3] == v) {
                LB[s++] = LA[k];
            }
        }
        v = -1;
        if (s > 0) {
            k = nlRand() % s;
            v = LB[k];
            if (v == a4) {
                if (++k >= s) {
                    k = 0;
                }
                v = LB[k];
            }
        }
        G[0] = v;
        if (v == 0) {
            break;
        }
        goto set0;
    case 150:
        G[4] = 2;
        G[0] = FUN_0c1089c0(a4, a5, a6, 0, &G[0]);
        if (G[0] == -1) {
            break;
        }
        G[3] = a4;
        G[8] = 2;
        G[12] |= 1;
        FUN_0c11e20c(G[0]);
        return;
    case 154:
        G[4] = 3;
        if (found >= 0 && found <= 120) {
            G[0] = FUN_0c108acc(found);
            G[1] = FUN_0c108acc(found);
            G[2] = FUN_0c108acc(found);
        }
        if (G[0] == -1 || G[1] == -1 || G[2] == -1) {
            break;
        }
        G[8] = 0;
        G[13] = 2;
        G[12] |= 1;
        FUN_0c11e20c(G[0]);
        FUN_0c11e20c(G[1]);
        FUN_0c11e20c(G[2]);
        return;
    case 155:
        G[4] = 4;
        G[0] = FUN_0c1088f2(1, -1, 0, 0, &G[0]);
        if (G[0] == -1) {
            break;
        }
        goto set0;
    case 156:
        G[4] = 5;
        G[0] = FUN_0c108838(1, -1, 0, 0, &G[0]);
        if (G[0] == -1) {
            break;
        }
    set0:
        G[8] = 0;
        G[12] |= 1;
        FUN_0c11e20c(G[0]);
        return;
    case 152:
        G[4] = 6;
        sa += 30;
        break;
    case 153:
        G[4] = 7;
        mode = 2;
        break;
    case 157:
        G[4] = 8;
        G[7] = 1;
        break;
    }

    any = 0;
    for (k = 0; ((int *)0xC2A08E0)[k] != -1; k++) {
        if (((int *)0xC2A08E0)[k] == found) {
            any = 1;
            break;
        }
    }
    if (any && !(G[14 + found] & 0x2000)) {
        G[10] = 1;
        G[0] = 182;
        FUN_0c11e20c(G[0]);
        goto tail;
    }
    any = 0;
    if (G[7] == 2) {
        G[7] = 0;
        if (sa < 99) {
            sa = 99;
        }
    }
    if (found == -1) {
        if (G[7]) {
            return;
        }
        G[0] = 182;
        FUN_0c11e20c(G[0]);
        goto tail;
    }
    if ((nlRand() % 101 > sa && !*(signed char *)0xC472BA8) || *(signed char *)0xC472BAA == 1) {
        if (!G[7]) {
            G[0] = 182;
            FUN_0c11e20c(182);
        }
        goto tail;
    }
    if (nlRand() % 101 > sb && !*(signed char *)0xC472BA9) {
        G[8] = 0;
        G[12] |= 1;
        G[7] = 0;
        G[0] = found;
        FUN_0c11e20c(found);
        goto tail;
    }
    v = FUN_0c108bf8(found, j, 0);
    G[6] = v;
    n = 0;
    switch (v) {
    case 1:
    case 2:
    case 4:
        n = v == 4 ? 3 : v;
        G[3] = found;
        for (k = 0; k < n; k++) {
            G[k] = FUN_0c10873c(found, n - 1, 0, 0, &G[k]);
        }
        break;
    case 8:
        n = 1;
        G[3] = found;
        G[0] = FUN_0c108838(0, found);
        break;
    case 16:
        n = 1;
        G[3] = found;
        G[0] = FUN_0c1088f2(0, found);
        break;
    case 0x800:
        G[2] = found;
    case 0x400:
        n = v >> 10;
        G[3] = found;
        G[0] = found;
        G[1] = found;
        n++;
        break;
    }
    if (n) {
        for (k = 0; k < n; k++) {
            if (G[k] == -1) {
                goto chk;
            }
        }
        G[8] = 2;
        G[12] |= 1;
        if (n > 1) {
            G[13] = n - 1;
        }
        G[7] = 0;
        for (k = 0; k < n; k++) {
            FUN_0c11e20c(G[k]);
        }
    }
chk:
    if (G[8] == 1) {
        if (G[7]) {
            return;
        }
        G[0] = 182;
        FUN_0c11e20c(182);
        return;
    }

tail:
    if (mode != 2) {
        return;
    }
    s = G[13];
    if (s == 0) {
        s = nlRand() % 2 ? 2 : 1;
        G[13] = s;
    } else if (s == 1 || s == 2) {
        v = G[6];
        if (any ? v != 0 : (v == 0x400 || v == 0x800)) {
            G[8] = 0;
        }
        FUN_0c11e28e(G[1]);
        if (s == 2) {
            FUN_0c11e28e(G[2]);
        }
    } else {
        return;
    }
    G[1] = G[0];
    if (s == 2) {
        G[2] = G[0];
    }
    FUN_0c11e20c(G[1]);
    if (s == 2) {
        FUN_0c11e20c(G[2]);
    }
}
#undef G
#undef PAIR
#undef REC
#undef LA
#undef LB
