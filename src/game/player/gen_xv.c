/* Straight-line functions with calls and guards (batch gen_xv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c05879c(int, int, int, float);
int FUN_0c0f3d1c(int);
int FUN_0c0f3db8(int, int, int);
int FUN_0c0f3dc8(int, int);
int FUN_0c0f3e66(int, float);
int nlRand(void);
int FUN_0c0f41ac(int a4);

int FUN_0c0f41ac(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x17));
    t1 = 0;
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = 1;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2) + 0xC1C585C) + 0xC)));
        t0 = nlRand();
        t2 = (t0 % 0x2);
        FUN_0c0f3dc8(a4, t2);
        t1 = 1;
    }
    if (t1) {
        t0 = *(signed char *)(((0x41C + a4) + 0x3));
        FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), (*(int *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x4))), (*(float *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x0))));
        t0 = FUN_0c0f3e66(a4, ((((struct o8_float *)((0xC1C585C + (((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2))))->v)));
        if (t0 == 0) {
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                FUN_0c0f3db8(a4, 0x5, 0x0);
            }
        } else {
            FUN_0c0f3db8(a4, 0x5, 0x0);
        }
    }
    return FUN_0c0f3d1c(a4);
}
