/* Straight-line functions with calls and guards (batch gen_alw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o114_int { char p[0x114]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c03f48a(int, int, int, int);
int FUN_0c171984(int a4, int a5, int a6, int a7, float f4);

/* manual: spawns the effect object (type 0: 9 modes each with its own constant; type 1: float-set variant) for player a4; 175 cases, 599 of 599 instructions */
int FUN_0c171984(int a4, int a5, int a6, int a7, float f4)
{
    int rec = (short)(signed char)a4 * (short)0x58 + 0xC475DC8;
    int ent = *(short *)(rec + 0xE);
    int n, o, i, kind, kp, t;

    if ((signed char)a5 == 0) {
        kind = 5;
        switch (*(signed char *)(rec + 1)) {
        case 0: kind = 9; kp = 0xC4B40D8; break;
        case 1: kp = 0xC4B40CC; break;
        case 2:
            t = *(signed char *)((short)(signed char)a4 * (short)0x3938 + 0xC53249A);
            if (t == 12 || t == 13)
                kp = 0xC4B40E0 + ((signed char)a4 << 3);
            else
                kp = 0xC4B40FC + ((signed char)a4 << 2);
            break;
        case 3: kp = 0xC4B40D0; break;
        case 4: case 6: case 7: kp = 0xC4B410C; break;
        case 5: kp = 0xC4B40D4; break;
        case 8: kp = 0xC4B4110; break;
        default: return 0;
        }
        n = FUN_0c037320(ent, *(int *)kp);
        o = FUN_0c03f444(kind, 0, n);
        if (o == 0) return 0;
        FUN_0c03733c(o, ent, *(int *)kp);
        *(int *)(o + 4) = 0xC171962;
        *(unsigned short *)(o + 0xAC) = 31;
        *(unsigned char *)(o + 0xA9) = 33;
        *(unsigned char *)(o + 0xA8) = 1;
        *(unsigned char *)(o + 2) = a5;
        if (*(signed char *)(rec + 0x10) != -1) {
            for (i = 0; i < n; i++)
                **(unsigned char **)(o + 0xC4 + i * 4) = 0;
            **(unsigned char **)(o + 0xC4 + *(signed char *)(rec + 0x10) * 4) = 1;
        }
        if (kind == 9) {
            if (*(signed char *)0xC475DC5 != 0) {
                t = *(int *)(o + 0xC4);
                *(float *)(t + 0x74) = 0.0f;
                *(float *)(t + 0x70) = 0.0f;
                *(float *)(t + 0x6C) = 0.0f;
                t = *(int *)(o + 0xC4);
                *(int *)(t + 0x80) = 0;
                *(int *)(t + 0x7C) = 0;
                *(int *)(t + 0x78) = 0;
            }
            *(unsigned char *)(o + 0x41C) = ent;
        }
        return o;
    }
    if ((signed char)a5 != 1) return 0;
    n = FUN_0c037320(ent, *(int *)0xC4B40D8);
    o = FUN_0c03f48a(5, 0, n, 1);
    if (o == 0) return 0;
    FUN_0c03733c(o, ent, *(int *)0xC4B40D8);
    *(int *)(o + 4) = 0xC171962;
    *(unsigned short *)(o + 0xAC) = 31;
    *(unsigned char *)(o + 0xA9) = 33;
    for (i = 0; i < *(int *)(o + 0x114); i++)
        *(float *)(*(int *)(o + 0x118 + i * 4) + 0x88) = 1.0f;
    *(unsigned char *)(o + 0xA8) = 1;
    *(unsigned char *)(o + 2) = a5;
    FUN_0c037ac4(o, 0, *(signed char *)(rec + 5), 7, *(unsigned char *)(rec + 7));
    return o;
}
