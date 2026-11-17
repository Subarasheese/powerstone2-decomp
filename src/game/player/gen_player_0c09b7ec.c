/* game/player: functions 0C09B7EC-0C09B8C8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c037bf6(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c09b7ec(int a4, int a5);

int FUN_0c09b7ec(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = a5;
    if ((int)(short)(t0 - 1) <= (int)0x10) {
        t0 = *(int *)((a4 + 0x38));
        t2 = FUN_0c07d774(a4);
        t3 = (unsigned short)(t0 - t2);
        if ((0x8000 & (unsigned short)(t0 - t2)) != 0) {
            t3 = ((unsigned short)(t0 - t2) | 0xFFFF0000);
        }
        if (((int)t3 <= (int)0xFFFFF8E4) || ((int)t3 >= (int)0x71C)) {
            if ((int)t3 < 0) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
            } else {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x71C);
            }
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) & 0xFFFF);
            t0 = 0x71C;
        }
        t1 = t0;
    }
    t0 = FUN_0c037bf6(a4, t1);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x0, 0x0, (t0), 0x0, 0x0);
        t0 = (((struct o118_int *)(a4))->v);
        t2 = *(short *)((a4 + 0x1C));
        (((struct o98_float *)(t0))->v) = (float)(signed char)t2;
        (((struct o94_float *)(t0))->v) = (float)(signed char)t2;
        t0 = (((struct o11C_int *)(a4))->v);
        t2 = *(short *)((a4 + 0x1C));
        (((struct o98_float *)(t0))->v) = (float)(signed char)t2;
        (((struct o94_float *)(t0))->v) = (float)(signed char)t2;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
