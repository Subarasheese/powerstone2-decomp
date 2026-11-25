/* Straight-line functions with calls and guards (batch gen_od): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o3818_short { char p[0x3818]; short v; };
struct o8C_float { char p[0x8C]; float v; };
extern int FUN_0c03f346();
int FUN_0c07e3fc(int, int);
int FUN_0c0cacac(int a4, int a5, int a6, int a7);

/* manual: modes 0-5 of a4[2]: copy 3 vec3 from the record of the table at 0C532498 (index a4[1], mode 0: short at a4+0x1C), then test it per mode; hand cases, 359 of 361 instructions (2 dead: a signed byte is never 0xFF) */
int FUN_0c0cacac(int a4, int a5, int a6, int a7)
{
    int m = *(signed char *)(a4 + 0x2);
    int p, b, v;
    if ((unsigned)m > 5) return m;
    p = 0xC532498 + (short)(m == 0 ? *(short *)(a4 + 0x1C) : *(signed char *)(a4 + 0x1)) * (short)0x3938;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)(p + 0x28); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x4C) = *(struct mv3 *)(p + 0x4C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x34) = *(struct mv3 *)(p + 0x34); }
    if (m == 0) {
        if (*(signed char *)(p + 0x3715) != 32 || *(signed char *)(p + 0x3739) != 16 || *(short *)(p + 0x1C) != 0) goto fail;
        b = *(signed char *)(p + 0x3740);
        *(unsigned short *)(a4 + 0x12A) = *(short *)(a4 + 0x12A) & ~(1 << b);
        return 0x12A;
    }
    if (m >= 4) {
        v = *(short *)(p + 0x1E);
        *(unsigned short *)(p + 0x1E) = v + 1;
        if ((short)(v + 1) == 8) FUN_0c07e3fc(a4, m * 2 + 2);
    }
    if (*(signed char *)(p + 0x3715) != 7) goto fail;
    b = *(signed char *)(p + 0x3732);
    if (m == 1) {
        if (b == 10) return 10;
        goto fail;
    }
    if (b != (m < 4 ? 11 : 15)) goto fail;
    if (*(short *)(a4 + 0x1C) != (unsigned short)*(short *)(p + 0x3818)) goto fail;
    if (m == 3) return *(short *)(a4 + 0x1C);
    if (m == 2) {
        v = *(short *)(a4 + 0x1E) - 1;
        *(unsigned short *)(a4 + 0x1E) = v;
        if ((short)v > 0) return (short)v;
        goto fail;
    }
    if ((float)(m + 18) > *(float *)(*(int *)(p + 0x118) + 0x8C)) return 0x8C;
fail:
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
}
