/* game/effect: functions 0C071C68-0C071E22, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07daea(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085d0c(int);
int math_vec3_accumulate(int, int);
int FUN_0c071c68(int a4);
int FUN_0c071d3c(int a4);
int FUN_0c071dc6(int a4);
int FUN_0c071dfe(int a4);

int FUN_0c071c68(int a4)
{
    register int t0;

    FUN_0c037bf6(a4);
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        if ((*(short *)((a4 + 0x1C))) == 0) {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xBD, 0xFFFFFFFF, 0x3, 0xBD);
            t0 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 20.0f;
            (((struct o94_float *)(t0))->v) = 20.0f;
            t0 = (((struct o11C_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 20.0f;
            (((struct o94_float *)(t0))->v) = 20.0f;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        }
        if (0.0f > ((((struct o50_float *)(a4))->v))) {
            t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t0 != 0) {
                FUN_0c07daea(a4);
                return FUN_0c085d0c(a4);
            }
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c071d3c(int a4)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4);
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            t0 = 0xBC;
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                t1 = 0xC5;
                t0 = 0xC5;
            } else {
                t1 = 0xBC;
            }
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, t0, 0xFFFFFFFF, 0x3, t1);
            FUN_0c07daea(a4);
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c071dc6(int a4)
{
    register int t2;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t2 = FUN_0c037bf6(a4);
    if ((unsigned char)t2 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t2;
}

int FUN_0c071dfe(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c071dc6(a4);
        }
        return FUN_0c071d3c(a4);
    }
    return FUN_0c071c68(a4);
}
