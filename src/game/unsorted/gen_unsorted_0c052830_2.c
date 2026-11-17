/* game/unsorted: functions 0C052830-0C053CBA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o180_uint { char p[0x180]; unsigned int v; };
struct o1FC_int { char p[0x1FC]; int v; };
struct o200_int { char p[0x200]; int v; };
struct o228_float { char p[0x228]; float v; };
struct o22C_float { char p[0x22C]; float v; };
struct o230_float { char p[0x230]; float v; };
struct o240_int { char p[0x240]; int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_float { char p[0xEC]; float v; };
int FUN_0c052364(int, int);
int FUN_0c052962(int, int, int, int);
int FUN_0c052cf8(int, int, int);
int FUN_0c053128(int);
int FUN_0c0532be(int);
int FUN_0c0533a4(int);
int FUN_0c056b68(int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0528f4(int a4, int a5, int a6);
int FUN_0c052b72(int a4, int a5, int a6, int a7);
int thunk_FUN_0c056b68(int a4, int a5, int a6, int a7);
int FUN_0c0534ee(int a4, float f4);
int FUN_0c0537d4(int a4);

int FUN_0c0528f4(int a4, int a5, int a6)
{
    register int t0;

    *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    t0 = ((int (*)(void))(FUN_0c187798))();
    (((struct o180_uint *)(a4))->v) = 0x0;
    (((struct o240_uint *)(a4))->v) = 0xC2414B4;
    (((struct o244_uint *)(a4))->v) = 0xC2414C0;
    return FUN_0c052364((*(signed char *)((a4 + 0x0))), 0xFFFFFFFF);
}

int FUN_0c052b72(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC052B6E))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC052988))(a4, a5, a6, a7);
    }
    FUN_0c052962(a4, a5, a6, a7);
    return ((int (*)(int, int, int, int))(0xC052988))(a4, a5, a6, a7);
}

int thunk_FUN_0c056b68(int a4, int a5, int a6, int a7)
{
    return FUN_0c056b68(a4, a5, a6, a7);
}

int FUN_0c0534ee(int a4, float f4)
{
    int stk[30];
    register int t2;
    register int t5;
    register int t7;
    register int t10;
    register float u12;
    register int t52;
    register int t33;
    register int t64;
    register int t3;
    register int t4;
    register int t6;
    register int t8;
    register int t9;
    register float u11;
    register int t53;
    register int t55;
    register float u56;
    register float u57;
    register int t47;
    register int t49;
    register float u50;
    register float u45;

    FUN_0c053128(a4);
    t2 = (FUN_0c0533a4(a4));
    t5 = t4;
    t7 = 0x0;
    t10 = 0x0;
    u12 = f4;
    for (;;) {
        if ((int)t7 < (int)0x4) {
            t2 = (FUN_0c0532be(t7));
            t52 = t8;
            if (t2 == 0) {
            } else {
                t5 = 0xC532498;
                t8 = 0xC0584AA;
                t9 = (t7 * 0x3938);
                t9 = (t9 + t5);
                t2 = (*(signed char *)((t9 + 0x2)));
                if (t2 == 12) {
                    t6 = t10;
                    t6 = (t6 << 1);
                    t3 = t10;
                    t2 = 0xC4;
                    t6 = (t6 + t3);
                    t6 = (t6 << 2);
                    t6 = (t6 + ((int)stk + 0));
                    t5 = t6;
                    t2 = (thunk_FUN_0c058310(((*(int *)((t9 + t2))) + 0x28), t5));
                    t2 = 0x4;
                    t10 = (t10 + 0x1);
                    *(float *)((t6 + t2)) = 0.0f;
                    t6 = t10;
                    t6 = (t6 << 1);
                    t3 = t10;
                    t2 = 0xC4;
                    t6 = (t6 + t3);
                    t6 = (t6 << 2);
                    t6 = (t6 + ((int)stk + 0));
                    t5 = t6;
                    t2 = (thunk_FUN_0c058310(((*(int *)((t9 + t2))) + 0x28), t5));
                    t2 = 0xC0535C8;
                    u12 = (*(float *)((t2 + 0x0)));
                    t2 = 0x4;
                    u11 = (*(float *)((t6 + t2)));
                    u11 = (u11 + u12);
                    *(float *)((t6 + t2)) = u11;
                    u50 = u11;
                } else {
                    if (t2 == 13) {
                        t6 = t10;
                        t6 = (t6 << 1);
                        t3 = t10;
                        t2 = 0xD4;
                        t6 = (t6 + t3);
                        t6 = (t6 << 2);
                        t6 = (t6 + ((int)stk + 0));
                        t5 = t6;
                        t2 = (thunk_FUN_0c058310(((*(int *)((t9 + t2))) + 0x28), t5));
                        t2 = 0xC0535CC;
                        u12 = (*(float *)((t2 + 0x0)));
                        t2 = 0x4;
                        t10 = (t10 + 0x1);
                        *(float *)((t6 + t2)) = u12;
                        t6 = t10;
                        t6 = (t6 << 1);
                        t3 = t10;
                        t2 = 0xC4;
                        t6 = (t6 + t3);
                        t6 = (t6 << 2);
                        t6 = (t6 + ((int)stk + 0));
                        t5 = t6;
                        t2 = (thunk_FUN_0c058310(((*(int *)((t9 + t2))) + 0x28), t5));
                        t2 = 0xC0535D0;
                        u12 = (*(float *)((t2 + 0x0)));
                        t2 = 0x4;
                        *(float *)((t6 + t2)) = u12;
                    } else {
                        t2 = 0x28;
                        t3 = t10;
                        u11 = (*(float *)((t9 + t2)));
                        t2 = 0xC053780;
                        *(float *)((((((t10 << 1) + t3) << 2) + ((int)stk + 0)) + 0x0)) = u11;
                        t33 = ((((t10 << 1) + t3) << 2) + ((int)stk + 0));
                        t10 = (t10 + 0x1);
                        u12 = (*(float *)((t2 + 0x0)));
                        t2 = 0x2C;
                        u11 = (*(float *)((t9 + t2)));
                        t2 = 0x4;
                        t3 = t10;
                        u11 = (u11 + u12);
                        *(float *)((t33 + t2)) = u11;
                        t2 = 0x30;
                        u11 = (*(float *)((t9 + t2)));
                        t2 = 0x8;
                        *(float *)((t33 + t2)) = u11;
                        t2 = 0x28;
                        u11 = (*(float *)((t9 + t2)));
                        t2 = 0xC053784;
                        *(float *)((((((t10 << 1) + t3) << 2) + ((int)stk + 0)) + 0x0)) = u11;
                        u12 = (*(float *)((t2 + 0x0)));
                        t2 = 0x2C;
                        u11 = (*(float *)((t9 + t2)));
                        t2 = 0x4;
                        u11 = (u11 + u12);
                        *(float *)((((((t10 << 1) + t3) << 2) + ((int)stk + 0)) + t2)) = u11;
                        t2 = 0x30;
                        u11 = (*(float *)((t9 + t2)));
                        t2 = 0x8;
                        *(float *)((((((t10 << 1) + t3) << 2) + ((int)stk + 0)) + t2)) = u11;
                        t47 = t3;
                        t49 = t5;
                        u45 = u11;
                    }
                    u50 = u45;
                }
                u11 = u50;
                t10 = (t10 + 0x1);
                t3 = t47;
                t5 = t49;
                t52 = 0xC0584AA;
                t53 = t3;
                t55 = t5;
                u56 = u11;
                u57 = u12;
            }
            u11 = u56;
            u12 = u57;
            t8 = t52;
            t3 = t53;
            t5 = t55;
            t7 = (t7 + 0x1);
            continue;
        }
        break;
    }
    t64 = t10;
    if (t10 == 0) {
        (((struct o8_float *)(((((t10 << 1) + t10) << 2) + ((int)stk + 0))))->v) = 0.0f;
        *(float *)((((((t10 << 1) + t10) << 2) + ((int)stk + 0)) + 0x0)) = 0.0f;
        (((struct o4_float *)(((((t10 << 1) + t10) << 2) + ((int)stk + 0))))->v) = (*(float *)0xC54109C);
        (((struct o8_float *)((((((t10 + 0x1) << 1) + (t10 + 0x1)) << 2) + ((int)stk + 0))))->v) = 0.0f;
        *(float *)(((((((t10 + 0x1) << 1) + (t10 + 0x1)) << 2) + ((int)stk + 0)) + 0x0)) = 0.0f;
        (((struct o4_float *)((((((t10 + 0x1) << 1) + (t10 + 0x1)) << 2) + ((int)stk + 0))))->v) = ((*(float *)0xC54109C) + 100.0f);
        t64 = ((t10 + 0x1) + 0x1);
    }
    FUN_0c052cf8(a4, t64, ((int)stk + 0));
    (((struct oC_float *)((0xBC + a4)))->v) = (((((struct oC_float *)((0xBC + a4)))->v)) + ((((((struct oBC_float *)(a4))->v)) - ((((struct oC_float *)((0xBC + a4)))->v))) / (float)(((((struct o1FC_int *)(a4))->v)) + 0x1)));
    (((struct o4_float *)(((0xBC + a4) + 0xC)))->v) = (((((struct o4_float *)(((0xBC + a4) + 0xC)))->v)) + ((((((struct o4_float *)((0xBC + a4)))->v)) - ((((struct o4_float *)(((0xBC + a4) + 0xC)))->v))) / (float)(((((struct o1FC_int *)(a4))->v)) + 0x1)));
    (((struct o8_float *)(((0xBC + a4) + 0xC)))->v) = (((((struct o8_float *)(((0xBC + a4) + 0xC)))->v)) + ((((((struct o8_float *)((0xBC + a4)))->v)) - ((((struct o8_float *)(((0xBC + a4) + 0xC)))->v))) / (float)(((((struct o1FC_int *)(a4))->v)) + 0x1)));
    (((struct oC_float *)((0xEC + a4)))->v) = (((((struct oC_float *)((0xEC + a4)))->v)) + ((((((struct oEC_float *)(a4))->v)) - ((((struct oC_float *)((0xEC + a4)))->v))) / (float)(((((struct o200_int *)(a4))->v)) + 0x1)));
    (((struct o4_float *)(((0xEC + a4) + 0xC)))->v) = (((((struct o4_float *)(((0xEC + a4) + 0xC)))->v)) + ((((((struct o4_float *)((0xEC + a4)))->v)) - ((((struct o4_float *)(((0xEC + a4) + 0xC)))->v))) / (float)(((((struct o200_int *)(a4))->v)) + 0x1)));
    (((struct o8_float *)(((0xEC + a4) + 0xC)))->v) = (((((struct o8_float *)(((0xEC + a4) + 0xC)))->v)) + ((((((struct o8_float *)((0xEC + a4)))->v)) - ((((struct o8_float *)(((0xEC + a4) + 0xC)))->v))) / (float)(((((struct o200_int *)(a4))->v)) + 0x1)));
    return 0x8;
}

int FUN_0c0537d4(int a4)
{
    int stk[30];
    register int t10;
    register int t11;
    register int t12;
    register int t15;
    register int t21;

    FUN_0c0533a4(a4);
    *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((((((struct o240_int *)(a4))->v)) + 0x0))) + ((((struct o228_float *)(a4))->v)));
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((((struct o240_int *)(a4))->v))))->v)) + ((((struct o22C_float *)(a4))->v)));
    (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o8_float *)(((((struct o240_int *)(a4))->v))))->v)) + ((((struct o230_float *)(a4))->v)));
    t10 = 0x0;
    t11 = 0x1;
    for (;;) {
        t12 = FUN_0c0532be(t10);
        if (t12 != 0) {
            t15 = ((((t11 << 1) + t11) << 2) + ((int)stk + 0));
            t11 = (t11 + 0x1);
            *(float *)((t15 + 0x0)) = ((((struct o28_float *)(((t10 * 0x3938) + 0xC532498)))->v));
            (((struct o4_float *)(t15))->v) = (((((struct o2C_float *)(((t10 * 0x3938) + 0xC532498)))->v)) + -50.0f);
            (((struct o8_float *)(t15))->v) = ((((struct o30_float *)(((t10 * 0x3938) + 0xC532498)))->v));
            *(float *)((((((t11 << 1) + t11) << 2) + ((int)stk + 0)) + 0x0)) = ((((struct o28_float *)(((t10 * 0x3938) + 0xC532498)))->v));
            t21 = ((((t11 << 1) + t11) << 2) + ((int)stk + 0));
            t11 = (t11 + 0x1);
            (((struct o4_float *)(t21))->v) = (((((struct o2C_float *)(((t10 * 0x3938) + 0xC532498)))->v)) + 200.0f);
            (((struct o8_float *)(t21))->v) = ((((struct o30_float *)(((t10 * 0x3938) + 0xC532498)))->v));
        }
        t10 = (t10 + 0x1);
        if ((int)t10 >= (int)0x4) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0x18)) = 0x3E8;
    FUN_0c052cf8(a4, t11, ((int)stk + 0));
    (((struct oC_float *)((0xBC + a4)))->v) = (((((struct oC_float *)((0xBC + a4)))->v)) + ((((((struct oBC_float *)(a4))->v)) - ((((struct oC_float *)((0xBC + a4)))->v))) / (float)(((((struct o1FC_int *)(a4))->v)) + 0x1)));
    (((struct o4_float *)(((0xBC + a4) + 0xC)))->v) = (((((struct o4_float *)(((0xBC + a4) + 0xC)))->v)) + ((((((struct o4_float *)((0xBC + a4)))->v)) - ((((struct o4_float *)(((0xBC + a4) + 0xC)))->v))) / (float)(((((struct o1FC_int *)(a4))->v)) + 0x1)));
    (((struct o8_float *)(((0xBC + a4) + 0xC)))->v) = (((((struct o8_float *)(((0xBC + a4) + 0xC)))->v)) + ((((((struct o8_float *)((0xBC + a4)))->v)) - ((((struct o8_float *)(((0xBC + a4) + 0xC)))->v))) / (float)(((((struct o1FC_int *)(a4))->v)) + 0x1)));
    (((struct oC_float *)((0xEC + a4)))->v) = (((((struct oC_float *)((0xEC + a4)))->v)) + ((((((struct oEC_float *)(a4))->v)) - ((((struct oC_float *)((0xEC + a4)))->v))) / (float)(((((struct o200_int *)(a4))->v)) + 0x1)));
    (((struct o4_float *)(((0xEC + a4) + 0xC)))->v) = (((((struct o4_float *)(((0xEC + a4) + 0xC)))->v)) + ((((((struct o4_float *)((0xEC + a4)))->v)) - ((((struct o4_float *)(((0xEC + a4) + 0xC)))->v))) / (float)(((((struct o200_int *)(a4))->v)) + 0x1)));
    (((struct o8_float *)(((0xEC + a4) + 0xC)))->v) = (((((struct o8_float *)(((0xEC + a4) + 0xC)))->v)) + ((((((struct o8_float *)((0xEC + a4)))->v)) - ((((struct o8_float *)(((0xEC + a4) + 0xC)))->v))) / (float)(((((struct o200_int *)(a4))->v)) + 0x1)));
    return 0x8;
}
