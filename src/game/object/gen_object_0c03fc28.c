/* game/object: functions 0C03FC28-0C03FC88, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o64_ushort { char p[0x64]; unsigned short v; };
int FUN_0c187798(void);
int memset(int, int, int);
int FUN_0c03fc28(void);

int FUN_0c03fc28(void)
{
    register int t0;
    register int t1;
    register int t4;

    t0 = 0xC40DC28;
    t1 = 0xC40D6C8;
    for (;;) {
        memset(t1, 0x0, 0xAC);
        FUN_0c187798();
        t4 = t1;
        t1 = (t1 + 0xAC);
        (((struct o64_ushort *)(t4))->v) = (*(short *)0xC1B7A30);
        *(unsigned int *)((t0 + 0x0)) = t4;
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC40DC28) {
            break;
        }
    }
    *(unsigned int *)0xC40DC48 = 0x8;
    return 0x64;
}
