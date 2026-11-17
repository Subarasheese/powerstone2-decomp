/* game/unsorted: functions 0C0BA9F0-0C0BAAAC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07d030(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c123010(int, int);
int FUN_0c0ba9f0(int a4);

int FUN_0c0ba9f0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c037bf6(a4);
    if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == ((((struct o0_float *)0xC0BAB1C)->v))) {
        t0 = 0x2;
        if ((*(signed char *)((a4 + 0x375A))) == 2) {
            t0 = 0x1;
        }
        FUN_0c123010(a4, t0);
        FUN_0c123010(a4, 0x3);
        if ((*(signed char *)((a4 + 0x375A))) == 2) {
            FUN_0c123010(a4, 0x4);
        }
        FUN_0c07d030(a4, 0x2);
    }
    t0 = 0x8C;
    if (!(((((struct oC_float *)0xC0BAB1C)->v)) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x1, 0x15, (t1), 0x1, 0x15);
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}
