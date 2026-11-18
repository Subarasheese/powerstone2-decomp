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


