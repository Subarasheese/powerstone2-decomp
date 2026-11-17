/* game/unsorted: functions 0C11E5BC-0C11EAE4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c11e5bc(int, int);
int FUN_0c11e722(int, int);
int FUN_0c11e7f0(int, int);
int FUN_0c11e880(void);
int FUN_0c11e964(int a4);
int FUN_0c11e9c8(int a4, int a5);

int FUN_0c11e964(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    *(unsigned int *)0xC474714 = 0x0;
    t0 = 0x0;
    for (;;) {
        if ((*(int *)((0xC2A090C + (t0 << 2)))) == -1) {
            break;
        }
        t1 = FUN_0c11e5bc(t0, a4);
        if (t1 != 0) {
            t1 = FUN_0c11e722(t0, a4);
            if (t1 != 0) {
                *(unsigned int *)((0xC474410 + ((*(int *)0xC474714) << 2))) = t0;
                t1 = (*(int *)0xC474714);
                t1 = (t1 + 0x1);
                *(unsigned int *)0xC474714 = t1;
                t3 = t1;
            }
        }
        t0 = (t0 + 0x1);
        t1 = t3;
    }
    FUN_0c11e880();
    t0 = *(int *)0xC474714;
    *(unsigned int *)((0xC474410 + (t0 << 2))) = 0xFFFFFFFF;
    return (t0 << 2);
}

int FUN_0c11e9c8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    *(unsigned int *)0xC474714 = 0x0;
    t0 = 0x0;
    for (;;) {
        if (((*(int *)((0xC2A090C + (t0 << 2)))) == -1) || ((int)t0 > (int)0xB6)) {
            break;
        }
        t1 = FUN_0c11e7f0(t0, a5);
        if (t1 != 0) {
            t1 = FUN_0c11e722(t0, a4);
            if (t1 != 0) {
                *(unsigned int *)((0xC474410 + ((*(int *)0xC474714) << 2))) = t0;
                t1 = (*(int *)0xC474714);
                t1 = (t1 + 0x1);
                *(unsigned int *)0xC474714 = t1;
                t3 = t1;
            }
        }
        t0 = (t0 + 0x1);
        t1 = t3;
    }
    FUN_0c11e880();
    t0 = *(int *)0xC474714;
    *(unsigned int *)((0xC474410 + (t0 << 2))) = 0xFFFFFFFF;
    return (t0 << 2);
}
