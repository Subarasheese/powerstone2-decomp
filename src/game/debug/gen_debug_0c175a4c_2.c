/* game/debug: functions 0C175A4C-0C1770FE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
int FUN_0c175cac(void);
int FUN_0c17623e(void);
int FUN_0c1766e6(int, int, int, int, int);
int FUN_0c176890(void);

int FUN_0c176890(void)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t32;

    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0xC5426C4;
    for (;;) {
        (((struct o64_uint *)((0xC475F28 + (t0 * 0x74))))->v) = 0x0;
        if ((unsigned short)(*(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC5426C4) + 0x10))) != ((((struct o68_int *)((0xC475F28 + (t0 * 0x74))))->v))) {
            (((struct o64_uint *)((0xC475F28 + (t0 * 0x74))))->v) = (unsigned short)(*(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC5426C4) + 0x10)));
            (((struct o6C_uint *)((0xC475F28 + (t0 * 0x74))))->v) = 0x0;
            (((struct o70_uint *)((0xC475F28 + (t0 * 0x74))))->v) = 0x0;
        } else {
            if ((int)((((struct o6C_int *)((0xC475F28 + (t0 * 0x74))))->v)) > (int)0x14) {
                (((struct o70_uint *)((0xC475F28 + (t0 * 0x74))))->v) = (((((struct o70_int *)((0xC475F28 + (t0 * 0x74))))->v)) + 0x1);
                if ((int)((((struct o70_int *)((0xC475F28 + (t0 * 0x74))))->v)) > (int)0x2) {
                    (((struct o70_uint *)((0xC475F28 + (t0 * 0x74))))->v) = 0x0;
                    (((struct o64_uint *)((0xC475F28 + (t0 * 0x74))))->v) = (unsigned short)(*(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC5426C4) + 0x10)));
                }
            } else {
                (((struct o6C_uint *)((0xC475F28 + t2)))->v) = (((((struct o6C_int *)((0xC475F28 + t2)))->v)) + 0x1);
            }
        }
        t0 = (t0 + 0x1);
        t32 = (0x68 + (0xC475F28 + t1));
        t1 = (t1 + 0x74);
        *(unsigned int *)((t32 + 0x0)) = (unsigned short)(*(short *)((t3 + 0x10)));
        t3 = (t3 + 0x28);
        t2 = (t2 + 0x74);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    if (((unsigned short)(*(short *)0xC5426FC) & 128) != 0) {
        *(unsigned int *)0xC2A5C50 = 0x5;
    } else {
        *(unsigned int *)0xC2A5C50 = 0x1;
    }
    FUN_0c17623e();
    FUN_0c1766e6(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0));
    return FUN_0c175cac();
}
