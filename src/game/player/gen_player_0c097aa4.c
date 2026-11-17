/* game/player: functions 0C097AA4-0C097B52, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o17_uchar { char p[0x17]; unsigned char v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c07d030(int, int);
int FUN_0c12ae74(int, int);
int FUN_0c097aa4(int a4);

int FUN_0c097aa4(int a4)
{
    int t0;

    if ((*(short *)((a4 + 0x1C))) == 20) {
        FUN_0c07d030(a4, 0x2);
        FUN_0c059e60(a4, 0xA);
        FUN_0c059e60(a4, 0x23);
    }
    t0 = *(short *)((a4 + 0x1C));
    if ((t0 != 54) && ((t0 != 60) && ((t0 != 66) && ((t0 != 72) && ((t0 != 78) && ((t0 != 84) && ((t0 != 90) && (t0 != 96)))))))) {
    } else {
        FUN_0c12ae74(a4, ((int)((int)((*(short *)((a4 + 0x1C))) - 54) / (int)0x3)));
        FUN_0c12ae74(a4, (((int)((int)((*(short *)((a4 + 0x1C))) - 54) / (int)0x3)) + 0x1));
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    return (t0 + 0x1);
}
