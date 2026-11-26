/* Straight-line functions with calls and guards (batch gen_aej): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o130_uchar { char p[0x130]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c059e9a(int, int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c149560(int, int);
int FUN_0c1495c0(int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c149c00(int a4);

int FUN_0c149c00(int a4)
{
    int stk[3];
    register int t0;
    register int t20;
    register int t12;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        FUN_0c149560(a4, 0x1);
        math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
        FUN_0c059e9a((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x3, ((int)stk + 0));
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    t20 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
        t12 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t12 - 1);
        t20 = (short)(t12 - 1);
        if ((int)(short)(t12 - 1) <= 0) {
            FUN_0c0b21ac(a4, 0x7);
            (((struct o130_uchar *)(a4))->v) = 0x0;
            t20 = (FUN_0c1495c0(a4, 0x1, 0x12C));
        }
    }
    return t20;
}
