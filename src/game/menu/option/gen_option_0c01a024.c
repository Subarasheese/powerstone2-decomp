/* game/menu/option: functions 0C01A024-0C01A270, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c01c714(int, int, int);
int FUN_0c01cc56(int, int);
int thunk_FUN_0c03f346(int, int);
int FUN_0c01cd2c(int);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c05aab6(int, int);
int nlLocate(int, int);
int dbg_printf(int, ...);
int FUN_0c01a024(void);

int FUN_0c01a024(void)
{
    int stk[9];
    register int t7;
    register int t8;
    register int t14;
    register int t15;
    register int t16;
    register int t24;
    register int t11;

    nlLocate(0x3, 0xF);
    *(int *)((int)stk + 12) = (((((struct o2_short *)0xC20DF7C)->v)));
    *(int *)((int)stk + 8) = 0xC1A75C0;
    dbg_printf(0xC1A75C0);
    *(int *)((int)stk + 4) = (((((struct o0_short *)0xC20DF7C)->v)));
    *(int *)((int)stk + 0) = 0xC1A75D0;
    dbg_printf(0xC1A75D0);
    t7 = *(signed char *)0xC30EF69;
    t8 = (((struct o0_int *)0xC305040)->v);
    if ((unsigned char)t7 != 0) {
        if ((unsigned char)t7 != 1) {
            if ((unsigned char)t7 != 2) {
                if ((unsigned char)t7 != 3) {
                    thunk_FUN_0c03f346(t8, 0xC30EF69);
                    t11 = 0x0;
                } else {
                    thunk_FUN_0c03f346(t8, 0xC30EF69);
                    t11 = 0x1;
                }
                *(unsigned char *)0xC30EF69 = t11;
                return t11;
            }
            t14 = FUN_0c01c714(0xC20DF7C, ((((struct o4_short *)0xC305040)->v)), 0x0);
            if ((signed char)t14 != 0) {
                t15 = *(signed char *)0xC30EF69;
                *(unsigned char *)0xC30EF69 = (t15 + 0x1);
                return (t15 + 0x1);
            }
            t16 = FUN_0c01cd2c(0x101);
            if ((short)t16 != 0) {
                *(unsigned char *)0xC30EF69 = ((*(signed char *)0xC30EF69) + 0x2);
                if (((((struct o2_short *)0xC20DF7C)->v)) == 2) {
                    (((struct o2_ushort *)0xC20DF7C)->v) = 0x0;
                } else {
                    (((struct o2_ushort *)0xC20DF7C)->v) = (((((struct o2_short *)0xC20DF7C)->v)) + 0x1);
                }
                return FUN_0c05aab6(0x0, 0x6);
            }
            return (short)t16;
        }
        *(unsigned char *)0xC30EF69 = ((*(signed char *)0xC30EF69) + 0x1);
        t24 = FUN_0c01cc56(((((struct o0_short *)0xC20DF7C)->v)), 0xC01A182);
        (((struct o0_uint *)0xC305040)->v) = t24;
        return t24;
    }
    *(unsigned char *)0xC30EF69 = ((*(signed char *)0xC30EF69) + 0x1);
    FUN_0c036de8((*(short *)(((((((struct o2_short *)0xC20DF7C)->v)) << 1) + 0xC20DF4C))), 0xC30EF69, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
    (((struct o4_ushort *)0xC305040)->v) = ((*(int *)(((*(int *)0xC4B410C) + 0xC))) - 1);
    if ((int)((((struct o0_short *)0xC20DF7C)->v)) > (int)((((struct o4_short *)0xC305040)->v))) {
        (((struct o0_ushort *)0xC20DF7C)->v) = 0x0;
    }
    (((struct o8_uint *)0xC542440)->v) = 0xFF222266;
    (((struct o4_uint *)0xC542440)->v) = 0xFF222266;
    (((struct o0_uint *)0xC542440)->v) = 0xFF222266;
    return 0xC20DF7C;
}
