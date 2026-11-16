/* Straight-line functions with calls and guards (batch gen_of): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3733_uchar { char p[0x3733]; unsigned char v; };
struct o3742_uchar { char p[0x3742]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o375C_uchar { char p[0x375C]; unsigned char v; };
struct o375D_uchar { char p[0x375D]; unsigned char v; };
struct o378C_float { char p[0x378C]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3840_short { char p[0x3840]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c042ff8(void);
int FUN_0c043064(void);
int FUN_0c059e60(int, int);
int FUN_0c05aaf6(int);
int FUN_0c067438(int);
int FUN_0c067734(int);
int FUN_0c0736f2(int, int);
int FUN_0c073eb8(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085f66(int, int, int, int);
int FUN_0c1603c2(int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int FUN_0c083a40(int a4, int a5, int a6, int a7);
int FUN_0c085d0c(int a4, int a5, int a6, int a7);

int FUN_0c083a40(int a4, int a5, int a6, int a7)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
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
    v0_7 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_5 = a7;
    *(unsigned char *)(((int)stk + 12)) = v0_2;
    (((struct o3715_uchar *)(v0_7))->v) = 0x16;
    FUN_0c081dfc(v0_7, v0_2, v0_3, v0_5);
    FUN_0c067438(v0_7);
    (((struct o374A_uchar *)(v0_7))->v) = 0x3C;
    (((struct o382E_ushort *)(v0_7))->v) = 0x0;
    (((struct o5C_float *)(v0_7))->v) = 0.0f;
    (((struct o60_float *)(v0_7))->v) = 0.0f;
    (((struct o58_float *)(v0_7))->v) = 0.0f;
    (((struct o50_float *)(v0_7))->v) = 0.0f;
    (((struct o54_float *)(v0_7))->v) = 0.0f;
    (((struct o4C_float *)(v0_7))->v) = 0.0f;
    v0_6 = (0x4);
    v0_1 = (0x0);
    v0_0 = (v0_7);
    v0_9 = (0xC540978);
    if (((*(signed char *)0xC54098D) != 8)) goto L_C083AA0;
    if (((*(signed char *)0xC542237) == 0)) goto L_C083B32;
    L_C083AA0:;
    v0_4 = FUN_0c179ac0();
    v0_8 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C083AAE;
    v0_8 = ((v0_8 & 0x3));
    L_C083AB8:;
    FUN_0c187798(v0_7, v0_2, v0_3);
    v0_7 = (FUN_0c042ff8()) == 0;
    v0_4 = (0x1);
    if (v0_7) goto L_C083AEE;
    v0_7 = (FUN_0c043064()) != 0;
    if (v0_7) goto L_C083AEE;
    if ((!(((((struct o160_float *)(v0_0))->v)) > 0.0f))) goto L_C083B2A;
    L_C083AEE:;
    v0_8 = *(signed char *)((v0_9 + 0x15));
    v0_9 = (0xC25AD1C);
    v0_7 = (v0_8);
    if ((v0_8 == 10)) goto L_C083B02;
    if ((v0_7 != 11)) goto L_C083B74;
    L_C083B02:;
    if (((*(signed char *)0xC542237) != 2)) goto L_C083B74;
    if (((*(signed char *)((v0_0 + 0x3716))) == 22)) goto L_C083B2A;
    if (((*(signed char *)((v0_0 + 0x3716))) == 32)) goto L_C083B2A;
    FUN_0c073eb8(v0_0, (*(signed char *)((v0_0 + 0x1))), ((*(int *)((v0_9 + 0x0))) + 0x104));
    L_C083B2A:;
    (((struct o3756_uchar *)(v0_0))->v) = v0_4;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    L_C083B32:;
    (((struct o15_uchar *)(v0_0))->v) = v0_6;
    v0_8 = (0x15);
    L_C083CDE:;
    return v0_8;
    L_C083B74:;
    FUN_0c073eb8(v0_0, (*(signed char *)((v0_0 + 0x1))), ((*(int *)((v0_9 + 0x0))) + 0x17C));
    v0_10 = *(signed char *)(((int)stk + 12));
    v0_8 = (v0_10);
    v0_9 = (0xB4);
    if ((v0_10 == 0)) goto L_C083B94;
    if (!((v0_8 == 1))) goto L_C083C9A;
    if ((((((struct o160_float *)(v0_0))->v)) == 0.0f)) goto L_C083C50;
    FUN_0c07e868(v0_0, 0x9, v0_3, v0_5);
    goto L_C083C84;
    L_C083C9A:;
    (((struct o375C_uchar *)(v0_0))->v) = v0_9;
    v0_1 = *(signed char *)((v0_0 + 0x3716));
    v0_8 = (v0_1);
    if ((v0_1 == 22)) goto L_C083CDE;
    FUN_0c1603c2(v0_0);
    if (((*(signed char *)((0xC535BB8 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938)))) != 0)) goto L_C083CC6;
    FUN_0c05aaf6((0xAB + (*(signed char *)((v0_0 + 0x1)))));
    L_C083CC6:;
    return FUN_0c059e60(v0_0, 0xF);
    L_C083C84:;
    (((struct o3756_uchar *)(v0_0))->v) = v0_4;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    (((struct o5C_float *)(v0_0))->v) = ((((struct o37A0_float *)(v0_0))->v));
    (((struct o15_uchar *)(v0_0))->v) = 0x2;
    goto L_C083C9A;
    L_C083C50:;
    *(int *)((int)stk + 8) = 0x35;
    v0_2 = v0_6;
    *(int *)((int)stk + 4) = v0_2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(v0_0, 0xFFFFFFFF, 0x4, 0x35, 0xFFFFFFFF, v0_2, 0x35);
    (((struct o372C_uchar *)(v0_0))->v) = v0_1;
    v0_8 = (0x3840);
    if ((((((struct o3840_short *)(v0_0))->v)) == 0x270F)) goto L_C083C84;
    if (((int)(*(short *)((v0_0 + v0_8))) >= (int)0xF0)) goto L_C083C84;
    *(unsigned short *)((v0_0 + v0_8)) = ((*(short *)((v0_0 + v0_8))) + v0_9);
    goto L_C083C84;
    L_C083B94:;
    if ((((((struct o160_float *)(v0_0))->v)) == 0.0f)) goto L_C083BAA;
    FUN_0c07e868(v0_0, 0x0, v0_3, v0_5);
    L_C083BDE:;
    (((struct o3756_uchar *)(v0_0))->v) = v0_4;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x5;
    FUN_0c187798(v0_7, v0_2, v0_3);
    (((struct o375D_uchar *)(v0_0))->v) = v0_4;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + 1000.0f);
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    FPUL_ = (0x447A0000);
    goto L_C083C9A;
    L_C083BAA:;
    *(int *)((int)stk + 8) = 0x35;
    v0_5 = v0_6;
    *(int *)((int)stk + 4) = v0_5;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(v0_0, 0xFFFFFFFF, 0x4, 0x35, 0xFFFFFFFF, v0_5, 0x35);
    (((struct o372C_uchar *)(v0_0))->v) = v0_1;
    v0_8 = (0x3840);
    if ((((((struct o3840_short *)(v0_0))->v)) == 0x270F)) goto L_C083BDE;
    if (((int)(*(short *)((v0_0 + v0_8))) >= (int)0xF0)) goto L_C083BDE;
    *(unsigned short *)((v0_0 + v0_8)) = ((*(short *)((v0_0 + v0_8))) + v0_9);
    goto L_C083BDE;
    L_C083AAE:;
    v0_8 = (((~(((~v0_8) + 0x1) & 0x3)) + 0x1));
    goto L_C083AB8;
}

int FUN_0c085d0c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    int t4;
    int t5;
    int t6;
    register float u0;

    (((struct o14_uchar *)(a4))->v) = 0x0;
    (((struct o19_uchar *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o3742_uchar *)(a4))->v) = 0x0;
    u0 = (((struct o378C_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = u0;
    (((struct o44_float *)(a4))->v) = u0;
    (((struct o40_float *)(a4))->v) = u0;
    (((struct o3733_uchar *)(a4))->v) = 0x0;
    (((struct o37C0_float *)(a4))->v) = ((((struct o168_float *)(a4))->v));
    t6 = *(signed char *)((a4 + 0x371D));
    if ((t6 != 3) && ((t6 != 5) && (t6 != 6))) {
    } else {
        t6 = FUN_0c085f66(a4, a5, a6, a7);
        if (t6 == 0) {
            (((struct o371D_uchar *)(a4))->v) = 0x0;
        }
    }
    FUN_0c067734(a4);
    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC54223C, t0 == 1)) {
        return FUN_0c085cac(a4, 0x1B, 0x0);
    }
    if (!(((((struct o160_float *)(a4))->v)) > 0.0f) && (t1 = *(signed char *)((a4 + 0x3715)), t1 == 34)) {
        return FUN_0c0736f2(a4, 0x8);
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        if (t0 != 2) {
            t0 = FUN_0c07ebd0(a4);
            if ((t0 != 0) && (((t2 = *(signed char *)((a4 + 0x371D)), t2 == 3) && ((t3 = *(signed char *)((a4 + 0x3715)), t3 == 7) && (t4 = *(signed char *)((a4 + 0x3732)), t4 == 11))) || ((t2 == 3) && (t5 = *(signed char *)((a4 + 0x3715)), t5 == 6)))) {
                return FUN_0c085cac(a4, 0x1, 0x1);
            }
            return FUN_0c085cac(a4, 0x0, 0x0);
        }
        t0 = FUN_0c07ebd0(a4);
        if (t0 != 0) {
            FUN_0c085cac(a4, 0xD, 0x0);
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t1 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t0))->v) = 1.0f;
            (((struct o9C_float *)(t0))->v) = 1.0f;
            (((struct oA0_float *)(t1))->v) = 1.0f;
            (((struct o9C_float *)(t1))->v) = 1.0f;
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t1 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 1.0f;
            (((struct o98_float *)(t1))->v) = 1.0f;
            (((struct o94_float *)(t0))->v) = 1.0f;
            (((struct o94_float *)(t1))->v) = 1.0f;
            return 0x94;
        }
        return FUN_0c085cac(a4, 0x0, 0x0);
    }
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    return FUN_0c085cac(a4, 0x5, 0x7);
}
