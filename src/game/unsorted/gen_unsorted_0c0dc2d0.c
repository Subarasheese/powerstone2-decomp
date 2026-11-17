/* game/unsorted: functions 0C0DC2D0-0C0DC528, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c0dc2d0(int a4, int a5);

int FUN_0c0dc2d0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = 0x0;
    for (;;) {
        t3 = FUN_0c03f444(0x5, 0x0, 0x1);
        t2 = t3;
        if (t3 != 0) {
            *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t3 + 0x4)) = 0xC0DC366;
            *(unsigned int *)((t3 + 0x10)) = a4;
            *(unsigned char *)((t3 + 0x2)) = t1;
            (((struct oAC_ushort *)(t3))->v) = 0xF;
            (((struct oA9_uchar *)(t3))->v) = 0x1;
            FUN_0c187798(t3);
            *(unsigned int *)((t0 + 0x38)) = 0x0;
            *(unsigned int *)((t0 + 0x3C)) = 0x0;
            *(unsigned int *)((t0 + 0x34)) = 0x0;
            t3 = ((((struct oC4_int *)(t0))->v));
            FUN_0c03744a(t3, t1, a5, (*(int *)0xC4B410C));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x6)) = 0xF;
            t2 = 0xF;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x2) {
            break;
        }
    }
    return t2;
}
