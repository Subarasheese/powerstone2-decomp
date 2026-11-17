/* game/unsorted: functions 0C0E60B0-0C0E6486, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o2C_float { char p[0x2C]; float v; };
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c17c130(int, int, int);
float FUN_0c0e2340(int);
int FUN_0c187798(void);
int FUN_0c0e60b0(int a4, float f4);

int FUN_0c0e60b0(int a4, float f4)
{
    int stk[6];
    register int t1;
    register int t4;
    register int t6;
    register float u7;
    register float u8;
    register int t19;
    register float u23;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u26;
    register int t2;
    register int t3;
    register int t5;
    register int t20;
    register int t21;
    register int t22;
    register float u17;

    t1 = 0xC0E61DC;
    t4 = a4;
    t6 = 0x0;
    u7 = f4;
    u8 = ((((struct o0_float *)0xC0E61DC)->v));
    for (;;) {
        if ((int)t6 >= (int)0x4) {
            break;
        }
        t1 = 0x3714;
        t2 = (t6 * 0x3938);
        t2 = (t2 + 0xC532498);
        t3 = (*(signed char *)((t2 + t1)));
        t19 = t1;
        u23 = u7;
        if (t3 != 0) {
            t1 = 0x28;
            t3 = 0xC17C2A0;
            u10 = *(float *)((t2 + t1));
            t4 = ((int)stk + 0);
            u11 = *(float *)((a4 + t1));
            t1 = 0xC;
            *(float *)((((int)stk + 0) + t1)) = (u10 - u11);
            t1 = 0x30;
            u12 = *(float *)((t2 + t1));
            u13 = *(float *)((a4 + t1));
            t1 = 0x14;
            *(float *)((((int)stk + 0) + t1)) = (u12 - u13);
            t1 = 0x10;
            *(float *)((((int)stk + 0) + t1)) = 0.0f;
            t4 = (t4 + 0xC);
            u7 = (FUN_0c0e2340(t4));
            if (u8 > u7) {
                t3 = 0xC187798;
                u8 = u7;
                t2 = ((int)stk + 0);
                t1 = 0xC;
                t1 = (FUN_0c187798());
                t5 = t6;
                t19 = t1;
            } else {
                u17 = u7;
            }
            u23 = u17;
        } else {
            t20 = t2;
            t21 = t3;
            t22 = t4;
        }
        u7 = u23;
        t1 = t19;
        t2 = t20;
        t6 = (t6 + 0x1);
        t3 = t21;
        t4 = t22;
    }
    u26 = (((struct o10_float *)0xC0E61DC)->v);
    math_vec3_mul_xyz(((int)stk + 0), (u26 / u8), (u26 / u8), (u26 / u8));
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), ((int)stk + 0));
    (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)(((t5 * 0x3938) + 0xC532498)))->v));
    return 0x2C;
}
