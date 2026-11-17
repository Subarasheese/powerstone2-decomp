/* game/menu/select: functions 0C10CAEC-0C10E7C4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05b052(void);
int FUN_0c05f254(int);
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c104e6a(int, int);
int FUN_0c105068(int, int);
int FUN_0c1171f0(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c1186d4(int);
int FUN_0c1187ba(void);
int FUN_0c11e28e(int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int);
int FUN_0c10caec(int a4);
int FUN_0c10cf38(int a4, int a5);
int FUN_0c10cf68(int a4, int a5, int a6, int a7);
int FUN_0c10d0fe(int a4);
int FUN_0c10d252(int a4);
int FUN_0c10d2b4(int a4, int a5);
int FUN_0c10d42e(int a4);
int FUN_0c10d662(int a4);
int FUN_0c10dab8(int a4);
int FUN_0c10dae2(int a4);
int FUN_0c10daf4(int a4);
int FUN_0c10db06(int a4);
int FUN_0c10db28(int a4);
int FUN_0c10db3a(int a4);
int FUN_0c10db5e(int a4);
int FUN_0c10db70(int a4);
int FUN_0c10dbc8(int a4);
int FUN_0c10dc48(int a4);
int FUN_0c10dd92(int a4);
int FUN_0c10de48(int a4);
int FUN_0c10de72(int a4, int a5, int a6, int a7);
int FUN_0c10df44(int a4, int a5, int a6, int a7);
void FUN_0c10e0c2(int a4);
int FUN_0c10e490(int a4, int a5, int a6, int a7);
int FUN_0c10e716(int a4);

int FUN_0c10caec(int a4)
{
    register int t1;

    if (((*(signed char *)((a4 + 0x14))) == 3) && ((t1 = *(signed char *)((a4 + 0x15)), (int)t1 >= (int)0x3) && ((int)t1 <= (int)0x5))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c10cf38(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10CB0E;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned char *)((t0 + 0x2)) = a5;
        t1 = a5;
    }
    return t1;
}

int FUN_0c10cf68(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 5) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t1 = *(int *)((a4 + 0x10));
    if (((*(signed char *)((t1 + 0x14))) == 3) && (t0 = *(signed char *)((t1 + 0x15)), t0 == 1)) {
        *(unsigned char *)((((((struct oE4_int *)(a4))->v)) + 0x0)) = 0x1;
    } else {
        *(unsigned char *)((((((struct oE4_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 99) {
                return FUN_0c03f346(a4, 0x1, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        t0 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + a4) + t0) + 0x0))), 0x5, 0x9, (*(int *)0xC4B410C));
            t0 = (t0 + 0x4);
            if ((unsigned int)t0 >= (unsigned int)0x20) {
                break;
            }
        }
        FUN_0c03744a(((((struct oE4_int *)(a4))->v)), 0x6, 0x9, (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oE4_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    u0 = (((struct o0_float *)0xC10D13C)->v);
    u1 = (((struct o8_float *)0xC10D13C)->v);
    u2 = (((struct oC_float *)0xC10D13C)->v);
    u3 = (((struct o14_float *)0xC10D13C)->v);
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        u4 = (((float)(*(signed char *)0xC473970) * u3) / u1);
        (((struct o80_uint *)((*(int *)((((0xC4 + a4) + (t0 << 2)) + 0x0)))))->v) = ((int)((((u4 * u0) / u3)) + u2) & 0xFFFF);
        t1 = (t1 + (unsigned char)(*(signed char *)(((((t0 << 1) + t0) + 0xC473958) + 0x0))));
        t3 = *(int *)((((t0 << 2) + (0xC4 + a4)) + 0x0));
        u4 = (((float)t1 * u3) / u1);
        u5 = ((u4 * u0) / u3);
        (((struct o80_uint *)(t3))->v) = (((((struct o80_int *)(t3))->v)) + ((int)(u5 + u2) & 0xFFFF));
        t3 = t0 == (unsigned char)(*(signed char *)0xC473971);
        t0 = (t0 + 0x1);
        t2 = 0x19;
        if (t3) {
            u4 = (((float)(*(signed char *)0xC473970) * u3) / u1);
            (((struct o80_uint *)(((((struct oE4_int *)(a4))->v))))->v) = ((int)((((u4 * u0) / u3)) + u2) & 0xFFFF);
            t3 = (((struct oE4_int *)(a4))->v);
            (((struct o80_uint *)(t3))->v) = (((((struct o80_int *)(t3))->v)) + ((int)(u5 + u2) & 0xFFFF));
            t2 = 0x80;
        }
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t2;
}

int FUN_0c10d0fe(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x9);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10CF68;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c10d252(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10D160;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c10d2b4(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t12;
    register int t0;
    register int t4;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t1 = a4;
    t2 = a5;
    t3 = 0x0;
    t5 = 0xA;
    t6 = a5;
    t7 = 0x2;
    for (;;) {
        if ((int)t7 <= 0) {
            break;
        }
        t0 = t5;
        t0 = ((int)((int)t6 / (int)t0));
        t4 = t0;
        t0 = t5;
        t0 = ((int)((int)t6 % (int)t0));
        t6 = t0;
        t0 = 0xA;
        t0 = ((int)((int)t5 / (int)t0));
        t1 = t7;
        t5 = t0;
        t0 = (*(int *)(((int)stk + 0)));
        t1 = (t1 - 1);
        t1 = (t1 << 2);
        t2 = t4;
        t12 = *(int *)0xC4B410C;
        *(unsigned int *)(((int)stk + 4)) = t1;
        t1 = (t1 + (0xC4 + t0));
        t1 = (*(int *)((t1 + 0x0)));
        t0 = (FUN_0c03744a(t1, t2, 0x5, t12));
        t1 = (*(int *)(((int)stk + 0)));
        t1 = (t1 + 0xC4);
        t2 = 0xC290E70;
        t1 = (t1 + (*(int *)(((int)stk + 4))));
        t1 = (*(int *)((t1 + 0x0)));
        t0 = 0xC;
        t0 = (FUN_0c187798(t1, t2));
        t2 = 0x1;
        if (t4 == 0) {
            t0 = t3;
            if (t0 != 1) {
                t0 = t7;
                if (t0 != 1) {
                    *(unsigned char *)((t1 + 0x0)) = 0x0;
                } else {
                    *(unsigned char *)((t1 + 0x0)) = t2;
                }
            } else {
                *(unsigned char *)((t1 + 0x0)) = t2;
            }
        } else {
            t3 = t2;
            *(unsigned char *)((t1 + 0x0)) = t2;
        }
        t7 = (t7 - 1);
    }
    return t0;
}

int FUN_0c10d42e(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10D37A;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c10d662(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0xB);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10D458;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c10dab8(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x2, 0x10);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10D68C;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c10dae2(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c10daf4(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x2;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c10db06(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x3;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c10db28(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x4;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c10db3a(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x5;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c10db5e(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x7;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c10db70(int a4)
{
    register int t0;
    register int t1;

    (((struct o0_uchar *)0xC473970)->v) = 0x0;
    (((struct o1_uchar *)0xC473970)->v) = 0x7;
    (((struct o2_uchar *)0xC473970)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        t1 = (0xC473958 + t0);
        t0 = (t0 + 0x3);
        *(unsigned char *)((t1 + 0x0)) = 0x5;
        if ((unsigned int)t0 >= (unsigned int)0x18) {
            break;
        }
    }
    *(unsigned int *)0xC473C9C = 0x1;
    FUN_0c10d662(a4);
    FUN_0c10cf38(a4, 0x0);
    FUN_0c10cf38(a4, 0x1);
    FUN_0c10dab8(a4);
    FUN_0c10d0fe(a4);
    FUN_0c10d42e(a4);
    FUN_0c10d252(a4);
    return FUN_0c10dae2(a4);
}

int FUN_0c10dbc8(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c104cc8(0x3FCF);
            if (t0 != 0) {
                return FUN_0c10daf4(a4);
            }
            return t0;
        }
        t0 = FUN_0c117d54();
        if ((int)t0 < 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return FUN_0c117e76();
        }
        return t0;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return (FUN_0c117944(0xE2));
}

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

int FUN_0c10dd92(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o0_uchar *)0xC473970)->v) = 0x0;
    (((struct o1_uchar *)0xC473970)->v) = 0x7;
    (((struct o2_uchar *)0xC473970)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        t1 = (0xC473958 + t0);
        t0 = (t0 + 0x3);
        *(unsigned char *)((t1 + 0x0)) = 0x5;
        if ((unsigned int)t0 >= (unsigned int)0x18) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        if ((*(int *)((0xC29E0D0 + (((t0 << 2) << 2) << 1)))) != -1) {
            t0 = (t0 + 0x1);
            continue;
        }
        break;
    }
    t1 = (int)((int)(FUN_0c179ac0()) % (int)t0);
    t0 = 0x0;
    for (;;) {
        t2 = t0;
        t0 = (t0 + 0x4);
        *(unsigned int *)((0xC473984 + t2)) = (*(int *)((((((t1 << 2) << 2) << 1) + 0xC29E0D0) + t2)));
        if ((unsigned int)t0 >= (unsigned int)0x20) {
            break;
        }
    }
    return FUN_0c10db06(a4);
}

int FUN_0c10de48(int a4)
{
    (((struct o15_uchar *)(a4))->v) = 0x4;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c10de72(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x17));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                t0 = FUN_0c104cc8(0x3FCF);
                if (t0 != 0) {
                    return ((int (*)(int, int, int, int))(0xC10DE3A))(a4, a5, a6, a7);
                }
                return t0;
            }
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                return FUN_0c117e76();
            }
            return t0;
        }
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        return (FUN_0c117944(0xF2));
    }
    (((struct o0_uchar *)0xC473970)->v) = 0x0;
    (((struct o1_uchar *)0xC473970)->v) = 0x7;
    t0 = 0x0;
    for (;;) {
        t1 = (0xC473958 + t0);
        t0 = (t0 + 0x3);
        *(unsigned char *)((t1 + 0x0)) = 0x5;
        if ((unsigned int)t0 >= (unsigned int)0x18) {
            break;
        }
    }
    if ((int)(*(int *)0xC47471C) >= (int)0x1388) {
        return ((int (*)(int, int, int, int))(0xC10DE1E))(a4, 0xC473958, 0x18, 0x5);
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o17_uchar *)(a4))->v) = 0x0;
    return 0x17;
}

int FUN_0c10df44(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c104db8();
    if (t0 != 0) {
        return ((int (*)(int, int, int, int))(0xC10DB4C))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                FUN_0c10e0c2(a4);
                t0 = *(signed char *)((a4 + 0x17));
                switch (t0) {
                case 0:
                    if ((int)((((struct o20_short *)(a4))->v)) > 0) {
                        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
                    } else {
                        FUN_0c117944(0xE4);
                    }
                    break;
                case 1:
                    FUN_0c117944(0xF3);
                    (((struct o20_ushort *)(a4))->v) = 0x78;
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    break;
                case 2:
                    FUN_0c117944(0xF5);
                    (((struct o20_ushort *)(a4))->v) = 0x78;
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    break;
                }
                t0 = FUN_0c05f254(0x101);
                if (t0 == 0) {
                    return ((int (*)(int, int, int, int))(0xC10DE2C))(a4, a5, a6, a7);
                }
                return t0;
            }
            *(unsigned char *)0xC473971 = (FUN_0c105068((unsigned char)(*(signed char *)0xC473971), 0x7));
            t0 = FUN_0c104d70();
            t1 = t0;
            if (t0 != 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o17_uchar *)(a4))->v) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x0;
                t1 = 0x20;
            }
            return t1;
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = FUN_0c104cc8(0x3FCF);
                t1 = t0;
                if (t0 != 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    t1 = 0x17;
                }
            }
            return t1;
        }
        t0 = FUN_0c117d54();
        if ((int)t0 < 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return FUN_0c117e76();
        }
        return t0;
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return (FUN_0c117944(0xE4));
}

void FUN_0c10e0c2(int a4)
{
    int stk[13];

    register int R1;
    register int R2;
    int R4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    R4 = a4;
    *(unsigned int *)(((int)stk + 12)) = R4;
    v0_1 = (FUN_0c05f254(0x101)) != 0;
    v0_0 = (0xC473958);
    if (v0_1) goto L_C10E0E8;
    L_C10E452:;
    v0_1 = *(signed char *)((v0_0 + 0x18));
    v0_10 = (0x18);
    R4 = (v0_1);
    if (((int)v0_1 >= 0)) goto L_C10E460;
    *(unsigned char *)((v0_0 + v0_10)) = 0x27;
    L_C10E46E:;
    return;
    L_C10E460:;
    v0_1 = (int)((int)R4 % (int)0x28);
    (((struct o18_uchar *)(v0_0))->v) = v0_1;
    v0_10 = (v0_1);
    goto L_C10E46E;
    L_C10E0E8:;
    *(unsigned int *)(((int)stk + 4)) = 0x27;
    v0_7 = (FUN_0c104cc8(0x400)) != 0;
    v0_1 = (0x5);
    v0_2 = (0x1);
    v0_3 = (0x0);
    v0_4 = (0x18);
    v0_5 = ((((int)stk + 0) + 0x14));
    v0_6 = (0x11);
    if (!(v0_7)) goto L_C10E2BE;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    v0_7 = *(signed char *)((v0_0 + 0x19));
    v0_9 = *(signed char *)((v0_0 + 0x18));
    *(unsigned int *)(((int)stk + 8)) = (v0_5 + 0x20);
    R4 = (v0_5);
    v0_8 = (v0_3);
    v0_7 = ((unsigned char)v0_7);
    v0_9 = (v0_9);
    goto L_C10E130;
    L_C10E2BE:;
    v0_7 = (FUN_0c104cc8(0x800)) != 0;
    if (v0_7) goto L_C10E2CE;
    goto L_C10E452;
    L_C10E2CE:;
    v0_8 = *(signed char *)((v0_0 + 0x19));
    v0_7 = *(signed char *)((v0_0 + 0x18));
    *(unsigned int *)(((int)stk + 0)) = (v0_5 + 0x20);
    R4 = ((unsigned char)v0_8);
    v0_8 = (v0_5);
    v0_7 = (v0_7);
    v0_9 = (v0_3);
    L_C10E2F2:;
    if (((unsigned int)v0_8 < (unsigned int)(*(int *)(((int)stk + 0))))) goto L_C10E2E4;
    v0_9 = *(signed char *)((v0_0 + 0x19));
    v0_10 = *(signed char *)((((((unsigned char)v0_9 << 1) + (unsigned char)v0_9) + v0_0) + 0x0));
    v0_8 = (((unsigned char)v0_10 + 0x1));
    v0_9 = (((((unsigned char)v0_9 << 1) + (unsigned char)v0_9) + v0_0));
    if (((int)((unsigned char)v0_10 + 0x1) <= (int)(*(int *)(((int)stk + 4))))) goto L_C10E316;
    v0_8 = (v0_3);
    L_C10E316:;
    *(unsigned char *)((v0_9 + 0x0)) = v0_8;
    v0_8 = (v0_2);
    v0_9 = (v0_3);
    L_C10E31C:;
    v0_11 = *(signed char *)((v0_0 + 0x19));
    v0_10 = (((unsigned char)v0_11 + v0_8));
    if (((int)((unsigned char)v0_11 + v0_8) < 0)) goto L_C10E32C;
    v0_10 = ((v0_10 & 0x7));
    L_C10E336:;
    v0_11 = v0_10 != 0;
    v0_10 = (0x19);
    if (v0_11) goto L_C10E33E;
    v0_9 = (v0_2);
    L_C10E33E:;
    v0_11 = *(signed char *)((v0_0 + v0_10));
    v0_10 = (((unsigned char)v0_11 + v0_8));
    if (((int)((unsigned char)v0_11 + v0_8) < 0)) goto L_C10E34C;
    v0_10 = ((v0_10 & 0x7));
    L_C10E356:;
    if (((int)(unsigned char)(*(signed char *)(((((v0_10 << 1) + v0_10) + v0_0) + 0x0))) > (int)v0_2)) goto L_C10E36C;
    v0_8 = ((v0_8 + 0x1));
    goto L_C10E31C;
    L_C10E36C:;
    v0_11 = *(signed char *)((v0_0 + 0x19));
    v0_10 = (((unsigned char)v0_11 + v0_8));
    if (((int)((unsigned char)v0_11 + v0_8) < 0)) goto L_C10E37C;
    v0_10 = ((v0_10 & 0x7));
    L_C10E386:;
    *(unsigned char *)(((((v0_10 << 1) + v0_10) + v0_0) + 0x0)) = ((*(signed char *)(((((v0_10 << 1) + v0_10) + v0_0) + 0x0))) - 1);
    if ((v0_9 == 0)) goto L_C10E3A2;
    (((struct o18_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x18))) + 0x1);
    L_C10E3A2:;
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    v0_8 = (v0_3);
    v0_9 = (v0_3);
    L_C10E3D4:;
    if (((unsigned int)v0_8 < (unsigned int)v0_4)) goto L_C10E3B4;
    v0_1 = (v0_5);
    if (((int)(*(int *)0xC47471C) >= (int)((*(int *)(((int)stk + 4))) * 0x1388))) goto L_C10E410;
    v0_8 = (v0_3);
    v0_9 = (v0_1);
    L_C10E402:;
    if (!(((unsigned int)v0_8 < (unsigned int)v0_4))) goto L_C10E406;
    (((struct o19_uchar *)(v0_0))->v) = R4;
    (((struct o18_uchar *)(v0_0))->v) = v0_7;
    *(unsigned char *)(((v0_0 + v0_8) + 0x0)) = (*(int *)((v0_9 + 0x0)));
    v0_8 = ((v0_8 + 0x3));
    v0_9 = ((v0_9 + 0x4));
    goto L_C10E402;
    L_C10E406:;
    (((struct o17_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x2;
    v0_10 = (0x17);
    goto L_C10E46E;
    L_C10E410:;
    v0_8 = (v0_3);
    L_C10E446:;
    if (((unsigned int)v0_8 < (unsigned int)v0_4)) goto L_C10E414;
    FUN_0c05aab6(0x0, 0x5);
    goto L_C10E452;
    L_C10E414:;
    if (((int)(unsigned char)(*(signed char *)(((v0_0 + v0_8) + 0x0))) <= (int)v0_6)) goto L_C10E444;
    v0_8 = (v0_3);
    v0_9 = (v0_1);
    L_C10E438:;
    if (!(((unsigned int)v0_8 < (unsigned int)v0_4))) goto L_C10E43C;
    (((struct o19_uchar *)(v0_0))->v) = R4;
    (((struct o18_uchar *)(v0_0))->v) = v0_7;
    *(unsigned char *)(((v0_0 + v0_8) + 0x0)) = (*(int *)((v0_9 + 0x0)));
    v0_8 = ((v0_8 + 0x3));
    v0_9 = ((v0_9 + 0x4));
    goto L_C10E438;
    L_C10E43C:;
    (((struct o17_uchar *)((*(int *)(((int)stk + 12)))))->v) = v0_2;
    v0_10 = (0x17);
    goto L_C10E46E;
    L_C10E444:;
    v0_8 = ((v0_8 + 0x3));
    goto L_C10E446;
    L_C10E3B4:;
    if (((int)(unsigned char)(*(signed char *)(((v0_0 + v0_8) + 0x0))) <= (int)v0_1)) goto L_C10E3D0;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + ((unsigned char)(*(signed char *)(((v0_0 + v0_9) + 0x0))) - 5));
    L_C10E3D0:;
    v0_8 = ((v0_8 + 0x3));
    v0_9 = ((v0_9 + 0x3));
    goto L_C10E3D4;
    L_C10E37C:;
    v0_10 = (((~(((~v0_10) + 0x1) & 0x7)) + 0x1));
    goto L_C10E386;
    L_C10E34C:;
    v0_10 = (((~(((~v0_10) + 0x1) & 0x7)) + 0x1));
    goto L_C10E356;
    L_C10E32C:;
    v0_10 = (((~(((~v0_10) + 0x1) & 0x7)) + 0x1));
    goto L_C10E336;
    L_C10E2E4:;
    *(unsigned int *)((v0_8 + 0x0)) = (unsigned char)(*(signed char *)(((v0_0 + v0_9) + 0x0)));
    v0_8 = ((v0_8 + 0x4));
    v0_9 = ((v0_9 + 0x3));
    goto L_C10E2F2;
    L_C10E130:;
    if (((unsigned int)R4 < (unsigned int)(*(int *)(((int)stk + 8))))) goto L_C10E122;
    R4 = (0x7);
    L_C10E138:;
    *(unsigned int *)(((int)stk + 8)) = ((unsigned char)(*(signed char *)((v0_0 + 0x19))) - (*(int *)(((int)stk + 0))));
    if (((int)(unsigned char)(*(signed char *)((v0_0 + 0x19))) >= (int)(*(int *)(((int)stk + 0))))) goto L_C10E156;
    v0_8 = (((*(int *)(((int)stk + 8))) + 0x8));
    L_C10E158:;
    v0_10 = (v0_8);
    if (((v0_8 & R4) != 0)) goto L_C10E162;
    *(unsigned int *)(((int)stk + 16)) = v0_2;
    L_C10E162:;
    if (((int)(unsigned char)(*(signed char *)((((((v0_10 & R4) << 1) + (v0_10 & R4)) + v0_0) + 0x0))) > (int)v0_2)) goto L_C10E17E;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    goto L_C10E138;
    L_C10E17E:;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    v0_8 = ((v0_8 & R4));
    if (((unsigned char)(*(signed char *)((v0_0 + 0x0))) != 1)) goto L_C10E18C;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    L_C10E18C:;
    *(unsigned int *)(((int)stk + 8)) = (((v0_8 << 1) + v0_8) + v0_0);
    v0_8 = *(signed char *)(((((v0_8 << 1) + v0_8) + v0_0) + 0x0));
    R4 = (((unsigned char)v0_8 - 1));
    if (((int)((unsigned char)v0_8 - 1) >= 0)) goto L_C10E1A4;
    R4 = ((*(int *)(((int)stk + 4))));
    L_C10E1A4:;
    *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x0)) = R4;
    v0_8 = *(signed char *)((v0_0 + 0x19));
    v0_10 = (((unsigned char)v0_8 + 0x1));
    if (((int)((unsigned char)v0_8 + 0x1) < 0)) goto L_C10E1CC;
    v0_10 = ((v0_10 & 0x7));
    L_C10E1D6:;
    *(unsigned char *)(((((v0_10 << 1) + v0_10) + v0_0) + 0x0)) = ((*(signed char *)(((((v0_10 << 1) + v0_10) + v0_0) + 0x0))) + 0x1);
    if (((*(int *)(((int)stk + 16))) != 1)) goto L_C10E1F2;
    if (((*(int *)(((int)stk + 0))) == 1)) goto L_C10E210;
    L_C10E1F2:;
    v0_8 = *(signed char *)0xC473971;
    v0_10 = (((unsigned char)v0_8 + 0x1));
    if (((int)((unsigned char)v0_8 + 0x1) < 0)) goto L_C10E202;
    v0_10 = ((v0_10 & 0x7));
    L_C10E20C:;
    if ((v0_10 != 0)) goto L_C10E218;
    L_C10E210:;
    (((struct o18_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x18))) - 1);
    L_C10E218:;
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    R4 = (v0_3);
    v0_8 = (v0_3);
    L_C10E240:;
    if (((unsigned int)R4 < (unsigned int)v0_4)) goto L_C10E220;
    if (((int)(*(int *)0xC47471C) >= (int)((*(int *)(((int)stk + 4))) * 0x1388))) goto L_C10E274;
    R4 = (0x0);
    v0_8 = (v0_5);
    L_C10E26C:;
    if (((unsigned int)R4 < (unsigned int)v0_4)) goto L_C10E25A;
    goto L_C10E406;
    L_C10E25A:;
    (((struct o19_uchar *)(v0_0))->v) = v0_7;
    (((struct o18_uchar *)(v0_0))->v) = v0_9;
    *(unsigned char *)(((v0_0 + R4) + 0x0)) = (*(int *)((v0_8 + 0x0)));
    R4 = ((R4 + 0x3));
    v0_8 = ((v0_8 + 0x4));
    goto L_C10E26C;
    L_C10E274:;
    R4 = (v0_3);
    v0_8 = (v0_5);
    L_C10E2B2:;
    if (((unsigned int)R4 < (unsigned int)v0_4)) goto L_C10E27A;
    FUN_0c05aab6(0x0, 0x5);
    goto L_C10E2BE;
    L_C10E27A:;
    if (((int)(unsigned char)(*(signed char *)(((v0_0 + R4) + 0x0))) <= (int)v0_6)) goto L_C10E2B0;
    R4 = (v0_3);
    L_C10E29C:;
    if (((unsigned int)R4 < (unsigned int)v0_4)) goto L_C10E28A;
    goto L_C10E43C;
    L_C10E28A:;
    (((struct o19_uchar *)(v0_0))->v) = v0_7;
    (((struct o18_uchar *)(v0_0))->v) = v0_9;
    *(unsigned char *)(((v0_0 + R4) + 0x0)) = (*(int *)((v0_8 + 0x0)));
    R4 = ((R4 + 0x3));
    v0_8 = ((v0_8 + 0x4));
    goto L_C10E29C;
    L_C10E2B0:;
    R4 = ((R4 + 0x3));
    goto L_C10E2B2;
    L_C10E220:;
    if (((int)(unsigned char)(*(signed char *)(((v0_0 + R4) + 0x0))) <= (int)v0_1)) goto L_C10E23C;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + ((unsigned char)(*(signed char *)(((v0_0 + v0_8) + 0x0))) - 5));
    L_C10E23C:;
    R4 = ((R4 + 0x3));
    v0_8 = ((v0_8 + 0x3));
    goto L_C10E240;
    L_C10E202:;
    v0_10 = (((~(((~v0_10) + 0x1) & 0x7)) + 0x1));
    goto L_C10E20C;
    L_C10E1CC:;
    v0_10 = (((~(((~v0_10) + 0x1) & 0x7)) + 0x1));
    goto L_C10E1D6;
    L_C10E156:;
    v0_8 = ((*(int *)(((int)stk + 8))));
    goto L_C10E158;
    L_C10E122:;
    *(unsigned int *)((R4 + 0x0)) = (unsigned char)(*(signed char *)(((v0_0 + v0_8) + 0x0)));
    R4 = ((R4 + 0x4));
    v0_8 = ((v0_8 + 0x3));
    goto L_C10E130;
}

int FUN_0c10e490(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    (((struct o20_ushort *)(a4))->v) = (FUN_0c104e6a(((((struct o20_short *)(a4))->v)), 0x1));
                    *(unsigned char *)(((*(int *)0xC474C00) + 0x2)) = (*(signed char *)((a4 + 0x20)));
                    t1 = FUN_0c104d70();
                    if (t1 != 0) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        t1 = 0x20;
                        if (((((struct o20_short *)(a4))->v)) == 0) {
                            t2 = FUN_0c05a080(0x1A, 0x0);
                            *(unsigned int *)0xC47471C = ((*(int *)0xC47471C) - ((*(int *)0xC473974) * 0x1388));
                            t1 = t2;
                        }
                        t2 = t1;
                    } else {
                        t1 = FUN_0c104db8();
                        t2 = t1;
                        if (t1 != 0) {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            (((struct o17_uchar *)(a4))->v) = 0x0;
                            (((struct o20_ushort *)(a4))->v) = 0x1;
                            t1 = *(signed char *)((a4 + 0x20));
                            *(unsigned char *)(((*(int *)0xC474C00) + 0x2)) = t1;
                            t2 = t1;
                        }
                    }
                    return t2;
                }
                if (t0 == 4) {
                    t1 = *(signed char *)((a4 + 0x17));
                    if (t1 != 0) {
                        if (t1 != 1) {
                            if (t1 != 2) {
                                return t1;
                            }
                            if (((((struct o20_short *)(a4))->v)) == 0) {
                                return ((int (*)(int, int, int, int))(0xC10DE3A))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC10DE12))(a4, a5, a6, a7);
                        }
                        t1 = (((struct o22_short *)(a4))->v);
                        (((struct o22_ushort *)(a4))->v) = (t1 + 0x1);
                        t2 = 0x22;
                        if ((int)(short)(t1 + 0x1) > (int)0xA) {
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            (((struct o14_uchar *)((*(int *)0xC474C00)))->v) = 0x63;
                            *(unsigned int *)0xC474C00 = 0x0;
                            t2 = 0x14;
                        }
                        return t2;
                    }
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    return FUN_0c1186d4(((((struct o20_short *)(a4))->v)));
                }
                return t0;
            }
            t0 = *(signed char *)((a4 + 0x17));
            if (t0 != 0) {
                if (t0 != 1) {
                    t1 = t0;
                    if (t0 != 2) {
                    } else {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        t1 = 0x17;
                    }
                    t0 = t1;
                } else {
                    t1 = FUN_0c117d54();
                    t2 = t1;
                    if ((int)t1 >= 0) {
                    } else {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        (((struct o20_ushort *)(a4))->v) = 0x0;
                        *(unsigned int *)0xC474C00 = (FUN_0c1187ba());
                        t1 = *(signed char *)((a4 + 0x20));
                        *(unsigned char *)(((*(int *)0xC474C00) + 0x2)) = t1;
                        t2 = t1;
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t1 = (FUN_0c117944(0xE7));
            }
            return t1;
        }
    } else {
        if ((*(int *)0xC473974) == 0) {
            (((struct o16_uchar *)(a4))->v) = 0x2;
            (((struct o17_uchar *)(a4))->v) = 0x0;
            return 0x17;
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = FUN_0c104cc8(0x3FCF);
                t2 = t0;
                if (t0 == 0) {
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    t2 = 0x17;
                }
                t1 = t2;
            }
            return t1;
        }
        t0 = FUN_0c117d54();
        if ((int)t0 >= 0) {
            return t0;
        }
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        return FUN_0c117e76();
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    t0 = *(int *)0xC473974;
    return (FUN_0c117944(0xE6, (t0), (t0 * 0x1388)));
}

int FUN_0c10e716(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t0 = 0x3;
        for (;;) {
            FUN_0c11e28e(0xB6);
            t0 = (t0 - 0x1);
            if (t0 == 0) {
                break;
            }
        }
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c104cc8(0x3FCF);
            if (t0 != 0) {
                FUN_0c10de48(a4);
                return FUN_0c05b052();
            }
            return t0;
        }
        t0 = FUN_0c117d54();
        if ((int)t0 < 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return FUN_0c117e76();
        }
        return t0;
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return (FUN_0c117944(0xE8));
}
