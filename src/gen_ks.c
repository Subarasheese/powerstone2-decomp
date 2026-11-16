/* Straight-line functions with calls and guards (batch gen_ks): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o26A0_int { char p[0x26A0]; int v; };
struct o26A4_int { char p[0x26A4]; int v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c058542(int, int, float);
int FUN_0c058716(int, int);
int FUN_0c059dae(int, int);
int FUN_0c064f80(int);
int FUN_0c07d1fc(int, int, int, int);
int FUN_0c0b2888(int, int, int, int);
int FUN_0c1480bc(int, int);
extern int FUN_0c148196();
int FUN_0c148248(int);
int FUN_0c1482f2(int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c169dbc(int, int);
int FUN_0c169f4a(int, int, int);
int FUN_0c187798(int, int, int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c1699b8(int a4, int a5, int a6, int a7);
int FUN_0c14831c(int a4, int a5, int a6, int a7, float f4);

int FUN_0c1699b8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register float u11;
    register int t12;
    register int t19;
    register int t24;
    register int t35;
    register int t36;
    register int t38;
    register float u44;
    register int t45;
    register int t52;
    register int t57;
    register int t61;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t61 = (FUN_0c169dbc(a4, (*(signed char *)((a4 + 0x2)))));
            } else {
                t61 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            if (((((struct o48_float *)(a4))->v)) > 1.20000005f) {
                (((struct o48_float *)(a4))->v) = 1.20000005f;
            }
            u11 = (((struct o48_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = u11;
            (((struct o40_float *)(a4))->v) = u11;
            t12 = FUN_0c064f80(a4);
            if (t12 != 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            } else {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            t19 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t19 - 1);
            if ((int)(short)(t19 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0xA;
                FUN_0c169f4a(a4, 0x1, (a4 + 0x28));
            }
            t24 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t24 - 1);
            t61 = (short)(t24 - 1);
            if ((int)(short)(t24 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t61 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        FUN_0c187798((((short)t0 * (short)0x3938) + 0xC532498), a5, a6);
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
        t35 = FUN_0c058716(a4, ((int)stk + 0));
        t36 = t35;
        if ((int)t35 > (int)0x2E38) {
            t36 = 0x2E38;
        }
        t38 = t36;
        if ((int)t36 < (int)0x11C7) {
            t38 = 0x11C7;
        }
        *(unsigned int *)((a4 + 0x34)) = t38;
        FUN_0c058542(a4, 0x11C7, 30.0f);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
        if (((((struct o48_float *)(a4))->v)) > 1.20000005f) {
            (((struct o48_float *)(a4))->v) = 1.20000005f;
        }
        u44 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u44;
        (((struct o40_float *)(a4))->v) = u44;
        t45 = FUN_0c064f80(a4);
        if (t45 != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        t52 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t52 - 1);
        if ((int)(short)(t52 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1E)) = 0xA;
            FUN_0c169f4a(a4, 0x1, (a4 + 0x28));
        }
        t57 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t57 - 1);
        t61 = (short)(t57 - 1);
        if ((int)(short)(t57 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t61 = 0x14;
        }
    }
    return t61;
}

int FUN_0c14831c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
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
    register float w0_0;
    v0_7 = a4;
    v0_5 = a5;
    v0_6 = a6;
    v0_0 = a7;
    w0_0 = f4;
    v0_8 = *(signed char *)((v0_7 + 0x14));
    v0_4 = (v0_8);
    v0_2 = (0x0);
    v0_3 = ((((short)(*(signed char *)((v0_7 + 0x1))) * (short)0x3938) + 0xC532498));
    v0_1 = (v0_7);
    if ((v0_8 == 0)) goto L_C148374;
    if ((v0_4 == 1)) goto L_C1483A8;
    L_C14845A:;
    return v0_4;
    L_C1483A8:;
    v0_4 = ((int (*)(int, int, int, int, int, int))(FUN_0c148196))(v0_1, v0_5, v0_6, v0_0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    *(unsigned int *)((v0_1 + 0x34)) = ((((struct o26A0_int *)(v0_3))->v));
    *(unsigned int *)((v0_1 + 0x38)) = ((((struct o26A4_int *)(v0_3))->v));
    v0_7 = *(signed char *)((v0_1 + 0x15));
    v0_4 = (v0_7);
    if ((v0_7 == 0)) goto L_C1483C8;
    if ((v0_4 == 1)) goto L_C1483DE;
    goto L_C14845A;
    L_C1483DE:;
    v0_4 = (FUN_0c1482f2(v0_3)) == 0;
    if (v0_4) goto L_C148450;
    v0_4 = (0x131);
    if (((*(signed char *)((v0_1 + 0x131))) == 0)) goto L_C14845A;
    v0_5 = FUN_0c07d1fc(v0_1, v0_5, v0_6, v0_0);
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C14845A;
    (((struct o131_uchar *)(v0_1))->v) = v0_2;
    v0_5 = FUN_0c148248(v0_1);
    v0_4 = (v0_5);
    v0_6 = (v0_5);
    if ((v0_5 == 0)) goto L_C14845A;
    *(unsigned char *)(((int)stk + 0)) = (v0_6 - 1);
    (((struct o372A_uchar *)(v0_3))->v) = (v0_6 - 1);
    (((struct o3728_uchar *)(v0_3))->v) = v0_2;
    FUN_0c0b2888(v0_3, 0x21, 0x0, v0_0);
    *(unsigned int *)(((int)stk + 4)) = (v0_6 - 1);
    thunk_FUN_0c058310(((*(int *)((((v0_6 - 1) * 0x3938) + 0xC53255C))) + 0x28), (((int)stk + 0) + 0x8));
    FUN_0c14f238((((int)stk + 0) + 0x8), (v0_3 + 0x34), (*(signed char *)(((int)stk + 0))), 0x2);
    FUN_0c059dae((*(int *)(((int)stk + 4))), 0x0);
    L_C148450:;
    FUN_0c1480bc(v0_1, 0x0);
    (((struct o15_uchar *)(v0_1))->v) = v0_2;
    v0_4 = (0x15);
    goto L_C14845A;
    L_C1483C8:;
    v0_0 = FUN_0c1482f2(v0_3);
    v0_4 = (v0_0);
    if ((v0_0 == 0)) goto L_C14845A;
    FUN_0c1480bc(v0_1, 0x2);
    (((struct o15_uchar *)(v0_1))->v) = 0x1;
    v0_4 = (0x15);
    goto L_C14845A;
    L_C148374:;
    v0_4 = (0x3714);
    if (((*(signed char *)(((*(int *)((v0_1 + 0x10))) + 0x3714))) == 0)) goto L_C14845A;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_1))->v) = v0_2;
    (((struct o26_uchar *)(v0_1))->v) = 0x1;
    (((struct oA4_uint *)(v0_1))->v) = (((((struct oD4_int *)(v0_3))->v)) + 0x28);
    FUN_0c187798(v0_7, v0_5, v0_6);
    goto L_C1483A8;
}
