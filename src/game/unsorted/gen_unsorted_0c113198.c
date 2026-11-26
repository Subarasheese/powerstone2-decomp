/* game/unsorted: functions 0C113198-0C1137D6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c1174e4(int, int, int, int);
int FUN_0c113198(int a4, int a5, int a6, int a7);
int FUN_0c113628(void);
int FUN_0c113650(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };


/* manual: FUN_0c113198 task step by state byte a4[0x14] (0 start, 1/11 float ramp, 2 reset, 10 finish, 99 -> 10); the four-object passes and the four-way copy are loops; 143 hand cases at each state, flag mask, mode and a1C edge, 534 of 534 instructions */
int FUN_0c113198(int a4, int a5, int a6, int a7)
{
    int s, i, j, v, p, t;
    int *o;
    float u;

    o = (int *)(a4 + 0xC4);
    s = *(signed char *)(a4 + 0x14);
    if (s == 1 || s == 11) {
        for (i = 0; i < 10; i++) {
            p = o[i];
            *(float *)(p + 0x6C) += *(float *)(p + 0x90);
        }
        t = *(short *)(a4 + 0x1C) + 1;
        *(unsigned short *)(a4 + 0x1C) = t;
        if ((short)t < 0x10) {
            return (short)t;
        }
        if (s == 11) {
            return FUN_0c03f346(a4, 0x10, p, a7);
        }
        *(unsigned char *)(a4 + 0x14) = *(signed char *)(a4 + 0x14) + 1;
        *(unsigned short *)(a4 + 0x1C) = 0;
        return 0;
    }
    if (s == 0 || s == 2) {
        if (s == 0) {
            *(unsigned char *)(a4 + 0x14) = *(signed char *)(a4 + 0x14) + 1;
            *(unsigned char *)(a4 + 0xA8) = 1;
            *(unsigned short *)(a4 + 0xAC) = 0x1F;
            *(unsigned char *)(a4 + 0xA9) = 0x21;
            FUN_0c1171f0(a4);
            FUN_0c03744a(o[0], 1, 12, *(int *)0xC4B410C);
        } else {
            for (j = 1; j < 5; j++) {
                *(unsigned char *)o[j] = 1;
            }
        }
        for (j = 0; j < 4; j++) {
            FUN_0c03744a(o[j + 1], j + 6, 12, *(int *)0xC4B410C);
            if (*(int *)(0xC47477C + 4 * j) != 0) {
                v = *(int *)(0xC47477C + 4 * j);
                FUN_0c1174e4(o[j + 1], *(int *)(0xC4739AC + ((j & 1) << 6) + ((j & 2) << 4) + 4 * (v - 1)) - 1, 0, *(int *)0xC4B410C);
            }
        }
        if (s == 0) {
            FUN_0c03744a(o[6], 2, 12, *(int *)0xC4B410C);
            FUN_0c03744a(o[7], 3, 12, *(int *)0xC4B410C);
        }
        v = *(int *)0xC474774;
        t = v;
        if ((unsigned int)v < 4) {
            *(float *)(o[6] + 0x70) = *(float *)(o[v + 1] + 0x70);
            *(float *)(o[7] + 0x70) = *(float *)(o[v + 1] + 0x70);
            t = 0x70;
        }
        if (s == 2) {
            return t;
        }
        for (i = 0; i < 10; i++) {
            p = o[i];
            *(float *)(p + 0x6C) -= 300.0f;
            *(float *)(p + 0x90) = 18.75f;
        }
        for (j = 1; j < 5; j++) {
            *(unsigned char *)o[j] = 0;
        }
        return 0xD4;
    }
    if (s == 10) {
        *(unsigned char *)(a4 + 0x14) = *(signed char *)(a4 + 0x14) + 1;
        for (j = 1; j < 5; j++) {
            *(unsigned char *)o[j] = 0;
        }
        *(unsigned short *)(a4 + 0x1C) = 0;
        u = *(float *)0xC113688;
        for (i = 0; i < 10; i++) {
            *(float *)(o[i] + 0x90) = u;
        }
        return 0x90;
    }
    if (s == 99) {
        *(unsigned char *)(a4 + 0x14) = 0xA;
        return 0x14;
    }
    return s;
}

int FUN_0c113628(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x2, 0xA);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC113198;
        return t0;
    }
    return 0x0;
}

int FUN_0c113650(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
                    FUN_0c058a6e((0xB0 + a4), 0xC291550, 0xC291560, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 99) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x61F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x6, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x7, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x8, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x9, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0xB, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0xC, 0xC, (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x14)))))->v) = ((((struct o70_float *)((*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) + (0xC4 + a4)) + 0x4)))))->v));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) + (0xC4 + a4)) + 0x4)))))->v));
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
        }
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
        FUN_0c058a6e((0xB0 + a4), 0xC291560, 0xC291550, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
        t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}
