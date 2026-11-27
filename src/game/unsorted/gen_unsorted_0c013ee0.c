/* game/unsorted: functions 0C013EE0-0C013FE8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_int { char p[0x8]; int v; };
int FUN_0c0185b4(void);
int FUN_0c01c5ac(int, float, float);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c187cac(int, int, int, int, int, int, int);
int FUN_0c013ee0(void);
int FUN_0c013f2e(void);

int FUN_0c013ee0(void)
{
    FUN_0c01cb7c();
    FUN_0c01cc56(0xC, 0xC014040);
    FUN_0c01cc56(0xD, 0xC014040);
    FUN_0c01cc56(0xF, 0xC014040);
    FUN_0c01cc56(0x1A, 0xC014204);
    FUN_0c01c5ac((*(signed char *)0xC309BE4), ((((struct o4_float *)0xC014074)->v)), ((((struct o0_float *)0xC014074)->v)));
    FUN_0c01cc56(0x39, 0xC0148D0);
    FUN_0c01cc56(0x39, 0xC014930);
    FUN_0c0185b4();
    return 0x0;
}

int FUN_0c013f2e(void)
{
    int stk[11];
    register float u1;
    register float u2;
    register int t13;
    register int t17;
    register int t19;
    register int t22;

    FUN_0c02b502(0x7);
    u1 = (((struct o0_float *)0xC014094)->v);
    u2 = (((struct o4_float *)0xC014094)->v);
    FUN_0c02b3ba(0xC3099A6, u1, ((((struct o10_float *)0xC014094)->v)), u2);
    FUN_0c02b502(0x7);
    *(int *)((int)stk + 8) = (short)((unsigned int)((((struct o14_int *)0xC309BD4)->v)) >> 16);
    *(int *)((int)stk + 4) = (unsigned short)((((struct o14_int *)0xC309BD4)->v));
    *(int *)((int)stk + 0) = 0xC1A5D70;
    FUN_0c187cac(((int)stk + 12), 0x0, 0x0, 0x0, 0xC1A5D70, (unsigned short)((((struct o14_int *)0xC309BD4)->v)), (short)((unsigned int)((((struct o14_int *)0xC309BD4)->v)) >> 16));
    FUN_0c02b3ba(((int)stk + 12), u1, ((((struct o20_float *)0xC014094)->v)), u2);
    t13 = 0x7;
    if ((int)((((struct o0_int *)0xC309BD4)->v)) > (int)((((struct o8_int *)0xC309BD4)->v))) {
        t13 = 0x1;
    }
    FUN_0c02b502(t13);
    t17 = (((struct o8_int *)0xC309BD4)->v);
    t19 = 0x5F5E0FF;
    if ((int)((((struct o0_int *)0xC309BD4)->v)) > (int)0x5F5E0FF) {
    } else {
        t19 = ((((struct o0_int *)0xC309BD4)->v));
    }
    t22 = 0x5F5E0FF;
    if ((int)t17 <= (int)0x5F5E0FF) {
        t22 = ((((struct o8_int *)0xC309BD4)->v));
    }
    *(int *)((int)stk + 8) = (t22);
    *(int *)((int)stk + 4) = (t19);
    *(int *)((int)stk + 0) = 0xC1A5D80;
    FUN_0c187cac(((int)stk + 12), t22, 0x0, 0x0, 0xC1A5D80, t19, t22);
    FUN_0c02b3ba(((int)stk + 12), ((((struct o34_float *)0xC014094)->v)), ((((struct o30_float *)0xC014094)->v)), u2);
    return 0x0;
}
