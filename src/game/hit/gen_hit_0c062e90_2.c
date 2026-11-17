/* game/hit: functions 0C062E90-0C064D24, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40C_uint { char p[0x40C]; unsigned int v; };
struct o410_uint { char p[0x410]; unsigned int v; };
int FUN_0c056eae(int);
int FUN_0c056eee(void);
int FUN_0c06104e(void);
int FUN_0c063da2(void);
int FUN_0c063f06(void);
int FUN_0c064b5a(int, int);
int FUN_0c064bd8(int, int, float);
int FUN_0c064c4a(int, int, float);
int FUN_0c0e2390(int, int, int);
int FUN_0c187798(int);
int FUN_0c063ea0(int a4, float f4);
int FUN_0c063f24(void);
int FUN_0c064cbc(int a4, int a5, int a6, float f4);

int FUN_0c063ea0(int a4, float f4)
{
    register int t1;
    register float u5;
    int t0;
    register int t9;
    register float u6;

    t1 = a4;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t0 = 0x12E;
        if ((*(short *)((t1 + t0))) != 0) {
            t0 = (FUN_0c0e2390((0x178 + t1), (t1 + 0x28), (0x178 + t1)));
            t0 = 0x17C;
            u5 = *(float *)((t1 + t0));
            if ((u5 > 0.0f) && (t0 = 0xC063F94, u6 = *(float *)((t0 + 0x0)), u6 > u5)) {
                t0 = 0x17C;
                *(float *)((t1 + t0)) = 0.0f;
            }
        } else {
            t9 = a4;
        }
        t0 = 0xC;
        t0 = (FUN_0c187798(t9));
        t1 = (*(int *)((t1 + 0xC)));
    }
    return t0;
}

int FUN_0c063f24(void)
{
    FUN_0c06104e();
    *(float *)0xC471A64 = (*(float *)0xC5324C8);
    FUN_0c056eae(0x6);
    FUN_0c063da2();
    FUN_0c063f06();
    return FUN_0c056eee();
}

int FUN_0c064cbc(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a6 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = FUN_0c064bd8(a4, (a6 + 0x8), f4);
                t2 = t0;
                if (t0 != 0) {
                    (((struct o40C_uint *)(a4))->v) = a5;
                    (((struct o410_uint *)(a4))->v) = a6;
                    t2 = 0x410;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = FUN_0c064b5a(a4, (a6 + 0x8));
            t2 = t1;
            if (t1 != 0) {
                (((struct o40C_uint *)(a4))->v) = a5;
                (((struct o410_uint *)(a4))->v) = a6;
                t2 = 0x410;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = FUN_0c064c4a(a4, (a6 + 0x8), f4);
        t2 = t0;
        if (t0 == 0) {
        } else {
            (((struct o40C_uint *)(a4))->v) = a5;
            (((struct o410_uint *)(a4))->v) = a6;
            t2 = 0x410;
        }
        t1 = t2;
    }
    return t1;
}
