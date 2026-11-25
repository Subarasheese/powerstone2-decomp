/* game/unsorted: functions 0C04F20C-0C04F320, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c04f20c(int a4, int a5, int a6, int a7);
int FUN_0c04f29e(void);


int FUN_0c04f29e(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x0, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x8, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC04F20C;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        FUN_0c03733c(t1, 0x0, (*(int *)0xC4B410C));
        (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) / 64.0f);
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) / 64.0f);
        (((struct o30_float *)(t1))->v) = -10.0f;
        (((struct o44_float *)(t1))->v) = 0.015625f;
        (((struct o40_float *)(t1))->v) = 0.015625f;
        (((struct o48_float *)(t1))->v) = 1.56249996e-07f;
        (((struct oAC_ushort *)(t1))->v) = 0x41F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) - 0.15625f);
        t0 = 0x28;
    }
    return t0;
}
