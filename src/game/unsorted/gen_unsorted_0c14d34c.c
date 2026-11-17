/* game/unsorted: functions 0C14D34C-0C14D584, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c187798(void);
int FUN_0c14d34c(int a4, int a5);

int FUN_0c14d34c(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x3, 0x47, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC14D1DC;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((0xC5324D0 + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938))));
        (((struct o48_float *)(t0))->v) = 1.79999995f;
        (((struct o44_float *)(t0))->v) = 1.79999995f;
        (((struct o40_float *)(t0))->v) = 1.79999995f;
        FUN_0c187798();
        (((struct o4C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + -1200.0f);
        (((struct o50_float *)(t0))->v) = -15.0f;
        (((struct o5C_float *)(t0))->v) = -0.800000012f;
        *(unsigned short *)((t0 + 0x1C)) = 0x64;
        FUN_0c064d24(t0, 0x1, 0x32, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0xF0);
        (((struct o12E_ushort *)(t0))->v) = 0x0;
        return FUN_0c07e2f4(t0, 0x61);
    }
    return t0;
}
