/* game/ai: functions 0C0BB994-0C0BBAAA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
float math_signed_sqrt(float);
int math_atan_angle16(float);
int ai_calc_gap_to_target(int a4);
int FUN_0c0bb9f2(int a4);
int ai_calc_angle_to_target(int a4);

int ai_calc_gap_to_target(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471B44));
    u0 = (((struct o28_float *)(t0))->v);
    u1 = (((struct o30_float *)(t0))->v);
    u2 = (((struct o28_float *)(a4))->v);
    u3 = (((struct o30_float *)(a4))->v);
    u4 = ((u1 - u3) * (u1 - u3));
    u4 = u4 + ((u0 - u2)) * ((u0 - u2));
    u0 = math_signed_sqrt(u4);
    t1 = (int)u0;
    if ((*(signed char *)((t0 + 0x0))) == 0) {
        t1 = ((int)u0 - (*(short *)((0xC25DFF4 + ((*(signed char *)((t0 + 0x2))) << 1)))));
    }
    return t1;
}

int FUN_0c0bb9f2(int a4)
{
    register int t0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u7;

    t0 = *(signed char *)0xC472462;
    u1 = (((struct o6C_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u2 = (((struct o74_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u3 = (((struct o28_float *)(a4))->v);
    u4 = (((struct o30_float *)(a4))->v);
    u7 = ((u2 - u4) * (u2 - u4));
    u7 = u7 + ((u1 - u3)) * ((u1 - u3));
    return (int)(math_signed_sqrt(u7));
}

int ai_calc_angle_to_target(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = (((struct o78_int *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v);
    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o28_float *)(t0))->v);
    u2 = (((((struct o30_float *)(t0))->v)) - ((((struct o30_float *)(a4))->v)));
    u2 = -u2;
    u3 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u3 = 9.99999997e-07f;
    }
    t0 = math_atan_angle16((u2 / u3));
    t1 = t0;
    if (0.0f > u3) {
        t1 = (t0 + 0x8000);
    }
    return (unsigned short)(((t1 + 0x5000) - (*(int *)((a4 + 0x38)))) + 0x1000);
}
