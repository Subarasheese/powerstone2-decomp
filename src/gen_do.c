/* Straight-line functions with calls and guards (batch gen_do): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o374D_uchar { char p[0x374D]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA4_int { char p[0xA4]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03ffbe(void);
int FUN_0c042fe0(void);
int FUN_0c056e44(int, int, int);
int FUN_0c0582ac(int, int);
int FUN_0c059c16(int, int);
int FUN_0c059c54(int);
int FUN_0c059c7a(int, int);
int FUN_0c059d30(void);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c05a080(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05aaf6(int);
int FUN_0c05b052(int, int);
int FUN_0c05f22c(int);
int FUN_0c064e70(int, int);
int FUN_0c07c4b0(int, int);
int FUN_0c07dbd8(int, int);
int FUN_0c07dcd8(int, int, int);
int FUN_0c081ee8(int, int, int, int, int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0b507a(int, int, int);
int FUN_0c0bb68c(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c42c4(int);
int FUN_0c0d02a6(void);
int FUN_0c0f1a68(int);
int FUN_0c0f1bac(int);
int FUN_0c0f1c1c(int);
int FUN_0c0f1c54(int);
int FUN_0c0f1c90(int);
int FUN_0c0f1d14(int, int);
int FUN_0c0f1d90(int);
int FUN_0c0f1e8c(void);
int FUN_0c0f1ee8(int);
int FUN_0c104cc8(int);
int FUN_0c104de4(int, int);
int FUN_0c10873c(int, int);
int FUN_0c108838(int, int);
int FUN_0c1088f2(int, int);
int FUN_0c1089c0(int, int, int);
int FUN_0c108acc(int);
int FUN_0c108bf8(int, int, int);
int FUN_0c10feda(int);
int FUN_0c11113c(void);
int FUN_0c112910(int, int);
int FUN_0c118584(int);
int FUN_0c11e20c(int);
int FUN_0c11e28e(int);
int FUN_0c11ea4e(int);
int FUN_0c11f9c8(int, int, int);
int FUN_0c12f292(int);
int FUN_0c12f2c6(int);
int FUN_0c15877c(int, int);
int FUN_0c15fcf8(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
extern float _builtin_sqrtf(float);
int math_mat_get_translate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c108d12(int a4, int a5, int a6, int a7);
int FUN_0c10eef0(int a4, int a5, int a6, int a7);
int FUN_0c07dd18(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0f2060(int a4, int a5, int a6);
int FUN_0c12ed48(int a4, int a5, int a6, int a7);

int FUN_0c108d12(int a4, int a5, int a6, int a7)
{
    int stk[14];

    register int R2;
    register int R3;
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
    v0_6 = a4;
    v0_7 = a5;
    v0_8 = a6;
    v0_10 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    (((struct o0_uint *)0xC473CCC)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC473CCC)->v) = 0xFFFFFFFF;
    (((struct o8_uint *)0xC473CCC)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xC473CCC)->v) = 0xFFFFFFFF;
    (((struct o20_uint *)0xC473CCC)->v) = 0x1;
    (((struct o34_uint *)0xC473CCC)->v) = 0x0;
    (((struct o28_uint *)0xC473CCC)->v) = 0x0;
    (((struct o10_uint *)0xC473CCC)->v) = 0xFFFFFFFF;
    (((struct o18_uint *)0xC473CCC)->v) = 0x0;
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 52)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    v0_1 = (0x1);
    v0_3 = (0xC473CFC);
    v0_4 = (0xFFFFFFFF);
    v0_2 = (0x0);
    v0_0 = (0xC11E20C);
    v0_6 = (0xE);
    v0_0 = (0xC473CCC);
    L_C108FB0:;
    if (((int)(*(int *)(((int)stk + 8))) > (int)0x78)) goto L_C108FBC;
    if (!((v0_4 == -1))) goto L_C108FBC;
    *(unsigned int *)(((int)stk + 16)) = v0_2;
    v0_5 = *(int *)(((int)stk + 8));
    v0_5 = ((((v0_5 << 2) << 1) - v0_5));
    goto L_C108F9E;
    L_C108FBC:;
    v0_9 = (v0_8);
    if ((v0_8 == 0x97)) goto L_C109016;
    if ((v0_9 == 0x9E)) goto L_C109026;
    if ((v0_9 != 0x96)) goto L_C108FD6;
    (((struct o10_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    v0_5 = v0_0;
    *(int *)((int)stk + 0) = v0_5;
    *(unsigned int *)((v0_5 + 0x0)) = (FUN_0c1089c0((*(int *)(((int)stk + 4))), v0_7, v0_8));
    if (((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) == -1)) goto L_C109268;
    *(unsigned int *)((v0_0 + 0xC)) = (*(int *)(((int)stk + 4)));
    (((struct o20_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    v0_6 = ((*(int *)((v0_0 + 0x0))));
    L_C10923C:;
    v0_9 = ((FUN_0c11e20c(v0_6)));
    L_C109916:;
    return v0_9;
    L_C109268:;
    v0_6 = (0xC2A08E0);
    v0_7 = (v0_2);
    v0_8 = (v0_2);
    v0_10 = (0xC2A08E0);
    L_C1092A4:;
    if (!(((*(int *)((v0_10 + (v0_8 << 2)))) != -1))) goto L_C1092B0;
    if (((*(int *)((v0_6 + 0x0))) != v0_4)) goto L_C1092A0;
    v0_7 = (v0_1);
    goto L_C1092B0;
    L_C1092B0:;
    if (!((v0_7 != 0))) goto L_C1093D8;
    if ((((*(int *)(((v0_4 << 2) + 0xC473D04))) & 0x2000) == 0)) goto L_C1092CA;
    goto L_C1093D8;
    L_C1093D8:;
    if ((((((struct o1C_int *)0xC473CCC)->v)) != 2)) goto L_C1093EE;
    (((struct o1C_uint *)0xC473CCC)->v) = v0_2;
    v0_6 = (0x63);
    if (((int)(*(int *)(((int)stk + 40))) >= (int)0x63)) goto L_C1093EE;
    *(unsigned int *)(((int)stk + 40)) = v0_6;
    L_C1093EE:;
    v0_9 = (v0_4);
    v0_6 = (v0_0);
    if ((v0_4 != -1)) goto L_C1093FC;
    if ((((((struct o1C_int *)0xC473CCC)->v)) == 0)) goto L_C10981A;
    goto L_C109916;
    L_C10981A:;
    *(unsigned int *)(((int)stk + 16)) = v0_6;
    *(unsigned int *)((v0_6 + 0x0)) = 0xB6;
    FUN_0c11e20c((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
    v0_3 = *(int *)(((int)stk + 52));
    v0_9 = (v0_3);
    if ((v0_3 != 2)) goto L_C109916;
    v0_3 = (((struct o34_int *)0xC473CCC)->v);
    v0_9 = (v0_3);
    v0_6 = (((((struct o18_int *)0xC473CCC)->v)));
    if ((v0_3 == 0)) goto L_C109844;
    if ((v0_9 == 1)) goto L_C1098BC;
    if ((v0_9 == 2)) goto L_C1098DE;
    goto L_C109916;
    L_C1098DE:;
    if ((v0_6 == 0x400)) goto L_C1098EA;
    if ((v0_6 != 0x800)) goto L_C1098EE;
    L_C1098EA:;
    (((struct o20_uint *)0xC473CCC)->v) = v0_2;
    L_C1098EE:;
    FUN_0c11e28e((*(int *)(((v0_0 + 0x4) + 0x0))));
    FUN_0c11e28e((*(int *)(((v0_0 + 0x8) + 0x0))));
    *(unsigned int *)(((v0_0 + 0x4) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    *(unsigned int *)(((v0_0 + 0x8) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    FUN_0c11e20c((*(int *)(((v0_0 + 0x4) + 0x0))));
    v0_6 = ((*(int *)(((v0_0 + 0x8) + 0x0))));
    L_C109912:;
    v0_9 = ((FUN_0c11e20c(v0_6)));
    goto L_C109916;
    L_C1098BC:;
    if ((v0_6 == 0x400)) goto L_C1098C8;
    if ((v0_6 != 0x800)) goto L_C1098CC;
    L_C1098C8:;
    (((struct o20_uint *)0xC473CCC)->v) = v0_2;
    L_C1098CC:;
    FUN_0c11e28e((*(int *)(((v0_0 + 0x4) + 0x0))));
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)(((v0_0 + 0x4) + 0x0)) = v0_1;
    v0_6 = (v0_1);
    goto L_C109912;
    L_C109844:;
    v0_2 = FUN_0c179ac0();
    v0_9 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C109870;
    v0_9 = ((v0_9 & 0x1));
    L_C10987A:;
    if ((v0_9 == 0)) goto L_C1098A4;
    (((struct o34_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)(((int)stk + 16)) = (v0_0 + 0x4);
    *(unsigned int *)(((v0_0 + 0x4) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    *(unsigned int *)(((int)stk + 4)) = (v0_0 + 0x8);
    *(unsigned int *)(((v0_0 + 0x8) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    FUN_0c11e20c((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
    v0_6 = ((*(int *)(((int)stk + 4))));
    L_C1098B4:;
    v0_9 = ((FUN_0c11e20c((*(int *)((v0_6 + 0x0))))));
    goto L_C109916;
    L_C1098A4:;
    (((struct o34_uint *)0xC473CCC)->v) = v0_1;
    *(unsigned int *)(((int)stk + 16)) = (v0_0 + 0x4);
    *(unsigned int *)(((v0_0 + 0x4) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    v0_6 = ((*(int *)(((int)stk + 16))));
    goto L_C1098B4;
    L_C109870:;
    v0_9 = (((~(((~v0_9) + 0x1) & 0x1)) + 0x1));
    goto L_C10987A;
    L_C1093FC:;
    *(unsigned int *)(((int)stk + 20)) = 0xC472BA8;
    *(unsigned int *)(((int)stk + 24)) = 0xC472BAA;
    *(unsigned int *)(((int)stk + 28)) = 0xC472BA9;
    *(unsigned int *)(((int)stk + 8)) = (v0_6 + 0xC);
    *(unsigned int *)(((int)stk + 4)) = (v0_6 + 0x4);
    *(unsigned int *)(((int)stk + 8)) = (v0_6 + 0xC);
    *(unsigned int *)(((int)stk + 4)) = (v0_6 + 0x4);
    *(unsigned int *)(((int)stk + 12)) = (v0_6 + 0x8);
    *(unsigned int *)(((int)stk + 4)) = (v0_6 + 0x4);
    *(unsigned int *)(((int)stk + 8)) = (v0_6 + 0xC);
    *(unsigned int *)(((int)stk + 4)) = (v0_6 + 0x4);
    *(unsigned int *)(((int)stk + 8)) = (v0_6 + 0xC);
    *(unsigned int *)(((int)stk + 4)) = (v0_6 + 0x4);
    v0_7 = (int)((int)((int)(FUN_0c179ac0()) % (int)0x65)) <= (int)(*(int *)(((int)stk + 40)));
    v0_5 = (v0_6);
    if (v0_7) goto L_C109452;
    if (((*(signed char *)(((*(int *)(((int)stk + 20))) + 0x0))) != 0)) goto L_C109452;
    L_C109708:;
    if ((((((struct o1C_int *)0xC473CCC)->v)) != 0)) goto L_C109718;
    *(unsigned int *)((v0_5 + 0x0)) = 0xB6;
    FUN_0c11e20c(0xB6);
    L_C109718:;
    v0_3 = *(int *)(((int)stk + 52));
    v0_9 = (v0_3);
    if ((v0_3 == 2)) goto L_C109722;
    goto L_C109916;
    L_C109722:;
    v0_3 = (((struct o34_int *)0xC473CCC)->v);
    v0_9 = (v0_3);
    if ((v0_3 == 0)) goto L_C109736;
    if ((v0_9 == 1)) goto L_C1097A4;
    if ((v0_9 == 2)) goto L_C1097CC;
    goto L_C109916;
    L_C1097CC:;
    v0_9 = (0xC473CE4);
    if ((((((struct o18_int *)0xC473CCC)->v)) == 0x400)) goto L_C1097DE;
    if (((*(int *)((v0_9 + 0x0))) != 0x800)) goto L_C1097E2;
    L_C1097DE:;
    (((struct o20_uint *)0xC473CCC)->v) = v0_2;
    L_C1097E2:;
    FUN_0c11e28e((*(int *)(((v0_0 + 0x4) + 0x0))));
    FUN_0c11e28e((*(int *)(((v0_0 + 0x8) + 0x0))));
    *(unsigned int *)(((v0_0 + 0x4) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    *(unsigned int *)(((v0_0 + 0x8) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    FUN_0c11e20c((*(int *)(((v0_0 + 0x4) + 0x0))));
    v0_6 = ((*(int *)(((v0_0 + 0x8) + 0x0))));
    L_C109806:;
    v0_9 = ((FUN_0c11e20c(v0_6)));
    goto L_C109916;
    L_C1097A4:;
    v0_9 = (0xC473CE4);
    if ((((((struct o18_int *)0xC473CCC)->v)) == 0x400)) goto L_C1097B6;
    if (((*(int *)((v0_9 + 0x0))) != 0x800)) goto L_C1097BA;
    L_C1097B6:;
    (((struct o20_uint *)0xC473CCC)->v) = v0_2;
    L_C1097BA:;
    FUN_0c11e28e((*(int *)(((v0_0 + 0x4) + 0x0))));
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)(((v0_0 + 0x4) + 0x0)) = v0_1;
    v0_6 = (v0_1);
    goto L_C109806;
    L_C109736:;
    v0_2 = FUN_0c179ac0();
    v0_9 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C109758;
    v0_9 = ((v0_9 & 0x1));
    L_C109762:;
    if ((v0_9 == 0)) goto L_C10978C;
    (((struct o34_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)(((int)stk + 16)) = (v0_0 + 0x4);
    *(unsigned int *)(((v0_0 + 0x4) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    *(unsigned int *)(((int)stk + 4)) = (v0_0 + 0x8);
    *(unsigned int *)(((v0_0 + 0x8) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    FUN_0c11e20c((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
    v0_6 = ((*(int *)(((int)stk + 4))));
    L_C10979C:;
    v0_9 = ((FUN_0c11e20c((*(int *)((v0_6 + 0x0))))));
    goto L_C109916;
    L_C10978C:;
    (((struct o34_uint *)0xC473CCC)->v) = v0_1;
    *(unsigned int *)(((int)stk + 16)) = (v0_0 + 0x4);
    *(unsigned int *)(((v0_0 + 0x4) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    v0_6 = ((*(int *)(((int)stk + 16))));
    goto L_C10979C;
    L_C109758:;
    v0_9 = (((~(((~v0_9) + 0x1) & 0x1)) + 0x1));
    goto L_C109762;
    L_C109452:;
    if (((0x1 - (*(signed char *)(((*(int *)(((int)stk + 24))) + 0x0)))) != 0)) goto L_C109462;
    goto L_C109708;
    L_C109462:;
    v0_6 = (int)((int)((int)(FUN_0c179ac0()) % (int)0x65)) <= (int)(*(int *)(((int)stk + 44)));
    if (v0_6) goto L_C109482;
    if (((*(signed char *)(((*(int *)(((int)stk + 28))) + 0x0))) != 0)) goto L_C109482;
    if ((v0_4 != -1)) goto L_C1096F0;
    if ((((((struct o1C_int *)0xC473CCC)->v)) != 0)) goto L_C109718;
    *(unsigned int *)((v0_5 + 0x0)) = 0xB6;
    FUN_0c11e20c(0xB6);
    goto L_C109718;
    L_C1096F0:;
    (((struct o20_uint *)0xC473CCC)->v) = v0_2;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    (((struct o1C_uint *)0xC473CCC)->v) = v0_2;
    *(unsigned int *)((v0_5 + 0x0)) = v0_4;
    FUN_0c11e20c(v0_4);
    goto L_C109718;
    L_C109482:;
    v0_6 = FUN_0c108bf8(v0_4, (*(int *)(((int)stk + 16))), 0x0);
    (((struct o18_uint *)0xC473CCC)->v) = v0_6;
    v0_9 = (v0_6);
    if (!((v0_6 != 0))) goto L_C1096B4;
    if ((v0_9 == 1)) goto L_C1094E4;
    if ((v0_9 == 2)) goto L_C109510;
    if ((v0_9 == 4)) goto L_C109562;
    if ((v0_9 != 8)) goto L_C1094AA;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = v0_4;
    v0_4 = FUN_0c108838(0x0, v0_4);
    *(unsigned int *)((v0_5 + 0x0)) = v0_4;
    if ((v0_4 == -1)) goto L_C1096B4;
    (((struct o20_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    (((struct o1C_uint *)0xC473CCC)->v) = v0_2;
    FUN_0c11e20c((*(int *)((v0_5 + 0x0))));
    goto L_C1096B4;
    L_C1096B4:;
    v0_3 = (((struct o20_int *)0xC473CCC)->v);
    v0_9 = (v0_3);
    if ((v0_3 != 1)) goto L_C109718;
    if ((((((struct o1C_int *)0xC473CCC)->v)) == 0)) goto L_C1096C8;
    goto L_C109916;
    L_C1096C8:;
    *(unsigned int *)((v0_5 + 0x0)) = 0xB6;
    v0_9 = ((FUN_0c11e20c(0xB6)));
    goto L_C109916;
    L_C1094AA:;
    if ((v0_9 != 16)) goto L_C1094B2;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = v0_4;
    v0_4 = FUN_0c1088f2(0x0, v0_4);
    *(unsigned int *)((v0_5 + 0x0)) = v0_4;
    if ((v0_4 == -1)) goto L_C1096B4;
    (((struct o20_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    (((struct o1C_uint *)0xC473CCC)->v) = v0_2;
    FUN_0c11e20c((*(int *)((v0_5 + 0x0))));
    goto L_C1096B4;
    L_C1094B2:;
    if ((v0_9 != 0x400)) goto L_C1094BC;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = v0_4;
    *(unsigned int *)((v0_5 + 0x0)) = v0_4;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_4;
    if (((*(int *)((v0_5 + 0x0))) == -1)) goto L_C1096B4;
    if (((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) == -1)) goto L_C1096B4;
    (((struct o20_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    (((struct o34_uint *)0xC473CCC)->v) = v0_1;
    (((struct o1C_uint *)0xC473CCC)->v) = v0_2;
    FUN_0c11e20c((*(int *)((v0_5 + 0x0))));
    FUN_0c11e20c((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    goto L_C1096B4;
    L_C1094BC:;
    if ((v0_9 != 0x800)) goto L_C1094C6;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = v0_4;
    *(unsigned int *)((v0_5 + 0x0)) = v0_4;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_4;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = v0_4;
    if (((*(int *)((v0_5 + 0x0))) == -1)) goto L_C1096B4;
    if (((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) == -1)) goto L_C1096B4;
    if (((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) == -1)) goto L_C1096B4;
    (((struct o20_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    (((struct o34_uint *)0xC473CCC)->v) = 0x2;
    (((struct o1C_uint *)0xC473CCC)->v) = v0_2;
    FUN_0c11e20c((*(int *)((v0_5 + 0x0))));
    FUN_0c11e20c((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    FUN_0c11e20c((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
    goto L_C1096B4;
    L_C1094C6:;
    goto L_C1096B4;
    L_C109562:;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = v0_4;
    *(unsigned int *)((v0_5 + 0x0)) = (FUN_0c10873c(v0_4, 0x2));
    v0_6 = (*(int *)(((int)stk + 4)));
    *(int *)((int)stk + 0) = v0_6;
    *(unsigned int *)((v0_6 + 0x0)) = (FUN_0c10873c(v0_4, 0x2));
    v0_6 = (*(int *)(((int)stk + 12)));
    *(int *)((int)stk + 0) = v0_6;
    *(unsigned int *)((v0_6 + 0x0)) = (FUN_0c10873c(v0_4, 0x2));
    if (((*(int *)((v0_5 + 0x0))) != -1)) goto L_C109594;
    goto L_C1096B4;
    L_C109594:;
    if (((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != -1)) goto L_C1095A0;
    goto L_C1096B4;
    L_C1095A0:;
    if (((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) != -1)) goto L_C1095AC;
    goto L_C1096B4;
    L_C1095AC:;
    (((struct o20_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    (((struct o34_uint *)0xC473CCC)->v) = 0x2;
    (((struct o1C_uint *)0xC473CCC)->v) = v0_2;
    FUN_0c11e20c((*(int *)((v0_5 + 0x0))));
    FUN_0c11e20c((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    FUN_0c11e20c((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
    goto L_C1096B4;
    L_C109510:;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = v0_4;
    *(unsigned int *)((v0_5 + 0x0)) = (FUN_0c10873c(v0_4, 0x1));
    v0_6 = (*(int *)(((int)stk + 4)));
    *(int *)((int)stk + 0) = v0_6;
    *(unsigned int *)((v0_6 + 0x0)) = (FUN_0c10873c(v0_4, 0x1));
    if (((*(int *)((v0_5 + 0x0))) != -1)) goto L_C109534;
    goto L_C1096B4;
    L_C109534:;
    if (((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != -1)) goto L_C109540;
    goto L_C1096B4;
    L_C109540:;
    (((struct o20_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    (((struct o34_uint *)0xC473CCC)->v) = v0_1;
    (((struct o1C_uint *)0xC473CCC)->v) = v0_2;
    FUN_0c11e20c((*(int *)((v0_5 + 0x0))));
    FUN_0c11e20c((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    goto L_C1096B4;
    L_C1094E4:;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = v0_4;
    v0_4 = FUN_0c10873c(v0_4, 0x0);
    *(unsigned int *)((v0_5 + 0x0)) = v0_4;
    if ((v0_4 != -1)) goto L_C1094F8;
    goto L_C1096B4;
    L_C1094F8:;
    (((struct o20_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    (((struct o1C_uint *)0xC473CCC)->v) = v0_2;
    FUN_0c11e20c((*(int *)((v0_5 + 0x0))));
    goto L_C1096B4;
    L_C1092CA:;
    (((struct o28_uint *)0xC473CCC)->v) = v0_1;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    *(unsigned int *)((v0_0 + 0x0)) = 0xB6;
    FUN_0c11e20c((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
    v0_3 = *(int *)(((int)stk + 52));
    v0_9 = (v0_3);
    if ((v0_3 == 2)) goto L_C1092E6;
    goto L_C109916;
    L_C1092E6:;
    v0_3 = (((struct o34_int *)0xC473CCC)->v);
    v0_9 = (v0_3);
    if ((v0_3 == 0)) goto L_C1092FA;
    if ((v0_9 == 1)) goto L_C109354;
    if ((v0_9 == 2)) goto L_C109394;
    goto L_C109916;
    L_C109394:;
    if ((((((struct o18_int *)0xC473CCC)->v)) == 0)) goto L_C1093A0;
    (((struct o20_uint *)0xC473CCC)->v) = v0_2;
    L_C1093A0:;
    FUN_0c11e28e((*(int *)(((v0_0 + 0x4) + 0x0))));
    FUN_0c11e28e((*(int *)(((v0_0 + 0x8) + 0x0))));
    *(unsigned int *)(((v0_0 + 0x4) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    *(unsigned int *)(((v0_0 + 0x8) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    FUN_0c11e20c((*(int *)(((v0_0 + 0x4) + 0x0))));
    v0_6 = ((*(int *)(((v0_0 + 0x8) + 0x0))));
    L_C1093C4:;
    v0_9 = ((FUN_0c11e20c(v0_6)));
    goto L_C109916;
    L_C109354:;
    if ((((((struct o18_int *)0xC473CCC)->v)) == 0)) goto L_C109360;
    (((struct o20_uint *)0xC473CCC)->v) = v0_2;
    L_C109360:;
    FUN_0c11e28e((*(int *)(((v0_0 + 0x4) + 0x0))));
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)(((v0_0 + 0x4) + 0x0)) = v0_1;
    v0_6 = (v0_1);
    goto L_C1093C4;
    L_C1092FA:;
    v0_2 = FUN_0c179ac0();
    v0_9 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C109308;
    v0_9 = ((v0_9 & 0x1));
    L_C109312:;
    if ((v0_9 == 0)) goto L_C10933C;
    (((struct o34_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)(((int)stk + 4)) = (v0_0 + 0x4);
    *(unsigned int *)(((v0_0 + 0x4) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    *(unsigned int *)(((int)stk + 16)) = (v0_0 + 0x8);
    *(unsigned int *)(((v0_0 + 0x8) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    FUN_0c11e20c((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    L_C10934A:;
    v0_9 = ((FUN_0c11e20c((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))))));
    goto L_C109916;
    L_C10933C:;
    (((struct o34_uint *)0xC473CCC)->v) = v0_1;
    *(unsigned int *)(((int)stk + 16)) = (v0_0 + 0x4);
    *(unsigned int *)(((v0_0 + 0x4) + 0x0)) = (*(int *)((v0_0 + 0x0)));
    goto L_C10934A;
    L_C109308:;
    v0_9 = (((~(((~v0_9) + 0x1) & 0x1)) + 0x1));
    goto L_C109312;
    L_C1092A0:;
    v0_6 = ((v0_6 + 0x4));
    v0_8 = ((v0_8 + 0x1));
    goto L_C1092A4;
    L_C108FD6:;
    if ((v0_9 != 0x9A)) goto L_C108FE0;
    (((struct o10_uint *)0xC473CCC)->v) = 0x3;
    if (((int)v0_4 < 0)) goto L_C1091B8;
    if (((int)v0_4 > (int)0x78)) goto L_C1091B8;
    *(unsigned int *)((v0_0 + 0x0)) = (FUN_0c108acc(v0_4));
    *(unsigned int *)((v0_0 + 0x4)) = (FUN_0c108acc(v0_4));
    *(unsigned int *)((v0_0 + 0x8)) = (FUN_0c108acc(v0_4));
    L_C1091B8:;
    if (((*(int *)((v0_0 + 0x0))) == -1)) goto L_C109268;
    if (((*(int *)((v0_0 + 0x4))) == -1)) goto L_C109268;
    if (((*(int *)((v0_0 + 0x8))) == -1)) goto L_C109268;
    (((struct o20_uint *)0xC473CCC)->v) = v0_2;
    (((struct o34_uint *)0xC473CCC)->v) = 0x2;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    FUN_0c11e20c((*(int *)((v0_0 + 0x0))));
    FUN_0c11e20c((*(int *)((v0_0 + 0x4))));
    v0_6 = ((*(int *)((v0_0 + 0x8))));
    goto L_C10923C;
    L_C108FE0:;
    if ((v0_9 != 0x9B)) goto L_C108FEA;
    (((struct o10_uint *)0xC473CCC)->v) = 0x4;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    v0_5 = v0_0;
    *(int *)((int)stk + 0) = v0_5;
    *(unsigned int *)((v0_5 + 0x0)) = (FUN_0c1088f2(0x1, 0xFFFFFFFF));
    if (((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) == -1)) goto L_C109268;
    L_C109230:;
    (((struct o20_uint *)0xC473CCC)->v) = v0_2;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    v0_6 = ((*(int *)((v0_0 + 0x0))));
    goto L_C10923C;
    L_C108FEA:;
    if ((v0_9 != 0x9C)) goto L_C108FF4;
    (((struct o10_uint *)0xC473CCC)->v) = 0x5;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    v0_5 = v0_0;
    *(int *)((int)stk + 0) = v0_5;
    *(unsigned int *)((v0_5 + 0x0)) = (FUN_0c108838(0x1, 0xFFFFFFFF));
    if (((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) == -1)) goto L_C109268;
    goto L_C109230;
    L_C108FF4:;
    if ((v0_9 != 0x98)) goto L_C108FFE;
    (((struct o10_uint *)0xC473CCC)->v) = 0x6;
    *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + 0x1E);
    goto L_C109268;
    L_C108FFE:;
    if ((v0_9 != 0x99)) goto L_C109008;
    (((struct o10_uint *)0xC473CCC)->v) = 0x7;
    *(unsigned int *)(((int)stk + 52)) = 0x2;
    goto L_C109268;
    L_C109008:;
    if ((v0_9 != 0x9D)) goto L_C109012;
    (((struct o10_uint *)0xC473CCC)->v) = 0x8;
    (((struct o1C_uint *)0xC473CCC)->v) = v0_1;
    goto L_C109268;
    L_C109012:;
    goto L_C109268;
    L_C109026:;
    (((struct o10_uint *)0xC473CCC)->v) = v0_1;
    if (((int)(*(int *)(((int)stk + 4))) >= 0)) goto L_C109034;
    goto L_C109268;
    L_C109034:;
    if (((int)(*(int *)(((int)stk + 4))) <= (int)0x78)) goto L_C109040;
    goto L_C109268;
    L_C109040:;
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    *(unsigned int *)(((int)stk + 12)) = ((((*(int *)(((int)stk + 4))) + 0x1) * 0x34) + 0xC2738B8);
    v0_6 = (0xC2738B8);
    v0_7 = (v0_2);
    v0_8 = (0x34);
    v0_10 = (v0_1);
    L_C1090BC:;
    if (((int)(*(int *)(((int)stk + 8))) <= (int)0x78)) goto L_C109074;
    if ((v0_7 != 0)) goto L_C1090CC;
    goto L_C109268;
    L_C1090CC:;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    *(unsigned int *)(((int)stk + 12)) = 0xC473358;
    *(unsigned int *)(((int)stk + 8)) = 0xC473358;
    v0_5 = (v0_2);
    if (((int)v0_7 <= 0)) goto L_C109110;
    L_C1090DA:;
    if (((*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x1) * v0_8) + v0_6) + 0x3))) != v0_10)) goto L_C1090FA;
    *(unsigned int *)(((v0_5 << 2) + 0xC473058)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
    v0_5 = ((v0_5 + 0x1));
    L_C1090FA:;
    v0_9 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 20)) = (v0_9 + 0x1);
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x4);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x4);
    if (((int)(v0_9 + 0x1) < (int)v0_7)) goto L_C1090DA;
    L_C109110:;
    if (((int)v0_5 <= 0)) goto L_C109148;
    v0_7 = (int)((int)(FUN_0c179ac0()) % (int)v0_5);
    v0_8 = *(int *)(((v0_7 << 2) + 0xC473058));
    v0_6 = (v0_8);
    v0_7 = (v0_7);
    if ((v0_8 != (*(int *)(((int)stk + 4))))) goto L_C10914A;
    v0_5 = (int)(v0_7 + 0x1) < (int)v0_5;
    v0_7 = ((v0_7 + 0x1));
    if (v0_5) goto L_C10913E;
    v0_7 = (v0_2);
    L_C10913E:;
    v0_6 = ((*(int *)(((v0_7 << 2) + 0xC473058))));
    L_C10914A:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_6;
    v0_7 = (v0_0);
    if ((v0_6 != 0)) goto L_C109158;
    goto L_C109268;
    L_C109158:;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    *(unsigned int *)((v0_0 + 0x0)) = v0_6;
    (((struct o20_uint *)0xC473CCC)->v) = v0_2;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    L_C109168:;
    v0_6 = ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
    goto L_C10923C;
    L_C109148:;
    v0_6 = (0xFFFFFFFF);
    goto L_C10914A;
    L_C109074:;
    v0_9 = *(int *)(((int)stk + 8));
    v0_5 = (((v0_9 + 0x1) * v0_8));
    if (((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x10))) != (*(signed char *)(((((v0_9 + 0x1) * v0_8) + v0_6) + 0x10))))) goto L_C1090B6;
    if (((int)(*(signed char *)(((v0_5 + v0_6) + 0x3))) > (int)0x6)) goto L_C1090B6;
    *(unsigned int *)(((v0_7 << 2) + 0xC473358)) = (*(int *)(((int)stk + 8)));
    v0_7 = ((v0_7 + 0x1));
    if (((int)(*(signed char *)(((v0_5 + v0_6) + 0x3))) <= (int)v0_10)) goto L_C1090B6;
    v0_10 = ((*(signed char *)(((v0_5 + v0_6) + 0x3))));
    L_C1090B6:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    goto L_C1090BC;
    L_C109016:;
    (((struct o10_uint *)0xC473CCC)->v) = v0_2;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    *(unsigned int *)((v0_0 + 0x0)) = 0xB6;
    goto L_C109168;
    L_C108F9E:;
    if (((int)(*(int *)(((int)stk + 16))) >= (int)0x7)) goto L_C108FAA;
    v0_11 = *(short *)((0xC29620E + (((*(int *)(((int)stk + 16))) + v0_5) * v0_6)));
    v0_9 = (v0_11);
    v0_10 = (0xC29620E);
    if ((v0_11 == 0xC0)) goto L_C108DD0;
    if ((v0_9 == 0xC1)) goto L_C108DD0;
    if ((v0_9 == 0xC2)) goto L_C108DD0;
    L_C108E66:;
    if (!((v0_4 == -1))) goto L_C108FAA;
    v0_11 = *(short *)((((((*(int *)(((int)stk + 16))) + v0_5) * v0_6) + v0_10) + 0x2));
    v0_9 = (v0_11);
    if ((v0_11 == 0xC0)) goto L_C108EA4;
    if ((v0_9 == 0xC1)) goto L_C108EA4;
    if ((v0_9 == 0xC2)) goto L_C108EA4;
    goto L_C108F3C;
    L_C108FAA:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    goto L_C108FB0;
    L_C108F3C:;
    if ((v0_4 != -1)) goto L_C108FAA;
    v0_9 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 20)) = (((v0_9 + v0_5) * v0_6) + v0_10);
    v0_11 = *(short *)(((((v0_9 + v0_5) * v0_6) + v0_10) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = v0_11;
    *(unsigned int *)(((int)stk + 20)) = (*(short *)(((((v0_9 + v0_5) * v0_6) + v0_10) + 0x2)));
    if ((v0_11 != (*(int *)(((int)stk + 4))))) goto L_C108F64;
    if (((*(int *)(((int)stk + 20))) == v0_7)) goto L_C108F72;
    L_C108F64:;
    if (((*(int *)(((int)stk + 12))) != v0_7)) goto L_C108F98;
    if (((*(int *)(((int)stk + 20))) != (*(int *)(((int)stk + 4))))) goto L_C108F98;
    L_C108F72:;
    v0_4 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + (*(short *)(((((v0_4 + v0_5) * v0_6) + v0_10) + 0xA))));
    *(unsigned int *)(((int)stk + 44)) = ((*(int *)(((int)stk + 44))) + (*(short *)(((((v0_4 + v0_5) * v0_6) + v0_10) + 0xC))));
    v0_4 = ((*(int *)(((int)stk + 8))));
    goto L_C108FAA;
    L_C108F98:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C108F9E;
    L_C108EA4:;
    *(unsigned int *)(((int)stk + 24)) = ((*(short *)((((((*(int *)(((int)stk + 16))) + v0_5) * v0_6) + v0_10) + 0x2))) - 192);
    *(unsigned int *)(((int)stk + 32)) = v0_2;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    *(unsigned int *)(((int)stk + 12)) = (((*(int *)(((int)stk + 24))) << 2) + 0xC290B8C);
    *(unsigned int *)(((int)stk + 48)) = ((((*(int *)(((int)stk + 16))) + v0_5) * v0_6) + v0_10);
    *(unsigned int *)(((int)stk + 24)) = ((((*(int *)(((int)stk + 16))) + v0_5) * v0_6) + v0_10);
    L_C108F2E:;
    if (((*(short *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + ((*(int *)(((int)stk + 32))) << 1)))) != -1)) goto L_C108EDE;
    goto L_C108F3C;
    L_C108EDE:;
    *(unsigned int *)(((int)stk + 36)) = (*(short *)(((*(int *)(((int)stk + 48))) + 0x0)));
    *(unsigned int *)(((int)stk + 28)) = (*(short *)(((*(int *)(((int)stk + 20))) + (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))))));
    if (((*(int *)(((int)stk + 36))) != (*(int *)(((int)stk + 4))))) goto L_C108EFC;
    if (((*(int *)(((int)stk + 28))) == v0_7)) goto L_C108F0A;
    L_C108EFC:;
    if (((*(int *)(((int)stk + 36))) != v0_7)) goto L_C108F22;
    if (((*(int *)(((int)stk + 28))) != (*(int *)(((int)stk + 4))))) goto L_C108F22;
    L_C108F0A:;
    *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + (*(short *)(((*(int *)(((int)stk + 24))) + 0xA))));
    *(unsigned int *)(((int)stk + 44)) = ((*(int *)(((int)stk + 44))) + (*(short *)(((*(int *)(((int)stk + 24))) + 0xC))));
    v0_4 = ((*(int *)(((int)stk + 8))));
    goto L_C108F3C;
    L_C108F22:;
    *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x1);
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x2);
    goto L_C108F2E;
    L_C108DD0:;
    v0_9 = *(short *)((((((*(int *)(((int)stk + 16))) + v0_5) * v0_6) + v0_10) + 0x0));
    *(unsigned int *)(((int)stk + 24)) = (v0_9 - 192);
    *(unsigned int *)(((int)stk + 32)) = v0_2;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = (((v0_9 - 192) << 2) + 0xC290B8C);
    *(unsigned int *)(((int)stk + 48)) = (((((*(int *)(((int)stk + 16))) + v0_5) * v0_6) + v0_10) + 0x2);
    *(unsigned int *)(((int)stk + 24)) = ((((*(int *)(((int)stk + 16))) + v0_5) * v0_6) + v0_10);
    L_C108E58:;
    if (((*(short *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + ((*(int *)(((int)stk + 32))) << 1)))) != -1)) goto L_C108E0C;
    goto L_C108E66;
    L_C108E0C:;
    v0_9 = *(short *)(((*(int *)(((int)stk + 20))) + (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))));
    *(unsigned int *)(((int)stk + 36)) = v0_9;
    v0_11 = *(short *)(((*(int *)(((int)stk + 48))) + 0x0));
    *(unsigned int *)(((int)stk + 28)) = v0_11;
    v0_11 = (v0_11);
    if ((v0_9 != (*(int *)(((int)stk + 4))))) goto L_C108E26;
    if ((v0_11 == v0_7)) goto L_C108E34;
    L_C108E26:;
    if (((*(int *)(((int)stk + 36))) != v0_7)) goto L_C108E4C;
    if (((*(int *)(((int)stk + 28))) != (*(int *)(((int)stk + 4))))) goto L_C108E4C;
    L_C108E34:;
    *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + (*(short *)(((*(int *)(((int)stk + 24))) + 0xA))));
    *(unsigned int *)(((int)stk + 44)) = ((*(int *)(((int)stk + 44))) + (*(short *)(((*(int *)(((int)stk + 24))) + 0xC))));
    v0_4 = ((*(int *)(((int)stk + 8))));
    goto L_C108E66;
    L_C108E4C:;
    *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x1);
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x2);
    goto L_C108E58;
}

int FUN_0c10eef0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    int t5;
    register int t6;
    int t7;
    register int t8;
    int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;

    t11 = *(signed char *)((a4 + 0x14));
    if (t11 != 0) {
        if (t11 != 1) {
            if (t11 != 2) {
                if (t11 == 3) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    FUN_0c118584(((((struct o0_int *)0xC474744)->v)));
                    t12 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t12 + 0x1);
                    t13 = (short)(t12 + 0x1);
                    if ((int)(short)(t12 + 0x1) <= (int)0xA) {
                    } else {
                        (((struct o14_uchar *)(((((struct o4_int *)0xC474BC4)->v))))->v) = 0x63;
                        (((struct o4_uint *)0xC474BC4)->v) = 0x0;
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                        t13 = 0x14;
                    }
                    return t13;
                }
                if (t11 == 4) {
                    t12 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t12 + 0x1);
                    t13 = (short)(t12 + 0x1);
                    if ((int)(short)(t12 + 0x1) <= (int)0xA) {
                    } else {
                        (((struct o14_uchar *)(((((struct o4_int *)0xC474BC4)->v))))->v) = 0x63;
                        (((struct o4_uint *)0xC474BC4)->v) = 0x0;
                        (((struct o14_uchar *)(a4))->v) = 0x63;
                        t13 = 0x14;
                    }
                    return t13;
                }
                if (t11 == 10) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t12 = *(signed char *)((a4 + 0x15));
                    if (t12 != 0) {
                        if (t12 != 1) {
                            t13 = t12;
                            if (t12 != 2) {
                            } else {
                                (((struct o4_uint *)0xC474BC4)->v) = (FUN_0c11113c());
                                (((struct o14_uchar *)(a4))->v) = 0x2;
                                (((struct o15_uchar *)(a4))->v) = 0x0;
                                t13 = 0x15;
                            }
                            t12 = t13;
                        } else {
                            t13 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t13 + 0x1);
                            t14 = (short)(t13 + 0x1);
                            if ((int)(short)(t13 + 0x1) <= (int)0x18) {
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                *(unsigned short *)((a4 + 0x1E)) = 0xF;
                                t14 = 0xF;
                            }
                            t12 = t14;
                        }
                        t13 = t12;
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        (((struct o14_uchar *)(((((struct o4_int *)0xC474BC4)->v))))->v) = 0x63;
                        (((struct o4_uint *)0xC474BC4)->v) = 0x0;
                        t12 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t12 + 0x1);
                        t14 = (short)(t12 + 0x1);
                        if ((int)(short)(t12 + 0x1) <= (int)0x18) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0xF;
                            t14 = 0xF;
                        }
                        t13 = t14;
                    }
                    return t13;
                }
                if (t11 == 11) {
                    t12 = *(signed char *)((a4 + 0x15));
                    if (t12 != 0) {
                        if (t12 != 1) {
                            t13 = t12;
                            if (t12 != 2) {
                            } else {
                                (((struct o4_uint *)0xC474BC4)->v) = (FUN_0c11113c());
                                (((struct o14_uchar *)(a4))->v) = 0x2;
                                (((struct o15_uchar *)(a4))->v) = 0x0;
                                t13 = 0x15;
                            }
                            t12 = t13;
                        } else {
                            t13 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t13 + 0x1);
                            t14 = (short)(t13 + 0x1);
                            if ((int)(short)(t13 + 0x1) <= (int)0x18) {
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                *(unsigned short *)((a4 + 0x1E)) = 0xF;
                                t14 = 0xF;
                            }
                            t12 = t14;
                        }
                        t13 = t12;
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        (((struct o14_uchar *)(((((struct o4_int *)0xC474BC4)->v))))->v) = 0x63;
                        (((struct o4_uint *)0xC474BC4)->v) = 0x0;
                        t12 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t12 + 0x1);
                        t14 = (short)(t12 + 0x1);
                        if ((int)(short)(t12 + 0x1) <= (int)0x18) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0xF;
                            t14 = 0xF;
                        }
                        t13 = t14;
                    }
                    return t13;
                }
                if (t11 == 20) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t12 = *(signed char *)((a4 + 0x15));
                    if (t12 != 0) {
                        if (t12 != 1) {
                            t13 = t12;
                            if (t12 != 2) {
                            } else {
                                (((struct o14_uchar *)(a4))->v) = 0x2;
                                t13 = 0x14;
                            }
                            t12 = t13;
                        } else {
                            t13 = *(signed char *)((0x14 + (*(int *)0xC474C14)));
                            t14 = t13;
                            if (t13 == 99) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t14 = 0x15;
                            }
                            t12 = t14;
                        }
                        t13 = t12;
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t12 = *(int *)((((*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) << 2) + 0xC474410));
                        t14 = FUN_0c11ea4e(0x4000);
                        if (((int)t14 >= (int)0x5) && (t0 = *(int *)(((t12 << 2) + 0xC473D04)), (t0 & 0x20) == 0)) {
                            t0 = FUN_0c112910(0x2, t12);
                            *(unsigned int *)0xC474C14 = t0;
                            t14 = t0;
                        } else {
                            if ((int)(*(int *)(((t12 << 2) + 0xC474104))) < (int)0x1) {
                                t0 = FUN_0c112910(0x3, t12);
                                *(unsigned int *)0xC474C14 = t0;
                                t15 = t0;
                            } else {
                                t0 = 0x0;
                                if (((*(int *)(((t12 << 2) + 0xC473D04))) & 0x20) != 0) {
                                    t0 = 0x1;
                                }
                                t15 = FUN_0c112910(t0, t12);
                                *(unsigned int *)0xC474C14 = t15;
                            }
                            t14 = t15;
                        }
                        t13 = t14;
                    }
                    return t13;
                }
                if (t11 == 21) {
                    t0 = *(signed char *)((a4 + 0x15));
                    if (t0 != 0) {
                        if (t0 != 1) {
                            t12 = t0;
                            if (t0 != 2) {
                            } else {
                                (((struct o14_uchar *)(a4))->v) = 0x2;
                                t12 = 0x14;
                            }
                            t0 = t12;
                        } else {
                            t12 = *(signed char *)((0x14 + (*(int *)0xC474C14)));
                            t13 = t12;
                            if (t12 == 99) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t13 = 0x15;
                            }
                            t0 = t13;
                        }
                        t12 = t0;
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t0 = *(int *)((((*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) << 2) + 0xC474410));
                        t13 = FUN_0c11ea4e(0x4000);
                        if (((int)t13 >= (int)0x5) && (t1 = *(int *)(((t0 << 2) + 0xC473D04)), (t1 & 0x20) == 0)) {
                            t1 = FUN_0c112910(0x2, t0);
                            *(unsigned int *)0xC474C14 = t1;
                            t13 = t1;
                        } else {
                            if ((int)(*(int *)(((t0 << 2) + 0xC474104))) < (int)0x1) {
                                t1 = FUN_0c112910(0x3, t0);
                                *(unsigned int *)0xC474C14 = t1;
                                t14 = t1;
                            } else {
                                t1 = 0x0;
                                if (((*(int *)(((t0 << 2) + 0xC473D04))) & 0x20) != 0) {
                                    t1 = 0x1;
                                }
                                t15 = FUN_0c112910(t1, t0);
                                *(unsigned int *)0xC474C14 = t15;
                                t14 = t15;
                            }
                            t13 = t14;
                        }
                        t12 = t13;
                    }
                    return t12;
                }
                if (t11 == 80) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                t0 = t11;
                if (t11 == 99) {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    t0 = 0x22;
                }
                return t0;
            }
            t0 = FUN_0c104cc8(0x2000);
            if (t0 != 0) {
                FUN_0c05aab6(0x0, 0x6);
                (((struct o14_uint *)0xC474744)->v) = ((((struct o0_int *)0xC474744)->v));
                t0 = (((struct o0_int *)0xC474744)->v);
                (((struct o0_uint *)0xC474744)->v) = (t0 - 1);
                if ((int)(t0 - 1) < 0) {
                    (((struct o0_uint *)0xC474744)->v) = 0x4;
                }
            }
            t0 = FUN_0c104cc8(0x1000);
            if (t0 != 0) {
                FUN_0c05aab6(0x0, 0x6);
                (((struct o14_uint *)0xC474744)->v) = ((((struct o0_int *)0xC474744)->v));
                t0 = (((struct o0_int *)0xC474744)->v);
                (((struct o0_uint *)0xC474744)->v) = (t0 + 0x1);
                if ((int)(t0 + 0x1) > (int)0x4) {
                    (((struct o0_uint *)0xC474744)->v) = 0x0;
                }
            }
            t0 = FUN_0c104cc8(0x3000);
            if ((t0 != 0) && (t2 = (((struct o0_int *)0xC474744)->v), (int)t2 < (int)0x4)) {
                FUN_0c05a080(0x13, 0x0);
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)(((0xC473C88 + (t0 << 2)) + 0x0)) = (*(int *)((0xC473C74 + (t0 << 2))));
                if ((int)(*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) < 0) {
                    t0 = (((struct o0_int *)0xC474744)->v);
                    *(unsigned int *)((0xC473C74 + (t0 << 2))) = (*(int *)((0xC29105C + (t0 << 2))));
                }
                t0 = (((struct o0_int *)0xC474744)->v);
                if ((int)(*(int *)((0xC473C74 + (t0 << 2)))) > (int)(*(int *)((0xC29105C + (t0 << 2))))) {
                    *(unsigned int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2))) = 0x0;
                }
                t0 = FUN_0c104cc8(0x2000);
                if (t0 != 0) {
                    return FUN_0c10feda(0x0);
                }
                return FUN_0c10feda(0x1);
            }
            if ((int)(*(short *)((a4 + 0x1E))) > 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            }
            if ((*(short *)((a4 + 0x1E))) != 0) {
                t0 = FUN_0c05f22c(0x101);
                if (t0 != 0) {
                    t0 = (((struct o0_int *)0xC474744)->v);
                    if (t0 != 0) {
                        if (t0 != 4) {
                            t0 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                            t1 = t0;
                            if (t0 == 0) {
                            } else {
                                t2 = (((struct o0_int *)0xC474744)->v);
                                if ((int)t2 >= (int)0x4) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t11 = 0x14;
                                } else {
                                    (((struct o14_uint *)0xC474744)->v) = t2;
                                    (((struct o0_uint *)0xC474744)->v) = 0x4;
                                    t11 = t0;
                                }
                                t1 = t11;
                            }
                            t0 = t1;
                        } else {
                            FUN_0c05aab6(0x0, 0x3);
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t0 = 0x14;
                        }
                        t1 = t0;
                    } else {
                        t0 = *(int *)((((*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) << 2) + 0xC474410));
                        if (((*(signed char *)((0xC2738B8 + ((t0 + 0x1) * 0x34)))) != 2) && ((int)t0 <= (int)0x78)) {
                            FUN_0c05aab6(0x0, 0x3);
                            (((struct o14_uchar *)(a4))->v) = 0x14;
                            t0 = 0x14;
                        } else {
                            t2 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                            t11 = t2;
                            if (t2 == 0) {
                            } else {
                                t12 = (((struct o0_int *)0xC474744)->v);
                                if ((int)t12 >= (int)0x4) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t13 = 0x14;
                                } else {
                                    (((struct o14_uint *)0xC474744)->v) = t12;
                                    (((struct o0_uint *)0xC474744)->v) = 0x4;
                                    t13 = t2;
                                }
                                t11 = t13;
                            }
                            t0 = t11;
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                    t2 = t1;
                    if (t1 == 0) {
                    } else {
                        t11 = (((struct o0_int *)0xC474744)->v);
                        if ((int)t11 >= (int)0x4) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t12 = 0x14;
                        } else {
                            (((struct o14_uint *)0xC474744)->v) = t11;
                            (((struct o0_uint *)0xC474744)->v) = 0x4;
                            t12 = t1;
                        }
                        t2 = t12;
                    }
                    t0 = t2;
                }
                return t0;
            }
            if ((int)((((struct o0_int *)0xC474744)->v)) >= (int)0x4) {
                t0 = FUN_0c05f22c(0x101);
                if (t0 != 0) {
                    t0 = (((struct o0_int *)0xC474744)->v);
                    if (t0 != 0) {
                        if (t0 != 4) {
                            t0 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                            t1 = t0;
                            if (t0 == 0) {
                            } else {
                                t2 = (((struct o0_int *)0xC474744)->v);
                                if ((int)t2 >= (int)0x4) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t11 = 0x14;
                                } else {
                                    (((struct o14_uint *)0xC474744)->v) = t2;
                                    (((struct o0_uint *)0xC474744)->v) = 0x4;
                                    t11 = t0;
                                }
                                t1 = t11;
                            }
                            t0 = t1;
                        } else {
                            FUN_0c05aab6(0x0, 0x3);
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t0 = 0x14;
                        }
                        t1 = t0;
                    } else {
                        t0 = *(int *)((((*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) << 2) + 0xC474410));
                        if (((*(signed char *)((0xC2738B8 + ((t0 + 0x1) * 0x34)))) != 2) && ((int)t0 <= (int)0x78)) {
                            FUN_0c05aab6(0x0, 0x3);
                            (((struct o14_uchar *)(a4))->v) = 0x14;
                            t0 = 0x14;
                        } else {
                            t2 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                            t11 = t2;
                            if (t2 == 0) {
                            } else {
                                t12 = (((struct o0_int *)0xC474744)->v);
                                if ((int)t12 >= (int)0x4) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t13 = 0x14;
                                } else {
                                    (((struct o14_uint *)0xC474744)->v) = t12;
                                    (((struct o0_uint *)0xC474744)->v) = 0x4;
                                    t13 = t2;
                                }
                                t11 = t13;
                            }
                            t0 = t11;
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                    t2 = t1;
                    if (t1 == 0) {
                    } else {
                        t11 = (((struct o0_int *)0xC474744)->v);
                        if ((int)t11 >= (int)0x4) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t12 = 0x14;
                        } else {
                            (((struct o14_uint *)0xC474744)->v) = t11;
                            (((struct o0_uint *)0xC474744)->v) = 0x4;
                            t12 = t1;
                        }
                        t2 = t12;
                    }
                    t0 = t2;
                }
                return t0;
            }
            t0 = FUN_0c104cc8(0x800);
            if ((t0 != 0) && (t3 = (((struct o0_int *)0xC474744)->v), t4 = *(int *)((0xC29105C + (t3 << 2))), (int)t4 >= (int)0x1)) {
                FUN_0c05a080(0x13, 0x0);
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)(((0xC473C88 + (t0 << 2)) + 0x0)) = (*(int *)((0xC473C74 + (t0 << 2))));
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)((0xC473C74 + (t0 << 2))) = ((*(int *)((0xC473C74 + (t0 << 2)))) - 1);
                if ((int)(*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) >= 0) {
                    return FUN_0c10feda(0x0);
                }
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)((0xC473C74 + (t0 << 2))) = (*(int *)((0xC29105C + (t0 << 2))));
                return FUN_0c10feda(0x1);
            }
            t0 = FUN_0c104cc8(0x400);
            if ((t0 != 0) && (t5 = (((struct o0_int *)0xC474744)->v), t6 = *(int *)((0xC29105C + (t5 << 2))), (int)t6 >= (int)0x1)) {
                FUN_0c05a080(0x13, 0x0);
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)(((0xC473C88 + (t0 << 2)) + 0x0)) = (*(int *)((0xC473C74 + (t0 << 2))));
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)((0xC473C74 + (t0 << 2))) = ((*(int *)((0xC473C74 + (t0 << 2)))) + 0x1);
                t0 = (((struct o0_int *)0xC474744)->v);
                if ((int)(*(int *)((0xC473C74 + (t0 << 2)))) > (int)(*(int *)((0xC29105C + (t0 << 2))))) {
                    *(unsigned int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2))) = 0x0;
                    return FUN_0c10feda(0x0);
                }
                return FUN_0c10feda(0x1);
            }
            t0 = FUN_0c104cc8(0x8);
            if ((t0 != 0) && (t7 = (((struct o0_int *)0xC474744)->v), t8 = *(int *)((0xC29105C + (t7 << 2))), (int)t8 >= (int)0x1)) {
                FUN_0c05a080(0x13, 0x0);
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)(((0xC473C88 + (t0 << 2)) + 0x0)) = (*(int *)((0xC473C74 + (t0 << 2))));
                t0 = (((struct o0_int *)0xC474744)->v);
                t1 = *(int *)((0xC473C74 + (t0 << 2)));
                if (t1 == 0) {
                    t2 = (((struct o0_int *)0xC474744)->v);
                    *(unsigned int *)((0xC473C74 + (t2 << 2))) = (*(int *)((0xC29105C + (t2 << 2))));
                    return FUN_0c10feda(0x1);
                }
                *(unsigned int *)((0xC473C74 + (t0 << 2))) = (t1 - 10);
                if ((int)(*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) < 0) {
                    *(unsigned int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2))) = 0x0;
                }
                return FUN_0c10feda(0x0);
            }
            t0 = FUN_0c104cc8(0x4);
            if ((t0 != 0) && (t9 = (((struct o0_int *)0xC474744)->v), t10 = *(int *)((0xC29105C + (t9 << 2))), (int)t10 >= (int)0x1)) {
                FUN_0c05a080(0x13, 0x0);
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)(((0xC473C88 + (t0 << 2)) + 0x0)) = (*(int *)((0xC473C74 + (t0 << 2))));
                t0 = (((struct o0_int *)0xC474744)->v);
                if ((*(int *)((0xC473C74 + (t0 << 2)))) == (*(int *)((0xC29105C + (t0 << 2))))) {
                    *(unsigned int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2))) = 0x0;
                    return FUN_0c10feda(0x0);
                }
                t0 = (((struct o0_int *)0xC474744)->v);
                *(unsigned int *)((0xC473C74 + (t0 << 2))) = ((*(int *)((0xC473C74 + (t0 << 2)))) + 0xA);
                t0 = (((struct o0_int *)0xC474744)->v);
                if ((int)(*(int *)((0xC473C74 + (t0 << 2)))) > (int)(*(int *)((0xC29105C + (t0 << 2))))) {
                    t0 = (((struct o0_int *)0xC474744)->v);
                    *(unsigned int *)((0xC473C74 + (t0 << 2))) = (*(int *)((0xC29105C + (t0 << 2))));
                }
                return FUN_0c10feda(0x1);
            }
            t0 = FUN_0c05f22c(0x101);
            if (t0 != 0) {
                t0 = (((struct o0_int *)0xC474744)->v);
                if (t0 != 0) {
                    if (t0 != 4) {
                        t0 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                        t1 = t0;
                        if (t0 == 0) {
                        } else {
                            t2 = (((struct o0_int *)0xC474744)->v);
                            if ((int)t2 >= (int)0x4) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t3 = 0x14;
                            } else {
                                (((struct o14_uint *)0xC474744)->v) = t2;
                                (((struct o0_uint *)0xC474744)->v) = 0x4;
                                t3 = t0;
                            }
                            t1 = t3;
                        }
                        t0 = t1;
                    } else {
                        FUN_0c05aab6(0x0, 0x3);
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    t1 = t0;
                } else {
                    t0 = *(int *)((((*(int *)((0xC473C74 + (((((struct o0_int *)0xC474744)->v)) << 2)))) << 2) + 0xC474410));
                    if (((*(signed char *)((0xC2738B8 + ((t0 + 0x1) * 0x34)))) != 2) && ((int)t0 <= (int)0x78)) {
                        FUN_0c05aab6(0x0, 0x3);
                        (((struct o14_uchar *)(a4))->v) = 0x14;
                        t0 = 0x14;
                    } else {
                        t2 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                        t3 = t2;
                        if (t2 == 0) {
                        } else {
                            t4 = (((struct o0_int *)0xC474744)->v);
                            if ((int)t4 >= (int)0x4) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t5 = 0x14;
                            } else {
                                (((struct o14_uint *)0xC474744)->v) = t4;
                                (((struct o0_uint *)0xC474744)->v) = 0x4;
                                t5 = t2;
                            }
                            t3 = t5;
                        }
                        t0 = t3;
                    }
                    t1 = t0;
                }
                t0 = t1;
            } else {
                t1 = FUN_0c104de4(((((struct o0_int *)0xC474744)->v)), 0x4);
                t2 = t1;
                if (t1 == 0) {
                } else {
                    t3 = (((struct o0_int *)0xC474744)->v);
                    if ((int)t3 >= (int)0x4) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t4 = 0x14;
                    } else {
                        (((struct o14_uint *)0xC474744)->v) = t3;
                        (((struct o0_uint *)0xC474744)->v) = 0x4;
                        t4 = t1;
                    }
                    t2 = t4;
                }
                t0 = t2;
            }
            return t0;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    t0 = *(signed char *)((0x14 + ((((struct o0_int *)0xC474BC4)->v))));
    t1 = t0;
    if (t0 != 22) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = FUN_0c11113c();
        (((struct o4_uint *)0xC474BC4)->v) = t0;
        t1 = t0;
    }
    return t1;
}


int FUN_0c0f2060(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t28;
    register float u15;
    register int t46;
    register int t62;
    register int t64;
    register int t66;
    register int t71;
    register int t73;
    register int t84;
    register int t88;
    register int t94;
    register int t96;
    register int t115;
    register int t118;
    register int t124;
    register int t121;
    register int t126;
    register int t130;
    register int t133;
    register int t151;
    register int t154;
    register int t156;
    register int t158;
    register int t162;
    register int t172;
    register int t175;
    register int t176;
    register int t177;
    register int t181;
    register int t182;
    register int t183;
    register int t184;
    register int t185;
    register int t202;
    register float u189;
    register int t220;
    register int t237;
    register int t239;
    register int t241;
    register int t246;
    register int t248;
    register int t259;
    register int t263;
    register int t269;
    register int t271;
    register int t290;
    register int t293;
    register int t299;
    register int t296;
    register int t301;
    register int t305;
    register int t308;
    register int t326;
    register int t329;
    register int t331;
    register int t333;
    register int t337;
    register int t347;
    register int t33;
    register float u12;
    register float u13;
    register float u29;
    register float u30;
    register float u25;
    register float u26;
    register float u21;
    register float u22;
    register int t100;
    register int t207;
    register float u186;
    register float u187;
    register float u203;
    register float u204;
    register float u199;
    register float u200;
    register float u195;
    register float u196;
    register int t275;

    t0 = *(signed char *)0xC54098C;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = *(signed char *)0xC54098E;
        t2 = *(signed char *)0xC54223C;
        t3 = *(signed char *)0xC54098D;
        if (t3 != 0) {
            if (t3 != 1) {
                if (t3 != 2) {
                    if (t3 != 3) {
                        if (t3 == 4) {
                            if (t1 != 0) {
                                if (t1 != 1) {
                                    if (t1 != 2) {
                                        if (t1 != 3) {
                                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                            (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                                            return FUN_0c0b507a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x13, 0x0);
                                        }
                                        t33 = FUN_0c0f1c54(t2);
                                        if (t33 == 0) {
                                        } else {
                                            t7 = *(signed char *)0xC54098E;
                                            (((struct o2_uchar *)0xC54098C)->v) = (t7 + 0x1);
                                            t8 = 0xC0F23E8;
                                            t9 = (t7 + 0x1);
                                            t10 = 0x0;
                                            t11 = 0xC540978;
                                            for (;;) {
                                                if ((int)t10 >= (int)0x4) {
                                                    break;
                                                }
                                                t11 = (t10 * 0x3938);
                                                t11 = (t11 + 0xC532498);
                                                t8 = (*(signed char *)((t11 + 0x2)));
                                                t28 = t9;
                                                if (t8 != 13) {
                                                    t8 = 0x28;
                                                    u12 = -100.0f;
                                                    u13 = (float)t10;
                                                    u15 = u12;
                                                    u15 = u15 + 100.0f * u13;
                                                    u12 = u15;
                                                    *(float *)((t11 + t8)) = u12;
                                                    t8 = 0x2C;
                                                    *(float *)((t11 + t8)) = 800.0f;
                                                    t8 = 0x30;
                                                    *(float *)((t11 + t8)) = 1000.0f;
                                                    t8 = 0x3714;
                                                    t9 = (*(signed char *)((t11 + t8)));
                                                    t28 = t9;
                                                    if (t9 != 0) {
                                                        t8 = 0x160;
                                                        u13 = 0.0f;
                                                        u12 = (*(float *)((t11 + t8)));
                                                        if (u12 > u13) {
                                                            t8 = (FUN_0c085cac(((t10 * 0x3938) + 0xC532498), 0x0, 0x0));
                                                        } else {
                                                            t28 = t9;
                                                            u21 = u12;
                                                            u22 = u13;
                                                        }
                                                        u25 = u21;
                                                        u26 = u22;
                                                    } else {
                                                        u25 = u12;
                                                        u26 = u13;
                                                    }
                                                    u29 = u25;
                                                    u30 = u26;
                                                } else {
                                                    u29 = u12;
                                                    u30 = u13;
                                                }
                                                u12 = u29;
                                                u13 = u30;
                                                t10 = (t10 + 0x1);
                                                t9 = t28;
                                            }
                                            t33 = t8;
                                        }
                                        return t33;
                                    }
                                    t46 = (((struct o8_short *)0xC54098C)->v);
                                    (((struct o8_ushort *)0xC54098C)->v) = (t46 - 1);
                                    if ((int)(short)(t46 - 1) <= 0) {
                                        (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                        FUN_0c0f1bac(0x1);
                                        *(unsigned char *)0xC540F98 = 0x1;
                                    }
                                    if (((((struct o8_short *)0xC54098C)->v)) == 0x110) {
                                        FUN_0c05b052(0x1E, 0x0);
                                    }
                                    t62 = (((struct o8_short *)0xC54098C)->v);
                                    if (t62 != 0xF0) {
                                        return t62;
                                    }
                                    FUN_0c059c54(0xE);
                                    return FUN_0c059d30();
                                }
                                t64 = (((struct o8_short *)0xC54098C)->v);
                                (((struct o8_ushort *)0xC54098C)->v) = (t64 - 1);
                                t66 = (short)(t64 - 1);
                                if ((int)(short)(t64 - 1) > 0) {
                                } else {
                                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                    (((struct o8_ushort *)0xC54098C)->v) = 0x12C;
                                    *(unsigned char *)0xC542235 = 0x0;
                                    t66 = 0x3D;
                                }
                                return t66;
                            }
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            FUN_0c056e44(0x19, 0x7, a6);
                            (((struct o8_ushort *)0xC54098C)->v) = 0x12C;
                            t71 = (((struct o8_short *)0xC54098C)->v);
                            (((struct o8_ushort *)0xC54098C)->v) = (t71 - 1);
                            t73 = (short)(t71 - 1);
                            if ((int)(short)(t71 - 1) > 0) {
                            } else {
                                (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                (((struct o8_ushort *)0xC54098C)->v) = 0x12C;
                                *(unsigned char *)0xC542235 = 0x0;
                                t73 = 0x3D;
                            }
                            return t73;
                        }
                        if (t3 == 5) {
                            if (t1 != 0) {
                                if (t1 != 1) {
                                    if (t1 != 2) {
                                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                        FUN_0c0f1d14(0x3, 0x0);
                                        *(unsigned char *)0xC542235 = 0x2;
                                        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
                                        t84 = FUN_0c042fe0();
                                        if (t84 != 0) {
                                            FUN_0c059c7a(0x13, 0x0);
                                        }
                                        return FUN_0c0f1c1c(0xA);
                                    }
                                    t88 = *(signed char *)0xC54098F;
                                    if (t88 != 0) {
                                        if (t88 != 1) {
                                            return t88;
                                        }
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x63;
                                        (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                                        return FUN_0c0f1c1c(0x0);
                                    }
                                    (((struct o3_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098F) + 0x1);
                                    FUN_0c0b507a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x40, 0x0);
                                    if ((*(signed char *)0xC54235E) != 0) {
                                        return FUN_0c059e60((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x18);
                                    }
                                    return 0x166;
                                }
                                t94 = FUN_0c03ffbe();
                                if (t94 != 0) {
                                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                    (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                                    t100 = 0x17;
                                } else {
                                    t96 = (((struct o8_short *)0xC54098C)->v);
                                    (((struct o8_ushort *)0xC54098C)->v) = (t96 - 1);
                                    t100 = (short)(t96 - 1);
                                    if ((int)(short)(t96 - 1) >= 0) {
                                    } else {
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x63;
                                        (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                                        t100 = 0x17;
                                    }
                                }
                                return t100;
                            }
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            if ((*(signed char *)0xC54235E) != 0) {
                                FUN_0c056e44(0x19, 0x8, a6);
                            }
                            (((struct o8_ushort *)0xC54098C)->v) = 0x258;
                            return 0x258;
                        }
                        if (t3 == 6) {
                            return t3;
                        }
                        if (t3 == 7) {
                            FUN_0c0f1bac(t2);
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                            t115 = FUN_0c0f1c54(((*(signed char *)0xC54223C) + 0x2));
                            if (t115 != 0) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                return FUN_0c0d02a6();
                            }
                            return t115;
                        }
                        if (t3 == 8) {
                            t118 = FUN_0c0f1c54(((*(signed char *)0xC54223C) + 0x2));
                            if (t118 != 0) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                return FUN_0c0d02a6();
                            }
                            return t118;
                        }
                        
                        return t3;
                    }
                    if (t1 != 0) {
                        if (t1 != 1) {
                            if (t1 != 2) {
                                t124 = t1;
                                if (t1 != 3) {
                                } else {
                                    t121 = (((struct o8_short *)0xC54098C)->v);
                                    (((struct o8_ushort *)0xC54098C)->v) = (t121 - 1);
                                    t124 = (short)(t121 - 1);
                                    if ((int)(short)(t121 - 1) > 0) {
                                    } else {
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                        t124 = 0x16;
                                    }
                                }
                                return t124;
                            }
                            t126 = *(signed char *)0xC54098F;
                            (((struct o3_uchar *)0xC54098C)->v) = (t126 + 0x1);
                            if ((int)(signed char)(t126 + 0x1) >= (int)0x3) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                return FUN_0c0f1d14(0x2, 0x1);
                            }
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            (((struct o8_ushort *)0xC54098C)->v) = 0x78;
                            return 0x78;
                        }
                        t130 = FUN_0c0f1ee8((*(signed char *)0xC54098F));
                        if (t130 != 0) {
                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                        }
                        t133 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t133 - 1);
                        if ((int)(short)(t133 - 1) > 0) {
                            return (short)(t133 - 1);
                        }
                    } else {
                        (((struct o8_ushort *)0xC54098C)->v) = 0xA8C;
                        (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                        (((struct o4_uchar *)0xC54098C)->v) = 0x0;
                        FUN_0c0f1d14((*(signed char *)0xC54098F), 0x0);
                        if ((*(signed char *)0xC54098F) != 0) {
                            FUN_0c0f1c90((*(signed char *)0xC54098F));
                            FUN_0c0f1d14(((*(signed char *)0xC54098F) - 1), 0x1);
                            FUN_0c0f1a68((*(signed char *)0xC54098F));
                        }
                        FUN_0c0f1d90((*(signed char *)0xC54098F));
                        t151 = FUN_0c0f1ee8((*(signed char *)0xC54098F));
                        if (t151 != 0) {
                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                        }
                        t154 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t154 - 1);
                        if ((int)(short)(t154 - 1) > 0) {
                            return (short)(t154 - 1);
                        }
                    }
                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                    return FUN_0c0f1e8c();
                }
                t156 = FUN_0c042fe0();
                t158 = t156;
                if (t156 == 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                    (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                    (((struct o4_uchar *)0xC54098C)->v) = 0x0;
                    t158 = 0x18;
                }
                return t158;
            }
            t162 = FUN_0c0f1c54((*(signed char *)0xC54223C));
            if (t162 == 0) {
                return t162;
            }
        } else {
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            (((struct o3_uchar *)0xC54098C)->v) = 0x0;
            FUN_0c0f1bac(0x0);
            FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
            FUN_0c0f1c90((*(signed char *)0xC54098F));
            t172 = FUN_0c0f1c54((*(signed char *)0xC54223C));
            if (t172 == 0) {
                return t172;
            }
        }
    } else {
        (((struct o0_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098C) + 0x1);
        (((struct o18_uint *)0xC540A20)->v) = 0x0;
        (((struct o0_uchar *)0xC540A20)->v) = 0x0;
        (((struct o1_uchar *)0xC54098C)->v) = 0x0;
        t175 = *(signed char *)0xC54098E;
        t176 = *(signed char *)0xC54223C;
        t177 = *(signed char *)0xC54098D;
        if (t177 != 0) {
            if (t177 != 1) {
                if (t177 != 2) {
                    if (t177 != 3) {
                        if (t177 == 4) {
                            if (t175 != 0) {
                                if (t175 != 1) {
                                    if (t175 != 2) {
                                        if (t175 != 3) {
                                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                            (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                                            return FUN_0c0b507a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x13, 0x0);
                                        }
                                        t207 = FUN_0c0f1c54(t176);
                                        if (t207 == 0) {
                                        } else {
                                            t181 = *(signed char *)0xC54098E;
                                            (((struct o2_uchar *)0xC54098C)->v) = (t181 + 0x1);
                                            t182 = 0xC0F23E8;
                                            t183 = (t181 + 0x1);
                                            t184 = 0x0;
                                            t185 = 0xC540978;
                                            for (;;) {
                                                if ((int)t184 >= (int)0x4) {
                                                    break;
                                                }
                                                t185 = (t184 * 0x3938);
                                                t185 = (t185 + 0xC532498);
                                                t182 = (*(signed char *)((t185 + 0x2)));
                                                t202 = t183;
                                                if (t182 != 13) {
                                                    t182 = 0x28;
                                                    u186 = -100.0f;
                                                    u187 = (float)t184;
                                                    u189 = u186;
                                                    u189 = u189 + 100.0f * u187;
                                                    u186 = u189;
                                                    *(float *)((t185 + t182)) = u186;
                                                    t182 = 0x2C;
                                                    *(float *)((t185 + t182)) = 800.0f;
                                                    t182 = 0x30;
                                                    *(float *)((t185 + t182)) = 1000.0f;
                                                    t182 = 0x3714;
                                                    t183 = (*(signed char *)((t185 + t182)));
                                                    t202 = t183;
                                                    if (t183 != 0) {
                                                        t182 = 0x160;
                                                        u187 = 0.0f;
                                                        u186 = (*(float *)((t185 + t182)));
                                                        if (u186 > u187) {
                                                            t182 = (FUN_0c085cac(((t184 * 0x3938) + 0xC532498), 0x0, 0x0));
                                                        } else {
                                                            t202 = t183;
                                                            u195 = u186;
                                                            u196 = u187;
                                                        }
                                                        u199 = u195;
                                                        u200 = u196;
                                                    } else {
                                                        u199 = u186;
                                                        u200 = u187;
                                                    }
                                                    u203 = u199;
                                                    u204 = u200;
                                                } else {
                                                    u203 = u186;
                                                    u204 = u187;
                                                }
                                                u186 = u203;
                                                u187 = u204;
                                                t184 = (t184 + 0x1);
                                                t183 = t202;
                                            }
                                            t207 = t182;
                                        }
                                        return t207;
                                    }
                                    t220 = (((struct o8_short *)0xC54098C)->v);
                                    (((struct o8_ushort *)0xC54098C)->v) = (t220 - 1);
                                    if ((int)(short)(t220 - 1) <= 0) {
                                        (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                        FUN_0c0f1bac(0x1);
                                        *(unsigned char *)0xC540F98 = 0x1;
                                    }
                                    if (((((struct o8_short *)0xC54098C)->v)) == 0x110) {
                                        FUN_0c05b052(0x1E, 0x0);
                                    }
                                    t237 = (((struct o8_short *)0xC54098C)->v);
                                    if (t237 != 0xF0) {
                                        return t237;
                                    }
                                    FUN_0c059c54(0xE);
                                    return FUN_0c059d30();
                                }
                                t239 = (((struct o8_short *)0xC54098C)->v);
                                (((struct o8_ushort *)0xC54098C)->v) = (t239 - 1);
                                t241 = (short)(t239 - 1);
                                if ((int)(short)(t239 - 1) > 0) {
                                } else {
                                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                    (((struct o8_ushort *)0xC54098C)->v) = 0x12C;
                                    *(unsigned char *)0xC542235 = 0x0;
                                    t241 = 0x3D;
                                }
                                return t241;
                            }
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            FUN_0c056e44(0x19, 0x7, a6);
                            (((struct o8_ushort *)0xC54098C)->v) = 0x12C;
                            t246 = (((struct o8_short *)0xC54098C)->v);
                            (((struct o8_ushort *)0xC54098C)->v) = (t246 - 1);
                            t248 = (short)(t246 - 1);
                            if ((int)(short)(t246 - 1) > 0) {
                            } else {
                                (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                (((struct o8_ushort *)0xC54098C)->v) = 0x12C;
                                *(unsigned char *)0xC542235 = 0x0;
                                t248 = 0x3D;
                            }
                            return t248;
                        }
                        if (t177 == 5) {
                            if (t175 != 0) {
                                if (t175 != 1) {
                                    if (t175 != 2) {
                                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                        FUN_0c0f1d14(0x3, 0x0);
                                        *(unsigned char *)0xC542235 = 0x2;
                                        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
                                        t259 = FUN_0c042fe0();
                                        if (t259 != 0) {
                                            FUN_0c059c7a(0x13, 0x0);
                                        }
                                        return FUN_0c0f1c1c(0xA);
                                    }
                                    t263 = *(signed char *)0xC54098F;
                                    if (t263 != 0) {
                                        if (t263 != 1) {
                                            return t263;
                                        }
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x63;
                                        (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                                        return FUN_0c0f1c1c(0x0);
                                    }
                                    (((struct o3_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098F) + 0x1);
                                    FUN_0c0b507a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x40, 0x0);
                                    if ((*(signed char *)0xC54235E) != 0) {
                                        return FUN_0c059e60((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x18);
                                    }
                                    return 0x166;
                                }
                                t269 = FUN_0c03ffbe();
                                if (t269 != 0) {
                                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                    (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                                    t275 = 0x17;
                                } else {
                                    t271 = (((struct o8_short *)0xC54098C)->v);
                                    (((struct o8_ushort *)0xC54098C)->v) = (t271 - 1);
                                    t275 = (short)(t271 - 1);
                                    if ((int)(short)(t271 - 1) >= 0) {
                                    } else {
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x63;
                                        (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                                        t275 = 0x17;
                                    }
                                }
                                return t275;
                            }
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            if ((*(signed char *)0xC54235E) != 0) {
                                FUN_0c056e44(0x19, 0x8, a6);
                            }
                            (((struct o8_ushort *)0xC54098C)->v) = 0x258;
                            return 0x258;
                        }
                        if (t177 == 6) {
                            return t177;
                        }
                        if (t177 == 7) {
                            FUN_0c0f1bac(t176);
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                            t290 = FUN_0c0f1c54(((*(signed char *)0xC54223C) + 0x2));
                            if (t290 != 0) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                return FUN_0c0d02a6();
                            }
                            return t290;
                        }
                        if (t177 == 8) {
                            t293 = FUN_0c0f1c54(((*(signed char *)0xC54223C) + 0x2));
                            if (t293 != 0) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                return FUN_0c0d02a6();
                            }
                            return t293;
                        }
                    
                        return t177;
                    }
                    if (t175 != 0) {
                        if (t175 != 1) {
                            if (t175 != 2) {
                                t299 = t175;
                                if (t175 != 3) {
                                } else {
                                    t296 = (((struct o8_short *)0xC54098C)->v);
                                    (((struct o8_ushort *)0xC54098C)->v) = (t296 - 1);
                                    t299 = (short)(t296 - 1);
                                    if ((int)(short)(t296 - 1) > 0) {
                                    } else {
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                        t299 = 0x16;
                                    }
                                }
                                return t299;
                            }
                            t301 = *(signed char *)0xC54098F;
                            (((struct o3_uchar *)0xC54098C)->v) = (t301 + 0x1);
                            if ((int)(signed char)(t301 + 0x1) >= (int)0x3) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                return FUN_0c0f1d14(0x2, 0x1);
                            }
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            (((struct o8_ushort *)0xC54098C)->v) = 0x78;
                            return 0x78;
                        }
                        t305 = FUN_0c0f1ee8((*(signed char *)0xC54098F));
                        if (t305 != 0) {
                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                        }
                        t308 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t308 - 1);
                        if ((int)(short)(t308 - 1) > 0) {
                            return (short)(t308 - 1);
                        }
                    } else {
                        (((struct o8_ushort *)0xC54098C)->v) = 0xA8C;
                        (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                        (((struct o4_uchar *)0xC54098C)->v) = 0x0;
                        FUN_0c0f1d14((*(signed char *)0xC54098F), 0x0);
                        if ((*(signed char *)0xC54098F) != 0) {
                            FUN_0c0f1c90((*(signed char *)0xC54098F));
                            FUN_0c0f1d14(((*(signed char *)0xC54098F) - 1), 0x1);
                            FUN_0c0f1a68((*(signed char *)0xC54098F));
                        }
                        FUN_0c0f1d90((*(signed char *)0xC54098F));
                        t326 = FUN_0c0f1ee8((*(signed char *)0xC54098F));
                        if (t326 != 0) {
                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                        }
                        t329 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t329 - 1);
                        if ((int)(short)(t329 - 1) > 0) {
                            return (short)(t329 - 1);
                        }
                    }
                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                    return FUN_0c0f1e8c();
                }
                t331 = FUN_0c042fe0();
                t333 = t331;
                if (t331 == 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                    (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                    (((struct o4_uchar *)0xC54098C)->v) = 0x0;
                    t333 = 0x18;
                }
                return t333;
            }
            t337 = FUN_0c0f1c54((*(signed char *)0xC54223C));
            if (t337 == 0) {
                return t337;
            }
        } else {
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            (((struct o3_uchar *)0xC54098C)->v) = 0x0;
            FUN_0c0f1bac(0x0);
            FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
            FUN_0c0f1c90((*(signed char *)0xC54098F));
            t347 = FUN_0c0f1c54((*(signed char *)0xC54223C));
            if (t347 == 0) {
                return t347;
            }
        }
    }
    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
    return ((int (*)(void))(0xC0F1C16))();
}

int FUN_0c12ed48(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x3715));
    if ((t1 != 26) && ((t1 != 33) && (t1 != 20))) {
        (((struct o14_uchar *)(a4))->v) = 0xFFFFFFFF;
    }
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                t2 = *(signed char *)((a4 + 0x15));
                if (t2 != 0) {
                    if (t2 != 1) {
                        if (t2 != 2) {
                            if (t2 != 3) {
                                t3 = t2;
                                if (t2 != 4) {
                                } else {
                                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0199999996f);
                                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
                                    (((struct o18_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 60.0f);
                                    (((struct o1C_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 60.0f);
                                    t2 = *(short *)((a4 + 0x1C));
                                    (((struct o20_float *)(t0))->v) = ((float)t2 / 60.0f);
                                    if (!(((float)t2 / 60.0f) > 0.0f)) {
                                        (((struct o14_uchar *)(a4))->v) = 0xA;
                                    }
                                    t2 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                                    t3 = (t2 - 1);
                                }
                                t2 = t3;
                            } else {
                                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.5f);
                                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.5f);
                                t3 = *(short *)((a4 + 0x1E));
                                *(unsigned short *)((a4 + 0x1E)) = (t3 - 1);
                                t4 = (short)(t3 - 1);
                                if ((short)(t3 - 1) == 0) {
                                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    t4 = 0x15;
                                }
                                t2 = t4;
                            }
                            t3 = t2;
                        } else {
                            t2 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
                            t4 = (short)(t2 - 1);
                            if ((short)(t2 - 1) == 0) {
                                *(unsigned short *)((a4 + 0x1E)) = 0x3;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t4 = 0x15;
                            }
                            t3 = t4;
                        }
                        t2 = t3;
                    } else {
                        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.5f);
                        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.5f);
                        t3 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t3 - 1);
                        t4 = (short)(t3 - 1);
                        if ((short)(t3 - 1) != 0) {
                        } else {
                            *(unsigned short *)((a4 + 0x1E)) = 0x2;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t2 = t4;
                    }
                    t3 = t2;
                } else {
                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.5f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.5f);
                    t2 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
                    t4 = (short)(t2 - 1);
                    if ((short)(t2 - 1) != 0) {
                    } else {
                        *(unsigned short *)((a4 + 0x1E)) = 0x2;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t3 = t4;
                }
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x200);
                return t3;
            }
            if (t1 == 3) {
                t2 = *(signed char *)((a4 + 0x15));
                if (t2 != 0) {
                    if (t2 != 1) {
                        if (t2 != 2) {
                            if (t2 != 3) {
                                t3 = t2;
                                if (t2 != 4) {
                                } else {
                                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0199999996f);
                                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
                                    (((struct o18_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 60.0f);
                                    (((struct o1C_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 60.0f);
                                    t2 = *(short *)((a4 + 0x1C));
                                    (((struct o20_float *)(t0))->v) = ((float)t2 / 60.0f);
                                    if (!(((float)t2 / 60.0f) > 0.0f)) {
                                        (((struct o14_uchar *)(a4))->v) = 0xA;
                                    }
                                    t2 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                                    t3 = (t2 - 1);
                                }
                                t2 = t3;
                            } else {
                                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.5f);
                                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.5f);
                                t3 = *(short *)((a4 + 0x1E));
                                *(unsigned short *)((a4 + 0x1E)) = (t3 - 1);
                                t4 = (short)(t3 - 1);
                                if ((short)(t3 - 1) == 0) {
                                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    t4 = 0x15;
                                }
                                t2 = t4;
                            }
                            t3 = t2;
                        } else {
                            t2 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
                            t4 = (short)(t2 - 1);
                            if ((short)(t2 - 1) == 0) {
                                *(unsigned short *)((a4 + 0x1E)) = 0x3;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t4 = 0x15;
                            }
                            t3 = t4;
                        }
                        t2 = t3;
                    } else {
                        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.5f);
                        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.5f);
                        t3 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t3 - 1);
                        t4 = (short)(t3 - 1);
                        if ((short)(t3 - 1) != 0) {
                        } else {
                            *(unsigned short *)((a4 + 0x1E)) = 0x2;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t2 = t4;
                    }
                    t3 = t2;
                } else {
                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.5f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.5f);
                    t2 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
                    t4 = (short)(t2 - 1);
                    if ((short)(t2 - 1) != 0) {
                    } else {
                        *(unsigned short *)((a4 + 0x1E)) = 0x2;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t3 = t4;
                }
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x400);
                return t3;
            }
            if (t1 == 4) {
                t2 = *(signed char *)((a4 + 0x15));
                if (t2 != 0) {
                    t3 = t2;
                    if (t2 != 1) {
                    } else {
                        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x400);
                        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.0199999996f);
                        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.0199999996f);
                        t2 = *(short *)((a4 + 0x1C));
                        (((struct o14_float *)(t0))->v) = ((float)t2 / 30.0f);
                        if (((float)t2 / 30.0f) > 0.0f) {
                        } else {
                            (((struct o14_uchar *)(a4))->v) = 0xA;
                        }
                        t2 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                        t3 = (t2 - 1);
                    }
                    t2 = t3;
                } else {
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x200);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.00999999978f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.00999999978f);
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    t4 = (short)(t3 - 1);
                    if ((short)(t3 - 1) != 0) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                        t4 = 0x1E;
                    }
                    t2 = t4;
                }
                return t2;
            }
            if (t1 == 5) {
                t2 = *(signed char *)((a4 + 0x15));
                t3 = t2;
                if (t2 != 0) {
                } else {
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x400);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0299999993f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0299999993f);
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.00999999978f);
                    t2 = *(short *)((a4 + 0x1C));
                    (((struct o14_float *)(t0))->v) = ((float)t2 / 60.0f);
                    if (!(((float)t2 / 60.0f) > 0.0f)) {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                    }
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t3 = (t2 - 1);
                }
                return t3;
            }
            if (t1 == 6) {
                t2 = *(signed char *)((a4 + 0x15));
                t3 = t2;
                if (t2 != 0) {
                } else {
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.00999999978f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.00999999978f);
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.00999999978f);
                    t2 = *(short *)((a4 + 0x1C));
                    (((struct o14_float *)(t0))->v) = ((float)t2 / 60.0f);
                    if (!(((float)t2 / 60.0f) > 0.0f)) {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                    }
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t3 = (t2 - 1);
                }
                return t3;
            }
            if (t1 == 7) {
                t2 = *(signed char *)((a4 + 0x15));
                t3 = t2;
                if (t2 == 0) {
                    u0 = (((struct o0_float *)0xC12F2EC)->v);
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + u0);
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + u0);
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + u0);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    (((struct o18_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 60.0f);
                    (((struct o1C_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 60.0f);
                    t2 = *(short *)((a4 + 0x1C));
                    (((struct o20_float *)(t0))->v) = ((float)t2 / 60.0f);
                    if (((float)t2 / 60.0f) > 0.0f) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                    }
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t3 = (t2 - 1);
                }
                return t3;
            }
            if (t1 == 8) {
                t1 = *(signed char *)((a4 + 0x15));
                t2 = t1;
                if (t1 == 0) {
                    FUN_0c12f2c6(a4);
                    u0 = (((struct o4_float *)0xC12F2EC)->v);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - u0);
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0199999996f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - u0);
                    (((struct o18_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 20.0f);
                    (((struct o1C_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 20.0f);
                    t1 = *(short *)((a4 + 0x1C));
                    (((struct o20_float *)(t0))->v) = ((float)t1 / 20.0f);
                    if (!(((float)t1 / 20.0f) > 0.0f)) {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                    }
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (t1 - 1);
                }
                return t2;
            }
            return FUN_0c03f346(a4, 0x3, a6, a7);
        }
        t1 = *(signed char *)((a4 + 0x15));
        t2 = t1;
        if (t1 != 0) {
        } else {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x4000);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0199999996f);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
            (((struct o18_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 20.0f);
            (((struct o1C_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 20.0f);
            t1 = *(short *)((a4 + 0x1C));
            (((struct o20_float *)(t0))->v) = ((float)t1 / 20.0f);
            if (!(((float)t1 / 20.0f) > 0.0f)) {
                (((struct o14_uchar *)(a4))->v) = 0xA;
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (t1 - 1);
        }
        return t2;
    }
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x800);
            (((struct o18_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 30.0f);
            (((struct o1C_float *)(t0))->v) = ((float)(*(short *)((a4 + 0x1C))) / 30.0f);
            t1 = *(short *)((a4 + 0x1C));
            (((struct o20_float *)(t0))->v) = ((float)t1 / 30.0f);
            if (((float)t1 / 30.0f) > 0.0f) {
            } else {
                (((struct o14_uchar *)(a4))->v) = 0xA;
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (t0 - 1);
        }
        t0 = t2;
    } else {
        FUN_0c12f292(a4);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x800);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) != 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}
