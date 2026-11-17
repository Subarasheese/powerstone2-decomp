/* game/unsorted: functions 0C04D76C-0C04E828, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
extern int FUN_0c03f346();
int FUN_0c04df46(int a4, int a5, int a6);

int FUN_0c04df46(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0x8) {
                return FUN_0c03f346(a4, 0xC542430, a6, 0x3C);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o8_uint *)0xC542440)->v) = 0x0;
        (((struct o4_uint *)0xC542440)->v) = 0x0;
        (((struct o0_uint *)0xC542440)->v) = 0x0;
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = (int)((int)((t0 << 8) - t0) / (int)0x3C);
    (((struct o0_uint *)0xC542440)->v) = ((((t1 << 16) | (t1 << 8)) | t1) | 0xFF000000);
    t0 = (((struct o0_int *)0xC542440)->v);
    (((struct o8_uint *)0xC542440)->v) = t0;
    (((struct o4_uint *)0xC542440)->v) = t0;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
