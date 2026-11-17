/* game/unsorted: functions 0C0EC3FC-0C0EC69C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_ushort { char p[0x128]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c0ec438(int);
int FUN_0c0ec550(int);
int FUN_0c0ec5ea(int a4, int a5, int a6, int a7);

int FUN_0c0ec5ea(int a4, int a5, int a6, int a7)
{
    int t0;

    if ((int)(*(signed char *)0xC54098D) >= (int)0xE) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) + 0x64);
        }
        *(unsigned int *)((a4 + 0x10)) = (*(int *)0xC540E1C);
        (((struct o128_ushort *)(a4))->v) = 0x40;
        FUN_0c07e420(a4, 0x5);
    }
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 1)) {
        return FUN_0c0ec550(a4);
    }
    return FUN_0c0ec438(a4);
}
