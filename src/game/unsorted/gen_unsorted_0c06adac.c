/* game/unsorted: functions 0C06ADAC-0C06AE4C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o371A_uchar { char p[0x371A]; unsigned char v; };
struct o371C_uchar { char p[0x371C]; unsigned char v; };
struct o37B8_float { char p[0x37B8]; float v; };
int FUN_0c067294(int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c06adac(int a4, int a5, int a6, int a7);

int FUN_0c06adac(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t0 = *(short *)((a4 + 0x1C));
    if ((int)t0 > (int)0xB4) {
        (((struct o3717_uchar *)(a4))->v) = 0x40;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return ((int (*)(int, int, int, int))(FUN_0c085cac))(a4, 0x40, 0x0, a7);
    }
    if (t0 == 30) {
        if ((*(signed char *)((a4 + 0x371C))) == 0) {
            (((struct o371C_uchar *)(a4))->v) = 0x1;
            (((struct o37B8_float *)(a4))->v) = (*(float *)0xC06AEC4);
            if ((*(signed char *)((a4 + 0x2))) != 14) {
                (((struct o371A_uchar *)(a4))->v) = 0x1;
                FUN_0c067294(a4, a5, a6);
            }
        } else {
            (((struct o371A_uchar *)(a4))->v) = 0x0;
            (((struct o371C_uchar *)(a4))->v) = 0x0;
            FUN_0c067294(a4, a5, a6);
        }
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(signed char *)((a4 + 0x15));
    if ((t0 != 0) && (t0 == 1)) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t1 != 0) {
            (((struct o3717_uchar *)(a4))->v) = 0x6;
            (((struct o3718_uchar *)(a4))->v) = 0x0;
            return ((int (*)(int, int, int))(FUN_0c085cac))(a4, 0x6, 0x0);
        }
        return t1;
    }
    return t0;
}
