/* game/unsorted: functions 0C0D5C10-0C0D5CC6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c0d5c10(int a4, int a5);

int FUN_0c0d5c10(int a4, int a5)
{
    register int t0;
    register int t2;
    register int t3;
    register int t9;

    t0 = 0x0;
    for (;;) {
        t2 = FUN_0c037320(0x63, (*(int *)0xC4B410C));
        t3 = FUN_0c03f444(0x1, 0x0, t2);
        t9 = t3;
        if (t3 != 0) {
            FUN_0c03733c(t3, 0x63, (*(int *)0xC4B410C));
            *(unsigned int *)((t3 + 0x4)) = 0xC0D59A8;
            *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t3 + 0x2)) = t0;
            (((struct oAC_ushort *)(t3))->v) = 0xF;
            (((struct oA9_uchar *)(t3))->v) = 0x21;
            *(unsigned int *)((t3 + 0x10)) = a4;
            (((struct oA4_uint *)(t3))->v) = (((((struct oC8_int *)(a4))->v)) + 0x28);
            *(unsigned short *)((t3 + 0x1C)) = a5;
            FUN_0c07e420(t3, 0x2);
            (((struct o48_float *)(t3))->v) = 1.0f;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 1.0f;
            t9 = (FUN_0c064d24(t3, 0x2, 0xA, 0x0, 0x100, 0x0, 0x0, 0x0));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t9;
}
