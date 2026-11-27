/* Straight-line functions with calls and guards (batch gen_afz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o3818_short { char p[0x3818]; short v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c15fb04(int a4, int a5, int a6, int a7);

int FUN_0c15fb04(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x40)); }
        if ((unsigned short)((((struct o3818_short *)((*(int *)((a4 + 0x10)))))->v)) != 0x45F) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return 0x3818;
    } else {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
