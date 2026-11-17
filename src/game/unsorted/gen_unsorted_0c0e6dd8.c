/* game/unsorted: functions 0C0E6DD8-0C0E6E5A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c0e6dd8(int a4, int a5);

int FUN_0c0e6dd8(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t11;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t11 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x49, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oC8_int *)(t0))->v)), 0x0, 0x49, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC0E6D4E;
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        (((struct o2C_float *)(t0))->v) = -150.0f;
        t11 = 0x2C;
    }
    return t11;
}
