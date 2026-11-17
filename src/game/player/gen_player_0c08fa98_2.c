/* game/player: functions 0C08FA98-0C090DF4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_int { char p[0x8C]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07d030(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c125704(int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c08fff0(int a4, int a5, int a6);

int FUN_0c08fff0(int a4, int a5, int a6)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t4;
    register int t11;
    register int t20;
    register int t28;

    if ((int)(*(short *)((a4 + 0x1E))) > 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
    } else {
        t2 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t2 != 0) {
            *(int *)((int)stk + 12) = 0x1B;
            *(int *)((int)stk + 8) = 0x1;
            t3 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 16)) = t3;
            t4 = t3;
            *(int *)((int)stk + 4) = t4;
            FUN_0c07e79c(a4, t3, 0x1, 0x1B, t4, 0x1, 0x1B);
        }
    }
    t11 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t11 - 1);
    if ((int)(short)(t11 - 1) <= 0) {
        (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 6.0f);
        (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 6.0f);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 35.0f;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        *(unsigned int *)((a4 + 0x10)) = ((((struct o3760_int *)(a4))->v));
        FUN_0c07d030(a4, 0x1);
        FUN_0c125704(a4, 0x24, 0xA);
        *(int *)((int)stk + 12) = 0xC1C5F74;
        *(int *)((int)stk + 8) = 0xC1C5F68;
        *(int *)((int)stk + 4) = 0x50;
        *(int *)((int)stk + 0) = 0x24;
        t20 = *(signed char *)((a4 + 0x1));
        (((struct o10_uchar *)(((int)stk + 0)))->v) = t20;
        FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t20 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x24, 0x50, 0xC1C5F68, 0xC1C5F74);
        t28 = 0x0;
    } else {
        FUN_0c0819c2(a4, 0x71C);
        t28 = 0x1;
    }
    (((struct o3749_uchar *)(a4))->v) = t28;
    return 0x3749;
}
