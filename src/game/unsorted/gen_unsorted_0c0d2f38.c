/* game/unsorted: functions 0C0D2F38-0C0D2FE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0d2f38(int a4);

int FUN_0c0d2f38(int a4)
{
    register int t3;
    register int t13;
    register int t4;
    register int t5;

    t3 = FUN_0c03f444(0x5, 0x0, (*(short *)((((((a4 << 1) + a4) << 2) << 1) + 0xC1C7E20))));
    t13 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = a4;
        *(unsigned int *)((t3 + 0x4)) = 0xC0D2A1C;
        (((struct oAC_ushort *)(t3))->v) = 0x1;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        t4 = 0x0;
        for (;;) {
            if ((int)t4 >= (int)((((struct oC0_int *)(t3))->v))) {
                break;
            }
            t5 = t4;
            t5 = (t5 << 2);
            t5 = (t5 + (0xC4 + t3));
            t5 = (*(int *)((t5 + 0x0)));
            FUN_0c03744a(t5, 0x0, (*(short *)(((((((a4 << 1) + a4) << 2) << 1) + 0xC1C7E20) + 0x2))), (*(int *)0xC4B410C));
            t4 = (t4 + 0x1);
            if (a4 == 1) {
                *(unsigned short *)((t5 + 0x6)) = 0x25;
                (((struct o7C_uint *)(t5))->v) = 0xFFFFC000;
            }
        }
        t13 = 0xC0;
    }
    return t13;
}
