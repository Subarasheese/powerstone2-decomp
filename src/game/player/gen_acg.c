/* Straight-line functions with calls and guards (batch gen_acg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o70_float { char p[0x70]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
float math_sin_angle16(int);
float FUN_0c0e1108(int a4, int a5, int a6);

float FUN_0c0e1108(int a4, int a5, int a6)
{
    int stk[2];
    register float u0;
    register int t5;
    register int t6;
    register float t8;
    register float u9;
    register float u49;
    register float u40;
    register int t29;
    register int t30;
    register float t32;
    register float u33;
    register float u75;
    register float u66;
    register int t55;
    register int t56;
    register float t58;
    register float u59;
    register float u23;
    register float u15;
    register int R1008;

    R1008 = *(int *)((int)stk + 4);

    u0 = *(float *)0xC0E1228;
    if (((int)a5 <= 0) && ((int)a6 >= 0)) {
        if ((int)(*(short *)((a4 + 0x1E))) > 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            t5 = (((struct oC4_int *)(a4))->v);
            R1008 = t5;
            t6 = *(short *)((a4 + 0x1E));
            *(unsigned short *)(((int)stk + 0)) = t6;
            t8 = math_sin_angle16(((*(short *)(((int)stk + 0))) << 13));
            u9 = (((float)t6 / u0) * t8);
            (((struct o70_float *)(t5))->v) = (u9 * u0);
            u15 = t8;
        }
        u23 = u15;
    }
    u49 = u23;
    if (((int)a5 <= (int)0x1) && ((int)a6 >= (int)0x1)) {
        u40 = u23;
        if ((int)((((struct o20_short *)(a4))->v)) > 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            t29 = (((struct oC8_int *)(a4))->v);
            R1008 = t29;
            t30 = (((struct o20_short *)(a4))->v);
            *(unsigned short *)(((int)stk + 0)) = t30;
            t32 = math_sin_angle16(((*(short *)(((int)stk + 0))) << 13));
            u33 = (((float)t30 / u0) * t32);
            (((struct o70_float *)(t29))->v) = (u33 * u0);
            u40 = t32;
        }
        u49 = u40;
    }
    u75 = u49;
    if (((int)a5 <= (int)0x2) && ((int)a6 >= (int)0x2)) {
        u66 = u49;
        if ((int)((((struct o22_short *)(a4))->v)) > 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            t55 = (((struct oCC_int *)(a4))->v);
            R1008 = t55;
            t56 = (((struct o22_short *)(a4))->v);
            *(unsigned short *)(((int)stk + 0)) = t56;
            t58 = math_sin_angle16(((*(short *)(((int)stk + 0))) << 13));
            u59 = (((float)t56 / u0) * t58);
            (((struct o70_float *)(t55))->v) = (u59 * u0);
            u66 = t58;
        }
        u75 = u66;
    }
    return u75;
}
