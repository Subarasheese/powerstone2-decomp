/* game/demo: functions 0C05C240-0C05C424, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o28_short { char p[0x28]; short v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int FUN_0c036de8(int, int, int);
int FUN_0c05c2b4(void);
int dbg_set_cell_size(int, int);
int nlPuts(int);
int nlLocate(int, int);
int FUN_0c05c240(int a4, int a5, int a6, Stk2 s);
int FUN_0c05c372(void);
int FUN_0c05c37c(int a4, int a5, int a6);
int FUN_0c05c3e4(void);

int FUN_0c05c240(int a4, int a5, int a6, Stk2 s)
{
    dbg_set_cell_size(s.w[0], s.w[1]);
    nlLocate(a5, a6);
    nlPuts(a4);
    return dbg_set_cell_size(0x8, 0x8);
}

int FUN_0c05c372(void)
{
    *(unsigned char *)0xC541F41 = ((*(signed char *)0xC541F41) + 0x1);
    return FUN_0c05c2b4();
}

int FUN_0c05c37c(int a4, int a5, int a6)
{
    (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
    *(unsigned short *)0xC541F4C = 0xB4;
    if ((*(int *)0xC2577BC) == 0) {
        FUN_0c036de8(0x0, a5, a6);
        *(unsigned int *)0xC2577BC = ((*(int *)0xC2577BC) + 0x1);
    }
    return FUN_0c05c2b4();
}

int FUN_0c05c3e4(void)
{
    int t0;
    register int t1;

    if ((((unsigned short)((((struct o0_short *)0xC5426D8)->v)) & 0x3CF) == 0) && (t0 = (((struct o28_short *)0xC5426D8)->v), ((unsigned short)t0 & 0x3CF) == 0)) {
    } else {
        (((struct oC_ushort *)0xC541F40)->v) = 0x1;
    }
    FUN_0c05c2b4();
    (((struct oC_ushort *)0xC541F40)->v) = (((((struct oC_short *)0xC541F40)->v)) - 1);
    t0 = (((struct oC_short *)0xC541F40)->v);
    t1 = t0;
    if (t0 == 0) {
        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
        (((struct o1_uchar *)0xC541F40)->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}
