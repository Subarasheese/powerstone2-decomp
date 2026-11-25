/* game/player: functions 0C068ACC-0C0699DE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3850_int { char p[0x3850]; int v; };
struct o42C_short { char p[0x42C]; short v; };
int FUN_0c07cffa(int);
int FUN_0c07d838(int, int, int, int, int, int);
int FUN_0c07d9dc(int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
int FUN_0c080586(int);
int FUN_0c083cf0(int, int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0693b6(int a4);
int FUN_0c0694b6(int a4);
int FUN_0c0695b6(int a4, int a5, int a6, int a7);



int FUN_0c0695b6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = FUN_0c083cf0(a4, a5, a6, a7);
    if (t0 == 0) {
        if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x100) != 0) {
            t3 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t3 + 0x1);
            if ((int)(short)(t3 + 0x1) >= (int)0x4) {
                (((struct o3717_uchar *)(a4))->v) = 0x5;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                return FUN_0c085cac(a4, 0x5, 0x0);
            }
            return (short)(t3 + 0x1);
        }
        (((struct o3717_uchar *)(a4))->v) = 0x5;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0x5, 0x0);
    }
    return t0;
}
