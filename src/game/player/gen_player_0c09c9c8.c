/* game/player: functions 0C09C9C8-0C09CAC8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o375A_uchar { char p[0x375A]; unsigned char v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o38F8_int { char p[0x38F8]; int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c09c9c8(int a4);
int FUN_0c09ca20(int a4, int a5);

int FUN_0c09c9c8(int a4)
{
    int t0;

    if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
        if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x100) != 0) {
            return 0x2;
        }
        if ((((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) && (t0 = (((struct o42C_short *)(a4))->v), ((unsigned short)t0 & 128) != 0)) {
            return 0x3;
        }
    }
    t0 = (((struct o430_short *)(a4))->v);
    if (((0x200 & (unsigned short)t0) == 0) && ((0x80 & (unsigned short)t0) == 0)) {
        return 0x0;
    }
    return 0x1;
}

