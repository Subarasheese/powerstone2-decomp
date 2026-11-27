/* Straight-line functions with calls and guards (batch gen_nw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
extern int FUN_0c085d0c();
int FUN_0c1575d4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c07aca0(int a4, int a5, int a6, int a7);

int FUN_0c07aca0(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t66;
    register int t9;
    register int t13;
    register int t14;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register float u49;
    register int t67;
    register int t69;
    register int t70;
    register int t71;
    register int t72;
    register int t73;
    register int t74;
    register int t21;
    register int t22;
    register int t23;
    register int t25;
    register int t35;
    register int t36;
    register int t37;
    register int t39;
    register int R1004;
    register int R1008;
    register int R1012;
    register int R1016;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);

    t0 = *(signed char *)((a4 + 0x15));
    t66 = 0;
    if (t0 != 0) {
        if (t0 == 1) {
            t66 = 1;
        }
    } else {
        if (((((struct o3770_int *)(a4))->v)) == 0) {
            return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
        }
        t9 = *(signed char *)((a4 + 0x2));
        if (t9 != 8) {
            if (t9 != 10) {
                R1012 = 0xE;
                R1008 = 0x0;
                t13 = *(signed char *)((a4 + 0x1));
                R1016 = t13;
                t14 = t13;
                R1004 = t14;
                FUN_0c07e79c(a4, t13, 0x0, 0xE, t14, 0x0, 0xE);
            } else {
                if ((*(signed char *)((a4 + 0x371A))) != 0) {
                    R1012 = 0x22;
                    R1008 = 0x0;
                    t23 = *(signed char *)((a4 + 0x1));
                    R1016 = t23;
                    t22 = t23;
                    R1004 = t22;
                    t21 = 0x22;
                    t25 = 0x22;
                } else {
                    R1012 = 0xE;
                    R1008 = 0x0;
                    t23 = *(signed char *)((a4 + 0x1));
                    R1016 = t23;
                    t22 = t23;
                    R1004 = t22;
                    t21 = 0xE;
                    t25 = 0xE;
                }
                FUN_0c07e79c(a4, t23, 0x0, t25, t22, 0x0, t21);
            }
        } else {
            if ((*(signed char *)((a4 + 0x371A))) != 0) {
                R1012 = 0x28;
                R1008 = 0x0;
                t37 = *(signed char *)((a4 + 0x1));
                R1016 = t37;
                t36 = t37;
                R1004 = t36;
                t35 = 0x28;
                t39 = 0x28;
            } else {
                R1012 = 0xE;
                R1008 = 0x0;
                t37 = *(signed char *)((a4 + 0x1));
                R1016 = t37;
                t36 = t37;
                R1004 = t36;
                t35 = 0xE;
                t39 = 0xE;
            }
            FUN_0c07e79c(a4, t37, 0x0, t39, t36, 0x0, t35);
        }
        t44 = *(int *)(((0x118 + a4) + 0x4));
        t45 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t44))->v) = 1.0f;
        (((struct o9C_float *)(t44))->v) = 1.0f;
        (((struct oA0_float *)(t45))->v) = 1.0f;
        (((struct o9C_float *)(t45))->v) = 1.0f;
        t46 = *(int *)(((0x118 + a4) + 0x4));
        t47 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t46))->v) = 1.0f;
        (((struct o98_float *)(t47))->v) = 1.0f;
        (((struct o94_float *)(t46))->v) = 1.0f;
        (((struct o94_float *)(t47))->v) = 1.0f;
        (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0xF);
        u49 = *(float *)0xC07AEC8;
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(((((struct o3770_int *)(a4))->v))))->v)) - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * u49)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(((((struct o3770_int *)(a4))->v))))->v)) - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * u49)));
        (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)(((((struct o3770_int *)(a4))->v))))->v));
        *(unsigned int *)((((((struct o3770_int *)(a4))->v)) + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t66 = 1;
    }
    if (t66) {
        t67 = ((int (*)(int))(FUN_0c037bf6))(a4);
        if ((unsigned char)t67 != 0) {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
            t69 = ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, 0x0, 0x0, 0x0);
            t70 = *(int *)(((0x118 + a4) + 0x4));
            t71 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t70))->v) = 1.0f;
            (((struct o9C_float *)(t70))->v) = 1.0f;
            (((struct oA0_float *)(t71))->v) = 1.0f;
            (((struct o9C_float *)(t71))->v) = 1.0f;
            t72 = *(int *)(((0x118 + a4) + 0x4));
            t73 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t72))->v) = 1.0f;
            (((struct o98_float *)(t73))->v) = 1.0f;
            (((struct o94_float *)(t72))->v) = 1.0f;
            (((struct o94_float *)(t73))->v) = 1.0f;
            t74 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, t73, (0x118 + a4));
        } else {
            FUN_0c038362(a4);
        }
    }
    if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0xC)) == 0) {
        FUN_0c1575d4((*(signed char *)((a4 + 0x1))), 0x0);
    }
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    return 0x374B;
}
