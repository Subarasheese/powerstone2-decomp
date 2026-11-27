/* Straight-line functions with calls and guards (batch gen_vo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0d7488(int a4, int a5, int a6, int a7);

int FUN_0c0d7488(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t2 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC28722C + (((t2 << 1) + t2) << 2))); }
        *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC2872EC + ((*(signed char *)((a4 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        (((struct o126_uchar *)(a4))->v) = 0x2;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((t1 == 0) || (t1 == 1)) {
        t1 = *(signed char *)((a4 + 0x2));
        if ((t1 == 7) || ((t1 == 8) || ((t1 == 9) || ((t1 == 10) || (t1 == 11))))) {
            *(unsigned short *)((a4 + 0x1C)) = 0x12C;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        if (((int)(*(signed char *)0xC54223C) > 0) && (t0 = *(signed char *)((a4 + 0x2)), (int)t0 < (int)0xC)) {
            *(unsigned short *)((a4 + 0x1C)) = 0x12C;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t0 = 0x44;
        if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
            t1 = *(signed char *)((a4 + 0x2));
            t2 = t1;
            if ((int)t1 < (int)0x10) {
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
        return t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            return FUN_0c03f346(a4, a5, 0x1, a7);
        }
        return (short)(t0 - 1);
    }
}
