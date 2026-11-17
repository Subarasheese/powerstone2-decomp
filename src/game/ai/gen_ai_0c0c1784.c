/* game/ai: functions 0C0C1784-0C0C18B0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int FUN_0c0bb70c(int);
extern int FUN_0c0bb73e();
int ai_clear_op_state(void);
int FUN_0c179ac0(void);
int FUN_0c0c1784(int a4, float f4);

int FUN_0c0c1784(int a4, float f4)
{
    int stk[1];
    register int t0;
    register int t3;
    register int t14;
    register int t16;
    register int t25;
    register int t26;
    register int t27;
    register int t41;
    register int t42;
    register int t43;
    register int t47;
    register int t49;
    register int t51;
    register int t60;
    register int t61;
    register int t62;
    register int t68;

    t0 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t0 + 0x2);
    *(unsigned short *)(((int)stk + 0)) = (*(short *)((((t0 + 0x2) - 2) + 0x0)));
    t3 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    if ((unsigned char)t3 != 0) {
        if ((unsigned char)t3 != 1) {
            t68 = (unsigned char)t3;
            if ((unsigned char)t3 != 2) {
            } else {
                (((struct o4_ushort *)0xC47245C)->v) = 0x1;
                t68 = ai_clear_op_state();
                *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
            }
        } else {
            (((struct o4_ushort *)0xC47245C)->v) = 0x0;
            t14 = ((int (*)(int, float))(FUN_0c0bb73e))(a4, f4);
            *(unsigned short *)(((int)stk + 0)) = (FUN_0c0bb70c((0x4000 + t14)));
            t16 = FUN_0c0bb70c((0xC000 + t14));
            if (((((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v)) != 0) {
                (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | (*(short *)(((int)stk + 0))));
            } else {
                (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t16);
            }
            t25 = *(signed char *)0xC472462;
            t26 = *(short *)(((((unsigned short)(unsigned char)t25 * (unsigned short)0x264) + 0xC471ACC) + 0x18));
            *(unsigned short *)(((((unsigned short)(unsigned char)t25 * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = (t26 - 1);
            if ((unsigned short)(t26 - 1) == 0) {
                t27 = *(signed char *)0xC472462;
                *(unsigned char *)(((((unsigned short)(unsigned char)t27 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t27 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
            }
            t68 = (unsigned short)(t26 - 1);
        }
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t41 = *(signed char *)0xC472462;
        t42 = FUN_0c179ac0();
        t43 = ((~(((~t42) + 0x1) & 0x1)) + 0x1);
        if ((int)t42 >= 0) {
            t43 = (t42 & 0x1);
        }
        (((struct o26_ushort *)((((unsigned short)(unsigned char)t41 * (unsigned short)0x264) + 0xC471ACC)))->v) = t43;
        *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = (*(short *)(((int)stk + 0)));
        t47 = *(signed char *)0xC472462;
        *(unsigned char *)(((((unsigned short)(unsigned char)t47 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t47 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t49 = ((int (*)(int))(FUN_0c0bb73e))(a4);
        *(unsigned short *)(((int)stk + 0)) = (FUN_0c0bb70c((0x4000 + t49)));
        t51 = FUN_0c0bb70c((0xC000 + t49));
        if (((((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v)) != 0) {
            (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | (*(short *)(((int)stk + 0))));
        } else {
            (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t51);
        }
        t60 = *(signed char *)0xC472462;
        t61 = *(short *)(((((unsigned short)(unsigned char)t60 * (unsigned short)0x264) + 0xC471ACC) + 0x18));
        *(unsigned short *)(((((unsigned short)(unsigned char)t60 * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = (t61 - 1);
        if ((unsigned short)(t61 - 1) == 0) {
            t62 = *(signed char *)0xC472462;
            *(unsigned char *)(((((unsigned short)(unsigned char)t62 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t62 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        }
        t68 = (unsigned short)(t61 - 1);
    }
    return t68;
}
