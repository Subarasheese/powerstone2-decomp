/* game/menu/select: functions 0C0FD0E8-0C0FE0E4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c059ce8(int);
int FUN_0c05aab6(int, int);
int FUN_0c05ada4(int);
int FUN_0c05adb4(int);
int FUN_0c05adc4(int);
int FUN_0c05add4(int);
int FUN_0c05f22c(int);
int FUN_0c05f254(int);
int FUN_0c0fb9a6(void);
int FUN_0c0fc90c(int);
int FUN_0c0fc924(int, int);
int FUN_0c0fc990(int, int);
int FUN_0c104f7c(int, int);
int FUN_0c105384(int);
int FUN_0c1171f0(int);
int FUN_0c187798(int);
int FUN_0c0fd0e8(int a4);
int FUN_0c0fd112(int a4, int a5, int a6);
int FUN_0c0fd296(int a4);
int FUN_0c0fd334(int a4);
int FUN_0c0fd368(int a4, int a5, int a6);
int FUN_0c0fd5b8(int a4);
int FUN_0c0fd692(int a4);
int FUN_0c0fd938(int a4);
void FUN_0c0fd962(int a4);
int FUN_0c0fddea(int a4);
int FUN_0c0fe000(int a4);
int FUN_0c0fe02a(int a4);
int FUN_0c0fe0b2(void);

int FUN_0c0fd0e8(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x1, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FCD90;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}


int FUN_0c0fd296(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
    }
    if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c0fd112(a4, (*(signed char *)(((t1 + 0x41C) + 0x3))), 0x0);
    return FUN_0c0fd112(a4, ((*(signed char *)(((t1 + 0x41C) + 0x1))) + 0x1), 0x1);
}

int FUN_0c0fd334(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x4);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FD296;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}



int FUN_0c0fd692(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x6);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FD5B8;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return t0;
    }
    return 0x0;
}

int FUN_0c0fd938(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FD6E4;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

/* FUN_0c0fd962, written by hand from the original (1,160 bytes; the generated C was 2,548).
   A menu-list object a4: byte +20 is the phase (0 set-up, 1 running), p = a4 + 0x41C is its cursor record (byte p+0 mode 0..2,
   p+1 cursor, p+2 shown cursor, p+3 entry count, p+4 / p+5 two flags). The entries are 8 bytes at 0C28ECD0 (two words each,
   -1 -1 ends the list); the window objects are the ints at a4 + 196..240. */

/* manual: written by hand, 2026-11-23/24 (build/manual/notes_FUN_0c0fd962.txt) */
void FUN_0c0fd962(int a4)
{
    int p;
    int s;
    int t;
    int e;
    int i;
    int cc;

    p = a4 + 0x41C;
    switch (*(signed char *)(a4 + 20)) {
    case 0:
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        *(char *)(a4 + 168) = 1;
        *(short *)(a4 + 172) = 31;
        *(char *)(a4 + 169) = 33;
        *(float *)(a4 + 48) = 2.0f;
        FUN_0c1171f0(a4);
        *(char *)(p + 4) = 0;
        FUN_0c03744a(*(int *)(a4 + 196), 0, 1, *(int *)0xC4B410C);
        for (i = 0;; i++) {
            e = 0xC28ECD0 + i * 8;
            if (*(int *)e == -1 && *(int *)(e + 4) == -1) {
                break;
            }
            *(char *)(p + 3) = *(signed char *)(p + 3) + 1;
        }
        FUN_0c0fd938(a4);
        FUN_0c0fd334(a4);
        FUN_0c0fd692(a4);
    case 1:
        if (*(short *)(*(int *)(a4 + 16) + 28) != 0) {
            *(char *)(a4 + 168) = 0;
            return;
        }
        s = FUN_0c104f7c(*(signed char *)(p + 1), *(signed char *)(p + 3) - 1);
        if (s != *(signed char *)(p + 1)) {
            FUN_0c0fc90c(*(signed char *)(p + 3));
            if (*(signed char *)(p + 5) == 1) {
                FUN_0c0fc924(*(signed char *)(p + 3), s);
            }
            switch (*(signed char *)p) {
            case 0:
                *(char *)(p + 1) = s;
                break;
            case 1:
                *(char *)p = 1;
                *(char *)(p + 1) = s;
                FUN_0c059c7a(*(int *)(0xC28ECD0 + *(signed char *)(p + 1) * 8), *(signed char *)(p + 4));
                break;
            case 2:
                *(char *)(p + 1) = s;
                *(char *)p = 2;
                FUN_0c05add4(1);
                FUN_0c059ce8(117);
                FUN_0c059c7a(*(int *)(0xC28ECD0 + *(signed char *)(p + 1) * 8), *(signed char *)(p + 4));
                FUN_0c05adc4(1);
                break;
            }
        }
        if (FUN_0c05f22c(0x100) != 0) {
            switch (*(signed char *)p) {
            case 0:
                *(char *)p = 1;
                *(char *)(p + 1) = s;
                FUN_0c0fc90c(*(signed char *)(p + 3));
                if (*(signed char *)(p + 5) == 1) {
                    FUN_0c0fc924(*(signed char *)(p + 3), *(signed char *)(p + 1));
                }
                FUN_0c059c7a(*(int *)(0xC28ECD0 + *(signed char *)(p + 1) * 8), *(signed char *)(p + 4));
                break;
            case 1:
                *(char *)p = 2;
                FUN_0c05adc4(1);
                break;
            case 2:
                *(char *)p = 1;
                FUN_0c05add4(1);
                break;
            }
        }
        if (FUN_0c05adb4(1) != 0) {
            cc = 0;
            if (*(signed char *)(p + 4) != 0) {
                *(char *)p = 1;
            } else if (*(signed char *)(p + 5) == 1) {
                t = FUN_0c0fc990(*(signed char *)(p + 3), *(signed char *)(p + 1));
                if (t == -1) {
                    *(char *)p = 0;
                    cc = 1;
                } else {
                    *(char *)(p + 1) = t;
                }
            } else if (*(signed char *)(p + 1) >= *(signed char *)(p + 3) - 1) {
                *(char *)p = 0;
                *(char *)(p + 1) = 0;
                cc = 1;
            } else {
                *(char *)(p + 1) = *(signed char *)(p + 1) + 1;
            }
            if (cc != 0) {
                FUN_0c05add4(1);
                FUN_0c059ce8(117);
            } else {
                FUN_0c059c7a(*(int *)(0xC28ECD0 + *(signed char *)(p + 1) * 8), *(signed char *)(p + 4));
            }
        }
        if (FUN_0c05f22c(0x40) != 0) {
            FUN_0c05add4(1);
            *(char *)p = 0;
            FUN_0c059ce8(117);
        }
        if (FUN_0c05f22c(0x200) != 0) {
            *(char *)(p + 4) = 1 - *(signed char *)(p + 4);
        }
        if (FUN_0c05f22c(0x80) != 0) {
            *(char *)(p + 5) = 1 - *(signed char *)(p + 5);
            if (*(signed char *)(p + 5) != 0) {
                FUN_0c0fc90c(*(signed char *)(p + 3));
                FUN_0c0fc924(*(signed char *)(p + 3), *(signed char *)(p + 1));
            }
        }
        *(char *)(a4 + 168) = 1;
        t = FUN_0c05f254(0x800);
        FUN_0c03744a(*(int *)(a4 + 216), 0, t != 0 ? 28 : 32, *(int *)0xC4B410C);
        t = FUN_0c05f254(0x100);
        FUN_0c03744a(*(int *)(a4 + 220), 0, t != 0 ? 29 : 33, *(int *)0xC4B410C);
        t = FUN_0c05f254(0x40);
        FUN_0c03744a(*(int *)(a4 + 224), 0, t != 0 ? 30 : 34, *(int *)0xC4B410C);
        t = FUN_0c05f254(0x400);
        FUN_0c03744a(*(int *)(a4 + 228), 0, t != 0 ? 31 : 35, *(int *)0xC4B410C);
        FUN_0c03744a(*(int *)(a4 + 232), 0, *(signed char *)(p + 4) != 0 ? 38 : 36, *(int *)0xC4B410C);
        FUN_0c03744a(*(int *)(a4 + 236), 0, *(signed char *)(p + 5) != 0 ? 39 : 37, *(int *)0xC4B410C);
        e = *(int *)(0xC28ECD0 + *(signed char *)(p + 1) * 8 + 4);
        if (e == -1) {
            *(char *)*(int *)(a4 + 240) = 0;
        } else {
            FUN_0c03744a(*(int *)(a4 + 240), 0, e, *(int *)0xC4B410C);
            *(char *)*(int *)(a4 + 240) = 1;
            *(unsigned short *)(*(int *)(a4 + 240) + 6) = *(unsigned short *)(*(int *)(a4 + 240) + 6) | 0x400;
            FUN_0c058a6e(*(int *)(a4 + 240) + 20, 0xC28EB38, 0xC28EB28, *(short *)(a4 + 32), 10, 0);
            if (*(short *)(a4 + 32) == 0) {
                e = *(int *)(0xC28ECD0 + *(signed char *)(p + 2) * 8 + 4);
                if (e != -1) {
                    FUN_0c03744a(*(int *)(a4 + 240), 0, e, *(int *)0xC4B410C);
                }
                *(unsigned short *)(*(int *)(a4 + 240) + 6) = *(unsigned short *)(*(int *)(a4 + 240) + 6) | 0x400;
                FUN_0c058a6e(*(int *)(a4 + 240) + 20, 0xC28EB28, 0xC28EB38, *(short *)(a4 + 32), 10, 0);
            }
        }
        if (*(signed char *)(p + 2) != *(signed char *)(p + 1)) {
            *(short *)(a4 + 32) = *(short *)(a4 + 32) + 1;
            if (*(short *)(a4 + 32) > 10) {
                *(short *)(a4 + 32) = 0;
                *(char *)(p + 2) = *(signed char *)(p + 1);
            }
        }
        return;
    }
}

int FUN_0c0fddea(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x1, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FD962;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fe000(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x1, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FDE34;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}


int FUN_0c0fe0b2(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FE02A;
        FUN_0c0fe02a(t0);
        return t0;
    }
    return 0x0;
}
