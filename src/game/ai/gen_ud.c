/* Straight-line functions with calls and guards (batch gen_ud): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
int FUN_0c0bb70c(int);
int FUN_0c0bb73e(int);
int ai_clear_op_state(void);
int nlRand(void);
int FUN_0c0c1784(int a4);

int FUN_0c0c1784(int a4)
{
    int stk[1];
    register int t0;
    register int t3;
    register int t24;
    register int t7;
    register int t14;
    register int t15;
    register int t16;
    register int t20;
    register int t25;
    register int t27;
    register int t36;
    register int t37;
    register int t38;
    register int t44;

    t0 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t0 + 0x2);
    *(unsigned short *)(((int)stk + 0)) = (*(short *)((((t0 + 0x2) - 2) + 0x0)));
    t3 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    t24 = 0;
    if ((unsigned char)t3 != 0) {
        if ((unsigned char)t3 != 1) {
            t7 = (unsigned char)t3;
            if ((unsigned char)t3 != 2) {
            } else {
                (((struct o4_ushort *)0xC47245C)->v) = 0x1;
                t7 = ai_clear_op_state();
                *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
            }
        } else {
            t24 = 1;
        }
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t14 = *(signed char *)0xC472462;
        t15 = nlRand();
        t16 = (t15 % 0x2);
        (((struct o26_ushort *)((((unsigned short)(unsigned char)t14 * (unsigned short)0x264) + 0xC471ACC)))->v) = t16;
        *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = (*(short *)(((int)stk + 0)));
        t20 = *(signed char *)0xC472462;
        *(unsigned char *)(((((unsigned short)(unsigned char)t20 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t20 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        t24 = 1;
    }
    if (t24) {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t25 = FUN_0c0bb73e(a4);
        *(unsigned short *)(((int)stk + 0)) = (FUN_0c0bb70c((0x4000 + t25)));
        t27 = FUN_0c0bb70c((0xC000 + t25));
        if (((((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v)) != 0) {
            (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | (*(short *)(((int)stk + 0))));
        } else {
            (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t27);
        }
        t36 = *(signed char *)0xC472462;
        t37 = *(short *)(((((unsigned short)(unsigned char)t36 * (unsigned short)0x264) + 0xC471ACC) + 0x18));
        *(unsigned short *)(((((unsigned short)(unsigned char)t36 * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = (t37 - 1);
        if ((unsigned short)(t37 - 1) == 0) {
            t38 = *(signed char *)0xC472462;
            *(unsigned char *)(((((unsigned short)(unsigned char)t38 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t38 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        }
        t44 = (unsigned short)(t37 - 1);
    } else {
        t44 = t7;
    }
    return t44;
}
