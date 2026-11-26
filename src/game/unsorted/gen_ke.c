/* Straight-line functions with calls and guards (batch gen_ke): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o108_int { char p[0x108]; int v; };
struct o10C_int { char p[0x10C]; int v; };
struct o110_int { char p[0x110]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05f22c(int);
int FUN_0c0fb96c(int);
int FUN_0c0fbda4(int);
int FUN_0c0fbe36(int);
int FUN_0c0fc69e(void);
int FUN_0c1050fc(int, int, int);
int FUN_0c105384(int, int);
int FUN_0c1171f0(int);
int FUN_0c0fbe60(int a4);
struct o14_short { char p[0x14]; short v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };


/* manual: task of the object a4, states 0 (set up the parts, then falls into 1) and 1 (per frame: selection, panels, input); loops written once; sel and d are passed as a 5th stack word where the original has them pushed; 336 cases, 892 of 892 instructions */
int FUN_0c0fbe60(int a4)
{
    struct m3 { int w[3]; };
    struct m4 { int w[4]; };
    char *p = (char *)a4;
    int *tbl = (int *)0xC28E9B4;
    char *g = (char *)0xC541F3C;
    short *sel = (short *)(g + 20);
    int *frame = (int *)0xC4B4118;
    int *part = (int *)(p + 0xC4);
    int i, o, b, anim, s, lim, rev;
    short *idx;
    signed char *d;

    s = (signed char)p[20];
    if (s == 0) {
        p[20] = p[20] + 1;
        p[0xA8] = 1;
        *(unsigned short *)(p + 0xAC) = 31;
        p[0xA9] = 33;
        *(float *)(p + 0x30) = 2.0f;
        FUN_0c1171f0(a4);
        for (i = 0; i < 7; i++)
            FUN_0c03744a(part[i], 0, 0x48, *frame);
        FUN_0c03744a(*(int *)(p + 0x110), 0, 0x31, *frame);
        for (i = 0; i < 7; i++)
            *(float *)(part[i] + 0x70) = *(float *)(0xC28E8E0 + i * 12);
        *(short *)(*(int *)(p + 0x110) + 6) = 0x21F;
        for (i = 0; i < 8; i++)
            tbl[i] = i < *(signed char *)0xC542B8C ? 1 : 0;
        for (i = 1; i < 8; i++) {
            if (tbl[i] == 1) {
                FUN_0c03744a(part[i - 1], 0, i < 5 ? 0x42 + i : i == 5 ? 0x4F : i == 6 ? 0x42 : 0x47, *frame);
                if (i == 7) {
                    FUN_0c03744a(*(int *)(p + 0xE0), 0, 0x41, *frame);
                    *(struct m3 *)(*(int *)(p + 0xE0) + 0x6C) = *(struct m3 *)0xC28E924;
                }
            }
        }
        FUN_0c0fbda4(a4);
        FUN_0c0fbe36(a4);
    } else if (s != 1) {
        return s;
    }
    if ((unsigned char)g[7] >= 4)
        return (unsigned char)g[7];
    *sel = ((int (*)(int, int, int, int, short *))FUN_0c105384)(*sel, 9, 0, 0, sel);   /* the original has sel pushed */
    o = *(int *)(p + 0x110);
    *(struct m3 *)(o + 0x6C) = *(struct m3 *)(0xC28E8D0 + *sel * 12);
    lim = *(int *)0xC28EAA4;
    rev = *(short *)(p + 0x22) >= lim;
    FUN_0c058a6e(*(int *)(p + 0x110) + 0x14, rev ? 0xC28EA54 : 0xC28EA44, rev ? 0xC28EA44 : 0xC28EA54,
                 *(short *)(p + 0x22), rev ? *(int *)0xC28EAA8 : lim, rev ? lim : 0);
    if ((short)(*(short *)(p + 0x22) = *(short *)(p + 0x22) + 1) > *(int *)0xC28EAA8)
        *(short *)(p + 0x22) = 0;
    for (i = 0; i < 2; i++) {
        idx = i ? (short *)(p + 0x1E) : sel;
        anim = 0x56;
        if (tbl[*idx] != 0) {
            b = *(signed char *)0xC5429A8;
            anim = ((int *)((unsigned)b < 2 ? 0xC28E9DC : 0xC28EA04))[*idx];
        }
        FUN_0c03744a(*(int *)(p + 0x108 + i * 4), 0, anim, *frame);
    }
    for (i = 0; i < 2; i++)
        *(unsigned short *)(*(int *)(p + 0x108 + i * 4) + 6) |= 0x600;
    for (i = 0; i < 2; i++)
        FUN_0c058a6e(*(int *)(p + 0x108 + i * 4) + 0x14, 0xC28EA94 - i * 16, 0xC28EA84 + i * 16,
                     *(short *)(p + 0x20), 10, 0);
    if (*(short *)(p + 0x1E) != *sel) {
        if ((short)(*(short *)(p + 0x20) = *(short *)(p + 0x20) + 1) > 10) {
            *(short *)(p + 0x20) = 0;
            *(short *)(p + 0x1E) = *sel;
        }
    }
    for (i = 0; i < 17; i++) {
        *(unsigned short *)(part[i] + 6) |= 0x200;
        *(struct m4 *)(part[i] + 0x14) = *(struct m4 *)0xC28E8C0;
    }
    if (*sel < *(signed char *)0xC542B8C && *sel < 7) {
        d = (signed char *)0xC472ADC + *sel;
        s = *sel;
        *d = ((int (*)(int, int, int, int, signed char *))FUN_0c1050fc)(*d, ((int *)0xC28E97C)[s * 2], ((int *)0xC28E97C)[s * 2 + 1], 0, d);
    }
    for (i = 0; i < 7; i++) {
        if (tbl[i] == 0)
            continue;
        o = part[8 + i];
        d = (signed char *)0xC472ADC + i;
        b = *d;
        if (i == 1) {
            if ((unsigned)b > 2)
                goto moved;
            anim = 0x22 + b * 2;
        } else if (i == 3) {
            if ((unsigned)b > 3)
                goto moved;
            anim = b == 3 ? 0x4E : 0x4A + b;
        } else if (i == 4) {
            anim = b + 0x4B;
        } else {
            anim = b ? (i == 2 ? 0x49 : 0x30) : 0x2F;
        }
        FUN_0c03744a(o, 0, anim, *frame);
    moved:
        *(struct m3 *)(o + 0x6C) = *(struct m3 *)(0xC28E8D0 + i * 12);
        if (i == 1)
            o = part[9];
        *(struct m4 *)(o + 0x14) = *(struct m4 *)(((int *)0xC28E960)[i] == *d ? 0xC28EA74 : 0xC28EA64);
    }
    if (FUN_0c05f22c(0x101)) {
        s = *sel;
        if (s == 7) {
            if (tbl[7] != 1)
                return tbl[7];
            FUN_0c05aab6(0, 3);
            return FUN_0c0fb96c(2);
        }
        if (s == 8) {
            FUN_0c05aab6(0, 3);
            return FUN_0c0fc69e();
        }
        s = *sel;
        if (s != 9)
            return s;
        FUN_0c05aab6(0, 3);
    } else {
        s = FUN_0c05f22c(0x40);
        if (s == 0)
            return s;
        if (*sel != 9) {
            FUN_0c05aab6(0, 6);
            *sel = 9;
            return 9;
        }
        FUN_0c05aab6(0, 4);
    }
    return FUN_0c0fb96c(4);
}
