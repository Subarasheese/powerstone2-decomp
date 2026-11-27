/* game/unsorted: functions 0C0D3004-0C0D34FE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int math_mat_get_translate(int, int);
int FUN_0c15aed8(int);
int FUN_0c15d386(int, int, int, int, int);
int nlRand(void);
int nlAddVector3op(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0d3004(int a4, int a5);
int FUN_0c0d30ea(int a4, int a5, int a6);

int FUN_0c0d3004(int a4, int a5)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t4;
    register float u9;
    register float u11;
    register float u12;
    register int t13;
    register int t14;
    register int t19;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = nlRand();
    t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1);
    }
    t4 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x2));
    math_mat_get_translate(((*(int *)(((int)stk + 0))) + 0x64), (((int)stk + 0) + 0x4));
    nlAddVector3op((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4), ((((t1 << 2) + t1) << 2) + (0xC1C7EBC + ((((t4 << 2) + t4) << 2) << 1))));
    u9 = (((struct oC_float *)(((((t1 << 2) + t1) << 2) + (0xC1C7EBC + ((((t4 << 2) + t4) << 2) << 1)))))->v);
    u11 = (((struct o8_float *)(((((t1 << 2) + t1) << 2) + (0xC1C7EBC + ((((t4 << 2) + t4) << 2) << 1)))))->v);
    u12 = (((((struct o10_float *)(((((t1 << 2) + t1) << 2) + (0xC1C7EBC + ((((t4 << 2) + t4) << 2) << 1)))))->v)) * (float)a5);
    t13 = nlRand();
    t14 = ((~(((~t13) + 0x1) & 0xF)) + 0x1);
    if ((int)t13 >= 0) {
        t14 = (t13 & 0xF);
    }
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((u11 + u9) - ((((float)t14 / (*(float *)0xC0D31D8)) * (u9 - u12)))));
    if ((int)a5 > 0) {
        t19 = 0x0;
        for (;;) {
            FUN_0c15aed8((((int)stk + 0) + 0x4));
            t19 = (t19 + 0x1);
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((((struct o10_float *)(((((t1 << 2) + t1) << 2) + (0xC1C7EBC + ((((t4 << 2) + t4) << 2) << 1)))))->v)));
            if ((int)t19 >= (int)a5) {
                break;
            }
        }
    }
    return 0xC;
}


