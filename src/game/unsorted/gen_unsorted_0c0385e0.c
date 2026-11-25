/* game/unsorted: functions 0C0385E0-0C038944, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o160_float { char p[0x160]; float v; };
struct o38CC_int { char p[0x38CC]; int v; };
struct o38CC_uint { char p[0x38CC]; unsigned int v; };
struct o38D0_int { char p[0x38D0]; int v; };
struct o38D0_uint { char p[0x38D0]; unsigned int v; };
struct o38D4_int { char p[0x38D4]; int v; };
struct o38D4_uint { char p[0x38D4]; unsigned int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c059f78(int, int);
int FUN_0c059fae(int, int, int);
int FUN_0c0385e0(int a4, int a5);
int FUN_0c0388e2(int a4, int a5, int a6, int a7);


int FUN_0c0388e2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)a5 < 0) {
        t0 = (*(int *)0xC20ED74);
    } else {
        t0 = (*(int *)((0xC20ED74 + (((*(signed char *)((a4 + 0x2))) + 0x1) << 2))));
    }
    t1 = *(int *)(((((a6 << 2) << 1) + t0) + 0x4));
    t2 = *(int *)(((((a6 << 2) << 1) + t0) + 0x0));
    if ((int)t1 > 0) {
        t0 = t2;
        t2 = 0x0;
        for (;;) {
            if (a7 == (*(int *)((t0 + 0x0)))) {
                break;
            }
            t2 = (t2 + 0x1);
            t0 = (t0 + 0xC);
            if ((int)t2 >= (int)t1) {
                (((struct o38CC_uint *)(a4))->v) = 0x0;
                (((struct o38D0_uint *)(a4))->v) = 0x0;
                (((struct o38D4_uint *)(a4))->v) = 0x0;
                return 0x38D4;
            }
        }
        (((struct o38CC_uint *)(a4))->v) = (*(int *)((t0 + 0x4)));
        (((struct o38D0_uint *)(a4))->v) = 0x0;
        (((struct o38D4_uint *)(a4))->v) = (*(int *)((t0 + 0x8)));
        return 0x38D4;
    }
    (((struct o38CC_uint *)(a4))->v) = 0x0;
    (((struct o38D0_uint *)(a4))->v) = 0x0;
    (((struct o38D4_uint *)(a4))->v) = 0x0;
    return 0x38D4;
}
