/* game/menu/select: functions 0C1371A0-0C137408, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c1371a0(int a4, int a5, int a6);
int FUN_0c137258(int a4, int a5, int a6, int a7);
int FUN_0c1373e2(int a4);



int FUN_0c1373e2(int a4)
{
    int stk[1];
    register int t0;
    register int t2;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t2 = t0;
    if (t0 != 0) {
        t2 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x1)) = t2;
        *(unsigned int *)((t0 + 0x4)) = 0xC137258;
    }
    return t2;
}


