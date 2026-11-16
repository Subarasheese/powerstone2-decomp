/* Straight-line functions with calls and guards (batch gen_ku): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1D10_int { char p[0x1D10]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3770_int { char p[0x3770]; int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c02b310(void);
int FUN_0c02b536(int);
int FUN_0c02b570(void);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c05261c(int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c059f20(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07db58(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c104e6a(int, int);
int FUN_0c10db06(int);
int FUN_0c10db3a(int);
int FUN_0c1171f0(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c1186d4(int);
int FUN_0c1187ba(void);
int FUN_0c14f238(int, int, int, int);
extern int FUN_0c187d74();
int FUN_0c187d88(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c10dc48(int a4);
int FUN_0c113e9a(int a4, int a5, int a6, int a7);
int FUN_0c02b3ba(int a4, float f4, float f5, float f6);
int FUN_0c02b692(int a4, int a5, int a6);
int FUN_0c09acb8(int a4, int a5, int a6, int a7);

int FUN_0c10dc48(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_3 = *(signed char *)((v0_2 + 0x15));
    v0_1 = (v0_3);
    v0_0 = (0x0);
    v0_2 = (v0_2);
    if ((v0_3 == 0)) goto L_C10DC66;
    if ((v0_1 == 1)) goto L_C10DC72;
    L_C10DD86:;
    return v0_1;
    L_C10DC72:;
    v0_4 = *(signed char *)((v0_2 + 0x16));
    v0_1 = (v0_4);
    v0_3 = (0xC474B8C);
    if ((v0_4 == 0)) goto L_C10DC8C;
    if ((v0_1 == 1)) goto L_C10DCA0;
    if ((v0_1 == 2)) goto L_C10DCCE;
    if ((v0_1 == 3)) goto L_C10DD20;
    goto L_C10DD86;
    L_C10DD20:;
    v0_4 = (((struct o22_short *)(v0_2))->v);
    (((struct o22_ushort *)(v0_2))->v) = (v0_4 + 0x1);
    v0_1 = (0x22);
    if (((int)(short)(v0_4 + 0x1) <= (int)0xA)) goto L_C10DD86;
    (((struct o14_uchar *)(((((struct o74_int *)(v0_3))->v))))->v) = 0x63;
    (((struct o74_uint *)(v0_3))->v) = v0_0;
    if ((((((struct o20_short *)(v0_2))->v)) != 0)) goto L_C10DD78;
    return FUN_0c10db3a(v0_2);
    L_C10DD78:;
    return FUN_0c10db06(v0_2);
    L_C10DCCE:;
    (((struct o20_ushort *)(v0_2))->v) = (FUN_0c104e6a(((((struct o20_short *)(v0_2))->v)), 0x1));
    *(unsigned char *)((((((struct o74_int *)(v0_3))->v)) + 0x2)) = (*(signed char *)((v0_2 + 0x20)));
    v0_1 = (FUN_0c104d70()) != 0;
    if (v0_1) goto L_C10DD0A;
    v0_4 = FUN_0c104db8();
    v0_1 = (v0_4);
    if ((v0_4 == 0)) goto L_C10DD86;
    (((struct o20_ushort *)(v0_2))->v) = 0x1;
    *(unsigned char *)((((((struct o74_int *)(v0_3))->v)) + 0x2)) = (*(signed char *)((v0_2 + 0x20)));
    L_C10DD0A:;
    FUN_0c1186d4(((((struct o20_short *)(v0_2))->v)));
    (((struct o16_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x16))) + 0x1);
    (((struct o22_ushort *)(v0_2))->v) = v0_0;
    v0_1 = (0x22);
    goto L_C10DD86;
    L_C10DCA0:;
    v0_4 = FUN_0c117d54();
    v0_1 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C10DD86;
    (((struct o16_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x16))) + 0x1);
    (((struct o20_ushort *)(v0_2))->v) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = (v0_3 + 0x74);
    (((struct o74_uint *)(v0_3))->v) = (FUN_0c1187ba());
    v0_0 = *(signed char *)((v0_2 + 0x20));
    *(unsigned char *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x2)) = v0_0;
    v0_1 = (v0_0);
    goto L_C10DD86;
    L_C10DC8C:;
    (((struct o16_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x16))) + 0x1);
    *(int *)((int)stk + 0) = 0xF4;
    v0_1 = ((FUN_0c117944(0xF4)));
    goto L_C10DD86;
    L_C10DC66:;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_2))->v) = v0_0;
    goto L_C10DC72;
}

int FUN_0c113e9a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 99) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return t0;
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
                FUN_0c058a6e((0xB0 + a4), 0xC2916E0, 0xC2916F0, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x61F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xE, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x6, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x7, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x8, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x9, 0xC, (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
        (((struct o70_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o70_float *)((*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) + (0xC4 + a4)) + 0x4)))))->v));
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
        FUN_0c058a6e((0xB0 + a4), 0xC2916F0, 0xC2916E0, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
        t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}


int FUN_0c02b692(int a4, int a5, int a6)
{
    int stk[13];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t10;
    register int t14;
    register int t42;
    register int t21;
    register int t22;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register int t33;
    register int t35;
    register int t37;
    register int t38;
    register int t47;
    register int t49;
    register int t18;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)0xC30B70C;
    t3 = ((int (*)(int, int, int))(FUN_0c187d74))(((t0 + 0x102C) + ((((((struct o1D10_int *)(t0))->v)) << 2) << 1)), a4, a6);
    t4 = *(int *)0xC30B70C;
    t5 = (((struct o1D10_int *)(t4))->v);
    t6 = ((int (*)(int, int))(FUN_0c187d74))(((t4 + 0x11BC) + (((t5 << 2) << 2) + t5)), a5);
    if ((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
        t10 = (FUN_0c187d88(a5));
        *(int *)((int)stk + 0) = t10;
        *(unsigned int *)(((int)stk + 4)) = (((FUN_0c187d88(a6)) + t10) + 0xD);
        t18 = ((-(FUN_0c187d88(a5))) + 0x33);
    } else {
        t14 = (FUN_0c187d88(a5));
        *(int *)((int)stk + 0) = t14;
        *(unsigned int *)(((int)stk + 4)) = (((FUN_0c187d88(a6)) + t14) + 0x1);
        t18 = ((-(FUN_0c187d88(a5))) + 0x3F);
    }
    t42 = a6;
    if ((int)(*(int *)(((int)stk + 4))) > (int)0x40) {
        t21 = a6;
        t22 = 0x0;
        for (;;) {
            t24 = FUN_0c02b536((*(signed char *)((t21 + 0x0))));
            if (t24 == 0) {
                if ((int)(t22 + 0x1) < (int)t18) {
                    t25 = *(signed char *)((t21 + 0x0));
                    t21 = (t21 + 0x1);
                    t26 = t22;
                    t22 = (t22 + 0x1);
                    *(unsigned char *)(((((int)stk + 4) + 0x4) + t26)) = t25;
                    t27 = *(signed char *)((t21 + 0x0));
                    t21 = (t21 + 0x1);
                    t28 = t22;
                    t22 = (t22 + 0x1);
                    *(unsigned char *)(((((int)stk + 4) + 0x4) + t28)) = t27;
                    if ((int)t22 >= (int)t18) {
                        break;
                    }
                    continue;
                }
                break;
            }
            t29 = *(signed char *)((t21 + 0x0));
            t21 = (t21 + 0x1);
            t30 = t22;
            t22 = (t22 + 0x1);
            *(unsigned char *)(((((int)stk + 4) + 0x4) + t30)) = t29;
            if ((int)t22 >= (int)t18) {
                break;
            }
        }
        *(unsigned char *)(((((int)stk + 4) + 0x4) + t22)) = 0x0;
        t33 = *(int *)0xC30B70C;
        t35 = ((int (*)(int, int))(FUN_0c187d74))(((t33 + 0x150E) + (((((struct o1D10_int *)(t33))->v)) * 0x29)), (((int)stk + 4) + 0x4));
        FUN_0c02b570();
        t37 = *(int *)0xC30B70C;
        t38 = (((struct o1D10_int *)(t37))->v);
        *(unsigned char *)((((((t38 << 2) << 2) + t38) + (t37 + 0x11BC)) + 0x0)) = 0x0;
        t42 = t21;
    }
    t47 = *(int *)0xC30B70C;
    t49 = ((int (*)(int, int))(FUN_0c187d74))(((t47 + 0x150E) + (((((struct o1D10_int *)(t47))->v)) * 0x29)), t42);
    return (FUN_0c02b570());
}

