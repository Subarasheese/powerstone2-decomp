/* game/unsorted: functions 0C0579F8-0C057A3C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0579f8(int a4, int a5, float f4, float f5, float f6, float f7);
int FUN_0c057a36(void);

int FUN_0c0579f8(int a4, int a5, float f4, float f5, float f6, float f7)
{
    register int t1;

    t1 = *(int *)(((((a4 << 2) << 1) + 0xC241E74) + 0x0));
    (((struct o18_float *)((t1 + (a5 * 0x1C))))->v) = f4;
    (((struct o8_float *)((t1 + (a5 * 0x1C))))->v) = f4;
    (((struct o10_float *)(((*(int *)(((((a4 << 2) << 1) + 0xC241E74) + 0x0))) + (a5 * 0x1C))))->v) = f5;
    (((struct o14_float *)(((*(int *)(((((a4 << 2) << 1) + 0xC241E74) + 0x0))) + (a5 * 0x1C))))->v) = f6;
    (((struct oC_float *)(((a5 * 0x1C) + (*(int *)(((((a4 << 2) << 1) + 0xC241E74) + 0x0))))))->v) = f7;
    return 0xC;
}

int FUN_0c057a36(void)
{
    return (*(int *)0xC40FA9C);
}
