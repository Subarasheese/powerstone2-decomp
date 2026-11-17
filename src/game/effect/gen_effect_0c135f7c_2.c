/* game/effect: functions 0C135F7C-0C1361EC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c136098(int);
int FUN_0c187798(int, int, int);
int FUN_0c136108(int a4, int a5, int a6, int a7, float f4);

int FUN_0c136108(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = (((struct oC4_int *)(a4))->v);
    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            t3 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t3 - 1);
            if ((int)(short)(t3 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x200);
                (((struct o18_float *)(t2))->v) = 1.0f;
                (((struct o1C_float *)(t2))->v) = 1.0f;
                (((struct o20_float *)(t2))->v) = 1.0f;
            }
        } else {
            (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - 0.100000001f);
            if (!(((((struct o20_float *)(t2))->v)) > 0.0f)) {
                (((struct o20_float *)(t2))->v) = 0.0f;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            u0 = (((struct o20_float *)(t2))->v);
            (((struct o1C_float *)(t2))->v) = u0;
            (((struct o18_float *)(t2))->v) = u0;
        }
        FUN_0c187798(t2, a5, a6);
        FUN_0c0582de((a4 + 0x28), (((((struct oE4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
        FUN_0c136098(a4);
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        if (((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) == 19) && (t0 = *(short *)((a4 + 0x1C)), t0 != 0)) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        *(unsigned short *)((a4 + 0x1E)) = 0x12;
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x200);
                (((struct o18_float *)(t2))->v) = 1.0f;
                (((struct o1C_float *)(t2))->v) = 1.0f;
                (((struct o20_float *)(t2))->v) = 1.0f;
            }
        } else {
            (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - 0.100000001f);
            if (!(((((struct o20_float *)(t2))->v)) > 0.0f)) {
                (((struct o20_float *)(t2))->v) = 0.0f;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            u0 = (((struct o20_float *)(t2))->v);
            (((struct o1C_float *)(t2))->v) = u0;
            (((struct o18_float *)(t2))->v) = u0;
        }
        FUN_0c187798(t2, a5, a6);
        FUN_0c0582de((a4 + 0x28), (((((struct oE4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
        FUN_0c136098(a4);
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        if (((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) == 19) && (t1 = *(short *)((a4 + 0x1C)), t1 != 0)) {
            return t1;
        }
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
