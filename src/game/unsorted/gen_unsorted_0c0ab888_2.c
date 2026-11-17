/* game/unsorted: functions 0C0AB888-0C0ABF00, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0ab888(int);
int FUN_0c14f824(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0ab968(int a4, int a5, int a6);
int FUN_0c0abb0c(int a4);
int FUN_0c0abbe0(int a4, int a5, int a6, int a7);

int FUN_0c0ab968(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R5;
    register int R7;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = a6;
    v0_0 = (v0_0);
    if ((((*(int *)0xC542260) & 3) != 0)) goto L_C0AB984;
    FUN_0c14f824((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), v0_1);
    L_C0AB984:;
    FUN_0c07da48(v0_0);
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    v0_1 = (unsigned char)(FUN_0c037bf6(v0_0)) != 0;
    if (v0_1) goto L_C0AB9BA;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C0ABAA0;
    L_C0AB9BA:;
    v0_1 = (FUN_0c07ecc6(v0_0, 0x0, 0x0)) == 0;
    if (v0_1) goto L_C0ABA1C;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = v0_1;
    FUN_0c07e79c(v0_0, v0_1, 0x2, 0x19, v0_2, 0x2, 0x19);
    v0_1 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 5.0f;
    (((struct o94_float *)(v0_1))->v) = 5.0f;
    v0_1 = (((struct o11C_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 5.0f;
    (((struct o94_float *)(v0_1))->v) = 5.0f;
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) * 0.5f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) * 0.5f);
    v0_1 = (0x15);
    v0_2 = (((*(signed char *)((v0_0 + 0x15))) + 0x1));
    L_C0ABA9E:;
    *(unsigned char *)((v0_0 + v0_1)) = v0_2;
    L_C0ABAA0:;
    return v0_1;
    L_C0ABA1C:;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = v0_1;
    FUN_0c07e79c(v0_0, v0_1, 0x2, 0x19, v0_2, 0x2, 0x19);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x78;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x14;
    (((struct o58_float *)(v0_0))->v) = (-(((((struct o4C_float *)(v0_0))->v)) / 20.0f));
    (((struct o60_float *)(v0_0))->v) = (-(((((struct o54_float *)(v0_0))->v)) / 20.0f));
    (((struct o50_float *)(v0_0))->v) = -3.5f;
    (((struct o5C_float *)(v0_0))->v) = -2.0f;
    v0_1 = (((struct o118_int *)(v0_0))->v);
    v0_2 = *(int *)(((0x118 + v0_0) + 0x4));
    (((struct oA0_float *)(v0_2))->v) = 1.0f;
    (((struct o9C_float *)(v0_2))->v) = 1.0f;
    (((struct oA0_float *)(v0_1))->v) = 1.0f;
    (((struct o9C_float *)(v0_1))->v) = 1.0f;
    v0_1 = *(int *)(((0x118 + v0_0) + 0x4));
    v0_2 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 1.0f;
    (((struct o98_float *)(v0_2))->v) = 1.0f;
    (((struct o94_float *)(v0_1))->v) = 1.0f;
    (((struct o94_float *)(v0_2))->v) = 1.0f;
    v0_1 = (0x15);
    v0_2 = (0x3);
    goto L_C0ABA9E;
}

int FUN_0c0abb0c(int a4)
{
    register int t0;
    register float u0;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x10, (t0), 0x2, 0x10);
            u0 = *(float *)0xC0ABC1C;
            t0 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = u0;
            (((struct o94_float *)(t0))->v) = u0;
            t0 = (((struct o11C_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = u0;
            (((struct o94_float *)(t0))->v) = u0;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u0);
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
            (((struct o15_uchar *)(a4))->v) = 0x2;
            return 0x15;
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        return FUN_0c037bf6(a4);
    }
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x10, (t0), 0x2, 0x10);
    u0 = *(float *)0xC0ABC1C;
    t0 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = u0;
    (((struct o94_float *)(t0))->v) = u0;
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = u0;
    (((struct o94_float *)(t0))->v) = u0;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u0);
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
    (((struct o15_uchar *)(a4))->v) = 0x2;
    return 0x15;
}

int FUN_0c0abbe0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0abb0c(a4);
            }
            return ((int (*)(int, int, int, int))(0xC0ABAE0))(a4, a5, a6, a7);
        }
        return FUN_0c0ab968(a4, a5, a6);
    }
    return FUN_0c0ab888(a4);
}
