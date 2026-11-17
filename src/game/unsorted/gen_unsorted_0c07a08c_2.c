/* game/unsorted: functions 0C07A08C-0C07AC5E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o3739_uchar { char p[0x3739]; unsigned char v; };
int FUN_0c07a5c4(int);
int FUN_0c07a5f8(int);
int FUN_0c07a62c(int);
int FUN_0c07a85e(void);
int FUN_0c07a96c(int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c07a6aa(int a4, int a5, int a6, int a7);
int FUN_0c07a9c6(int a4);
int FUN_0c07a9e2(int a4, int a5, int a6, int a7);

int FUN_0c07a6aa(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o16_uchar *)(a4))->v) = 0x2;
    (((struct o3739_uchar *)(a4))->v) = 0x11;
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c07a62c(a4);
            }
            return FUN_0c07a5f8(a4);
        }
        return FUN_0c07a5c4(a4);
    }
    return ((int (*)(int, int, int, int))(0xC07A54A))(a4, a5, a6, a7);
}

int FUN_0c07a9c6(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c07a96c(a4);
    }
    return FUN_0c07a85e();
}

int FUN_0c07a9e2(int a4, int a5, int a6, int a7)
{
    return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))), a7);
}
