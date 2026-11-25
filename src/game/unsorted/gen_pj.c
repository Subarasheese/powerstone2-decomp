/* Straight-line functions with calls and guards (batch gen_pj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int nlRand(void);
int FUN_0c11c920(int a4, int a5, int a6, int a7);

int FUN_0c11c920(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)(*(short *)(((*(int *)((a4 + 0x10))) + 0x1E))) >= (int)0x1F4) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    switch (t0) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t0 = nlRand();
        t1 = (t0 % 0x2);
        (((struct o20_ushort *)(a4))->v) = t1;
        FUN_0c03733c(a4, 0x18, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A0C84); }
        t0 = *(int *)(((0xC4 + a4) + 0x4));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x20F;
        *(unsigned short *)((t0 + 0x6)) = 0x20F;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 1:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 2:
        break;
    default:
        if (t0 == 99) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = (t0 % 0x8);
    if (t1 == 0) {
        t0 = (int)((int)(nlRand()) % (int)0x3);
        switch (t0) {
        case 0:
            break;
        case 1:
            FUN_0c05a080(0x11, 0x0);
            break;
        case 2:
            FUN_0c05a080(0x12, 0x0);
            break;
        }
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if ((*(signed char *)((a4 + 0x15))) == 2) {
        t0 = nlRand();
        t1 = (t0 % 0x4);
        if (t1 == 0) {
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t0 = nlRand();
            t1 = (t0 % 0x2);
            (((struct o20_ushort *)(a4))->v) = t1;
        }
    }
    t0 = 0xC8;
    if (((((struct o20_short *)(a4))->v)) != 0) {
        t0 = 0xC4;
    }
    t1 = *(int *)((a4 + t0));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            if ((int)(*(short *)((a4 + 0x1E))) <= (int)0xA) {
                FUN_0c058a6e((t1 + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1E))), 0xA, 0x0);
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
    } else {
        if ((int)(*(short *)((a4 + 0x1E))) <= (int)0x6) {
            FUN_0c058a6e((t1 + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1E))), 0x6, 0x0);
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    return (t0 + 0x1);
}
