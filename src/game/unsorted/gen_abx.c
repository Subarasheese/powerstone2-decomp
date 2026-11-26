/* Straight-line functions with calls and guards (batch gen_abx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c0185b4(void);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c02baf6(int a4);

int FUN_0c02baf6(int a4)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC30EF15;
    t3 = (unsigned char)t0;
    if ((unsigned char)t0 == 0) {
        FUN_0c01cb7c();
        FUN_0c01cc56(0x10, 0xC02BDA8);
        FUN_0c01cc56(0x0, 0xC02BFF0);
        FUN_0c0185b4();
        (((struct o1_uchar *)0xC30EF14)->v) = ((*(signed char *)0xC30EF15) + 0x1);
        t2 = *(signed char *)0xC30A347;
        (((struct oE_uchar *)0xC30EF14)->v) = t2;
        (((struct oC_uchar *)0xC30EF14)->v) = t2;
        t2 = *(signed char *)0xC305416;
        (((struct o34_uchar *)0xC30EF14)->v) = t2;
        (((struct oF_uchar *)0xC30EF14)->v) = t2;
        (((struct oD_uchar *)0xC30EF14)->v) = t2;
        (((struct o11_uchar *)0xC30EF14)->v) = 0x0;
        (((struct o10_uchar *)0xC30EF14)->v) = 0x0;
        (((struct o32_uchar *)0xC30EF14)->v) = 0x0;
        (((struct o33_uchar *)0xC30EF14)->v) = 0x9;
        t2 = FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        (((struct o4_ushort *)0xC30EF14)->v) = 0x14;
        t3 = t2;
    }
    t2 = (unsigned char)t0;
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        t0 = (((struct o4_short *)0xC30EF14)->v);
        (((struct o4_ushort *)0xC30EF14)->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
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
        t2 = t3;
    }
    return t2;
}
