/* Straight-line functions with calls and guards (batch gen_ve): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c11c4f2(int a4, int a5, int a6, int a7);

int FUN_0c11c4f2(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 99) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t2;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03733c(a4, 0x19, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x41F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A0C84); }
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    t2 = *(short *)((a4 + 0x1C));
    if (((int)t2 >= (int)((((struct o4_int *)0xC2922D0)->v))) && (t0 = (((struct o8_int *)0xC2922D0)->v), (int)t2 <= (int)t0)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2922D0)->v))), (((((struct o4_int *)0xC2922D0)->v))));
        FUN_0c0588bc((a4 + 0x40), 0xC2922B8, 0xC2922AC, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2922D0)->v))), (((((struct o4_int *)0xC2922D0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct oC_int *)0xC2922D0)->v))) && (t1 = (((struct o10_int *)0xC2922D0)->v), (int)t0 <= (int)t1)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2922D0)->v))), (((((struct oC_int *)0xC2922D0)->v))));
        FUN_0c0588bc((a4 + 0x40), 0xC2922C4, 0xC2922B8, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2922D0)->v))), (((((struct oC_int *)0xC2922D0)->v))));
    }
    if ((int)(*(short *)((a4 + 0x1C))) < (int)((((struct o0_int *)0xC2922D0)->v))) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}
