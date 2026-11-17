/* game/flow: functions 0C10739C-0C1073E2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c10739c(void);

int FUN_0c10739c(void)
{
    (((struct o14_uchar *)(((((struct o0_int *)0xC474B90)->v))))->v) = 0x63;
    (((struct o0_uint *)0xC474B90)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o14_int *)0xC474B90)->v))))->v) = 0x63;
    (((struct o14_uint *)0xC474B90)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o10_int *)0xC474B90)->v))))->v) = 0x63;
    (((struct o10_uint *)0xC474B90)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o20_int *)0xC474B90)->v))))->v) = 0x63;
    (((struct o20_uint *)0xC474B90)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o8_int *)0xC474B90)->v))))->v) = 0x63;
    (((struct o8_uint *)0xC474B90)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o4_int *)0xC474B90)->v))))->v) = 0x63;
    (((struct o4_uint *)0xC474B90)->v) = 0x0;
    return 0x14;
}
