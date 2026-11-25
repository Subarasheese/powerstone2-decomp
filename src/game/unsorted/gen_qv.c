/* Straight-line functions with calls and guards (batch gen_qv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c11978c(int a4, int a5, int a6, int a7);

int FUN_0c11978c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t5;
    register int t12;
    register int t16;
    register int t18;
    register int t19;
    register int t20;
    register int t25;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x14))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t5 = *(signed char *)((a4 + 0x14));
    if (t5 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
    }
    if ((t5 == 0) || (t5 == 1)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        FUN_0c1171f0(a4);
        t12 = 0x0;
        for (;;) {
            *(volatile short *)(((0x41C + t0) + 0x8));
            *(volatile short *)(((0x41C + t0) + 0xC));
            t16 = *(int *)((((t12 << 2) + (0xC4 + a4)) + 0x0));
            FUN_0c03744a(t16, 0xC, 0x1, (*(int *)0xC4B410C));
            t18 = *(short *)(((0x41C + t0) + 0x8));
            t19 = *(short *)(((0x41C + t0) + 0xC));
            t20 = (t18 - t19);
            if ((int)(t18 - t19) < 0) {
                t20 = 0x0;
            }
            if (((*(int *)((((*(int *)((((t20 + t12) << 2) + 0xC474410))) << 2) + 0xC473D04))) & 0x1000) != 0) {
                *(unsigned char *)((t16 + 0x0)) = 0x1;
            } else {
                *(unsigned char *)((t16 + 0x0)) = 0x0;
            }
            *(unsigned short *)((t16 + 0x6)) = 0x21F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t16)) = *(struct mv3 *)(0xC291E4C); }
            { struct mv4 { int w[4]; }; *(struct mv4 *)((t16 + 0x14)) = *(struct mv4 *)(0xC2A0CA0); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t16)) = *(struct mv3 *)((t16 + 0x6C)); }
            t25 = FUN_0c0588bc((t16 + 0x6C), 0xC291E40, 0xC291E34, t12, 0x4, 0x0);
            t12 = (t12 + 0x1);
            if ((int)t12 >= (int)0x5) {
                break;
            }
        }
        return t25;
    } else {
        if (t5 != 99) {
            return t5;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
