/* game/unsorted: functions 0C0D60A8-0C0D6D7E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o620_uchar { char p[0x620]; unsigned char v; };
struct o720_float { char p[0x720]; float v; };
struct o724_float { char p[0x724]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB4_int { char p[0xB4]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_set_uv(int, int);
int FUN_0c03ea04(int, int);
int FUN_0c042fe0(void);
int FUN_0c0522be(int);
int FUN_0c052c00(int, int, int);
int FUN_0c056e44(int, int);
int FUN_0c059c16(int, int);
int FUN_0c059c7a(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c059d30(void);
int FUN_0c05af9a(int, int, int);
int FUN_0c05b048(int, int);
int FUN_0c05b052(int, int);
int FUN_0c0cfecc(int, int, int);
int FUN_0c0d02a6(void);
int FUN_0c0d0378(int, int);
int FUN_0c0d039e(int, int);
int FUN_0c0d04b4(int);
int FUN_0c0d6106(void);
int FUN_0c0d8858(int);
int FUN_0c0dc244(void);
int FUN_0c15d386(int, int, int, int, int);
int nlRand(void);
int FUN_0c187798(int, int, int);
int FUN_0c0d60a8(int a4);
int FUN_0c0d60bc(int a4);
int FUN_0c085cac(int, int, int, int);
int FUN_0c0d60de(int a4);
int FUN_0c0d60f8(int a4);
int FUN_0c0d613e(int, int);
int FUN_0c0d6176(void);
int FUN_0c0d6230(int a4);
int thunk_FUN_0c0d6176(void);
int FUN_0c0d62a6(int a4);
int FUN_0c0d62cc(void);
int FUN_0c0d62d0(void);
int FUN_0c0d634c(void);
void FUN_0c0d6422(int a4, int a5, int a6, int a7);
void FUN_0c0d6d7a(void);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };


int FUN_0c0d60a8(int a4)
{
    return ((((unsigned char)(*(signed char *)(((unsigned char)(*(signed char *)((a4 + 0xC286EC8))) + 0xC472A80))) == 0)) ? 1 : 0);
}

int FUN_0c0d60bc(int a4)
{
    register int t0;

    t0 = *(signed char *)(((0xC286EC8 + a4) + 0x0));
    if ((unsigned char)(*(signed char *)((0xC472A80 + (unsigned char)t0))) != 0) {
        return 0x0;
    }
    *(unsigned char *)((0xC472A80 + (unsigned char)t0)) = 0x1;
    return 0x1;
}

int FUN_0c0d60de(int a4)
{
    if ((unsigned char)(*(signed char *)(((unsigned char)(*(signed char *)((a4 + 0xC286EC8))) + 0xC472A80))) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0d60f8(int a4)
{
    *(unsigned char *)(((unsigned char)(*(signed char *)((a4 + 0xC286EC8))) + 0xC472A80)) = 0x0;
    return 0xC472A80;
}


int FUN_0c0d6176(void)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t10;
    register int t11;
    register int t13;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((((int)stk + 0) + (t0 << 2))) = t0;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t2 = 0xA;
    for (;;) {
        t3 = nlRand();
        t4 = (t3 % 0x4);
        t6 = nlRand();
        t7 = (t6 % 0x4);
        t10 = *(int *)((((t4 << 2) + ((int)stk + 0)) + 0x0));
        t2 = (t2 - 0x1);
        *(unsigned int *)((((t4 << 2) + ((int)stk + 0)) + 0x0)) = (*(int *)((((t7 << 2) + ((int)stk + 0)) + 0x0)));
        *(unsigned int *)((((t7 << 2) + ((int)stk + 0)) + 0x0)) = t10;
        if (t2 == 0) {
            break;
        }
    }
    t11 = 0x0;
    for (;;) {
        t13 = FUN_0c0d613e((*(int *)((((int)stk + 0) + (t11 << 2)))), t11);
        t11 = (t11 + 0x1);
        if ((int)t11 >= (int)0x4) {
            break;
        }
    }
    return t13;
}

int FUN_0c0d6230(int a4)
{
    register int t9;
    register int t10;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1C8254)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1C8260)));
    *(unsigned short *)0xC540996 = 0x0;
    FUN_0c0d6106();
    if ((*(signed char *)0xC54098D) != 11) {
        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    }
    t9 = *(signed char *)0xC542237;
    t10 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t9 << 2) << 1) + t9) << 2) + 0xC286D34) + (((t10 << 1) + t10) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int thunk_FUN_0c0d6176(void)
{
    return FUN_0c0d6176();
}

int FUN_0c0d62a6(int a4)
{
    int t0;

    t0 = *(signed char *)0xC54223C;
    if ((t0 != 0) && (t0 == 1)) {
        return FUN_0c0522be((*(int *)0xC241B70));
    }
    return FUN_0c052c00(0x2000, 0x1555, a4);
}

int FUN_0c0d62cc(void)
{
    return FUN_0c0d62a6(0xA);
}

int FUN_0c0d62d0(void)
{
    register int t0;
    register int t4;

    t0 = *(signed char *)0xC54223C;
    t4 = FUN_0c0cfecc((*(int *)(((((t0 << 2) << 1) + 0xC1C94BC) + 0x0))), 0xC540996, (*(int *)(((((t0 << 2) << 1) + 0xC1C94BC) + 0x4))));
    if ((int)t4 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0d634c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC4B410C;
    t1 = (((struct oB4_int *)((*(int *)((((t0 + 0x10) + 0x420) + 0x1C)))))->v);
    mdl_vtx_iter_begin(t1, t1);
    t1 = 0x0;
    for (;;) {
        t3 = mdl_vtx_iter_next();
        if (t3 != 0) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 2);
        t2 = (t2 << 1);
        t2 = (t2 + 0xC286F3C);
        mdl_vtx_set_uv(t2, (t2 + 0x4));
        t1 = (t1 + 0x1);
    }
    t1 = *(int *)(((*(int *)((((t0 + 0x10) + 0x440) + 0x1C))) + 0x0));
    mdl_vtx_iter_begin(t1, t1);
    t1 = t2;
    t2 = 0x0;
    for (;;) {
        t3 = mdl_vtx_iter_next();
        if (t3 != 0) {
            break;
        }
        t1 = t2;
        t1 = (t1 << 2);
        t1 = (t1 << 1);
        t1 = (t1 + 0xC286F5C);
        mdl_vtx_set_uv(t1, (t1 + 0x4));
        t2 = (t2 + 0x1);
    }
    t1 = *(int *)(((*(int *)((((t0 + 0x10) + 0x1280) + 0x1C))) + 0x0));
    mdl_vtx_iter_begin(t1, t1);
    t0 = t2;
    t1 = 0x0;
    for (;;) {
        t2 = mdl_vtx_iter_next();
        if (t2 != 0) {
            break;
        }
        t0 = t1;
        t0 = (t0 << 2);
        t0 = (t0 << 1);
        t0 = (t0 + 0xC286F7C);
        mdl_vtx_set_uv(t0, (t0 + 0x4));
        t1 = (t1 + 0x1);
    }
    return t2;
}

/* manual: scene sequence on the bytes 0C540978+14 / +15 (14 steps: timers, camera shakes, placing the four player records); 821 cases, 967 of 967 instructions */
#define B(o) (*(signed char *)(w + (o)))
#define H(o) (*(short *)(w + (o)))
#define F(o) (*(float *)(w + (o)))
#define SLOT(k) (((char **)0xC472A88)[k])
#define DONE ((int *)0xC472A98)
#define COUNT (*(int *)0xC472AA8)
#define LIMIT (*(int *)0xC472AAC)
#define ALIVE(q) (*(signed char *)((q) + 0x3714) != 0 && *(float *)((q) + 0x160) > 0.0f)
#define TIME() (((int *)0xC1C826C)[*(signed char *)0xC54223C])
#define PUT(k, a8, x, y, z) (*(signed char *)(*p + 0xA8) = (a8), *(float *)(*p + 0x28) = (x), \
    *(float *)(*p + 0x2C) = (y), *(float *)(*p + 0x30) = (z))
void FUN_0c0d6422(int a4, int a5, int a6, int a7)
{
    char *w = (char *)0xC540978;
    char *q;
    float *v;
    char **p;
    int i, t, n, st;

    t = B(0x14);
    if (t == 0) {
        B(0x14)++;
        *(int *)(w + 0xC0) = 0;
        B(0xA8) = 0;
        B(0x15) = 0;
    } else if (t != 1) {
        return;
    }
    t = H(0x1C);
    switch (st = B(0x15)) {
    case 0:
        FUN_0c0d6230(0);
        FUN_0c0d634c();
        for (i = 2; i >= 0; i--)
            ((int *)0xC472AB0)[i] = 1;
        for (i = 2; i >= 0; i--)
            ((int *)0xC472ABC)[i] = 0;
        B(0x15)++;
    case 1:
        if (!FUN_0c0d62d0())
            return;
        thunk_FUN_0c0d6176();
        FUN_0c0d0378(0, 4);
        H(0x1C) = 0;
        break;
    case 2:
        if (!FUN_0c042fe0())
            return;
        FUN_0c0d62cc();
        H(0x1C) = TIME();
        break;
    case 3:
        if (t == 900)
            FUN_0c0522be(*(int *)0xC241B80);
        if (--H(0x1C) > 780)
            return;
        FUN_0c15d386(1, 0xC286ED0, 0xC286F00, 0xC286F0C, 1200);
        FUN_0c15d386(1, 0xC286EDC, 0xC286F00, 0xC286F0C, 1200);
        FUN_0c15d386(1, 0xC286EE8, 0xC286F00, 0xC286F24, 2400);
        H(0x20) = 0;
        break;
    case 4:
    case 5:
        if (t % 20 == 0) {
        shake:
            FUN_0c0d8858((short)H(0x20)++);
            if (!(nlRand() & 1))
                thunk_FUN_0c05abb2(0x42, 0);
        }
        if (st == 7)
            goto shaken;
        if (st != 5) {
            if (--H(0x1C) > 120)
                return;
            thunk_FUN_0c05abb2(0x58, 0);
            FUN_0c05af9a(0x58, 127, 180);
        } else {
            if (--H(0x1C) > 0)
                return;
            FUN_0c05af9a(0x58, 50, 120);
            FUN_0c0d039e(0, 4);
            FUN_0c0d6230(1);
        }
        break;
    case 6:
        if (!FUN_0c0d62d0())
            return;
        FUN_0c0d62cc();
        FUN_0c0d0378(5, 6);
        FUN_0c059c7a(5, 0);
        for (i = 3; i >= 0; i--)
            DONE[i] = -1;
        COUNT = 0;
        LIMIT = *(signed char *)0xC5429B4 == 4 ? 1 : 2;
        H(0x1C) = TIME();
        H(0x1E) = 0;
        H(0x22) = 0;
        break;
    case 7:
        if (H(0x22)++ > 900) {
            F(0x724) += 1.75f;
            if (F(0x724) > 4500.0f)
                F(0x724) = 4500.0f;
            F(0x720) = F(0x724) + -1000.0f;
            for (i = 0, q = w + 0x6F0; i < 4; i++, q += 12) {
                if (F(0x724) > 3500.0f)
                    *(float *)q = 600.0f + 1.5f * (F(0x724) - 3500.0f);
                *(float *)(q + 4) = F(0x724) + 1000.0f;
            }
        }
        if (H(0x22) == 1320)
            FUN_0c0d0378(7, 11);
        if (H(0x1C) % 20 == 0 && H(0x20) < 60)
            goto shake;
    shaken:
        if (H(0x1C) == 900)
            FUN_0c15d386(0, 0xC286EF4, 0xC286F18, 0xC286F0C, 900);
        if (H(0x1C) < 300 && COUNT < LIMIT) {
            for (i = 0; i < 4; i++) {
                if (DONE[i] == -1) {
                    q = (char *)(i * 0x3938 + 0xC532498);
                    v = (float *)(q + 0x28);
                    if (ALIVE(q) && v[0] > 2150.0f && v[0] < 2300.0f && v[1] > 4500.0f && v[1] < 4550.0f &&
                        v[2] > -50.0f && v[2] < 50.0f) {
                        FUN_0c085cac((int)q, 23, 15, a7);
                        SLOT(COUNT) = q;
                        DONE[i] = i;
                        COUNT++;
                    }
                }
            }
        }
        if (H(0x1C) == 60)
            FUN_0c05b052(60, 0);
        if (--H(0x1C) > 0)
            return;
        if (!FUN_0c042fe0())
            return;
        n = COUNT;
        for (i = 0; i < 4; i++) {
            if (DONE[i] == -1) {
                SLOT(n++) = (char *)(i * 0x3938 + 0xC532498);
                DONE[i] = i;
            }
        }
        *(char *)0xC542235 = 0;
        FUN_0c05af9a(0x58, 0, 1);
        B(0x620) = 1;
        FUN_0c0d039e(5, 11);
        FUN_0c0d6230(2);
        break;
    case 8:
        if (!FUN_0c0d62d0())
            return;
        thunk_FUN_0c0d6176();
        FUN_0c0d62cc();
        FUN_0c0d0378(12, 15);
        FUN_0c05b048(1, 0);
        for (i = 0; i < 4; i++) {
            p = &SLOT(i);
            if (ALIVE(*p)) {
                FUN_0c085cac((int)*p, 23, 11, a7);
                PUT(i, 1, (unsigned)(i - 1) < 2 ? 300.0f : -300.0f, 1000.0f, i & 1 ? -300.0f : 300.0f);
            }
        }
        *(char *)0xC542235 = 2;
        FUN_0c059d30();
        H(0x1C) = TIME();
        H(0x1E) = 0;
        H(0x20) = 0;
        H(0x22) = 0;
        B(0x15)++;
        FUN_0c056e44(25, 4);
        return;
    case 9:
        H(0x1C)--;
        H(0x1E)++;
        for (i = 0; i < 2; i++) {
            float x = i ? 470.0f : -1200.0f;
            float z = i ? -770.0f : -50.0f;
            n = COUNT;
            t = H(0x1E);
            p = &SLOT(i);
            if (n > i) {
                n = i ? 80 : 35;
                if (t == n) {
                    if (ALIVE(*p)) {
                        PUT(i, 1, x, 0.0f, z);
                        *(int *)(*p + 0x38) = i ? 0x8000 : 0x4000;
                        FUN_0c085cac((int)*p, 23, 3 - i, a7);
                        FUN_0c0d60bc(5 - i - i);
                    }
                } else if (t < n && ALIVE(*p)) {
                    PUT(i, 0, x, 1000.0f, z);
                }
            }
        }
        if (H(0x1E) == 160)
            B(0x15) = 10;
        return;
    case 11:
        FUN_0c0d6230(*(signed char *)0xC54223C);
        if (*(signed char *)0xC54223C == 1) {
            F(0x724) = 2500.0f;
            F(0x720) = F(0x724) + -1000.0f;
            FUN_0c0dc244();
        }
        B(0x15)++;
    case 12:
        if (!FUN_0c0d62d0())
            return;
        B(0x15)++;
        FUN_0c0d02a6();
    default:
        return;
    }
    B(0x15)++;
}
#undef B
#undef H
#undef F

void FUN_0c0d6d7a(void)
{
    
}


