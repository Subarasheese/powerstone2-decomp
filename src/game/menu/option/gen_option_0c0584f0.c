/* game/menu/option: functions 0C0584F0-0C058854, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
float math_signed_sqrt(float);
int math_atan2_angle16(float, float);
int FUN_0c17a360(int);
int FUN_0c17a4c0(int, int);
int FUN_0c17a550(int);
int nlCalcPoint(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c187798(int, int, int);
int FUN_0c0584f0(int a4, int a5, int a6, int a7);
int FUN_0c058514(int a4, int a5);
int FUN_0c058542(int a4, int a5, int a6, float f4);
int FUN_0c058716(int a4, int a5);
void FUN_0c05883a(int a4, int a5, int a6, float f4, float f5, float f6);

int FUN_0c0584f0(int a4, int a5, int a6, int a7)
{
    FUN_0c17a4c0(a5, a6);
    FUN_0c17a550(a7);
    return FUN_0c17a360(a4);
}

int FUN_0c058514(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t2 = FUN_0c0584f0((*(int *)((t1 + 0xC))), (*(int *)((t1 + 0x0))), (*(int *)((t1 + 0x4))), (*(int *)((t1 + 0x8))));
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x10);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
        t0 = t2;
    }
    return t0;
}


int FUN_0c058716(int a4, int a5)
{
    int stk[3];
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float t8;
    register float u10;
    int t13;

    *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((a5 + 0x0))) - ((((struct o28_float *)(a4))->v)));
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(a5))->v)) - ((((struct o2C_float *)(a4))->v)));
    u4 = (((struct o30_float *)(a4))->v);
    u5 = (((struct o8_float *)(a5))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u5 - u4);
    u6 = *(float *)((((int)stk + 0) + 0x0));
    u7 = ((u5 - u4) * (u5 - u4));
    u7 = u7 + u6 * u6;
    t8 = math_signed_sqrt(u7);
    u10 = t8;
    if (t8 == 0.0f) {
        u10 = 9.99999997e-07f;
    }
    t13 = math_atan2_angle16((-((((struct o4_float *)(((int)stk + 0)))->v))), u10);
    return (0xFFFF & t13);
}

void FUN_0c05883a(int a4, int a5, int a6, float f4, float f5, float f6)
{
    *(float *)((a4 + 0x0)) = (((((f6 - (float)a6) * (f4 - f5)) / ((float)a5 - (float)a6))) + f5);
}


