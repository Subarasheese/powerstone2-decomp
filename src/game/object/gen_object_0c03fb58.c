/* game/object: functions 0C03FB58-0C03FBCC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o114_int { char p[0x114]; int v; };
struct o114_uint { char p[0x114]; unsigned int v; };
int FUN_0c03fb58(int a4);
int FUN_0c03fb78(int a4, int a5);

int FUN_0c03fb58(int a4)
{
    register int t0;

    if ((*(int *)0xC40D6C4) != 0) {
        t0 = *(int *)0xC40D6C4;
        *(unsigned int *)0xC40D6C4 = (t0 - 1);
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((((t0 - 1) << 2) + 0xC40D644)));
        t0 = 0xC40D644;
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
    }
    return t0;
}

int FUN_0c03fb78(int a4, int a5)
{
    register int t0;
    register int t6;
    register int t1;
    register int t2;

    t0 = (((struct o114_int *)(a4))->v);
    t6 = 0x1;
    if ((int)t0 < (int)(t0 + a5)) {
        t1 = (t0 << 2);
        t2 = t0;
        for (;;) {
            FUN_0c03fb58(((0x118 + a4) + t1));
            if ((*(int *)((((0x118 + a4) + t1) + 0x0))) == 0) {
                break;
            }
            t2 = (t2 + 0x1);
            (((struct o114_uint *)(a4))->v) = (((((struct o114_int *)(a4))->v)) + 0x1);
            t1 = (t1 + 0x4);
            if ((int)t2 >= (int)(t0 + a5)) {
                return 0x1;
            }
        }
        t6 = 0x0;
    }
    return t6;
}
