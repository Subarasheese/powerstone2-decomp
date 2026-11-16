/* Straight-line functions with calls and guards (batch gen_ap): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3739_uchar { char p[0x3739]; unsigned char v; };
struct o373F_uchar { char p[0x373F]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3774_int { char p[0x3774]; int v; };
struct o3774_uint { char p[0x3774]; unsigned int v; };
struct o382C_ushort { char p[0x382C]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o39_uchar { char p[0x39]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o418_int { char p[0x418]; int v; };
struct o418_uint { char p[0x418]; unsigned int v; };
struct o41C_float { char p[0x41C]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o58_ushort { char p[0x58]; unsigned short v; };
struct o5A_uchar { char p[0x5A]; unsigned char v; };
struct o5B_uchar { char p[0x5B]; unsigned char v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_uchar { char p[0x5C]; unsigned char v; };
struct o5D_uchar { char p[0x5D]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uchar { char p[0x80]; unsigned char v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o81_uchar { char p[0x81]; unsigned char v; };
struct o82_uchar { char p[0x82]; unsigned char v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
int ADXT_SetLpFlg(int, int);
int FUN_0c01623a(void);
int FUN_0c0164ec(int, int);
int FUN_0c016bca(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03ae7a(void);
int FUN_0c03aeec(void);
int FUN_0c03af6a(void);
int FUN_0c03afdc(void);
int FUN_0c03b05a(void);
int FUN_0c03b0cc(void);
int FUN_0c03b14a(void);
int FUN_0c03b1c8(void);
int FUN_0c03b25a(void);
int FUN_0c03b2e8(void);
int FUN_0c03d358(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c04309a(int);
int FUN_0c045392(void);
int FUN_0c045a38(void);
int FUN_0c045fe0(void);
int FUN_0c04a556(void);
int FUN_0c04a99c(void);
int FUN_0c04d76c(void);
int FUN_0c052364(int, int);
int FUN_0c057cfa(int, int);
int FUN_0c059e60(int, int);
int FUN_0c05aaf6(int);
int FUN_0c05aca8(int, int);
int FUN_0c05af54(int);
int FUN_0c05b0a0(void);
int FUN_0c05bc10(void);
int FUN_0c05bd22(void);
int FUN_0c05bf24(void);
int FUN_0c06475c(int, int, float);
int FUN_0c064f80(int);
int FUN_0c06a444(int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c070980(int);
int FUN_0c071ae4(int);
int FUN_0c07309e(int);
int FUN_0c073448(int, int);
int FUN_0c073fe2(int, int);
int FUN_0c07434c(int, int);
int FUN_0c078558(int);
int FUN_0c07c23e(void);
int FUN_0c07c5dc(int, int, int);
int FUN_0c07d030(int, int);
int FUN_0c07d1fc(int, int, int, int);
int FUN_0c07d2c4(int, int);
int FUN_0c07d666(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c0819c2(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c08e226(int);
int FUN_0c08e590(int);
int FUN_0c08e6f6(int);
int FUN_0c08e930(int);
int FUN_0c08eb60(int);
int FUN_0c08f780(int);
int FUN_0c0b1cf2(void);
int FUN_0c0b21ac(int, int);
int FUN_0c0b21d8(void);
int FUN_0c0b2264(int, int, float);
int FUN_0c0b507a(int, int, int);
int FUN_0c0bb47e(void);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c0c4770(int, int, int);
int FUN_0c0c47a4(int, int, int);
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c52c4(int, int, int);
int FUN_0c0c8c08(int, int, int);
int FUN_0c0c8c36(int, int, int);
int FUN_0c0c8fd4(int, int, int);
int FUN_0c0c9568(int, int, int);
int FUN_0c0ce60c(int, int, int);
int FUN_0c0ce8f8(int, int, int, int);
int FUN_0c0cea46(int, int, int, int);
int FUN_0c0cefac(int, int, int);
int FUN_0c0cf16e(int, int, int);
int FUN_0c0cf1f4(int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0cff96(int, int);
int FUN_0c0d05f2(void);
int FUN_0c0d5188(void);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c0e6c60(int);
int FUN_0c0fc9b8(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c11ed26(void);
int FUN_0c11ed80(void);
int FUN_0c11fa50(void);
int FUN_0c11fa5a(void);
int FUN_0c1446d8(int, int);
int FUN_0c144924(int, int);
int FUN_0c144984(int, int, int);
int FUN_0c144b48(int);
int FUN_0c144b8e(int);
int FUN_0c14f824(int, int);
int FUN_0c15d386(int, int, int, int, int);
int FUN_0c15e4d2(int, int);
int FUN_0c179ac0(void);
int FUN_0c1854a0(int);
int FUN_0c18589e(int, int);
int FUN_0c185940(int, int);
int FUN_0c185d50(int);
int FUN_0c185dc0(int, int, int, int, int);
int FUN_0c186380(void);
int FUN_0c186740(int, int);
int FUN_0c1868e0(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c2b4174(int, int);
int game_mode_handler_6(void);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int FUN_0c01f7f4(void);
int FUN_0c05b900(void);
int FUN_0c0b0864(int a4, int a5);
int FUN_0c0c3e3a(int a4, int a5, int a6);
int FUN_0c0d30ea(int a4, int a5, int a6);
int FUN_0c0da628(int a4);
int FUN_0c0e6d4e(int a4, int a5, int a6, int a7);
int FUN_0c0f2628(int a4, int a5, int a6, int a7);
int FUN_0c0fcb42(int a4);
int FUN_0c0fe328(int a4, int a5, int a6, int a7);
int FUN_0c10302a(int a4);
int FUN_0c10384a(void);
int FUN_0c1292f8(int a4, int a5, int a6, int a7);
int FUN_0c144710(int a4);
int FUN_0c1660d4(int a4, int a5);
int FUN_0c16f91e(int a4, int a5, int a6, int a7, int a8);
int FUN_0c020950(void);
int FUN_0c026f8a(void);
int FUN_0c027668(void);
int FUN_0c03999c(int a4, int a5, int a6, int a7);
int FUN_0c041084(int a4);
int FUN_0c041792(void);
int FUN_0c047186(void);
int FUN_0c04942c(void);
int FUN_0c04dd38(void);
int FUN_0c060e70(int a4, int a5);
int FUN_0c073f6c(int a4, int a5, int a6);
int FUN_0c07fb42(int a4);
int FUN_0c0964c0(int a4);
float FUN_0c096764(int a4);
int FUN_0c0b06cc(int a4);
int FUN_0c0b76e0(int a4);
int FUN_0c0ba410(int a4);
int FUN_0c0ef162(int a4, int a5, int a6, int a7);
int FUN_0c0f7a38(void);
int FUN_0c104146(int a4);
int FUN_0c120362(void);
int FUN_0c11faa0(void);
int FUN_0c128112(int a4, int a5, int a6, int a7);
int FUN_0c14f04c(int a4, int a5, int a6, int a7);
int FUN_0c15e5d4(int a4, int a5, int a6, int a7);
int FUN_0c16a582(int a4);
int FUN_0c0173e6(void);
int FUN_0c022050(void);
int FUN_0c02c828(void);
int FUN_0c030442(int a4);
int FUN_0c030eec(int a4, int a5);
int FUN_0c040158(int a4, int a5, int a6, int a7);
int FUN_0c044d5e(int a4);
void FUN_0c05ad20(int a4, int a5, int a6, int a7);
int FUN_0c06b908(int a4, int a5, int a6, int a7);
int FUN_0c074c0c(int a4);
int FUN_0c07871e(int a4, int a5, int a6, int a7);
int FUN_0c07a018(int a4, int a5, int a6, int a7);
int FUN_0c081516(int a4, int a5);
int FUN_0c08fa24(int a4, int a5, int a6, int a7);
int FUN_0c0abea8(int a4);
int FUN_0c0b6fc0(int a4);
int FUN_0c0ceb94(int a4, int a5, int a6, int a7);
int FUN_0c0d2124(float f4);
int FUN_0c0ce6ec(int a4, int a5, int a6);
int FUN_0c0c9810(int a4, int a5, int a6);
int FUN_0c0cf280(int a4, int a5, int a6, int a7);
int FUN_0c144e7a(int a4);



int FUN_0c0b0864(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o20_ushort *)(a4))->v) = 0x0;
    t0 = FUN_0c07ebd0(a4);
    t1 = t0;
    if (t0 != 0) {
        (((struct o3850_uint *)(a4))->v) = (unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
        t0 = *(int *)((a4 + 0x38));
        t2 = (((struct o3850_short *)(a4))->v);
        t3 = (unsigned short)(t2 - t0);
        if ((0x8000 & (unsigned short)(t2 - t0)) != 0) {
            t3 = ((unsigned short)(t2 - t0) | 0xFFFF0000);
        }
        if ((int)t3 <= (int)(-a5)) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - a5);
        } else {
            if ((int)t3 >= (int)a5) {
                t0 = ((*(int *)((a4 + 0x38))) + a5);
            } else {
                t0 = ((*(int *)((a4 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u))) >> 1));
            }
            *(unsigned int *)((a4 + 0x38)) = t0;
        }
        t1 = 0x3850;
    }
    return t1;
}

int FUN_0c0c3e3a(int a4, int a5, int a6)
{
    int stk[3];
    int t2;
    register int t12;
    register int t13;
    register int t24;
    register int t25;

    if ((*(signed char *)0xC542237) != 1) {
        t2 = *(signed char *)((a4 + 0x41D));
        if ((t2 != 4) && (t2 != 5)) {
            FUN_0c187798(t2, a5, a6);
            if (((((struct oA4_int *)(a4))->v)) != 0) {
                math_mat_get_translate(((((struct oA4_int *)(a4))->v)), ((int)stk + 0));
            }
            if (!((*(float *)0xC541098) > (*(float *)(((int)stk + 4)))) && ((t12 = *(signed char *)((a4 + 0x41D)), t12 == 11) || (t13 = *(signed char *)0xC540F98, t13 == 0))) {
                return 0x0;
            }
            FUN_0c0c2d56(a4, 0xB, 0x0);
            return 0x1;
        }
        return 0x0;
    }
    FUN_0c187798(a4, a5, a6);
    if (((((struct oA4_int *)(a4))->v)) != 0) {
        math_mat_get_translate(((((struct oA4_int *)(a4))->v)), ((int)stk + 0));
    }
    if (!((*(float *)0xC541098) > (*(float *)(((int)stk + 4)))) && ((t24 = *(signed char *)((a4 + 0x41D)), t24 == 11) || (t25 = *(signed char *)0xC540F98, t25 == 0))) {
        return 0x0;
    }
    FUN_0c0c2d56(a4, 0xB, 0x0);
    return 0x1;
}

int FUN_0c0d30ea(int a4, int a5, int a6)
{
    int stk[6];
    register float u1;
    register int t11;
    register int t12;
    register float u5;

    *(unsigned int *)(((int)stk + 4)) = a5;
    FUN_0c187798(a4, a5, a6);
    u1 = (((struct o0_float *)0xC0D31E4)->v);
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        u5 = ((*(float *)(((int)stk + 12))) - u1);
    } else {
        u5 = ((*(float *)(((int)stk + 12))) + u1);
    }
    *(float *)(((int)stk + 12)) = u5;
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u1);
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o4_float *)0xC0D31E4)->v)));
    t11 = (*(int *)(((int)stk + 4)));
    *(int *)((int)stk + 0) = t11;
    t12 = *(signed char *)((a4 + 0x2));
    *(unsigned int *)(((int)stk + 8)) = (0xC1C7F0C + ((((t12 << 1) + t12) << 2) << 1));
    return (FUN_0c15d386(0x1, (((int)stk + 0) + 0xC), (*(int *)(((int)stk + 8))), ((0xC1C7F0C + ((((t12 << 1) + t12) << 2) << 1)) + 0xC), t11));
}

int FUN_0c0da628(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c037320(0x83, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x9, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC0DA6A0;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        t2 = *(signed char *)((a4 + 0x2));
        t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x1);
        }
        *(unsigned char *)((t1 + 0x2)) = t3;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        FUN_0c03733c(t1, 0x83, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t0 = 0xA9;
    }
    return t0;
}

int FUN_0c0e6d4e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    if ((int)(*(short *)((a4 + 0x1E))) >= (int)(*(int *)((((*(int *)((0xC288114 + (((*(signed char *)((a4 + 0x2))) << 2) << 1)))) + ((((t0 << 1) + t0) << 2) << 1)) + 0x0)))) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t0 = *(signed char *)((a4 + 0x2));
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)(*(int *)(((0xC288114 + ((t0 << 2) << 1)) + 0x4)))) {
            return FUN_0c03f346(a4, 0x0, (0xC288114 + ((t0 << 2) << 1)), a7);
        }
        return FUN_0c0e6c60(a4);
    }
    return FUN_0c0e6c60(a4);
}

int FUN_0c0f2628(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c07d1fc(a4, a5, a6, a7);
    if (t0 == 0) {
        t0 = *(signed char *)((a4 + 0x2));
        FUN_0c0e2700((a4 + 0x28), (*(int *)((0xC1CE014 + ((((t0 << 1) + t0) << 2) << 1)))), 0xFFFFFFFF, 0x2);
    }
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
}

int FUN_0c0fcb42(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
    }
    if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c0fc9b8(a4, (*(signed char *)(((t1 + 0x41C) + 0x2))), 0x0);
    return FUN_0c0fc9b8(a4, ((*(signed char *)(((t1 + 0x41C) + 0x0))) + 0x1), 0x1);
}

int FUN_0c0fe328(int a4, int a5, int a6, int a7)
{
    register int t10;

    (((struct o0_uint *)0xC472B60)->v) = (FUN_0c03add8(a4, a5, a6, a7));
    (((struct o4_uint *)0xC472B60)->v) = (FUN_0c03b14a());
    (((struct o8_uint *)0xC472B60)->v) = (FUN_0c03ae7a());
    (((struct oC_uint *)0xC472B60)->v) = (FUN_0c03aeec());
    (((struct o10_uint *)0xC472B60)->v) = (FUN_0c03b1c8());
    (((struct o14_uint *)0xC472B60)->v) = (FUN_0c03af6a());
    (((struct o18_uint *)0xC472B60)->v) = (FUN_0c03b0cc());
    (((struct o1C_uint *)0xC472B60)->v) = (FUN_0c03afdc());
    (((struct o20_uint *)0xC472B60)->v) = (FUN_0c03b05a());
    (((struct o24_uint *)0xC472B60)->v) = (FUN_0c03b25a());
    t10 = FUN_0c03b2e8();
    (((struct o28_uint *)0xC472B60)->v) = t10;
    return t10;
}

int FUN_0c10302a(int a4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t2 = *(signed char *)((a4 + 0x2));
        if (t2 != 0) {
            if (t2 == 1) {
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 10.0f);
            }
            t2 = *(signed char *)((a4 + 0x2));
            if (t2 != 0) {
                t3 = t2;
                if (t2 == 1) {
                    if (((*(signed char *)0xC541F43) == 0) && (t0 = *(signed char *)0xC541F44, t0 == 0)) {
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                    } else {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    t3 = 0xA8;
                }
                return t3;
            }
        }
    } else {
        t0 = *(signed char *)((a4 + 0x2));
        if (t0 != 0) {
            t2 = t0;
            if (t0 == 1) {
                if (((*(signed char *)0xC541F43) == 0) && (t1 = *(signed char *)0xC541F44, t1 == 0)) {
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                } else {
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                }
                t2 = 0xA8;
            }
            return t2;
        }
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x5B);
    return FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1FC604);
}

int FUN_0c10384a(void)
{
    register int t0;
    register int t3;
    register int t4;
    register int t8;

    t0 = 0x0;
    for (;;) {
        t3 = FUN_0c037320((*(int *)((0xC290958 + (t0 << 2)))), (*(int *)0xC4B410C));
        t4 = FUN_0c03f444(0x5, 0x0, t3);
        t8 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, (*(int *)((0xC290958 + (t0 << 2)))), (*(int *)0xC4B410C));
            (((struct oAC_ushort *)(t4))->v) = 0xF;
            (((struct oA9_uchar *)(t4))->v) = 0x80;
            *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t4 + 0x2)) = t0;
            *(unsigned int *)((t4 + 0x4)) = 0xC103716;
            t8 = t0;
        }
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)0x2) {
            break;
        }
    }
    return t8;
}

int FUN_0c1292f8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) - 0.0333333351f);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.0333333351f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c144710(int a4)
{
    register int t1;

    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        t1 = FUN_0c0b21d8();
        if (t1 != 0) {
            (((struct o130_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct o130_uchar *)(a4))->v) = 0xA;
        }
        FUN_0c0b2264(a4, 0x3, (((((struct o41C_float *)(a4))->v)) - ((((struct o160_float *)(a4))->v))));
        FUN_0c0b21ac(a4, 0x3);
        (((struct o41C_float *)(a4))->v) = ((((struct o160_float *)(a4))->v));
    }
    if ((int)(*(signed char *)((a4 + 0x130))) > 0) {
        FUN_0c1446d8(a4, 0x1);
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        return 0x130;
    }
    return FUN_0c1446d8(a4, 0x0);
}

int FUN_0c1660d4(int a4, int a5)
{
    int stk[2];
    register int t2;
    register int t10;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    FUN_0c037320(0x38, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, 0x6);
    t10 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x38, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(t2))->v) = 0x0;
        (((struct oAC_ushort *)(t2))->v) = 0x3F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x4)) = 0xC165B50;
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned int *)((t2 + 0x10)) = (*(int *)(((*(int *)(((int)stk + 0))) + 0x10)));
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t2 + 0x3C)) = 0x0;
        *(unsigned int *)((t2 + 0x38)) = 0x0;
        *(unsigned int *)((t2 + 0x34)) = 0x0;
        (((struct o48_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o44_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(t2))->v) = (1.0f + 1.0f);
        t10 = 0x40;
    }
    return t10;
}

int FUN_0c16f91e(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    register int t1;
    register int t3;
    register int t10;
    register int t12;
    register int t19;

    t0 = *(int *)0xC475AE4;
    if (a8 == 0) {
        if ((0x800 & t0) != 0) {
            t1 = *(signed char *)((a4 + 0x0));
            *(unsigned char *)((a4 + 0x0)) = (t1 - a7);
            if ((int)(signed char)(t1 - a7) >= (int)(signed char)a5) {
            } else {
                *(unsigned char *)((a4 + 0x0)) = a5;
            }
            t19 = 0x1;
        } else {
            t19 = 0x0;
            if ((t0 & 0x400) != 0) {
                t3 = *(signed char *)((a4 + 0x0));
                *(unsigned char *)((a4 + 0x0)) = (t3 + a7);
                if ((int)(signed char)(t3 + a7) <= (int)(signed char)a6) {
                } else {
                    *(unsigned char *)((a4 + 0x0)) = a6;
                }
                t19 = 0x1;
            }
        }
    } else {
        if ((0x800 & t0) != 0) {
            t10 = *(signed char *)((a4 + 0x0));
            *(unsigned char *)((a4 + 0x0)) = (t10 - a7);
            if ((int)(signed char)(t10 - a7) < (int)(signed char)a5) {
                *(unsigned char *)((a4 + 0x0)) = a6;
            }
            t19 = 0x1;
        } else {
            t19 = 0x0;
            if ((t0 & 0x400) != 0) {
                t12 = *(signed char *)((a4 + 0x0));
                *(unsigned char *)((a4 + 0x0)) = (t12 + a7);
                if ((int)(signed char)(t12 + a7) > (int)(signed char)a6) {
                    *(unsigned char *)((a4 + 0x0)) = a5;
                }
                t19 = 0x1;
            }
        }
    }
    return t19;
}

int FUN_0c020950(void)
{
    register int t0;
    register int t1;

    (((struct o30_uchar *)0xC309829)->v) = 0x0;
    (((struct o39_uchar *)0xC309829)->v) = 0x0;
    (((struct o1_uchar *)0xC309584)->v) = 0x1;
    (((struct o0_uchar *)0xC309584)->v) = 0x1;
    (((struct o1_uchar *)0xC307580)->v) = 0x1;
    (((struct o0_uchar *)0xC307580)->v) = 0x1;
    (((struct o3_uchar *)0xC3054C6)->v) = 0x0;
    (((struct o2_uchar *)0xC3054C6)->v) = 0x0;
    (((struct o2_uchar *)0xC309584)->v) = 0x0;
    (((struct o1_uchar *)0xC309829)->v) = 0x0;
    (((struct o0_uchar *)0xC309829)->v) = 0x0;
    (((struct o0_uchar *)0xC3054C6)->v) = 0x1;
    t0 = 0xC309588;
    t1 = 0x0;
    for (;;) {
        *(unsigned short *)((t0 + 0xC)) = 0x0;
        t1 = (t1 + 0x1);
        *(unsigned short *)((t0 + 0xE)) = 0x0;
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        *(unsigned char *)((t0 + 0x4)) = 0x0;
        *(unsigned short *)((t0 + 0x16)) = 0x0;
        *(unsigned short *)((t0 + 0x14)) = 0x0;
        *(unsigned short *)((t0 + 0x10)) = 0x0;
        *(unsigned short *)((t0 + 0x12)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x18)) = 0x0;
        *(unsigned short *)((t0 + 0x1A)) = 0x0;
        (((struct o26_ushort *)(t0))->v) = 0x0;
        (((struct o24_ushort *)(t0))->v) = 0x0;
        (((struct o20_ushort *)(t0))->v) = 0x0;
        (((struct o22_ushort *)(t0))->v) = 0x0;
        t0 = (t0 + 0x28);
        if ((int)(unsigned char)t1 >= (int)0x4) {
            break;
        }
    }
    return 0x22;
}



int FUN_0c03999c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a6 != 0) {
        t0 = (((a5 * 0x10E0) + ((0x444 + a4) + 0x24)) + (((((a7 << 2) << 1) + a7) << 2) << 2));
        if (a6 != 1) {
            t1 = (((0x21E4 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2));
            if (a6 != 2) {
                t1 = (((0x2784 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2));
                if (a6 != 3) {
                    t1 = (((0x2D24 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2));
                    if (a6 != 4) {
                        t1 = 0x0;
                    }
                }
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t1 = (*(int *)(((0xC4 + a4) + (a7 << 2))));
    }
    return t1;
}

int FUN_0c041084(int a4)
{
    register int t0;
    int t1;
    register int t2;

    t2 = FUN_0c0d5188();
    if ((t2 == 0) && ((t0 = *(signed char *)0xC5429B4, t0 != 2) && (t1 = *(signed char *)0xC5429C9, t1 == 0))) {
        (((struct oA_ushort *)0xC542228)->v) = 0x3C;
    }
    t0 = 0x0;
    if ((*(signed char *)0xC542235) == 2) {
        t1 = (((struct oA_short *)0xC542228)->v);
        (((struct oA_ushort *)0xC542228)->v) = (t1 - 1);
        t2 = 0x0;
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct oA_ushort *)0xC542228)->v) = a4;
            t1 = (((struct o8_short *)0xC542228)->v);
            (((struct o8_ushort *)0xC542228)->v) = (t1 - 1);
            t2 = 0x1;
            if ((int)(short)(t1 - 1) < 0) {
                t2 = 0x2;
            }
        }
        FUN_0c11fa50();
        t0 = t2;
    }
    (((struct o0_uint *)0xC542228)->v) = (((((struct o0_int *)0xC542228)->v)) + 0x1);
    return t0;
}

int FUN_0c041792(void)
{
    register int t2;

    (((struct o0_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FA) + 0x1);
    (((struct o1_uchar *)0xC5421FA)->v) = 0x0;
    FUN_0c05af54(0x0);
    t2 = *(signed char *)0xC542239;
    if (((t2 & 0xF0) != 0) && (((t2 & 0xF0) != 48) && ((t2 & 0xF0) != 16))) {
        if (((t2 & 0xF0) == 32) || ((t2 & 0xF0) == 64)) {
            *(unsigned int *)0xC542204 = 0x0;
        }
        return (t2 & 0xF0);
    }
    *(unsigned int *)0xC542204 = 0x3C;
    *(unsigned char *)0xC54225E = 0x1;
    FUN_0c052364(0x0, 0xFFFFFFFF);
    FUN_0c052364(0x1, 0xFFFFFFFF);
    FUN_0c052364(0x2, 0xFFFFFFFF);
    FUN_0c052364(0x3, 0xFFFFFFFF);
    return FUN_0c05b0a0();
}

int FUN_0c047186(void)
{
    register int t14;

    if ((unsigned char)(*(signed char *)0xC40F820) == 3) {
        (((struct o0_uchar *)0xC40F820)->v) = 0x5;
    }
    if ((unsigned char)(*(signed char *)0xC40F820) == 4) {
        (((struct o0_uchar *)0xC40F820)->v) = 0x6;
    }
    if ((unsigned char)(*(signed char *)0xC40F821) == 3) {
        (((struct o1_uchar *)0xC40F820)->v) = 0x5;
    }
    if ((unsigned char)(*(signed char *)0xC40F821) == 4) {
        (((struct o1_uchar *)0xC40F820)->v) = 0x6;
    }
    if ((unsigned char)(*(signed char *)0xC40F822) == 3) {
        (((struct o2_uchar *)0xC40F820)->v) = 0x5;
    }
    if ((unsigned char)(*(signed char *)0xC40F822) == 4) {
        (((struct o2_uchar *)0xC40F820)->v) = 0x6;
    }
    if ((unsigned char)(*(signed char *)0xC40F823) == 3) {
        (((struct o3_uchar *)0xC40F820)->v) = 0x5;
    }
    t14 = *(signed char *)0xC40F823;
    if ((unsigned char)t14 == 4) {
        (((struct o3_uchar *)0xC40F820)->v) = 0x6;
    }
    return (unsigned char)t14;
}

int FUN_0c04942c(void)
{
    register int t0;
    register int t7;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t7 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t2) + 0x0))), 0x0, (*(int *)((0xC1B7C20 + t2))), (*(int *)0xC4B410C));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x2) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0493C6;
        t7 = 0xFFFFFFFF;
    }
    return t7;
}

int FUN_0c04dd38(void)
{
    register int t0;
    register int t7;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t7 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t2) + 0x0))), 0x0, (*(int *)((0xC1B7F20 + t2))), (*(int *)0xC4B410C));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x3) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04DC2C;
        t7 = 0xFFFFFFFF;
    }
    return t7;
}

int FUN_0c060e70(int a4, int a5)
{
    register int t2;
    register int t14;
    register int t3;
    register int t4;
    register int t5;
    register int t9;
    register int t13;

    t2 = *(signed char *)(((*(int *)((((((a4 << 1) + a4) << 2) + 0xC28E494) + (a5 << 2)))) + 0x3));
    t14 = t2;
    if ((int)t2 > 0) {
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            t5 = *(int *)(((((((a4 << 1) + a4) << 2) + 0xC28E494) + (a5 << 2)) + 0x0));
            t9 = 0x14;
            if ((*(signed char *)(((t5 + t4) + 0x1))) != 0) {
                
                t9 = 0x18;
            }
            t13 = FUN_0c06475c(0x0, (t5 + t4), (((((struct oC_float *)((t5 + t4)))->v)) + (*(float *)(((t5 + t4) + t9)))));
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x20);
            if ((int)t3 >= (int)t2) {
                break;
            }
        }
        t14 = t13;
    }
    return t14;
}

int FUN_0c073f6c(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)(((((short)(signed char)a5 * (short)0x3938) + 0xC532498) + 0x2));
    if (t0 != 12) {
        if (t0 != 13) {
            (((struct o418_uint *)((((short)(signed char)a5 * (short)0x3938) + 0xC532498)))->v) = a6;
            (((struct o3774_uint *)((((short)(signed char)a5 * (short)0x3938) + 0xC532498)))->v) = a4;
            if (((((struct o3774_int *)((((short)(signed char)a5 * (short)0x3938) + 0xC532498)))->v)) != 0) {
                (((struct o373F_uchar *)((((short)(signed char)a5 * (short)0x3938) + 0xC532498)))->v) = (*(signed char *)((((((struct o3774_int *)((((short)(signed char)a5 * (short)0x3938) + 0xC532498)))->v)) + 0x1)));
            } else {
                (((struct o373F_uchar *)((((short)(signed char)a5 * (short)0x3938) + 0xC532498)))->v) = 0xFFFFFFFF;
            }
            if ((*(signed char *)(((((short)(signed char)a5 * (short)0x3938) + 0xC532498) + 0x373F))) != -1) {
                if ((*(signed char *)(((((short)(signed char)a5 * (short)0x3938) + 0xC532498) + 0x3719))) != (*(signed char *)(((0xC532498 + ((short)(*(signed char *)(((((short)(signed char)a5 * (short)0x3938) + 0xC532498) + 0x373F))) * (short)0x3938)) + 0x3719)))) {
                    FUN_0c07434c((((short)(signed char)a5 * (short)0x3938) + 0xC532498), 0x0);
                }
            } else {
                FUN_0c07434c((((short)(signed char)a5 * (short)0x3938) + 0xC532498), 0x0);
            }
            return FUN_0c073448((((short)(signed char)a5 * (short)0x3938) + 0xC532498), 0x0);
        }
        return t0;
    }
    return t0;
}

int FUN_0c07fb42(int a4)
{
    int t0;
    int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;

    t5 = FUN_0c064f80(a4);
    if ((t5 != 0) && ((t0 = (((struct o3768_int *)(a4))->v), t0 != 0) && (t1 = (((struct o3768_int *)(a4))->v), t2 = *(signed char *)((t1 + 0x41C)), (unsigned char)t2 == 0xC8))) {
        t0 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if ((t0 != 0) && (t3 = (((struct o3768_int *)(a4))->v), t4 = *(signed char *)((0x424 + t3)), t4 != 4)) {
            t0 = *(signed char *)((a4 + 0x2));
            if ((t0 != 4) && ((t0 != 5) && ((t0 != 9) && (t0 != 15)))) {
                *(volatile signed char *)((a4 + 0x371C));
            }
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0964c0(int a4)
{
    register int t2;

    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t2 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if (t2 != 0) {
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d666((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28)));
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v));
        }
    }
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x40);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x1E, 0xFFFFFFFF, 0x2, 0x1E);
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    return 0x14;
}

float FUN_0c096764(int a4)
{
    register int t0;
    register float t6;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0xB, (t0), 0x1, 0xB);
    (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 15.0f);
    (((struct o50_float *)(a4))->v) = -10.0f;
    t6 = math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
    (((struct o54_float *)(a4))->v) = (t6 * 15.0f);
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x3;
    return (t6 * 15.0f);
}

int FUN_0c0b06cc(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x1C, (t0), 0x1, 0x1C);
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
    FUN_0c07d030(a4, 0x0);
    *(unsigned short *)((a4 + 0x1C)) = 0x5;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x7;
    (((struct o17_uchar *)(a4))->v) = 0x5;
    return 0x17;
}

int FUN_0c0b76e0(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x3, (t0), 0x2, 0x3);
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
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = -1.0f;
    return 0x5C;
}

int FUN_0c0ba410(int a4)
{
    int stk[3];
    register int t1;
    register int t18;
    register int t3;
    register float u4;
    register float u9;
    register float u14;

    t1 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0xA);
    t18 = t1;
    if (t1 == 0) {
        t3 = (int)((int)(FUN_0c179ac0()) % (int)0xC8);
        u4 = *(float *)0xC0BA54C;
        u9 = ((((struct o28_float *)(a4))->v));
        u9 = u9 + (((float)t3 + u4)) * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        *(float *)(((int)stk + 0)) = u9;
        u14 = ((((struct o30_float *)(a4))->v));
        u14 = u14 + (((float)t3 + u4)) * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        *(float *)(((int)stk + 8)) = u14;
        *(float *)(((int)stk + 4)) = ((((struct o168_float *)(a4))->v));
        t18 = (FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0)));
    }
    return t18;
}

int FUN_0c0ef162(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) - 1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t0 = 0x16;
        } else {
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t2 = 0x16;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0xB4;
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        (((struct o50_float *)(a4))->v) = (*(float *)0xC0EF1F8);
        (((struct o5C_float *)(a4))->v) = -1.0f;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        t0 = *(int *)(((0xC4 + a4) + 0x4));
        t2 = *(int *)(((0xC4 + a4) + 0x8));
        (((struct o7C_uint *)(t2))->v) = 0x0;
        (((struct o7C_uint *)(t0))->v) = 0x0;
        (((struct o78_uint *)(t2))->v) = 0x0;
        (((struct o78_uint *)(t0))->v) = 0x0;
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t2 = 0x16;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0f7a38(void)
{
    register int t0;
    register int t7;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t7 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t2) + 0x0))), 0x0, (*(int *)((0xC1FB2C0 + t2))), (*(int *)0xC4B410C));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x2) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0F79AC;
        t7 = 0xFFFFFFFF;
    }
    return t7;
}

int FUN_0c104146(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((*(int *)(((a4 << 2) + 0xC2909F8))), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)(((a4 << 2) + 0xC2909F8))), (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned int *)((t1 + 0x4)) = 0xC104044;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t1 + 0x2)) = a4;
        (((struct o28_float *)(t1))->v) = 136.0f;
        (((struct o2C_float *)(t1))->v) = 50.0f;
        (((struct o30_float *)(t1))->v) = -5.0f;
        t0 = 0x30;
    }
    return t0;
}

int FUN_0c120362(void)
{
    register int t0;
    register int t7;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t7 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t2) + 0x0))), 0x0, (*(int *)((0xC201900 + t2))), (*(int *)0xC4B410C));
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x2) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC120340;
        t7 = 0xFFFFFFFF;
    }
    return t7;
}

int FUN_0c11faa0(void)
{
    register int t9;

    FUN_0c11fa5a();
    (((struct oC_uint *)0xC475200)->v) = (((((struct oC_int *)0xC475200)->v)) + ((((struct o8_int *)0xC475200)->v)));
    if ((unsigned int)((((struct oC_int *)0xC475200)->v)) >= (unsigned int)0x5F5E09C) {
        (((struct oC_uint *)0xC475200)->v) = 0x5F5E09C;
    }
    (((struct o4_uint *)0xC475200)->v) = (((((struct o4_int *)0xC475200)->v)) + ((((struct o0_int *)0xC475200)->v)));
    if ((unsigned int)((((struct o4_int *)0xC475200)->v)) >= (unsigned int)0x57030) {
        (((struct o4_uint *)0xC475200)->v) = 0x57030;
    }
    t9 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC475170 + t9) + 0x0)) = ((*(signed char *)(((0xC475170 + t9) + 0x0))) + (*(signed char *)(((0xC4750E0 + t9) + 0x0))));
        if ((int)(*(signed char *)(((0xC475170 + t9) + 0x0))) >= (int)0x63) {
            *(unsigned char *)(((0xC475170 + t9) + 0x0)) = 0x63;
        }
        t9 = (t9 + 0x1);
        if ((int)t9 > (int)0x8F) {
            break;
        }
    }
    return 0x158;
}

int FUN_0c128112(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C128122;
    if ((v0_1 == 1)) goto L_C12812E;
    return FUN_0c03f346(v0_0, a5, a6, a7);
    L_C12812E:;
    if (((*(signed char *)((v0_0 + 0x15))) != 0)) goto L_C128166;
    w0_0 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_0 + 0.600000024f);
    (((struct o48_float *)(v0_0))->v) = (w0_0 + 0.600000024f);
    (((struct o44_float *)(v0_0))->v) = (w0_0 + 0.600000024f);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    FPUL_ = (0x3F19999A);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C128184;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x5;
    v0_1 = (0x5);
    L_C128184:;
    return v0_1;
    L_C128166:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C128184;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C128184;
    L_C128122:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0xA;
    goto L_C12812E;
}

int FUN_0c14f04c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = (FUN_0c037320(0x3, (*(int *)0xC4B40CC)));
    }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1C))), 0x3, (*(int *)0xC4B40CC));
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1E));
    t1 = t0;
    if ((int)(*(short *)((a4 + 0x1C))) >= (int)t0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c15e5d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            FUN_0c15e4d2(a4, a5);
        }
        t1 = *(signed char *)((t0 + 0x41D));
        t2 = t1;
        if (t1 != 7) {
            t2 = t1;
            if (t1 != 5) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t2 = 0x14;
            }
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        FUN_0c15e4d2(a4, a5);
    }
    t1 = *(signed char *)((t0 + 0x41D));
    t0 = t1;
    if (t1 != 7) {
        t2 = t1;
        if (t1 != 5) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t2 = 0x14;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c16a582(int a4)
{
    register int t0;
    int t2;
    register float u3;

    t0 = (((struct o41C_int *)(a4))->v);
    (((struct o41C_uint *)(a4))->v) = (t0 + 0x1555);
    t2 = *(signed char *)((a4 + 0x2));
    u3 = (float)(int)((math_sin_angle16((t0 + 0x1555))) * 30.0f);
    if ((t2 != 0) && (t2 != 1)) {
        (((struct o7C_uint *)(((((struct oD8_int *)(a4))->v))))->v) = (int)((u3 * 65536.0f) / 360.0f);
        (((struct o7C_uint *)(((((struct oDC_int *)(a4))->v))))->v) = (-(int)((u3 * 65536.0f) / 360.0f));
    } else {
        (((struct o7C_uint *)(((((struct oD0_int *)(a4))->v))))->v) = (int)((u3 * 65536.0f) / 360.0f);
        (((struct o7C_uint *)(((((struct oD4_int *)(a4))->v))))->v) = (-(int)((u3 * 65536.0f) / 360.0f));
    }
    return 0x7C;
}

int FUN_0c0173e6(void)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t0 = FUN_0c01623a();
        if (t0 == 0) {
            return FUN_0c016bca();
        }
        t0 = *(int *)0xC304BA0;
        if ((*(signed char *)0xC304C24) != 0) {
            t1 = 0xC304C24;
            t2 = (unsigned char)(*(signed char *)((t0 + 0x4D)));
        } else {
            t1 = 0xC304BA4;
            t2 = (unsigned char)(*(signed char *)((t0 + 0x50)));
        }
        return FUN_0c0164ec(t1, t2);
    }
    return 0x4C;
}

int FUN_0c022050(void)
{
    register int t0;

    FUN_0c18589e(0xC305390, 0x20);
    t0 = *(int *)0xC309994;
    *(unsigned int *)(((((unsigned int)((unsigned int)((unsigned int)t0 >> 2) >> 2) >> 1) << 2) + 0xC305390)) = ((*(int *)(((((unsigned int)((unsigned int)((unsigned int)t0 >> 2) >> 2) >> 1) << 2) + 0xC305390))) | ((int)0x1 << (int)((*(int *)0xC309994) & 0x1F)));
    (((struct o0_uint *)0xC3053B0)->v) = 0x0;
    (((struct o4_uint *)0xC3053B0)->v) = 0x0;
    t0 = FUN_0c185dc0(((*(int *)0xC309994) + 0x1), 0xC305390, 0x0, 0x0, 0xC3053B0);
    if ((int)t0 > 0) {
        if (((*(int *)(((((unsigned int)((unsigned int)((unsigned int)(*(int *)0xC309994) >> 2) >> 2) >> 1) << 2) + 0xC305390))) & ((int)0x1 << (int)((*(int *)0xC309994) & 0x1F))) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c02c828(void)
{
    register int t0;

    (((struct o0_uchar *)0xC541F41)->v) = 0x1;
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        (((struct o5A_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5B_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5C_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o5D_uchar *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        *(unsigned int *)((((t0 * 0x98) + 0xC541CDC) + 0x20)) = 0x0;
        FUN_0c04309a(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    *(unsigned int *)0xC542390 = 0x0;
    FUN_0c0bb47e();
    FUN_0c0d05f2();
    return FUN_0c07c23e();
}

int FUN_0c030442(int a4)
{
    (((struct o0_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD444) | ((int)0x1 << (int)((((struct o78_int *)(a4))->v))));
    (((struct o1_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD445) | ((int)0x1 << (int)((((struct o78_int *)(a4))->v))));
    (((struct o2_uchar *)0xC3BD444)->v) = ((int)0x1 << (int)((((struct o78_int *)(a4))->v)));
    (((struct o4_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD448) & (~((int)0x1 << (int)((((struct o78_int *)(a4))->v)))));
    (((struct o5_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD449) & (~((int)0x1 << (int)((((struct o78_int *)(a4))->v)))));
    (((struct o81_uchar *)(a4))->v) = 0x0;
    (((struct o58_ushort *)(a4))->v) = 0x0;
    (((struct o80_uchar *)(a4))->v) = 0x0;
    (((struct o44_ushort *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    (((struct o82_uchar *)(a4))->v) = 0xFFFFFFFF;
    return FUN_0c04309a(((((struct o78_int *)(a4))->v)));
}

int FUN_0c030eec(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(short *)(((a5 * 0x98) + 0xC541D20));
    t1 = (int)((int)t0 / (int)0xA);
    t2 = (int)((int)t0 % (int)0xA);
    if (t1 == 0) {
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB9C) + 0x0))) + 0x5) + 0x0)) = 0x20;
    } else {
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB9C) + 0x0))) + 0x5) + 0x0)) = (t1 + 0x10);
    }
    *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB9C) + 0x0))) + 0x6) + 0x0)) = (t2 + 0x10);
    return FUN_0c057cfa((*(int *)((a4 + (a5 << 2)))), (*(int *)(((a5 << 2) + 0xC20EB9C))));
}

int FUN_0c040158(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t27;
    int t6;
    register int t7;
    register int t8;
    register int t15;
    register int t5;

    t0 = *(signed char *)0xC541F3D;
    t27 = (unsigned char)t0;
    if ((unsigned char)t0 == 2) {
        if (((*(signed char *)0xC5429B4) != 0) && (t15 = *(signed char *)0xC5429B4, t15 != 4)) {
        } else {
            t6 = 0xC5429B4;
            t7 = 0x0;
            for (;;) {
                t8 = (((struct o7C_int *)(((t7 * 0x98) + 0xC541CDC)))->v);
                if (((int)t8 < (int)0x2) || ((int)t8 > (int)0x3)) {
                    t5 = 0x1;
                    t5 = ((int)t5 << (int)t7);
                    t6 = (*(signed char *)0xC3BD447);
                    t6 = (unsigned char)t6;
                    if ((t5 & t6) == 0) {
                        t6 = (*(int *)0xC40DC50);
                        t6 = (t6 & (~((int)0x1 << (int)t7)));
                        *(unsigned int *)0xC40DC50 = t6;
                    }
                }
                t7 = (t7 + 0x1);
                if ((int)t7 >= (int)0x4) {
                    break;
                }
            }
            t15 = 0x7C;
        }
        t27 = t15;
    }
    return t27;
}

int FUN_0c044d5e(int a4)
{
    register int t20;

    if (((unsigned char)(*(signed char *)0xC3BD445) & ((int)0x1 << (int)a4)) != 0) {
        if ((((int)0x1 << (int)a4) & (unsigned char)(*(signed char *)0xC3BD448)) != 0) {
            *(unsigned char *)((((a4 * 0x3938) + 0xC532498) + 0x2)) = (*(signed char *)(((a4 * 0x98) + 0xC541D25)));
        } else {
            *(unsigned char *)((((a4 * 0x3938) + 0xC532498) + 0x2)) = (*(int *)((((a4 << 2) + 0xC2402DC) + 0x0)));
            FUN_0c03d358(a4);
        }
        *(unsigned int *)0xC40DC60 = 0x4EB;
        (((struct o5A_uchar *)((0xC541CDC + (a4 * 0x98))))->v) = ((*(signed char *)((((0xC541CDC + (a4 * 0x98)) + 0x5A) + 0x0))) + 0x1);
        (((struct o5B_uchar *)((0xC541CDC + (a4 * 0x98))))->v) = 0x0;
        t20 = 0x5B;
    } else {
        t20 = 0xC3BD445;
        if ((((int)0x1 << (int)a4) & (unsigned char)(*(signed char *)0xC3BD447)) == 0) {
            t20 = *(int *)((((a4 << 2) + 0xC2402DC) + 0x0));
            *(unsigned char *)((((a4 * 0x3938) + 0xC532498) + 0x2)) = t20;
        }
    }
    return t20;
}

void FUN_0c05ad20(int a4, int a5, int a6, int a7)
{
    if ((*(int *)((((a4 << 2) + 0xC46DE80) + 0x0))) != 0) {
        FUN_0c2b4174((*(int *)((((a4 << 2) + 0xC46DE80) + 0x0))), (*(int *)(((a5 << 2) + 0xC20AFD8))));
        *(unsigned int *)(((0xC46E154 + ((a4 << 2) << 1)) + 0x0)) = a5;
        *(unsigned int *)(((((a4 << 2) << 1) + 0xC46E154) + 0x4)) = a6;
        FUN_0c05aca8(a4, a6);
        if (a7 != 0) {
            ADXT_SetLpFlg((*(int *)(((a4 << 2) + 0xC46DE80))), a7);
    return;
        }
        return;
    }
}

int FUN_0c06b908(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t3 = (((struct o376C_int *)(a4))->v);
    if (((t3 != 0) && (t0 = *(signed char *)((t3 + 0x41C)), t1 = *(signed char *)((a4 + 0x3721)), t0 == t1)) || (t2 = *(signed char *)((a4 + 0x15)), t2 == 2)) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC06B8BC))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC06B5C0))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC06B484))(a4, a5, a6, a7);
    }
    FUN_0c06a444(a4);
    (((struct o3717_uchar *)(a4))->v) = 0x40;
    (((struct o3718_uchar *)(a4))->v) = 0x0;
    return FUN_0c085cac(a4, 0x40, 0x0);
}

int FUN_0c074c0c(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x374D))) != 0) {
        t0 = *(signed char *)((((((struct o418_int *)(a4))->v)) + 0x12));
        if ((((unsigned char)t0 & 0x4) == 0) && ((0x8 & (unsigned char)t0) == 0)) {
            return 0x12;
        }
        t0 = 0x0;
        if (((unsigned char)(*(signed char *)((0x12 + ((((struct o418_int *)(a4))->v))))) & 8) != 0) {
            t0 = 0x2;
        }
        t1 = t0;
        if (((unsigned char)(*(signed char *)((((((struct o418_int *)(a4))->v)) + 0x12))) & 0x4) != 0) {
            t1 = (t0 + 0x1);
        }
        FUN_0c07c5dc(a4, t1, 0x0);
        t0 = *(signed char *)((a4 + 0x1));
        if ((*(signed char *)((0xC535BB8 + ((short)t0 * (short)0x3938)))) == 0) {
            return FUN_0c05aaf6((0x97 + (*(signed char *)((a4 + 0x1)))));
        }
        return ((short)t0 * (short)0x3938);
    }
    return 0x374D;
}

int FUN_0c07871e(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
    (((struct oB0_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)((a4 + 0x16))) != 0) {
        t0 = FUN_0c07d2c4(a4, ((0x3744 + a4) + 0x2));
        if (t0 == 0) {
            FUN_0c078558(a4);
            (((struct oB0_float *)(a4))->v) = 1.0f;
            return FUN_0c085d0c(a4);
        }
    }
    (((struct o382C_ushort *)(a4))->v) = 0x0;
    (((struct o3749_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC078674))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC07860C))(a4, a5, a6, a7);
}

int FUN_0c07a018(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x16))) > 0) && (t0 = *(signed char *)((a4 + 0x130)), t0 != 0)) {
        return 0x130;
    }
    if ((*(signed char *)((a4 + 0x16))) != 0) {
        t0 = FUN_0c07d2c4(a4, ((0x3744 + a4) + 0x2));
        if (t0 == 0) {
            (((struct o3739_uchar *)(a4))->v) = 0x0;
            return FUN_0c073fe2((((short)(*(signed char *)((a4 + 0x373F))) * (short)0x3938) + 0xC532498), (*(signed char *)((a4 + 0x1))));
        }
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC079F48))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC079EA8))(a4, a5, a6, a7);
}

int FUN_0c081516(int a4, int a5)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x371D));
    if (t0 != 3) {
        if (t0 != 5) {
            if (t0 != 6) {
                t0 = 0x6;
                if (((*(signed char *)((a4 + 0x3721))) == 0) && (a5 != 0)) {
                    t0 = 0x7;
                }
                return FUN_0c07e868(a4, t0);
            }
            return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD8, 0xFFFFFFFF, 0x3, 0xD8));
        }
        return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xBB, 0xFFFFFFFF, 0x3, 0xBB));
    }
    return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x9F, 0xFFFFFFFF, 0x3, 0x9F));
}

int FUN_0c08fa24(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3732));
    if ((unsigned int)t0 < (unsigned int)0xF) {
        switch ((t0 << 1)) {
            case 0:
            case 2:
            case 20:
            case 22:
            {
                return FUN_0c08e226(a4);
            }
            case 4:
            {
                return FUN_0c08e6f6(a4);
            }
            case 6:
            {
                return FUN_0c08e590(a4);
            }
            case 8:
            {
                return FUN_0c070980(a4);
            }
            case 10:
            {
                return ((int (*)(int, int, int, int))(0xC08EFA6))(a4, a5, a6, a7);
            }
            case 12:
            {
                return FUN_0c08f780(a4);
            }
            case 14:
            {
                return FUN_0c08e930(a4);
            }
            case 16:
            {
                return FUN_0c08eb60(a4);
            }
            case 18:
            {
                return FUN_0c071ae4(a4);
            }
            case 24:
            {
                return ((int (*)(int, int, int, int))(0xC08F31C))(a4, a5, a6, a7);
            }
            case 26:
            {
                return ((int (*)(int, int, int, int))(0xC08F718))(a4, a5, a6, a7);
            }
            default:
            {
                return FUN_0c07309e(a4);
            }
        }
    }
    return FUN_0c08e226(a4);
}


int FUN_0c0b6fc0(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x4, 0x0, (t0), 0x4, 0x0);
        FUN_0c059e60(a4, 0x9);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c0b507a(a4, 0x0, 0x0);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0ceb94(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c0c4770(a4, a5, a6);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4, a5, a6);
            }
            case 4:
            {
                return ((int (*)(int, int, int, int))(0xC0CE89C))(a4, a5, a6, a7);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4, a5, a6);
            }
            case 8:
            {
                return FUN_0c0c4c1c(a4, a5, a6);
            }
            case 10:
            {
                return FUN_0c0c5024(a4, a5, a6);
            }
            case 12:
            {
                return ((int (*)(int, int, int, int))(0xC0CEB12))(a4, a5, a6, a7);
            }
            case 14:
            {
                return FUN_0c0c8c08(a4, a5, a6);
            }
            case 16:
            {
                return FUN_0c0c8c36(a4, a5, a6);
            }
            case 18:
            {
                return FUN_0c0ce8f8(a4, a5, a6, a7);
            }
            case 20:
            {
                return FUN_0c0cea46(a4, a5, a6, a7);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}

int FUN_0c0d2124(float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t2 = FUN_0c179ac0();
    t3 = ((~(((~t2) + 0x1) & 0x3FF)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x3FF);
    }
    t2 = 0xC0D21A0;
    t4 = 0x0;
    t5 = t0;
    u2 = 1.0f;
    u3 = ((float)t3 + 1.0f);
    u4 = f4;
    for (;;) {
        if ((unsigned int)t4 >= (unsigned int)0x5) {
            break;
        }
        t2 = t4;
        t5 = 0xC1C7B58;
        t2 = (t2 << 2);
        u3 = (*(float *)((t5 + t2)));
        u2 = 0.0f;
        if ((u3 != u2) && (((int)t4 <= 0) || (u0 = *(float *)((t5 + t2)), t1 = (u3 == u2), u3 = u0, u1 = *(float *)(((((t4 - 1) << 2) + t5) + 0x0)), u2 = u1, u3 != u2))) {
            u4 = (*(float *)((t5 + t2)));
            t0 = (*(int *)((0xC1C7B44 + t2)));
            if (!(u4 > (((float)t3 + 1.0f) / 1024.0f))) {
                t4 = (t4 + 0x1);
                continue;
            }
            break;
        }
        t4 = (t4 + 0x1);
    }
    return t0;
}

int FUN_0c0ce6ec(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c0c4770(a4, a5, a6);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4, a5, a6);
            }
            case 4:
            {
                return FUN_0c0c4b76(a4, a5, a6);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4, a5, a6);
            }
            case 8:
            {
                return FUN_0c0c4c1c(a4, a5, a6);
            }
            case 10:
            {
                return FUN_0c0c5024(a4, a5, a6);
            }
            case 12:
            {
                return FUN_0c0c52c4(a4, a5, a6);
            }
            case 14:
            {
                return FUN_0c0c8c08(a4, a5, a6);
            }
            case 16:
            {
                return FUN_0c0c8c36(a4, a5, a6);
            }
            case 18:
            case 20:
            {
                return FUN_0c0ce60c(a4, a5, a6);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}

int FUN_0c0c9810(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c0c4770(a4, a5, a6);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4, a5, a6);
            }
            case 4:
            {
                return FUN_0c0c4b76(a4, a5, a6);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4, a5, a6);
            }
            case 8:
            {
                return FUN_0c0c4c1c(a4, a5, a6);
            }
            case 10:
            {
                return FUN_0c0c5024(a4, a5, a6);
            }
            case 12:
            {
                return FUN_0c0c52c4(a4, a5, a6);
            }
            case 14:
            {
                return FUN_0c0c8c08(a4, a5, a6);
            }
            case 16:
            {
                return FUN_0c0c8c36(a4, a5, a6);
            }
            case 18:
            {
                return FUN_0c0c8fd4(a4, a5, a6);
            }
            case 20:
            {
                return FUN_0c0c9568(a4, a5, a6);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}

int FUN_0c0cf280(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c0cefac(a4, a5, a6);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4, a5, a6);
            }
            case 4:
            {
                return FUN_0c0cf16e(a4, a5, a6);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4, a5, a6);
            }
            case 8:
            {
                return FUN_0c0c4c1c(a4, a5, a6);
            }
            case 10:
            {
                return FUN_0c0c5024(a4, a5, a6);
            }
            case 12:
            {
                return ((int (*)(int, int, int, int))(0xC0CF1E4))(a4, a5, a6, a7);
            }
            case 14:
            {
                return FUN_0c0c8c08(a4, a5, a6);
            }
            case 16:
            {
                return FUN_0c0c8c36(a4, a5, a6);
            }
            case 18:
            {
                return FUN_0c0c8fd4(a4, a5, a6);
            }
            case 20:
            {
                return FUN_0c0cf1f4(a4);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}

int FUN_0c144e7a(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC1C6B98 + (((FUN_0c0b1cf2()) << 2) << 1))));
        FUN_0c144924(a4, 0x0);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    t0 = FUN_0c144b48(a4);
    if (t0 == 0) {
        return FUN_0c144984(a4, 0x5, 0x0);
    }
    if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = *(short *)((a4 + 0x1C));
    if ((int)t0 <= 0) {
        t1 = FUN_0c144b8e(a4);
        if (t1 != 0) {
            return FUN_0c144984(a4, 0x4, 0x0);
        }
        return t1;
    }
    return t0;
}
