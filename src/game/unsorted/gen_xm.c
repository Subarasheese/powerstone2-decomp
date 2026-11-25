/* Straight-line functions with calls and guards (batch gen_xm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c04f358(int a4, int a5, int a6, int a7);

int FUN_0c04f358(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        switch (t0) {
        case 1:
            break;
        case 2:
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.0500000007f);
            (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) + 0.0500000007f);
            (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) + 0.0500000007f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        case 3:
            break;
        default:
            if (t0 != 4) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0500000007f);
            (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - 0.0500000007f);
            (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0500000007f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
