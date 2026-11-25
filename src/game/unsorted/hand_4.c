/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C, slice 4. */

int nlPushMatrix(int);
int nlGetTranslate(int);
int nlPopMatrix(int);
int math_angle3_delta(int, int, int);
struct blk32 { int w[8]; };
int FUN_0c037bf6(int);
int FUN_0c085d0c(int);
int FUN_0c038362(int);

/* 0c0433e2 */

/* 0c058198 */

/* 0c058310 */

/* 0c0583bc */

/* 0c0f3cd4 */
int pl_no_ground(char *p)
{
    return !(*(float *)(p + 0x160) > 0.0f);
}

/* 0c037fc0 */

/* 0c07256e */
int FUN_0c084a9e(int a)
{
    if ((unsigned char)FUN_0c037bf6(a) != 0)
        return FUN_0c085d0c(a);
    return FUN_0c038362(a);
}

/* 0c064f8e */
int FUN_0c064f8e(char *p, int q)
{
    if (*(char *)(p + 0x124) != 0 && (*(unsigned char *)(p + 0x184) & 4)) {
        *(struct blk32 *)q = *(struct blk32 *)(p + 0x184);
        return 1;
    }
    return 0;
}

struct blk12 { int w[3]; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c07efee(int, int);

/* 0c0f56cc */
void FUN_0c0f56cc(void)
{
    int i;
    for (i = 0; i < 48; i += 12)
        *(struct blk12 *)(0x0C540978 + 0x6F0 + i) =
            *(struct blk12 *)(0x0C1CE344 + 48 * *(signed char *)(0x0C5421F8 + 68) + i);
}

/* 0c0dc784 */
void FUN_0c0dc784(void)
{
    int i;
    for (i = 0; i < 48; i += 12) {
        *(struct blk12 *)(0x0C540978 + 0x6F0 + i) =
            *(struct blk12 *)(0x0C1C989C + 48 * *(signed char *)(0x0C5421F8 + 68) + i);
        if (*(signed char *)(0x0C5421F8 + 68) == 1 && *(int *)0x0C540D94 != 0)
            *(float *)(0x0C540978 + 0x6F0 + i) += *(float *)(*(int *)(0x0C540978 + 0x41C) + 40);
    }
}

/* 0c132880: the tail call passes r5 as the original left it: the caller's value when the
   counter has reached the limit, else the object pointer loaded from p+16 */
void FUN_0c132880(char *p, int b, int c, int d)
{
    char *q;
    short n = *(short *)(p + 28) + 1;
    *(short *)(p + 28) = n;
    if (n < *(short *)(p + 30)) {
        q = *(char **)(p + 16);
        b = (int)q;
        if (*(short *)(p + 32) == *(signed char *)(q + 0x3753)
            && *(short *)(p + 34) == *(unsigned short *)(q + 0x3818))
            return;
    }
    FUN_0c03f346((int)p, b, c, d);
}

/* 0c07f042 */
int FUN_0c09ebd4(char *p)
{
    signed char *q = (signed char *)(*(int *)(0x0C259454 + 4 * *(signed char *)(p + 2))
                                     + 2 * *(signed char *)(p + 0x3733));
    if (q[0] != 98 && (signed char)FUN_0c07efee((int)p, q[0]) != 0)
        return q[0] + 1;
    if (q[1] != 98 && (signed char)FUN_0c07efee((int)p, q[1]) != 0)
        return q[1] + 1;
    return 0;
}

#define VG(a) (*(int *)(a))
#define VSRC 0x0C3BD860
#define VSRC_SAVE 0x0C3BD864
#define VDST 0x0C3BD868
#define VDST_SAVE 0x0C3BD86C
#define VSTRIP 0x0C3BD870
#define VCOUNT 0x0C3BD874
#define VLIMIT 0x0C3BD878

/* 0c037862 */
int mdl_vtx_iter_next(void)
{
    VG(VSRC) = VG(VSRC_SAVE);
    VG(VDST) = VG(VDST_SAVE);
    for (;;) {
        if (VG(VSTRIP) == 0) {
            if (*(int *)VG(VSRC) == 0)
                return -1;
            if (*(int *)VG(VSRC) < 0) {
                VG(VSRC) += 80;
                VG(VDST) += 80;
            }
            VG(VSRC) += 4;
            if (*(unsigned int *)(VG(VSRC) - 4) & 16)
                VG(VLIMIT) = *(int *)VG(VSRC);
            else
                VG(VLIMIT) = 3 * *(int *)VG(VSRC);
            VG(VSRC) += 4;
            VG(VDST) += 8;
            VG(VSTRIP) = 1;
            VG(VCOUNT) = 0;
        }
        if (*(unsigned int *)VG(VSRC) & 1) {
            VG(VSRC_SAVE) = VG(VSRC);
            VG(VDST_SAVE) = VG(VDST);
            VG(VSRC_SAVE) += 32;
            VG(VDST_SAVE) += 32;
            VG(VCOUNT) += 1;
            if (VG(VCOUNT) >= VG(VLIMIT))
                VG(VSTRIP) = 0;
            return 0;
        }
        VG(VSRC) += 8;
        VG(VDST) += 8;
        VG(VSRC_SAVE) = VG(VSRC);
        VG(VDST_SAVE) = VG(VDST);
        VG(VCOUNT) += 1;
        if (VG(VCOUNT) >= VG(VLIMIT))
            VG(VSTRIP) = 0;
    }
}

int FUN_0c0c2d56(char *, int, int);

/* 0c0c480c */
int FUN_0c0c480c(char *p, struct blk12 *src, int val)
{
    signed char state = *(signed char *)(p + 21);
    if (state == 0) {
        *(signed char *)(p + 21) = state + 1;
        *(struct blk12 *)(p + 40) = *src;
        *(short *)(p + 28) = 300;
        *(char *)(p + 168) = 0;
        *(int *)(p + 56) = val;
        *(int *)(p + 60) = 0;
        *(int *)(p + 52) = 0;
        *(float *)(p + 72) = 0.0f;
        *(float *)(p + 68) = 0.0f;
        *(float *)(p + 64) = 0.0f;
        *(int *)(p + 164) = 0;
        *(short *)(p + 298) = 0;
        *(short *)(p + 300) = 0;
        *(short *)(p + 302) = 0;
    } else if (state != 1) {
        return 0;
    }
    *(short *)(p + 28) -= 1;
    if (*(short *)(p + 28) > 0)
        return 0;
    FUN_0c0c2d56(p, 0, *(signed char *)(p + 1));
    return 1;
}

int FUN_0c0c2ab6(char *, int);
int nlRand(void);

/* 0c0d41dc */
void FUN_0c0d41dc(char *p, struct blk12 *src, int val, int timer)
{
    signed char state = *(signed char *)(p + 21);
    if (state == 0) {
        *(short *)(p + 28) = timer;
        *(char *)(p + 168) = 0;
        *(struct blk12 *)(p + 40) = *src;
        *(int *)(p + 56) = val;
        *(signed char *)(p + 21) = state + 1;
        *(int *)(p + 60) = 0;
        *(int *)(p + 52) = 0;
        *(int *)(p + 164) = 0;
        FUN_0c0c2ab6(p, *(signed char *)(0x0C2738CA + *(unsigned char *)(p + 0x41C) * 52));
        *(short *)(p + 298) = 0;
        *(short *)(p + 302) = 0;
        *(short *)(p + 300) = 0;
    } else if (state != 1) {
        return;
    }
    *(short *)(p + 28) -= 1;
    if (*(short *)(p + 28) > 0)
        return;
    FUN_0c0c2d56(p, 0, *(signed char *)(p + 1));
    *(short *)(p + 298) = 0;
    *(short *)(p + 302) = 0;
    *(short *)(p + 300) = 0;
    *(short *)(p + 28) = 60;
}

/* 0c0f1a9e: shuffle four slots, then copy the four 12-byte entries into the chosen objects */
void FUN_0c0f1a9e(void)
{
    int order[4];
    int i, k, x, y, t;
    for (i = 0; i < 4; i++)
        order[i] = i;
    for (k = 10; k != 0; k--) {
        x = nlRand() % 4;
        y = nlRand() % 4;
        t = order[y];
        order[y] = order[x];
        order[x] = t;
    }
    for (i = 0; i < 4; i++)
        *(struct blk12 *)(0x0C532498 + order[i] * 0x3938 + 40) =
            *(struct blk12 *)(0x0C540978 + 0x6F0 + 12 * i);
}

int FUN_0c037320(int, int);
char *FUN_0c03f444(int, int, int);
int FUN_0c03744a(int, int, int, int);

/* 0c16e8f0 */
void FUN_0c16e8f0(char *obj)
{
    int total, n, i;
    char *e;
    total = FUN_0c037320(68, *(int *)0x0C4B40D8);
    n = total - 1;
    e = FUN_0c03f444(1, 0, n);
    if (e == 0)
        return;
    if (n > 0) {
        for (i = 0; i < n; i++) {
            int sub = *(int *)(e + 196 + 4 * i);
            FUN_0c03744a(sub, total - 1 - i, 68, *(int *)0x0C4B40D8);
            *(struct blk12 *)(*(int *)(e + 196 + 4 * i) + 108) = *(struct blk12 *)0x0C203DC4;
        }
    }
    *(short *)(e + 172) = 31;
    *(char *)(e + 169) = 33;
    *(int *)(e + 4) = 0x0C16E17C;
    *(char *)(e + 1) = *(char *)(obj + 1);
    *(char **)(e + 16) = obj;
    *(short *)(e + 0x41C) = *(short *)(obj + 36);
    *(struct blk12 *)(e + 40) = *(struct blk12 *)(obj + 40);
    *(float *)(e + 72) = 1.0f;
    *(float *)(e + 68) = 1.0f;
    *(float *)(e + 64) = 1.0f;
}

int FUN_0c1837cc(int, int);
int FUN_0c183708(int, struct blk12);
int FUN_0c182a58(int, int);
int FUN_0c182b6e(int);
int FUN_0c182b04(int);

/* 0c01fd4c */
void FUN_0c01fd4c(void)
{
    char *q = (char *)0x0C305434;
    int r;
    *(int *)0x0C83C6C0 = 1;
    if (*(char *)0x0C309828 == 0) {
        *(char *)0x0C309858 = 7;
        *(char *)0x0C309862 = -1;
        return;
    }
    FUN_0c1837cc(*(int *)0x0C305430, (int)q);
    q[0] = 1;
    q[2] = 3;
    q[3] = 0;
    q[4] = 0;
    q[6] = 51;
    FUN_0c183708(*(int *)0x0C305430, *(struct blk12 *)q);
    if (*(char *)0x0C3054C4 == 0) {
        *(int *)0x0C305230 = 0x0C20E406;
        r = FUN_0c182a58(0, 0);
        if (r == 0) {
            r = FUN_0c182b6e(0x0C3052CC);
            if (r != -3) {
                if (**(unsigned int **)0x0C3052CC & 0x8000)
                    *(int *)0x0C305230 = 0x0C20E406;
                else
                    *(int *)0x0C305230 = 0x0C20E388;
            }
            FUN_0c182b04(r);
        } else if (*(char *)0x0C30A3FC == 0) {
            *(int *)0x0C305230 = 0x0C20E388;
        } else {
            *(int *)0x0C305230 = 0x0C20E406;
        }
    } else {
        *(int *)0x0C305230 = 0x0C20E491;
    }
    *(int *)0x0C3054C0 = 0;
    *(char *)0x0C305244 = 0;
    *(char *)0x0C309858 += 1;
    *(char *)0x0C309859 = 0;
    *(char *)0x0C309862 = 0;
    *(char *)0x0C309991 = 1;
    *(char *)0x0C309992 = 20;
}

struct blk16 { int w[4]; };
int FUN_0c0582de(struct blk12 *, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);

/* 0c13b1ee: r5 at the tail call is the object pointer computed for FUN_0c0582de, r6/r7 are the caller's */
void FUN_0c13b1ee(char *p, int a5, int a6, int a7)
{
    struct blk12 tmp;
    int obj40;
    int q;
    obj40 = *(int *)(0x0C532560 + *(signed char *)(p + 1) * 0x3938) + 40;
    tmp = *(struct blk12 *)(0x0C2A1FD4 + 12 * *(signed char *)(p + 2));
    FUN_0c0582de(&tmp, obj40);
    *(struct blk12 *)(p + 40) = tmp;
    switch (*(signed char *)(p + 20)) {
    case 0:
        *(char *)(p + 20) += 1;
        FUN_0c03744a(*(int *)(p + 196), 0, 9, *(int *)(0x0C4B40FC + 4 * *(signed char *)(p + 1)));
        *(char *)(p + 168) = 1;
        *(short *)(p + 172) = 15;
        *(short *)(*(int *)(p + 196) + 6) = 543;
        *(struct blk16 *)(*(int *)(p + 196) + 20) = *(struct blk16 *)0x0C2A206C;
        break;
    case 1:
        q = *(int *)(p + 196);
        *(int *)(q + 128) += 32;
        FUN_0c0588bc(*(int *)(p + 196) + 132, 0x0C2A2054 + 12, 0x0C2A2054, *(short *)(p + 28), 20, 0);
        if (*(short *)(p + 28) <= 20)
            FUN_0c058a6e(*(int *)(p + 196) + 20, 0x0C2A206C + 16, 0x0C2A206C, *(short *)(p + 28), 20, 0);
        q = *(int *)(p + 196);
        *(int *)(q + 128) += 0x1800;
        *(short *)(p + 28) += 1;
        if (*(short *)(p + 28) > 20)
            *(char *)(p + 20) += 1;
        break;
    default:
        FUN_0c03f346((int)p, obj40, a6, a7);
        break;
    }
}

int FUN_0c058adc(struct blk12 *, struct blk12 *, int);
int FUN_0c145d1c(char *, int);

/* 0c1476ec: the fallthrough tail call leaves r5 = &tmp1, r6 = the object pointer, r7 = the caller's */
void FUN_0c1476ec(char *p, int a5, int a6, int a7)
{
    struct blk12 tmp1, tmp2;
    int obj, q;
    tmp1 = *(struct blk12 *)0x0C2A2640;
    obj = 0x0C532E38 + *(signed char *)(p + 2) * 0x3938;
    FUN_0c058adc(&tmp1, &tmp1, obj);
    *(struct blk12 *)(p + 40) = tmp1;
    switch (*(signed char *)(p + 20)) {
    case 0:
        *(char *)(p + 20) += 1;
        *(char *)(p + 168) = 1;
        *(short *)(p + 172) = 31;
        *(char *)(p + 169) = 33;
        *(struct blk12 *)(p + 64) = *(struct blk12 *)0x0C2A267C;
        tmp2 = *(struct blk12 *)(*(int *)(p + 196) + 108);
        FUN_0c03744a(*(int *)(p + 196), 1, 10, *(int *)(0x0C4B40E0 + 8 * *(signed char *)(p + 2)));
        *(struct blk12 *)(*(int *)(p + 196) + 108) = tmp2;
        **(char **)(p + 196) = 1;
        *(short *)(*(int *)(p + 196) + 6) = 575;
        *(struct blk12 *)(*(int *)(p + 196) + 132) = *(struct blk12 *)(0x0C2A267C + 24);
        *(struct blk16 *)(*(int *)(p + 196) + 20) = *(struct blk16 *)0x0C2A23AC;
        break;
    case 1:
        if (*(short *)(p + 28) <= 20)
            FUN_0c0588bc((int)p + 64, 0x0C2A267C + 12, 0x0C2A267C, *(short *)(p + 28), 20, 0);
        q = *(int *)(p + 196);
        *(short *)(q + 6) |= 0x1000;
        FUN_0c145d1c(p, *(int *)(p + 196));
        if (*(short *)(p + 28) <= 20)
            FUN_0c0588bc(*(int *)(p + 196) + 132, 0x0C2A267C + 36, 0x0C2A267C + 24, *(short *)(p + 28), 20, 0);
        if (*(short *)(p + 28) <= 4)
            FUN_0c058a6e(*(int *)(p + 196) + 20, 0x0C2A23BC, 0x0C2A23AC, *(short *)(p + 28), 4, 0);
        *(short *)(p + 28) += 1;
        if (*(short *)(p + 28) > 20)
            *(char *)(p + 20) += 1;
        break;
    default:
        FUN_0c03f346((int)p, (int)&tmp1, obj, a7);
        break;
    }
}

float math_sin_angle16(int);
float math_cos_angle16(int);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c0585a8(char *, struct blk12 *, int, float);
int nlAddVector3op(int, int, int);
int FUN_0c163f66(char *, int);

/* 0c1642fc */
/* manual: four sub-objects as loops (init, then tween); 28 cases, 354 of 354 instructions */
void FUN_0c1642fc(char *p, int a5, int a6, int a7)
{
    float k = 10.0f;
    struct blk12 tmp;
    int *obj = (int *)(p + 196);
    int i;
    int *tab = (int *)0x0C2A31E8;
    int state = *(signed char *)(p + 20);

    if (state == 0) {
        *(char *)(p + 20) += 1;
        *(char *)(p + 168) = 1;
        *(short *)(p + 172) = 15;
        *(struct blk12 *)(p + 64) = *(struct blk12 *)0x0C2A303C;
        for (i = 0; i < 4; i++)
            FUN_0c03744a(obj[i], i > 1 ? i * 2 - 2 : 0, 54, *(int *)0x0C4B40CC);
        for (i = 0; i < 4; i++) {
            int src = 0x0C2A318C;
            if (i == 2)
                src = 0x0C2A3058;
            if (i == 3)
                src += 16;
            *(short *)(obj[i] + 6) = 575;
            *(struct blk12 *)(obj[i] + 132) = *(struct blk12 *)0x0C2A31AC;
            *(struct blk16 *)(obj[i] + 20) = *(struct blk16 *)src;
        }
        *(float *)(p + 76) = math_sin_angle16(*(int *)(p + 56)) * k;
        *(float *)(p + 80) = 0.0f;
        *(float *)(p + 84) = math_cos_angle16(*(int *)(p + 56)) * k;
    } else if (state == 2) {
        FUN_0c03f346((int)p, a5, a6, a7);
        return;
    } else if (state != 1) {
        return;
    }
    if (*(char *)(p + 0x131) == 0 && *(char *)(p + 0x132) == 0) {
        if (*(int *)(p + 0x404) != 0) {
            FUN_0c150010((int)p + 40, 1.0f, 1.0f, 1.0f, 1.0f);
        } else {
            if (*(short *)(p + 28) <= tab[1]) {
                for (i = 0; i < 4; i++)
                    FUN_0c0588bc(obj[i] + 132, 0x0C2A31AC + 12 + 12 * i, 0x0C2A31AC, *(short *)(p + 28), tab[1], 0);
            }
            if (*(short *)(p + 28) % tab[2] == 0)
                FUN_0c163f66(p + 40, *(signed char *)(p + 2));
            tmp = *(struct blk12 *)(0x0C535CA4 + *(signed char *)(p + 1) * 0x3938);
            ((float *)&tmp)[1] += 100.0f;
            FUN_0c0585a8(p, &tmp, 728, k);
            *(int *)(*(int *)(p + 196) + 128) += 1024;
            *(int *)(*(int *)(p + 200) + 128) -= 1024;
            *(int *)(*(int *)(p + 204) + 128) += 2048;
            *(int *)(*(int *)(p + 208) + 128) += 2048;
            nlAddVector3op((int)p + 40, (int)p + 40, (int)p + 76);
            *(short *)(p + 28) += 1;
            if (*(short *)(p + 28) <= tab[0])
                return;
        }
    }
    *(char *)(p + 20) = 2;
}

struct blk40 { int w[10]; };

/* one controller entry: edge-detect words from the new state s */
static void pad_entry(char *e, char *s, char *fixed)
{
    *(short *)(e + 14) = *(short *)(s + 8);
    *(short *)(e + 12) = *(short *)(s + 6);
    if (*(short *)(s + 4) != 0) {
        e[4] = s[4];
        *(int *)e = *(int *)s;
        *(short *)(e + 18) = *(short *)(e + 16);
        *(short *)(e + 34) = *(short *)(e + 32);
        *(short *)(e + 26) = *(short *)(e + 24);
        *(short *)(e + 16) = *(short *)(s + 10);
        *(short *)(e + 32) = *(short *)(s + 14);
        *(short *)(e + 24) = *(short *)(s + 12);
        *(short *)(e + 20) = *(short *)(e + 16) & ~*(short *)(e + 18);
        *(short *)(e + 22) = *(short *)(e + 18) & ~*(short *)(e + 16);
        *(short *)(e + 28) = *(short *)(e + 24) & ~*(short *)(e + 26);
        *(short *)(e + 30) = *(short *)(e + 26) & ~*(short *)(e + 24);
        *(short *)(e + 36) = *(short *)(e + 32) & ~*(short *)(e + 34);
        *(short *)(e + 38) = *(short *)(e + 34) & ~*(short *)(e + 32);
        if (fixed) {
            e[5] = fixed[5];
            e[6] = fixed[6];
        } else {
            e[6] = 0;
            e[5] = 0;
        }
    } else {
        *(int *)e = 0;
        e[4] = 0;
        *(short *)(e + 22) = 0;
        *(short *)(e + 20) = 0;
        *(short *)(e + 16) = 0;
        *(short *)(e + 18) = 0;
        *(short *)(e + 30) = 0;
        *(short *)(e + 28) = 0;
        *(short *)(e + 24) = 0;
        *(short *)(e + 26) = 0;
        *(short *)(e + 38) = 0;
        *(short *)(e + 36) = 0;
        *(short *)(e + 32) = 0;
        *(short *)(e + 34) = 0;
    }
}

/* 0c020be4 */
void FUN_0c020be4(signed char sel)
{
    int j1, j2, i, k;
    char *e, *s, *fixed;
    j1 = sel ? 2 : 0;
    j2 = sel ? 0 : 2;
    e = (char *)(0x0C309588 + 40 * j1);
    s = (char *)(0x0C305580 + (*(unsigned char *)0x0C307580 << 5));
    fixed = (char *)(0x0C542764 + 40 * j1);
    for (i = 0; i < 2; i++) {
        pad_entry(e, s, fixed);
        e += 40;
        s += 16;
    }
    e = (char *)(0x0C309588 + 40 * j2);
    s = (char *)(0x0C307584 + (*(unsigned char *)0x0C307580 << 5));
    for (i = 0; i < 2; i++) {
        pad_entry(e, s, 0);
        e += 40;
        s += 16;
    }
    *(char *)0x0C307580 += 1;
    for (k = 0; k < 160; k += 40) {
        *(struct blk40 *)(0x0C542764 + k) = *(struct blk40 *)(0x0C309588 + k);
        *(struct blk40 *)(0x0C5426C4 + k) = *(struct blk40 *)(0x0C309588 + k);
        *(struct blk40 *)(0x0C542854 + k) = *(struct blk40 *)(0x0C309588 + k);
    }
}
