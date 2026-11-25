/* Straight-line functions with calls and guards (batch gen_eh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c064f02(int);
int FUN_0c07d1fc(int);
int FUN_0c07e2f4(int, int);
int FUN_0c1297bc(int, int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlRand(void);
void FUN_0c12a3b8(int a4, int a5, int a6, int a7, float f4, float f5);
struct o10_int { char p[0x10]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct oC_int { char p[0xC]; int v; };


#define TAB ((float *)0xC2A0FE4)

struct mv3 { int w[3]; };
struct Ef {
    char p0[0x10]; char *parent; signed char st; char p15[7]; short ta; short tb; short n; short idx; char p24[4];
    float pos[3]; int a1; int a2; char p3c[4]; float s[3]; float v[3]; char p58[0x50]; unsigned char u; char pa9[0x1B];
    struct Gf *A; struct Gf *B; char pcc[0x5E]; unsigned short w[3]; char p130; unsigned char f;
};
struct Gf { char z; char p1[0x77]; int a78; char p7c[4]; int a80; float f[3]; };
struct Lf { char p0[4]; int fn; char p8[4]; struct Lf *next; };

/* manual: task state machine on byte o[0x14] (0-8): jitter/sin-cos/a80 blocks shared by goto; returns nothing (nobody reads r0); hand cases, 1246 of 1246 instructions */
void FUN_0c12a3b8(int a4, int a5, int a6, int a7, float f4, float f5)
{
    struct Ef *o = (struct Ef *)a4;
    struct Gf *A;
    struct Gf *B;
    float *tab;
    float q[3];
    float x, y, z, t;
    int i, j, k, m;
    struct Lf *p;
    int n;

    switch (o->st) {
    case 0:
        o->ta = 30;
        o->st++;
    case 1:
        if (*(signed char *)(o->parent + 0x3715) != 26) { o->st = 8; return; }
        if (--o->ta != 0) return;
        o->u = 1;
        FUN_0c07e2f4(a4, 99);
        FUN_0c059e60((int)o->parent, 33);
        for (k = 0; k < 2; k++)
            for (j = 1; j < 4; j++)
                FUN_0c1297bc(a4, j);
        o->ta = 240;
        o->tb = 80;
        o->n = 0;
        goto adv;
    case 2:
        if (*(signed char *)(o->parent + 0x3715) != 26) { o->st = 6; return; }
        *(struct mv3 *)o->pos = *(struct mv3 *)(o->parent + 0x28);
        o->pos[1] += 225.0f + 1000.0f * o->s[1];
        *(struct mv3 *)q = *(struct mv3 *)(o->parent + 0x380C);
        q[1] += o->s[1] * 1000.0f / (1.0f + 1.0f) + 0.0f;
        x = q[0] - o->pos[0];
        y = q[1] - o->pos[1];
        z = q[2] - o->pos[2];
        if (x == 0.0f) x = 9.99999997e-07f;
        if (y == 0.0f) y = 9.99999997e-07f;
        if (z == 0.0f) z = 9.99999997e-07f;
        i = math_atan_angle16(-z / x);
        if (0.0f > x) i += 0x8000;
        o->a2 = (unsigned short)(i + 0x4000);
        i = math_atan_angle16(-math_signed_sqrt(z * z + x * x) / y);
        if (0.0f > y) i += 0x8000;
        o->a1 = -(unsigned short)(i + 0x4000) + 0xB6;
        for (j = 0; j < 3; j++)
            o->s[j] += TAB[o->idx] / 2000.0f / 80.0f;
        m = 1;
        goto jb;
    p2:
        if (--o->tb != 0) return;
        tab = TAB + 4; k = 0;
        goto sc;
    case 3:
        o->A->a78 += 0xB6;
        m = 2;
        goto jb;
    p3:
        o->pos[0] += o->v[0];
        o->pos[1] -= o->v[1];
        o->pos[2] += o->v[2];
        if (o->f) {
            o->f = 0;
            tab = TAB + 8; k = 1;
            goto sc;
        }
    s3:
        if (o->ta % 8 == 0) {
            if (o->n >= 14) FUN_0c07e2f4(a4, 101);
            else {
                tab = TAB + 4; k = 2;
                goto sc;
            }
        }
    s4:
        if (!FUN_0c064f02(a4)) o->tb = 1;
        if (o->n != 14) {
            if (--o->ta != 0) {
                if (!FUN_0c064f02(a4)) return;
                if (o->tb == 0) return;
            }
        }
        o->ta = 60;
        goto adv;
    case 4:
        o->a1 += 0xB6;
        t = (float)(nlRand() % 100) / 1000.0f + -0.051f;
        x = o->s[2] + t;
        A = o->A; B = o->B;
        for (j = 0; j < 3; j++) { o->s[j] = x; B->f[j] = x; }
        m = 3;
        goto ab;
    p4a:
        x = o->s[2] - 0.01f;
        for (j = 0; j < 3; j++) o->s[j] = x;
        for (j = 0; j < 3; j++)
            A->f[j] = (float)(nlRand() % 100) / 1000.0f + -0.05f;
        m = 4;
        goto jb;
    p4b:
        if (--o->ta != 0 && !(0.1f > o->s[0])) return;
        B->z = 0;
        o->w[0] = 0; o->w[1] = 0; o->w[2] = 0;
        o->ta = 15;
        goto adv;
    case 5:
        B = o->B;
        for (j = 0; j < 3; j++) { o->s[j] += 0.2f; B->f[j] = o->s[j]; }
        m = 5;
        goto ab;
    p5:
        o->w[0] = 0; o->w[1] = 0; o->w[2] = 0;
        if (--o->ta != 0) return;
        o->st += 2;
        goto adv;
    case 6:
        o->a1 += 0xB6;
        x = o->s[2] - 0.005f;
        for (j = 0; j < 3; j++) o->s[j] = x;
        m = 6;
        goto jb;
    p6:
        if (!(0.0f > o->s[0])) return;
        o->A->z = 0;
        B->z = 0;
        o->w[0] = 0; o->w[1] = 0; o->w[2] = 0;
        o->ta = 90;
        goto adv;
    case 7:
        if (--o->ta != 0) return;
        goto adv;
    case 8:
        n = 0;
        j = a6;
        for (p = *(struct Lf **)0xC532438; p != 0; p = (struct Lf *)j) {
            j = (int)p->next;
            if (p->fn == 0xC12A3B8) n++;
        }
        if ((unsigned short)n == 1) FUN_0c059e60((int)o->parent, 34);
        FUN_0c03f346(a4, n, j, a7);
    default:
        return;
    }
jb:
    B = o->B;
    for (j = 0; j < 3; j++)
        B->f[j] = o->s[j] + (float)(nlRand() % 100) / 1000.0f + -0.05f;
ab:
    B = o->B;
    B->a80 += (int)((float)(nlRand() % 17) * 65536.0f / 360.0f);
    switch (m) {
    case 1: goto p2;
    case 2: goto p3;
    case 3: goto p4a;
    case 4: goto p4b;
    case 5: goto p5;
    default: goto p6;
    }
sc:
    t = tab[o->idx];
    o->v[0] = t * math_sin_angle16(0x14000 - o->a1) * math_cos_angle16(0x14000 - o->a2);
    t = tab[o->idx];
    o->v[1] = t * math_cos_angle16(0x14000 - o->a1);
    t = tab[o->idx];
    o->v[2] = t * math_sin_angle16(0x14000 - o->a1) * math_sin_angle16(0x14000 - o->a2);
    if (k == 1) {
        if ((signed char)FUN_0c07d1fc(a4)) o->n++;
        goto s3;
    }
    if (k == 2) {
        FUN_0c07e2f4(a4, o->ta % 16 ? 100 : 99);
        goto s4;
    }
    o->tb = FUN_0c064f02(a4) ? 0 : 1;
    o->f = 0;
adv:
    o->st++;
}
