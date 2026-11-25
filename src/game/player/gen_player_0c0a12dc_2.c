/* game/player: functions 0C0A12DC-0C0A2E52, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c135b00(int, int, int, int, float);
int FUN_0c0a18ec(int a4);
int FUN_0c0a19dc(int a4, int a5);
struct o1C_short { char p[0x1C]; short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c0a18ec(int a4)
{
    int stk[5];
    register float u10;
    register int t20;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), ((int)stk + 0));
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x3)) == 0) {
            u10 = ((((struct o0_float *)0xC0A19C4)->v));
            u10 = u10 + ((((struct o4_float *)0xC0A19C4)->v)) * (float)(*(short *)((a4 + 0x1E)));
            FUN_0c135b00(a4, ((int)stk + 0), 0xF, 0x0, u10);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
    }
    t20 = FUN_0c037bf6(a4);
    if ((unsigned char)t20 != 0) {
        return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    return (FUN_0c038362(a4));
}

int FUN_0c0a19dc(int a4, int a5)
{
    int qe1;
    int qe0;
    int qe3;
    int qe2;
    int stk[7];
    int t4;
    int t48;
    int t92;
    int t50;
    int t6;
    int t89;
    int t60;
    int t47;
    int t16;
    int t3;

    (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) + 0x1);
    if ((*(int *)(((((short)((((struct o1C_short *)(a4))->v)) * (short)0x38) + 0xC1C614C) + 0x0))) != 0) {
        t3 = (((struct o1C_short *)(a4))->v);
        t4 = (((struct o1E_short *)(a4))->v);
        qe3 = (((short)t3 * (short)0x38) + 0xC1C614C);
        if (((int)(*(int *)((qe3 + 0x0))) <= (int)t4) && (t6 = *(int *)((qe3 + 0x4)), (int)t6 >= (int)t4)) {
            thunk_FUN_0c058310(((*(int *)(((((*(int *)(((((short)((((struct o1C_short *)(a4))->v)) * (short)0x38) + 0xC1C614C) + 0x8))) << 2) + (0xC53255C + ((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938))) + 0x0))) + 0x28), ((int)stk + 0));
            if (((int)((int)((((struct o1E_short *)(a4))->v)) % (int)(*(int *)(((((short)((((struct o1C_short *)(a4))->v)) * (short)0x38) + 0xC1C614C) + 0xC))))) == 0) {
                t16 = (((struct o1C_short *)(a4))->v);
                qe1 = (0xC1C614C + ((short)t16 * (short)0x38));
                FUN_0c135b00(a4, ((int)stk + 0), (*(int *)((qe1 + 0x10))), 0x2, (((((struct o14_float *)(qe1))->v)) + (((struct o18_float *)(qe1))->v) * (float)((((struct o20_short *)(a4))->v))));
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            }
        }
    }
    if ((*(int *)(((((short)((((struct o1C_short *)(a4))->v)) * (short)0x38) + 0xC1C614C) + 0x1C))) != 0) {
        t47 = (((struct o1C_short *)(a4))->v);
        t48 = (((struct o1E_short *)(a4))->v);
        qe2 = ((((short)t47 * (short)0x38) + 0xC1C614C) + 0x1C);
        if (((int)(*(int *)((qe2 + 0x0))) <= (int)t48) && (t50 = *(int *)((qe2 + 0x4)), (int)t50 >= (int)t48)) {
            thunk_FUN_0c058310(((*(int *)(((((*(int *)(((((short)((((struct o1C_short *)(a4))->v)) * (short)0x38) + 0xC1C614C) + 0x24))) << 2) + (0xC53255C + ((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938))) + 0x0))) + 0x28), ((int)stk + 0));
            if (((int)((int)((((struct o1E_short *)(a4))->v)) % (int)(*(int *)(((((short)((((struct o1C_short *)(a4))->v)) * (short)0x38) + 0xC1C614C) + 0x28))))) == 0) {
                t60 = (((struct o1C_short *)(a4))->v);
                qe0 = ((0xC1C614C + ((short)t60 * (short)0x38)) + 0x1C);
                FUN_0c135b00(a4, ((int)stk + 0), (*(int *)((qe0 + 0x10))), 0x2, (((((struct o14_float *)(qe0))->v)) + (((struct o18_float *)(qe0))->v) * (float)((((struct o20_short *)(a4))->v))));
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            }
        }
    }
    t89 = FUN_0c037bf6(a4);
    if ((unsigned char)t89 != 0) {
        t92 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    } else {
        t92 = (FUN_0c038362(a4));
    }
    return t92;
}
