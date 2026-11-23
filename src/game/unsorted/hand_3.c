/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C for the slice-3 functions the generator could not prove. */

void FUN_0c056b68(int);
int FUN_0c054e7e(int);
float FUN_0c058328(int, int);
void FUN_0c0365c8(int);

int hit_list_reset(int a)
{
    FUN_0c056b68(a);
    return FUN_0c054e7e(a);
}

float math_mat_row2_length(int m)
{
    return FUN_0c058328(m, 2);
}


void FUN_0c08e382(char *p)
{
    if (*(unsigned char *)(p + 0x3743) != 32)
        *(short *)(p + 0x382a) = 0;
}

void res_pl_textures_release_all(void)
{
    signed char i = 0;
    do {
        FUN_0c0365c8(i);
        i++;
    } while (i < 4);
}

unsigned int FUN_0c061400(unsigned short *p)
{
    unsigned short n = *p++ & 0xfff;
    unsigned short *d = (unsigned short *)0x0C3C7E10;
    unsigned short i = 0;
    if (n > 0) {
        do {
            i++;
            *d = *p;
            d++;
        } while ((int)i < (int)n);
    }
    return n;
}

void FUN_0c1837cc(int, int);
void FUN_0c183708(int);

/* The original also copies the 12 bytes at 0x0C305434 to a stack local (dead). */
void FUN_0c020edc(void)
{
    struct blk12 { char b[12]; };
    volatile struct blk12 tmp;
    *(char *)0x0C309860 += 1;
    FUN_0c1837cc(*(int *)0x0C305430, 0x0C305434);
    *(char *)0x0C305434 = 0;
    tmp = *(struct blk12 *)0x0C305434;
    FUN_0c183708(*(int *)0x0C305430);
    *(char *)0x0C309862 = 0;
    FUN_0c1837cc(*(int *)0x0C305430, 0x0C305434);
}

typedef int (*fn4)(int, int, int, int);
int FUN_0c187798(int, int, int);

struct blk12 { int w[3]; };

void FUN_0c0f1268(void)
{
    unsigned int i = 0;
    do {
        *(struct blk12 *)(0x0C540978 + 0x6F0 + i) =
            *(struct blk12 *)(0x0C1CD2E4 + *(signed char *)(0x0C5421F8 + 68) * 48 + i);
        i += 12;
    } while (i < 48);
}

int FUN_0c03f346(int, int, int, int);

void FUN_0c131644(int p, int a5, int a6, int a7)
{
    short n = *(short *)(p + 28) + 1;
    int q;
    *(short *)(p + 28) = n;
    if (n < *(short *)(p + 30)) {
        q = *(int *)(p + 16);
        if (*(short *)(p + 32) == *(signed char *)(q + 0x3753)
            && *(short *)(p + 34) == *(unsigned short *)(q + 0x3818))
            return;
    }
    FUN_0c03f346(p, a5, a6, a7);
}

int FUN_0c085d0c(int, int, int, int);

int FUN_0c06ffc6(int p, int a5, int a6, int a7)
{
    int k = *(signed char *)(p + 21);
    int q;
    if (k < 3) {
        q = *(int *)(p + 0x376c);
        a5 = q;
        if (q == 0 || *(signed char *)(q + 0x41c) != *(signed char *)(p + 0x3721))
            return FUN_0c085d0c(p, a5, a6, a7);
    }
    switch (*(signed char *)(p + 21)) {
    case 0: return ((fn4)0x0C06F9FE)(p, a5, a6, a7);
    case 1: return ((fn4)0x0C06FBD4)(p, a5, a6, a7);
    case 2: return ((fn4)0x0C06FC40)(p, a5, a6, a7);
    case 3: return ((fn4)0x0C06FF70)(p, a5, a6, a7);
    }
    return *(signed char *)(p + 21);
}

int game_mode_handler_6(int a, int b, int c, int d)
{
    switch (*(unsigned char *)0x0C541F42) {
    case 0: return ((fn4)0x0C05BDF4)(a, b, c, d);
    case 1: return ((fn4)0x0C05BE26)(a, b, c, d);
    }
    return ((fn4)0x0C05BEEC)(a, b, c, d);
}

void mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
void mdl_vtx_set_uv(int, int);

void FUN_0c0cff2e(int a, int dst)
{
    mdl_vtx_iter_begin(a, a);
    while (mdl_vtx_iter_next() == 0) {
        mdl_vtx_set_uv(dst, dst + 4);
        dst += 8;
    }
}

int FUN_0c187990(int, int, int);

/* FUN_0c187990 is the compiler's strcpy-style helper (r0 = dest, r1 = src); the equivalence tool compares
   it by r4-r6, which here are still the caller's own arguments. */
int FUN_0c01fbe0(int a4, int a5, int a6)
{
    int p = *(int *)0x0C3BABB4;
    int i, j;
    char *buf = (char *)0x0C30A3FC;

    for (i = 0; (((char *)0x0C3098E3)[i] = *(char *)(p + 0x198 + 40 + i)) != 0; i++) ;  /* manual: _slow_strcpy r0 0x0C3098E3, r1 p + 0x198 + 40 */
    for (i = 0; (((char *)0x0C309863)[i] = *(char *)(p + 0x198 + 80 + i)) != 0; i++) ;  /* manual: _slow_strcpy r0 0x0C309863, r1 p + 0x198 + 80 */
    *(char *)0x0C30A401 = (*(int *)p & 0x100) ? 1 : 0;
    *(char *)0x0C30A3FC = 0;
    for (i = 0; i < 5; i++) {
        if (*(unsigned char *)(p + 52 + i) == 44) {
            for (j = 0; j < i; j++)
                buf[j] = *(char *)(p + 52 + j);
            buf[i] = 0;
            break;
        }
    }
    return 1;
}

int FUN_0c0613c4(unsigned short *);

/* Expand a list of records into dst: a leading zero word means a plain copy of n-1 words. */

int FUN_0c18778c(int, int, int);
int FUN_0c179ac0(void);

struct blk40 { int w[10]; };

/* Three 40-byte struct moves per step: A <- B <- C <- D, rotating the data through the areas. */
int FUN_0c02fd44(void)
{
    int j, i;
    for (j = 0; j < 2; j++) {
        char *b = (char *)0x0C3BC6AC + j * 860;
        char *c = (char *)0x0C3BBFF4 + j * 860;
        char *a = (char *)0x0C5426C4 + j * 80;
        char *d = (char *)0x0C542764 + j * 80;
        for (i = 0; i < 2; i++) {
            int o = 152 + i * 352 + 4;
            *(struct blk40 *)a = *(struct blk40 *)(b + o);
            *(struct blk40 *)(b + o) = *(struct blk40 *)(c + o);
            *(struct blk40 *)(c + o) = *(struct blk40 *)d;
            a += 40;
            d += 40;
        }
    }
    return 1;
}

void FUN_0c0f60c8(void)
{
    int frame[8];                  /* rand() % 4 can be negative: those slots lie below the array */
    int *a = frame + 4;
    int i, k, m1, m2, t;
    unsigned int *p;
    int off;

    for (i = 0; i < 4; i++)
        a[i] = i;
    for (k = 0; k < 10; k++) {
        m1 = FUN_0c179ac0() % 4;
        m2 = FUN_0c179ac0() % 4;
        t = a[m2];
        a[m2] = a[m1];
        a[m1] = t;
    }
    p = (unsigned int *)a;
    off = 0;
    do {
        p++;
        *(struct blk12 *)(0x0C532498 + p[-1] * 0x3938 + 40) = *(struct blk12 *)(0x0C540978 + 0x6F0 + off);
        off += 12;
    } while (p < (unsigned int *)a + 4);
}

struct v3i { int x, y, z; };

/* Interpolate between two 16.16 angle vectors the short way round: out = b + wrap(a - b) * (t - t0) / (t1 - t0). */
void FUN_0c058968(struct v3i *out, struct v3i *a, struct v3i *b, int t, int t1, int t0)
{
    struct v3i from, to;
    int d[3];
    int *f = (int *)&from;
    int *g = (int *)&to;
    int *o = (int *)out;
    int *bo = (int *)b;
    int num, den, k;

    *(struct blk12 *)&from = *(struct blk12 *)a;
    *(struct blk12 *)&to = *(struct blk12 *)b;
    num = t - t0;
    den = t1 - t0;

    for (k = 0; k < 3; k++) {
        d[k] = f[k] - g[k];
        if (f[k] - g[k] > 0x8000)
            d[k] -= 0x10000;
        if (f[k] - g[k] < -0x8000)
            d[k] += 0x10000;
        g[k] = d[k];
    }
    for (k = 0; k < 3; k++)
        o[k] = (g[k] * num) / den + bo[k];
}

static void dc366_step(char *o, int tbl)
{
    int k = *(signed char *)(o + 2);
    int p;
    *(float *)(o + 40) = *(float *)(o + 40) + *(float *)(o + 76);
    *(float *)(o + 76) = *(float *)(o + 76) + *(float *)(o + 88);
    *(float *)(o + 44) = *(float *)(o + 44) + *(float *)(o + 80);
    *(float *)(o + 80) = *(float *)(o + 80) + *(float *)(o + 92);
    p = *(int *)(o + 196);
    *(int *)(p + 120) += *(int *)(tbl + k * 12);
    *(int *)(p + 124) += *(int *)(tbl + k * 12 + 4);
    *(int *)(p + 128) += *(int *)(tbl + k * 12 + 8);
}

void FUN_0c0dc366(int obj, int a5, int a6, int a7)
{
    char *o = (char *)obj;
    int tbl = 0x0C287F44;
    int s = *(signed char *)(o + 20);
    int k;

    if (s == 0) {
        *(unsigned char *)(o + 0xa8) = 1;
        *(struct blk12 *)(o + 76) = *(struct blk12 *)(0x0C287F20 + *(signed char *)(o + 2) * 12);
        *(struct blk12 *)(o + 88) = *(struct blk12 *)0x0C287F38;
        o[20] = o[20] + 1;
        s = 1;
    }
    if (s == 1) {
        *(short *)(o + 28) = 40;
        o[20] = o[20] + 1;
        s = 2;
    }
    if (s == 2) {
        dc366_step(o, tbl);
        *(short *)(o + 28) = *(short *)(o + 28) - 1;
        if (*(short *)(o + 28) == 0) {
            *(short *)(o + 172) = 0x40f;
            *(float *)(o + 176) = 1.0f;
            *(short *)(o + 28) = 20;
            o[20] = o[20] + 1;
        }
        return;
    }
    dc366_step(o, tbl);
    *(float *)(o + 176) = *(float *)(o + 176) - 0.05f;
    *(short *)(o + 28) = *(short *)(o + 28) - 1;
    if (*(short *)(o + 28) == 0) {
        k = *(signed char *)(o + 2);
        FUN_0c03f346(obj, tbl + k * 12, *(int *)(o + 196), a7);
    }
}

int FUN_0c1502e8(int, int, int, int, int, int);

void FUN_0c14fe04(float *src, int a5, int a6, float lift)
{
    float pos[24];
    float *tbl = (float *)0x0C203058;
    int round, i, obj;
    for (round = 2; round != 0; round--) {
        for (i = 0; i < 8; i++) {
            *(struct blk12 *)&pos[i * 3] = *(struct blk12 *)src;
            pos[i * 3 + 0] = pos[i * 3 + 0] + 100.0f * tbl[0];
            pos[i * 3 + 2] = pos[i * 3 + 2] + 100.0f * tbl[1];
            pos[i * 3 + 1] = pos[i * 3 + 1] + 16.0f;
            tbl += 2;
        }
        a5 = 8;
        a6 = 2;
        obj = FUN_0c1502e8(-1, 8, 2, (int)pos, 0x0C202E68, 0x0C2030D8);
        if (obj != 0) {
            a5 = obj + 0x41c;
            *(float *)(a5 + 16) = lift;
            *(short *)(obj + 30) = 0;
        }
    }
}

void FUN_0c0582de(int, int);
void FUN_0c03744a(int, int, int, int);
void FUN_0c0588bc(int, int, int, int, int, int);
void FUN_0c058a6e(int, int, int, int, int, int);

struct blk16 { int w[4]; };

void FUN_0c13a79e(int obj, int a5, int a6, int a7)
{
    char *o = (char *)obj;
    struct blk12 local;
    int x, p, t;

    x = *(int *)(0x0C532560 + *(signed char *)(o + 1) * 0x3938) + 40;     /* r5 */
    local = *(struct blk12 *)(0x0C2A1EAC + *(signed char *)(o + 2) * 12);
    FUN_0c0582de((int)&local, x);
    *(struct blk12 *)(o + 40) = local;
    switch (*(signed char *)(o + 20)) {
    case 0:
        o[20] = o[20] + 1;
        FUN_0c03744a(*(int *)(o + 196), 0, 9, *(int *)(0x0C4B40FC + *(signed char *)(o + 1) * 4));
        *(unsigned char *)(o + 168) = 1;
        *(short *)(o + 172) = 15;
        *(short *)(*(int *)(o + 196) + 6) = 543;
        *(struct blk16 *)(*(int *)(o + 196) + 20) = *(struct blk16 *)0x0C2A1F44;
        break;
    case 1:
        p = *(int *)(o + 196);
        *(int *)(p + 128) = *(int *)(p + 128) + 32;
        FUN_0c0588bc(*(int *)(o + 196) + 132, 0x0C2A1F2C + 12, 0x0C2A1F2C, *(short *)(o + 28), 20, 0);
        t = *(short *)(o + 28);
        if (t <= 20)
            FUN_0c058a6e(*(int *)(o + 196) + 20, 0x0C2A1F44 + 16, 0x0C2A1F44, *(short *)(o + 28), 20, 0);
        p = *(int *)(o + 196);
        *(int *)(p + 128) = *(int *)(p + 128) + 0x1800;
        *(short *)(o + 28) = *(short *)(o + 28) + 1;
        if (*(short *)(o + 28) > 20)
            o[20] = o[20] + 1;
        break;
    default:
        FUN_0c03f346(obj, x, a6, a7);
    }
}

float math_sin_angle16(int);

void FUN_0c123cfc(int obj, int a5, int a6, int a7)
{
    char *o = (char *)obj;
    float x, a, b;
    int i, v;

    switch (*(signed char *)(o + 20)) {
    case 0:
        *(short *)(o + 28) = *(short *)(o + 28) + 55;
        x = (math_sin_angle16((int)((float)*(short *)(o + 28) * 65536.0f / 360.0f)) + 1.0f) / 2.0f;
        *(float *)(o + 72) = 0.8f + x * 0.2f;
        *(float *)(o + 64) = 0.8f + x * 0.2f;
        *(float *)(o + 68) = 0.8f + x * 0.8f;
        *(int *)(o + 56) = (unsigned short)(*(int *)(o + 56) + 0x4321);
        if (*(signed char *)(*(int *)(o + 16) + 0x3715) == 26)
            return;
        o[20] = 5;
        return;
    case 1:
        for (i = 0; i < 24; i += 4) {
            int t = *(short *)(o + 28);
            if (t < 30)
                *(float *)(*(int *)(o + 196 + i) + 136) += 0.033333335f;
            else if (t > 100)
                *(float *)(*(int *)(o + 196 + i) + 136) -= 0.05f;
        }
        v = *(short *)(o + 28);
        *(short *)(o + 28) = v + 1;
        if (v > 120) {
            o[20] = 5;
            return;
        }
        if (*(signed char *)(*(int *)(o + 16) + 0x3715) == 26)
            return;
        o[20] = 5;
        return;
    case 2:
        *(short *)(o + 28) = *(short *)(o + 28) + 55;
        x = (math_sin_angle16((int)((float)*(short *)(o + 28) * 65536.0f / 360.0f)) + 1.0f) / 2.0f;
        a = x * 0.2f;
        b = x * 0.8f;
        if (*(short *)(o + 30) > 30) {
            a = a + 1.0f;
            b = b + 1.0f;
        } else {
            b = b + 0.8f;
            a = a + 0.5f;
        }
        *(float *)(o + 72) = a;
        *(float *)(o + 64) = a;
        *(float *)(o + 68) = b;
        *(int *)(o + 56) = (unsigned short)(*(int *)(o + 56) + 0x4321);
        *(short *)(o + 30) = *(short *)(o + 30) - 1;
        if (*(short *)(o + 30) == 0) {
            o[20] = 5;
            return;
        }
        if (*(signed char *)(*(int *)(o + 16) + 0x3715) == 5)
            return;
        o[20] = 5;
        return;
    case 3:
        *(float *)(o + 64) = *(float *)(o + 64) + 0.1f;
        *(float *)(o + 72) = *(float *)(o + 72) + 0.1f;
        *(float *)(o + 68) = *(float *)(o + 68) + 0.1f;
        *(short *)(o + 28) = *(short *)(o + 28) - 1;
        if (*(short *)(o + 28) > 0 && *(signed char *)(*(int *)(o + 16) + 0x3715) == 26)
            return;
        o[20] = 5;
        return;
    case 5:
        FUN_0c03f346(obj, a5, a6, a7);
        return;
    }
}

void FUN_0c059e60(int, int);

static int hc84_conv(float s, float scale)
{
    return (int)(s * scale * 65536.0f / 360.0f + 0.5f) & 0xffff;
}

void FUN_0c138c84(int obj, int a5, int a6, int a7)
{
    char *o = (char *)obj;
    int *tb = (int *)0x0C2A1C10;
    int p1, s, t;

    p1 = 0x0C532498 + *(signed char *)(o + 1) * 0x3938;
    if (*(signed char *)(p1 + 0x3715) != 26)
        o[20] = 3;
    s = *(signed char *)(o + 20);
    if (s == 0) {
        FUN_0c059e60(p1, 36);
        o[20] = o[20] + 1;
        FUN_0c03744a(*(int *)(o + 196), 0, 7, *(int *)(0x0C4B40FC + *(signed char *)(o + 1) * 4));
        FUN_0c03744a(*(int *)(o + 200), 1, 7, *(int *)(0x0C4B40FC + *(signed char *)(o + 1) * 4));
        *(unsigned char *)(o + 168) = 1;
        *(short *)(o + 172) = 31;
        *(unsigned char *)(o + 169) = 33;
        *(struct blk12 *)(o + 64) = *(struct blk12 *)0x0C2A1BC0;
        *(short *)(*(int *)(o + 196) + 6) = 31;
        *(struct blk12 *)(*(int *)(o + 196) + 132) = *(struct blk12 *)0x0C2A1BC0;
        *(struct blk12 *)(*(int *)(o + 196) + 108) = *(struct blk12 *)0x0C2A1BF8;
        *(short *)(*(int *)(o + 200) + 6) = 31;
        *(struct blk12 *)(*(int *)(o + 200) + 132) = *(struct blk12 *)0x0C2A1BC0;
        *(struct blk12 *)(*(int *)(o + 200) + 108) = *(struct blk12 *)(0x0C2A1BF8 + 12);
        *(int *)(*(int *)(o + 196) + 124) = hc84_conv(math_sin_angle16(*(int *)0x0C2A1C30), *(float *)0x0C2A1C38);
        *(int *)(*(int *)(o + 200) + 124) = hc84_conv(math_sin_angle16(-*(int *)0x0C2A1C30), *(float *)0x0C2A1C38);
        *(int *)(*(int *)(o + 196) + 120) = hc84_conv(math_sin_angle16(*(int *)0x0C2A1C34), *(float *)0x0C2A1C3C);
        *(int *)(*(int *)(o + 200) + 120) = hc84_conv(math_sin_angle16(-*(int *)0x0C2A1C34), *(float *)0x0C2A1C3C);
    } else if (s != 1) {
        FUN_0c059e60(p1, 37);
        FUN_0c03f346(obj, 37, a6, a7);
        return;
    }
    t = *(short *)(o + 28);
    if (t >= tb[1] && t <= tb[2]) {
        FUN_0c0588bc(*(int *)(o + 196) + 132, 0x0C2A1BCC, 0x0C2A1BC0, *(short *)(o + 28), tb[2], tb[1]);
        FUN_0c0588bc(*(int *)(o + 200) + 132, 0x0C2A1BCC, 0x0C2A1BC0, *(short *)(o + 28), tb[2], tb[1]);
    }
    if (*(short *)(o + 28) & 1)
        *(struct blk12 *)(o + 64) = *(struct blk12 *)0x0C2A1BCC;
    else
        *(struct blk12 *)(o + 64) = *(struct blk12 *)0x0C2A1BC0;
    t = *(short *)(o + 28);
    if (t >= tb[5] && t <= tb[0]) {
        FUN_0c0588bc(*(int *)(o + 196) + 132, 0x0C2A1BC0, 0x0C2A1BCC, *(short *)(o + 28), tb[0], tb[5]);
        FUN_0c0588bc(*(int *)(o + 200) + 132, 0x0C2A1BC0, 0x0C2A1BCC, *(short *)(o + 28), tb[0], tb[5]);
    }
    *(short *)(o + 28) = *(short *)(o + 28) + 1;
    if (*(short *)(o + 28) > tb[0])
        o[20] = o[20] + 1;
}

void FUN_0c058b06(int, int, int);
void FUN_0c07e2f4(int, int);
void FUN_0c064d24(int, int, int, int, int, int, int, int);
void FUN_0c13b1a8(int, int, int);
void math_vec3_accumulate(int, int);

void FUN_0c13adbc(int obj, int a5, int a6, int a7)
{
    char *o = (char *)obj;
    struct blk12 L;
    int s, t, p;
    int step = 0x1800;

    s = *(signed char *)(o + 20);
    if (s == 0) {
        o[20] = o[20] + 1;
        FUN_0c03744a(*(int *)(o + 196), 0, 5, *(int *)(0x0C4B40FC + *(signed char *)(o + 1) * 4));
        FUN_0c03744a(*(int *)(o + 200), 1, 5, *(int *)(0x0C4B40FC + *(signed char *)(o + 1) * 4));
        *(unsigned char *)(o + 168) = 1;
        *(short *)(o + 172) = 15;
        *(unsigned char *)*(int *)(o + 196) = 1;
        *(short *)(*(int *)(o + 196) + 6) = 31;
        *(struct blk12 *)(*(int *)(o + 196) + 132) = *(struct blk12 *)0x0C2A1F9C;
        *(unsigned char *)*(int *)(o + 200) = 1;
        *(short *)(*(int *)(o + 200) + 6) = 31;
        *(struct blk12 *)(*(int *)(o + 200) + 132) = *(struct blk12 *)0x0C2A1FA8;
        *(float *)(*(int *)(o + 200) + 140) = 0.0f;
        L = *(struct blk12 *)0x0C2A1F9C;
        *(float *)((char *)&L + 8) = *(float *)((char *)&L + 8) + 20.0f;
        FUN_0c058b06(obj + 76, obj + 52, (int)&L);
        *(struct blk12 *)(o + 64) = *(struct blk12 *)0x0C2A1FA8;
        FUN_0c07e2f4(obj, *(signed char *)(o + 2) == 2 ? 36 : 19);
        FUN_0c064d24(obj, 1, 67, 0, 256, ~(1 << *(signed char *)(o + 1)), 0, 240);
        return;
    }
    if (s == 1) {
        if (*(unsigned char *)(o + 305) != 0 || *(int *)(o + 1028) != 0) {
            o[20] = o[20] + 1;
            return;
        }
        p = *(int *)(o + 196);
        *(int *)(p + 128) = *(int *)(p + 128) + step;
        if (*(short *)(o + 28) < 8)
            FUN_0c0588bc(*(int *)(o + 196) + 132, 0x0C2A1FA8, 0x0C2A1F9C, *(short *)(o + 28), 8, 0);
        if (*(short *)(o + 28) > 10 && *(short *)(o + 28) % 7 == 0)
            FUN_0c13b1a8(*(signed char *)(o + 1), obj + 40, obj + 52);
        if (*(short *)(o + 28) < 60)
            *(float *)(*(int *)(o + 200) + 140) = *(float *)(*(int *)(o + 200) + 140) + 0.016666668f;
        math_vec3_accumulate(obj + 40, obj + 76);
        *(short *)(o + 28) = *(short *)(o + 28) + 1;
        return;
    }
    if (s == 2 || s == 3) {
        if (s == 2) {
            o[20] = o[20] + 1;
            *(short *)(o + 28) = 0;
        }
        p = *(int *)(o + 196);
        *(int *)(p + 128) = *(int *)(p + 128) + step;
        t = *(short *)(o + 28);
        if (t < 8) {
            if (*(short *)(o + 28) == 0)
                *(struct blk12 *)(o + 88) = *(struct blk12 *)(*(int *)(o + 196) + 132);
            FUN_0c0588bc(*(int *)(o + 196) + 132, 0x0C2A1F9C, obj + 88, *(short *)(o + 28), 8, 0);
        }
        if (*(short *)(o + 28) < 10) {
            if (*(short *)(o + 28) == 0)
                *(float *)(o + 84) = -*(float *)(*(int *)(o + 200) + 140) / 10.0f;
            *(float *)(*(int *)(o + 200) + 140) = *(float *)(*(int *)(o + 200) + 140) + *(float *)(o + 84);
        }
        *(short *)(o + 28) = *(short *)(o + 28) + 1;
        if (*(short *)(o + 28) >= 10)
            o[20] = o[20] + 1;
        return;
    }
    FUN_0c03f346(obj, a5, a6, a7);
}
