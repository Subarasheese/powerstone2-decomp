/* game/player: functions 0C0A3058-0C0A4DFE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05883a(int, int, int, float, float, float);
int FUN_0c058854(int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07eaf4(int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c14f8aa(int, int, int);
int math_vec3_accumulate(int, int);
extern int FUN_0c187798();
int FUN_0c0a30dc(int a4, int a5, int a6, int a7);
int FUN_0c0a36c8(int a4, int a5, int a6);
int FUN_0c0a3a58(int a4);
int FUN_0c0a458a(int a4);
int FUN_0c0a45ac(int a4, int a5, int a6, int a7);

int FUN_0c0a30dc(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;

    t1 = *(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)));
    t2 = FUN_0c07eaf4(a4, a5, a6, a7);
    return FUN_0c058854((a4 + 0x38), (unsigned short)(t1 + t2), (*(int *)((a4 + 0x38))), 0x100);
}


int FUN_0c0a3a58(int a4)
{
    int t0;
    register int t1;
    register int t2;
    float u0;
    register float u1;
    register float u2;
    register float u3;

    u2 = (((struct o0_float *)0xC0A3B64)->v);
    u3 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(u2 > u3) && (u0 = (((struct o4_float *)0xC0A3B64)->v), !(u3 > u0))) {
        t1 = (a4 + 0x28);
        t2 = (a4 + 0x4C);
        if (!(((((struct oC_float *)0xC0A3B64)->v)) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t1 = (a4 + 0x4C);
            t2 = (a4 + 0x58);
        }
        math_vec3_accumulate(t1, t2);
    }
    u0 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(u2 > u0) && ((u1 = (((struct o10_float *)0xC0A3B64)->v), !(u0 > u1)) && (t0 = *(int *)0xC542260, (t0 & 3) == 0))) {
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x2);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0a458a(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0a45ac(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        if (t0 != 4) {
                            return t0;
                        }
                        return FUN_0c0a458a(a4);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A44F0))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A4456))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0A4260))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0A41A6))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC0A4164))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A40DC))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A4004))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0A3E66))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0A3CF8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A3C52))(a4, a5, a6, a7);
}
