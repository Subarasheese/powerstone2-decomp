/* Straight-line functions with calls and guards (batch gen_s): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c151904(int a4, int a5);

int FUN_0c151904(int a4, int a5)
{
    register int t0;
    register int t11;
    register int t3;
    register int t4;

    t0 = FUN_0c03f444(0x5, 0x1, 0x3);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1519B2;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x20F;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        FUN_0c187798(0x0);
        *(unsigned int *)((t0 + 0x38)) = a5;
        t3 = t4;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t4) + 0x0))), 0x0, 0xD, (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t4) + 0x0))) + 0x0)) = 0x1;
            t3 = (t3 + 0x1);
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t4) + 0x0))) + 0x6)) = 0x3F;
            t4 = (t4 + 0x4);
            if ((int)(signed char)t3 >= (int)0x3) {
                break;
            }
        }
        t11 = 0x3F;
    }
    return t11;
}
