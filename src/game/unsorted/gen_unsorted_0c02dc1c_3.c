/* game/unsorted: functions 0C02DC1C-0C02EC54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c17b1a0(int, int, int);
int FUN_0c17d6d0(float);
int FUN_0c17e290(int, int);
int nlObjPut(int);
int nlObjPutTrnsl(int, float);
int FUN_0c17e740(int, float, float, float);
int FUN_0c0ef980(int);
int FUN_0c02e078(int a4, int a5, int a6);

int FUN_0c02e078(int a4, int a5, int a6)
{
    int stk[2];
    register int t1;
    register int t7;
    register int t14;
    register int t3;
    int t4;
    register int t5;
    register int t26;

    *(unsigned short *)(((int)stk + 0)) = ((((struct oAC_short *)(a4))->v));
    t1 = *(short *)((a5 + 0x6));
    *(unsigned short *)(((int)stk + 4)) = t1;
    if (((*(signed char *)((a5 + 0x0))) != 0) && ((t3 = *(int *)((a5 + 0x8)), t3 != 0) && (t4 = *(int *)((a5 + 0x8)), t5 = *(int *)((t4 + 0x0)), (int)t5 >= 0))) {
        FUN_0c17b1a0((a5 + 0x28), a5, a6);
        t7 = *(short *)(((int)stk + 0));
        if ((0x4000 & (unsigned short)t7) != 0) {
            FUN_0c17e290((*(int *)((a5 + 0x8))), (((*(signed char *)((a4 + 0x1))) << 2) << 2));
        }
        t14 = *(short *)(((int)stk + 4));
        if ((0x1000 & (unsigned short)t14) != 0) {
            FUN_0c17d6d0(((((struct o24_float *)(a5))->v)));
        }
        if ((((unsigned short)t14 & 0x800) == 0) && (((unsigned short)t7 & 0x800) == 0)) {
            t26 = 0x800;
        } else {
            FUN_0c0ef980((*(int *)((a5 + 0x8))));
        }
        if ((0x200 & (unsigned short)t14) != 0) {
            FUN_0c17e740(t26, ((((struct o18_float *)(a5))->v)), ((((struct o1C_float *)(a5))->v)), ((((struct o20_float *)(a5))->v)));
        }
        if (((unsigned short)t14 & 0x400) != 0) {
            return nlObjPutTrnsl((*(int *)((a5 + 0x8))), ((((struct o14_float *)(a5))->v)));
        }
        if (((unsigned short)t7 & 0x400) != 0) {
            return nlObjPutTrnsl((*(int *)((a5 + 0x8))), ((((struct oB0_float *)(a4))->v)));
        }
        return nlObjPut((*(int *)((a5 + 0x8))));
    }
    return t1;
}
