/* Straight-line functions with calls and guards (batch gen_tw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c15f9b4(int, int, int, int);
int nlAddVector3op(int, int, int);
int FUN_0c167426(int a4, int a5, int a6, int a7);

int FUN_0c167426(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_1 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = a7;
    v0_6 = *(signed char *)((v0_1 + 0x14));
    v0_2 = (v0_6);
    v0_0 = (v0_1);
    if ((v0_6 == 0)) goto L_C167444;
    if ((v0_2 == 1)) goto L_C16749E;
    if ((v0_2 != 2)) goto L_C167440;
    return FUN_0c03f346(v0_0, v0_3, v0_4, v0_5);
    L_C167440:;
    L_C167574:;
    return v0_2;
    L_C16749E:;
    if (((*(signed char *)((v0_0 + 0x131))) != 0)) goto L_C1674AE;
    if (!((((((struct o404_int *)(v0_0))->v)) == 0))) goto L_C1674AE;
    if (((int)(*(short *)((v0_0 + 0x1C))) >= (int)0x1E)) goto L_C16751E;
    w0_0 = *(float *)0xC1675C0;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o84_float *)(v0_1))->v) = (((((struct o84_float *)(v0_1))->v)) + w0_0);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o88_float *)(v0_1))->v) = (((((struct o88_float *)(v0_1))->v)) + w0_0);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + 0.0333333351f);
    FPUL_ = (0x3D088889);
    goto L_C16751E;
    L_C1674AE:;
    FUN_0c15f9b4((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), (v0_0 + 0x34), 0x0);
    L_C16755C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    return 0x14;
    L_C16751E:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if (((int)v0_2 < (int)0x14)) goto L_C16753E;
    if (((int)v0_1 >= (int)0x1E)) goto L_C16753E;
    nlAddVector3op((v0_0 + 0x4C), (v0_0 + 0x4C), (v0_0 + 0x58));
    L_C16753E:;
    nlAddVector3op((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_2 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) <= (int)0x5A)) goto L_C167574;
    goto L_C16755C;
    L_C167444:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x40)) = *(struct mv3 *)(0xC2A3498); }
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x1F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x84)) = *(struct mv3 *)(0xC2A3498); }
    (((struct o8C_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = 0.0f;
    (((struct o12C_ushort *)(v0_0))->v) = 0x0;
    (((struct o12E_ushort *)(v0_0))->v) = 0xF0;
    goto L_C16749E;
}
