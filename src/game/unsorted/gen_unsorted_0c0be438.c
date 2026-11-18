/* game/unsorted: functions 0C0BE438-0C0BEB76, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o18_float { char p[0x18]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
int ai_clear_op_state(void);
float math_signed_sqrt(float);
int FUN_0c179ac0(void);
extern int FUN_0c187798();
int FUN_0c0be438(void);
void FUN_0c0be4c2(void);
int FUN_0c0be4c6(int a4);
int FUN_0c0be738(int a4, int a5, int a6, float f4, float f5);
int FUN_0c0be964(int a4, int a5, int a6, float f4);

int FUN_0c0be438(void)
{
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x0;
    return 0x0;
}

void FUN_0c0be4c2(void)
{
    
}


int FUN_0c0be738(int a4, int a5, int a6, float f4, float f5)
{
    int stk[67];
    int t1;
    register int t3;
    register int t4;
    register int t5;
    register float u7;
    register int t32;
    register int t38;
    register int t19;
    register int t20;
    register int t21;
    register float u22;
    register float u23;
    register float u24;
    register float u25;
    register float u28;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t51;
    register int t52;
    register float u54;
    register float u55;
    register int t69;
    register int t99;
    register int t2;
    register float u6;
    register int t14;
    register int t15;
    register float u42;
    register float u43;
    register int t79;
    register int t80;

    t1 = 0xC0BE780;
    t3 = (*(int *)0xC532458);
    t4 = a6;
    t5 = 0x0;
    u7 = f5;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t1 = 0x41C;
        t2 = (*(signed char *)((t3 + t1)));
        t2 = (unsigned char)t2;
        t4 = (*(int *)((t3 + 0xC)));
        if ((t2 == 0xC2) && ((t14 = *(signed char *)((t3 + 0x1)), t1 = t14, t1 == -1) && (t1 = 0x41D, t15 = *(signed char *)((t3 + t1)), t1 = t15, t1 == 2))) {
            t1 = 0x2C;
            u7 = (*(float *)((t3 + t1)));
            u6 = (*(float *)((a4 + t1)));
            u7 = (u7 - u6);
            u6 = u7;
            u6 = (u6 * u7);
            if (100000.0f > u6) {
                t1 = (unsigned short)t5;
                t1 = (t1 << 2);
                t5 = (t5 + 0x1);
                *(unsigned int *)(((((int)stk + 4) + 0x8) + t1)) = t3;
            }
        }
        t3 = t4;
    }
    t32 = 0x0;
    t38 = 0x0;
    if ((int)(unsigned short)t5 > 0) {
        t19 = 0x0;
        t20 = 0x0;
        for (;;) {
            *(int *)((int)stk + 0) = (t20 + (0x88 + ((int)stk + 4)));
            t21 = *(int *)(((((int)stk + 4) + 0x8) + t20));
            *(unsigned int *)(((int)stk + 4)) = t21;
            u22 = (((struct o28_float *)(a4))->v);
            u23 = (((struct o28_float *)(t21))->v);
            u24 = (((struct o30_float *)(a4))->v);
            u25 = (((struct o30_float *)(t21))->v);
            u28 = ((u25 - u24) * (u25 - u24));
            u28 = u28 + ((u23 - u22)) * ((u23 - u22));
            t19 = (t19 + 0x1);
            *(float *)(((t20 + (0x88 + ((int)stk + 4))) + 0x0)) = (math_signed_sqrt(u28));
            t20 = (t20 + 0x4);
            if ((int)(unsigned short)t19 >= (int)(unsigned short)t5) {
                break;
            }
        }
        t32 = t20;
        t45 = (unsigned short)t19;
        t38 = t19;
    } else {
        t45 = t2;
        t46 = t3;
        t47 = 0xC2;
        t48 = t4;
        u42 = u6;
        u43 = 100000.0f;
    }
    t49 = 0x0;
    t50 = t38;
    t51 = a4;
    t52 = t32;
    u54 = u42;
    u55 = u43;
    for (;;) {
        if ((int)(unsigned short)t49 >= (int)(unsigned short)t5) {
            break;
        }
        t47 = t49;
        t52 = (unsigned short)t49;
        t48 = (unsigned short)t47;
        t52 = (t52 << 2);
        t48 = (t48 << 2);
        t45 = (unsigned short)t47;
        t46 = t48;
        t48 = (t48 + (0x88 + ((int)stk + 4)));
        *(unsigned int *)(((int)stk + 4)) = (t52 + (0x88 + ((int)stk + 4)));
        if ((int)t45 < (int)(unsigned short)t5) {
            for (;;) {
                u54 = (*(float *)(((*(int *)(((int)stk + 4))) + 0x0)));
                t47 = (t47 + 0x1);
                if (u54 > ((*(float *)((t48 + 0x0))))) {
                    t50 = t52;
                    t51 = t46;
                    t50 = (t50 + (0x88 + ((int)stk + 4)));
                    u54 = (*(float *)((t50 + 0x0)));
                    t51 = (t51 + (0x88 + ((int)stk + 4)));
                    u55 = (*(float *)((t51 + 0x0)));
                    *(float *)((t51 + 0x0)) = u54;
                    t51 = t46;
                    *(float *)((t50 + 0x0)) = u55;
                    t50 = t52;
                    t51 = (t51 + (((int)stk + 4) + 0x8));
                    t50 = (t50 + (((int)stk + 4) + 0x8));
                    *(unsigned int *)(((int)stk + 8)) = t51;
                    t45 = (*(int *)((t50 + 0x0)));
                    t51 = (*(int *)((t51 + 0x0)));
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = t45;
                    *(unsigned int *)((t50 + 0x0)) = t51;
                }
                t46 = (t46 + 0x4);
                t48 = (t48 + 0x4);
                if ((int)(unsigned short)t47 >= (int)(unsigned short)t5) {
                    break;
                }
            }
        }
        t49 = (t49 + 0x1);
    }
    if ((unsigned short)t5 != 0) {
        t69 = ((int)((int)(FUN_0c179ac0()) % (int)(unsigned short)t5));
        *(int *)((int)stk + 0) = t69;
        t79 = (*(int *)(((((int)stk + 4) + 0x8) + (((int)((int)(t69 * ((int)((int)(FUN_0c179ac0()) % (int)(unsigned short)t5))) / (int)(unsigned short)t5)) << 2))));
        t80 = 0x1;
    } else {
        t79 = ((((struct o78_int *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v));
        t80 = 0x0;
    }
    (((struct o78_uint *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = t79;
    (((struct o6C_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o28_float *)(t79))->v));
    (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o2C_float *)(t79))->v));
    (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o30_float *)(t79))->v));
    (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = t80;
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t99 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t99;
}

int FUN_0c0be964(int a4, int a5, int a6, float f4)
{
    int stk[18];
    int t1;
    register int t3;
    register int t4;
    register int t5;
    register float u7;
    register int t30;
    register int t17;
    register int t18;
    register float u19;
    register float u20;
    register float u21;
    register float u22;
    register float u25;
    register int t27;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register float u50;
    register float u51;
    register int t66;
    register int t96;
    register int t2;
    register float u6;
    register int t13;
    register float u39;
    register float u40;
    register int t76;
    register int t77;

    t1 = 0xC0BEA38;
    t3 = (*(int *)0xC532458);
    t4 = a6;
    t5 = 0x0;
    u7 = f4;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t1 = 0x41C;
        t2 = (*(signed char *)((t3 + t1)));
        t2 = (unsigned char)t2;
        t4 = (*(int *)((t3 + 0xC)));
        if ((t2 == 0xC1) && (t1 = 0x41D, t13 = *(signed char *)((t3 + t1)), t1 = t13, t1 == 2)) {
            t1 = 0x2C;
            u7 = (*(float *)((t3 + t1)));
            u6 = (*(float *)((a4 + t1)));
            u7 = (u7 - u6);
            u6 = u7;
            u6 = (u6 * u7);
            if (100000.0f > u6) {
                t1 = (unsigned short)t5;
                t1 = (t1 << 2);
                t5 = (t5 + 0x1);
                *(unsigned int *)(((((int)stk + 4) + 0xC) + t1)) = t3;
            }
        }
        t3 = t4;
    }
    *(unsigned short *)(((int)stk + 4)) = 0x0;
    t30 = 0x0;
    if ((int)(unsigned short)t5 > 0) {
        t17 = 0x0;
        for (;;) {
            *(int *)((int)stk + 0) = (t17 + (((int)stk + 4) + 0x28));
            t18 = *(int *)(((((int)stk + 4) + 0xC) + t17));
            *(unsigned int *)(((int)stk + 8)) = t18;
            u19 = (((struct o28_float *)(a4))->v);
            u20 = (((struct o28_float *)(t18))->v);
            u21 = (((struct o30_float *)(a4))->v);
            u22 = (((struct o30_float *)(t18))->v);
            u25 = ((u22 - u21) * (u22 - u21));
            u25 = u25 + ((u20 - u19)) * ((u20 - u19));
            *(float *)(((t17 + (((int)stk + 4) + 0x28)) + 0x0)) = (math_signed_sqrt(u25));
            t27 = *(short *)(((int)stk + 4));
            *(unsigned short *)(((int)stk + 4)) = (t27 + 0x1);
            t17 = (t17 + 0x4);
            if ((int)(unsigned short)(t27 + 0x1) >= (int)(unsigned short)t5) {
                break;
            }
        }
        t30 = t17;
        t42 = (unsigned short)(t27 + 0x1);
    } else {
        t42 = t2;
        t43 = t3;
        t44 = 0xC1;
        t45 = t4;
        u39 = u6;
        u40 = u7;
    }
    t46 = 0x0;
    t47 = a4;
    t48 = t30;
    u50 = u39;
    u51 = u40;
    for (;;) {
        if ((int)(unsigned short)t46 >= (int)(unsigned short)t5) {
            break;
        }
        t44 = t46;
        t48 = (unsigned short)t46;
        t45 = (unsigned short)t44;
        t48 = (t48 << 2);
        t45 = (t45 << 2);
        t42 = (unsigned short)t44;
        t43 = t45;
        t45 = (t45 + (((int)stk + 4) + 0x28));
        *(unsigned int *)(((int)stk + 8)) = (t48 + (((int)stk + 4) + 0x28));
        if ((int)t42 < (int)(unsigned short)t5) {
            for (;;) {
                u50 = (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
                t44 = (t44 + 0x1);
                if (u50 > ((*(float *)((t45 + 0x0))))) {
                    t42 = t43;
                    t42 = (t42 + (((int)stk + 4) + 0x28));
                    t47 = t48;
                    t47 = (t47 + (((int)stk + 4) + 0x28));
                    *(unsigned int *)(((int)stk + 4)) = t42;
                    u51 = (*(float *)((t42 + 0x0)));
                    u50 = (*(float *)((t47 + 0x0)));
                    *(float *)((t42 + 0x0)) = u50;
                    t42 = t48;
                    *(float *)((t47 + 0x0)) = u51;
                    t47 = t43;
                    t47 = (t47 + (((int)stk + 4) + 0xC));
                    t42 = (t42 + (((int)stk + 4) + 0xC));
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)((t47 + 0x0)));
                    *(unsigned int *)(((int)stk + 12)) = t42;
                    *(unsigned int *)((t47 + 0x0)) = (*(int *)((t42 + 0x0)));
                    t42 = (*(int *)(((int)stk + 12)));
                    *(unsigned int *)((t42 + 0x0)) = (*(int *)(((int)stk + 4)));
                }
                t43 = (t43 + 0x4);
                t45 = (t45 + 0x4);
                if ((int)(unsigned short)t44 >= (int)(unsigned short)t5) {
                    break;
                }
            }
        }
        t46 = (t46 + 0x1);
    }
    if ((unsigned short)t5 != 0) {
        t66 = ((int)((int)(FUN_0c179ac0()) % (int)(unsigned short)t5));
        *(int *)((int)stk + 0) = t66;
        t76 = (*(int *)(((((int)stk + 4) + 0xC) + (((int)((int)(t66 * ((int)((int)(FUN_0c179ac0()) % (int)(unsigned short)t5))) / (int)(unsigned short)t5)) << 2))));
        t77 = 0x1;
    } else {
        t76 = ((((struct o78_int *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v));
        t77 = 0x0;
    }
    (((struct o78_uint *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = t76;
    (((struct o6C_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o28_float *)(t76))->v));
    (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o2C_float *)(t76))->v));
    (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o30_float *)(t76))->v));
    (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = t77;
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t96 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t96;
}
