/* game/player: functions 0C07E2C4-0C07E2F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o130_uchar { char p[0x130]; unsigned char v; };
struct o3848_int { char p[0x3848]; int v; };
struct o3848_uint { char p[0x3848]; unsigned int v; };
struct o430_short { char p[0x430]; short v; };
int FUN_0c07e2c4(int a4);

int FUN_0c07e2c4(int a4)
{
    if ((*(signed char *)((a4 + 0x130))) != 0) {
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        (((struct o3848_uint *)(a4))->v) = ((unsigned short)((((struct o430_short *)(a4))->v)) | ((((struct o3848_int *)(a4))->v)));
        return 0x1;
    }
    (((struct o3848_uint *)(a4))->v) = (unsigned short)((((struct o430_short *)(a4))->v));
    return 0x0;
}
