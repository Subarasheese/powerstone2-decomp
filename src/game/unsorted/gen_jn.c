/* Straight-line functions with calls and guards (batch gen_jn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382C_ushort { char p[0x382C]; unsigned short v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c079a78(void);
int FUN_0c079b4e(int);
int FUN_0c079b94(int);
int FUN_0c07d2c4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c079c44(int a4);
int FUN_0c06f804(int a4, int a5, int a6);
int FUN_0c06f83c(int a4, int a5, int a6);

int FUN_0c079c44(int a4)
{
    int t0;

    (((struct o382C_ushort *)(a4))->v) = 0x0;
    (((struct o3749_uchar *)(a4))->v) = 0x2;
    if (((int)(*(signed char *)((a4 + 0x16))) > 0) && (t0 = *(signed char *)((a4 + 0x130)), t0 != 0)) {
        return 0x130;
    }
    if ((*(signed char *)((a4 + 0x16))) != 0) {
        t0 = FUN_0c07d2c4(a4, ((0x3744 + a4) + 0x2));
        if (t0 == 0) {
            (((struct o382A_ushort *)(a4))->v) = 0x0;
            return FUN_0c085d0c(a4);
        }
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c079b94(a4);
        }
        return FUN_0c079b4e(a4);
    }
    return FUN_0c079a78();
}

int FUN_0c06f804(int a4, int a5, int a6)
{
    register int t0;
    register int t3;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t3 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x5, 0xFFFFFFFF, 0x2, 0x5);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t3 = 0x15;
    }
    return t3;
}

int FUN_0c06f83c(int a4, int a5, int a6)
{
    return FUN_0c037bf6(a4, a5, a6);
}
