/* game/unsorted: functions 0C06BA6C-0C06BAC8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
int FUN_0c07ebe6(int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c06ba6c(int a4);

int FUN_0c06ba6c(int a4)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x16));
    if ((t0 != 0) && ((t0 != 1) && (t0 != 3))) {
        
        return t0;
    }
    t0 = FUN_0c07ebe6(a4);
    if (t0 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x5;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0x5, 0x0);
    }
    t0 = FUN_0c07f18c(a4);
    t1 = t0;
    if (t0 != 0) {
        t1 = (FUN_0c07fea4(a4, 0x0));
    }
    return t1;
}
