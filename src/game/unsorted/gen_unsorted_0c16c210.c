/* game/unsorted: functions 0C16C210-0C16C294, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c16c210(int a4);

int FUN_0c16c210(int a4)
{
    register int t2;
    register int t9;
    register float u6;

    FUN_0c037320(0x4A, (*(int *)0xC4B40D8));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t9 = t2;
    if (t2 != 0) {
        *(unsigned int *)((t2 + 0x4)) = 0xC16C294;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t2 + 0x2)) = 0x0;
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x0, 0x4A, (*(int *)0xC4B40D8));
        u6 = *(float *)0xC16C318;
        (((struct o48_float *)(t2))->v) = u6;
        (((struct o44_float *)(t2))->v) = u6;
        (((struct o40_float *)(t2))->v) = u6;
        FUN_0c187798();
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) + 50.0f);
        t9 = 0x2C;
    }
    return t9;
}
