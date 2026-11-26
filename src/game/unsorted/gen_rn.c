/* Straight-line functions with calls and guards (batch gen_rn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c163afc(int a4, int a5, int a6, int a7);

int FUN_0c163afc(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x4D, (*(int *)0xC4B40CC));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x4D, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A3070); }
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A3070); }
    }
    if ((t1 == 0) || (t1 == 1)) {
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A3068)->v))) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A309C, 0xC2A3090, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3068)->v))), 0x0);
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A30B4, 0xC2A30A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3068)->v))), 0x0);
        }
        t1 = *(short *)((a4 + 0x1C));
        if (((int)t1 >= (int)((((struct o4_int *)0xC2A3068)->v))) && (t0 = (((struct o0_int *)0xC2A3068)->v), (int)t1 <= (int)t0)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3080, 0xC2A3070, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3068)->v))), (((((struct o4_int *)0xC2A3068)->v))));
            FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3080, 0xC2A3070, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3068)->v))), (((((struct o4_int *)0xC2A3068)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A3068)->v))) {
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t1 = 0x14;
        }
        return t1;
    } else {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
