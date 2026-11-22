/* game/debug: functions 0C172168-0C1732C0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o45_uchar { char p[0x45]; unsigned char v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c067672(int);
int thunk_FUN_0c0385e0(int);
int FUN_0c17a550(int);
int nlUnitMatrix(void);
int FUN_0c181bb0(void);
int FUN_0c181c30(float);
int FUN_0c172168(void);
int FUN_0c172204(int a4);
int FUN_0c1723b4(int a4, int a5, int a6);
int FUN_0c172434(int a4, int a5);



int FUN_0c1723b4(int a4, int a5, int a6)
{
    register int t2;

    if ((*(signed char *)((a5 + 0x45))) == 0) {
        (((struct o48_uint *)(a5))->v) = (((((struct o48_int *)(a5))->v)) + 0x1);
        t2 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t2 == 0x80) {
            (((struct o48_uint *)(a5))->v) = 0x0;
        }
        FUN_0c038362(a4);
        if ((unsigned char)(*(signed char *)((0x84 + ((((struct o118_int *)(a4))->v))))) == 64) {
            (((struct o48_uint *)(a5))->v) = 0x0;
            (((struct o45_uchar *)(a5))->v) = 0x1;
        }
        if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) > ((((struct o4C_float *)(a5))->v))) {
            (((struct o4C_float *)(a5))->v) = ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v));
        }
        return thunk_FUN_0c0385e0(a4);
    }
    return 0x45;
}

int FUN_0c172434(int a4, int a5)
{
    register int t0;

    t0 = 0xFFFFFFFF;
    if ((signed char)a4 == (signed char)a5) {
        t0 = 0xFFFF7F00;
    }
    return FUN_0c17a550(t0);
}
