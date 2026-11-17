/* game/unsorted: functions 0C0DBC28-0C0DBDE4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0bbf58(int);
int FUN_0c0da628(int);
int FUN_0c187798(int, int, int);
int FUN_0c0dbc28(int a4, int a5);
int FUN_0c0dbc8c(int a4, int a5, int a6, int a7);

int FUN_0c0dbc28(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x83, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x2, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC0DBC8C;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t1 + 0x2)) = a5;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        FUN_0c03733c(t1, 0x83, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t0 = 0xA9;
    }
    return t0;
}

int FUN_0c0dbc8c(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t10;
    register int t14;
    register int t17;
    register int t28;
    register int t29;
    register int t33;
    register int t36;
    register int t39;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            FUN_0c187798(a4, a5, a6);
            FUN_0c0bbf58(a4);
            t10 = 0x132;
            if ((*(signed char *)((a4 + 0x132))) != 0) {
                FUN_0c0da628(a4);
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t10 = 0x14;
            }
            return t10;
        }
        t14 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t14 - 1);
        t17 = (short)(t14 - 1);
        if ((short)(t14 - 1) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            FUN_0c064d24(a4, 0x2, 0xB, 0x1, 0x10, 0x0, 0x0, 0xFFFFFFEF);
            (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
            (((struct o132_uchar *)(a4))->v) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t17 = 0x14;
        }
        return t17;
    }
    *(volatile signed char *)((a4 + 0x2));
    
    FUN_0c187798(a4, a5, a6);
    t28 = *(signed char *)((a4 + 0x2));
    t29 = ((~(((~t28) + 0x1) & 0x1)) + 0x1);
    if ((int)t28 >= 0) {
        t29 = (t28 & 0x1);
    }
    *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC287ED8 + (t29 << 2)))) * 65536.0f) / 360.0f);
    t33 = 0x1;
    if ((int)(*(signed char *)((a4 + 0x2))) >= (int)0x2) {
        t33 = 0x168;
    }
    *(unsigned short *)((a4 + 0x1C)) = t33;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t36 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t36 - 1);
    t39 = (short)(t36 - 1);
    if ((short)(t36 - 1) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c064d24(a4, 0x2, 0xB, 0x1, 0x10, 0x0, 0x0, 0xFFFFFFEF);
        (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t39 = 0x14;
    }
    return t39;
}
