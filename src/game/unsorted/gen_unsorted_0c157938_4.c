/* game/unsorted: functions 0C157938-0C158774, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c03f346(int);
int FUN_0c157938(int, int);
int FUN_0c157c34(int);
int FUN_0c157f20(int);
int FUN_0c1582e8(int, int);
int FUN_0c1585c4(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c1585f6(int a4, int a5, int a6);

int FUN_0c1585f6(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    *(volatile signed char *)((a4 + 0x1));
    FUN_0c187798(a4, a5, a6);
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (((((struct oC4_int *)(a4))->v)) + 0x6C));
    if ((*(signed char *)((a4 + 0x14))) != 0) {
        return FUN_0c03f346(a4);
    }
    t5 = *(short *)((a4 + 0x1C));
    if (((int)t5 >= (int)((((struct o4_int *)0xC2A2A2C)->v))) && (t0 = (((struct o8_int *)0xC2A2A2C)->v), (int)t5 <= (int)t0)) {
        t0 = t5;
        t6 = 0xC2A2A50;
        t7 = 0xC2A2A2C;
        t8 = t5;
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)((((struct o30_int *)0xC2A2A2C)->v))) {
                break;
            }
            t0 = (*(short *)((a4 + 0x1E)));
            t9 = t0;
            t0 = ((((struct o2C_int *)0xC2A2A2C)->v));
            t0 = ((int)((int)t9 % (int)t0));
            if (t0 == 0) {
                t0 = (*(signed char *)((a4 + 0x1)));
                t7 = a4;
                t7 = (t7 + 0x28);
                t6 = t0;
                t0 = (FUN_0c157938(t6, t7));
            } else {
                t9 = t6;
                t10 = t7;
                t11 = t8;
            }
            t0 = (*(short *)((a4 + 0x1E)));
            t6 = t9;
            t7 = t10;
            t8 = t11;
            t5 = (t5 + 0x1);
            t0 = (t0 + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = t0;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct oC_int *)0xC2A2A2C)->v))) && (t1 = (((struct o10_int *)0xC2A2A2C)->v), (int)t0 <= (int)t1)) {
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o24_int *)0xC2A2A2C)->v)))) == 0) {
            FUN_0c157c34((a4 + 0x28));
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct oC_int *)0xC2A2A2C)->v))) && (t2 = (((struct o10_int *)0xC2A2A2C)->v), (int)t0 <= (int)t2)) {
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o34_int *)0xC2A2A2C)->v)))) == 0) {
            FUN_0c157f20((a4 + 0x28));
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o14_int *)0xC2A2A2C)->v))) && (t3 = (((struct o18_int *)0xC2A2A2C)->v), (int)t0 <= (int)t3)) {
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o28_int *)0xC2A2A2C)->v)))) == 0) {
            FUN_0c1582e8((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o1C_int *)0xC2A2A2C)->v))) && (t4 = (((struct o20_int *)0xC2A2A2C)->v), (int)t0 <= (int)t4)) {
        t0 = 0x10;
        for (;;) {
            FUN_0c1585c4((a4 + 0x28));
            t0 = (t0 - 0x1);
            if (t0 == 0) {
                break;
            }
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A2A2C)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
