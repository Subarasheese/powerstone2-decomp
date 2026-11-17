/* game/unsorted: functions 0C06AE50-0C06AEAC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o3790_float { char p[0x3790]; float v; };
struct o430_short { char p[0x430]; short v; };
int FUN_0c07e3fc(int, int);
int FUN_0c07ebe6(int);
int FUN_0c07f172(int);
int FUN_0c084858(int);
int FUN_0c06ae50(int a4);

int FUN_0c06ae50(int a4)
{
    int t0;
    register int t1;

    t1 = FUN_0c07ebe6(a4);
    if (t1 == 0) {
        t1 = FUN_0c07f172(a4);
        if ((t1 == 0) && (t0 = (((struct o430_short *)(a4))->v), ((unsigned short)t0 & 0x200) == 0)) {
            return 0x0;
        }
    }
    FUN_0c084858(a4);
    FUN_0c07e3fc(a4, 0x2);
    (((struct o3790_float *)(a4))->v) = 30.0f;
    *(unsigned short *)((a4 + 0x1E)) = 0x28;
    *(unsigned int *)((((((struct o11C_int *)(a4))->v)) + 0x10)) = 0x0;
    (((struct o15_uchar *)(a4))->v) = 0x3;
    return 0x1;
}
