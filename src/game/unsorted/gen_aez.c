/* Straight-line functions with calls and guards (batch gen_aez): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0d9540(int a4, int a5, int a6, int a7);

int FUN_0c0d9540(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, 0x1, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        t1 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC287AF0 + (((t1 << 1) + t1) << 2))); }
        *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC287B20 + ((*(signed char *)((a4 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        (((struct o126_uchar *)(a4))->v) = 0x2;
        *(unsigned short *)((a4 + 0x1C)) = 0x5DC;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t1 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
    }
    return t1;
}
