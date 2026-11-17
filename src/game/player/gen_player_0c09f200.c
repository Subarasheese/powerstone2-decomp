/* game/player: functions 0C09F200-0C09F2BC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c064f80(int);
int math_vec3_accumulate(int, int);
int FUN_0c09f200(int a4);
int FUN_0c09f272(int a4);

int FUN_0c09f200(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c064f80(((((struct o3760_int *)(a4))->v)));
    t1 = t0;
    if (t0 != 0) {
        t0 = 0x2C;
        if (((((struct o2C_float *)(a4))->v)) > ((((struct o2C_float *)(((((struct o3760_int *)(a4))->v))))->v))) {
            t0 = 0x3780;
            if (((((struct o0_float *)0xC09F2D0)->v)) > ((((struct o3780_float *)(a4))->v))) {
                u0 = (((struct o4_float *)0xC09F2D0)->v);
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o30_float *)(a4))->v))) / u0));
                t0 = 0x30;
            }
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c09f272(int a4)
{
    register int t3;
    register int t5;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c09f200(a4);
    t3 = FUN_0c037bf6(a4);
    t5 = (unsigned char)t3;
    if ((unsigned char)t3 != 0) {
        (((struct o50_float *)(a4))->v) = -35.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t5 = 0x15;
    }
    return t5;
}
