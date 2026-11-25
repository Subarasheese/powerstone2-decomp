/* Straight-line functions with calls and guards (batch gen_yt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c058bd4(void);
int FUN_0c058c90(int);
int FUN_0c05aab6(int, int);
int FUN_0c101d38(int);
int FUN_0c104e26(int, int);
int FUN_0c10547c(int, int, int);
int FUN_0c105536(int, int, int);
int FUN_0c10558c(int);
int FUN_0c1055b4(int);
int FUN_0c1171f0(int);
int nlAddVector3op(int, int, int);
int FUN_0c058d44(int a4, int a5, int a6, int a7);

/* manual: effect task over 11 sub-objects (a4+0xC4..0xEC): state a4[0x14] (0 set up, 1 run), frame a4[0x1E] drives parts, scale, trail; 260 cases, 731 of 731 instructions */
int FUN_0c058d44(int a4, int a5, int a6, int a7)
{
    signed char *o = (signed char *)a4;
    char *q, *e;
    signed char *cp, *rec;
    int flag, first, k, m;
    float s;

    if ((*(signed char **)(o + 0x10))[0x14] > 1)
        return FUN_0c03f346(a4, a5, a6, a7);
    k = o[0x14];
    if (k == 0) {
        ++o[0x14];
        o[0xA8] = 0;
        *(short *)(o + 0xAC) = 0x1F;
        o[0xA9] = 0x21;
        *(float *)(o + 0x30) = -4.0f;
        FUN_0c1171f0(a4);
        FUN_0c03744a(*(int *)(o + 0xE0), 0, 14, *(int *)0x0C4B4110);
        q = *(char **)(o + 0xE0);
        *q = 0;
        nlAddVector3op((int)q + 0x6C, 0x0C241FA8, 0x0C241FE0 + o[1] * 12);
        flag = 0;
        first = 1;
        goto parts;
    }
    if (k != 1)
        return k;
update:
    if ((*(signed char **)(o + 0x10))[0x15] == 0) {
        o[0xA8] = 0;
        o[0x15] = 0;
        return 0x15;
    }
    o[0xA8] = 1;
    if (o[0x15] == 0) {
        ++o[0x15];
        *(short *)(o + 0x1C) = 0;
        *(short *)(o + 0x1E) = 0;
        *(short *)(o + 0x20) = 0;
        *(short *)(o + 0x22) = 0;
    }
    if (FUN_0c101d38(o[1]) == 0) {
        **(char **)(o + 0xE0) = 1;
        e = *(char **)(o + 0xC4);
        **(char **)(o + 0xEC) = 0;
        *e = 0;
        return 0xE0;
    }
    flag = *(signed char *)(0x0C5426C8 + o[1] * 40) == 2;
    *(short *)(o + 0x1C) = *(short *)(o + 0x1E);
    *(short *)(o + 0x1E) = FUN_0c10547c(o[1], *(short *)(o + 0x1E), 8);
    k = *(short *)(o + 0x1C) != *(short *)(o + 0x1E);
    rec = (signed char *)(0x0C5426C4 + o[1] * 40);
    if (*(short *)(o + 0x1E) == 6 && !(rec[5] & 2) && !(rec[6] & 2)) {
        if (*(short *)(o + 0x1C) > *(short *)(o + 0x1E))
            --*(short *)(o + 0x1E);
        else
            ++*(short *)(o + 0x1E);
    }
    if (!k && *(short *)(o + 0x1E) <= 5) {
        cp = (signed char *)(0x0C413CB8 + o[1] * 14 + *(short *)(o + 0x1E) * 2 + flag);
        *cp = ((int (*)(int, int, int, int, int))FUN_0c105536)(o[1], *cp, 7, 0, (int)cp);
    }
    if (*(short *)(o + 0x1E) == 7 && FUN_0c10558c(o[1]) != 0)
        FUN_0c058c90(o[1]);
    q = *(char **)(o + 0xC4);
    *q = 1;
    FUN_0c03744a((int)q, 0, flag, *(int *)0x0C4B4110);
    nlAddVector3op((int)q + 0x6C, 0x0C241FA8, 0x0C242010 + o[1] * 12);
    first = 0;
parts:
    for (k = 0; k < 6; k++) {
        FUN_0c03744a(*(int *)(o + 0xC8 + k * 4), 0, *(int *)(0x0C242144 + *(signed char *)(0x0C413CB8 + o[1] * 14 + k * 2 + flag) * 4), *(int *)0x0C4B4110);
        q = *(char **)(o + 0xC8 + k * 4);
        nlAddVector3op((int)q + 0x6C, 0x0C241FA8, 0x0C241FE0 + o[1] * 12);
        nlAddVector3op((int)q + 0x6C, (int)q + 0x6C, 0x0C242040 + k * 12);
    }
    if (first)
        goto update;
    for (k = 0; k < 2; k++) {
        q = *(char **)(o + 0xE4 + k * 4);
        m = 9;
        if (k)
            m = *(signed char *)(0x0C413CB8 + o[1] * 14 + flag + 12) ? 10 : 11;
        FUN_0c03744a((int)q, 0, m, *(int *)0x0C4B4110);
        nlAddVector3op((int)q + 0x6C, 0x0C241FA8, 0x0C241FE0 + o[1] * 12);
        nlAddVector3op((int)q + 0x6C, (int)q + 0x6C, 0x0C242088);
    }
    rec = (signed char *)(0x0C5426C4 + o[1] * 40);
    if ((rec[5] & 2) || (rec[6] & 2)) {
        if (*(short *)(o + 0x1E) == 6) {
            cp = (signed char *)(0x0C413CB8 + o[1] * 14 + *(short *)(o + 0x1E) * 2 + flag);
            *cp = ((int (*)(int, int, int, int, int))FUN_0c105536)(o[1], *cp, 1, 0, (int)cp);
        }
        m = 1;
        s = 1.0f;
    } else {
        m = 0x201;
        s = 0.5f;
    }
    q = *(char **)(o + 0xE8);
    e = *(char **)(o + 0xE4);
    *(short *)(q + 6) = m;
    *(short *)(e + 6) = m;
    q = *(char **)(o + 0xE8);
    e = *(char **)(o + 0xE4);
    *(float *)(q + 0x20) = s;
    *(float *)(q + 0x1C) = s;
    *(float *)(q + 0x18) = s;
    *(float *)(e + 0x20) = s;
    *(float *)(e + 0x1C) = s;
    *(float *)(e + 0x18) = s;
    q = *(char **)(o + 0xEC);
    *q = 1;
    if (*(short *)(o + 0x1E) <= 7) {
        *q = 1;
        FUN_0c03744a((int)q, 0, 13, *(int *)0x0C4B4110);
        *(short *)(q + 6) = 0x21F;
        nlAddVector3op((int)q + 0x6C, 0x0C241FA8, 0x0C241FE0 + o[1] * 12);
        nlAddVector3op((int)q + 0x6C, (int)q + 0x6C, 0x0C242040 + *(short *)(o + 0x1E) * 12);
    }
    if (*(short *)(o + 0x22) < 25)
        FUN_0c058a6e((int)q + 0x14, 0x0C24217C, 0x0C24218C, *(short *)(o + 0x22), 25, 0);
    else
        FUN_0c058a6e((int)q + 0x14, 0x0C24218C, 0x0C24217C, *(short *)(o + 0x22), 50, 25);
    if (++*(short *)(o + 0x22) > 50)
        *(short *)(o + 0x22) = 0;
    **(char **)(o + 0xE0) = 0;
    if (*(short *)(o + 0x1E) != 8) {
        if (FUN_0c104e26(o[1], 0x40) == 0)
            return 0;
        *(short *)(o + 0x1E) = 8;
        return FUN_0c05aab6(0, 6);
    }
    if (*(short *)(*(char **)(o + 0x10) + 0x1E) != 1) {
        *(short *)(*(char **)(o + 0x10) + 0x1E) |= 1;
        **(char **)(o + 0xEC) = 1;
        FUN_0c03744a(*(int *)(o + 0xEC), 0, 13, *(int *)0x0C4B4110);
        q = *(char **)(o + 0xEC);
        *(float *)(q + 0x6C) = 27.0f;
        *(float *)(q + 0x70) = -140.0f;
    } else
        **(char **)(o + 0xEC) = 0;
    if (FUN_0c1055b4(o[1]) == 0 && FUN_0c10558c(o[1]) == 0)
        return 0;
    FUN_0c05aab6(0, FUN_0c1055b4(o[1]) ? 4 : 3);
    if (*(unsigned char *)0x0C541F3D != 4) {
        (*(char **)(o + 0x10))[0x15] = 0;
        return FUN_0c058bd4();
    }
    (*(char **)(o + 0x10))[0x14] = 99;
    (*(char **)(o + 0x10))[0x15] = 0;
    return 0x15;
}
