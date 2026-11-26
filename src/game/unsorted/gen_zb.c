/* Straight-line functions with calls and guards (batch gen_zb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
extern int FUN_0c03f346();
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0e88b8(int a4, int a5, int a6, int a7);

int FUN_0c0e88b8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)((((*(int *)((0xC1CC14C + (((t0 << 2) + t0) << 2)))) << 2) + 0xC540D94));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((0xC1CC14C + (((t0 << 2) + t0) << 2)) + 0x4)); }
        t0 = *(signed char *)((a4 + 0x2));
        *(unsigned int *)((a4 + 0x38)) = (*(int *)(((0xC1CC14C + (((t0 << 2) + t0) << 2)) + 0x10)));
        if (t1 != 0) {
            (((struct oA4_uint *)(a4))->v) = (t1 + 0x64);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            (((struct o12C_ushort *)(a4))->v) = 0x0;
        } else {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
    }
    if (t1 == 0) {
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    if ((*(signed char *)((t1 + 0x15))) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t2 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        t0 = 0x15;
        if ((*(signed char *)((t1 + 0x15))) != 0) {
            FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
            *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            (((struct o12C_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            t0 = 0x3C;
        }
        t2 = t0;
    }
    return t2;
}
