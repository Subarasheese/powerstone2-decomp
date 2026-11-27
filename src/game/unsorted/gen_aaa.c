/* Straight-line functions with calls and guards (batch gen_aaa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int, int, int);
int FUN_0c1082b8(int a4, int a5, int a6, int a7);

int FUN_0c1082b8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
    }
    if ((t0 == 0) || (t0 == 1)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x6C)); }
        FUN_0c1171f0(a4);
        if ((*(int *)((0xC473CC0 + ((*(signed char *)((a4 + 0x2))) << 2)))) != -1) {
            FUN_0c1173dc(((((struct oC4_int *)(a4))->v)), (*(int *)((0xC473CC0 + ((*(signed char *)((a4 + 0x2))) << 2)))), 0x0, (*(int *)0xC4B410C));
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            t1 = (((struct oC4_int *)(a4))->v);
            *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
            t1 = *(signed char *)((a4 + 0x2));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((0xC290B14 + (((t1 << 1) + t1) << 2))); }
            { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC290B38); }
        } else {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        t1 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
        t2 = t1;
        if (t1 == 80) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t2 = 0x14;
        }
        return t2;
    } else {
        if (t0 != 99) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
