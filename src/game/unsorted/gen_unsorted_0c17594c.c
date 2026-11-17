/* game/unsorted: functions 0C17594C-0C175A04, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c059ca0(int);
int FUN_0c059cb2(int);
int FUN_0c05a292(int, int, int, int, int);
int FUN_0c181050(void);
int memset(int, int, int);
int FUN_0c17594c(void);

int FUN_0c17594c(void)
{
    register int t0;

    memset(0xC475F28, 0x0, 0xEC);
    FUN_0c05a292(0x0, 0x0, 0x0, 0x0, 0x0);
    *(unsigned char *)0xC542237 = 0x0;
    *(unsigned int *)0xC2A5C54 = 0x0;
    memset(0xC476028, 0x0, 0x50);
    memset(0xC476078, 0x0, 0x28);
    *(unsigned int *)0xC476010 = (FUN_0c181050());
    *(unsigned int *)0xC2A5FCC = 0x9B;
    (((struct o4_uint *)0xC475F54)->v) = (FUN_0c059ca0(((((struct o0_int *)0xC475F54)->v))));
    (((struct o34_uint *)0xC475F54)->v) = (FUN_0c059cb2(((((struct o0_int *)0xC475F54)->v))));
    t0 = 0xC532498;
    for (;;) {
        (((struct o3714_uchar *)(t0))->v) = 0x1;
        t0 = (t0 + 0x3938);
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
    }
    t0 = 0xC476014;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x7F;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC476028) {
            break;
        }
    }
    *(unsigned char *)0xC541F44 = ((*(signed char *)0xC541F44) + 0x1);
    return 0x3714;
}
