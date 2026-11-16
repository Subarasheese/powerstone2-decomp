/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C, slice 0. */
int FUN_0c03f346(int);
int FUN_0c03f06a(int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c17a550(int);
int FUN_0c17a4c0(int, int);
int dbg_set_cell_size(int, int);
int dbg_printf(int, ...);

void ui_fade_reset(void)
{
    *(char *)0x0C30503C = 0;
}

int vmu_menu_tick_message(int a)
{
    if (*(char *)0x0C3DC264 != 0)
        return FUN_0c03f346(a);
    return 0;
}

struct node { char p[12]; struct node *next; };

void obj_release_class(int cls)
{
    struct node *n = ((struct node **)0x0C532434)[cls];
    while (n) {
        struct node *next = n->next;
        FUN_0c03f06a((int)n);
        n = next;
    }
    ((int *)0x0C532434)[cls] = 0;
    ((int *)0x0C53245C)[cls] = 0;
}


int FUN_0c0ae4c0(int a)
{
    FUN_0c037bf6(a);
    return FUN_0c038362(a);
}


int FUN_0c0a0c64(int);
int FUN_0c0a098c(int);

int FUN_0c07823c(int p)
{
    if (*(unsigned char *)(p + 0x3728) == 1)
        return FUN_0c0a0c64(p);
    return FUN_0c0a098c(p);
}

struct b12 { int w[3]; };
struct b52 { int w[13]; };
#define CP12(d, s) (*(struct b12 *)(d) = *(struct b12 *)(s))   /* SHC block-move helper call */
int FUN_0c04882c(int, int);

int FUN_0c048a80(int unused, int idx)
{
    struct b52 bb;
    char *buf = (char *)&bb;
    int i;
    bb = *(struct b52 *)(0x0C240C84 + 52 * idx);
    for (i = 0; i < 3; i++)
        buf[40 + i] = *(char *)(0x0C5421F8 + 121 + idx * 4 + i);
    return FUN_0c04882c(0, (int)buf);
}

int FUN_0c048ac6(int unused, int idx)
{
    struct b52 bb;
    char *buf = (char *)&bb;
    int i;
    bb = *(struct b52 *)(0x0C240C84 + 52 * idx);
    for (i = 0; i < 3; i++)
        buf[40 + i] = *(char *)(0x0C5421F8 + 214 + idx * 4 + i);
    return FUN_0c04882c(0, (int)buf);
}

void FUN_0c0fa5dc(void)
{
    unsigned i = 0;
    do {
        CP12(0x0C28E61C + i, 0x0C28E634 + i);
        i += 12;
    } while (i < 24);
}

void FUN_0c0f5dc4(void)
{
    unsigned i = 0;
    do {
        CP12(0x0C540978 + 0x6F0 + i, 0x0C1CE4C8 + 48 * *(char *)(0x0C5421F8 + 68) + i);
        i += 12;
    } while (i < 48);
}

int FUN_0c05fa10(void);
int FUN_0c177450(void);
int FUN_0c02d854(void);
int FUN_0c2b3a98(void);

int FUN_0c02d88a(void)
{
    *(int *)0x0C46E1D8 = 0;
    while (FUN_0c05fa10() == 0)
        FUN_0c177450();
    FUN_0c02d854();
    return FUN_0c2b3a98();
}

int FUN_0c0c2d56(int, int, int);
int FUN_0c0c2ab6(int, int);

void FUN_0c0d52aa(int p, int src, int v)
{
    int state = *(char *)(p + 21);
    if (state == 0) {
        *(short *)(p + 28) = 300;
        *(char *)(p + 0xA8) = 0;
        CP12(p + 40, src);
        *(int *)(p + 56) = v;
        *(char *)(p + 21) += 1;
        *(int *)(p + 0xA4) = 0;
        *(int *)(p + 60) = 0;
        *(int *)(p + 52) = 0;
        *(short *)(p + 0x12E) = 0;
    } else if (state != 1) {
        return;
    }
    {
        short t = *(short *)(p + 28) - 1;
        *(short *)(p + 28) = t;
        if (t > 0) return;
        FUN_0c0c2d56(p, 0, *(char *)(p + 1));
        FUN_0c0c2ab6(p, *(char *)(0x0C2738CA + *(unsigned char *)(p + 0x41C) * 52));
        *(short *)(p + 0x12E) = 0;
    }
}

void FUN_0c0d7898(int p, int src, int v)
{
    int state = *(char *)(p + 21);
    if (state == 0) {
        *(short *)(p + 28) = 300;
        *(char *)(p + 0xA8) = 0;
        CP12(p + 40, src);
        *(int *)(p + 56) = v;
        *(char *)(p + 21) += 1;
        *(int *)(p + 60) = 0;
        *(int *)(p + 52) = 0;
        *(int *)(p + 0xA4) = 0;
        FUN_0c0c2ab6(p, *(char *)(0x0C2738CA + *(unsigned char *)(p + 0x41C) * 52));
        *(short *)(p + 0x12A) = 0;
        *(short *)(p + 0x12C) = 0;
        *(short *)(p + 0x12E) = 0;
    } else if (state != 1) {
        return;
    }
    {
        short t = *(short *)(p + 28) - 1;
        *(short *)(p + 28) = t;
        if (t > 0) return;
        FUN_0c0c2d56(p, 0, *(char *)(p + 1));
        *(char *)(p + 0xA8) = 0;
        *(short *)(p + 0x12A) = 0;
        *(short *)(p + 0x12C) = 0;
        *(short *)(p + 0x12E) = 0;
        *(short *)(p + 28) = 60;
    }
}

float math_sin_angle16(int);
float math_cos_angle16(int);
int thunk_FUN_0c058310(int, int);

void FUN_0c133f70(int obj)
{
    float frame[4];
    int link = *(int *)(obj + 16);
    float yaw_sin, yaw_cos;
    int yaw;
    *(int *)&frame[0] = link;
    thunk_FUN_0c058310(*(int *)(0x0C53256C + *(signed char *)(link + 1) * 0x3938) + 40, (int)&frame[1]);
    frame[2] = frame[2] + 50.0f;
    *(int *)(obj + 56) = *(int *)(obj + 56) + 0x400;
    yaw = *(int *)(obj + 56) & 0xFFFF;
    *(int *)(obj + 56) = yaw;
    frame[1] = frame[1] + 120.0f * math_sin_angle16(yaw);
    frame[3] = frame[3] + 120.0f * math_cos_angle16(*(int *)(obj + 56));
    *(float *)(obj + 40) = *(float *)(obj + 40) + (frame[1] - *(float *)(obj + 40)) / 20.0f;
    *(float *)(obj + 44) = *(float *)(obj + 44) + (frame[2] - *(float *)(obj + 44)) / 20.0f;
    *(float *)(obj + 48) = *(float *)(obj + 48) + (frame[3] - *(float *)(obj + 48)) / 20.0f;
}

void FUN_0c134036(int obj)
{
    float frame[4];
    int link = *(int *)(obj + 16);
    int yaw;
    *(int *)&frame[0] = link;
    thunk_FUN_0c058310(*(int *)(0x0C53256C + *(signed char *)(link + 1) * 0x3938) + 40, (int)&frame[1]);
    *(int *)(obj + 56) = *(int *)(obj + 56) + 0x400;
    yaw = *(int *)(obj + 56) & 0xFFFF;
    *(int *)(obj + 56) = yaw;
    frame[1] = frame[1] + 100.0f * math_sin_angle16(yaw);
    frame[3] = frame[3] + 100.0f * math_cos_angle16(*(int *)(obj + 56));
    *(float *)(obj + 40) = *(float *)(obj + 40) + (frame[1] - *(float *)(obj + 40)) / 20.0f;
    *(float *)(obj + 44) = *(float *)(obj + 44) + (frame[2] - *(float *)(obj + 44)) / 20.0f;
    *(float *)(obj + 48) = *(float *)(obj + 48) + (frame[3] - *(float *)(obj + 48)) / 20.0f;
}

int FUN_0c179ac0(void);

static int mod4(int x)   /* signed x % 4 without the compiler's helper call */
{
    return x >= 0 ? (x & 3) : -((-x) & 3);
}

void FUN_0c0f5704(void)
{
    int perm[4];
    int i;
    for (i = 0; i < 4; i++)
        perm[i] = i;
    for (i = 10; i != 0; i--) {
        int a = mod4(FUN_0c179ac0());
        int b = mod4(FUN_0c179ac0());
        int t = perm[b];
        perm[b] = perm[a];
        perm[a] = t;
    }
    {
        int *p = perm;
        int off = 0;
        do {
            p++;       /* the callee reads the chosen slot through its own registers */
            CP12(0x0C532498 + p[-1] * 0x3938 + 40, 0x0C540978 + 0x6F0 + off);
            off += 12;
        } while (p < perm + 4);
    }
}

struct blk40 { unsigned short h[20]; };

void FUN_0c0678a4(int slot)
{
    struct blk40 snapblk;
    unsigned short *snap = snapblk.h;
    int pl = 0x0C532498 + slot * 0x3938;
    int row, i;
    int *mask;
    int *val = (int *)0x0C1C5B54;
    signed char *vtab = (signed char *)0x0C1C5B74;
    signed char *sel;

    snapblk = *(struct blk40 *)(pl + 0x41C);   /* 40-byte struct copy (SHC block-move helper) */
    *(unsigned short *)(pl + 0x42C) &= 0xFC33;
    *(unsigned short *)(pl + 0x42E) &= 0xFC33;
    *(unsigned short *)(pl + 0x430) &= 0xFC33;
    *(unsigned short *)(pl + 0x432) &= 0xFC33;
    *(char *)(pl + 0x374C) = 0;
    row = (*(char *)(pl + 0x420) == 2) ? 1 : 0;
    mask = (int *)(0x0C1C5B1C + 28 * row);
    sel = (signed char *)(0x0C5429C8 + 8 + 14 * slot + row);
    for (i = 0; i < 7; i++) {
        if (snap[8] & mask[i])
            *(unsigned short *)(pl + 0x42C) |= val[sel[2 * i]];
        if (snap[9] & mask[i])
            *(unsigned short *)(pl + 0x42E) |= val[sel[2 * i]];
        if (snap[10] & mask[i]) {
            *(unsigned short *)(pl + 0x430) |= val[sel[2 * i]];
            *(char *)(pl + 0x374C) |= vtab[sel[2 * i]];
        }
        if (snap[11] & mask[i])
            *(unsigned short *)(pl + 0x432) |= val[sel[2 * i]];
    }
}

int FUN_0c03f444(int, int, int);
int FUN_0c037498(int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c13e09e(void);

struct blk48 { float f[12]; };

void FUN_0c13e124(int obj)
{
    struct blk48 offs;
    int e, n, i;
    offs = *(struct blk48 *)0x0C202190;      /* 48-byte struct copy */
    n = 4;
    e = FUN_0c03f444(5, 0, 4);
    if (e == 0)
        return;
    *(char *)(e + 1) = *(char *)(obj + 1);
    CP12(e + 40, obj + 40);
    *(char *)(e + 2) = *(char *)(obj + 2);
    *(int *)(e + 4) = (int)FUN_0c13e09e;
    *(int *)(e + 16) = obj;
    *(float *)(e + 72) = 2.0f;
    *(float *)(e + 68) = 2.0f;
    *(float *)(e + 64) = 2.0f;
    *(char *)(e + 168) = 1;
    *(short *)(e + 172) = 49;
    *(char *)(e + 169) = 33;
    for (i = 0; i < n; i++) {
        int q;
        *(char *)(e + 0x41C + i) = FUN_0c179ac0() % 3;
        FUN_0c037498(*(int *)(e + 0xC4 + 4 * i), *(char *)(e + 0x41C + i), 19, *(int *)0x0C4B40CC);
        q = *(int *)(e + 0xC4 + 4 * i);
        *(char *)q = 1;
        *(short *)(q + 6) = 15;
        math_vec3_accumulate(*(int *)(e + 0xC4 + 4 * i) + 108, (int)&offs.f[3 * i]);
        q = *(int *)(e + 0xC4 + 4 * i);
        *(float *)(q + 112) = *(float *)(q + 112) + (float)(FUN_0c179ac0() % 51 - 25);
    }
}

int ADXSJD_GetCof(int);
int pdGetPeripheral(int);
int FUN_0c03023e(int, int);
int FUN_0c030110(int, int, int);

struct padrec { char b[40]; };

void FUN_0c02feb4(void)
{
    int i;
    for (i = 0; i < 4; i++) {
        int rec = 0x0C542764 + 40 * i;
        int pd, a = 0, b = 0;
        *(short *)(rec + 12) = 0;
        *(short *)(rec + 14) = 0;
        pd = pdGetPeripheral(*(int *)(0x0C20EA94 + 4 * i));
        if ((*(int *)(pd + 4) & 0x6FE) == 0x6FE) {
            *(char *)(rec + 4) = ((*(int *)(pd + 4) & 0x101) == 0x101) ? 2 : 1;
            switch (i) {
            case 0: a = ADXSJD_GetCof(1);  b = ADXSJD_GetCof(2);  break;
            case 1: a = ADXSJD_GetCof(7);  b = ADXSJD_GetCof(8);  break;
            case 2: a = ADXSJD_GetCof(13); b = ADXSJD_GetCof(14); break;
            case 3: a = ADXSJD_GetCof(19); b = ADXSJD_GetCof(20); break;
            }
            *(char *)(rec + 5) = 0;
            if (*(int *)a == 14) *(char *)(rec + 5) |= 1;
            if (*(int *)a & 0x100) *(char *)(rec + 5) |= 2;
            *(char *)(rec + 6) = 0;
            if (*(int *)b == 14) *(char *)(rec + 6) |= 1;
            if (*(int *)b & 0x100) *(char *)(rec + 6) |= 2;
            *(int *)rec = 1;
            *(short *)(rec + 18) = *(short *)(rec + 16);
            *(short *)(rec + 26) = *(short *)(rec + 24);
            *(short *)(rec + 34) = *(short *)(rec + 32);
            *(short *)(rec + 16) = 0;
            FUN_0c03023e(rec + 16, pd);
            *(short *)(rec + 24) = *(short *)(rec + 16);
            *(short *)(rec + 32) = *(short *)(rec + 16);
            *(unsigned short *)(rec + 32) &= 0xC3FF;
            if (*(int *)(pd + 4) & 0xC0000)
                FUN_0c030110(rec, *(short *)(pd + 28), *(short *)(pd + 30));
            *(unsigned short *)(rec + 20) = *(unsigned short *)(rec + 16) & ~*(unsigned short *)(rec + 18);
            *(unsigned short *)(rec + 22) = *(unsigned short *)(rec + 18) & ~*(unsigned short *)(rec + 16);
            *(unsigned short *)(rec + 28) = *(unsigned short *)(rec + 24) & ~*(unsigned short *)(rec + 26);
            *(unsigned short *)(rec + 30) = *(unsigned short *)(rec + 26) & ~*(unsigned short *)(rec + 24);
            *(unsigned short *)(rec + 36) = *(unsigned short *)(rec + 32) & ~*(unsigned short *)(rec + 34);
            *(unsigned short *)(rec + 38) = *(unsigned short *)(rec + 34) & ~*(unsigned short *)(rec + 32);
        } else {
            *(int *)rec = 0;
            *(char *)(rec + 4) = 0;
            *(short *)(rec + 22) = 0;
            *(short *)(rec + 20) = 0;
            *(short *)(rec + 16) = 0;
            *(short *)(rec + 18) = 0;
            *(short *)(rec + 30) = 0;
            *(short *)(rec + 28) = 0;
            *(short *)(rec + 24) = 0;
            *(short *)(rec + 26) = 0;
            *(short *)(rec + 38) = 0;
            *(short *)(rec + 36) = 0;
            *(short *)(rec + 32) = 0;
            *(short *)(rec + 34) = 0;
        }
    }
    for (i = 0; i < 4; i++)
        *(struct padrec *)(0x0C5426C4 + 40 * i) = *(struct padrec *)(0x0C542764 + 40 * i);
}

int FUN_0c085cac(int, int, int, int);

void FUN_0c0dc7e8(int mode)
{
    int perm[4];
    int i;
    int *p;
    for (i = 0; i < 4; i++)
        perm[i] = i;
    for (i = 10; i != 0; i--) {
        int a = mod4(FUN_0c179ac0());
        int b = mod4(FUN_0c179ac0());
        int t = perm[b];
        perm[b] = perm[a];
        perm[a] = t;
    }
    for (p = perm; p < perm + 4; p++)
        CP12(0x0C532498 + *p * 0x3938 + 40, 0x0C540978 + 0x6F0 + 12 * (p - perm));
    if (mode == 1) {
        short *tab = (short *)0x0C1C992C;
        for (p = perm; p < perm + 4; p++, tab++) {
            int pl = 0x0C532498 + *p * 0x3938;
            if (*(char *)(pl + 0x3714) != 0) {
                *(float *)(pl + 44) = *(float *)(pl + 44) + 1600.0f;
                *(float *)(pl + 40) = *(float *)(pl + 40) - 1200.0f;
                FUN_0c085cac(pl, 23, 13, (int)perm);
                *(short *)(pl + 28) = *tab;
                *(float *)(pl + 80) = 0.0f;
                *(float *)(pl + 92) = -2.0f;
            }
        }
    }
}

int FUN_0c0582de(int, int);
int FUN_0c058b06(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
struct blk16 { int w[4]; };

void FUN_0c13a990(int p)
{
    float v[3];
    int mode;
    CP12(v, 0x0C2A1EAC + 12 * *(char *)(p + 2));
    FUN_0c0582de((int)v, *(int *)(0x0C532560 + *(char *)(p + 1) * 0x3938) + 40);
    CP12(p + 40, v);
    mode = *(char *)(p + 20);
    if (mode == 0) {
        *(char *)(p + 20) += 1;
        FUN_0c03744a(*(int *)(p + 196), 0, 10, ((int *)0x0C4B40FC)[*(char *)(p + 1)]);
        FUN_0c03744a(*(int *)(p + 200), 1, 10, ((int *)0x0C4B40FC)[*(char *)(p + 1)]);
        *(char *)(p + 168) = 1;
        *(short *)(p + 172) = 15;
        *(char *)*(int *)(p + 196) = 1;
        *(short *)(*(int *)(p + 196) + 6) = 543;
        CP12(*(int *)(p + 196) + 132, 0x0C2A1F64);
        *(struct blk16 *)(*(int *)(p + 196) + 20) = *(struct blk16 *)0x0C2A1E9C;
        *(char *)*(int *)(p + 200) = 1;
        *(short *)(*(int *)(p + 200) + 6) = 543;
        CP12(*(int *)(p + 200) + 132, 0x0C2A1F64);
        *(struct blk16 *)(*(int *)(p + 200) + 20) = *(struct blk16 *)0x0C2A1E9C;
        CP12(v, 0x0C2A1E74);
        v[2] = v[2] - 8.0f;
        FUN_0c058b06(p + 76, p + 52, (int)v);
    } else if (mode == 1) {
        short s = *(short *)(p + 28);
        if (!(s > 20))
            FUN_0c0588bc(*(int *)(p + 196) + 132, 0x0C2A1F64 + 12, 0x0C2A1F64, s, 20, 0);
        s = *(short *)(p + 28);
        if (s >= 0 && s <= 20)
            FUN_0c058a6e(*(int *)(p + 196) + 20, 0x0C2A1F7C + 16, 0x0C2A1F7C, s, 20, 0);
        if (*(short *)(p + 28) > 20)
            *(float *)(*(int *)(p + 196) + 116) = *(float *)(*(int *)(p + 196) + 116) - 0.1f;
        FUN_0c0588bc(*(int *)(p + 200) + 132, 0x0C2A1F64 + 12, 0x0C2A1F64, *(short *)(p + 28), 40, 0);
        *(float *)(*(int *)(p + 200) + 116) = *(float *)(*(int *)(p + 200) + 116) - 3.0f;
        if (*(short *)(p + 28) >= 32)
            FUN_0c058a6e(*(int *)(p + 200) + 20, 0x0C2A1F7C + 16, 0x0C2A1F7C, *(short *)(p + 28), 40, 32);
        *(short *)(p + 28) = *(short *)(p + 28) + 1;
        if (*(short *)(p + 28) > 40)
            *(char *)(p + 20) += 1;
    } else {
        FUN_0c03f346(p);
    }
}

int FUN_0c13a758(int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);

void FUN_0c13a36c(int p)
{
    int state = *(char *)(p + 20);
    float v[3];
    int k = 0x1800;
    short s;

    if (state == 0) {
        *(char *)(p + 20) += 1;
        FUN_0c03744a(*(int *)(p + 196), 0, 5, ((int *)0x0C4B40FC)[*(char *)(p + 1)]);
        FUN_0c03744a(*(int *)(p + 200), 1, 5, ((int *)0x0C4B40FC)[*(char *)(p + 1)]);
        *(char *)(p + 168) = 1;
        *(short *)(p + 172) = 15;
        *(char *)*(int *)(p + 196) = 1;
        *(short *)(*(int *)(p + 196) + 6) = 31;
        CP12(*(int *)(p + 196) + 132, 0x0C2A1E74);
        *(char *)*(int *)(p + 200) = 1;
        *(short *)(*(int *)(p + 200) + 6) = 31;
        CP12(*(int *)(p + 200) + 132, 0x0C2A1E80);
        *(float *)(*(int *)(p + 200) + 140) = 0.0f;
        CP12(v, 0x0C2A1E74);
        v[2] = v[2] + 20.0f;
        FUN_0c058b06(p + 76, p + 52, (int)v);
        CP12(p + 64, 0x0C2A1E80);
        FUN_0c07e2f4(p, 52);
        FUN_0c064d24(p, 1, 67, 0, 256, ~(1 << *(char *)(p + 1)), 0, 240);
        return;
    }
    if (state == 1) {
        if (*(char *)(p + 0x131) != 0 || *(int *)(p + 0x404) != 0) {
            *(char *)(p + 20) += 1;
            return;
        }
        *(int *)(*(int *)(p + 196) + 128) += k;
        if (*(short *)(p + 28) < 8)
            FUN_0c0588bc(*(int *)(p + 196) + 132, 0x0C2A1E80, 0x0C2A1E74, *(short *)(p + 28), 8, 0);
        if (*(short *)(p + 28) > 10) {
            if (*(short *)(p + 28) % 7 == 0)
                FUN_0c13a758(*(char *)(p + 1), p + 40, p + 52);
        }
        if (*(short *)(p + 28) < 40)
            *(float *)(*(int *)(p + 200) + 140) = *(float *)(*(int *)(p + 200) + 140) + 0.025f;
        *(short *)(p + 28) = *(short *)(p + 28) + 1;
        if (*(short *)(p + 28) > 40)
            *(char *)(p + 20) += 1;
        math_vec3_accumulate(p + 40, p + 76);
        return;
    }
    if (state == 2) {
        *(char *)(p + 20) += 1;
        *(short *)(p + 28) = 0;
        state = 3;
    }
    if (state == 3) {
        *(int *)(*(int *)(p + 196) + 128) += k;
        s = *(short *)(p + 28);
        if (s < 8) {
            if (*(short *)(p + 28) == 0)
                CP12(p + 88, *(int *)(p + 196) + 132);
            FUN_0c0588bc(*(int *)(p + 196) + 132, 0x0C2A1E74, p + 88, *(short *)(p + 28), 8, 0);
        }
        if (*(short *)(p + 28) < 10) {
            if (*(short *)(p + 28) == 0)
                *(float *)(p + 84) = -*(float *)(*(int *)(p + 200) + 140) / 10.0f;
            *(float *)(*(int *)(p + 200) + 140) = *(float *)(*(int *)(p + 200) + 140) + *(float *)(p + 84);
        }
        *(short *)(p + 28) = *(short *)(p + 28) + 1;
        if (*(short *)(p + 28) >= 10)
            *(char *)(p + 20) += 1;
        return;
    }
    FUN_0c03f346(p);
}
