/* game/unsorted: functions 0C0EE458-0C0EE7D2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0ee318(void);
int FUN_0c0ee458(int);
int FUN_0c0ee476(int);
int FUN_0c0ee4ac(int);
int FUN_0c0ee4cc(int a4, int a5, int a6, int a7);

int FUN_0c0ee4cc(int a4, int a5, int a6, int a7)
{
    register int t2;

    if ((int)(*(signed char *)0xC54098D) >= (int)0xE) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) + 0x64);
            *(unsigned int *)((a4 + 0x10)) = (*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0)));
        }
        *(unsigned int *)((a4 + 0x38)) = 0x2AAA;
        (((struct o128_ushort *)(a4))->v) = 0x40;
        (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
        FUN_0c0ee318();
    }
    (((struct o15_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x15)));
    FUN_0c0ee4ac(a4);
    FUN_0c0ee458(a4);
    return FUN_0c0ee476(a4);
}
