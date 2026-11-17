/* game/unsorted: functions 0C0D0258-0C0D02F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int memset(int, int, int);
int FUN_0c0d0258(int a4);
int FUN_0c0d02a6(void);

int FUN_0c0d0258(int a4)
{
    register int t1;
    register int t3;

    (((struct o0_uint *)0xC540F90)->v) = 0x0;
    (((struct o4_uint *)0xC540F90)->v) = 0x0;
    *(unsigned int *)0xC540F14 = a4;
    memset(0xC540FA4, 0x0, 0xC0);
    t1 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC540FA4 + t1) + 0x0)) = 0x0;
        t3 = (0xC540FA4 + t1);
        t1 = (t1 + 0xC);
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        if ((unsigned int)t1 >= (unsigned int)0xC0) {
            break;
        }
    }
    return 0xFFFFFFFF;
}

int FUN_0c0d02a6(void)
{
    register int t1;
    register int t3;

    (((struct o0_uint *)0xC540F90)->v) = 0x0;
    (((struct o4_uint *)0xC540F90)->v) = 0x0;
    memset(0xC540FA4, 0x0, 0xC0);
    t1 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC540FA4 + t1) + 0x0)) = 0x0;
        t3 = (0xC540FA4 + t1);
        t1 = (t1 + 0xC);
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        if ((unsigned int)t1 >= (unsigned int)0xC0) {
            break;
        }
    }
    return 0xFFFFFFFF;
}
