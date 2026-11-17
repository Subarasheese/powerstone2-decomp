/* game/player: functions 0C0F4AAC-0C0F4B54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int);
int FUN_0c17c130(int, int, int);
int FUN_0c0f4aac(int a4);

int FUN_0c0f4aac(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (*(float *)0xC1CE300));
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x5B0);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x444);
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x71C);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        t0 = *(short *)((a4 + 0x1C));
        if ((int)t0 <= 0) {
            return FUN_0c03f346(a4);
        }
        return t0;
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 <= 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x28;
        t1 = 0x28;
    }
    return t1;
}
