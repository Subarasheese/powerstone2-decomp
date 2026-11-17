/* game/unsorted: functions 0C0EE318-0C0EE3BC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c0ee318(void);

int FUN_0c0ee318(void)
{
    int stk[2];
    register int t0;
    register int t10;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t8;

    *(unsigned int *)(((int)stk + 0)) = 0x4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0EE148;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)(((int)stk + 4)) = 0xC1CD0D4;
        t1 = 0x0;
        t2 = 0x60;
        t3 = 0x0;
        for (;;) {
            t5 = *(int *)((((0xC4 + t0) + t3) + 0x0));
            FUN_0c03744a(t5, 0x0, t2, (*(int *)0xC4B410C));
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            *(unsigned short *)((t5 + 0x6)) = 0xF;
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
            t8 = FUN_0c187798();
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x4);
            if ((int)t1 >= (int)(*(int *)(((int)stk + 0)))) {
                break;
            }
        }
        t10 = t8;
    }
    return t10;
}
