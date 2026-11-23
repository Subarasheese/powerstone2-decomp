/* game/system: functions 0C02CBCC-0C02DA3A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c02cd20(int, ...);
int FUN_0c02cdcc(int);
int FUN_0c02cf88(void);
int FUN_0c02d16c(int);
int FUN_0c02d208(void);
int sys_vsync_handler_install(void);
int FUN_0c02d630(void);
int FUN_0c02d88a(void);
int ADXT_Finish(void);
int FUN_0c056f20(void);
int FUN_0c056f40(void);
int FUN_0c05ac14(void);
int FUN_0c0fb6a6(void);
int nlWaitVSync(void);
int FUN_0c17d980(void);
int sys_set_exception_area(int);
int FUN_0c183074(int);
int FUN_0c2ae992(void);
int FUN_0c2b15c8(int, int);
int syHwInit(void);
int syHwInit2(void);
extern void _builtin_set_imask(int);
int FUN_0c02d046(int a4);
float FUN_0c02d2a8(void);

int FUN_0c02d046(int a4)
{
    FUN_0c0fb6a6();
    FUN_0c02cdcc(a4);
    FUN_0c02cd20(a4);
    return FUN_0c02cf88();
}

float FUN_0c02d2a8(void)
{
    register int t0;
    register int t1;

    t1 = _builtin_get_fpscr();
    (((struct o1C_uint *)0xC30EFC4)->v) = 0x0;
    _builtin_set_fpscr((t1 & 0xFFFFFFFC));
    (((struct o14_uint *)0xC30EFC4)->v) = 0x0;
    (((struct o18_uint *)0xC30EFC4)->v) = 0x3;
    _builtin_set_imask(0xE);
    (((struct o4_uint *)0xC5421D0)->v) = 0x1;
    *(unsigned int *)0xC31F2A0 = 0xC31F200;
    sys_set_exception_area(0xC31F200);
    syHwInit();
    FUN_0c02d208();
    *(volatile int *)0xC5421D0;
    FUN_0c02d16c(*(int *)(0xC541F3C + 0x294));  /* manual: the original passes g_game_work[0x294] (the video mode FUN_0c02d208 set) in r4 */
    FUN_0c2b15c8(0xC33A880, 0x80000);
    FUN_0c2ae992();
    FUN_0c183074(0x0);
    _builtin_set_imask(0xE);
    syHwInit2();
    _builtin_set_imask(0x0);
    FUN_0c02d630();
    FUN_0c17d980();
    sys_vsync_handler_install();
    _builtin_set_imask(0x0);
    (((struct o8_uint *)0xC30EFC4)->v) = 0x0;
    *(unsigned int *)0xC3BBFF0 = 0x0;
    (((struct o4_uint *)0xC30EFC4)->v) = 0x0;
    for (;;) {
        ADXT_Finish();
        t1 = t0;
        if (((((struct o2C_int *)0xC542430)->v)) == 0) {
            t0 = 0xC056F40;
            FUN_0c056f40();
            t1 = 0xC056F40;
        }
        t0 = t1;
        t0 = 0xC056F20;
        if (((((struct o0_int *)0xC5421D0)->v)) == 19) {
            t1 = (((struct o20_int *)0xC30EFC4)->v);
            (((struct o20_uint *)0xC30EFC4)->v) = (t1 + 0x1);
            if ((unsigned int)(t1 + 0x1) >= (unsigned int)0x5) {
                (((struct o0_uint *)0xC542430)->v) = 0x0;
                (((struct o20_uint *)0xC30EFC4)->v) = 0x0;
            } else {
                (((struct o0_uint *)0xC542430)->v) = 0x1;
            }
            if (((((struct o4_int *)0xC542430)->v)) != 0) {
                nlWaitVSync();
                if (((((struct o2C_int *)0xC542430)->v)) == 0) {
                    FUN_0c056f20();
                }
            }
        } else {
            (((struct o0_uint *)0xC542430)->v) = 0x1;
            if (((((struct o4_int *)0xC542430)->v)) != 0) {
                nlWaitVSync();
            }
            if (((((struct o2C_int *)0xC542430)->v)) == 0) {
                FUN_0c056f20();
            }
        }
        t0 = 0xC05AC14;
        (((struct o0_uint *)0xC30EFC4)->v) = 0x0;
        (((struct o2C_uint *)0xC542430)->v) = 0x0;
        FUN_0c05ac14();
        if (((((struct o4_int *)0xC5421D0)->v)) == 0) {
            break;
        }
    }
    return FUN_0c02d88a();
}

