/* game/unsorted: functions 0C02CB10-0C02CB8A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c01e9e4(void);
extern int FUN_0c020f98();
extern int FUN_0c021998();
int FUN_0c02ae40(int);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0527e6(void);
int FUN_0c0573d8(void);
int game_reset_objects(void);
int FUN_0c05b1d4(void);
int FUN_0c05f7a0(int);
int FUN_0c07c436(void);
int FUN_0c02cb10(int a4, int a5, int a6, int a7);

int FUN_0c02cb10(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;

    t0 = *(signed char *)0xC541F41;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return FUN_0c05f7a0(0x6);
        }
        if ((*(signed char *)0xC541F43) == 0) {
            return ((int (*)(int, int, int, int))(FUN_0c020f98))(0xC541F41, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(FUN_0c021998))(0xC541F41, a5, a6, a7);
    }
    *(unsigned char *)0xC541F41 = ((*(signed char *)0xC541F41) + 0x1);
    (((struct o8_uint *)0xC542440)->v) = 0x0;
    (((struct o4_uint *)0xC542440)->v) = 0x0;
    (((struct o0_uint *)0xC542440)->v) = 0x0;
    FUN_0c01e9e4();
    FUN_0c07c436();
    game_reset_objects();
    *(unsigned char *)0xC30EFA5 = 0x0;
    FUN_0c0573d8();
    FUN_0c0527e6();
    FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c05b1d4();
    FUN_0c036de8(0x21, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c02ae40(0x2);
    if ((*(signed char *)0xC541F43) == 0) {
        return ((int (*)(void))(FUN_0c020f98))();
    }
    return ((int (*)(void))(FUN_0c021998))();
}
