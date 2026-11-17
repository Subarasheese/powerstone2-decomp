/* game/effect: functions 0C0A46D4-0C0A5ABC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c07d030(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a31ca(int, int, int, int, int, int);
int FUN_0c136784(int);
int FUN_0c137f0c(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0a4884(int a4, int a5, int a6, int a7);

int FUN_0c0a4884(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t10;
    register float t19;
    register float u22;
    register float t26;
    register float u29;
    register float u37;
    register int t38;
    register int t39;
    register int t40;
    register int t41;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t65;
    register int t68;
    register int t69;
    register int t85;
    register int t93;
    register int t94;
    register int t96;
    register int t76;
    register float u32;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 25) {
                        FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
                    }
                    t10 = FUN_0c037bf6(a4);
                    t76 = (unsigned char)t10;
                    if ((unsigned char)t10 == 0) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t76 = 0x15;
                    }
                } else {
                    if (t0 == 4) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        FUN_0c0a3058(a4, 0xFFFFFFFF, 0x4, 0x35);
                        if (!(((((struct o37B8_float *)(a4))->v)) > 0.0f)) {
                            *(int *)((int)stk + 0) = (a4 + 0x28);
                            t19 = math_sin_angle16((*(int *)((a4 + 0x38))));
                            *(unsigned int *)(((int)stk + 4)) = 0xC25D348;
                            u22 = ((((struct o28_float *)(a4))->v));
                            u22 = u22 + ((((struct o0_float *)0xC25D348)->v)) * t19;
                            (((struct o28_float *)(a4))->v) = u22;
                            *(int *)((int)stk + 0) = (a4 + 0x30);
                            u32 = (math_cos_angle16((*(int *)((a4 + 0x38)))));
                        } else {
                            *(int *)((int)stk + 0) = (a4 + 0x28);
                            t26 = math_sin_angle16((*(int *)((a4 + 0x38))));
                            *(unsigned int *)(((int)stk + 4)) = 0xC25D34C;
                            u29 = ((((struct o28_float *)(a4))->v));
                            u29 = u29 + ((((struct o4_float *)0xC25D348)->v)) * t26;
                            (((struct o28_float *)(a4))->v) = u29;
                            *(int *)((int)stk + 0) = (a4 + 0x30);
                            u32 = (math_cos_angle16((*(int *)((a4 + 0x38)))));
                        }
                        u37 = ((((struct o30_float *)(a4))->v));
                        u37 = u37 + (*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) * u32;
                        (((struct o30_float *)(a4))->v) = u37;
                        t38 = *(int *)(((0x118 + a4) + 0x4));
                        t39 = (((struct o118_int *)(a4))->v);
                        (((struct oA0_float *)(t38))->v) = 1.0f;
                        (((struct o9C_float *)(t38))->v) = 1.0f;
                        (((struct oA0_float *)(t39))->v) = 1.0f;
                        (((struct o9C_float *)(t39))->v) = 1.0f;
                        t40 = (((struct o118_int *)(a4))->v);
                        t41 = *(int *)(((0x118 + a4) + 0x4));
                        (((struct o98_float *)(t41))->v) = 1.0f;
                        (((struct o98_float *)(t40))->v) = 1.0f;
                        (((struct o94_float *)(t41))->v) = 1.0f;
                        (((struct o94_float *)(t40))->v) = 1.0f;
                        t76 = (FUN_0c037bf6(a4));
                    } else {
                        FUN_0c085cac(a4, 0xE, 0x0, a7);
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
                        t76 = 0x94;
                    }
                }
            } else {
                FUN_0c037bf6(a4);
                FUN_0c0a31ca(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x200);
                FUN_0c136784(a4);
                t65 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t65 + 0x1);
                t76 = (short)(t65 + 0x1);
                if ((int)(short)(t65 + 0x1) <= (int)((((struct o8_int *)0xC25D348)->v))) {
                } else {
                    FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    t68 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t68))->v) = 8.0f;
                    (((struct o94_float *)(t68))->v) = 8.0f;
                    t69 = (((struct o11C_int *)(a4))->v);
                    (((struct o98_float *)(t69))->v) = 8.0f;
                    (((struct o94_float *)(t69))->v) = 8.0f;
                    t76 = 0x94;
                }
            }
            return t76;
        }
        FUN_0c037bf6(a4);
        t85 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t85 + 0x1);
        if ((short)(t85 + 0x1) != 22) {
            return (short)(t85 + 0x1);
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x11);
        t93 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t93))->v) = 5.0f;
        (((struct o94_float *)(t93))->v) = 5.0f;
        t94 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t94))->v) = 5.0f;
        (((struct o94_float *)(t94))->v) = 5.0f;
        FUN_0c037bf6(a4);
        t96 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t96 + 0x1);
        if ((short)(t96 + 0x1) != 22) {
            return (short)(t96 + 0x1);
        }
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c059e60(a4, 0xA);
    FUN_0c07d030(a4, 0x1);
    return FUN_0c137f0c((*(signed char *)((a4 + 0x1))));
}
