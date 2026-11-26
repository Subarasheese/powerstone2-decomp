/* Straight-line functions with calls and guards (batch gen_ok): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c11c31c(int a4);

int FUN_0c11c31c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) != 2) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x16, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        FUN_0c05a080(0xA, 0x0);
    }
    if ((t4 == 0) || (t4 == 1)) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    } else {
        if (t4 != 2) {
            if (t4 == 99) {
                FUN_0c05a080(0xB, 0x0);
                return FUN_0c03f346(a4);
            }
            return t4;
        }
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t4 = *(short *)((a4 + 0x1C));
    if (((int)t4 >= (int)((((struct o0_int *)0xC29228C)->v))) && (t0 = (((struct o4_int *)0xC29228C)->v), (int)t4 <= (int)t0)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC292280, 0xC292274, (*(short *)((a4 + 0x1C))), (((((struct o4_int *)0xC29228C)->v))), (((((struct o0_int *)0xC29228C)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o10_int *)0xC29228C)->v))) && (t1 = (((struct o14_int *)0xC29228C)->v), (int)t0 <= (int)t1)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC292274, 0xC292280, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC29228C)->v))), (((((struct o10_int *)0xC29228C)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o8_int *)0xC29228C)->v))) && (t2 = (((struct oC_int *)0xC29228C)->v), (int)t0 <= (int)t2)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC29228C)->v))), (((((struct o8_int *)0xC29228C)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o18_int *)0xC29228C)->v))) && (t3 = (((struct o1C_int *)0xC29228C)->v), (int)t0 <= (int)t3)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o1C_int *)0xC29228C)->v))), (((((struct o18_int *)0xC29228C)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 < (int)((((struct o1C_int *)0xC29228C)->v))) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
