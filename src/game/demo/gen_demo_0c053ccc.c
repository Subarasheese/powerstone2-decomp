/* game/demo: functions 0C053CCC-0C0548A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o19C_uint { char p[0x19C]; unsigned int v; };
struct o1A0_uint { char p[0x1A0]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C8_int { char p[0x2C8]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c0522be(int);
int FUN_0c054a62(int, int);
int FUN_0c056b68(int, int, int);
int FUN_0c056c64(int, int, int);
int math_atan2_angle16(int, int, int, int, float, float);
int FUN_0c187798(int, int, int);
int FUN_0c053ccc(int a4, int a5, int a6, int a7, int a8);
int FUN_0c053d32(int a4);
int FUN_0c053da0(int a4);
int FUN_0c053efe(int a4, int a5, int a6);
int FUN_0c053f16(int a4, int a5, int a6, int a7);


int FUN_0c053d32(int a4)
{
    register int t4;
    register int t5;
    register int t7;
    register int t8;

    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    t4 = *(int *)(((((*(signed char *)(((a4 + 0x2) + 0x7))) << 2) + (*(int *)((0xC241B34 + ((*(signed char *)(((a4 + 0x2) + 0x6))) << 2))))) + 0x0));
    t5 = t4;
    t7 = (0x248 + a4);
    for (;;) { t8 = *(int *)t5; t5 = (t5 + 4); if ((unsigned int)((t4 + 128)) < (unsigned int)t5) break; *(unsigned int *)t7 = t8; t7 = (t7 + 4); }
    return FUN_0c054a62(a4, (0x248 + a4));
}

int FUN_0c053da0(int a4)
{
    int stk[8];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register float u19;
    register float u20;
    int t26;
    register int t27;
    register int t28;
    register int t1;
    register float u5;
    register float u6;
    int t8;
    register int t41;
    register int t38;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = (((struct o2C8_int *)(a4))->v);
    (((struct o14_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = 0.0f;
    *(unsigned int *)(((int)stk + 4)) = 0xC532498;
    t2 = 0xC532498;
    t3 = 0xC532498;
    t4 = 0x0;
    for (;;) {
        if (((*(signed char *)((t2 + 0x3714))) != 0) && (t8 = *(signed char *)((t2 + 0x375D)), t8 == 0)) {
            u5 = ((((struct o14_float *)(((int)stk + 0)))->v));
            u6 = ((((struct o28_float *)(t3))->v));
            t1 = 0x30;
            t1 = (t1 + t3);
            u5 = (u5 + u6);
            t4 = (t4 + 0x1);
            (((struct o14_float *)(((int)stk + 0)))->v) = u5;
            u5 = ((((struct o8_float *)((((int)stk + 0) + 0x14)))->v));
            u6 = (*(float *)((t1 + 0x0)));
            u5 = (u5 + u6);
            (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = u5;
        }
        t2 = (t2 + 0x3938);
        t3 = (t3 + 0x3938);
        if ((unsigned int)t2 >= (unsigned int)0xC540978) {
            break;
        }
    }
    (((struct o14_float *)(((int)stk + 0)))->v) = (((((struct o14_float *)(((int)stk + 0)))->v)) / (float)t4);
    (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x14)))->v)) / (float)t4);
    (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o14_float *)(((int)stk + 0)))->v)) - ((((struct o34_float *)(t0))->v)));
    u19 = (((struct o3C_float *)(t0))->v);
    u20 = (((struct o8_float *)((((int)stk + 0) + 0x14)))->v);
    (((struct o8_float *)((((int)stk + 0) + 0x8)))->v) = (u20 - u19);
    if ((u20 - u19) == 0.0f) {
        (((struct o8_float *)((((int)stk + 0) + 0x8)))->v) = (*(float *)0xC053ED8);
    }
    t26 = math_atan2_angle16((((int)stk + 0) + 0x14), t2, t3, 0x3938, ((((struct o8_float *)(((int)stk + 0)))->v)), ((((struct o8_float *)((((int)stk + 0) + 0x8)))->v)));
    t27 = *(int *)(((t0 + 0x1C) + 0x10));
    t28 = *(int *)(((t0 + 0x1C) + 0x14));
    if (((int)(unsigned short)((0xFFFF & t26) - t27) >= (int)t28) && ((int)(unsigned short)((0xFFFF & t26) - t27) <= (int)(unsigned short)(0x8000 - t28))) {
        *(unsigned int *)(((t0 + 0x1C) + 0x4)) = (unsigned short)((*(int *)(((t0 + 0x1C) + 0x10))) + (*(int *)(((t0 + 0x1C) + 0x14))));
        t41 = (t0 + 0x1C);
    } else {
        t41 = *(int *)((t0 + 0x30));
        if (((int)(unsigned short)((0xFFFF & t26) - t27) <= (int)(unsigned short)(-t41)) && ((int)(unsigned short)((0xFFFF & t26) - t27) >= (int)(unsigned short)(0x8000 + t41))) {
            t38 = (unsigned short)((*(int *)(((t0 + 0x1C) + 0x10))) - (*(int *)(((t0 + 0x1C) + 0x14))));
        } else {
            t38 = (*(int *)(((t0 + 0x1C) + 0x10)));
        }
        *(unsigned int *)(((t0 + 0x1C) + 0x4)) = t38;
    }
    return (FUN_0c056b68((*(int *)(((int)stk + 0))), t41, t28));
}

int FUN_0c053efe(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        return FUN_0c056c64((*(int *)0xC540D94), a5, a6);
    }
    return t0;
}

int FUN_0c053f16(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t3 = *(int *)((((*(signed char *)0xC542237) << 2) + 0xC241484));
        return ((int (*)(int, int, int, int))(t3))(0xA, a5, a6, a7);
    }
    return t0;
}


