/* game/unsorted: functions 0C02BAD0-0C02BBE4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c0185b4(void);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c01e9e4(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c02bad0(void);
int FUN_0c02bae6(void);
int FUN_0c02baf6(int a4);

int FUN_0c02bad0(void)
{
    (((struct o0_uchar *)0xC30EF14)->v) = 0x0;
    (((struct o1_uchar *)0xC30EF14)->v) = 0x0;
    (((struct o2_uchar *)0xC30EF14)->v) = 0x0;
    (((struct o3_uchar *)0xC30EF14)->v) = 0x0;
    return FUN_0c01e9e4();
}

int FUN_0c02bae6(void)
{
    register int t1;

    t1 = *(int *)((((unsigned char)(*(signed char *)0xC30EF14) << 2) + 0xC20E9F0));
    return ((int (*)(void))(t1))();
}

int FUN_0c02baf6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC30EF15;
    if ((unsigned char)t0 != 0) {
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 != 1) {
        } else {
            t2 = (((struct o4_short *)0xC30EF14)->v);
            (((struct o4_ushort *)0xC30EF14)->v) = (t2 - 1);
            t3 = (unsigned char)t0;
            if ((int)(short)(t2 - 1) <= 0) {
                FUN_0c01cc56(0x1A, 0xC02BDBC);
                FUN_0c01cc56(0x1B, 0xC02BE9C);
                FUN_0c01cc56(0x3D, 0xC02C184);
                *(unsigned short *)(((FUN_0c01cc56(0x3C, 0xC02C25C)) + 0x1C)) = 0x0;
                *(unsigned short *)(((FUN_0c01cc56(0x3C, 0xC02C25C)) + 0x1C)) = 0x1;
                *(unsigned short *)(((FUN_0c01cc56(0x3C, 0xC02C25C)) + 0x1C)) = 0x2;
                *(unsigned short *)(((FUN_0c01cc56(0x3C, 0xC02C25C)) + 0x1C)) = 0x3;
                *(unsigned short *)(((FUN_0c01cc56(0x3C, 0xC02C25C)) + 0x1C)) = 0x4;
                (((struct o0_uchar *)0xC30EF14)->v) = ((*(signed char *)0xC30EF14) + 0x1);
                (((struct o1_uchar *)0xC30EF14)->v) = 0x0;
                t3 = 0x4;
            }
            t1 = t3;
        }
        t0 = t1;
    } else {
        FUN_0c01cb7c();
        FUN_0c01cc56(0x10, 0xC02BDA8);
        FUN_0c01cc56(0x0, 0xC02BFF0);
        FUN_0c0185b4();
        (((struct o1_uchar *)0xC30EF14)->v) = ((*(signed char *)0xC30EF15) + 0x1);
        t1 = *(signed char *)0xC30A347;
        (((struct oE_uchar *)0xC30EF14)->v) = t1;
        (((struct oC_uchar *)0xC30EF14)->v) = t1;
        t1 = *(signed char *)0xC305416;
        (((struct o34_uchar *)0xC30EF14)->v) = t1;
        (((struct oF_uchar *)0xC30EF14)->v) = t1;
        (((struct oD_uchar *)0xC30EF14)->v) = t1;
        (((struct o11_uchar *)0xC30EF14)->v) = 0x0;
        (((struct o10_uchar *)0xC30EF14)->v) = 0x0;
        (((struct o32_uchar *)0xC30EF14)->v) = 0x0;
        (((struct o33_uchar *)0xC30EF14)->v) = 0x9;
        t1 = FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        (((struct o4_ushort *)0xC30EF14)->v) = 0x14;
        t2 = (((struct o4_short *)0xC30EF14)->v);
        (((struct o4_ushort *)0xC30EF14)->v) = (t2 - 1);
        t3 = t1;
        if ((int)(short)(t2 - 1) <= 0) {
            FUN_0c01cc56(0x1A, 0xC02BDBC);
            FUN_0c01cc56(0x1B, 0xC02BE9C);
            FUN_0c01cc56(0x3D, 0xC02C184);
            *(unsigned short *)(((FUN_0c01cc56(0x3C, 0xC02C25C)) + 0x1C)) = 0x0;
            *(unsigned short *)(((FUN_0c01cc56(0x3C, 0xC02C25C)) + 0x1C)) = 0x1;
            *(unsigned short *)(((FUN_0c01cc56(0x3C, 0xC02C25C)) + 0x1C)) = 0x2;
            *(unsigned short *)(((FUN_0c01cc56(0x3C, 0xC02C25C)) + 0x1C)) = 0x3;
            *(unsigned short *)(((FUN_0c01cc56(0x3C, 0xC02C25C)) + 0x1C)) = 0x4;
            (((struct o0_uchar *)0xC30EF14)->v) = ((*(signed char *)0xC30EF14) + 0x1);
            (((struct o1_uchar *)0xC30EF14)->v) = 0x0;
            t3 = 0x4;
        }
        t0 = t3;
    }
    return t0;
}
