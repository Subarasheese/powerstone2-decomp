/* game/unsorted: functions 0C0C6A94-0C0C6B82, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
int math_mat_get_translate(int, int);
int FUN_0c059df2(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c165392(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0c6a94(int a4);

int FUN_0c0c6a94(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F2;
    register float F3;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_0 = *(signed char *)((v0_1 + 0x1));
    v0_2 = (FUN_0c0c283a(v0_1)) != 0;
    v0_0 = ((((short)v0_0 * (short)0x3938) + 0xC532498));
    v0_1 = (v0_1);
    if (v0_2) goto L_C0C6AE4;
    v0_2 = *(signed char *)((v0_1 + 0x15));
    v0_3 = (v0_2);
    if ((v0_2 == 0)) goto L_C0C6AC4;
    if ((v0_3 == 1)) goto L_C0C6ADA;
    L_C0C6B72:;
    (((struct o376C_uint *)(v0_0))->v) = v0_1;
    v0_3 = (0x376C);
    L_C0C6B76:;
    return v0_3;
    L_C0C6ADA:;
    v0_2 = (FUN_0c0c213c(v0_1)) == 0;
    if (!(v0_2)) goto L_C0C6AE4;
    math_mat_get_translate((v0_1 + 0x64), ((int)stk + 0));
    w0_1 = *(float *)(((int)stk + 0));
    w0_0 = ((math_sin_angle16((*(int *)((v0_0 + 0x38))))) * ((((struct o378C_float *)(v0_0))->v)));
    w0_1 = w0_1;
    w0_1 = w0_1 + 76.0f * w0_0;
    *(float *)(((int)stk + 0)) = w0_1;
    w0_0 = (*(float *)(((int)stk + 4)));
    w0_0 = w0_0 + 12.3999996f * ((((struct o378C_float *)(v0_0))->v));
    *(float *)(((int)stk + 4)) = w0_0;
    w0_1 = *(float *)(((int)stk + 8));
    w0_0 = ((math_cos_angle16((*(int *)((v0_0 + 0x38))))) * ((((struct o378C_float *)(v0_0))->v)));
    w0_1 = w0_1;
    w0_1 = w0_1 + 76.0f * w0_0;
    *(float *)(((int)stk + 8)) = w0_1;
    w0_0 = (76.0f);
    if ((((int)((int)(*(short *)((v0_1 + 0x1E))) % (int)0x6)) != 0)) goto L_C0C6B6C;
    FUN_0c165392(((int)stk + 0), (*(int *)((v0_0 + 0x38))), (*(signed char *)((v0_0 + 0x1))), (((((int)((int)(*(short *)((v0_1 + 0x1E))) % (int)0xC)) == 0)) ? 1 : 0));
    goto L_C0C6B6C;
    L_C0C6AE4:;
    v0_3 = ((FUN_0c0c2d56(v0_1, 0x6, (*(signed char *)((v0_1 + 0x1))))));
    goto L_C0C6B76;
    L_C0C6B6C:;
    *(unsigned short *)((v0_1 + 0x1E)) = ((*(short *)((v0_1 + 0x1E))) + 0x1);
    goto L_C0C6B72;
    L_C0C6AC4:;
    *(unsigned short *)((v0_1 + 0x1E)) = 0x0;
    FUN_0c059df2((*(signed char *)((v0_1 + 0x1))), 0x4E);
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    goto L_C0C6ADA;
}
