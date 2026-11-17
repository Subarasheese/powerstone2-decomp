/* game/unsorted: functions 0C0E8E4C-0C0E8F0C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e420(int, int);
extern int FUN_0c187798();
int FUN_0c0e8e4c(int a4);

int FUN_0c0e8e4c(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x68, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x68, (*(int *)0xC4B410C));
        *(unsigned int *)((t1 + 0x4)) = 0xC0E8D48;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC0E8D48;
        *(unsigned int *)((t1 + 0x38)) = (*(int *)((a4 + 0x38)));
        (((struct o5C_float *)(t1))->v) = 0.400000006f;
        (((struct o50_float *)(t1))->v) = -10.0f;
        FUN_0c187798();
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) - 20.0f);
        (((struct o54_float *)(t1))->v) = 0.0f;
        (((struct o4C_float *)(t1))->v) = 0.0f;
        FUN_0c07e420(t1, 0x7);
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        t0 = (FUN_0c064d24(t1, 0x3, 0x9, 0x1, 0x100, (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))), 0x0, 0x0));
    }
    return t0;
}
