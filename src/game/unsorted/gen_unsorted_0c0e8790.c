/* game/unsorted: functions 0C0E8790-0C0E8D2E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c1512a0(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0e8790(int a4, int a5, int a6, int a7);
int FUN_0c0e88b8(int a4, int a5, int a6, int a7);
int FUN_0c0e89dc(int a4);
int FUN_0c0e8a40(int a4);
int FUN_0c0e8a98(int a4);

int FUN_0c0e8790(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)((((*(int *)((0xC1CC14C + (((t0 << 2) + t0) << 2)))) << 2) + 0xC540D94));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if (t1 == 0) {
            return FUN_0c03f346(a4, 0xC1CC14C, a6, a7);
        }
        if ((*(signed char *)((t1 + 0x15))) == 0) {
            return FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
        }
        if ((*(signed char *)((t1 + 0x15))) == 1) {
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798(t1, 0xC1CC14C, a6);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t0 = 0x0;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            if ((int)t2 <= 0) {
                FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
                math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
                (((struct oA4_uint *)(a4))->v) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
                (((struct oAA_uchar *)(a4))->v) = 0x1;
                t0 = 0xAA;
            } else {
                (((struct oA8_uchar *)(a4))->v) = (((t2 & 0x4) >> 1) >> 1);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t0 = (t2 - 1);
            }
        }
        return t0;
    }
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    if (t1 == 0) {
        return FUN_0c03f346(a4, 0xC1CC14C, (0x12A + a4), a7);
    }
    if ((*(signed char *)((t1 + 0x15))) == 0) {
        return FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    }
    if ((*(signed char *)((t1 + 0x15))) == 1) {
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798(t1, 0xC1CC14C, (0x12A + a4));
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t0 = 0x0;
    } else {
        t1 = *(short *)((a4 + 0x1C));
        if ((int)t1 <= 0) {
            FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
            math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
            (((struct oA4_uint *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            (((struct oAA_uchar *)(a4))->v) = 0x1;
            t2 = 0xAA;
        } else {
            (((struct oA8_uchar *)(a4))->v) = (((t1 & 0x4) >> 1) >> 1);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (t1 - 1);
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0e88b8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(signed char *)((a4 + 0x2));
    t2 = *(int *)((((*(int *)((0xC1CC14C + (((t1 << 2) + t1) << 2)))) << 2) + 0xC540D94));
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        if (t2 == 0) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        if ((*(signed char *)((t2 + 0x15))) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x78;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t3 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            t1 = 0x15;
            if ((*(signed char *)((t2 + 0x15))) != 0) {
                FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                (((struct o12C_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t1 = 0x3C;
            }
            t3 = t1;
        }
        return t3;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x12C;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798(0xC1CC14C, a5, a6);
    t1 = *(signed char *)((a4 + 0x2));
    *(unsigned int *)((a4 + 0x38)) = (*(int *)(((t0 + (((t1 << 2) + t1) << 2)) + 0x10)));
    if (t2 != 0) {
        (((struct oA4_uint *)(a4))->v) = (t2 + 0x64);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        if (t2 == 0) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        if ((*(signed char *)((t2 + 0x15))) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x78;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            t0 = 0x15;
            if ((*(signed char *)((t2 + 0x15))) != 0) {
                FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                (((struct o12C_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t0 = 0x3C;
            }
            t1 = t0;
        }
        return t1;
    }
    return ((int (*)(int))(FUN_0c03f346))(a4);
}

int FUN_0c0e89dc(int a4)
{
    FUN_0c0e2700((a4 + 0x28), 0xC, 0xFFFFFFFF, 0x1);
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oAA_uchar *)(a4))->v) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
}

int FUN_0c0e8a40(int a4)
{
    FUN_0c1512a0(0x3, (a4 + 0x28));
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oAA_uchar *)(a4))->v) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}

int FUN_0c0e8a98(int a4)
{
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oAA_uchar *)(a4))->v) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}
