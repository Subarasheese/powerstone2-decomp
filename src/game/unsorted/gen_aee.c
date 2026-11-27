/* Straight-line functions with calls and guards (batch gen_aee): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c11929c(int a4, int a5, int a6, int a7);

int FUN_0c11929c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0xD, (*(int *)0xC4B410C));
        if ((*(signed char *)(((t1 + 0x41C) + 0x4))) != 0) {
            t0 = 0x0;
            for (;;) {
                t2 = FUN_0c03f444(0x8, 0x1, (*(int *)((0xC291E04 + ((*(signed char *)(((t1 + 0x41C) + 0x4))) << 2)))));
                if (t2 != 0) {
                    *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
                    *(unsigned int *)((t2 + 0x4)) = 0xC11902C;
                    *(unsigned char *)((t2 + 0x2)) = t0;
                    *(unsigned int *)((t2 + 0x10)) = (*(int *)((a4 + 0x10)));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x4C)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)); }
                }
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x5) {
                    break;
                }
            }
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    FUN_0c1171f0(a4);
    t0 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
    t1 = t0;
    if (t0 == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}
