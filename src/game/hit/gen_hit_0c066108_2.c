/* game/hit: functions 0C066108-0C066C7A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_interval_overlap(float, float, float, float);
int FUN_0c0663a8(int, int);
int FUN_0c0664d8(int, int);
int FUN_0c066598(int, int);
int FUN_0c0665d4(int, int);
int FUN_0c066b82(void);
int FUN_0c073898(int, int, int, int, int, int, int, int);
int FUN_0c0739c8(int, int, int, int, int, int, int, int, int, int, int, int);
float math_signed_sqrt(float);
int FUN_0c0661cc(int a4, int a5);
int FUN_0c066258(int a4, int a5);
int FUN_0c066450(int a4, int a5);
int FUN_0c066680(int a4, int a5);
int FUN_0c066708(int a4, int a5, float f4);
int FUN_0c06693a(int a4, int a5, int a6, int a7);
int thunk_FUN_0c066b82(void);

int FUN_0c0661cc(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)((a4 + 0x8)))->v);
    u1 = (((struct oC_float *)((a5 + 0x8)))->v);
    u2 = (((struct o8_float *)((a5 + 0x8)))->v);
    u3 = (((struct o8_float *)((a4 + 0x8)))->v);
    u4 = (((struct o8_float *)(a4))->v);
    u5 = (((struct o8_float *)(a5))->v);
    u6 = ((u2 - u3) * (u2 - u3));
    u6 = u6 + ((u5 - u4)) * ((u5 - u4));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)((a4 + 0x8)))->v);
    u4 = (((struct o10_float *)((a4 + 0x8)))->v);
    u5 = (((struct o4_float *)((a5 + 0x8)))->v);
    u6 = (((struct oC_float *)((a5 + 0x8)))->v);
    u7 = math_interval_overlap((u5 + u6), (u5 - u6), (u3 + u4), (u3 - u4));
    t0 = 0x0;
    if (!(0.0f > ((u1 + u0) - u2)) && !(0.0f > u7)) {
        t0 = 0x1;
    }
    return t0;
}

int FUN_0c066258(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)((a5 + 0x8)))->v);
    u1 = (((struct oC_float *)((a4 + 0x8)))->v);
    u2 = (((struct o8_float *)((a4 + 0x8)))->v);
    u3 = (((struct o8_float *)((a5 + 0x8)))->v);
    u4 = (((struct o8_float *)(a5))->v);
    u5 = (((struct o8_float *)(a4))->v);
    u6 = ((u2 - u3) * (u2 - u3));
    u6 = u6 + ((u5 - u4)) * ((u5 - u4));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)((a5 + 0x8)))->v);
    u4 = (((struct o10_float *)((a5 + 0x8)))->v);
    u5 = (((struct o4_float *)((a4 + 0x8)))->v);
    u6 = (((struct o10_float *)((a4 + 0x8)))->v);
    u7 = math_interval_overlap((u5 + u6), (u5 - u6), (u3 + u4), (u3 - u4));
    t0 = 0x0;
    if (!(0.0f > ((u1 + u0) - u2)) && !(0.0f > u7)) {
        t0 = 0x1;
    }
    return t0;
}

int FUN_0c066450(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a5))->v);
    u2 = (((struct o8_float *)(a4))->v);
    u3 = (((struct o8_float *)(a5))->v);
    u4 = *(float *)((a4 + 0x0));
    u5 = *(float *)((a5 + 0x0));
    u6 = ((u2 - u3) * (u2 - u3));
    u6 = u6 + ((u4 - u5)) * ((u4 - u5));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)(a5))->v);
    u4 = (((struct o10_float *)(a5))->v);
    u5 = (((struct o4_float *)(a4))->v);
    u6 = (((struct o10_float *)(a4))->v);
    u7 = math_interval_overlap((u5 + u6), (u5 - u6), (u3 + u4), (u3 - u4));
    t0 = 0x0;
    if (!(0.0f > ((u0 + u1) - u2)) && !(0.0f > u7)) {
        t0 = 0x1;
    }
    return t0;
}

int FUN_0c066680(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (((struct oC_float *)(a5))->v);
    u2 = (((struct o8_float *)(a4))->v);
    u3 = (((struct o8_float *)(a5))->v);
    u4 = *(float *)((a4 + 0x0));
    u5 = *(float *)((a5 + 0x0));
    u6 = ((u2 - u3) * (u2 - u3));
    u6 = u6 + ((u4 - u5)) * ((u4 - u5));
    u2 = math_signed_sqrt(u6);
    u3 = (((struct o4_float *)(a5))->v);
    u4 = (((struct o10_float *)(a5))->v);
    u5 = (((struct o4_float *)(a4))->v);
    u6 = (((struct oC_float *)(a4))->v);
    u7 = math_interval_overlap((u5 + u6), (u5 - u6), (u3 + u4), (u3 - u4));
    t0 = 0x0;
    if (!(0.0f > ((u0 + u1) - u2)) && !(0.0f > u7)) {
        t0 = 0x1;
    }
    return t0;
}

int FUN_0c066708(int a4, int a5, float f4)
{

    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = *(signed char *)((v0_1 + 0x1));
    v0_0 = (v0_3);
    v0_1 = (v0_1);
    v0_2 = (v0_2);
    if ((v0_3 == 0)) goto L_C066724;
    if ((v0_0 == 1)) goto L_C06676C;
    if ((v0_0 == 2)) goto L_C0667B4;
    L_C0667FC:;
    v0_0 = (0x0);
    L_C0667FE:;
    return v0_0;
    L_C0667B4:;
    v0_3 = *(signed char *)((v0_2 + 0x1));
    v0_0 = (v0_3);
    if ((v0_3 == 0)) goto L_C0667C6;
    if ((v0_0 == 1)) goto L_C0667D8;
    if ((v0_0 == 2)) goto L_C0667EA;
    goto L_C0667FC;
    L_C0667EA:;
    v0_0 = (FUN_0c066450((v0_2 + 0x8), (v0_1 + 0x8))) == 0;
    if (v0_0) goto L_C0667FC;
    L_C0667F8:;
    v0_0 = (0x1);
    goto L_C0667FE;
    L_C0667D8:;
    v0_0 = (FUN_0c0664d8((v0_2 + 0x8), (v0_1 + 0x8))) == 0;
    if (v0_0) goto L_C0667FC;
    goto L_C0667F8;
    L_C0667C6:;
    v0_0 = (FUN_0c066680((v0_2 + 0x8), (v0_1 + 0x8))) == 0;
    if (v0_0) goto L_C0667FC;
    goto L_C0667F8;
    L_C06676C:;
    v0_3 = *(signed char *)((v0_2 + 0x1));
    v0_0 = (v0_3);
    if ((v0_3 == 0)) goto L_C06677E;
    if ((v0_0 == 1)) goto L_C066790;
    if ((v0_0 == 2)) goto L_C0667A2;
    goto L_C0667FC;
    L_C0667A2:;
    v0_0 = (FUN_0c0664d8((v0_1 + 0x8), (v0_2 + 0x8))) == 0;
    if (v0_0) goto L_C0667FC;
    goto L_C0667F8;
    L_C066790:;
    v0_0 = (FUN_0c0663a8((v0_1 + 0x8), (v0_2 + 0x8))) == 0;
    if (v0_0) goto L_C0667FC;
    goto L_C0667F8;
    L_C06677E:;
    v0_0 = (FUN_0c0665d4((v0_1 + 0x8), (v0_2 + 0x8))) == 0;
    if (v0_0) goto L_C0667FC;
    goto L_C0667F8;
    L_C066724:;
    v0_3 = *(signed char *)((v0_2 + 0x1));
    v0_0 = (v0_3);
    if ((v0_3 == 0)) goto L_C066736;
    if ((v0_0 == 1)) goto L_C066748;
    if ((v0_0 == 2)) goto L_C06675A;
    goto L_C0667FC;
    L_C06675A:;
    v0_0 = (FUN_0c066680((v0_1 + 0x8), (v0_2 + 0x8))) == 0;
    if (v0_0) goto L_C0667FC;
    goto L_C0667F8;
    L_C066748:;
    v0_0 = (FUN_0c0665d4((v0_2 + 0x8), (v0_1 + 0x8))) == 0;
    if (v0_0) goto L_C0667FC;
    goto L_C0667F8;
    L_C066736:;
    v0_0 = (FUN_0c066598((v0_1 + 0x8), (v0_2 + 0x8))) != 0;
    if (v0_0) goto L_C0667F8;
    goto L_C0667FC;
}

int FUN_0c06693a(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t9;
    register int t6;

    *(unsigned int *)(((int)stk + 0)) = a6;
    (((struct o131_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x131))) + 0x1);
    (((struct o132_uchar *)(a5))->v) = ((*(signed char *)((a5 + 0x132))) + 0x1);
    FUN_0c0739c8(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c073898(a4, a5, (*(int *)(((int)stk + 0))), 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
    t9 = 0x136;
    if ((int)(*(signed char *)((a4 + 0x136))) < (int)0x14) {
        t6 = *(signed char *)((a4 + 0x136));
        (((struct o136_uchar *)(a4))->v) = (t6 + 0x1);
        t9 = (((struct o24_short *)(a5))->v);
        *(unsigned short *)(((((signed char)((t6 + 0x1) - 1) << 1) + (0x138 + a4)) + 0x0)) = t9;
    }
    return t9;
}

int thunk_FUN_0c066b82(void)
{
    return FUN_0c066b82();
}
