/* Straight-line functions with calls and guards (batch gen_md): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c130e70(int a4, int a5, int a6);

/* manual: FUN_0c130e70(a4, a5, a6) spawns an effect object of kind a6 (0-4) at the 12-byte position a5 and returns a
   per-kind code (0 when none was made). Kinds 0-3 differ only in constants (pool kind 5/6/7/9, update function, flag word,
   a height added to y, life, whether a4 is stored), kind 4 sets up two sub-objects. The original (962 bytes, built without
   optimisation) wrote each kind out; this is one body. Proven Equivalent on 128 cases (92 by hand: every kind, counts -1..5, no object, a4 byte -1/0/5), 445 of 445 instructions. */
int FUN_0c130e70(int a4, int a5, int a6)
{
    int kind, cb, ac, life, n, o, i, p, ret, own;
    float add;

    own = 1;
    add = 100.0f;
    ret = 0;
    switch (a6) {
    case 0: kind = 5; cb = 0xC130A4C; ac = 0x3F; add = 150.0f; life = 0x1E; own = 0; break;
    case 1: kind = 6; cb = 0xC130ACC; ac = 0x3F; life = 0x12C; ret = life; break;
    case 2: kind = 7; cb = 0xC130C02; ac = 15; life = 0x12C; ret = life; break;
    case 3: kind = 9; cb = 0xC130CF6; ac = 0x1F; add = 0.0f; life = 10; ret = life; break;
    case 4: kind = 1; cb = 0xC130D50; ac = 15; life = 0x19; ret = life; break;
    default: return a6;
    }
    n = FUN_0c037320(kind, *(int *)(0xC4B40FC + (*(signed char *)(a4 + 1) << 2)));
    o = FUN_0c03f444(5, 0, n);
    if (o == 0) return 0;
    FUN_0c03733c(o, kind, *(int *)(0xC4B40FC + (*(signed char *)(a4 + 1) << 2)));
    if (a6 == 4) {
        p = *(int *)(o + 0xC4);
        *(unsigned char *)p = 1;
        *(unsigned short *)(p + 6) = 15;
        *(float *)(p + 0x8C) = 3.0f;
        *(float *)(p + 0x88) = 3.0f;
        *(float *)(p + 0x84) = 3.0f;
        p = *(int *)(o + 0xC8);
        *(unsigned char *)p = 1;
        *(unsigned short *)(p + 6) = 0x1F;
        *(float *)(p + 0x8C) = 0.100000001f;
        *(float *)(p + 0x84) = 0.100000001f;
        *(float *)(p + 0x88) = 1.0f;
    } else {
        for (i = 0; i < n; i++) {
            p = *(int *)(o + 0xC4 + i * 4);
            *(unsigned char *)p = 1;
            *(unsigned short *)(p + 6) = 15;
            *(float *)(p + 0x8C) = 1.0f;
            *(float *)(p + 0x88) = 1.0f;
            *(float *)(p + 0x84) = 1.0f;
        }
    }
    *(unsigned char *)(o + 1) = *(signed char *)(a4 + 1);
    *(unsigned char *)(o + 2) = a6;
    *(unsigned int *)(o + 4) = cb;
    *(unsigned char *)(o + 0xA8) = 1;
    *(unsigned short *)(o + 0xAC) = ac;
    *(unsigned char *)(o + 0xA9) = 0x21;
    *(float *)(o + 0x48) = 0.0f;
    *(float *)(o + 0x44) = 0.0f;
    *(float *)(o + 0x40) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(o + 0x28) = *(struct mv3 *)a5; }
    if (add != 0.0f) *(float *)(o + 0x2C) = *(float *)(o + 0x2C) + add;
    if (own) *(unsigned int *)(o + 0x10) = a4;
    *(unsigned short *)(o + 0x1C) = life;
    if (!own) *(unsigned short *)(o + 0x1E) = 0;
    return ret;
}
