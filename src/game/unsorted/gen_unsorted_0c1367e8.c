/* game/unsorted: functions 0C1367E8-0C136A70, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c158f5a(int, int, int, int);
int FUN_0c15a104(int, int, int, int, int, int, int, int);
int FUN_0c187798(int);
int FUN_0c1367e8(int a4, int a5, int a6, int a7);
int FUN_0c13683e(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_0c136886(int a4, int a5, int a6, int a7);
int FUN_0c1368c0(int a4, int a5, int a6, int a7);
int FUN_0c13691a(int a4);

int FUN_0c1367e8(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((unsigned short)((((struct o24_short *)((*(int *)((a4 + 0x10)))))->v)) != ((((struct o41C_int *)(a4))->v))) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 26) {
            t0 = *(int *)((a4 + 0x10));
            *(unsigned short *)(((0x1E + t0) + 0x0)) = 0x0;
            return t0;
        }
        return FUN_0c158f5a(a4, a5, a6, a7);
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c13683e(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    register int t0;
    register int t2;

    t0 = FUN_0c15a104(a4, a5, a7, 0xC201FDC, ((short)(a8 >> 0)), ((signed char)(a9 >> 0)), a10, a11);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC1367E8;
        *(unsigned int *)((t0 + 0x10)) = a6;
        (((struct o41C_uint *)(t0))->v) = (unsigned short)((((struct o24_short *)(a6))->v));
        t2 = 0x41C;
    }
    return t2;
}

int FUN_0c136886(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) == 26) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0xFA) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            t0 = t1;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        return t0;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}

int FUN_0c1368c0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) == 26) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0xF0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            t0 = t1;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        return t0;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}

