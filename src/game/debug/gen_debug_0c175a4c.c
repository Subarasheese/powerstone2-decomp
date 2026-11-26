/* game/debug: functions 0C175A4C-0C1770FE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o70_int { char p[0x70]; int v; };
struct o74_int { char p[0x74]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c059c7a(int, int);
int FUN_0c059ca0(int);
int FUN_0c059cb2(int);
int FUN_0c05a292(int, int, int, int, int);
int FUN_0c05a2b8(int, int, int, int, int);
int FUN_0c05a344(void);
int FUN_0c05a396(int);
int FUN_0c05aa9c(int);
int FUN_0c05aab6(int, int);
int FUN_0c05aad0(int, int, int);
int FUN_0c05ab24(int, int, int);
int FUN_0c05ab7e(int, int);
int FUN_0c05abb2(int, int);
int FUN_0c05abcc(int, int);
int FUN_0c05abfe(int);
int FUN_0c05aca8(int, int);
int FUN_0c05ae28(int);
int game_reset_objects(void);
int FUN_0c17594c(void);
int FUN_0c176890(void);
int dbg_set_cell_size(int, int);
int nlPuts(int);
int nlLocate(int, int);
int FUN_0c17a550(int);
int dbg_printf(int, ...);
int FUN_0c180a6c(int, int, int);
int FUN_0c180b3c(int, int, int, int, int);
int FUN_0c180bec(int, int, int, int, int, int, int);
int nlsndRemainMem(void);
int FUN_0c175a4c(void);
int FUN_0c175cac(void);
int FUN_0c1760c4(int a4, int a5, int a6);
int FUN_0c17623e(int a4);
int FUN_0c1766e6(void);
int FUN_0c176996(void);





int FUN_0c1766e6(void)
{
    int t0;
    register int t1;
    register int t2;

    if (((unsigned short)((((struct o0_short *)0xC54288C)->v)) & 0x200) == 0) {
        FUN_0c1760c4(0x1, 0x7, 0xC2A5FDC);
    } else {
        if (((*(signed char *)0xC475F9C) == 6) && (t0 = (((struct o4_short *)0xC54288C)->v), ((unsigned short)t0 & 0x200) != 0)) {
            game_reset_objects();
            if (((((struct o14_int *)0xC475FA0)->v)) == 0) {
                FUN_0c05a292(((((struct o0_int *)0xC475FA0)->v)), ((((struct o4_int *)0xC475FA0)->v)), ((((struct o8_int *)0xC475FA0)->v)), ((((struct oC_int *)0xC475FA0)->v)), (((((struct o10_int *)0xC475FA0)->v))));
            } else {
                t0 = (((struct o14_int *)0xC475FA0)->v);
                if (t0 == 1) {
                    FUN_0c05a2b8(((((struct o0_int *)0xC475FA0)->v)), ((((struct o4_int *)0xC475FA0)->v)), ((((struct o8_int *)0xC475FA0)->v)), ((((struct oC_int *)0xC475FA0)->v)), (((((struct o10_int *)0xC475FA0)->v))));
                } else {
                    if (t0 == 2) {
                        FUN_0c05a344();
                    } else {
                        if (((((struct o14_int *)0xC475FA0)->v)) == 3) {
                            FUN_0c05a396(((((struct o4_int *)0xC475FA0)->v)));
                        } else {
                            FUN_0c05a292(0xC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                        }
                    }
                }
            }
            *(unsigned char *)0xC542237 = ((((struct o0_int *)0xC475FA0)->v));
            t0 = 0x0;
            for (;;) {
                t1 = *(int *)(((0xC475FA0 + t0) + 0x0));
                t2 = (0xC475FD0 + t0);
                t0 = (t0 + 0x4);
                *(unsigned int *)((t2 + 0x0)) = t1;
                if ((unsigned int)t0 >= (unsigned int)0x1C) {
                    break;
                }
            }
            (((struct o10_uint *)0xC476000)->v) = (nlsndRemainMem());
        } else {
            t0 = *(int *)0xC2A5C50;
            if ((((((struct o0_int *)0xC476000)->v)) & 0x800) != 0) {
                t1 = *(signed char *)0xC475F9C;
                *(unsigned int *)((0xC476014 + (t1 << 2))) = ((*(int *)((0xC476014 + (t1 << 2)))) - t0);
                if ((int)(*(int *)((0xC476014 + ((*(signed char *)0xC475F9C) << 2)))) < 0) {
                    t1 = *(signed char *)0xC475F9C;
                    *(unsigned int *)((0xC476014 + (t1 << 2))) = ((*(int *)((0xC476014 + (t1 << 2)))) + 0x7F);
                }
            } else {
                if ((((((struct o0_int *)0xC476000)->v)) & 0x400) != 0) {
                    t1 = *(signed char *)0xC475F9C;
                    *(unsigned int *)((0xC476014 + (t1 << 2))) = ((*(int *)((0xC476014 + (t1 << 2)))) + t0);
                    if ((int)(*(int *)((0xC476014 + ((*(signed char *)0xC475F9C) << 2)))) > (int)0x7F) {
                        t0 = *(signed char *)0xC475F9C;
                        *(unsigned int *)((0xC476014 + (t0 << 2))) = ((*(int *)((0xC476014 + (t0 << 2)))) - 0x7F);
                    }
                }
            }
        }
    }
    t0 = (((struct o4_short *)0xC54288C)->v);
    if (((unsigned short)t0 & 0x100) != 0) {
        return game_reset_objects();
    }
    return (unsigned short)t0;
}

