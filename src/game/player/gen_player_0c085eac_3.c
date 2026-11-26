/* game/player: functions 0C085EAC-0C0866A8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o168_float { char p[0x168]; float v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o372D_uchar { char p[0x372D]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c085f66(int);
int FUN_0c085ffa(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c0c2380(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c14f824(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c086322(int a4, int a5, int a6);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };


int FUN_0c086322(int a4, int a5, int a6)
{
    int stk[9];
    int t94;
    int t66;
    int t71;
    int t0;
    int t4;
    float u31;
    float u36;
    int t14;
    int t26;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t4 = FUN_0c085f66(a4);
        if (t4 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x5, (*(signed char *)(a4 + 0x1)));
        }
        t94 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28)));
    } else {
        if (!(18.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t14 = (((struct o22_short *)(a4))->v), t14 == 0)) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)(a4 + 0x1)), 0x0);
            FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
        }
        if ((((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) > 18.0f) && (t26 = (((struct o1C_short *)(a4))->v), t26 != 0)) {
            *(int *)((int)stk + 8) = (a4 + 0x28);
            u31 = ((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)) * (math_sin_angle16(((((struct o38_int *)(a4))->v))));
            (((struct o28_float *)(a4))->v) = u31;
            *(int *)((int)stk + 8) = (a4 + 0x30);
            u36 = ((((struct o30_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)) * (math_cos_angle16(((((struct o38_int *)(a4))->v))));
            (((struct o30_float *)(a4))->v) = u36;
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - ((((struct o58_float *)(a4))->v)));
            (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
            if (((*(int *)0xC542260) & 3) == 0) {
                thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC5325A4))) + 0x28), ((int)stk + 12));
                *(float *)(((int)stk + 16)) = ((((struct o168_float *)(a4))->v));
                FUN_0c14f824((*(signed char *)(a4 + 0x1)), ((int)stk + 12));
                thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532598))) + 0x28), ((int)stk + 12));
                *(float *)(((int)stk + 16)) = ((((struct o168_float *)(a4))->v));
                FUN_0c14f824((*(signed char *)(a4 + 0x1)), ((int)stk + 12));
            }
        }
        t66 = FUN_0c085f66(a4);
        t94 = t66;
        if (t66 != 0) {
            t94 = 0x8C;
            if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) > 38.0f) {
                t71 = FUN_0c085ffa(a4, 0x280);
                t94 = t71;
                if (t71 != 0) {
                    *(int *)((int)stk + 8) = 0x1C;
                    *(int *)((int)stk + 4) = 0x3;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x1C, 0xFFFFFFFF, 0x3, 0x1C);
                    FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
                    (((struct o372D_uchar *)(a4))->v) = 0x6;
                    (((struct o1C_ushort *)(a4))->v) = 0x9;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    (((struct o4C_float *)(a4))->v) = -4.0f;
                    (((struct o58_float *)(a4))->v) = (4.0f / (float)((((struct o1C_short *)(a4))->v)));
                    (((struct o5C_float *)(a4))->v) = 0.0f;
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    t94 = 0x50;
                }
            }
        }
    }
    return t94;
}
