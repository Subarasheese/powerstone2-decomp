/* game/hit: functions 0C066058-0C0660FE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c066058(int a4, int a5);

int FUN_0c066058(int a4, int a5)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register float u21;
    float u22;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    u2 = (((struct oC_float *)((a5 + 0x8)))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u3 + u2) - u4);
    u6 = (((struct o10_float *)((a4 + 0x8)))->v);
    u7 = (((struct o10_float *)((a5 + 0x8)))->v);
    u8 = (((struct o4_float *)((a4 + 0x8)))->v);
    u9 = (((struct o4_float *)((a5 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u6 + u7) - u11);
    u13 = (((struct o14_float *)((a4 + 0x8)))->v);
    u14 = (((struct o14_float *)((a5 + 0x8)))->v);
    u15 = (((struct o8_float *)((a4 + 0x8)))->v);
    u16 = (((struct o8_float *)((a5 + 0x8)))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u13 + u14) - u18);
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u21 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u21)) && (u22 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u22)))) {
        return 0x1;
    }
    return 0x0;
}
