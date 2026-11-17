/* game/unsorted: functions 0C05F7A0-0C05FA58, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c029d84(void);
int FUN_0c05f7a0(void);
int FUN_0c05f7fa(void);
int FUN_0c05fa10(void);

int FUN_0c05f7fa(void)
{
    register int t0;

    t0 = FUN_0c05f7a0();
    *(unsigned int *)0xC46E1E0 = 0x1;
    return t0;
}

int FUN_0c05fa10(void)
{
    register int t0;

    t0 = (((struct o0_int *)0xC46E1D8)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            return 0x0;
        }
        t0 = (((struct o4_int *)0xC46E1D8)->v);
        (((struct o4_uint *)0xC46E1D8)->v) = (t0 - 1);
        if ((int)(t0 - 1) >= 0) {
            t0 = FUN_0c029d84();
            if (t0 != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    *(unsigned char *)0xC30542C = 0x0;
    (((struct o4_uint *)0xC46E1D8)->v) = 0x708;
    (((struct o0_uint *)0xC46E1D8)->v) = (((((struct o0_int *)0xC46E1D8)->v)) + 0x1);
    return 0x0;
}
