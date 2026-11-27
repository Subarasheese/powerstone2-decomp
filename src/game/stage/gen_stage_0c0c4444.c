/* game/stage: functions 0C0C4444-0C0C47A4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0c25c4(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c14f734(int, int, int, int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0c4444(int a4);
int FUN_0c0c4534(int a4);
int FUN_0c0c472a(int a4);
int FUN_0c0c4770(int a4, int a5, int a6);

int FUN_0c0c4444(int a4)
{
    int stk[3];
    register int t6;

    *(float *)(((int)stk + 0)) = ((((struct o28_float *)(a4))->v));
    *(float *)(((int)stk + 8)) = ((((struct o30_float *)(a4))->v));
    *(float *)(((int)stk + 4)) = ((((struct o168_float *)(a4))->v));
    FUN_0c14f734(((int)stk + 0), (a4 + 0x4C), (*(short *)((a4 + 0x1C))), (*(signed char *)((a4 + 0x1))));
    t6 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t6 + 0x1);
    return (t6 + 0x1);
}


int FUN_0c0c472a(int a4)
{
    register int t1;

    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c0c2ce4(a4);
        if (t1 != 0) {
            return FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0c4770(int a4, int a5, int a6)
{
    register int t0;
    register int t2;

    t0 = FUN_0c0c3e3a(a4, a5, a6);
    if (t0 == 0) {
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                return t2;
            }
            return FUN_0c0c472a(a4);
        }
        return FUN_0c0c4534(a4);
    }
    return t0;
}
