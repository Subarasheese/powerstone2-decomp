/* game/unsorted: functions 0C14DBD0-0C14DC36, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c14dbd0(int a4, int a5, int a6, int a7, float f4);

int FUN_0c14dbd0(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t3;
    register int t5;
    register int t10;
    register int t13;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x3714))) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        t13 = 0xA8;
    } else {
        (((struct oA8_uchar *)(a4))->v) = (*(signed char *)((t0 + 0xA8)));
        t3 = 0x0;
        for (;;) {
            t5 = *(int *)((((t3 << 2) + (0xC4 + a4)) + 0x0));
            *(unsigned char *)((t5 + 0x0)) = 0x0;
            t10 = 0x446;
            if (t3 == (*(signed char *)((t0 + 0x446)))) {
                *(unsigned char *)((t5 + 0x0)) = 0x1;
                if (((unsigned short)((((struct oAC_short *)(t0))->v)) & 0x400) != 0) {
                    (((struct o14_float *)(t5))->v) = (((((struct oB0_float *)(t0))->v)));
                } else {
                    (((struct o14_float *)(t5))->v) = 1.0f;
                }
                t10 = 0x14;
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x3) {
                break;
            }
        }
        t13 = t10;
    }
    return t13;
}
