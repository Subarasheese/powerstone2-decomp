/* Straight-line functions with calls and guards (batch gen_ahq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o268_uint { char p[0x268]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c054a62(int, int);
int FUN_0c056b68(int, int);
int math_atan2_angle16(int, float, float);
int FUN_0c0546f4(int a4);

int FUN_0c0546f4(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register float u5;
    register float u6;
    register float u7;
    register int t22;
    register int t24;
    register int t26;
    register int t37;
    register int t39;
    register int t20;
    register int t47;
    register int t27;
    register int t40;
    register float R1004;
    register float R1012;

    R1004 = *(float *)((int)stk + 0);
    R1012 = *(float *)((int)stk + 8);

    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)0xC54223C;
    if ((*(signed char *)((((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C)) + 0x0))) != 0) {
        u5 = (((struct o10_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v);
        R1004 = (u5 - ((((struct o4_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v)));
        u6 = (((struct oC_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v);
        u7 = (((struct o18_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v);
        R1012 = (u7 - u6);
        if ((u7 - u6) == 0.0f) {
            R1012 = 9.99999997e-07f;
        }
        t20 = (math_atan2_angle16(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C)), (R1004), (R1012)));
    } else {
        t20 = (*(int *)((((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C)) + 0x28)));
    }
    t22 = *(signed char *)((a4 + 0xA));
    if (t22 != 0) {
        if (t22 != 1) {
            t47 = t20;
        } else {
            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
            t24 = 0xC1B92B4;
            t26 = (0x248 + a4);
            for (;;) { t27 = *(int *)t24; t24 = (t24 + 4); if ((unsigned int)((0xC1B92B4 + 128)) < (unsigned int)t24) break; *(unsigned int *)t26 = t27; t26 = (t26 + 4); }
            (((struct o268_uint *)(a4))->v) = t20;
            FUN_0c054a62(a4, (0x248 + a4));
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t37 = 0xC1B9234;
        t39 = (0x248 + a4);
        for (;;) { t40 = *(int *)t37; t37 = (t37 + 4); if ((unsigned int)((0xC1B9234 + 128)) < (unsigned int)t37) break; *(unsigned int *)t39 = t40; t39 = (t39 + 4); }
        (((struct o268_uint *)(a4))->v) = t20;
        FUN_0c054a62(a4, (0x248 + a4));
    }
    return (FUN_0c056b68(a4, t47));
}
