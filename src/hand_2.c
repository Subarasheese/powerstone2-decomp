/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C, slice 2. */
typedef struct { float x, y, z; } V3;

int FUN_0c039010(int);
int buDefragDisk(int, int);
float FUN_0c058328(int, int);
int FUN_0c05aeac(void);
int FUN_0c05b00c(void);
int FUN_0c05af8a(void);
int FUN_0c05af44(void);
int FUN_0c05a7f8(void);
unsigned char FUN_0c037bf6(int);
int FUN_0c085d0c(int);

struct ent_flags { char p[1]; char a1; char a2; char a3; char a4; char pad[4]; signed char b9; };

V3 *mdl_vtx_get_pos(V3 *dst)
{
    *dst = **(V3 **)0x0C3BD860;
    return 0;
}

void res_cockpit_faces_release_all(void)
{
    int i;
    for (i = 0; i < 4; i++)
        FUN_0c039010(i);
}

int FUN_0c0613c4(unsigned short *src)
{
    short *dst = (short *)0x0C3C7E10;
    short n = *src++ & 0xFFF;
    unsigned short cnt = n;
    int i;
    for (i = 0; i < (int)cnt; i++)
        *dst++ = *src++;
    return cnt;
}

int vmu_defrag_disk(int a)
{
    return buDefragDisk(a, 0x0C3CC620);
}

float math_mat_row1_length(int m)
{
    return FUN_0c058328(m, 1);
}

void game_reset_objects(void)
{
    FUN_0c05aeac();
    FUN_0c05b00c();
    FUN_0c05af8a();
    FUN_0c05af44();
    FUN_0c05a7f8();
}

void FUN_0c0d6212(struct ent_flags *e)
{
    int v;
    if ((*(signed char *)0x0C542257 & (e->b9 + 1)) != 0)
        return;
    if (*(unsigned char *)0x0C541F40 >= 7)
        v = 4;
    else if (*(signed char *)0x0C541F67 != 0)
        v = 3;
    else
        v = 4;
    e->a1 = v;
    e->a2 = 0;
    e->a3 = 0;
    e->a4 = 0;
}

int pl_falcon_special2_phase4(int a)
{
    if (FUN_0c037bf6(a) == 0)
        return 0;
    return FUN_0c085d0c(a);
}

/* ---- batch 2 ---- */
typedef struct { int a, b; } B8;
typedef struct { int a, b, c; } B12;
typedef struct { int w[4]; } B16;

int FUN_0c0a3058(int, int, int, int);
int FUN_0c03744a(int, int, int, int);

void FUN_0c0641ca(int a, int b)
{
    int *q;
    *(B8 *)0x0C471A5C = *(B8 *)(0x0C1C48D8 + a * 24 + b * 8);
    q = (int *)0x0C4F90AC; q[3] = 0; q[2] = 0; q[1] = 0; q[0] = 0;
    q = (int *)0x0C4FDBCC; q[3] = 0; q[2] = 0; q[1] = 0; q[0] = 0;
    q = (int *)0x0C4FB63C; q[3] = 0; q[2] = 0; q[1] = 0; q[0] = 0;
}

void FUN_0c0a362c(char *o)
{
    char *p;
    p = *(char **)(o + 0x100);
    *(short *)(p + 6) = 31;
    *(B12 *)(*(char **)(o + 0x100) + 0x84) = *(B12 *)0x0C25D244;
    p = *(char **)(o + 0x10C);
    *(short *)(p + 6) = 31;
    *(B12 *)(*(char **)(o + 0x10C) + 0x84) = *(B12 *)0x0C25D244;
    FUN_0c0a3058((int)o, o[1], 1, 11);
    p = *(char **)(o + 0x118);
    *(float *)(p + 0x98) = 5.0f;
    *(float *)(p + 0x94) = 5.0f;
    p = *(char **)(o + 0x11C);
    *(float *)(p + 0x98) = 5.0f;
    *(float *)(p + 0x94) = 5.0f;
}

void FUN_0c0f6090(void)
{
    unsigned int i;
    for (i = 0; i < 48; i += 12)
        *(B12 *)(0x0C540978 + 0x6F0 + i) =
            *(B12 *)(0x0C1CE594 + *(signed char *)(0x0C5421F8 + 68) * 48 + i);
}

void FUN_0c1103e0(char *o, int d)
{
    int q = d / 1;
    char *p;
    FUN_0c03744a(*(int *)(o + 0xC4), q, 5, *(int *)0x0C4B410C);
    p = *(char **)(o + 0xC4);
    *(B12 *)(p + 108) = *(B12 *)0x0C29111C;
    *p = 1;
}

/* ---- batch 3 ---- */
int FUN_0c03f346(int, int);
int FUN_0c179ac0(void);

void FUN_0c0cafc0(char *o)
{
    char *p = (char *)(0x0C532498 + o[1] * 14648);
    *(B12 *)(o + 40) = *(B12 *)(p + 40);
    *(B12 *)(o + 52) = *(B12 *)(p + 52);
    if (p[22] == 0) {
        if (p[0x3715] == 8 &&
            (*(unsigned short *)(p + 0x3818) == 994 || *(unsigned short *)(p + 0x3818) == 995))
            return;
    } else {
        if (p[0x3715] == 8 &&
            (*(unsigned short *)(p + 0x3818) == 997 || *(unsigned short *)(p + 0x3818) == 998))
            return;
    }
    FUN_0c03f346((int)o, (int)p);
}

void FUN_0c054c90(char *o)
{
    *(int *)(o + 28) = **(int **)(o + 0x2C8);
    *(B12 *)(o + 188 + 24) = *(B12 *)(o + 188 + 12);
    *(B12 *)(o + 236 + 24) = *(B12 *)(o + 236 + 12);
    *(int *)(o + 380 + 8) = *(int *)(o + 380 + 4);
    *(B12 *)(o + 284 + 24) = *(B12 *)(o + 284 + 12);
    *(B12 *)(o + 332 + 24) = *(B12 *)(o + 332 + 12);
    *(float *)(o + 396 + 8) = *(float *)(o + 396 + 4);
    *(int *)(o + 412 + 48) = *(int *)(o + 412 + 24);
    *(int *)(o + 412 + 52) = *(int *)(o + 412 + 28);
    *(int *)(o + 412 + 56) = *(int *)(o + 412 + 32);
    *(int *)(o + 412 + 60) = *(int *)(o + 412 + 36);
    *(int *)(o + 412 + 64) = *(int *)(o + 412 + 40);
    *(int *)(o + 412 + 68) = *(int *)(o + 412 + 44);
}

void FUN_0c0f12a0(void)
{
    int order[4];
    int i, n, a, b, t;
    for (i = 0; i < 4; i++)
        order[i] = i;
    for (n = 0; n < 10; n++) {
        a = FUN_0c179ac0() % 4;
        b = FUN_0c179ac0() % 4;
        t = order[a];
        order[a] = order[b];
        order[b] = t;
    }
    for (i = 0; i < 4; i++)
        *(B12 *)(0x0C532498 + order[i] * 14648 + 40) = *(B12 *)(0x0C540978 + 0x6F0 + i * 12);
}

/* ---- batch 4 ---- */
int FUN_0c064f8e(int, int);
int FUN_0c06570c(int, int, int);
int FUN_0c117944(int, int, int, int, int);
int FUN_0c105384(int, int);
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c104de4(int, int);

struct f0659d6_frame { char c; char pad[3]; V3 v; char buf[32]; };

int FUN_0c0659d6(int a4, char c, int mode)
{
    struct f0659d6_frame s;
    int *n;

    s.c = c;
    s.v = *(V3 *)0x0C1C4B90;
    n = *(int **)(a4 + 1028);
    if (FUN_0c064f8e(a4, (int)s.buf) == 0)
        return 0;
    for (; n != 0; n = (int *)n[0]) {
        char *p = (char *)n[1];
        if (p == 0)
            continue;
        if (s.c != p[0])
            continue;
        if (mode == 99) {
            if (s.c != 0)
                return 1;
            return p[1] + 1;
        }
        FUN_0c06570c((int)s.buf, n[2], (int)&s.v);
        if (mode == 0) {
            if (s.v.y > 0)
                return 1;
        } else if (mode == 1) {
            if (0 > s.v.y)
                return 1;
        } else if (mode == 2) {
            if (s.v.y == 0)
                return 1;
        }
    }
    return 0;
}

void FUN_0c105752(char *o, int a5, int a6, int a7)
{
    int *st = (int *)0x0C474738;
    int *tbl = (int *)0x0C290A48;
    int done = 0;
    switch (o[21]) {
    case 0:
        o[21] = o[21] + 1;
        FUN_0c117944((int)o, a5, a6, a7, tbl[*st]);
        return;
    case 1:
        *st = FUN_0c105384(*st, 5);
        if (FUN_0c104cc8(0x3000) != 0)
            FUN_0c117944((int)o, a5, a6, a7, tbl[*st]);
        if (FUN_0c104d70() != 0) {
            done = 1;
        } else {
            if (FUN_0c104de4(*st, 5) == 0)
                return;
            if (*st == 5) {
                done = 1;
            } else {
                *st = 5;
                FUN_0c117944((int)o, a5, a6, a7, tbl[5]);
                return;
            }
        }
        if (done) {
            /* the original jumps to the unlisted stub at 0C1055F6 (state 4, counter 0) */
            ((void (*)(char *))0x0C1055F6)(o);
        }
        return;
    default:
        return;
    }
}

/* ---- batch 5 ---- */
typedef struct { int w; } Stk1;
short FUN_0c01cd2c(int);
char FUN_0c01fbe0(void);
int FUN_0c01fc62(void);
int FUN_0c01cda2(int, int, int, Stk1);

void FUN_0c01fac2(void)
{
    char *a = (char *)0x0C309858;
    char *sel = (char *)0x0C3052C4;
    char *c = (char *)0x0C3054C4;
    Stk1 s;

    if (FUN_0c01cd2c(256) != 0) {
        int skip = 0;
        if (*sel == 0) {
            *c = 0;
            if (FUN_0c01fbe0() == 0) {
                *a = 0;
                skip = 1;
            }
        } else {
            *c = 1;
        }
        if (!skip) {
            *a = 8;
            *(char *)0x0C309859 = 0;
            *(char *)0x0C30985A = 0;
            *(char *)0x0C30985B = 0;
            FUN_0c01fc62();
        }
    } else if (FUN_0c01cd2c(64) != 0) {
        *a = 0;
        *sel = 1;
    } else {
        unsigned short w = *(unsigned short *)(0x0C542854 + 20);
        if (w & 0x2000) {
            (*sel)--;
            if (*sel < 0)
                *sel = 1;
        } else if (w & 0x1000) {
            (*sel)++;
            if (*sel > 1)
                *sel = 0;
        }
    }
    if (*sel == 0) {
        s.w = 0x0C1A88D0;
        FUN_0c01cda2(10, 19, 1, s);
        s.w = 0x0C1A88E4;
        FUN_0c01cda2(10, 20, 0, s);
    } else if (*sel == 1) {
        s.w = 0x0C1A88F8;
        FUN_0c01cda2(10, 19, 0, s);
        s.w = 0x0C1A890C;
        FUN_0c01cda2(10, 20, 1, s);
    }
}

/* ---- batch 6 ---- */
typedef struct { int w[4]; } B16b;
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);

void FUN_0c137ad2(char *o, int a5)
{
    char *p = (char *)(0x0C532498 + o[1] * 14648);
    int *t = (int *)0x0C2A1910;
    char *q;
    int x;

    *(B12 *)(o + 40) = *(B12 *)(p + 40);
    if (p[0x3715] != 26) {
        FUN_0c03f346((int)o, a5);
        return;
    }
    if (o[20] == 0) {
        o[20] = o[20] + 1;
        o[0xA8] = 1;
        *(short *)(o + 0xAC) = 15;
        o[0xA9] = 33;
        FUN_0c03744a(*(int *)(o + 0xC4), 0, 2, ((int *)0x0C4B40FC)[o[1]]);
        q = *(char **)(o + 0xC4);
        *(short *)(q + 6) = 0x21F;
        q = *(char **)(o + 0xC4);
        *(B12 *)(q + 0x84) = *(B12 *)0x0C2A1924;
        q = *(char **)(o + 0xC4);
        *(B16b *)(q + 20) = *(B16b *)0x0C2A1868;
    } else if (o[20] != 1) {
        FUN_0c03f346((int)o, a5);
        return;
    }
    x = *(short *)(o + 28);
    if (x >= t[1] && x <= t[2])
        FUN_0c0588bc(*(int *)(o + 0xC4) + 0x84, 0x0C2A1924 + 12, 0x0C2A1924, x, t[2], t[1]);
    x = *(short *)(o + 28);
    if (x >= t[3] && x <= t[4])
        FUN_0c058a6e(*(int *)(o + 0xC4) + 20, 0x0C2A1858, 0x0C2A1868, x, t[4], t[3]);
    *(int *)(*(int *)(o + 0xC4) + 124) = *(int *)0x0C2A193C;
    *(short *)(o + 28) = *(short *)(o + 28) + 1;
    if (*(short *)(o + 28) > t[0])
        o[20] = o[20] + 1;
}

/* ---- batch 7 ---- */
int FUN_0c05aab6(int, int);

void FUN_0c044e1c(int i)
{
    char *p = (char *)(0x0C532498 + i * 14648);
    char *tab;
    char *q;
    char *g;
    unsigned short w;

    switch (*(char *)0x0C5429B2) {
    case 0: tab = (char *)0x0C2402F4; break;
    case 1: tab = (char *)0x0C240334; break;
    case 2: tab = (char *)0x0C240374; break;
    }
#define PAD (*(unsigned short *)(0x0C542854 + i * 40 + 20))
    if (PAD & 0x2000) { p[2] = tab[p[2] * 4 + 0]; FUN_0c05aab6(i, 1); }
    if (PAD & 0x1000) { p[2] = tab[p[2] * 4 + 1]; FUN_0c05aab6(i, 1); }
    if (PAD & 0x0800) { p[2] = tab[p[2] * 4 + 2]; FUN_0c05aab6(i, 1); }
    if (PAD & 0x0400) { p[2] = tab[p[2] * 4 + 3]; FUN_0c05aab6(i, 1); }
    q = (char *)(0x0C541CDC + i * 152);
    if (*(short *)(q + 96) != 0) {
        *(short *)(q + 98) = *(short *)(q + 98) - 1;
        if (*(short *)(q + 98) == 0) {
            *(short *)(q + 98) = 60;
            *(short *)(q + 96) = *(short *)(q + 96) - 1;
        }
    }
    w = PAD;
    if (!(w & 0x200) && !(w & 0x80) && !(w & 0x100) && *(int *)0x0C40DC60 != 0)
        return;
    q = (char *)(0x0C541CDC + i * 152);
    q[90] = q[90] + 1;
    q[91] = 0;
    g = (char *)0x0C5421F8;
    g[99] = g[98];
    g[98] = g[98] | (1 << i);
    q[73] = p[2];
    FUN_0c05aab6(i, 2);
#undef PAD
}

/* ---- batch 8 ---- */
int math_atan2_angle16(float, float);

void FUN_0c16079c(char *o)
{
    char *t = (char *)0x0C2A2D08;
    V3 v;
    char *p;
    char *q;
    int m, a, b;

    *(B12 *)(o + 40) = *(B12 *)(*(char **)(o + 16) + 40);
    if (*(short *)(*(char **)(o + 16) + 36) != *(short *)(o + 32))
        o[20] = 3;
    if (o[20] == 0) {
        o[20] = o[20] + 1;
        v = *(V3 *)(*(char **)(o + 0xC4) + 108);
        p = (char *)(0x0C532498 + o[1] * 14648);
        a = *(short *)(p + 0x383A);
        b = *(short *)(p + 0x383C);
        m = (a > b) ? a : b;
        if (m > 600) {
            o[2] = 4;
            FUN_0c03744a(*(int *)(o + 0xC4), 11, 52, *(int *)0x0C4B40CC);
        } else if (m > 360) {
            o[2] = 3;
            FUN_0c03744a(*(int *)(o + 0xC4), 10, 52, *(int *)0x0C4B40CC);
        } else if (m > 120) {
            o[2] = 2;
            FUN_0c03744a(*(int *)(o + 0xC4), 10, 52, *(int *)0x0C4B40CC);
        } else if (m > 60) {
            o[2] = 1;
            FUN_0c03744a(*(int *)(o + 0xC4), 9, 52, *(int *)0x0C4B40CC);
        } else {
            o[2] = 0;
            FUN_0c03744a(*(int *)(o + 0xC4), 9, 52, *(int *)0x0C4B40CC);
        }
        *(V3 *)(*(char **)(o + 0xC4) + 108) = v;
        o[0xA8] = 1;
        *(short *)(o + 0xAC) = 63;
        o[0xA9] = 33;
        *(B12 *)(o + 64) = *(B12 *)t;
        **(char **)(o + 0xC4) = 1;
        *(short *)(*(char **)(o + 0xC4) + 6) = 0x21F;
        *(B12 *)(*(char **)(o + 0xC4) + 0x84) = *(B12 *)(t + 24);
        *(B16b *)(*(char **)(o + 0xC4) + 20) = *(B16b *)0x0C2A2CE8;
        q = *(char **)(o + 0xC4);
        *(int *)(q + 128) = (math_atan2_angle16(*(float *)(q + 112), *(float *)(q + 108)) - 16384) & 0xFFFF;
    } else if (o[20] == 1) {
        if (*(short *)(o + 28) <= 20) {
            FUN_0c0588bc((int)(o + 64), (int)(t + 12), (int)t, *(short *)(o + 28), 20, 0);
            if (*(short *)(o + 28) <= 20)
                FUN_0c0588bc(*(int *)(o + 0xC4) + 0x84, (int)(t + 36), (int)(t + 24), *(short *)(o + 28), 20, 0);
        }
        if (*(short *)(o + 28) <= 4)
            FUN_0c058a6e(*(int *)(o + 0xC4) + 20, 0x0C2A2CF8, 0x0C2A2CE8, *(short *)(o + 28), 4, 0);
        *(short *)(o + 28) = *(short *)(o + 28) + 1;
        if (*(short *)(o + 28) > 20)
            o[20] = o[20] + 1;
    } else {
        FUN_0c03f346((int)o, 0);
    }
}

/* ---- batch 9 ---- */
float math_signed_sqrt(float);
int FUN_0c14598e(int, int, int);
int FUN_0c1458e8(int, int, int, int, int, int);
int FUN_0c145932(int, int, int, int, int, int);

void FUN_0c1459b8(char *o)
{
    V3 v;
    float len;
    int a, b, d;

    if (o[20] == 0) {
        o[20] = o[20] + 1;
        FUN_0c03744a(*(int *)(o + 0xC4), 0, 9, *(int *)(0x0C4B40E0 + o[1] * 8));
        o[0xA8] = 1;
        *(short *)(o + 0xAC) = 527;
        o[0xA9] = 33;
        *(B16b *)(o + 176) = *(B16b *)0x0C2A235C;
        **(char **)(o + 0xC4) = 1;
        *(short *)(*(char **)(o + 0xC4) + 6) = 31;
        *(float *)(*(char **)(o + 0xC4) + 116) = 20.5999985f;
    } else if (o[20] != 1) {
        FUN_0c03f346((int)o, 0);
        return;
    }
    v = *(V3 *)0x0C2A2338;
    v.z = 79.4f;
    FUN_0c14598e((int)(o + 40), (int)&v, 0x0C5329B8 + o[1] * 14648);
    v = *(V3 *)0x0C2A2338;
    v.z = 110.0f;
    FUN_0c14598e((int)&v, (int)&v, 0x0C5329B8 + o[1] * 14648);
    v.x = v.x - *(float *)(o + 40);
    v.y = v.y - *(float *)(o + 44);
    v.z = v.z - *(float *)(o + 48);
    if (v.z == 0)
        v.z = 1e-6f;
    a = math_atan2_angle16(v.x, v.z) & 0xFFFF;
    if (a - *(int *)(o + 56) > 0x8000)
        a -= 0x10000;
    if (a - *(int *)(o + 56) < -0x8000)
        a += 0x10000;
    *(int *)(o + 56) = (*(int *)(o + 56) + (a - *(int *)(o + 56))) & 0xFFFF;
    len = math_signed_sqrt(v.z * v.z + v.x * v.x);
    if (len == 0)
        len = 1e-6f;
    b = math_atan2_angle16(-v.y, len) & 0xFFFF;
    if (b - *(int *)(o + 52) > 0x8000)
        b -= 0x10000;
    if (b - *(int *)(o + 52) < -0x8000)
        b += 0x10000;
    *(int *)(o + 52) = (*(int *)(o + 52) + (b - *(int *)(o + 52))) & 0xFFFF;
    d = *(short *)(o + 28);
    if (d >= 0 && d <= 16)
        FUN_0c1458e8(*(int *)(o + 0xC4) + 0x84, 0x0C2A237C + 12, 0x0C2A237C, d, 16, 0);
    d = *(short *)(o + 28);
    if (d >= 10 && d <= 16)
        FUN_0c145932((int)(o + 176), 0x0C2A236C, 0x0C2A235C, d, 16, 10);
    *(short *)(o + 28) = *(short *)(o + 28) + 1;
    if (*(short *)(o + 28) > 16)
        o[20] = o[20] + 1;
}

/* ---- batch 10 ---- */
struct f137414_frame { V3 a, b, c; B16b d; };

void FUN_0c137414(char *o, int a5)
{
    char *p = (char *)(0x0C532498 + o[1] * 14648);
    int *tbl = (int *)0x0C4B40FC;
    char *q;
    struct f137414_frame s;
    int r, step;

    *(B12 *)(o + 40) = *(B12 *)(p + 40);
    *(float *)(o + 44) = *(float *)(o + 44) + 60.0f;
    *(int *)(o + 52) = *(int *)(o + 52) + *(int *)(*(char **)(o + 0xD0) + 120);
    *(int *)(o + 56) = *(int *)(o + 56) + *(int *)(*(char **)(o + 0xD0) + 124);
    *(int *)(o + 60) = *(int *)(o + 60) + *(int *)(*(char **)(o + 0xD0) + 128);
    if (p[0x3715] != 26) {
        FUN_0c03f346((int)o, a5);
        return;
    }
    if (o[20] == 0) {
        o[20] = o[20] + 1;
        FUN_0c03744a(*(int *)(o + 0xC4), 4, 8, tbl[o[1]]);
        FUN_0c03744a(*(int *)(o + 0xC8), 3, 8, tbl[o[1]]);
        FUN_0c03744a(*(int *)(o + 0xCC), 4, 8, tbl[o[1]]);
        o[0xA8] = 1;
        *(short *)(o + 0xAC) = 31;
        *(B12 *)(o + 64) = *(B12 *)0x0C2A1894;
        r = FUN_0c179ac0() % 128;
        *(int *)(o + 56) = *(int *)(o + 56) + ((int)((float)r * 360.0f / 128.0f * 65536.0f / 360.0f + 0.5f) & 0xFFFF);
        **(char **)(o + 0xC8) = 0;
        *(short *)(*(char **)(o + 0xC8) + 6) = 543;
        *(B12 *)(*(char **)(o + 0xC8) + 108) = *(B12 *)(0x0C2A1894 + 36);
        *(B12 *)(*(char **)(o + 0xC8) + 132) = *(B12 *)(0x0C2A1894 + 12);
        *(B16b *)(*(char **)(o + 0xC8) + 20) = *(B16b *)0x0C2A1868;
        *(int *)(*(char **)(o + 0xCC) + 120) = 0x8000;
    } else if (o[20] != 1) {
        FUN_0c03f346((int)o, a5);
        return;
    }
    if (*(short *)(o + 30) > 3 && (*(short *)(o + 28) % *(int *)0x0C2A1880) == 0) {
        **(char **)(o + 0xC4) = 0;
        **(char **)(o + 0xCC) = 0;
    } else if ((*(short *)(o + 28) % *(int *)0x0C2A1880) == 0) {
        q = *(char **)(o + 0xC4);
        s.a = *(V3 *)(q + 108);
        s.b = *(V3 *)(q + 132);
        s.c = *(V3 *)(q + 120);
        s.d = *(B16b *)(q + 20);
        step = *(short *)(o + 30) + 4;
        FUN_0c03744a(*(int *)(o + 0xC4), step, 8, tbl[o[1]]);
        q = *(char **)(o + 0xC4);
        *(V3 *)(q + 108) = s.a;
        *(V3 *)(q + 132) = s.b;
        *(V3 *)(q + 120) = s.c;
        *(B16b *)(q + 20) = s.d;
        q = *(char **)(o + 0xCC);
        s.a = *(V3 *)(q + 108);
        s.b = *(V3 *)(q + 132);
        s.c = *(V3 *)(q + 120);
        s.d = *(B16b *)(q + 20);
        step = *(short *)(o + 30) + 4;
        FUN_0c03744a(*(int *)(o + 0xCC), step, 8, tbl[o[1]]);
        q = *(char **)(o + 0xCC);
        *(V3 *)(q + 108) = s.a;
        *(V3 *)(q + 132) = s.b;
        *(V3 *)(q + 120) = s.c;
        *(B16b *)(q + 20) = s.d;
        *(short *)(o + 30) = *(short *)(o + 30) + 1;
    } else {
    }
    *(short *)(o + 28) = *(short *)(o + 28) + 1;
    if (*(short *)(o + 28) > *(int *)0x0C2A1878)
        o[20] = o[20] + 1;
}

/* ---- batch 11 ---- */
float math_sin_angle16(int);
float math_cos_angle16(int);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c0585a8(int, int, int, float);
int FUN_0c163f66(int, int);
int FUN_0c17c130(int, int, int);

void FUN_0c164644(char *o)
{
    char *t = (char *)0x0C2A3214;
    char *q;
    char *u = (char *)0x0C2A3250;
    V3 v;
    int i;
    int st = o[20];

    if (st == 2) {
        FUN_0c03f346((int)o, 0);
        return;
    }
    if (st != 0 && st != 1)
        return;
    if (st == 0) {
        o[20] = o[20] + 1;
        o[0xA8] = 1;
        *(short *)(o + 0xAC) = 31;
        *(B12 *)(o + 64) = *(B12 *)0x0C2A303C;
        FUN_0c03744a(*(int *)(o + 0xC4), 0, 54, *(int *)0x0C4B40CC);
        FUN_0c03744a(*(int *)(o + 0xC8), 0, 54, *(int *)0x0C4B40CC);
        FUN_0c03744a(*(int *)(o + 0xCC), 3, 54, *(int *)0x0C4B40CC);
        FUN_0c03744a(*(int *)(o + 0xD0), 4, 54, *(int *)0x0C4B40CC);
        q = *(char **)(o + 0xC4);
        *(short *)(q + 6) = 575;
        *(B12 *)(*(char **)(o + 0xC4) + 132) = *(B12 *)(t + 12);
        *(B16b *)(*(char **)(o + 0xC4) + 20) = *(B16b *)0x0C2A31F4;
        q = *(char **)(o + 0xC8);
        *(short *)(q + 6) = 575;
        *(B12 *)(*(char **)(o + 0xC8) + 132) = *(B12 *)(t + 24);
        *(B16b *)(*(char **)(o + 0xC8) + 20) = *(B16b *)0x0C2A31F4;
        q = *(char **)(o + 0xCC);
        *(short *)(q + 6) = 575;
        *(B12 *)(*(char **)(o + 0xCC) + 132) = *(B12 *)(t + 36);
        *(B16b *)(*(char **)(o + 0xCC) + 20) = *(B16b *)0x0C2A3058;
        q = *(char **)(o + 0xD0);
        *(short *)(q + 6) = 575;
        *(B12 *)(*(char **)(o + 0xD0) + 132) = *(B12 *)(t + 48);
        *(B16b *)(*(char **)(o + 0xD0) + 20) = *(B16b *)0x0C2A3204;
        *(float *)(o + 76) = math_sin_angle16(*(int *)(o + 56)) * 5.0f;
        *(float *)(o + 80) = 0.0f;
        *(float *)(o + 84) = math_cos_angle16(*(int *)(o + 56)) * 5.0f;
    }
    if (o[305] != 0 || o[306] != 0) {
        o[20] = 2;
        return;
    }
    if (*(int *)(o + 0x404) != 0) {
        FUN_0c150010((int)(o + 40), 1.0f, 1.0f, 1.0f, 1.0f);
        o[20] = 2;
        return;
    }
    if (*(short *)(o + 28) <= *(int *)(u + 4)) {
        FUN_0c0588bc(*(int *)(o + 0xC4) + 132, (int)(t + 12), (int)t, *(short *)(o + 28), *(int *)(u + 4), 0);
        FUN_0c0588bc(*(int *)(o + 0xC8) + 132, (int)(t + 24), (int)t, *(short *)(o + 28), *(int *)(u + 4), 0);
        FUN_0c0588bc(*(int *)(o + 0xCC) + 132, (int)(t + 36), (int)t, *(short *)(o + 28), *(int *)(u + 4), 0);
        FUN_0c0588bc(*(int *)(o + 0xD0) + 132, (int)(t + 48), (int)t, *(short *)(o + 28), *(int *)(u + 4), 0);
    }
    v = *(V3 *)(0x0C535CA4 + o[1] * 14648);
    v.y = v.y + 100.0f;
    FUN_0c0585a8((int)o, (int)&v, 728, 5.0f);
    if (*(short *)(o + 28) % *(int *)(u + 8) == 0)
        FUN_0c163f66((int)(o + 40), o[2]);
    *(int *)(*(char **)(o + 0xC4) + 128) = *(int *)(*(char **)(o + 0xC4) + 128) + 1024;
    *(int *)(*(char **)(o + 0xC8) + 128) = *(int *)(*(char **)(o + 0xC8) + 128) - 1024;
    *(int *)(*(char **)(o + 0xCC) + 128) = *(int *)(*(char **)(o + 0xCC) + 128) + 2048;
    *(int *)(*(char **)(o + 0xD0) + 128) = *(int *)(*(char **)(o + 0xD0) + 128) + 2048;
    FUN_0c17c130((int)(o + 40), (int)(o + 40), (int)(o + 76));
    *(short *)(o + 28) = *(short *)(o + 28) + 1;
    if (*(short *)(o + 28) > *(int *)u)
        o[20] = 2;
}

/* ---- batch 12 ---- */
int FUN_0c1171f0(int);
int FUN_0c10caec(int);

static int ang16(float deg)
{
    return (int)(deg * 65536.0f / 360.0f + 0.5f) & 0xFFFF;
}

void FUN_0c10cb0e(char *o, int a5)
{
    char *u = (char *)0x0C473958;
    int i, j, c, cnt, idx, m, k;
    float base;

    if (*(*(char **)(o + 16) + 20) == 5)
        o[20] = 99;
    if (o[20] == 99) {
        FUN_0c03f346((int)o, a5);
        return;
    }
    if (o[20] != 0 && o[20] != 1)
        return;
    if (o[20] == 0) {
        o[20] = o[20] + 1;
        o[0xA8] = 1;
        *(short *)(o + 0xAC) = 31;
        o[0xA9] = 33;
        FUN_0c1171f0((int)o);
        for (i = 0; i < 20; i++) {
            FUN_0c03744a(*(int *)(o + 0xC4 + i * 4), 3, 9, *(int *)0x0C4B410C);
            *(short *)(*(char **)(o + 0xC4 + i * 4) + 6) = *(short *)(*(char **)(o + 0xC4 + i * 4) + 6) | 512;
            switch (o[2]) {
            case 0:
                *(int *)(*(char **)(o + 0xC4 + i * 4) + 128) = ang16(0.0f + 9.0f * (float)i);
                break;
            case 1:
            case 2:
                *(int *)(*(char **)(o + 0xC4 + i * 4) + 128) = ang16(180.0f + 9.0f * (float)i);
                break;
            case 3:
                *(int *)(*(char **)(o + 0xC4 + i * 4) + 128) = ang16(270.0f + 9.0f * (float)i);
                break;
            }
        }
    }
    for (i = 0; i < 20; i++)
        *(B16b *)(*(char **)(o + 0xC4 + i * 4) + 20) = *(B16b *)0x0C2A0C90;
    c = u[24];
    for (i = 0; i < 8; i++) {
        cnt = *(unsigned char *)(u + i * 3);
        for (j = 0; j < cnt; j++) {
            if (c % 40 == *(short *)(*(char **)(o + 16) + 28))
                *(int *)(u + 32) = i;
            c++;
        }
    }
    c = u[24];
    for (i = 0; i < 8; i++) {
        cnt = *(unsigned char *)(u + i * 3);
        for (j = 0; j < cnt; j++) {
            m = c % 40;
            switch (o[2]) {
            case 0: k = 0; break;
            case 1: k = 20; break;
            case 2: k = 40; break;
            case 3: k = 60; break;
            default: k = -1; break;
            }
            if (k >= 0 && m >= k && m <= k + 19) {
                idx = (m - k) * 4;
                if (*(int *)(u + 32) == i && FUN_0c10caec(*(int *)(o + 16)) != 0)
                    *(B16b *)(*(char **)(o + 0xC4 + idx) + 20) = *(B16b *)(0x0C290D70 + i * 16 + 128);
                else
                    *(B16b *)(*(char **)(o + 0xC4 + idx) + 20) = *(B16b *)(0x0C290D70 + i * 16);
            }
            c++;
        }
    }
}
