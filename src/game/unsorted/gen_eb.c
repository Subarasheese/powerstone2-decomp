/* Straight-line functions with calls and guards (batch gen_eb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o371E_uchar { char p[0x371E]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o384C_int { char p[0x384C]; int v; };
struct o384C_uint { char p[0x384C]; unsigned int v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o386C_uchar { char p[0x386C]; unsigned char v; };
struct o3874_uchar { char p[0x3874]; unsigned char v; };
struct o387C_uchar { char p[0x387C]; unsigned char v; };
struct o3884_uchar { char p[0x3884]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int, int, int);
int FUN_0c038566(void);
int FUN_0c0392d4(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c0584b0(int, int, int, int);
int FUN_0c058854(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c058b06(int, int, int);
int FUN_0c05aae4(int, int);
int FUN_0c0676ce(int);
int FUN_0c0c418c(int, int, int, int, float);
int FUN_0c104d4a(int);
int FUN_0c104d70(void);
int FUN_0c104de4(int, int);
int FUN_0c1053d8(int, int);
int FUN_0c113628(void);
int FUN_0c113a74(void);
int FUN_0c113e72(void);
int FUN_0c114044(int);
int FUN_0c1141f4(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c11468c(int);
int FUN_0c118584(int);
int FUN_0c11e1e0(int, int, int, int);
int FUN_0c145d1c(int, int);
int FUN_0c17b1a0(int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int math_vec3i_sub(int, int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
float nlScalor(int);
int nlSelectMatrixStack(int);
int nlStoreMatrix(int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int res_cockpit_faces_release_all(void);
int FUN_0c114748(int a4, int a5, int a6, int a7, float f4);
int FUN_0c146b78(int a4, int a5, int a6, int a7);
int FUN_0c16c8e8(int a4, int a5, int a6, int a7);
int FUN_0c03934e(int a4);
int FUN_0c153178(int a4, int a5, int a6, int a7);
int FUN_0c16638c(int a4, int a5, int a6, int a7);

int FUN_0c114748(int a4, int a5, int a6, int a7, float f4)
{
    int stk[9];

    register int R2;
    int R8;
    register float F2;
    register float F3;
    register int T_;
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
    register float w0_0;
    v0_9 = a4;
    v0_6 = a5;
    v0_5 = a6;
    v0_0 = a7;
    w0_0 = f4;
    v0_7 = *(signed char *)((v0_9 + 0x14));
    v0_8 = (v0_7);
    v0_1 = (0xC474748);
    v0_2 = (0x0);
    v0_3 = (v0_9);
    v0_4 = (0xC539708);
    if ((v0_7 == 0)) goto L_C11478C;
    if ((v0_8 == 1)) goto L_C1147E0;
    if ((v0_8 != 80)) goto L_C114776;
    FUN_0c03f346(v0_3, v0_6, v0_5, v0_0);
    L_C114B1E:;
    v0_9 = (0xC4739AC);
    v0_6 = (0xC47477C);
    v0_5 = (0xC47477C);
    if (((*(int *)0xC47477C) != 0)) goto L_C114B30;
    (((struct o386C_uchar *)(v0_4))->v) = v0_2;
    L_C114B3E:;
    v0_5 = ((v0_6 + 0x4));
    if (((*(int *)(((v0_6 + 0x4) + 0x0))) != 0)) goto L_C114B4E;
    (((struct o387C_uchar *)(v0_4))->v) = v0_2;
    L_C114B5E:;
    v0_5 = ((v0_6 + 0x8));
    if (((*(int *)(((v0_6 + 0x8) + 0x0))) != 0)) goto L_C114B6E;
    (((struct o3874_uchar *)(v0_4))->v) = v0_2;
    L_C114B7C:;
    v0_5 = ((v0_6 + 0xC));
    if (((*(int *)(((v0_6 + 0xC) + 0x0))) != 0)) goto L_C114B8C;
    (((struct o3884_uchar *)(v0_4))->v) = v0_2;
    L_C114B9C:;
    FUN_0c0c418c((*(signed char *)((v0_4 + 0x1))), v0_6, v0_5, v0_0, w0_0);
    if (((*(int *)((v0_1 + 0x0))) != 1)) goto L_C114BB6;
    if (((*(signed char *)((v0_3 + 0x16))) != 6)) goto L_C114BB6;
    v0_8 = (0x1);
    L_C114BB8:;
    if ((v0_8 == 1)) goto L_C114BC2;
    FUN_0c037bf6(v0_4, v0_6, v0_5);
    L_C114BC2:;
    FUN_0c038566();
    v0_8 = ((res_cockpit_faces_release_all()));
    L_C114BCE:;
    return v0_8;
    L_C114BB6:;
    v0_8 = (0x0);
    goto L_C114BB8;
    L_C114B8C:;
    (((struct o3884_uchar *)(v0_4))->v) = ((((struct o60_int *)(((((*(int *)((v0_5 + 0x0))) - 1) << 2) + v0_9)))->v));
    goto L_C114B9C;
    L_C114B6E:;
    (((struct o3874_uchar *)(v0_4))->v) = (*(int *)((((((*(int *)((v0_5 + 0x0))) - 1) << 2) + v0_9) + 0x20)));
    goto L_C114B7C;
    L_C114B4E:;
    (((struct o387C_uchar *)(v0_4))->v) = ((((struct o40_int *)(((((*(int *)((v0_5 + 0x0))) - 1) << 2) + v0_9)))->v));
    goto L_C114B5E;
    L_C114B30:;
    (((struct o386C_uchar *)(v0_4))->v) = (*(int *)((((((*(int *)((v0_5 + 0x0))) - 1) << 2) + v0_9) + 0x0)));
    goto L_C114B3E;
    L_C114776:;
    if ((v0_8 != 99)) goto L_C11477E;
    (((struct o14_uchar *)(v0_3))->v) = 0x50;
    goto L_C114B1E;
    L_C11477E:;
    goto L_C114B1E;
    L_C1147E0:;
    v0_6 = (FUN_0c104d4a(0x800)) == 0;
    v0_7 = (0x400);
    v0_8 = (0xC104D4A);
    if (v0_6) goto L_C1147F6;
    (((struct o3850_uint *)(v0_4))->v) = (((((struct o3850_int *)(v0_4))->v)) - v0_7);
    L_C1147F6:;
    (((struct o3850_uint *)(v0_4))->v) = (((((struct o3850_int *)(v0_4))->v)) & 0xFFFF);
    v0_6 = (((struct o3850_int *)(v0_4))->v);
    v0_8 = (0x3850);
    v0_9 = (v0_6);
    R8 = (0xFFFF);
    if (((int)v0_6 <= (int)0x8000)) goto L_C114812;
    if (((int)v0_9 >= (int)0xC000)) goto L_C114812;
    *(unsigned int *)((v0_4 + v0_8)) = 0xC000;
    L_C114812:;
    v0_6 = (FUN_0c104d4a(v0_7)) == 0;
    if (v0_6) goto L_C114822;
    (((struct o3850_uint *)(v0_4))->v) = (((((struct o3850_int *)(v0_4))->v)) + v0_7);
    L_C114822:;
    (((struct o3850_uint *)(v0_4))->v) = (((((struct o3850_int *)(v0_4))->v)) & R8);
    v0_10 = (((struct o3850_int *)(v0_4))->v);
    v0_8 = (0x3850);
    v0_9 = (0x4000);
    v0_6 = (v0_10);
    if (((int)v0_10 <= (int)0x4000)) goto L_C11483A;
    if (((int)v0_6 >= (int)0x8000)) goto L_C11483A;
    *(unsigned int *)((v0_4 + v0_8)) = v0_9;
    L_C11483A:;
    *(unsigned int *)((v0_4 + v0_8)) = ((*(int *)((v0_4 + v0_8))) & R8);
    v0_8 = (FUN_0c104d4a(0xC00)) != 0;
    if (v0_8) goto L_C114858;
    FUN_0c058854((0x3850 + v0_4), 0x0, ((((struct o3850_int *)(v0_4))->v)), v0_7);
    L_C114858:;
    v0_8 = (FUN_0c104d4a(0x2000)) == 0;
    if (v0_8) goto L_C11486A;
    (((struct o384C_uint *)(v0_4))->v) = (((((struct o384C_int *)(v0_4))->v)) - v0_7);
    L_C11486A:;
    (((struct o384C_uint *)(v0_4))->v) = (((((struct o384C_int *)(v0_4))->v)) & R8);
    v0_10 = (((struct o384C_int *)(v0_4))->v);
    v0_8 = (0x384C);
    v0_9 = (v0_10);
    if (((int)v0_10 <= (int)0x8000)) goto L_C114884;
    if (((int)v0_9 >= (int)0xF000)) goto L_C114884;
    *(unsigned int *)((v0_4 + v0_8)) = 0xF000;
    L_C114884:;
    v0_8 = (FUN_0c104d4a(0x1000)) == 0;
    if (v0_8) goto L_C114896;
    (((struct o384C_uint *)(v0_4))->v) = (((((struct o384C_int *)(v0_4))->v)) + v0_7);
    L_C114896:;
    v0_8 = (0x384C);
    v0_9 = ((((((struct o384C_int *)(v0_4))->v)) & R8));
    *(unsigned int *)((v0_4 + v0_8)) = v0_9;
    v0_10 = *(int *)((v0_4 + v0_8));
    v0_9 = (v0_10);
    if (((int)v0_10 <= (int)0x2000)) goto L_C1148FC;
    if (((int)v0_9 >= (int)0x8000)) goto L_C1148FC;
    *(unsigned int *)((v0_4 + v0_8)) = 0x2000;
    L_C1148FC:;
    *(unsigned int *)((v0_4 + v0_8)) = ((*(int *)((v0_4 + v0_8))) & R8);
    v0_8 = (FUN_0c104d4a(0x3000)) != 0;
    if (v0_8) goto L_C11491A;
    FUN_0c058854((0x384C + v0_4), 0x0, ((((struct o384C_int *)(v0_4))->v)), v0_7);
    L_C11491A:;
    *(unsigned int *)((v0_4 + 0x34)) = ((((struct o384C_int *)(v0_4))->v));
    *(unsigned int *)((v0_4 + 0x38)) = (((((struct o3850_int *)(v0_4))->v)) + (*(int *)((0xC2917F8 + ((*(signed char *)((v0_4 + 0x2))) << 2)))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = -100.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    FUN_0c058b06((((int)stk + 0) + 0xC), (v0_4 + 0x34), (((int)stk + 0) + 0x18));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 100.0f);
    v0_7 = *(signed char *)((v0_4 + 0x2));
    nlAddVector3op((v0_4 + 0x28), (0xC291738 + (((v0_7 << 1) + v0_7) << 2)), (((int)stk + 0) + 0xC));
    v0_7 = *(signed char *)((v0_3 + 0x15));
    v0_8 = (v0_7);
    v0_9 = ((*(int *)((v0_1 + 0x0))));
    if ((v0_7 == 0)) goto L_C114990;
    if ((v0_8 != 1)) goto L_C11498C;
    v0_8 = (v0_9);
    if ((v0_9 == 0)) goto L_C114ADE;
    if ((v0_8 == 1)) goto L_C114AE6;
    if ((v0_8 == 2)) goto L_C114AEE;
    goto L_C114B1E;
    L_C114AEE:;
    FUN_0c11468c(v0_3);
    goto L_C114B1E;
    L_C114AE6:;
    FUN_0c1141f4(v0_3, v0_6, v0_5, v0_0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    goto L_C114B1E;
    L_C114ADE:;
    FUN_0c114044(v0_3);
    goto L_C114B1E;
    L_C11498C:;
    goto L_C114B1E;
    L_C114990:;
    v0_7 = *(signed char *)((v0_3 + 0x16));
    v0_8 = (v0_7);
    if ((v0_7 == 0)) goto L_C1149A4;
    if ((v0_8 == 1)) goto L_C114A2E;
    if ((v0_8 == 2)) goto L_C114A48;
    goto L_C114B1E;
    L_C114A48:;
    v0_8 = (v0_9);
    v0_7 = (0xC474B8C);
    v0_6 = (0x63);
    if ((v0_9 == 0)) goto L_C114A64;
    if ((v0_8 == 1)) goto L_C114A84;
    if ((v0_8 == 2)) goto L_C114AA4;
    if ((v0_8 == 3)) goto L_C114AC4;
    goto L_C114B1E;
    L_C114AC4:;
    (((struct o14_uchar *)(v0_3))->v) = v0_6;
    v0_8 = (0x14);
    goto L_C114BCE;
    L_C114AA4:;
    (((struct o15_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_3))->v) = v0_2;
    (((struct o14_uchar *)((*(int *)((v0_7 + 0x0)))))->v) = v0_6;
    *(unsigned int *)((v0_7 + 0x0)) = v0_2;
    v0_8 = ((FUN_0c113e72()));
    v0_5 = (0x90);
    L_C114ABE:;
    *(unsigned int *)(((v0_5 + v0_7) + 0x0)) = v0_8;
    goto L_C114B1E;
    L_C114A84:;
    (((struct o15_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_3))->v) = v0_2;
    (((struct o14_uchar *)((*(int *)((v0_7 + 0x0)))))->v) = v0_6;
    *(unsigned int *)((v0_7 + 0x0)) = v0_2;
    v0_8 = ((FUN_0c113a74()));
    v0_5 = (0x8C);
    goto L_C114ABE;
    L_C114A64:;
    (((struct o15_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_3))->v) = v0_2;
    (((struct o14_uchar *)((*(int *)((v0_7 + 0x0)))))->v) = v0_6;
    *(unsigned int *)((v0_7 + 0x0)) = v0_2;
    v0_8 = ((FUN_0c113628()));
    v0_5 = (0x88);
    goto L_C114ABE;
    L_C114A2E:;
    v0_5 = (((struct o20_short *)(v0_3))->v);
    (((struct o20_ushort *)(v0_3))->v) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) <= (int)0xA)) goto L_C114B1E;
    (((struct o16_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x16))) + 0x1);
    goto L_C114B1E;
    L_C1149A4:;
    *(unsigned int *)((v0_1 + 0x0)) = (FUN_0c1053d8(v0_9, 0x3));
    v0_7 = (FUN_0c104d70()) == 0;
    if (v0_7) goto L_C1149C2;
    (((struct o16_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x16))) + 0x1);
    (((struct o20_ushort *)(v0_3))->v) = v0_2;
    L_C1149E4:;
    v0_8 = ((FUN_0c118584((*(int *)((v0_1 + 0x0))))));
    goto L_C114BCE;
    L_C1149C2:;
    v0_7 = (FUN_0c104de4((*(int *)((v0_1 + 0x0))), 0x3)) != 0;
    if (v0_7) goto L_C1149D2;
    goto L_C114B1E;
    L_C1149D2:;
    v0_4 = *(int *)((v0_1 + 0x0));
    v0_8 = (v0_4);
    if ((v0_4 != 3)) goto L_C114A28;
    (((struct o20_ushort *)(v0_3))->v) = v0_2;
    (((struct o16_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x16))) + 0x1);
    goto L_C1149E4;
    L_C114A28:;
    *(unsigned int *)((v0_1 + 0x0)) = 0x3;
    goto L_C114BCE;
    L_C11478C:;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    (((struct o371E_uchar *)(v0_4))->v) = (*(signed char *)0xC474778);
    FUN_0c0676ce((*(signed char *)((v0_4 + 0x1))));
    v0_6 = *(signed char *)((v0_4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x28)) = *(struct mv3 *)((0xC291738 + (((v0_6 << 1) + v0_6) << 2))); }
    *(unsigned int *)((v0_4 + 0x38)) = (*(int *)((0xC2917F8 + ((*(signed char *)((v0_4 + 0x2))) << 2))));
    FUN_0c11e1e0(v0_4, (*(signed char *)((v0_4 + 0x1))), 0x0, 0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x384C + v0_4)) = *(struct mv3 *)(0xC2A0C6C); }
    goto L_C1147E0;
}

int FUN_0c146b78(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t0;
    register int t24;
    register int t28;
    register int t30;
    register int t39;
    register int t43;
    register int t45;
    register int t54;
    register int t58;
    register int t60;
    register int t72;
    register int t76;
    register float u94;
    register float u95;
    register float t96;
    register float u97;
    register int t100;
    register float u103;
    register int t106;
    register float t110;
    register float u112;
    register float u119;
    register float t121;
    register float t134;
    register float u135;
    register int t138;
    register float u143;
    register float u144;
    register float t146;
    register float u156;
    register float u157;
    register float u158;
    register int t182;
    register int t186;
    register int t188;
    register int t197;
    register int t201;
    register int t203;
    register int t212;
    register int t216;
    register int t218;
    register int t230;
    register int t234;
    register int t240;
    int t26;
    int t41;
    int t56;
    int t184;
    int t199;
    int t214;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x24)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x18)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)); }
            { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 8) + 0x8)) = *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)); }
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x7, (*(int *)0xC4B40CC));
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x63F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((((int)stk + 8) + 0x24)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((((int)stk + 8) + 0x18)); }
            { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)((((int)stk + 8) + 0x8)); }
            if (((((struct o10_int *)0xC2A2538)->v)) != 0) {
                if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o10_int *)0xC2A2538)->v)))) == 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                }
            } else {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
            t24 = *(short *)((a4 + 0x1C));
            if (((int)t24 >= (int)((((struct o0_int *)0xC2A2538)->v))) && (t26 = (((struct o4_int *)0xC2A2538)->v), (int)t24 <= (int)t26)) {
                t28 = ((((struct o0_int *)0xC2A2538)->v));
                *(int *)((int)stk + 4) = t28;
                t30 = ((((struct o4_int *)0xC2A2538)->v));
                *(int *)((int)stk + 0) = t30;
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2598, 0xC2A258C, (*(short *)((a4 + 0x1C))), t30, t28);
            }
            t39 = *(short *)((a4 + 0x1C));
            if (((int)t39 >= (int)((((struct o20_int *)0xC2A2538)->v))) && (t41 = (((struct o24_int *)0xC2A2538)->v), (int)t39 <= (int)t41)) {
                t43 = ((((struct o20_int *)0xC2A2538)->v));
                *(int *)((int)stk + 4) = t43;
                t45 = ((((struct o24_int *)0xC2A2538)->v));
                *(int *)((int)stk + 0) = t45;
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25B4, 0xC2A25A4, (*(short *)((a4 + 0x1C))), t45, t43);
            }
            t54 = *(short *)((a4 + 0x1C));
            if (((int)t54 >= (int)((((struct o8_int *)0xC2A2538)->v))) && (t56 = (((struct oC_int *)0xC2A2538)->v), (int)t54 <= (int)t56)) {
                t58 = ((((struct o8_int *)0xC2A2538)->v));
                *(int *)((int)stk + 4) = t58;
                t60 = ((((struct oC_int *)0xC2A2538)->v));
                *(int *)((int)stk + 0) = t60;
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25D4, 0xC2A25C4, (*(short *)((a4 + 0x1C))), t60, t58);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t72 = (((struct oC4_int *)(a4))->v);
            *(unsigned short *)((t72 + 0x6)) = ((*(short *)((t72 + 0x6))) | 0x1000);
            FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
            t76 = *(short *)((a4 + 0x1E));
            t240 = t76;
            if ((int)t76 > (int)0x9) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                t240 = 0xA8;
            }
        } else {
            t240 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        u94 = (((float)((int)((int)(nlRand()) % (int)((((struct o14_int *)0xC2A2538)->v)))) * 360.0f) / (float)((((struct o14_int *)0xC2A2538)->v)));
        u95 = ((u94 * 65536.0f) / 360.0f);
        *(unsigned int *)((a4 + 0x38)) = ((int)(u95 + 0.5f) & 0xFFFF);
        t96 = math_sin_angle16(((int)(u95 + 0.5f) & 0xFFFF));
        *(unsigned int *)(((int)stk + 8)) = 0xC2A2560;
        u97 = (((struct o28_float *)0xC2A2538)->v);
        t100 = (int)((int)(nlRand()) % (int)((((struct o18_int *)0xC2A2538)->v)));
        *(unsigned int *)(((int)stk + 12)) = 0xC2A2570;
        u103 = (((float)t100 * ((((struct o38_float *)0xC2A2538)->v))) / (float)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o4C_float *)(a4))->v) = (t96 * (u97 + u103));
        t106 = (int)((int)(nlRand()) % (int)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o50_float *)(a4))->v) = ((((((struct o0_float *)0xC2A2578)->v)) * (float)t106) / (float)((((struct o18_int *)0xC2A2538)->v)));
        t110 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u112 = *(float *)(((*(int *)(((int)stk + 8))) + 0x0));
        u119 = (((float)((int)((int)(nlRand()) % (int)((((struct o18_int *)0xC2A2538)->v)))) * (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)))) / (float)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o54_float *)(a4))->v) = (t110 * (u112 + u119));
        t121 = math_sin_angle16((*(int *)((a4 + 0x38))));
        *(unsigned int *)(((int)stk + 8)) = 0xC2A256C;
        (((struct o58_float *)(a4))->v) = (t121 * ((((struct o34_float *)0xC2A2538)->v)));
        (((struct o5C_float *)(a4))->v) = ((((((struct o4_float *)0xC2A2578)->v)) * (float)t106) / (float)((((struct o18_int *)0xC2A2538)->v)));
        (((struct o60_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A258C); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A25A4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o20_ushort *)(a4))->v) = ((((struct oC_int *)0xC2A2578)->v));
        *(int *)((int)stk + 4) = (a4 + 0x28);
        t134 = math_sin_angle16((*(int *)((a4 + 0x38))));
        *(unsigned int *)(((int)stk + 12)) = 0xC2A2574;
        u135 = (((struct o3C_float *)0xC2A2538)->v);
        t138 = (int)((int)(nlRand()) % (int)((((struct o1C_int *)0xC2A2538)->v)));
        *(unsigned int *)(((int)stk + 8)) = 0xC2A2580;
        u143 = (u135 + ((((float)t138 * ((((struct o8_float *)0xC2A2578)->v))) / (float)((((struct o1C_int *)0xC2A2538)->v)))));
        u144 = ((((struct o28_float *)(a4))->v));
        u144 = u144 + u143 * t134;
        (((struct o28_float *)(a4))->v) = u144;
        *(int *)((int)stk + 4) = (a4 + 0x30);
        t146 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u156 = (((struct o30_float *)(a4))->v);
        u157 = ((*(float *)(((*(int *)(((int)stk + 12))) + 0x0))) + ((((float)((int)((int)(nlRand()) % (int)((((struct o1C_int *)0xC2A2538)->v)))) * (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)))) / (float)((((struct o1C_int *)0xC2A2538)->v)))));
        u158 = u156;
        u158 = u158 + u157 * t146;
        (((struct o30_float *)(a4))->v) = u158;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x24)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x18)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 8) + 0x8)) = *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)); }
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x7, (*(int *)0xC4B40CC));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x63F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((((int)stk + 8) + 0x24)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((((int)stk + 8) + 0x18)); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)((((int)stk + 8) + 0x8)); }
        if (((((struct o10_int *)0xC2A2538)->v)) != 0) {
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)((((struct o10_int *)0xC2A2538)->v)))) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
        t182 = *(short *)((a4 + 0x1C));
        if (((int)t182 >= (int)((((struct o0_int *)0xC2A2538)->v))) && (t184 = (((struct o4_int *)0xC2A2538)->v), (int)t182 <= (int)t184)) {
            t186 = ((((struct o0_int *)0xC2A2538)->v));
            *(int *)((int)stk + 4) = t186;
            t188 = ((((struct o4_int *)0xC2A2538)->v));
            *(int *)((int)stk + 0) = t188;
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2598, 0xC2A258C, (*(short *)((a4 + 0x1C))), t188, t186);
        }
        t197 = *(short *)((a4 + 0x1C));
        if (((int)t197 >= (int)((((struct o20_int *)0xC2A2538)->v))) && (t199 = (((struct o24_int *)0xC2A2538)->v), (int)t197 <= (int)t199)) {
            t201 = ((((struct o20_int *)0xC2A2538)->v));
            *(int *)((int)stk + 4) = t201;
            t203 = ((((struct o24_int *)0xC2A2538)->v));
            *(int *)((int)stk + 0) = t203;
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25B4, 0xC2A25A4, (*(short *)((a4 + 0x1C))), t203, t201);
        }
        t212 = *(short *)((a4 + 0x1C));
        if (((int)t212 >= (int)((((struct o8_int *)0xC2A2538)->v))) && (t214 = (((struct oC_int *)0xC2A2538)->v), (int)t212 <= (int)t214)) {
            t216 = ((((struct o8_int *)0xC2A2538)->v));
            *(int *)((int)stk + 4) = t216;
            t218 = ((((struct oC_int *)0xC2A2538)->v));
            *(int *)((int)stk + 0) = t218;
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A25D4, 0xC2A25C4, (*(short *)((a4 + 0x1C))), t218, t216);
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        t230 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t230 + 0x6)) = ((*(short *)((t230 + 0x6))) | 0x1000);
        FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
        t234 = *(short *)((a4 + 0x1E));
        t240 = t234;
        if ((int)t234 > (int)0x9) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t240 = 0xA8;
        }
    }
    return t240;
}

int FUN_0c16c8e8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.00999999978f);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.00999999978f);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00999999978f);
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x3;
                t0 = (((struct o20_short *)(a4))->v);
                switch (t0) {
                case 1:
                    (((struct o20_ushort *)(a4))->v) = 0x2;
                    break;
                case 2:
                    (((struct o20_ushort *)(a4))->v) = 0x3;
                    break;
                case 3:
                    (((struct o20_ushort *)(a4))->v) = 0x4;
                    break;
                case 4:
                    (((struct o20_ushort *)(a4))->v) = 0x1;
                    break;
                }
                FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x54, (*(int *)0xC4B40CC));
            }
            if (!(((((struct o2C_float *)(a4))->v)) > ((*(float *)0xC54109C) + 500.0f))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o50_float *)(a4))->v) = -2.0f;
                (((struct o54_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x0;
                t0 = FUN_0c037320(0x20, (*(int *)0xC4B40CC));
                t1 = FUN_0c03f444(0x6, 0x0, t0);
                t2 = t1;
                if (t1 != 0) {
                    FUN_0c03733c(t1, 0x20, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
                    (((struct oA9_uchar *)(t1))->v) = 0x21;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
                    *(unsigned int *)((t1 + 0x4)) = 0xC16CACE;
                    (((struct oAC_ushort *)(t1))->v) = 0x41F;
                    (((struct oB0_float *)(t1))->v) = 1.0f;
                    (((struct o60_float *)(t1))->v) = 1.20000005f;
                    (((struct o58_float *)(t1))->v) = ((1.20000005f * (1.0f + 1.0f)) / 3.0f);
                    if ((int)t0 > 0) {
                        t3 = 0x0;
                        t4 = 0x0;
                        for (;;) {
                            t4 = (t4 + 0x1);
                            t5 = *(int *)((((0xC4 + t1) + t3) + 0x0));
                            *(unsigned short *)((t5 + 0x6)) = ((*(short *)((t5 + 0x6))) | 0x1000);
                            (((struct o24_float *)((*(int *)((((0xC4 + t1) + t3) + 0x0)))))->v) = 1.20000005f;
                            t3 = (t3 + 0x4);
                            if ((int)t4 >= (int)t0) {
                                break;
                            }
                        }
                    }
                    t0 = nlRand();
                    t3 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                    if ((int)t0 >= 0) {
                        t3 = (t0 & 0x1);
                    }
                    (((struct o17_uchar *)(t1))->v) = t3;
                    t2 = t3;
                }
                return t2;
            }
            return 0x2C;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = nlRand();
            t2 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
            if ((int)t0 >= 0) {
                t2 = (t0 & 0x3);
            }
            u0 = *(float *)(((((t2 << 2) << 1) + 0xC2A39AC) + 0x0));
            (((struct o50_float *)(a4))->v) = u0;
            (((struct o54_float *)(a4))->v) = ((-u0) / (1.0f + 1.0f));
            (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)((((t2 << 2) << 1) + 0xC2A39AC)))->v));
            *(unsigned short *)((a4 + 0x1C)) = 0x64;
            *(unsigned short *)((a4 + 0x1E)) = 0x3;
            (((struct o20_ushort *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            FUN_0c05aae4(0x65, (a4 + 0x28));
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t1 = 0xA8;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x2));
    t1 = nlRand();
    t2 = ((~(((~t1) + 0x1) & 0x7)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x7);
    }
    *(unsigned short *)((a4 + 0x1C)) = (t2 + (t0 << 1));
    (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0xFFFFEAAB;
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o18_float *)(t0))->v) = 0.0f;
    (((struct o1C_float *)(t0))->v) = 0.0f;
    (((struct o20_float *)(t0))->v) = 0.0f;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c03934e(int a4)
{
    int stk[30];
    register int t0;
    register int t326;
    register int t2;
    register int t5;
    register int t311;
    register int t8;
    register int t130;
    register int t11;
    register int t13;
    register float t35;
    register float u36;
    register float u38;
    register float u48;
    register float u49;
    register int t83;
    register int t87;
    register int t140;
    register int t142;
    register int t159;
    register int t161;
    int t165;
    register int t166;
    register int t167;
    register int t169;
    register float t191;
    register float u192;
    register float u194;
    register float u204;
    register float u205;
    register int t239;
    register int t243;
    register int t297;
    register int t286;
    int t9;
    register int t10;
    register float u12;
    register int t139;
    register int t155;
    register int t156;
    register float u168;

    t0 = *(signed char *)((a4 + 0x2));
    t326 = t0;
    if ((int)t0 >= (int)(*(int *)0xC1B6CF4)) {
    } else {
        t2 = *(signed char *)((a4 + 0x2));
        t5 = *(int *)(((((*(signed char *)(((0x371A + a4) + 0x0))) << 2) + (0xC20EFA0 + ((t2 << 2) << 1))) + 0x0));
        t311 = ((t2 << 2) << 1);
        if (t5 == 0) {
        } else {
            nlSelectMatrixStack(0x1);
            t8 = *(signed char *)((0xC3BD880 + ((*(signed char *)((a4 + 0x1))) << 2)));
            if (t8 != 0) {
                if (t8 != 1) {
                    t130 = t8;
                    if (t8 == 2) {
                        t11 = t5;
                        for (;;) {
                            t13 = *(signed char *)((t11 + 0x0));
                            if (t13 != -1) {
                                t10 = (FUN_0c0392d4(a4, (*(signed char *)((t11 + 0x1))), (*(short *)((t11 + 0x2)))));
                                if ((*(signed char *)((a4 + 0x375B))) != 0) {
                                } else {
                                    t9 = (*(signed char *)0xC54208F);
                                    if (t9 != 0) {
                                    } else {
                                        t9 = (*(signed char *)0xC542092);
                                        if (t9 != 0) {
                                        } else {
                                            math_mat_get_translate((t10 + 0x28), (((int)stk + 0) + 0x6C));
                                            math_mat_get_translate(((((struct o68_int *)(t10))->v)), (((int)stk + 0) + 0x60));
                                            t9 = 0xC187798;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x54)) = *(struct mv3 *)(0xC5410B8); }
                                            t9 = 0xC058204;
                                            u12 = ((((struct o8_float *)(t11))->v));
                                            math_vec3_mul_xyz((((int)stk + 0) + 0x54), u12, u12, u12);
                                            nlAddVector3op((((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x54));
                                            t9 = 0xC17B1A0;
                                            FUN_0c17b1a0(((((struct o68_int *)(t10))->v)));
                                            nlInvertMatrix(0x0);
                                            t9 = 0xC17A870;
                                            nlCalcPoint((((int)stk + 0) + 0x6C), (t10 + 0x6C));
                                            nlStoreMatrix((((int)stk + 0) + 0x14));
                                            t35 = nlScalor((t10 + 0x6C));
                                            u36 = t35;
                                            if (t35 == 0.0f) {
                                                u36 = 9.99999975e-05f;
                                            }
                                            u38 = (((struct o4_float *)(t11))->v);
                                            t9 = 0xC187798;
                                            (((struct o6C_float *)(t10))->v) = (((((struct o6C_float *)(t10))->v)) * (u38 / u36));
                                            (((struct o70_float *)(t10))->v) = (((((struct o70_float *)(t10))->v)) * (u38 / u36));
                                            (((struct o74_float *)(t10))->v) = (((((struct o74_float *)(t10))->v)) * (u38 / u36));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((t10 + 0x78)); }
                                            if (((((struct o74_float *)(t10))->v)) == 0.0f) {
                                                (((struct o74_float *)(t10))->v) = 9.99999975e-05f;
                                            }
                                            t9 = 0xC1795A0;
                                            t9 = 0xC1794E0;
                                            (((struct o7C_uint *)(t10))->v) = (math_atan2_angle16(((((struct o6C_float *)(t10))->v)), ((((struct o74_float *)(t10))->v))));
                                            u12 = ((((struct o6C_float *)(t10))->v));
                                            u48 = (((struct o74_float *)(t10))->v);
                                            *(float *)(((int)stk + 4)) = u48;
                                            u49 = (u48 * u48);
                                            u49 = u49 + u12 * u12;
                                            u12 = (math_signed_sqrt(u49));
                                            if (u12 == 0.0f) {
                                                u12 = 9.99999975e-05f;
                                            }
                                            t9 = 0xC179500;
                                            t9 = 0x8000;
                                            (((struct o78_uint *)(t10))->v) = (math_atan_angle16(((-((((struct o70_float *)(t10))->v))) / u12)));
                                            if (((*(int *)(((int)stk + 8))) & t9) != 0) {
                                                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) | 0xFFFF0000);
                                            } else {
                                                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) & 0x7FFF);
                                            }
                                            t9 = 0x8000;
                                            if (((*(int *)(((int)stk + 12))) & t9) != 0) {
                                                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) | 0xFFFF0000);
                                            } else {
                                                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) & 0x7FFF);
                                            }
                                            t9 = 0x8000;
                                            if ((((((struct o78_int *)(t10))->v)) & t9) != 0) {
                                                (((struct o78_uint *)(t10))->v) = (((((struct o78_int *)(t10))->v)) | 0xFFFF0000);
                                            } else {
                                                (((struct o78_uint *)(t10))->v) = (((((struct o78_int *)(t10))->v)) & 0x7FFF);
                                            }
                                            t9 = 0x8000;
                                            if ((((((struct o7C_int *)(t10))->v)) & t9) != 0) {
                                                (((struct o7C_uint *)(t10))->v) = (((((struct o7C_int *)(t10))->v)) | 0xFFFF0000);
                                            } else {
                                                (((struct o7C_uint *)(t10))->v) = (((((struct o7C_int *)(t10))->v)) & 0x7FFF);
                                            }
                                            t9 = 0xC0583D6;
                                            math_vec3i_sub((((int)stk + 0) + 0x8), (t10 + 0x78), (((int)stk + 0) + 0x8));
                                            t83 = *(int *)((t11 + 0xC));
                                            t9 = 0xC0584B0;
                                            *(unsigned int *)(((int)stk + 0)) = t83;
                                            FUN_0c0584b0((*(int *)(((int)stk + 12))), (t10 + 0x7C), (*(int *)(((int)stk + 0))), (unsigned short)(-t83));
                                            t87 = *(int *)((t11 + 0xC));
                                            *(unsigned int *)(((int)stk + 0)) = t87;
                                            FUN_0c0584b0((*(int *)(((int)stk + 8))), (t10 + 0x78), (*(int *)(((int)stk + 0))), (unsigned short)(-t87));
                                            t9 = 0xC17B1A0;
                                            FUN_0c17b1a0(((((struct o68_int *)(t10))->v)));
                                            nlTranslateV((t10 + 0x6C));
                                            t9 = 0xC17BC90;
                                            nlRotateAY(((((struct o7C_int *)(t10))->v)));
                                            t9 = 0xC17BAE0;
                                            nlRotateAX(((((struct o78_int *)(t10))->v)));
                                            nlStoreMatrix((t10 + 0x28));
                                            math_mat_get_translate((t10 + 0x28), (((int)stk + 0) + 0x6C));
                                            *(float *)(((int)stk + 88)) = 0.0f;
                                            *(float *)(((int)stk + 84)) = 0.0f;
                                            t9 = 0xC0582DE;
                                            *(float *)(((int)stk + 92)) = (-(((((struct o4_float *)(t11))->v)) * 1.0f));
                                            FUN_0c0582de((((int)stk + 0) + 0x54), (t10 + 0x28));
                                            nlSubVector3op((((int)stk + 0) + 0x54), (((int)stk + 0) + 0x60), (((int)stk + 0) + 0x54));
                                            nlAddVector3op((((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x54));
                                            t9 = 0xC17B1A0;
                                            FUN_0c17b1a0((((int)stk + 0) + 0x14));
                                            nlCalcPoint((((int)stk + 0) + 0x6C), (t10 + 0x6C));
                                        }
                                    }
                                }
                                FUN_0c17b1a0(((((struct o68_int *)(t10))->v)));
                                nlTranslateV((t10 + 0x6C));
                                t9 = 0xC17BC90;
                                nlRotateAY(((((struct o7C_int *)(t10))->v)));
                                t9 = 0xC17BAE0;
                                nlRotateAX(((((struct o78_int *)(t10))->v)));
                                nlStoreMatrix((t10 + 0x28));
                                t11 = (t11 + 0x10);
                                t9 = 0xFFF0;
                                *(unsigned short *)((t10 + 0x6)) = ((*(short *)((t10 + 0x6))) & t9);
                                continue;
                            }
                            break;
                        }
                        t130 = t13;
                    }
                    t286 = t130;
                } else {
                    t140 = 0xC3BD880;
                    t142 = t5;
                    for (;;) {
                        if ((*(signed char *)((t142 + 0x0))) == -1) {
                            break;
                        }
                        t139 = (*(signed char *)((t142 + 0x0)));
                        if (t139 == 0) {
                            t140 = a4;
                            t166 = FUN_0c0392d4(t140, (*(signed char *)((t142 + 0x1))), (*(short *)((t142 + 0x2))));
                            t140 = t166;
                            t140 = (t140 + 0x28);
                            math_mat_get_translate(t140, (((int)stk + 0) + 0x6C));
                            t140 = ((((struct o68_int *)(t166))->v));
                            math_mat_get_translate(t140, (((int)stk + 0) + 0x60));
                            t140 = ((int)stk + 0);
                            t140 = (t140 + 0x6C);
                            nlSubVector3op(t140, (((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x60));
                            t140 = ((int)stk + 0);
                            t140 = (t140 + 0x6C);
                            (((struct o4_float *)(t142))->v) = (nlScalor(t140));
                            *(unsigned char *)((t142 + 0x0)) = 0x1;
                        } else {
                            t155 = t139;
                            t156 = t140;
                        }
                        t142 = (t142 + 0x10);
                        t139 = t155;
                        t140 = t156;
                    }
                    t159 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)((0xC3BD880 + (t159 << 2))) = ((*(signed char *)((0xC3BD880 + (t159 << 2)))) + 0x1);
                    t161 = *(signed char *)((a4 + 0x2));
                    t165 = (0xC20EFA0 + ((t161 << 2) << 1));
                    t167 = (*(int *)(((((*(signed char *)(((0x371A + a4) + 0x0))) << 2) + (0xC20EFA0 + ((t161 << 2) << 1))) + 0x0)));
                    for (;;) {
                        t169 = *(signed char *)((t167 + 0x0));
                        if (t169 != -1) {
                            t166 = (FUN_0c0392d4(a4, (*(signed char *)((t167 + 0x1))), (*(short *)((t167 + 0x2)))));
                            if ((*(signed char *)((a4 + 0x375B))) != 0) {
                            } else {
                                t165 = (*(signed char *)0xC54208F);
                                if (t165 != 0) {
                                } else {
                                    t165 = (*(signed char *)0xC542092);
                                    if (t165 != 0) {
                                    } else {
                                        math_mat_get_translate((t166 + 0x28), (((int)stk + 0) + 0x6C));
                                        math_mat_get_translate(((((struct o68_int *)(t166))->v)), (((int)stk + 0) + 0x60));
                                        t165 = 0xC187798;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x54)) = *(struct mv3 *)(0xC5410B8); }
                                        t165 = 0xC058204;
                                        u168 = ((((struct o8_float *)(t167))->v));
                                        math_vec3_mul_xyz((((int)stk + 0) + 0x54), u168, u168, u168);
                                        nlAddVector3op((((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x54));
                                        t165 = 0xC17B1A0;
                                        FUN_0c17b1a0(((((struct o68_int *)(t166))->v)));
                                        nlInvertMatrix(0x0);
                                        t165 = 0xC17A870;
                                        nlCalcPoint((((int)stk + 0) + 0x6C), (t166 + 0x6C));
                                        nlStoreMatrix((((int)stk + 0) + 0x14));
                                        t191 = nlScalor((t166 + 0x6C));
                                        u192 = t191;
                                        if (t191 == 0.0f) {
                                            u192 = 9.99999975e-05f;
                                        }
                                        u194 = (((struct o4_float *)(t167))->v);
                                        t165 = 0xC187798;
                                        (((struct o6C_float *)(t166))->v) = (((((struct o6C_float *)(t166))->v)) * (u194 / u192));
                                        (((struct o70_float *)(t166))->v) = (((((struct o70_float *)(t166))->v)) * (u194 / u192));
                                        (((struct o74_float *)(t166))->v) = (((((struct o74_float *)(t166))->v)) * (u194 / u192));
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((t166 + 0x78)); }
                                        if (((((struct o74_float *)(t166))->v)) == 0.0f) {
                                            (((struct o74_float *)(t166))->v) = 9.99999975e-05f;
                                        }
                                        t165 = 0xC1795A0;
                                        t165 = 0xC1794E0;
                                        (((struct o7C_uint *)(t166))->v) = (math_atan2_angle16(((((struct o6C_float *)(t166))->v)), ((((struct o74_float *)(t166))->v))));
                                        u168 = ((((struct o6C_float *)(t166))->v));
                                        u204 = (((struct o74_float *)(t166))->v);
                                        *(float *)(((int)stk + 4)) = u204;
                                        u205 = (u204 * u204);
                                        u205 = u205 + u168 * u168;
                                        u168 = (math_signed_sqrt(u205));
                                        if (u168 == 0.0f) {
                                            u168 = 9.99999975e-05f;
                                        }
                                        t165 = 0xC179500;
                                        t165 = 0x8000;
                                        (((struct o78_uint *)(t166))->v) = (math_atan_angle16(((-((((struct o70_float *)(t166))->v))) / u168)));
                                        if (((*(int *)(((int)stk + 8))) & t165) != 0) {
                                            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) | 0xFFFF0000);
                                        } else {
                                            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) & 0x7FFF);
                                        }
                                        t165 = 0x8000;
                                        if (((*(int *)(((int)stk + 12))) & t165) != 0) {
                                            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) | 0xFFFF0000);
                                        } else {
                                            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) & 0x7FFF);
                                        }
                                        t165 = 0x8000;
                                        if ((((((struct o78_int *)(t166))->v)) & t165) != 0) {
                                            (((struct o78_uint *)(t166))->v) = (((((struct o78_int *)(t166))->v)) | 0xFFFF0000);
                                        } else {
                                            (((struct o78_uint *)(t166))->v) = (((((struct o78_int *)(t166))->v)) & 0x7FFF);
                                        }
                                        t165 = 0x8000;
                                        if ((((((struct o7C_int *)(t166))->v)) & t165) != 0) {
                                            (((struct o7C_uint *)(t166))->v) = (((((struct o7C_int *)(t166))->v)) | 0xFFFF0000);
                                        } else {
                                            (((struct o7C_uint *)(t166))->v) = (((((struct o7C_int *)(t166))->v)) & 0x7FFF);
                                        }
                                        t165 = 0xC0583D6;
                                        math_vec3i_sub((((int)stk + 0) + 0x8), (t166 + 0x78), (((int)stk + 0) + 0x8));
                                        t239 = *(int *)((t167 + 0xC));
                                        t165 = 0xC0584B0;
                                        *(unsigned int *)(((int)stk + 0)) = t239;
                                        FUN_0c0584b0((*(int *)(((int)stk + 12))), (t166 + 0x7C), (*(int *)(((int)stk + 0))), (unsigned short)(-t239));
                                        t243 = *(int *)((t167 + 0xC));
                                        *(unsigned int *)(((int)stk + 0)) = t243;
                                        FUN_0c0584b0((*(int *)(((int)stk + 8))), (t166 + 0x78), (*(int *)(((int)stk + 0))), (unsigned short)(-t243));
                                        t165 = 0xC17B1A0;
                                        FUN_0c17b1a0(((((struct o68_int *)(t166))->v)));
                                        nlTranslateV((t166 + 0x6C));
                                        t165 = 0xC17BC90;
                                        nlRotateAY(((((struct o7C_int *)(t166))->v)));
                                        t165 = 0xC17BAE0;
                                        nlRotateAX(((((struct o78_int *)(t166))->v)));
                                        nlStoreMatrix((t166 + 0x28));
                                        math_mat_get_translate((t166 + 0x28), (((int)stk + 0) + 0x6C));
                                        *(float *)(((int)stk + 88)) = 0.0f;
                                        *(float *)(((int)stk + 84)) = 0.0f;
                                        t165 = 0xC0582DE;
                                        *(float *)(((int)stk + 92)) = (-(((((struct o4_float *)(t167))->v)) * 1.0f));
                                        FUN_0c0582de((((int)stk + 0) + 0x54), (t166 + 0x28));
                                        nlSubVector3op((((int)stk + 0) + 0x54), (((int)stk + 0) + 0x60), (((int)stk + 0) + 0x54));
                                        nlAddVector3op((((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x54));
                                        t165 = 0xC17B1A0;
                                        FUN_0c17b1a0((((int)stk + 0) + 0x14));
                                        nlCalcPoint((((int)stk + 0) + 0x6C), (t166 + 0x6C));
                                    }
                                }
                            }
                            FUN_0c17b1a0(((((struct o68_int *)(t166))->v)));
                            nlTranslateV((t166 + 0x6C));
                            t165 = 0xC17BC90;
                            nlRotateAY(((((struct o7C_int *)(t166))->v)));
                            t165 = 0xC17BAE0;
                            nlRotateAX(((((struct o78_int *)(t166))->v)));
                            nlStoreMatrix((t166 + 0x28));
                            t167 = (t167 + 0x10);
                            t165 = 0xFFF0;
                            *(unsigned short *)((t166 + 0x6)) = ((*(short *)((t166 + 0x6))) & t165);
                            continue;
                        }
                        break;
                    }
                    t286 = t169;
                }
                t311 = t286;
            } else {
                t297 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((0xC3BD880 + (t297 << 2)) + 0x0)) = ((*(signed char *)(((0xC3BD880 + (t297 << 2)) + 0x0))) + 0x1);
                t311 = (t297 << 2);
            }
        }
        t326 = t311;
    }
    return t326;
}

int FUN_0c153178(int a4, int a5, int a6, int a7)
{
    int stk[2];

    register int R2;
    register int R3;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_5 = a4;
    v0_6 = a5;
    v0_7 = a6;
    v0_8 = a7;
    v0_9 = *(signed char *)((v0_5 + 0x14));
    v0_4 = (v0_9);
    v0_0 = (0xC179BF0);
    v0_1 = (0x0);
    v0_2 = (0xC20343C);
    v0_3 = (0xC20340C);
    v0_0 = (v0_5);
    v0_5 = (0xC179670);
    w0_0 = (1.0f);
    w0_1 = (0.0f);
    if ((v0_9 == 0)) goto L_C1531B4;
    if ((v0_4 != 1)) goto L_C1531B0;
    L_C1532B4:;
    v0_4 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_4 + 0x1);
    v0_5 = *(signed char *)((v0_0 + 0x2));
    if (!(((int)(short)(v0_4 + 0x1) >= (int)(*(int *)((((*(signed char *)(((0x15 + v0_0) + 0x0))) << 2) + (((((v0_5 << 1) + v0_5) << 2) << 1) + v0_3))))))) goto L_C15341E;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_5 = *(signed char *)((v0_0 + 0x15));
    w0_2 = *(float *)((((((((signed char)v0_5 - 1) << 1) + ((signed char)v0_5 - 1)) << 2) + ((((((v0_4 << 2) << 1) + v0_4) << 2) << 1) + v0_2)) + 0x0));
    w0_3 = *(float *)(((((((signed char)v0_5 << 1) + (signed char)v0_5) << 2) + ((((((v0_4 << 2) << 1) + v0_4) << 2) << 1) + v0_2)) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3);
    (((struct o4C_float *)(v0_0))->v) = ((w0_3 - w0_2) / (float)((*(int *)((((signed char)v0_5 << 2) + (((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3)))) - (*(int *)(((((signed char)v0_5 - 1) << 2) + (((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3))))));
    v0_4 = *(signed char *)((v0_0 + 0x2));
    *(unsigned int *)(((int)stk + 4)) = ((((((v0_4 << 2) << 1) + v0_4) << 2) << 1) + v0_2);
    v0_5 = *(signed char *)((v0_0 + 0x15));
    (((struct o50_float *)(v0_0))->v) = ((((((struct o4_float *)((((((((v0_4 << 2) << 1) + v0_4) << 2) << 1) + v0_2) + ((((signed char)v0_5 << 1) + (signed char)v0_5) << 2))))->v)) - ((((struct o4_float *)(((((((signed char)v0_5 - 1) << 1) + ((signed char)v0_5 - 1)) << 2) + (*(int *)(((int)stk + 4))))))->v))) / (float)((*(int *)(((((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3) + ((signed char)v0_5 << 2)))) - (*(int *)(((((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3) + (((signed char)v0_5 - 1) << 2))))));
    v0_8 = *(signed char *)((v0_0 + 0x2));
    *(unsigned int *)(((int)stk + 4)) = (v0_2 + (((((v0_8 << 2) << 1) + v0_8) << 2) << 1));
    v0_6 = *(signed char *)((v0_0 + 0x15));
    v0_4 = *(int *)(((((((v0_8 << 1) + v0_8) << 2) << 1) + v0_3) + ((signed char)v0_6 << 2)));
    v0_9 = *(int *)(((((((v0_8 << 1) + v0_8) << 2) << 1) + v0_3) + (((signed char)v0_6 - 1) << 2)));
    (((struct o54_float *)(v0_0))->v) = ((((((struct o8_float *)(((v0_2 + (((((v0_8 << 2) << 1) + v0_8) << 2) << 1)) + ((((signed char)v0_6 << 1) + (signed char)v0_6) << 2))))->v)) - ((((struct o8_float *)(((((((signed char)v0_6 - 1) << 1) + ((signed char)v0_6 - 1)) << 2) + (*(int *)(((int)stk + 4))))))->v))) / (float)(v0_4 - v0_9));
    v0_5 = (v0_6);
    v0_6 = ((signed char)v0_6);
    v0_7 = ((((((v0_8 << 1) + v0_8) << 2) << 1) + v0_3));
    v0_8 = (v0_8);
    FPUL_ = ((v0_4 - v0_9));
    goto L_C15341E;
    L_C15341E:;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    v0_4 = (0x40);
    w0_2 = (0.0f);
    if ((((((struct o40_float *)(v0_0))->v)) > 0.0f)) goto L_C153456;
    *(float *)((v0_0 + v0_4)) = w0_1;
    L_C153456:;
    v0_2 = ((((struct o44_float *)(v0_0))->v)) > w0_2;
    v0_4 = (0x44);
    w0_2 = (0.0f);
    if (v0_2) goto L_C153462;
    *(float *)((v0_0 + v0_4)) = w0_1;
    L_C153462:;
    v0_4 = (0x48);
    if ((((((struct o48_float *)(v0_0))->v)) > w0_2)) goto L_C15346C;
    *(float *)((v0_0 + v0_4)) = w0_1;
    L_C15346C:;
    if (((int)(*(short *)((v0_0 + 0x1C))) < (int)(*(int *)((0xC2034CC + (((*(signed char *)((v0_0 + 0x2))) << 2) << 1)))))) goto L_C15350C;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    v0_2 = ((0xB4 + v0_0));
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C1534AC;
    w0_2 = (0.0500000007f);
    FPUL_ = (0x3D4CCCCD);
    L_C1534B2:;
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) - w0_2);
    v0_2 = ((0xB8 + v0_0));
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C1534CC;
    w0_2 = (0.0500000007f);
    FPUL_ = (0x3D4CCCCD);
    L_C1534D2:;
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) - w0_2);
    v0_2 = ((0xBC + v0_0));
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C1534EC;
    w0_2 = (0.0500000007f);
    FPUL_ = (0x3D4CCCCD);
    L_C1534F2:;
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) - w0_2);
    v0_4 = (0xB4);
    if ((((((struct oB4_float *)(v0_0))->v)) > 0.0f)) goto L_C15350C;
    *(float *)((v0_0 + v0_4)) = w0_1;
    *(float *)((v0_0 + (v0_4 + 0x4))) = w0_1;
    *(float *)((v0_0 + ((v0_4 + 0x4) + 0x4))) = w0_1;
    L_C15350C:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_C15357E;
    if ((v0_4 == 1)) goto L_C153524;
    if ((v0_4 == 2)) goto L_C15352A;
    if ((v0_4 == 3)) goto L_C15352A;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    L_C15357E:;
    return v0_4;
    L_C15352A:;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    v0_4 = (v0_1);
    if ((v0_1 == 0)) goto L_C15357E;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) - (((math_sin_angle16((*(int *)((v0_0 + 0x38))))) * w0_0)));
    w0_1 = math_cos_angle16((*(int *)((v0_0 + 0x38))));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) - ((w0_1 * w0_0)));
    w0_2 = ((w0_1 * w0_0));
    goto L_C15357E;
    L_C153524:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    goto L_C15352A;
    L_C1534EC:;
    w0_2 = (0.0199999996f);
    FPUL_ = (0x3CA3D70A);
    goto L_C1534F2;
    L_C1534CC:;
    w0_2 = (0.0199999996f);
    FPUL_ = (0x3CA3D70A);
    goto L_C1534D2;
    L_C1534AC:;
    w0_2 = (0.0199999996f);
    FPUL_ = (0x3CA3D70A);
    goto L_C1534B2;
    L_C1531B0:;
    return FUN_0c03f346(v0_0, v0_6, v0_7, v0_8);
    L_C1531B4:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = 0x1;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    *(unsigned short *)((v0_0 + 0x1C)) = (*(int *)((((*(signed char *)(((0x15 + v0_0) + 0x0))) << 2) + (((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3))));
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_5 = *(signed char *)((v0_0 + 0x15));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x40)) = *(struct mv3 *)(((v0_2 + (((((v0_4 << 2) << 1) + v0_4) << 2) << 1)) + (((v0_5 << 1) + v0_5) << 2))); }
    (((struct o54_float *)(v0_0))->v) = w0_1;
    (((struct o50_float *)(v0_0))->v) = w0_1;
    (((struct o4C_float *)(v0_0))->v) = w0_1;
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C153280;
    *(int *)((int)stk + 0) = (v0_0 + 0x28);
    w0_2 = ((((struct o28_float *)(v0_0))->v));
    w0_2 = w0_2 + 100.0f * (math_sin_angle16((*(int *)((v0_0 + 0x38)))));
    (((struct o28_float *)(v0_0))->v) = w0_2;
    *(int *)((int)stk + 0) = (v0_0 + 0x30);
    *(unsigned int *)(((int)stk + 0)) = (v0_0 + 0x30);
    w0_2 = (100.0f);
    L_C1532A4:;
    v0_4 = *(int *)((int)stk + 0);
    w0_3 = (*(float *)((v0_4 + 0x0)));
    w0_3 = w0_3 + w0_2 * (math_cos_angle16((*(int *)((v0_0 + 0x38)))));
    *(float *)((v0_4 + 0x0)) = w0_3;
    w0_2 = (w0_2);
    goto L_C1532B4;
    L_C153280:;
    *(int *)((int)stk + 0) = (v0_0 + 0x28);
    w0_2 = ((((struct o28_float *)(v0_0))->v));
    w0_2 = w0_2 + 90.0f * (math_sin_angle16((*(int *)((v0_0 + 0x38)))));
    (((struct o28_float *)(v0_0))->v) = w0_2;
    *(int *)((int)stk + 0) = (v0_0 + 0x30);
    *(unsigned int *)(((int)stk + 0)) = (v0_0 + 0x30);
    w0_2 = (90.0f);
    goto L_C1532A4;
}

int FUN_0c16638c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    register int t6;

    t6 = *(signed char *)((a4 + 0x14));
    if (t6 != 0) {
        if (t6 == 1) {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A3364)->v))) {
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A33E4, 0xC2A33D8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3364)->v))), 0x0);
            }
            t6 = *(short *)((a4 + 0x1C));
            if (((int)t6 >= (int)((((struct o8_int *)0xC2A3364)->v))) && (t0 = (((struct oC_int *)0xC2A3364)->v), (int)t6 <= (int)t0)) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A33B4, 0xC2A33A8, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC2A3364)->v))), (((((struct o8_int *)0xC2A3364)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o10_int *)0xC2A3364)->v))) && (t1 = (((struct o14_int *)0xC2A3364)->v), (int)t0 <= (int)t1)) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A33CC, 0xC2A33C0, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC2A3364)->v))), (((((struct o10_int *)0xC2A3364)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o4_int *)0xC2A3364)->v))) && (t2 = (((struct o0_int *)0xC2A3364)->v), (int)t0 <= (int)t2)) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A338C, 0xC2A337C, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3364)->v))), (((((struct o4_int *)0xC2A3364)->v))));
                FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A338C, 0xC2A337C, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3364)->v))), (((((struct o4_int *)0xC2A3364)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A3364)->v))) {
                (((struct o14_uchar *)(a4))->v) = 0x3;
                t1 = 0x14;
            }
            return t1;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)0xC4B40CC;
    if ((t0 != 0) && (t0 != 1)) {
        if ((t0 != 2) && (t0 != 3)) {
            if (t0 == 4) {
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x7, 0x34, t1);
                FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x8, 0x34, (*(int *)0xC4B40CC));
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
                t0 = (((struct oC4_int *)(a4))->v);
                t2 = nlRand();
                t6 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
                if ((int)t2 >= 0) {
                    t6 = (t2 & 0x3);
                }
                t2 = (t6 * 0x16);
                if ((int)(t6 * 0x16) < 0) {
                    t2 = ((t6 * 0x16) + 0x3);
                }
                (((struct o80_uint *)(t0))->v) = ((int)(((((float)((t2 >> 1) >> 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A337C); }
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A337C); }
            }
        } else {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x3, 0x34, t1);
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x2, 0x34, (*(int *)0xC4B40CC));
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
            t0 = (((struct oC4_int *)(a4))->v);
            t2 = nlRand();
            t6 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
            if ((int)t2 >= 0) {
                t6 = (t2 & 0x3);
            }
            t2 = (t6 * 0x16);
            if ((int)(t6 * 0x16) < 0) {
                t2 = ((t6 * 0x16) + 0x3);
            }
            (((struct o80_uint *)(t0))->v) = ((int)(((((float)((t2 >> 1) >> 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A337C); }
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
            { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A337C); }
        }
    } else {
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x3, 0x34, t1);
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x2, 0x34, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = nlRand();
        t2 = ((~(((~t1) + 0x1) & 0x3)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x3);
        }
        t1 = (t2 * 0x16);
        if ((int)(t2 * 0x16) < 0) {
            t1 = ((t2 * 0x16) + 0x3);
        }
        (((struct o80_uint *)(t0))->v) = ((int)(((((float)((t1 >> 1) >> 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A337C); }
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A337C); }
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A3364)->v))) {
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A33E4, 0xC2A33D8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3364)->v))), 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o8_int *)0xC2A3364)->v))) && (t3 = (((struct oC_int *)0xC2A3364)->v), (int)t0 <= (int)t3)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A33B4, 0xC2A33A8, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC2A3364)->v))), (((((struct o8_int *)0xC2A3364)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o10_int *)0xC2A3364)->v))) && (t4 = (((struct o14_int *)0xC2A3364)->v), (int)t0 <= (int)t4)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A33CC, 0xC2A33C0, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC2A3364)->v))), (((((struct o10_int *)0xC2A3364)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o4_int *)0xC2A3364)->v))) && (t5 = (((struct o0_int *)0xC2A3364)->v), (int)t0 <= (int)t5)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A338C, 0xC2A337C, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3364)->v))), (((((struct o4_int *)0xC2A3364)->v))));
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A338C, 0xC2A337C, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3364)->v))), (((((struct o4_int *)0xC2A3364)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A3364)->v))) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
        t1 = 0x14;
    }
    return t1;
}
