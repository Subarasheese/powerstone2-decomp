/* game/unsorted: functions 0C0A9830-0C0A9940, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o1650_uint { char p[0x1650]; unsigned int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c05261c(int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c13f14c(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0a9830(int a4);

int FUN_0c0a9830(int a4)
{
    int stk[7];
    register int t0;
    register int t21;
    register int t22;
    register int t23;
    register int t25;
    register int t26;
    register int t27;
    register int t28;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
        (((struct o374B_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c037bf6(a4);
    if (0.0f > ((((struct o17C_float *)(a4))->v))) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / (1.0f + 1.0f));
    }
    if (!(8.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        (((struct o1650_uint *)(a4))->v) = 0x1555;
        FUN_0c13f14c(a4, ((*(int *)0xC542260) & 0x1));
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t21 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t21 != 0) {
            *(int *)((int)stk + 8) = 0x14;
            *(int *)((int)stk + 4) = 0x2;
            t22 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t22;
            t23 = t22;
            *(int *)((int)stk + 0) = t23;
            FUN_0c07e79c(a4, t22, 0x2, 0x14, t23, 0x2, 0x14);
            (((struct o1650_uint *)(a4))->v) = 0x0;
            t25 = *(int *)(((0x118 + a4) + 0x4));
            t26 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t25))->v) = 1.0f;
            (((struct o9C_float *)(t25))->v) = 1.0f;
            (((struct oA0_float *)(t26))->v) = 1.0f;
            (((struct o9C_float *)(t26))->v) = 1.0f;
            t27 = *(int *)(((0x118 + a4) + 0x4));
            t28 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t27))->v) = 1.0f;
            (((struct o98_float *)(t28))->v) = 1.0f;
            (((struct o94_float *)(t27))->v) = 1.0f;
            (((struct o94_float *)(t28))->v) = 1.0f;
            FUN_0c05261c((*(int *)0xC241C20));
            FUN_0c07db58(a4);
            (((struct o446_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0x23;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x1;
            return 0x17;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
