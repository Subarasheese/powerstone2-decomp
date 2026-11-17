/* game/unsorted: functions 0C09818C-0C09835C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c09818c(int a4, int a5, int a6);

int FUN_0c09818c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t0 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t0;
    }
    if ((*(signed char *)((a4 + 0x17))) != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0x0;
        t2 = (t0);
        t3 = t0;
        t0 = 0x0;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0x1;
        t2 = (t3);
        t0 = 0x1;
    }
    FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}
