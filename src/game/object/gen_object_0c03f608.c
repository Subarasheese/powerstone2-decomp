/* game/object: functions 0C03F608-0C03F840, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_short { char p[0x4]; short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
int FUN_0c187798(int);
int memset(int, int, int);
int FUN_0c03f608(int a4);
int FUN_0c03f6be(int a4);
int FUN_0c03f6de(int a4, int a5);
int FUN_0c03f78a(int a4);


int FUN_0c03f6be(int a4)
{
    register int t0;

    if ((*(int *)0xC3F8A78) != 0) {
        t0 = *(int *)0xC3F8A78;
        *(unsigned int *)0xC3F8A78 = (t0 - 1);
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((((t0 - 1) << 2) + 0xC3F8878)));
        t0 = 0xC3F8878;
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
    }
    return t0;
}

int FUN_0c03f6de(int a4, int a5)
{
    register int t0;
    register int t9;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct oC0_int *)(a4))->v);
    t9 = 0x1;
    if ((int)t0 < (int)(t0 + a5)) {
        t1 = (t0 << 2);
        t2 = t0;
        t3 = (t0 << 2);
        for (;;) {
            FUN_0c03f6be(((0xC4 + a4) + t3));
            if ((*(int *)((((0xC4 + a4) + t3) + 0x0))) == 0) {
                break;
            }
            *(unsigned char *)(((*(int *)((((0xC4 + a4) + t1) + 0x0))) + 0x1)) = 0x1;
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x4);
            (((struct oC0_uint *)(a4))->v) = (((((struct oC0_int *)(a4))->v)) + 0x1);
            t3 = (t3 + 0x4);
            if ((int)t2 >= (int)(t0 + a5)) {
                return 0x1;
            }
        }
        t9 = 0x0;
    }
    return t9;
}



