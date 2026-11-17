/* game/menu: functions 0C101C2C-0C101CE4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03f40c(int);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c05f222(void);
int FUN_0c05f22c(int);
int dbg_set_cell_size(int, int);
int FUN_0c17a360(int);
int FUN_0c17a4c0(int, int);
int FUN_0c17a550(int);
int FUN_0c101c2c(void);

int FUN_0c101c2c(void)
{
    int stk[2];
    register int t17;
    register int t18;

    if ((unsigned char)(*(signed char *)0xC541F43) == 0) {
        *(unsigned char *)0xC541F43 = ((*(signed char *)0xC541F43) + 0x1);
        FUN_0c0527e6();
        FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o0_uint *)0xC542440)->v) = 0xFF4040F0;
        (((struct o4_uint *)0xC542440)->v) = 0xFF4040F0;
        (((struct o8_uint *)0xC542440)->v) = 0xFF404080;
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
    }
    dbg_set_cell_size(0x20, 0x20);
    FUN_0c17a550(0xFFFFFF3F);
    FUN_0c17a4c0(0x2, 0x2);
    FUN_0c17a360(0xC1FC4D0);
    dbg_set_cell_size(0x10, 0x10);
    FUN_0c17a550(0xFF1FFF3F);
    FUN_0c17a4c0(0x5, 0x7);
    FUN_0c17a360(0xC1FC4DC);
    dbg_set_cell_size(0x8, 0x8);
    t17 = FUN_0c05f22c(0x40);
    if (t17 == 0) {
        t18 = FUN_0c05f22c(0x8000);
        if (t18 != 0) {
            FUN_0c05f222();
        }
    } else {
        FUN_0c05f222();
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038e88(0x8);
}
