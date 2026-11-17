/* game/player: functions 0C0392BC-0C03A56E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
int FUN_0c039846(int);
int FUN_0c0398f0(int, int, int);
int FUN_0c03999c(int, int, int, int);
int FUN_0c03a0cc(int, int);
int FUN_0c03a178(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int math_mat_get_translate(int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int FUN_0c17b1a0(int, int, int);
int FUN_0c17c130(int, int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
float FUN_0c039a12(int a4);
int FUN_0c03a2ce(int a4, int a5, int a6);
int FUN_0c03a536(int a4, int a5, int a6);

float FUN_0c039a12(int a4)
{
    int stk[12];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    v0_6 = a4;
    *(unsigned int *)(((int)stk + 16)) = v0_6;
    v0_0 = *(signed char *)((v0_6 + 0x2));
    v0_7 = (v0_0);
    if (((int)v0_0 < (int)(*(int *)0xC1B71E4))) goto L_C039A38;
    L_C039DBC:;
    return F0;
    L_C039A38:;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    v0_0 = (0x0);
    v0_1 = (0xC3BD890);
    v0_2 = (0xC3C4894);
    w0_0 = (-1.0f);
    L_C039DB0:;
    if (((int)(*(int *)(((int)stk + 12))) >= (int)0x2)) goto L_C039DBC;
    v0_5 = *(int *)(((int)stk + 12));
    v0_4 = *(int *)((((0xC20EFE0 + (((*(signed char *)(((*(int *)(((int)stk + 16))) + 0x2))) << 2) << 1)) + (v0_5 << 2)) + 0x0));
    v0_3 = (v0_4);
    v0_6 = ((v0_5 << 2));
    if ((v0_4 != 0)) goto L_C039A70;
    v0_3 = *(signed char *)(((*(int *)(((int)stk + 16))) + 0x1));
    *(unsigned char *)((((0xC3C7DF8 + (v0_3 << 1)) + (*(int *)(((int)stk + 12)))) + 0x0)) = v0_0;
    v0_7 = ((v0_3 << 1));
    L_C039DAA:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    goto L_C039DB0;
    L_C039A70:;
    v0_4 = *(signed char *)(((*(int *)(((int)stk + 16))) + 0x1));
    v0_5 = *(int *)0xC3C7DD4;
    *(unsigned int *)(((v0_6 + (0xC3C7DD8 + ((v0_4 << 2) << 1))) + 0x0)) = ((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294);
    *(unsigned int *)(((int)stk + 20)) = v0_0;
    v0_6 = ((v0_6 + (0xC3C7DD8 + ((v0_4 << 2) << 1))));
    L_C039D8E:;
    if (((int)(*(signed char *)((v0_3 + 0x0))) < 0)) goto L_C039D98;
    if (!(((int)(*(int *)0xC3C7DD4) < (int)0x28))) goto L_C039D98;
    v0_4 = FUN_0c03999c((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), (*(signed char *)((v0_3 + 0x0))), (*(signed char *)((v0_3 + 0x1))));
    v0_7 = (v0_4);
    if ((v0_4 == 0)) goto L_C039AEE;
    if (((*(int *)((v0_7 + 0x8))) != 0)) goto L_C039AF2;
    goto L_C039AEE;
    L_C039D98:;
    v0_3 = *(int *)(((int)stk + 20));
    *(unsigned char *)((((0xC3C7DF8 + ((*(signed char *)(((*(int *)(((int)stk + 16))) + 0x1))) << 1)) + (*(int *)(((int)stk + 12)))) + 0x0)) = v0_3;
    v0_7 = (v0_3);
    goto L_C039DAA;
    L_C039AEE:;
    v0_3 = ((v0_3 + 0x24));
    goto L_C039D8E;
    L_C039AF2:;
    v0_5 = *(int *)0xC3C7DD4;
    v0_4 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x30)) = ((((v0_4 << 1) + v0_4) << 2) + 0xC3BD894);
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x34)) = (((*(int *)((v0_1 + 0x0))) << 2) + 0xC3C0294);
    v0_4 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x38)) = ((((v0_4 << 1) + v0_4) << 2) + 0xC3C1094);
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x24)) = (((*(int *)((v0_1 + 0x0))) << 1) + 0xC3C3A94);
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x28)) = (((*(int *)((v0_1 + 0x0))) << 1) + 0xC3C4194);
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x3C)) = (((*(int *)((v0_1 + 0x0))) << 2) + v0_2);
    (((struct o40_uint *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = (0xC3C5694 + ((*(int *)((v0_1 + 0x0))) << 2));
    (((struct o44_uint *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = (((*(int *)((v0_1 + 0x0))) << 2) + 0xC3C6494);
    *(unsigned char *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x0)) = (*(signed char *)((v0_3 + 0x0)));
    *(unsigned char *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x1)) = (*(signed char *)((v0_3 + 0x1)));
    *(unsigned char *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x2)) = (*(signed char *)((v0_3 + 0x2)));
    *(unsigned char *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x3)) = (*(signed char *)((v0_3 + 0x3)));
    v0_4 = ((int (*)(int, int, int))(FUN_0c187798))(v0_6, R5, R6);
    (((struct o10_float *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o10_float *)(v0_3))->v));
    (((struct o18_float *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o14_float *)(v0_3))->v));
    (((struct o1C_float *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o18_float *)(v0_3))->v));
    (((struct o20_float *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o1C_float *)(v0_3))->v));
    (((struct o14_float *)(((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294)))->v) = ((((struct o20_float *)(v0_3))->v));
    *(unsigned int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x2C)) = (FUN_0c0398f0((*(int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x30))), (*(int *)((((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294) + 0x34))), (*(int *)((v0_7 + 0x8)))));
    v0_4 = (v0_0);
    v0_5 = (((((((v0_5 << 2) << 1) + v0_5) << 2) << 1) + 0xC3C7294));
    L_C039CD6:;
    if (((int)v0_4 >= (int)(*(int *)((v0_5 + 0x2C))))) goto L_C039CE0;
    v0_7 = *(int *)((v0_1 + 0x0));
    v0_6 = (v0_7);
    if (((int)v0_7 < (int)0x380)) goto L_C039BC0;
    *(unsigned int *)((v0_5 + 0x2C)) = v0_4;
    L_C039CE0:;
    FUN_0c039846(v0_5);
    v0_6 = (v0_0);
    L_C039D32:;
    if (((int)v0_6 < (int)((*(int *)((v0_5 + 0x2C))) - 1))) goto L_C039CE8;
    v0_4 = (v0_0);
    L_C039D78:;
    if (((int)v0_4 < (int)(*(int *)((v0_5 + 0x2C))))) goto L_C039D3E;
    *(unsigned int *)0xC3C7DD4 = ((*(int *)0xC3C7DD4) + 0x1);
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    v0_3 = ((v0_3 + 0x24));
    goto L_C039D8E;
    L_C039D3E:;
    v0_8 = (int)(((int (*)(int, int, int, int, float, float, float))((*(int *)((0xC20F060 + ((*(signed char *)((v0_5 + 0x3))) << 2))))))(((((v0_4 << 1) + v0_4) << 2) + (*(int *)((v0_5 + 0x30)))), R5, R6, R7, (*(float *)(((v0_4 << 2) + (*(int *)((v0_5 + 0x3C)))))), ((((struct o10_float *)(v0_5))->v)), F6)) >= 0;
    v0_7 = (v0_4 << 2);
    v0_4 = ((v0_4 + 0x1));
    v0_7 = v0_7;
    if (v0_8) goto L_C039D70;
    *(unsigned int *)((v0_7 + ((((struct o44_int *)(v0_5))->v)))) = v0_0;
    goto L_C039D78;
    L_C039D70:;
    *(unsigned int *)((v0_7 + ((((struct o44_int *)(v0_5))->v)))) = 0x1;
    goto L_C039D78;
    L_C039CE8:;
    R5 = ((v0_6 + 0x1));
    v0_7 = ((v0_6 << 1));
    L_C039D2A:;
    if (((int)R5 < (int)(*(int *)((v0_5 + 0x2C))))) goto L_C039CF2;
    v0_6 = ((v0_6 + 0x1));
    goto L_C039D32;
    L_C039CF2:;
    v0_8 = *(int *)((v0_5 + 0x3C));
    v0_9 = *(int *)((v0_5 + 0x28));
    v0_10 = !((*(float *)(((((*(short *)((v0_7 + v0_9))) << 2) + v0_8) + 0x0))) > (*(float *)(((((*(short *)(((R5 << 1) + v0_9))) << 2) + v0_8) + 0x0))));
    v0_4 = ((R5 << 1));
    R5 = ((R5 + 0x1));
    R6 = (v0_9);
    R7 = (v0_8);
    if (v0_10) goto L_C039D2A;
    v0_8 = *(int *)((v0_5 + 0x28));
    *(unsigned int *)(((int)stk + 8)) = (v0_8 + v0_7);
    v0_9 = *(short *)(((v0_8 + v0_7) + 0x0));
    *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x0)) = (*(short *)(((v0_8 + v0_4) + 0x0)));
    *(unsigned short *)((v0_4 + (*(int *)((v0_5 + 0x28))))) = v0_9;
    R6 = (v0_9);
    R7 = ((v0_8 + v0_4));
    goto L_C039D2A;
    L_C039BC0:;
    v0_7 = ((int (*)(int, int, int))(FUN_0c187798))(v0_6, R5, R6);
    v0_8 = *(signed char *)((v0_5 + 0x2));
    v0_7 = (v0_8);
    if ((v0_8 == 0)) goto L_C039C14;
    if ((v0_7 == 1)) goto L_C039C30;
    if (!((v0_7 == 2))) goto L_C039CBC;
    v0_6 = ((int (*)(int, int, int))(FUN_0c187798))(v0_6, R5, R6);
    FUN_0c0e2390((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x10));
    v0_6 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (v0_6 << 2);
    *(int *)((int)stk + 4) = (0xC3C5694 + (v0_6 << 2));
    *(int *)((int)stk + 0) = ((v0_6 << 2) + v0_2);
    w0_1 = FUN_0c0e2340((((int)stk + 0) + 0x24));
    *(unsigned int *)(((int)stk + 4)) = (0xC3C5694 + (v0_6 << 2));
    *(unsigned int *)(((int)stk + 0)) = ((v0_6 << 2) + v0_2);
    F0 = (w0_1);
    goto L_C039CB4;
    L_C039CBC:;
    *(unsigned short *)((((*(int *)((v0_1 + 0x0))) << 1) + 0xC3C3A94)) = 0xFFFFFFFF;
    *(unsigned short *)(((v0_4 << 1) + (*(int *)((v0_5 + 0x28))))) = v0_4;
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) + 0x1);
    v0_4 = ((v0_4 + 0x1));
    goto L_C039CD6;
    L_C039CB4:;
    *(float *)(((*(int *)((int)stk + 0)) + 0x0)) = F0;
    *(float *)(((*(int *)((int)stk + 4)) + 0x0)) = F0;
    goto L_C039CBC;
    L_C039C30:;
    v0_6 = ((int (*)(int, int, int))(FUN_0c187798))(v0_6, R5, R6);
    math_vec3_mul_xyz((((int)stk + 8) + 0x10), w0_0, w0_0, w0_0);
    FUN_0c0e2390((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x10));
    v0_6 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (v0_6 << 2);
    *(int *)((int)stk + 4) = (0xC3C5694 + (v0_6 << 2));
    *(int *)((int)stk + 0) = ((v0_6 << 2) + v0_2);
    w0_1 = FUN_0c0e2340((((int)stk + 0) + 0x24));
    *(float *)((((v0_6 << 2) + v0_2) + 0x0)) = w0_1;
    *(float *)(((0xC3C5694 + (v0_6 << 2)) + 0x0)) = w0_1;
    goto L_C039CBC;
    L_C039C14:;
    v0_6 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (v0_6 << 2);
    *(int *)((int)stk + 4) = (0xC3C5694 + (v0_6 << 2));
    *(int *)((int)stk + 0) = ((v0_6 << 2) + v0_2);
    w0_1 = FUN_0c0e2340((((int)stk + 0) + 0x24));
    *(unsigned int *)(((int)stk + 4)) = (0xC3C5694 + (v0_6 << 2));
    *(unsigned int *)(((int)stk + 0)) = ((v0_6 << 2) + v0_2);
    F0 = (w0_1);
    goto L_C039CB4;
}

int FUN_0c03a2ce(int a4, int a5, int a6)
{
    int stk[15];
    register int t0;
    register int t3;
    register int t5;
    register int t8;
    register int t29;
    register int t31;
    register int t32;
    register int t34;
    register int t47;
    register float u56;
    register int t62;
    register int t75;
    register int t77;
    register int t78;
    register int t80;
    register int t94;
    register float u103;
    register int t24;
    register int t25;
    register int t123;
    register int t30;
    register int t33;
    register float u35;
    register int t72;
    register int t76;
    register int t79;
    register float u81;
    register int t120;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = *(signed char *)((a4 + 0x2));
    *(unsigned int *)(((int)stk + 28)) = ((((struct o44_int *)(a4))->v));
    t3 = *(int *)((a4 + 0x28));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x2C)));
    t5 = *(int *)((a4 + 0x34));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((a4 + 0x24)));
    *(unsigned int *)(((int)stk + 16)) = ((((struct o40_int *)(a4))->v));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((a4 + 0x38)));
    if (t0 != 1) {
        if (t0 != 2) {
            t24 = a5;
            t25 = a6;
        } else {
            t8 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        }
    } else {
        math_mat_get_translate(((((struct o68_int *)((*(int *)(((int)stk + 0)))))->v)), (((int)stk + 0) + 0x30));
        nlCalcPoint((((int)stk + 0) + 0x30), (((int)stk + 0) + 0x24));
    }
    FUN_0c17b1a0(((*(int *)(((int)stk + 0))) + 0x28), t24, t25);
    if (t0 != 0) {
        *(unsigned int *)(((int)stk + 20)) = 0x0;
        t29 = 0xC03A420;
        t31 = 0x0;
        t32 = t3;
        t34 = t0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 20))) >= (int)(*(int *)(((int)stk + 24)))) {
                break;
            }
            t33 = *(short *)((t32 + 0x0));
            t32 = (t32 + 0x2);
            t30 = t33;
            t30 = (t30 << 2);
            *(unsigned int *)(((int)stk + 0)) = t30;
            t29 = (*(int *)(((int)stk + 28)));
            if ((*(int *)((t30 + t29))) != 0) {
                t31 = t33;
                t31 = (t31 << 1);
                t29 = (*(int *)(((int)stk + 0)));
                t31 = (t31 + (*(int *)(((int)stk + 8))));
                t34 = (*(int *)((t5 + t29)));
                *(unsigned int *)(((int)stk + 32)) = t31;
                t31 = (*(short *)((t31 + 0x0)));
                t34 = (t34 << 2);
                t34 = (t34 + a5);
                t29 = (short)t31;
                t29 = (t29 << 2);
                t30 = (*(int *)((t5 + t29)));
                t31 = (short)t31;
                t30 = (t30 << 2);
                t30 = (t30 + a5);
                *(unsigned int *)(((int)stk + 4)) = t30;
                t47 = t30;
                if ((int)t31 < 0) {
                    t47 = (((int)stk + 0) + 0x24);
                }
                t31 = ((int)stk + 0);
                t31 = (t31 + 0x30);
                t29 = (FUN_0c0e2390(t31, t34, t47));
                t30 = 0xC17C2A0;
                t31 = ((int)stk + 0);
                t31 = (t31 + 0x30);
                u35 = (FUN_0c0e2340(t31));
                if (u35 == 0.0f) {
                    u35 = 9.99999997e-07f;
                }
                t29 = (*(int *)(((int)stk + 0)));
                t31 = ((int)stk + 0);
                t30 = (*(int *)(((int)stk + 16)));
                u56 = u35;
                u35 = (*(float *)((t30 + t29)));
                u35 = (u35 / u56);
                t31 = (t31 + 0x30);
                t29 = (math_vec3_mul_xyz(t31, u35, u35, u35));
                t30 = (*(int *)(((int)stk + 32)));
                t31 = t34;
                t62 = (((int)stk + 0) + 0x24);
                if ((int)(*(short *)((t30 + 0x0))) < 0) {
                } else {
                    t62 = (*(int *)(((int)stk + 4)));
                }
                t29 = (FUN_0c17c130(t31, t62, (((int)stk + 0) + 0x30)));
                t30 = (*(int *)(((int)stk + 12)));
                t31 = t34;
                t29 = (nlCalcPoint(t31, ((((t33 << 1) + t33) << 2) + t30)));
                t29 = (*(int *)((t34 + 0x0)));
                t29 = (t29 | 0x1);
                *(unsigned int *)((t34 + 0x0)) = t29;
            } else {
                t72 = t31;
            }
            t30 = (*(int *)(((int)stk + 20)));
            t31 = t72;
            t30 = (t30 + 0x1);
            *(unsigned int *)(((int)stk + 20)) = t30;
        }
        t123 = t29;
    } else {
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t75 = 0xC03A420;
        t77 = 0x0;
        t78 = t3;
        t80 = t0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((int)stk + 24)))) {
                break;
            }
            t80 = *(short *)((t78 + 0x0));
            t78 = (t78 + 0x2);
            t75 = (*(int *)(((int)stk + 28)));
            t76 = t80;
            t76 = (t76 << 2);
            if ((*(int *)((t76 + t75))) != 0) {
                t75 = t80;
                t75 = (t75 << 2);
                t77 = t80;
                t79 = (*(int *)((t5 + t75)));
                t77 = (t77 << 1);
                t75 = (*(int *)(((int)stk + 8)));
                t79 = (t79 << 2);
                t77 = (*(short *)((t77 + t75)));
                t79 = (t79 + a5);
                t75 = (short)t77;
                t75 = (t75 << 2);
                t94 = *(int *)((t5 + t75));
                t77 = (short)t77;
                *(unsigned int *)(((int)stk + 0)) = ((t94 << 2) + a5);
                if ((int)t77 < 0) {
                    t76 = t79;
                    t75 = 0xC;
                    t75 = (((int (*)(int))(FUN_0c187798))(t77));
                } else {
                    t77 = ((int)stk + 0);
                    t77 = (t77 + 0x30);
                    t75 = (FUN_0c0e2390(t77, t79, ((t94 << 2) + a5)));
                }
                t77 = ((int)stk + 0);
                t77 = (t77 + 0x30);
                u81 = (FUN_0c0e2340(t77));
                t76 = t80;
                if (u81 == 0.0f) {
                    u81 = 9.99999997e-07f;
                }
                t75 = (*(int *)(((int)stk + 16)));
                t76 = (t76 << 2);
                t77 = ((int)stk + 0);
                u103 = u81;
                u81 = (*(float *)((t76 + t75)));
                u81 = (u81 / u103);
                t77 = (t77 + 0x30);
                t75 = (math_vec3_mul_xyz(t77, u81, u81, u81));
                t75 = (*(int *)(((int)stk + 8)));
                t76 = t80;
                t76 = (t76 << 1);
                if ((int)(*(short *)((t76 + t75))) < 0) {
                    t76 = ((int)stk + 0);
                    t76 = (t76 + 0x30);
                    t75 = 0xC;
                    t75 = (((int (*)(void))(FUN_0c187798))());
                } else {
                    t77 = t79;
                    t75 = (FUN_0c17c130(t77, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x30)));
                }
                t76 = (*(int *)(((int)stk + 12)));
                t77 = t79;
                t75 = (nlCalcPoint(t77, ((((t80 << 1) + t80) << 2) + t76)));
                t75 = (*(int *)((t79 + 0x0)));
                t75 = (t75 | 0x1);
                *(unsigned int *)((t79 + 0x0)) = t75;
            } else {
                t120 = t77;
            }
            t76 = (*(int *)(((int)stk + 4)));
            t77 = t120;
            t76 = (t76 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t76;
        }
        t123 = t75;
    }
    return t123;
}

int FUN_0c03a536(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)((a5 + 0x8));
    FUN_0c17b1a0((a5 + 0x28), a5, a6);
    FUN_0c03a0cc(a4, t0);
    nlInvertMatrix(0x0);
    FUN_0c03a178(a4, t0);
    return FUN_0c03a2ce(a4, t0, a5);
}
