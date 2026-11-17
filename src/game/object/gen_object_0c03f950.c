/* game/object: functions 0C03F950-0C03F9C2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_short { char p[0x4]; short v; };
extern int FUN_0c187798();
int memset(int, int, int);
int FUN_0c03f950(void);

int FUN_0c03f950(void)
{
    register int t0;
    register int t1;
    register int t6;
    register int t7;

    t0 = 0xC40BF80;
    t1 = 0xC409280;
    for (;;) {
        memset(t1, 0x0, 0x90);
        *(unsigned char *)((t1 + 0x0)) = (*(signed char *)0xC1B7A22);
        *(unsigned short *)((t1 + 0x6)) = ((((struct o4_short *)0xC1B7A1C)->v));
        (((struct o24_float *)(t1))->v) = ((((struct o0_float *)0xC1B7A1C)->v));
        t6 = FUN_0c187798();
        t7 = t1;
        t1 = (t1 + 0x90);
        *(unsigned int *)((t0 + 0x0)) = t7;
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC40BF80) {
            break;
        }
    }
    *(unsigned int *)0xC40C0C0 = 0x50;
    return t6;
}
