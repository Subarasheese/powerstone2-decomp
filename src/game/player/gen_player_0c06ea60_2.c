/* game/player: functions 0C06EA60-0C06EE3E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o42C_short { char p[0x42C]; short v; };
int FUN_0c037bf6(int);
int FUN_0c06eafc(int);
int FUN_0c085256(int, int);
int FUN_0c085cac(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c06ec2a(int a4);

int FUN_0c06ec2a(int a4)
{
    register int t1;

    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3000) != 0) {
        t1 = FUN_0c06eafc(a4);
        if (t1 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        FUN_0c037bf6(a4);
        return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    }
    FUN_0c085256(a4, 0x1);
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}
