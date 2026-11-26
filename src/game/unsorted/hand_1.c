/* @runtime _quick_odd_mvn=0C187798 */
typedef struct { int w[3]; } V12;
typedef struct { int w[4]; } V16;

/* hand-written C for functions the generator could not prove (slice 1) */

int FUN_0c2b12fa(int);
int FUN_0c02feb4(int);
int FUN_0c05b4e4(int);
int buLoadFileEx(int, int, int, int, int);
int FUN_0c070320(int);
int FUN_0c037bf6(int);
int FUN_0c085d0c(int);
int FUN_0c0283c4(int, int);

/* 0c05d602 */

/* 0c02d930 */
int FUN_0c02d930(int a)
{
    FUN_0c2b12fa(a);
    FUN_0c02feb4(a);
    return FUN_0c05b4e4(a);
}

/* 0c03c1d4 */
int vmu_load_vmgame_data(int a)
{
    return buLoadFileEx(a, 0x0C1B71F8, 0x0C3CC420, 5, 1);
}

/* 0c0a34ea */
int pl_falcon_special_move_dispatch(int p)
{
    int (**tab)(int) = (int (**)(int))0x0C25D2AC;
    return tab[*(char *)(p + 0x3733)](p);
}

/* 0c09e366 */
int FUN_0c090e12(int a)
{
    FUN_0c070320(a);
    if ((FUN_0c037bf6(a) & 0xff) != 0)
        return FUN_0c085d0c(a);
    return 0;
}

/* 0c0581c4 */

int gdFsReqDrvStat(int);
int gdFsGetSysHn(int);
int gdFsGetStat(int);
int gdFsGetDrvStat(int);
int FUN_0c187798(int, int, int);
int FUN_0c18778c(int, int, int);

/* 0c02d176 */
int FUN_0c06148a(void)
{
    int *cnt = (int *)0x0C33A84C;
    int *state = (int *)0x0C33A844;
    int r;
    int n = *cnt + 1;

    *cnt = n;
    if (n <= 0)
        return 0;
    *cnt = 0;
    if (*state == 0) {
        if (gdFsReqDrvStat((int)cnt) == 0)
            *state = 1;
        return 0;
    }
    *(int *)0x0C33A840 = gdFsGetSysHn((int)cnt);
    r = gdFsGetStat(*(int *)0x0C33A840);
    if (r != 4)
        *state = 0;
    r = gdFsGetDrvStat(r);
    if (r == 6 || r == 7) {
        *(int *)0x0C31F2A8 = 1;
        return 1;
    }
    return 0;
}

/* 0c0d6106: four 12-byte struct copies */
void FUN_0c0d6106(void)
{
    int i;
    int b = *(signed char *)(0x0C5421F8 + 68);
    for (i = 0; i < 48; i += 12)
        *(V12 *)(0x0C540978 + 0x6F0 + i) = *(V12 *)(0x0C1C94D4 + b * 48 + i);
}

/* 0c0f1a68 */
void FUN_0c0f1a68(int n)
{
    int i;
    for (i = 0; i < 48; i += 12)
        *(V12 *)(0x0C540978 + 0x6F0 + i) = *(V12 *)(0x0C1CD6FC + n * 48 + i);
}

int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c05f22c(int);

/* 0c10bdfc: state machine on byte 22; state 2 ends in a jump to 0c10b7ac (code outside any listed function) */
struct st22 { char pad[22]; signed char st; };

int FUN_0c10bdfc(struct st22 *o)
{
    int r = 0;
    if (o->st == 0) {
        FUN_0c117944(104);
        o->st++;
        r = 22;
    } else if (o->st == 1) {
        r = FUN_0c117d54();
        if (r < 0) {
            FUN_0c117e76();
            o->st++;
            r = 22;
        }
    } else if (o->st == 2) {
        if (FUN_0c05f22c(0x3FCF) != 0)
            return ((int (*)(struct st22 *))0x0C10B7AC)(o);
    } else {
        r = o->st;
    }
    return r;
}

int FUN_0c064f8e(int, int);
float FUN_0c064d9c(int);
int FUN_0c0655dc(int, int, int, int, float, int);

/* 0c065b96: the two FUN_0c187798 calls are the compiler's struct copies (r0 size, r1 dst, r2 src) into unused locals */
int FUN_0c065b96(char *obj, int a5, int a6, int a7, float thr)
{
    int s[17];
    int *node;
    float d;

    s[0] = a5;
    s[1] = a6;
    s[2] = a7;
    *(V12 *)(s + 6) = *(V12 *)0x0C1C4BB4;
    *(V12 *)(s + 3) = *(V12 *)0x0C1C4BC0;
    node = *(int **)(obj + 0x404);
    if (FUN_0c064f8e((int)obj, (int)(s + 9)) == 0)
        return 0;
    for (; node != 0; node = (int *)*node) {
        char *e = (char *)node[1];
        int w = node[2];
        if (e != 0) {
            if (*e == 0)
                continue;
            if (*(short *)(e + 0x128) == 0x800)
                continue;
        }
        d = FUN_0c064d9c(w) - *(float *)(obj + 44);
        if (d > thr) {
            if (FUN_0c0655dc(s[0], s[1], (int)(s + 9), w, d, s[2]) != 0)
                return 1;
        }
    }
    return 0;
}

int FUN_0c037320(int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c03733c(int, int, int);

/* 0c143dd8: the last two FUN_0c187798 calls are struct copies (r0 12, r1 dst, r2 src); r4-r6 hold the loop's leftovers */
void FUN_0c143dd8(char *obj)
{
    int n, i, e, q, off;
    char *p;
    int *tab = (int *)0x0C4B40E0;

    n = FUN_0c037320(13, tab[obj[1] * 2]);
    e = FUN_0c03f444(5, 0, n);
    if (e == 0)
        return;
    FUN_0c03733c(e, 13, tab[obj[1] * 2]);
    q = 0;
    off = 0;
    i = 0;
    if (n > 0) {
        do {
            q = *(int *)(e + 0xC4 + off);
            *(float *)(q + 0x8C) = 0.0f;
            *(float *)(q + 0x88) = 0.0f;
            *(float *)(q + 0x84) = 0.0f;
            *(short *)(q + 6) = 31;
            i++;
            off += 4;
        } while (i < n);
    }
    p = (char *)e;
    *(int *)(p + 4) = 0x0C143E8C;
    p[1] = obj[1];
    *(short *)(p + 0xAC) = 15;
    p[0xA9] = obj[0xA9];
    *(int *)(p + 0xA4) = *(int *)(obj + 0xD4) + 40;
    *(int *)(p + 16) = (int)obj;
    *(V12 *)(p + 40) = *(V12 *)0x0C202714;
    *(V12 *)(p + 52) = *(V12 *)0x0C202720;
}

int FUN_0c03f346(int, int);

#define FLD_F(o, off) (*(float *)((o) + (off)))
#define FLD_I(o, off) (*(int *)((o) + (off)))

/* 0c0d827e: effect with a state byte at 20 (0 and 1 fall through into 2; other values run the last block); the two
   FUN_0c187798 calls are struct copies of 12 bytes (r1 dst, r2 src) with r4-r6 as leftovers */
void FUN_0c0d827e(char *o)
{
    int *tab = (int *)0x0C2877D8;
    int *p;
    int st = o[20];

    if (st == 0 || st == 1 || st == 2) {
        if (st == 0) {
            o[0xA8] = 1;
            *(V12 *)(o + 76) = *(V12 *)(0x0C2876AC + o[2] * 12);
            *(V12 *)(o + 88) = *(V12 *)0x0C2877CC;
            o[20]++;
        }
        if (st <= 1) {
            *(short *)(o + 28) = 40;
            o[20]++;
        }
        FLD_F(o, 40) += FLD_F(o, 76);
        FLD_F(o, 76) += FLD_F(o, 88);
        FLD_F(o, 44) += FLD_F(o, 80);
        FLD_F(o, 80) += FLD_F(o, 92);
        p = tab + o[2] * 3;
        FLD_I(o, 52) += p[0];
        FLD_I(o, 56) += p[1];
        FLD_I(o, 60) += p[2];
        *(short *)(o + 28) -= 1;
        if (*(short *)(o + 28) == 0) {
            *(short *)(o + 0xAC) = 0x40F;
            FLD_F(o, 0xB0) = 1.0f;
            *(short *)(o + 28) = 20;
            o[20]++;
        }
        return;
    }
    FLD_F(o, 40) += FLD_F(o, 76);
    FLD_F(o, 76) += FLD_F(o, 88);
    FLD_F(o, 44) += FLD_F(o, 80);
    FLD_F(o, 80) += FLD_F(o, 92);
    p = tab + o[2] * 3;
    FLD_I(o, 52) += p[0];
    FLD_I(o, 56) += p[1];
    FLD_I(o, 60) += p[2];
    FLD_F(o, 0xB0) -= 0.05f;
    *(short *)(o + 28) -= 1;
    if (*(short *)(o + 28) == 0)
        FUN_0c03f346((int)o, (int)p);
}

int sys_vsync_handler_install(int, int, int);
int ADXF_Open(int, int);
int ADXF_GetFsizeSct(int);
int ADXF_GetFsizeByte(int);
void ADXF_ReadNw(int, int, int);
void ADXF_Stop(int);
void ADXF_Close(int);
void FUN_0c05b2b0(void);
void FUN_0c02d88a(void);
void FUN_0c05ac14(void);
int ADXF_GetStat(int);

/* 0c0100a2: file loader with wait for the frame counter. Only the early exits (open fails, too large) can be
   exercised in the simulator: the wait loop needs the frame counter to change by interrupt. */

int FUN_0c17c450(int);

/* 0c03e642 */
int FUN_0c03e642(int idx, int b, float *v, V16 *src, float f)
{
    char *o = (char *)(0x0C542460 + idx * 76);
    float one = 1.0f;
    o[0] = 1;
    o[1] = b;
    *(float *)(o + 48) = f;
    *(V16 *)(o + 28) = *src;
    *(float *)(o + 4) = -(v[0] * one);
    *(float *)(o + 8) = -(v[1] * one);
    *(float *)(o + 12) = -(v[2] * one);
    FUN_0c17c450((int)(o + 4));
    *(V12 *)(o + 16) = *(V12 *)(o + 4);
    *(float *)(o + 44) = one;
    return (int)o;
}

/* 0c17193c */
void FUN_0c17193c(int *q, int a5)
{
    V16 tab;
    tab = *(V16 *)0x0C204178;
    q[14] = tab.w[(signed char)a5];
    q[13] = 0;
    q[15] = 0;
}

void FUN_0c0c2ab6(char *, int);
void FUN_0c0c2d56(char *, int, int);

/* 0c0da9dc */
void FUN_0c0da9dc(char *o, V12 *src, int a6)
{
    int st = o[21];
    short *w;

    if (st == 0) {
        *(short *)(o + 28) = 0x12C;
        o[0xA8] = 0;
        *(V12 *)(o + 40) = *src;
        *(int *)(o + 56) = a6;
        o[21]++;
        *(int *)(o + 60) = 0;
        *(int *)(o + 52) = 0;
        *(int *)(o + 0xA4) = 0;
        FUN_0c0c2ab6(o, *(signed char *)(0x0C2738CA + (unsigned char)o[0x41C] * 52));
        w = (short *)(o + 0x12A);
        w[1] = 0;
        w[2] = 0;
        w[0] = 0;
    } else if (st != 1) {
        return;
    }
    *(short *)(o + 28) -= 1;
    if (*(short *)(o + 28) > 0)
        return;
    FUN_0c0c2d56(o, 0, o[1]);
    o[0xA8] = 0;
    w = (short *)(o + 0x12A);
    w[1] = 0;
    w[2] = 0;
    w[0] = 0;
    *(short *)(o + 28) = 60;
}

int nlRand(void);

/* 0c0f5dfc: shuffle 0..3 with 10 random swaps, then copy 12-byte blocks into each slot's record */
void FUN_0c0f5dfc(void)
{
    int a[4];
    int i, x, y, t;

    for (i = 0; i < 4; i++)
        a[i] = i;
    for (i = 0; i < 10; i++) {
        x = nlRand() % 4;
        y = nlRand() % 4;
        t = a[y];
        a[y] = a[x];
        a[x] = t;
    }
    for (i = 0; i < 4; i++)
        *(V12 *)(0x0C532498 + a[i] * 0x3938 + 40) = *(V12 *)(0x0C540978 + 0x6F0 + i * 12);
}

int FUN_0c03fd58(int, V12 *);

/* 0c041b58: for modes 1-3 the slots selected by the mask get a value (first id 3, 4 or 6, counting up per selected
   slot); any other mode fills slots 0.. with ids 9..12 */
void FUN_0c041b58(int mode, int mask)
{
    V12 buf;
    char *rec;
    int i, id, v;

    if (mode == 1 || mode == 2 || mode == 3) {
        id = (mode == 1) ? 3 : (mode == 2) ? 4 : 6;
        for (i = 0; i < 4; i++) {
            if (mask & (1 << i)) {
                v = FUN_0c03fd58(id, &buf);
                rec = (char *)(0x0C532498 + i * 0x3938);
                *(V12 *)(rec + 40) = buf;
                *(int *)(rec + 56) = v;
                if (mode != 1)
                    id++;
            }
        }
    } else {
        rec = (char *)0x0C532498;
        for (id = 9; id < 13; id++) {
            v = FUN_0c03fd58(id, &buf);
            *(V12 *)(rec + 40) = buf;
            *(int *)(rec + 56) = v;
            rec += 0x3938;
        }
    }
}

int FUN_0c021dda(void);
int FUN_0c18353e(int, int, int);
int FUN_0c183280(int);
int FUN_0c183480(int, int, int);
void FUN_0c01fce0(void);

/* 0c0206d6: serial packet queue: send queued packet bytes, receive 34-byte packets into a ring */
int FUN_0c0206d6(void)
{
    unsigned char *flag = (unsigned char *)0x0C30982B;
    unsigned char *rd = (unsigned char *)0x0C307581;
    unsigned char *wr = (unsigned char *)0x0C307580;
    unsigned char *rxn = (unsigned char *)0x0C3054C8;
    unsigned char *rxi = (unsigned char *)0x0C309584;
    signed char *errc = (signed char *)0x0C309829;
    short *tmo = (short *)0x0C30AC2A;
    int *handle = (int *)0x0C305430;
    int avail, i, n;
    char *p;

    if (*flag == 0) {
        FUN_0c021dda();
        if ((int)*wr != (int)*rd + 1) {
            *(short *)0x0C3054CA = *rd;
            *(V16 *)(0x0C305580 + *rd * 32) = *(V16 *)0x0C305560;
            *(V16 *)(0x0C305580 + *rd * 32 + 16) = *(V16 *)0x0C305570;
            for (i = 0; i < 8; i++) {
                ((short *)0x0C3054CC)[i] = ((short *)0x0C305560)[i];
                ((short *)0x0C3054DC)[i] = ((short *)0x0C305570)[i];
            }
            (*rd)++;
            p = (char *)0x0C3054CA;
            for (n = 0; n < 34; ) {
                if (FUN_0c18353e(*handle, (int)p, 1) != 0) {
                    p++;
                    n++;
                }
            }
        }
    }
    *flag = 0;
    avail = FUN_0c183280(*handle);
    while (*rxn < 34) {
        if (FUN_0c183480(*handle, 0x0C305514 + *rxn, 1) == 0)
            break;
        (*rxn)++;
    }
    for (;;) {
        if (*rxn == 34) {
            for (i = 0; i < 8; i++) {
                ((short *)(0x0C307584 + *rxi * 32))[i] = ((short *)(0x0C305514 + 2))[i];
                ((short *)(0x0C307584 + *rxi * 32 + 16))[i] = ((short *)(0x0C305514 + 18))[i];
            }
            (*rxi)++;
            *tmo = 0;
            *rxn = 0;
            if (*errc < 2)
                (*errc)++;
            avail -= 34;
        } else if (*errc > 1 && *wr == *rxi) {
            *flag = 1;
            if (*tmo > 900)
                FUN_0c01fce0();
            else
                *tmo = *tmo + 1;
            return 0;
        }
        if (avail >= 34) {
            while (*rxn < 34) {
                if (FUN_0c183480(*handle, 0x0C305514 + *rxn, 1) == 0)
                    break;
                (*rxn)++;
            }
            continue;
        }
        if (*rd == *wr)
            return 0;
        if (*wr == *rxi)
            return 0;
        if (*errc > 1)
            return 1;
        return 0;
    }
}
