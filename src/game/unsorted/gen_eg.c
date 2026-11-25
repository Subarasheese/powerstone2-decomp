/* Straight-line functions with calls and guards (batch gen_eg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int nlRand(void);
int FUN_0c12c23a(int a4, int a5, int a6, int a7);

int FUN_0c12c23a(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_1 = R14;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    R14 = (v0_0);
    v0_0 = (0xB6);
    w0_0 = (0.100000001f);
    if ((v0_2 == 0)) goto L_C12C25E;
    if ((v0_1 == 1)) goto L_C12C26A;
    if ((v0_1 == 2)) goto L_C12C2C8;
    if ((v0_1 == 3)) goto L_C12C31E;
    return FUN_0c03f346(R14, a5, a6, a7);
    L_C12C31E:;
    v0_1 = (((struct oC4_int *)(R14))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + v0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x28)) = *(struct mv3 *)(((*(int *)((R14 + 0x10))) + 0x28)); }
    w0_1 = (((struct o48_float *)(R14))->v);
    (((struct o48_float *)(R14))->v) = (w0_1 - w0_0);
    (((struct o44_float *)(R14))->v) = (w0_1 - w0_0);
    (((struct o40_float *)(R14))->v) = (w0_1 - w0_0);
    v0_0 = *(short *)((R14 + 0x1C));
    *(unsigned short *)((R14 + 0x1C)) = (v0_0 - 1);
    v0_1 = ((short)(v0_0 - 1));
    if (((short)(v0_0 - 1) != 0)) goto L_C12C368;
    L_C12C354:;
    (((struct o14_uchar *)(R14))->v) = ((*(signed char *)((R14 + 0x14))) + 0x1);
    v0_1 = (0x14);
    L_C12C368:;
    return v0_1;
    L_C12C2C8:;
    v0_1 = (((struct oC4_int *)(R14))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + v0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x28)) = *(struct mv3 *)(((*(int *)((R14 + 0x10))) + 0x28)); }
    v0_0 = (int)((int)(nlRand()) % (int)0x14);
    (((struct o44_float *)(R14))->v) = (((float)v0_0 / 20.0f) + 1.0f);
    v0_1 = *(short *)((R14 + 0x1C));
    *(unsigned short *)((R14 + 0x1C)) = (v0_1 - 1);
    w0_0 = (1.0f);
    FPUL_ = (v0_0);
    if (((short)(v0_1 - 1) == 0)) goto L_C12C318;
    v0_0 = *(signed char *)((0x3715 + (*(int *)((R14 + 0x10)))));
    v0_1 = (v0_0);
    if ((v0_0 == 26)) goto L_C12C368;
    L_C12C318:;
    v0_1 = (0xA);
    L_C12C31A:;
    *(unsigned short *)((R14 + 0x1C)) = v0_1;
    goto L_C12C354;
    L_C12C26A:;
    v0_1 = (((struct oC4_int *)(R14))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + v0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x28)) = *(struct mv3 *)(((*(int *)((R14 + 0x10))) + 0x28)); }
    w0_1 = (((struct o48_float *)(R14))->v);
    (((struct o48_float *)(R14))->v) = (w0_1 + w0_0);
    (((struct o44_float *)(R14))->v) = (w0_1 + w0_0);
    (((struct o40_float *)(R14))->v) = (w0_1 + w0_0);
    v0_0 = *(short *)((R14 + 0x1C));
    *(unsigned short *)((R14 + 0x1C)) = (v0_0 - 1);
    v0_1 = ((short)(v0_0 - 1));
    if (((short)(v0_0 - 1) != 0)) goto L_C12C368;
    v0_1 = (0x64);
    goto L_C12C31A;
    L_C12C25E:;
    *(unsigned short *)((R14 + 0x1C)) = 0xA;
    (((struct o14_uchar *)(R14))->v) = ((*(signed char *)((R14 + 0x14))) + 0x1);
    goto L_C12C26A;
}
