/* Straight-line functions with calls and guards (batch gen_yr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c150010(int, float, float, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int FUN_0c1689ec(int a4, int a5, int a6, int a7);

int FUN_0c1689ec(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_5);
    v0_0 = (v0_0);
    if ((v0_5 == 0)) goto L_C168A08;
    if ((v0_1 == 1)) goto L_C168A60;
    if ((v0_1 == 2)) goto L_C168AC8;
    L_C168AD4:;
    return v0_1;
    L_C168AC8:;
    return FUN_0c03f346(v0_0, v0_2, v0_3, v0_4);
    L_C168A60:;
    v0_1 = (*(signed char *)((v0_0 + 0x131))) != 0;
    if (v0_1) goto L_C168A70;
    v0_1 = ((((struct o404_int *)(v0_0))->v)) == 0;
    if (!(v0_1)) goto L_C168A70;
    FUN_0c0588bc((v0_0 + 0x40), 0xC2A3798, 0xC2A378C, (*(short *)((v0_0 + 0x1C))), 0x3C, 0x0);
    nlAddVector3op((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 + 0x1);
    v0_1 = ((short)(v0_2 + 0x1));
    if (((int)(short)(v0_2 + 0x1) <= (int)0x3C)) goto L_C168AD4;
    goto L_C168ABE;
    L_C168A70:;
    FUN_0c150010((v0_0 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
    L_C168ABE:;
    (((struct o14_uchar *)(v0_0))->v) = 0x2;
    v0_1 = (0x14);
    goto L_C168AD4;
    L_C168A08:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x40)) = *(struct mv3 *)(0xC2A378C); }
    (((struct o4C_float *)(v0_0))->v) = ((math_sin_angle16((*(int *)((v0_0 + 0x38))))) * 10.0f);
    (((struct o50_float *)(v0_0))->v) = 0.0f;
    (((struct o54_float *)(v0_0))->v) = ((math_cos_angle16((*(int *)((v0_0 + 0x38))))) * 10.0f);
    FUN_0c03744a(((((struct oC4_int *)(v0_0))->v)), 0x0, 0x31, (*(int *)0xC4B40CC));
    goto L_C168A60;
}
