/* game/unsorted: functions 0C0BEB98-0C0BFD2E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o377C_int { char p[0x377C]; int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
int ai_clear_op_state(void);
float math_signed_sqrt(float);
int FUN_0c179ac0(void);
extern int FUN_0c187798();
int FUN_0c0beb98(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0bedb2(int a4, int a5, int a6);

int FUN_0c0beb98(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[260];
    int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u8;
    register int t31;
    register int t18;
    register int t19;
    register float u20;
    register float u21;
    register float u22;
    register float u23;
    register float u26;
    register int t28;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register float u52;
    register float u53;
    register int t69;
    register int t99;
    register int t2;
    register float u7;
    register int t14;
    register float u41;
    register float u42;
    register int t79;
    register int t80;

    t1 = 0xC0BEC70;
    t3 = (*(int *)0xC532458);
    t4 = a5;
    t5 = a7;
    t6 = 0x0;
    u8 = f5;
    for (;;) {
        if (t3 == 0) {
            break;
        }
        t1 = 0x41C;
        t4 = (*(signed char *)((t3 + t1)));
        t4 = (unsigned char)t4;
        t5 = (*(int *)((t3 + 0xC)));
        if ((t4 != 0xC2) && ((t2 = 0xC1, t4 != t2) && (t1 = 0x41D, t14 = *(signed char *)((t3 + t1)), t1 = t14, t1 == 2))) {
            t1 = 0x2C;
            u8 = (*(float *)((t3 + t1)));
            u7 = (*(float *)((a4 + t1)));
            u8 = (u8 - u7);
            u7 = u8;
            u7 = (u7 * u8);
            if (100000.0f > u7) {
                t1 = (unsigned short)t6;
                t1 = (t1 << 2);
                t6 = (t6 + 0x1);
                *(unsigned int *)(((((int)stk + 4) + 0xC) + t1)) = t3;
            }
        }
        t3 = t5;
    }
    *(unsigned short *)(((int)stk + 8)) = 0x0;
    t31 = 0x0;
    if ((int)(unsigned short)t6 > 0) {
        t18 = 0x0;
        for (;;) {
            *(int *)((int)stk + 0) = (t18 + (0x20C + ((int)stk + 4)));
            t19 = *(int *)(((((int)stk + 4) + 0xC) + t18));
            *(unsigned int *)(((int)stk + 4)) = t19;
            u20 = (((struct o28_float *)(a4))->v);
            u21 = (((struct o28_float *)(t19))->v);
            u22 = (((struct o30_float *)(a4))->v);
            u23 = (((struct o30_float *)(t19))->v);
            u26 = ((u23 - u22) * (u23 - u22));
            u26 = u26 + ((u21 - u20)) * ((u21 - u20));
            *(float *)(((t18 + (0x20C + ((int)stk + 4))) + 0x0)) = (math_signed_sqrt(u26));
            t28 = *(short *)(((int)stk + 8));
            *(unsigned short *)(((int)stk + 8)) = (t28 + 0x1);
            t18 = (t18 + 0x4);
            if ((int)(unsigned short)(t28 + 0x1) >= (int)(unsigned short)t6) {
                break;
            }
        }
        t31 = t18;
    } else {
        t44 = t2;
        t45 = t3;
        t46 = t4;
        t47 = 0xC2;
        u41 = u7;
        u42 = 100000.0f;
    }
    t48 = 0x0;
    t49 = a4;
    t50 = t31;
    u52 = u41;
    u53 = u42;
    for (;;) {
        if ((int)(unsigned short)t48 >= (int)(unsigned short)t6) {
            break;
        }
        t46 = t48;
        t50 = (unsigned short)t48;
        t47 = (unsigned short)t46;
        t50 = (t50 << 2);
        t47 = (t47 << 2);
        t44 = (unsigned short)t46;
        t45 = t47;
        t47 = (t47 + (0x20C + ((int)stk + 4)));
        *(unsigned int *)(((int)stk + 8)) = (t50 + (0x20C + ((int)stk + 4)));
        if ((int)t44 < (int)(unsigned short)t6) {
            for (;;) {
                u52 = (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
                t46 = (t46 + 0x1);
                if (u52 > ((*(float *)((t47 + 0x0))))) {
                    t44 = t50;
                    t44 = (t44 + (0x20C + ((int)stk + 4)));
                    t49 = t45;
                    t49 = (t49 + (0x20C + ((int)stk + 4)));
                    u53 = (*(float *)((t49 + 0x0)));
                    *(unsigned int *)(((int)stk + 4)) = t44;
                    u52 = (*(float *)((t44 + 0x0)));
                    t44 = t50;
                    t44 = (t44 + (((int)stk + 4) + 0xC));
                    *(float *)((t49 + 0x0)) = u52;
                    t49 = t45;
                    t49 = (t49 + (((int)stk + 4) + 0xC));
                    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = u53;
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)((t49 + 0x0)));
                    *(unsigned int *)(((int)stk + 12)) = t44;
                    *(unsigned int *)((t49 + 0x0)) = (*(int *)((t44 + 0x0)));
                    t44 = (*(int *)(((int)stk + 12)));
                    *(unsigned int *)((t44 + 0x0)) = (*(int *)(((int)stk + 4)));
                }
                t45 = (t45 + 0x4);
                t47 = (t47 + 0x4);
                if ((int)(unsigned short)t46 >= (int)(unsigned short)t6) {
                    break;
                }
            }
        }
        t48 = (t48 + 0x1);
    }
    if ((unsigned short)t6 != 0) {
        t69 = ((int)((int)(FUN_0c179ac0()) % (int)(unsigned short)t6));
        *(int *)((int)stk + 0) = t69;
        t79 = (*(int *)(((((int)stk + 4) + 0xC) + (((int)((int)(t69 * ((int)((int)(FUN_0c179ac0()) % (int)(unsigned short)t6))) / (int)(unsigned short)t6)) << 2))));
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

