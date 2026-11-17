/* game/ai: functions 0C0C0BF0-0C0C0E16, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o3760_int { char p[0x3760]; int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o42E_short { char p[0x42E]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int FUN_0c0bb70c(int);
int FUN_0c0bb73e(int, float);
int ai_clear_op_state(void);
int FUN_0c0c0bf0(int a4, float f4);
int FUN_0c0c0cbe(int a4);
void FUN_0c0c0d7e(void);
int FUN_0c0c0d82(int a4);
int FUN_0c0c0dbe(int a4);

int FUN_0c0c0bf0(int a4, float f4)
{

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_1 = a4;
    v0_0 = FUN_0c0bb73e(v0_1, f4);
    v0_7 = FUN_0c0bb70c(v0_0);
    v0_9 = *(int *)0xC47245C;
    *(unsigned int *)0xC47245C = (v0_9 + 0x2);
    v0_6 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    v0_3 = ((unsigned char)v0_6);
    v0_4 = (0xC47245C);
    v0_0 = (0xC471ACC);
    v0_2 = (0xC472462);
    v0_5 = (v0_1);
    v0_1 = (0xC472460);
    v0_7 = (v0_7);
    v0_8 = (0x0);
    v0_9 = ((*(short *)((((v0_9 + 0x2) - 2) + 0x0))));
    if (((unsigned char)v0_6 == 0)) goto L_C0C0C42;
    if ((v0_3 == 1)) goto L_C0C0C6C;
    if ((v0_3 == 2)) goto L_C0C0C6C;
    if ((v0_3 == 3)) goto L_C0C0C78;
    if ((v0_3 == 4)) goto L_C0C0C9A;
    L_C0C0CB2:;
    return v0_3;
    L_C0C0C9A:;
    *(unsigned short *)((v0_1 + 0x0)) = 0x1;
    v0_1 = ai_clear_op_state();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)((v0_4 + 0x0)));
    v0_3 = (v0_1);
    goto L_C0C0CB2;
    L_C0C0C78:;
    *(unsigned short *)((v0_1 + 0x0)) = v0_8;
    (((struct o42C_ushort *)(v0_5))->v) = (((((struct o42C_short *)(v0_5))->v)) | (v0_7 | v0_9));
    v0_3 = (0x42C);
    L_C0C0C84:;
    v0_1 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C0CB2;
    L_C0C0C6C:;
    *(unsigned short *)((v0_1 + 0x0)) = v0_8;
    (((struct o42C_ushort *)(v0_5))->v) = (((((struct o42C_short *)(v0_5))->v)) | v0_7);
    v0_3 = (0x42C);
    goto L_C0C0C84;
    L_C0C0C42:;
    *(unsigned short *)((v0_1 + 0x0)) = v0_8;
    if ((((unsigned short)((((struct o42E_short *)(v0_5))->v)) & (unsigned short)v0_9) == 0)) goto L_C0C0C5A;
    (((struct o42C_ushort *)(v0_5))->v) = (((((struct o42C_short *)(v0_5))->v)) | v0_7);
    v0_3 = (0x42C);
    goto L_C0C0CB2;
    L_C0C0C5A:;
    v0_3 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_3 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_3 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C0C6C;
}

int FUN_0c0c0cbe(int a4)
{
    register int t4;

    if ((*(signed char *)((a4 + 0x3715))) == 0) {
        *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
        t4 = ai_clear_op_state();
        (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t4 = 0x3715;
    }
    return t4;
}

void FUN_0c0c0d7e(void)
{
    
}

int FUN_0c0c0d82(int a4)
{
    register int t5;

    if ((int)(unsigned char)(*(signed char *)((a4 + 0x3735))) > (int)(*(signed char *)((a4 + 0x3737)))) {
        (((struct o4_ushort *)0xC47245C)->v) = 0x1;
        ai_clear_op_state();
        t5 = (((struct o0_int *)0xC47245C)->v);
        *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = t5;
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t5 = 0x3737;
    }
    return t5;
}

int FUN_0c0c0dbe(int a4)
{
    register int t1;

    t1 = *(signed char *)((((((struct o3760_int *)(a4))->v)) + 0x3715));
    if ((t1 != 32) && ((t1 != 16) && ((t1 != 14) && (t1 != 15)))) {
        *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
        t1 = ai_clear_op_state();
        (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}
