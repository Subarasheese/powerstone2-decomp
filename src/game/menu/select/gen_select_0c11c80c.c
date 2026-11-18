/* game/menu/select: functions 0C11C80C-0C11C8EC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c18778c(void);
int FUN_0c11c80c(int a4, int a5, int a6, int a7);
int FUN_0c11c8b2(void);
int FUN_0c11c8be(int a4);


int FUN_0c11c8b2(void)
{
    (((struct o14_uchar *)((*(int *)0xC473C44)))->v) = 0x63;
    return 0x14;
}

int FUN_0c11c8be(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11C80C;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)0xC473C44 = t0;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}


