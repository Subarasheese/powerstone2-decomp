/* game/object: functions 0C03F608-0C03F840, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_short { char p[0x4]; short v; };
extern int FUN_0c187798();
int memset(int, int, int);
int FUN_0c03f64c(void);
int FUN_0c03f7ce(void);

int FUN_0c03f64c(void)
{
    register int t0;
    register int t1;
    register int t6;
    register int t7;

    t0 = 0xC3F8878;
    t1 = 0xC3F3478;
    for (;;) {
        memset(t1, 0x0, 0xA8);
        *(unsigned char *)((t1 + 0x0)) = (*(signed char *)0xC1B7A22);
        *(unsigned short *)((t1 + 0x6)) = ((((struct o4_short *)0xC1B7A1C)->v));
        (((struct o24_float *)(t1))->v) = ((((struct o0_float *)0xC1B7A1C)->v));
        t6 = FUN_0c187798();
        t7 = t1;
        t1 = (t1 + 0xA8);
        *(unsigned int *)((t0 + 0x0)) = t7;
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC3F8878) {
            break;
        }
    }
    *(unsigned int *)0xC3F8A78 = 0x80;
    return t6;
}

int FUN_0c03f7ce(void)
{
    register int t0;
    register int t1;
    register int t6;
    register int t7;

    t0 = 0xC4091FC;
    t1 = 0xC3F8A7C;
    for (;;) {
        memset(t1, 0x0, 0x83C);
        *(unsigned char *)((t1 + 0x0)) = (*(signed char *)0xC1B7A22);
        *(unsigned short *)((t1 + 0x6)) = ((((struct o4_short *)0xC1B7A1C)->v));
        (((struct o24_float *)(t1))->v) = ((((struct o0_float *)0xC1B7A1C)->v));
        t6 = FUN_0c187798();
        t7 = t1;
        t1 = (t1 + 0x83C);
        *(unsigned int *)((t0 + 0x0)) = t7;
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC4091FC) {
            break;
        }
    }
    *(unsigned int *)0xC40927C = 0x20;
    return t6;
}
