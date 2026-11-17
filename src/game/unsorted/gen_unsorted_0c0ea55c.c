/* game/unsorted: functions 0C0EA55C-0C0EA7DE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c05af9a(int, int, int);
int FUN_0c06599a(int, int);
int FUN_0c0cff96(int, int);
int FUN_0c179ac0(void);
int FUN_0c0ea55c(int a4);
int FUN_0c0ea6a4(int a4);
int FUN_0c0ea72c(void);

int FUN_0c0ea55c(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            FUN_0c05af9a(0x58, 0x0, 0x1);
            return FUN_0c03f346(a4);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) + 0x64);
        }
        thunk_FUN_0c05abb2(0x58, 0x0);
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        if ((*(signed char *)(((*(int *)0xC540DA0) + 0x15))) != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c05af9a(0x58, 0x7F, 0x1);
        }
        FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC288198);
        t0 = 0xC2881C8;
    } else {
        if ((*(signed char *)(((*(int *)0xC540DA0) + 0x15))) == 0) {
            (((struct o15_uchar *)(a4))->v) = 0x0;
            FUN_0c05af9a(0x58, 0x1, 0x1);
        }
        FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC2881B0);
        t0 = 0xC2881D4;
    }
    FUN_0c06599a(a4, t0);
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = (((int)((int)(FUN_0c179ac0()) % (int)0xA)) + 0xA);
        FUN_0c0ea72c();
    }
    t0 = *(signed char *)0xC54098D;
    t1 = 0x15;
    if (((int)t0 >= (int)0x8) && ((int)t0 <= (int)0xE)) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c0ea6a4(int a4)
{
    register int t0;
    register int t1;

    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0x2;
        t1 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t1 + 0x1);
        if ((int)(short)(t1 + 0x1) > (int)0x3) {
            (((struct o20_ushort *)(a4))->v) = 0x0;
        }
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x1D, (*(int *)0xC4B40CC));
    }
    return (short)(t0 - 1);
}

int FUN_0c0ea72c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0EA6E2;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        t2 = (int)((int)(FUN_0c179ac0()) % (int)0x5);
        (((struct o48_float *)(t0))->v) = ((float)(t2 + 0x1) * 1.0f);
        (((struct o44_float *)(t0))->v) = ((float)(t2 + 0x1) * 1.0f);
        (((struct o40_float *)(t0))->v) = ((float)(t2 + 0x1) * 1.0f);
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1D, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        t2 = (int)((int)(FUN_0c179ac0()) % (int)0x28);
        u0 = (float)(((t2 << 2) + t2) << 1);
        u0 = -u0;
        (((struct o28_float *)(t0))->v) = (u0 + -850.0f);
        (((struct o2C_float *)(t0))->v) = -200.0f;
        (((struct o30_float *)(t0))->v) = 725.0f;
        t1 = 0x30;
    }
    return t1;
}
