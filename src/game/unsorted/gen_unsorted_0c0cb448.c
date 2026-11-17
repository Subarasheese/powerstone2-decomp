/* game/unsorted: functions 0C0CB448-0C0CB694, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f444(int, int, int);
int FUN_0c07e328(int, int);
int FUN_0c07e3fc(int, int);
int FUN_0c0c25c4(int);
int FUN_0c0c2ab6(int, int);
extern int FUN_0c187798();
int FUN_0c0cb448(int a4, int a5);

int FUN_0c0cb448(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c03f444(0x9, 0x0, 0x0);
    if (t0 == 0) {
        return t0;
    }
    *(unsigned int *)((t0 + 0x4)) = 0xC0CACAC;
    (((struct oAC_ushort *)(t0))->v) = 0xF;
    (((struct oA9_uchar *)(t0))->v) = 0x40;
    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    (((struct o41C_uchar *)(t0))->v) = (*(signed char *)((a4 + 0x3721)));
    FUN_0c0c25c4(t0);
    (((struct oA8_uchar *)(t0))->v) = 0x0;
    (((struct o41D_uchar *)(t0))->v) = 0x1;
    (((struct o422_uchar *)(t0))->v) = 0x0;
    FUN_0c187798();
    FUN_0c187798();
    FUN_0c187798();
    *(unsigned char *)((t0 + 0x2)) = a5;
    t1 = *(signed char *)((t0 + 0x2));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    u0 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = u0;
                    (((struct o44_float *)(t0))->v) = u0;
                    (((struct o40_float *)(t0))->v) = u0;
                    FUN_0c0c2ab6(t0, 0x1F);
                    FUN_0c07e3fc(t0, 0x7);
                    t2 = (((struct o3818_short *)(a4))->v);
                    *(unsigned short *)((t0 + 0x1C)) = t2;
                    return t2;
                }
                if (t1 == 4) {
                    u0 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = u0;
                    (((struct o44_float *)(t0))->v) = u0;
                    (((struct o40_float *)(t0))->v) = u0;
                    FUN_0c0c2ab6(t0, 0x1F);
                    FUN_0c07e3fc(t0, 0x9);
                    *(unsigned short *)((t0 + 0x1C)) = ((((struct o3818_short *)(a4))->v));
                    *(unsigned short *)((t0 + 0x1E)) = 0x0;
                    return 0x0;
                }
                if (t1 == 5) {
                    u0 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = u0;
                    (((struct o44_float *)(t0))->v) = u0;
                    (((struct o40_float *)(t0))->v) = u0;
                    FUN_0c0c2ab6(t0, 0x1F);
                    FUN_0c07e3fc(t0, 0xB);
                    *(unsigned short *)((t0 + 0x1C)) = ((((struct o3818_short *)(a4))->v));
                    *(unsigned short *)((t0 + 0x1E)) = 0x0;
                    return 0x0;
                }
                if (t1 == 6) {
                    *(unsigned int *)((t0 + 0x4)) = 0xC0CAFC0;
                    u0 = (((struct o378C_float *)(a4))->v);
                    (((struct o48_float *)(t0))->v) = u0;
                    (((struct o44_float *)(t0))->v) = u0;
                    (((struct o40_float *)(t0))->v) = u0;
                    FUN_0c0c2ab6(t0, 0x50);
                    return FUN_0c07e328(t0, 0x8E);
                }
                return t1;
            }
            u0 = (((struct o378C_float *)(a4))->v);
            (((struct o48_float *)(t0))->v) = u0;
            (((struct o44_float *)(t0))->v) = u0;
            (((struct o40_float *)(t0))->v) = u0;
            FUN_0c0c2ab6(t0, 0x1F);
            FUN_0c07e3fc(t0, 0x6);
            *(unsigned short *)((t0 + 0x1C)) = ((((struct o3818_short *)(a4))->v));
            *(unsigned short *)((t0 + 0x1E)) = 0xF;
            return 0xF;
        }
        u0 = (((struct o378C_float *)(a4))->v);
        (((struct o48_float *)(t0))->v) = u0;
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        FUN_0c0c2ab6(t0, 0x1F);
        t1 = 0x5;
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            t1 = 0x4;
        }
        return (FUN_0c07e3fc(t0, t1));
    }
    *(unsigned short *)((t0 + 0x1C)) = (*(signed char *)((a4 + 0x1)));
    u0 = (((struct o378C_float *)(a4))->v);
    (((struct o48_float *)(t0))->v) = u0;
    (((struct o44_float *)(t0))->v) = u0;
    (((struct o40_float *)(t0))->v) = u0;
    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x373F)));
    FUN_0c0c2ab6(t0, (*(signed char *)0xC275FCB));
    FUN_0c07e3fc(t0, 0x3);
    (((struct o12A_ushort *)(t0))->v) = (~(((int)0x1 << (int)(*(signed char *)((t0 + 0x1)))) | ((int)0x1 << (int)(*(short *)((t0 + 0x1C))))));
    t1 = 0x3740;
    if ((*(signed char *)((a4 + 0x3740))) == 0xFF) {
    } else {
        (((struct o12A_ushort *)(t0))->v) = (((((struct o12A_short *)(t0))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x3740))))));
        t1 = 0x12A;
    }
    return t1;
}
