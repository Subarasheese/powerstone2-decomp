/* Straight-line functions with calls and guards (batch gen_hn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_float { char p[0x41C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c059df2(int, int);
extern float FUN_0c17c450();
int nlAddVector3op(int, int, int);
float nlInnerProduct(int, int);
int FUN_0c16d1ec(int a4, int a5, int a6);
int FUN_0c131556(int a4, int a5, int a6, int a7);
int FUN_0c147164(int a4, int a5, int a6, int a7);

int FUN_0c16d1ec(int a4, int a5, int a6)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_3 = *(signed char *)((v0_2 + 0x14));
    v0_4 = (v0_3);
    v0_2 = (v0_2);
    if ((v0_3 == 0)) goto L_C16D208;
    if ((v0_4 == 1)) goto L_C16D216;
    if ((v0_4 == 2)) goto L_C16D2AC;
    L_C16D2AC:;
    return v0_4;
    L_C16D216:;
    if (((*(signed char *)((v0_2 + 0x131))) != 0)) goto L_C16D28E;
    if (((*(signed char *)((v0_2 + 0x132))) != 0)) goto L_C16D28E;
    v0_4 = (0x404);
    if ((((((struct o404_int *)(v0_2))->v)) == 0)) goto L_C16D282;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((0x178 + v0_2)); }
    v0_3 = (((float (*)(int))(FUN_0c17c450))((((int)stk + 0) + 0xC))) == 0.0f;
    if (v0_3) goto L_C16D282;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_2 + 0x4C)); }
    v0_3 = (((float (*)(int, Stk3))(FUN_0c17c450))(((int)stk + 0), *(Stk3 *)(((int)stk + 0)))) == 0.0f;
    if (v0_3) goto L_C16D282;
    v0_3 = !((*(float *)0xC16D2E8) > (nlInnerProduct((((int)stk + 0) + 0xC), ((int)stk + 0))));
    if (v0_3) goto L_C16D282;
    FUN_0c059df2((*(signed char *)((v0_2 + 0x1))), 0x4B);
    L_C16D28E:;
    return (((int (*)(int, int, int))(FUN_0c03f346))(v0_2, v0_0, v0_1));
    L_C16D282:;
    v0_3 = *(short *)((v0_2 + 0x1C));
    *(unsigned short *)((v0_2 + 0x1C)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C16D29C;
    goto L_C16D28E;
    L_C16D29C:;
    v0_4 = ((nlAddVector3op((v0_2 + 0x28), (v0_2 + 0x28), (v0_2 + 0x4C))));
    goto L_C16D2AC;
    L_C16D208:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_2))->v) = 0x1;
    goto L_C16D216;
}

int FUN_0c131556(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t8;
    register int t3;
    register int t4;
    register int t6;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0xA, a7);
    t8 = t0;
    if (t0 != 0) {
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 0)));
        (((struct oAC_ushort *)(t0))->v) = 0x405;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o14_uchar *)(t0))->v) = 0x0;
        (((struct o15_uchar *)(t0))->v) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        (((struct oB0_float *)(t0))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(0xC2A145C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(0xC2A1450); }
        (((struct oA4_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x4)) = 0xC1313D4;
        t3 = *(signed char *)(((int)stk + 0));
        t4 = 0x0;
        for (;;) {
            t6 = *(int *)((((0xC4 + t0) + t4) + 0x0));
            FUN_0c03744a(t6, 0x0, 0x0, (*(int *)((((t3 << 2) + 0xC4B40FC) + 0x0))));
            *(unsigned char *)((t6 + 0x0)) = 0x1;
            t4 = (t4 + 0x4);
            *(unsigned short *)((t6 + 0x6)) = 0x7;
            if ((unsigned int)t4 >= (unsigned int)0x28) {
                break;
            }
        }
        t8 = 0x7;
    }
    return t8;
}

