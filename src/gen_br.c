/* Straight-line functions with calls and guards (batch gen_br): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o134_uchar { char p[0x134]; unsigned char v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o180_uint { char p[0x180]; unsigned int v; };
struct o192_uchar { char p[0x192]; unsigned char v; };
struct o193_uchar { char p[0x193]; unsigned char v; };
struct o194_uchar { char p[0x194]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o24_short { char p[0x24]; short v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o37_uchar { char p[0x37]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o3735_uchar { char p[0x3735]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3759_uchar { char p[0x3759]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37B4_float { char p[0x37B4]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3848_int { char p[0x3848]; int v; };
struct o3848_uint { char p[0x3848]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o414_uint { char p[0x414]; unsigned int v; };
struct o418_int { char p[0x418]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o430_short { char p[0x430]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c010220(int, int);
int FUN_0c0169cc(void);
int FUN_0c016d00(void);
int FUN_0c017e68(int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c01e96a(int, int, int, int);
int FUN_0c01fce0(int, int, int, int);
int FUN_0c02b182(int);
int FUN_0c02cc90(int);
int FUN_0c02e9d4(void);
int FUN_0c035ca4(int, int);
int FUN_0c035e46(int, int);
int FUN_0c036b28(int);
int FUN_0c036b76(void);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c038e88(int);
int FUN_0c03b40a(void);
int FUN_0c03d358(int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c03fd58(int, int);
int FUN_0c0430c0(void);
int FUN_0c049a10(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c049de4(void);
int FUN_0c05223e(int, int);
int FUN_0c0525c6(int, int);
int FUN_0c056e44(int, int);
int FUN_0c0573cc(int, int, int);
extern float FUN_0c058328();
int FUN_0c0584f0(int, int, int, int);
int FUN_0c058854(int, int, int, int);
int FUN_0c059ef6(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05b1d4(void);
int FUN_0c05b1e8(void);
int FUN_0c05b204(void);
int FUN_0c05c5f0(int, float, float);
int FUN_0c05c774(void);
int FUN_0c05cf04(void);
int FUN_0c05d608(int, int);
int FUN_0c05e566(int, int, int, int);
int FUN_0c05f22c(int);
int FUN_0c060290(int, int, float);
int FUN_0c060376(int, int);
int FUN_0c060a9c(int);
int FUN_0c060bc2(void);
int FUN_0c060bd8(void);
int FUN_0c0641ca(int, int);
int FUN_0c064892(int, int);
float FUN_0c064d9c(int);
float FUN_0c064dc4(int);
float FUN_0c064e48(int);
float FUN_0c064ea0(int);
int FUN_0c064ee4(int, int);
int FUN_0c064f8e(int, int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c06cc18(int);
int FUN_0c06ccf0(int);
int FUN_0c06ce38(int);
int FUN_0c070320(int);
int FUN_0c076df4(int);
int FUN_0c076f1c(int);
int FUN_0c076fd2(int);
int FUN_0c07bdd0(int, int);
int FUN_0c07bf00(int, int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int, int, int, int);
int FUN_0c081378(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c087b64(int);
int FUN_0c08e382(int);
int FUN_0c0922cc(int);
int FUN_0c0923a0(int);
int FUN_0c0924f4(int);
int FUN_0c09253e(int);
int FUN_0c094ad4(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c094c48(int);
int FUN_0c094e54(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c094fd8(int);
int FUN_0c09571e(int);
int FUN_0c0958f4(int);
int FUN_0c095980(int);
int FUN_0c097e72(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c097fde(int);
int FUN_0c09ab14(int, int, int, int, int, int, int, int, int, int);
int FUN_0c09acb8(int, int, int, int);
int FUN_0c0a2872(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a2a28(int);
int FUN_0c0aaa46(int, int, int, int, int, int, int, int, int, int);
int FUN_0c0aab9e(int);
int FUN_0c0af1c4(int);
int FUN_0c0af2a4(int, int, int);
int FUN_0c0af404(int);
int FUN_0c0af44c(int);
int FUN_0c0b867c(int);
int FUN_0c0b8874(int);
int FUN_0c0b8992(int, int);
int FUN_0c0bab8c(int);
int FUN_0c0babea(int);
int FUN_0c0bac72(int, int, int, int, int, int, int, int, int);
int FUN_0c0bada0(int);
int FUN_0c0bb662(void);
int FUN_0c0c216e(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0cd5c0(int, int, int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c0f6b1c(int, int, int);
int FUN_0c0f916a(void);
int FUN_0c0f91d4(int, int, int, int, int, int, int, int, int);
int FUN_0c0fa966(int);
int FUN_0c0fb9aa(int);
int FUN_0c10b6e4(int);
int FUN_0c117d54(void);
int FUN_0c118412(int);
int FUN_0c133748(int, int, int);
int FUN_0c148494(int, int, int);
int FUN_0c162770(int, int, int, int);
int FUN_0c16fa76(int);
int FUN_0c16fa90(int, int);
int FUN_0c16fab2(int);
int FUN_0c177450(void);
int FUN_0c177af0(int);
int FUN_0c1787c0(void);
int FUN_0c1787e0(void);
int FUN_0c17a360(int);
int FUN_0c17a4c0(int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c17df90(int, int);
int FUN_0c187798(int);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c187d88(int);
int dbg_set_cell_size(int, int);
int game_reset_objects(void);
int gfx_set_fog_color(int);
int gfx_set_fog_density(int);
int math_vec3_accumulate(int, int);
int pdVibMxStop(int);
int pl_falcon_special2_phase4(int);
int thunk_FUN_0c03e08c(void);
int thunk_FUN_0c2b5b00(int);
int FUN_0c15ae2e(int a4);
int FUN_0c15af18(int a4);
int FUN_0c018e44(void);
int FUN_0c036c04(void);
int FUN_0c03d224(int a4, int a5, int a6);
int FUN_0c042544(void);
int FUN_0c043350(void);
int FUN_0c0527e6(void);
int FUN_0c056f40(void);
int FUN_0c05c632(void);
int FUN_0c05cf3c(void);
int FUN_0c05d90c(int a4);
int FUN_0c05e59a(int a4, int a5);
int FUN_0c064de4(int a4, int a5);
int FUN_0c064e70(int a4, int a5);
int FUN_0c064eb4(int a4, int a5);
int FUN_0c06d540(int a4);
int FUN_0c06d850(int a4);
int FUN_0c06d950(int a4);
int FUN_0c06ce5a(int a4);
int FUN_0c0767e2(int a4, int a5, int a6, int a7);
int FUN_0c07a62c(int a4);
int FUN_0c07a7a8(int a4);
int FUN_0c07d030(int a4, int a5);
int FUN_0c07e2c4(int a4);
int FUN_0c085ffa(int a4, int a5);
int FUN_0c08dba8(int a4, int a5, int a6, int a7);
int FUN_0c08e560(int a4);
int FUN_0c0949b8(int a4, int a5, int a6, int a7);
int FUN_0c09b3dc(int a4);
int FUN_0c09eb62(int a4);
int FUN_0c0a05e8(int a4, int a5, int a6, int a7);
int FUN_0c0adb98(int a4, int a5, int a6, int a7);
int FUN_0c0b8b98(int a4, int a5);
int FUN_0c0bab5c(int a4, int a5, int a6, int a7);
int FUN_0c0bac0c(int a4);
int FUN_0c0c9db8(int a4);
int FUN_0c0cc064(int a4);
int FUN_0c0d9ae0(int a4, int a5, int a6, int a7);
int FUN_0c0fad8c(int a4);
int FUN_0c0fc6b6(void);
int FUN_0c0fbda4(int a4);
int FUN_0c0fe3a0(void);
int FUN_0c10be56(int a4);
int FUN_0c10cf38(int a4, int a5);
int FUN_0c11a4c0(int a4, int a5);
int FUN_0c11eca4(void);
int FUN_0c147c10(int a4, int a5);
int FUN_0c147e78(int a4, int a5);
int FUN_0c15e216(int a4, int a5, int a6, int a7);
int FUN_0c16367e(int a4, int a5, int a6, int a7);
int FUN_0c16958a(int a4, int a5, int a6, int a7);
int FUN_0c16af86(int a4, int a5, int a6, int a7);
int FUN_0c16f626(void);
int FUN_0c0185b4(void);
int FUN_0c03e2a4(int a4, int a5, int a6, int a7);
int FUN_0c046238(void);
int FUN_0c04e052(int a4, int a5, int a6, float f4);
int FUN_0c056e80(void);
int FUN_0c058514(int a4, int a5);
int FUN_0c05af9a(int a4, int a5, int a6);
int FUN_0c05dd10(int a4);
int FUN_0c05e6b2(void);
int FUN_0c05f59c(void);
int FUN_0c06491e(void);
int FUN_0c06c9c4(int a4);
int FUN_0c070212(int a4);
int FUN_0c07c19c(int a4);
int FUN_0c07c1ca(int a4);
int FUN_0c07d2c4(int a4, int a5);
int FUN_0c094e26(int a4, int a5, int a6, int a7);
int FUN_0c0950a2(int a4, int a5, int a6, int a7);
int FUN_0c09873e(int a4);
int FUN_0c0980e0(int a4, int a5, int a6, int a7);
int FUN_0c09ae00(int a4, int a5, int a6, int a7);
int FUN_0c09f744(int a4);
int FUN_0c0a30dc(int a4, int a5, int a6, int a7);
int FUN_0c0a2b94(int a4, int a5, int a6, int a7);
int FUN_0c0aad54(int a4, int a5, int a6, int a7);
int FUN_0c0ae984(int a4);
int FUN_0c0b1cf2(void);
void FUN_0c0b3a7e(int a4, int a5, int a6);
int FUN_0c0b4b20(void);
int FUN_0c0bb47e(void);
int FUN_0c0bae5c(int a4, int a5, int a6, int a7);
int FUN_0c0c8c08(int a4, int a5, int a6, int a7);
int FUN_0c0df09c(int a4);
int FUN_0c0e340c(int a4);
int FUN_0c0e79f4(int a4, int a5, int a6);
int FUN_0c0edf44(int a4);
int FUN_0c0f9468(void);
int FUN_0c104d70(void);
int FUN_0c1066dc(void);
int FUN_0c10b050(void);
int FUN_0c10ca7e(void);
int FUN_0c11c8be(int a4);
int FUN_0c133c0e(int a4);
int FUN_0c13428a(int a4);
int fx29_spawn_burst8(int a4, int a5);
int FUN_0c148550(int a4);
int FUN_0c160c38(int a4);
int FUN_0c16d3d6(int a4);
int FUN_0c0164ec(int a4, int a5);
int FUN_0c017160(int a4);
int FUN_0c019a06(int a4);
int FUN_0c021470(int a4, int a5, int a6, int a7);
int FUN_0c01ea00(int a4, int a5, int a6, int a7);
int FUN_0c02d498(void);
int FUN_0c036a34(int a4, int a5, int a6);
int FUN_0c03e46a(int a4, int a5, int a6, int a7);
int FUN_0c042ae4(void);
float FUN_0c058390(int a4, int a5, float f4);
int FUN_0c05a5a8(int a4);
int FUN_0c05b7e0(int a4);
int FUN_0c05c240(int a4, int a5, int a6, Stk2 s);
int FUN_0c05d4c8(int a4);
int FUN_0c05ee84(void);
float FUN_0c0605e6(int a4);
int FUN_0c060428(int a4, int a5, float f4);
int FUN_0c061284(int a4, int a5);
int FUN_0c060c00(void);
int FUN_0c06e5e4(int a4, int a5, int a6, int a7);
int FUN_0c072c34(int a4);
int FUN_0c0779ae(int a4, int a5, int a6, int a7);
int FUN_0c076ff8(int a4, int a5, int a6, int a7);
int FUN_0c07c436(void);
int FUN_0c07e420(int a4, int a5);
int FUN_0c07ec9a(int a4);
int FUN_0c089c02(int a4, int a5, int a6, int a7);
int FUN_0c08e756(int a4);
int FUN_0c092560(int a4);
int FUN_0c0959a2(int a4, int a5, int a6, int a7);
int FUN_0c09b92c(int a4);
int FUN_0c09bc34(int a4);
int FUN_0c09ec36(int a4);
int FUN_0c0a908c(int a4);
int FUN_0c0ab85c(int a4);
int FUN_0c0af198(int a4);
int FUN_0c0af568(int a4, int a5, int a6);
int FUN_0c0b21ac(int a4, int a5);
int FUN_0c0b4b4e(int a4, int a5);
int FUN_0c0b97c2(int a4);
int FUN_0c0b949a(int a4);
int FUN_0c0cd888(int a4);
int FUN_0c0d00e4(int a4, int a5);
int FUN_0c0d01f2(int a4);
int FUN_0c0d0488(void);
int FUN_0c0d04c4(int a4, int a5);
int FUN_0c0deff6(int a4);
int FUN_0c0f2034(void);
int FUN_0c104db8(void);
int FUN_0c11e938(int a4);
int FUN_0c14811c(int a4, int a5);
int FUN_0c14bb54(int a4, int a5);
int FUN_0c162f8a(int a4, int a5, int a6, int a7);
int FUN_0c16d304(int a4);
int FUN_0c16dba8(int a4);
int FUN_0c16fad0(int a4);
void FUN_0c0173bc(int a4, int a5);
int FUN_0c035b9c(int a4, int a5);
int FUN_0c035bc6(int a4);
int FUN_0c035bf0(int a4);
int FUN_0c035c1a(int a4, int a5);
int FUN_0c036d58(int a4);
int FUN_0c0410fa(void);
int FUN_0c049eac(int a4, int a5, int a6, int a7);
int FUN_0c05189c(int a4, int a5, int a6, int a7);
int FUN_0c051a14(int a4, int a5, int a6, int a7);
int FUN_0c051ad0(int a4, int a5, int a6, int a7);

int FUN_0c15ae2e(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15ACFE;
        t2 = (FUN_0c187798(t0));
    }
    return t2;
}

int FUN_0c15af18(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15AE60;
        t2 = (FUN_0c187798(t0));
    }
    return t2;
}

int FUN_0c018e44(void)
{
    register int t0;
    register int t1;

    (((struct o0_uchar *)0xC30A51A)->v) = 0xFFFFFFFF;
    (((struct o2_ushort *)0xC30A51A)->v) = 0x0;
    t0 = FUN_0c01cc56(0xB, 0xC018B28);
    t1 = FUN_0c01cc56(0x1B, 0xC018CCC);
    *(unsigned int *)((t1 + 0x10)) = t0;
    return t1;
}

int FUN_0c036c04(void)
{
    register int t3;
    register int t4;

    FUN_0c036b76();
    FUN_0c036b28(0x1);
    FUN_0c036b28(0xB);
    t3 = *(signed char *)0xC5429A8;
    if (t3 == 0) {
        return FUN_0c036b28(0x5);
    }
    t4 = 0x29;
    if (t3 == 1) {
        t4 = 0x6;
    }
    return FUN_0c036b28(t4);
}

int FUN_0c03d224(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = a5;
    for (;;) {
        t1 = ((0xC0 + a4) + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = a5;
        if ((int)t0 >= (int)a6) {
            break;
        }
    }
    (((struct o180_uint *)(a4))->v) = a5;
    (((struct o192_uchar *)(a4))->v) = a5;
    (((struct o193_uchar *)(a4))->v) = a5;
    (((struct o194_uchar *)(a4))->v) = 0x1;
    (((struct o16_uchar *)(a4))->v) = 0x1;
    (((struct o37_uchar *)(a4))->v) = 0x1;
    (((struct o50_uchar *)(a4))->v) = 0x1;
    return 0x50;
}

int FUN_0c042544(void)
{
    int stk[3];
    register int t1;
    register int t3;

    FUN_0c0430c0();
    t1 = FUN_0c03fd58(0x0, ((int)stk + 0));
    t3 = FUN_0c0f6b1c((*(signed char *)0xC542360), t1, ((int)stk + 0));
    (((struct o0_uint *)0xC40DC58)->v) = t3;
    (((struct o4_uint *)0xC40DC58)->v) = 0x0;
    return t3;
}

int FUN_0c043350(void)
{
    *(unsigned char *)0xC5421F8 = 0x0;
    (((struct o2_uchar *)0xC3BD445)->v) = (*(signed char *)0xC40DC50);
    (((struct o0_uchar *)0xC3BD445)->v) = 0x0;
    FUN_0c06780e((*(int *)0xC40DC54));
    FUN_0c06785c();
    return FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1);
}

int FUN_0c0527e6(void)
{
    register int t0;
    register int t4;

    t0 = 0x0;
    for (;;) {
        FUN_0c05223e(t0, (*(int *)0xC241B54));
        t4 = FUN_0c0525c6(t0, (*(int *)0xC241C94));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t4;
}

int FUN_0c056f40(void)
{
    register int t1;

    *(unsigned int *)0xC40FA34 = (FUN_0c1787c0());
    t1 = FUN_0c1787e0();
    if ((*(int *)0xC241CB0) != 0) {
        return FUN_0c177af0(0xC40FA44);
    }
    *(unsigned int *)0xC241CB0 = ((*(int *)0xC241CB0) + 0x1);
    return t1;
}

int FUN_0c05c632(void)
{
    *(unsigned char *)0xC541F40 = ((*(signed char *)0xC541F40) + 0x1);
    FUN_0c03eff6();
    if ((*(signed char *)0xC541F66) != 0) {
        if ((*(signed char *)0xC5429AA) != 0) {
            return FUN_0c05b1e8();
        }
        return FUN_0c05b1d4();
    }
    return FUN_0c05b204();
}

int FUN_0c05cf3c(void)
{
    register int t0;

    t0 = FUN_0c05cf04();
    if ((int)t0 > (int)0x1) {
        FUN_0c187cac(0xC4B107C, 0x0, 0x0, 0x0, 0xC1C3DC0);
        return FUN_0c05c5f0(0xC4B107C, ((((struct o4_float *)0xC05D114)->v)), ((((struct o0_float *)0xC05D114)->v)));
    }
    return t0;
}

int FUN_0c05d90c(int a4)
{
    register int t0;
    register int t10;

    t0 = *(int *)0xC542260;
    if ((t0 & 16) != 0) {
        if ((*(signed char *)0xC542254) == 0) {
            if ((*(signed char *)0xC542255) == 0) {
                t10 = 0x3;
                if ((*(signed char *)0xC541F65) != 0) {
                    t10 = 0x0;
                }
                return FUN_0c05d608(a4, t10);
            }
            return 0x5D;
        }
        return 0x5C;
    }
    return t0;
}

int FUN_0c05e59a(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = (0x0 + a4);
        for (;;) {
            t2 = FUN_0c05e566((*(int *)((t1 + 0xC))), (*(int *)((t1 + 0x0))), (*(int *)((t1 + 0x4))), (*(int *)((t1 + 0x8))));
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x10);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c064de4(int a4, int a5)
{
    int stk[9];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c064f8e(a4, (((int)stk + 0) + 0x4));
    if (t0 != 0) {
        *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = (FUN_0c064dc4((((int)stk + 0) + 0x4)));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c064e70(int a4, int a5)
{
    int stk[9];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c064f8e(a4, (((int)stk + 0) + 0x4));
    if (t0 != 0) {
        *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = (FUN_0c064e48((((int)stk + 0) + 0x4)));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c064eb4(int a4, int a5)
{
    int stk[9];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c064f8e(a4, (((int)stk + 0) + 0x4));
    if (t0 != 0) {
        *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = (FUN_0c064ea0((((int)stk + 0) + 0x4)));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c06d540(int a4)
{
    register int t1;
    int t2;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if (((short)(t1 - 1) != 0) && (t2 = *(signed char *)((a4 + 0x3744)), (int)(unsigned char)t2 > 0)) {
        return 0x3744;
    }
    return FUN_0c085d0c(a4);
}

int FUN_0c06d850(int a4)
{
    register int t1;
    int t2;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if (((short)(t1 - 1) != 0) && (t2 = *(signed char *)((a4 + 0x3744)), (int)(unsigned char)t2 > 0)) {
        return 0x3744;
    }
    return FUN_0c085d0c(a4);
}

int FUN_0c06d950(int a4)
{
    register int t1;
    int t2;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if (((short)(t1 - 1) != 0) && (t2 = *(signed char *)((a4 + 0x3744)), (int)(unsigned char)t2 > 0)) {
        return 0x3744;
    }
    return FUN_0c085d0c(a4);
}

int FUN_0c06ce5a(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c06ce38(a4);
                }
                return pl_falcon_special2_phase4(a4);
            }
            return FUN_0c06ccf0(a4);
        }
        return FUN_0c06cc18(a4);
    }
    return pl_falcon_special2_phase4(a4);
}

int FUN_0c0767e2(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC0767A4))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0766F2))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC076664))(a4, a5, a6, a7);
}

int FUN_0c07a62c(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        FUN_0c08e382(a4);
        (((struct o372C_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
    }
    return (unsigned char)t0;
}

int FUN_0c07a7a8(int a4)
{
    register int t1;

    FUN_0c038362(a4);
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        FUN_0c08e382(a4);
        return FUN_0c085cac(a4, 0xE, 0x0);
    }
    return (unsigned char)t1;
}

int FUN_0c07d030(int a4, int a5)
{
    register int t0;
    register float u3;
    register float u4;
    register int t5;

    t0 = *(signed char *)((a4 + 0x2));
    u3 = (((struct o37B8_float *)(a4))->v);
    u4 = ((*(float *)((((a5 << 2) + (0xC25C6A4 + (((t0 << 1) + t0) << 2))) + 0x0))) * 1.0f);
    (((struct o37B8_float *)(a4))->v) = (u3 - u4);
    t5 = (((t0 << 1) + t0) << 2);
    if (0.0f > (u3 - u4)) {
        (((struct o37B8_float *)(a4))->v) = 0.0f;
        t5 = 0x37B8;
    }
    return t5;
}

int FUN_0c07e2c4(int a4)
{
    if ((*(signed char *)((a4 + 0x130))) != 0) {
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        (((struct o3848_uint *)(a4))->v) = ((unsigned short)((((struct o430_short *)(a4))->v)) | ((((struct o3848_int *)(a4))->v)));
        return 0x1;
    }
    (((struct o3848_uint *)(a4))->v) = (unsigned short)((((struct o430_short *)(a4))->v));
    return 0x0;
}

int FUN_0c085ffa(int a4, int a5)
{
    if ((((unsigned short)((((struct o430_short *)(a4))->v)) & a5) & 0x200) != 0) {
        (((struct o3731_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    if ((((unsigned short)((((struct o430_short *)(a4))->v)) & a5) & 128) != 0) {
        (((struct o3731_uchar *)(a4))->v) = 0x2;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c08dba8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC08DB8C))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC08D778))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC08DA68))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC08DB8C))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC08D778))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08DA68))(a4, a5, a6, a7);
}

int FUN_0c08e560(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x8, (t0), 0x1, 0x8);
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}

int FUN_0c0949b8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC094960))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0944DC))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC094084))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC094960))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0944DC))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC094084))(a4, a5, a6, a7);
}

int FUN_0c09b3dc(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    return FUN_0c070320(a4);
}

int FUN_0c09eb62(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x2, (t0), 0x1, 0x2);
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}

int FUN_0c0a05e8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC0A05BC))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A0120))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC09FEEE))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0A05BC))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0A0120))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC09FEEE))(a4, a5, a6, a7);
}

int FUN_0c0adb98(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC0ADB42))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0AD714))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0AD188))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0ADB42))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0AD714))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0AD188))(a4, a5, a6, a7);
}

int FUN_0c0b8b98(int a4, int a5)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return FUN_0c0b8992(a4, a5);
                    }
                    return FUN_0c0b8874(a4);
                }
                return FUN_0c0b867c(a4);
            }
            return FUN_0c0b8992(a4, a5);
        }
        return FUN_0c0b8874(a4);
    }
    return FUN_0c0b867c(a4);
}

int FUN_0c0bab5c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC0BAB38))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0BA790))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0BA936))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0BAB38))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0BA790))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0BA936))(a4, a5, a6, a7);
}

int FUN_0c0bac0c(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0babea(a4);
    }
    return FUN_0c0bab8c(a4);
}

int FUN_0c0c9db8(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c0c2d56(a4, 0x5, t0);
    (((struct o376C_uint *)((((short)(signed char)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}


int FUN_0c0d9ae0(int a4, int a5, int a6, int a7)
{
    register int t5;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t5 = *(signed char *)((a4 + 0x14));
    if (t5 != 0) {
        
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t5 = 0xA8;
    }
    return t5;
}

int FUN_0c0fad8c(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x4);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FA966;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return FUN_0c0fa966(t0);
    }
    return t0;
}

int FUN_0c0fc6b6(void)
{
    register int t6;

    (((struct o0_uchar *)0xC472ADC)->v) = (*(signed char *)0xC542A08);
    (((struct o1_uchar *)0xC472ADC)->v) = (*(signed char *)0xC542A09);
    (((struct o2_uchar *)0xC472ADC)->v) = (*(signed char *)0xC542A0A);
    (((struct o3_uchar *)0xC472ADC)->v) = (*(signed char *)0xC542A0B);
    (((struct o4_uchar *)0xC472ADC)->v) = (*(signed char *)0xC542A0C);
    (((struct o5_uchar *)0xC472ADC)->v) = (*(signed char *)0xC542A0D);
    t6 = *(signed char *)0xC542A0E;
    (((struct o6_uchar *)0xC472ADC)->v) = t6;
    return t6;
}

int FUN_0c0fbda4(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x4);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FB9AA;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return FUN_0c0fb9aa(t0);
    }
    return t0;
}

int FUN_0c0fe3a0(void)
{
    (((struct o0_uint *)0xC472B60)->v) = 0x0;
    (((struct o4_uint *)0xC472B60)->v) = 0x0;
    (((struct o8_uint *)0xC472B60)->v) = 0x0;
    (((struct oC_uint *)0xC472B60)->v) = 0x0;
    (((struct o10_uint *)0xC472B60)->v) = 0x0;
    (((struct o14_uint *)0xC472B60)->v) = 0x0;
    (((struct o18_uint *)0xC472B60)->v) = 0x0;
    (((struct o1C_uint *)0xC472B60)->v) = 0x0;
    (((struct o20_uint *)0xC472B60)->v) = 0x0;
    (((struct o24_uint *)0xC472B60)->v) = 0x0;
    (((struct o28_uint *)0xC472B60)->v) = 0x0;
    return 0x64;
}

int FUN_0c10be56(int a4)
{
    FUN_0c056e44(0x23, 0x5);
    (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x4));
    (((struct o14_uchar *)(((((struct o18_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o18_uint *)0xC474B8C)->v) = 0x0;
    return FUN_0c10b6e4(a4);
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

int FUN_0c11a4c0(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11A2A8;
        t3 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t0 + 0x2)) = t3;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
    }
    return t3;
}

int FUN_0c11eca4(void)
{
    (((struct o9_uchar *)0xC4750AC)->v) = 0x0;
    (((struct o8_uchar *)0xC4750AC)->v) = 0x0;
    (((struct o7_uchar *)0xC4750AC)->v) = 0x0;
    (((struct o6_uchar *)0xC4750AC)->v) = 0x0;
    (((struct o5_uchar *)0xC4750AC)->v) = 0x0;
    (((struct o4_uchar *)0xC4750AC)->v) = 0x0;
    (((struct o3_uchar *)0xC4750AC)->v) = 0x0;
    (((struct o2_uchar *)0xC4750AC)->v) = 0x0;
    (((struct o1_uchar *)0xC4750AC)->v) = 0x0;
    (((struct o0_uchar *)0xC4750AC)->v) = 0x0;
    (((struct o30_uint *)0xC4750AC)->v) = 0x0;
    (((struct o2C_uint *)0xC4750AC)->v) = 0x0;
    (((struct o28_uint *)0xC4750AC)->v) = 0x0;
    (((struct o24_uint *)0xC4750AC)->v) = 0x0;
    (((struct o20_uint *)0xC4750AC)->v) = 0x0;
    (((struct o1C_uint *)0xC4750AC)->v) = 0x0;
    (((struct o18_uint *)0xC4750AC)->v) = 0x0;
    (((struct o14_uint *)0xC4750AC)->v) = 0x0;
    (((struct o10_uint *)0xC4750AC)->v) = 0x0;
    (((struct oC_uint *)0xC4750AC)->v) = 0x0;
    return 0x0;
}

int FUN_0c147c10(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        t3 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t3;
        *(unsigned int *)((t0 + 0x4)) = 0xC147928;
    }
    return t3;
}

int FUN_0c147e78(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        t3 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t3;
        *(unsigned int *)((t0 + 0x4)) = 0xC147C60;
    }
    return t3;
}

int FUN_0c15e216(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)(((a4 + 0x41C) + 0x0));
    (((struct o41C_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) <= 0) {
        (((struct o41C_uchar *)(a4))->v) = a5;
        t0 = *(signed char *)(((a4 + 0x41C) + 0x1));
        *(unsigned char *)(((a4 + 0x41C) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)(signed char)a7) {
            *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16367e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)(((a4 + 0x41C) + 0x0));
    (((struct o41C_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) <= 0) {
        (((struct o41C_uchar *)(a4))->v) = a5;
        t0 = *(signed char *)(((a4 + 0x41C) + 0x1));
        *(unsigned char *)(((a4 + 0x41C) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)(signed char)a7) {
            *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16958a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)(((a4 + 0x41C) + 0x0));
    (((struct o41C_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) <= 0) {
        (((struct o41C_uchar *)(a4))->v) = a5;
        t0 = *(signed char *)(((a4 + 0x41C) + 0x1));
        *(unsigned char *)(((a4 + 0x41C) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)(signed char)a7) {
            *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16af86(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)(((a4 + 0x41C) + 0x0));
    (((struct o41C_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) <= 0) {
        (((struct o41C_uchar *)(a4))->v) = a5;
        t0 = *(signed char *)(((a4 + 0x41C) + 0x1));
        *(unsigned char *)(((a4 + 0x41C) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)(signed char)a7) {
            *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16f626(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC5426C4) + 0x10))) != 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return 0x0;
        }
    }
    return ((int)0x1 << (int)t0);
}

int FUN_0c0185b4(void)
{
    register int t0;

    t0 = FUN_0c01cc56(0x2B, 0xC0186CC);
    (((struct o14_uchar *)(t0))->v) = 0x0;
    (((struct o15_uchar *)(t0))->v) = 0x0;
    (((struct oA8_uchar *)(t0))->v) = 0x0;
    (((struct oAC_ushort *)(t0))->v) = (((((struct oAC_short *)(t0))->v)) | 0x400);
    *(unsigned int *)0xC20C910 = 0x1;
    return 0xC20C910;
}

int FUN_0c03e2a4(int a4, int a5, int a6, int a7)
{
    int stk[67];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = (unsigned short)(*(short *)0xC542B88);
    *(int *)((int)stk + 0) = 0xC1B72F8;
    FUN_0c187cac((((int)stk + 0) + 0xC), a5, a6, a7, 0xC1B72F8);
    *(volatile int *)(((int)stk + 8));
    return (thunk_FUN_0c03e08c());
}

int FUN_0c046238(void)
{
    (((struct o0_uchar *)0xC40F824)->v) = 0x0;
    (((struct o1_uchar *)0xC40F824)->v) = 0x0;
    (((struct o2_uchar *)0xC40F824)->v) = 0x0;
    (((struct o3_uchar *)0xC40F824)->v) = 0x0;
    FUN_0c03b40a();
    FUN_0c03d358(0x0);
    FUN_0c03d358(0x1);
    return FUN_0c02cc90(0x0);
}

int FUN_0c04e052(int a4, int a5, int a6, float f4)
{
    register int t4;
    register int t5;

    *(unsigned int *)((a4 + 0x0)) = (int)((float)(a5 - a6) / f4);
    if ((int)(int)((float)(a5 - a6) / f4) > (int)0x8000) {
        *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) - 0x8000);
    }
    if ((int)(*(int *)((a4 + 0x0))) < (int)0xFFFF8000) {
        t4 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t4 + 0x8000);
        t5 = (t4 + 0x8000);
    }
    return t5;
}

int FUN_0c056e80(void)
{
    FUN_0c17df90(0xC1BF888, 0xC1BF980);
    (((struct o20_float *)0xC1BF940)->v) = -1.0f;
    (((struct o0_float *)0xC1BF940)->v) = -1.0f;
    (((struct o20_float *)0xC1BF900)->v) = -1.0f;
    (((struct o0_float *)0xC1BF900)->v) = -1.0f;
    *(unsigned int *)0xC40FA30 = 0x0;
    return 0x78;
}

int FUN_0c058514(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t2 = FUN_0c0584f0((*(int *)((t1 + 0xC))), (*(int *)((t1 + 0x0))), (*(int *)((t1 + 0x4))), (*(int *)((t1 + 0x8))));
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x10);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c05af9a(int a4, int a5, int a6)
{
    register int t3;

    t3 = *(signed char *)(((((a4 << 2) << 1) + (*(int *)((((*(int *)0xC46E198) << 2) + 0xC257644)))) + 0x4));
    *(unsigned int *)(((0xC46DE94 + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)) + 0x4)) = a6;
    *(unsigned int *)(((0xC46DE94 + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)) + 0x0)) = a6;
    *(unsigned int *)(((0xC46DE94 + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)) + 0x8)) = (*(int *)(((0xC46DE94 + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)) + 0x10)));
    *(unsigned int *)(((0xC46DE94 + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)) + 0xC)) = a5;
    return ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2);
}

int FUN_0c05dd10(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x9));
    t2 = *(short *)((0xC542868 + ((((t0 << 2) + t0) << 2) << 1)));
    if ((0x200 & (unsigned short)t2) == 0) {
        if ((0x80 & (unsigned short)t2) == 0) {
            if ((0x100 & (unsigned short)t2) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c05e6b2(void)
{
    register int t0;
    int t1;
    int t4;

    t0 = (((struct o4_short *)0xC5426D4)->v);
    if ((((unsigned short)t0 & 0x8000) != 0) && (t1 = (((struct o0_short *)0xC5426D4)->v), ((unsigned short)t1 & 128) != 0)) {
        return 0x1;
    }
    if (((0x80 & (unsigned short)t0) != 0) && (t4 = (((struct o0_short *)0xC5426D4)->v), ((unsigned short)t4 & 0x8000) != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c05f59c(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((*(int *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC5426C4) + 0x0))) != 0) {
            t1 = (t1 | ((int)0x1 << (int)t0));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c06491e(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0xC4F6B2C;
    t1 = 0xC4F90AC;
    for (;;) {
        t2 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t3 = FUN_0c064892(t0, t2);
        t0 = (t0 + 0x960);
        if ((unsigned int)t1 >= (unsigned int)0xC4F90BC) {
            break;
        }
    }
    return t3;
}

int FUN_0c06c9c4(int a4)
{
    int stk[2];
    register int t1;
    register int t4;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    t4 = (short)(t1 - 1);
    if ((short)(t1 - 1) == 0) {
        *(volatile signed char *)((a4 + 0x16));
        FUN_0c081378(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t4 = 0x15;
    }
    return t4;
}

int FUN_0c070212(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        return FUN_0c085cac(a4, 0x5, 0x3);
    }
    return (unsigned char)t0;
}

int FUN_0c07c19c(int a4)
{
    register int t0;
    register int t1;

    t0 = 0xC532498;
    for (;;) {
        t1 = FUN_0c07bdd0(t0, a4);
        t0 = (t0 + 0x3938);
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t1;
}

int FUN_0c07c1ca(int a4)
{
    register int t0;
    register int t1;

    t0 = 0xC532498;
    for (;;) {
        t1 = FUN_0c07bf00(t0, a4);
        t0 = (t0 + 0x3938);
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t1;
}

int FUN_0c07d2c4(int a4, int a5)
{
    int t1;

    if ((((unsigned short)((((struct o430_short *)(a4))->v)) & 0x3F80) != 0) && (t1 = *(signed char *)((a5 + 0x0)), t1 != 0)) {
        *(unsigned char *)((a5 + 0x0)) = ((*(signed char *)((a5 + 0x0))) - 1);
    }
    if (((((struct o160_float *)(a4))->v)) != 0.0f) {
        (((struct o3759_uchar *)(a4))->v) = 0x1;
    }
    return (unsigned char)(*(signed char *)((a5 + 0x0)));
}



int FUN_0c09873e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x6, (t0), 0x1, 0x6);
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    return 0x0;
}

int FUN_0c0980e0(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c097fde(a4);
        }
    } else {
        FUN_0c097e72(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c09ae00(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c09acb8(a4, a5, a6, a7);
        }
    } else {
        FUN_0c09ab14(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c09f744(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x1B, (t0), 0x1, 0x1B);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    return 0x0;
}

int FUN_0c0a30dc(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;

    t1 = *(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)));
    t2 = FUN_0c07eaf4(a4, a5, a6, a7);
    return FUN_0c058854((a4 + 0x38), (unsigned short)(t1 + t2), (*(int *)((a4 + 0x38))), 0x100);
}

int FUN_0c0a2b94(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c0a2a28(a4);
        }
    } else {
        FUN_0c0a2872(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c0aad54(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c0aab9e(a4);
        }
    } else {
        FUN_0c0aaa46(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c0ae984(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0xA, (t0), 0x1, 0xA);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    return 0x0;
}

int FUN_0c0b1cf2(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)(unsigned char)(*(signed char *)0xC542242) >= (int)(*(int *)((0xC1C6908 + (t0 << 2))))) {
            t1 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return (t1 & 0x7);
}

void FUN_0c0b3a7e(int a4, int a5, int a6)
{
    if ((int)(*(int *)((a4 + 0x0))) > (int)a5) {
        if ((int)((*(int *)((a4 + 0x0))) - a5) >= (int)a6) {
            *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) - a6);
        } else {
            *(unsigned int *)((a4 + 0x0)) = a5;
        }
    } else {
        if ((int)((*(int *)((a4 + 0x0))) - a5) <= (int)(-a6)) {
            *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + a6);
        } else {
            *(unsigned int *)((a4 + 0x0)) = a5;
        }
    }
}

int FUN_0c0b4b20(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)(unsigned char)(*(signed char *)0xC542242) >= (int)(*(int *)((0xC1C6BD8 + (t0 << 2))))) {
            t1 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return (t1 & 0x7);
}

int FUN_0c0bb47e(void)
{
    register int t0;

    t0 = *(signed char *)0xC5429AD;
    (((struct o0_uchar *)0xC542242)->v) = (*(signed char *)(((*(signed char *)0xC542236) + (((t0 << 1) + (t0 << 2)) + 0xC25D98C))));
    t0 = *(signed char *)0xC542242;
    (((struct o1_uchar *)0xC542242)->v) = ((t0 << 2) << 1);
    return ((t0 << 2) << 1);
}


int FUN_0c0c8c08(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = FUN_0c0c3e3a(a4, a5, a6);
    if (t0 == 0) {
        FUN_0c0c216e(a4);
        t3 = *(int *)((((unsigned char)(*(signed char *)((a4 + 0x41C))) << 2) + 0xC2733F4));
        return ((int (*)(int, int, int, int))(t3))(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c0df09c(int a4)
{
    FUN_0c0e2700((a4 + 0x28), 0x2, 0x0, 0x1);
    FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    return FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
}

int FUN_0c0e340c(int a4)
{
    register int t2;
    register int t4;

    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    t2 = *(short *)((a4 + 0x1C));
    t4 = t2;
    if ((int)t2 <= 0) {
        (((struct o15_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x16)));
        t4 = 0x15;
    }
    return t4;
}

int FUN_0c0e79f4(int a4, int a5, int a6)
{
    register int t3;
    register int t1;
    register int t2;

    FUN_0c0c2d56(a4, a5, a6);
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t2 = 0xC4;
        t2 = (t2 + a4);
        t1 = (*(int *)((((t3 << 2) + t2) + 0x0)));
        t3 = (t3 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x1;
    }
    return 0xC0;
}

int FUN_0c0edf44(int a4)
{
    register int t0;
    register int t4;
    int t5;
    register int t6;

    t0 = *(signed char *)((a4 + 0x3715));
    if (t0 != 11) {
        if ((t0 == 34) && ((t4 = (((struct o3770_int *)(a4))->v), t4 != 0) && (t5 = (((struct o3770_int *)(a4))->v), t6 = *(signed char *)((0x3715 + t5)), t6 == 11))) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0f9468(void)
{
    int stk[1];

    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        FUN_0c0f916a();
    }
    FUN_0c0f91d4(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
    FUN_0c03f40c(0x5);
    FUN_0c03f40c(0x8);
    FUN_0c038e88(0x5);
    return FUN_0c038e88(0x8);
}

int FUN_0c104d70(void)
{
    register int t0;

    t0 = FUN_0c117d54();
    if ((int)t0 < 0) {
        t0 = FUN_0c05f22c(0x101);
        if (t0 != 0) {
            FUN_0c05aab6(0x0, 0x3);
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c1066dc(void)
{
    (((struct o14_uchar *)(((((struct o4_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o4_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o0_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o8_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o8_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct oC_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct oC_uint *)0xC474B8C)->v) = 0x0;
    return 0x14;
}

int FUN_0c10b050(void)
{
    (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o0_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct oC_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct oC_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o8_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o8_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o4_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o4_uint *)0xC474B8C)->v) = 0x0;
    return 0x14;
}

int FUN_0c10ca7e(void)
{
    (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o0_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct oC_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct oC_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o8_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o8_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o4_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o4_uint *)0xC474B8C)->v) = 0x0;
    return 0x14;
}

int FUN_0c11c8be(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11C80C;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)0xC473C44 = t0;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c133c0e(int a4)
{
    register int t0;
    register int t7;

    t0 = *(signed char *)((a4 + 0x2));
    t7 = t0;
    if (t0 == 0) {
        (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o40_float *)(a4))->v));
        (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o44_float *)(a4))->v));
        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o48_float *)(a4))->v));
        t7 = 0x8C;
    }
    return t7;
}

int FUN_0c13428a(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x3715))) == 20) {
        if ((int)(*(signed char *)((t0 + 0x17))) <= (int)0x1) {
            return 0x1;
        }
        return 0x2;
    }
    if ((*(signed char *)((t0 + 0x3715))) == 24) {
        return 0x3;
    }
    return 0x0;
}

int fx29_spawn_burst8(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = 0x0;
    for (;;) {
        t3 = FUN_0c133748((*(int *)(((int)stk + 0))), t0, (*(signed char *)(((int)stk + 4))));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t3;
}

int FUN_0c148550(int a4)
{
    register int t2;

    t2 = *(signed char *)((0x15 + (*(int *)(((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC535D90) + 0x1C)))));
    if (t2 == 5) {
        return FUN_0c148494(a4, 0x2, (*(signed char *)((a4 + 0x1))));
    }
    return t2;
}

int FUN_0c160c38(int a4)
{
    register int t0;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t3 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC160A42;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o20_ushort *)(t0))->v) = ((((struct o24_short *)(a4))->v));
        t3 = 0x20;
    }
    return t3;
}

int FUN_0c16d3d6(int a4)
{
    if ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x3715))) == 5) {
        (((struct o15_uchar *)(a4))->v) = 0x3;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0164ec(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = FUN_0c187d88(a4);
    t2 = t0;
    if ((int)t0 > (int)a5) {
        *(unsigned char *)((a4 + a5)) = 0x0;
        (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
        t2 = 0x4E;
    }
    return t2;
}


int FUN_0c019a06(int a4)
{
    register int t1;

    *(unsigned char *)(((FUN_0c01cc56(0x10, 0xC019C66)) + 0x3)) = 0x3;
    t1 = FUN_0c01cc56(0x15, 0xC019C66);
    *(unsigned char *)((t1 + 0x3)) = 0x5;
    *(unsigned int *)((t1 + 0x10)) = a4;
    return FUN_0c01cb7c();
}

int FUN_0c021470(int a4, int a5, int a6, int a7)
{
    FUN_0c01fce0(a4, a5, a6, a7);
    (((struct o1_uchar *)0xC3054C5)->v) = 0x0;
    (((struct o0_uchar *)0xC3054C5)->v) = 0x0;
    *(unsigned char *)0xC30AF8A = 0x0;
    *(unsigned char *)0xC309860 = ((*(signed char *)0xC309860) + 0x1);
    *(unsigned char *)0xC30AA33 = 0x0;
    *(unsigned short *)0xC305412 = 0xE10;
    return 0xC30AA33;
}

int FUN_0c01ea00(int a4, int a5, int a6, int a7)
{
    if ((unsigned char)(*(signed char *)0xC541F3D) != 99) {
        if ((*(signed char *)0xC30B6FC) != 0) {
            FUN_0c01e96a(a4, a5, a6, a7);
        }
        FUN_0c02e9d4();
        FUN_0c02b182(0x1);
    }
    return FUN_0c177450();
}

int FUN_0c02d498(void)
{
    register int t0;

    t0 = 0xC4789F8;
    for (;;) {
        *(float *)((t0 + 0x0)) = 0.0f;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC478BFC) {
            break;
        }
    }
    thunk_FUN_0c2b5b00(0xC4789F8);
    gfx_set_fog_color(0x101010);
    return gfx_set_fog_density(0xFF09);
}

int FUN_0c036a34(int a4, int a5, int a6)
{
    if ((*(int *)(((a5 << 2) + 0xC4B4124))) != 0) {
        FUN_0c035ca4((*(int *)((a6 + 0x0))), a4);
        *(unsigned int *)(((a5 << 2) + 0xC4B4124)) = 0x0;
    }
    return 0xC4B4124;
}

int FUN_0c03e46a(int a4, int a5, int a6, int a7)
{
    int stk[67];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = ((*(int *)0xC542B80));
    *(int *)((int)stk + 0) = 0xC1B7350;
    FUN_0c187cac((((int)stk + 0) + 0xC), a5, a6, a7, 0xC1B7350);
    *(volatile int *)(((int)stk + 8));
    return (thunk_FUN_0c03e08c());
}

int FUN_0c042ae4(void)
{
    register float u0;
    register int t1;
    register int t2;
    register int t4;

    u0 = *(float *)0xC042B5C;
    t1 = 0xC532498;
    t2 = 0xC532498;
    for (;;) {
        t4 = 0x3714;
        if ((*(signed char *)((t1 + 0x3714))) != 0) {
            (((struct o160_float *)(t2))->v) = u0;
            t4 = 0x160;
        }
        t1 = (t1 + 0x3938);
        t2 = (t2 + 0x3938);
        if ((unsigned int)t1 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t4;
}

float FUN_0c058390(int a4, int a5, float f4)
{
    register float t2;

    *(float *)((a5 + 0x0)) = (((float (*)(int, int, float))(FUN_0c058328))(a4, 0x0, f4));
    (((struct o4_float *)(a5))->v) = (((float (*)(int, int))(FUN_0c058328))(a4, 0x1));
    t2 = ((float (*)(int, int))(FUN_0c058328))(a4, 0x2);
    (((struct o4_float *)((a5 + 0x4)))->v) = t2;
    return t2;
}

int FUN_0c05a5a8(int a4)
{
    register int t1;
    register int t2;
    register int t0;

    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)(((0xC46E094 + t1) + 0x0))) == a4) {
            t0 = 0x200;
            t0 = (t0 + 0xC46DE94);
            t0 = (t0 + t2);
            *(unsigned int *)((t0 + 0x4)) = 0x0;
        }
        t1 = (t1 + 0x18);
        t2 = (t2 + 0x18);
        if ((unsigned int)t1 >= (unsigned int)0xC0) {
            break;
        }
    }
    return 0xC0;
}

int FUN_0c05b7e0(int a4)
{
    (((struct o0_uchar *)0xC541F41)->v) = a4;
    (((struct o4_uchar *)0xC541F41)->v) = 0x0;
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    (((struct o8_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o7_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o6_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o5_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o4_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o3_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o2_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o1_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o0_uchar *)0xC5421F9)->v) = 0x0;
    return 0x0;
}

int FUN_0c05c240(int a4, int a5, int a6, Stk2 s)
{
    dbg_set_cell_size(s.w[0], s.w[1]);
    FUN_0c17a4c0(a5, a6);
    FUN_0c17a360(a4);
    return dbg_set_cell_size(0x8, 0x8);
}

int FUN_0c05d4c8(int a4)
{
    if ((*(signed char *)0xC541F71) == 0) {
        if ((((*(signed char *)0xC542257) | (*(signed char *)0xC542259)) & ((int)0x1 << (int)((-(*(signed char *)((a4 + 0x9)))) + 0x1))) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c05ee84(void)
{
    (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    *(unsigned short *)0xC541F4E = 0x0;
    *(unsigned short *)0xC541F4C = 0x0;
    game_reset_objects();
    return FUN_0c05c774();
}

float FUN_0c0605e6(int a4)
{
    register int t3;

    t3 = 0xC;
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        
        t3 = 0x10;
    }
    return (((((struct o4_float *)((a4 + 0x8)))->v)) + (*(float *)(((a4 + 0x8) + t3))));
}

int FUN_0c060428(int a4, int a5, float f4)
{
    register float u5;
    float u6;

    if ((*(signed char *)((a5 + 0x2))) != -1) {
        return FUN_0c060290(a4, a5, f4);
    }
    if ((((((struct o40_float *)(a4))->v)) == 1.0f) && ((u5 = (((struct o44_float *)(a4))->v), u5 == 1.0f) && (u6 = (((struct o48_float *)(a4))->v), u6 == 1.0f))) {
        return 0x48;
    }
    return FUN_0c060376(a4, a5);
}

int FUN_0c061284(int a4, int a5)
{
    register int t0;
    int t5;

    t0 = *(signed char *)((a4 + 0x126));
    if (t0 != 2) {
        if ((*(signed char *)((a5 + 0x126))) != 2) {
            if ((t0 == 1) && (t5 = *(signed char *)((a5 + 0x126)), t5 == 1)) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c060c00(void)
{
    FUN_0c0641ca((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    FUN_0c060bd8();
    FUN_0c060a9c(((((struct o8_int *)0xC532434)->v)));
    FUN_0c060a9c(((((struct o4_int *)0xC532434)->v)));
    FUN_0c060a9c(((((struct o24_int *)0xC532434)->v)));
    FUN_0c060a9c(((((struct o0_int *)0xC532434)->v)));
    return FUN_0c060bc2();
}

int FUN_0c06e5e4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = FUN_0c07e2c4(a4);
    if (t0 == 0) {
        (((struct o3735_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x3735))) + 0x1);
        t3 = *(int *)((0xC25924C + ((*(signed char *)((a4 + 0x2))) << 2)));
        return ((int (*)(int, int, int, int))(t3))(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c072c34(int a4)
{
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x1C, 0xFFFFFFFF, 0x2, 0x1C));
}

int FUN_0c0779ae(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x16))) > 0) && (t0 = *(signed char *)((a4 + 0x130)), t0 != 0)) {
        return 0x130;
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC077950))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0778D4))(a4, a5, a6, a7);
}

int FUN_0c076ff8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c076fd2(a4);
            }
            return FUN_0c076f1c(a4);
        }
        return FUN_0c076df4(a4);
    }
    return ((int (*)(int, int, int, int))(0xC076C3C))(a4, a5, a6, a7);
}

int FUN_0c07c436(void)
{
    pdVibMxStop(0x1);
    pdVibMxStop(0x2);
    pdVibMxStop(0x7);
    pdVibMxStop(0x8);
    pdVibMxStop(0xD);
    pdVibMxStop(0xE);
    pdVibMxStop(0x13);
    return (pdVibMxStop(0x14));
}

int FUN_0c07e420(int a4, int a5)
{
    (((struct o134_uchar *)(a4))->v) = a5;
    (((struct o414_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)0xC542237) + 0x10) << 2) + 0xC25ACBC))) + ((((unsigned char)a5 << 2) + (unsigned char)a5) << 2));
    (((struct o136_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    return 0x131;
}

int FUN_0c07ec9a(int a4)
{
    register int t0;
    register int t2;
    register float t1;

    t0 = FUN_0c064ee4(a4, 0x2);
    t2 = t0;
    if (t0 != 0) {
        t1 = FUN_0c064d9c(t0);
        (((struct o37B4_float *)(a4))->v) = (t1 + -1.0f);
        (((struct o2C_float *)(a4))->v) = (t1 + -1.0f);
        t2 = 0x2C;
    }
    return t2;
}

int FUN_0c089c02(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (!(((((struct o17C_float *)(a4))->v)) > 0.0f)) {
        return FUN_0c087b64(a4);
    }
    t2 = *(signed char *)((a4 + 0x16));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        return ((int (*)(int, int, int, int))(0xC089B86))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC089A1A))(a4, a5, a6, a7);
}

int FUN_0c08e756(int a4)
{
    int stk[4];

    *(int *)((int)stk + 12) = a4;
    *(int *)((int)stk + 8) = 0x3;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x3, 0xFFFFFFFF, 0x2, 0x3);
    return FUN_0c059ef6((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x1))), 0x1);
}

int FUN_0c092560(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c09253e(a4);
            }
            return FUN_0c0924f4(a4);
        }
        return FUN_0c0923a0(a4);
    }
    return FUN_0c0922cc(a4);
}

int FUN_0c0959a2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c095980(a4);
            }
            return FUN_0c0958f4(a4);
        }
        return ((int (*)(int, int, int, int))(0xC0957B4))(a4, a5, a6, a7);
    }
    return FUN_0c09571e(a4);
}

int FUN_0c09b92c(int a4)
{
    int stk[4];

    *(int *)((int)stk + 12) = a4;
    *(int *)((int)stk + 8) = 0x3;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x3, 0xFFFFFFFF, 0x2, 0x3);
    return FUN_0c059ef6((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x1))), 0x1);
}

int FUN_0c09bc34(int a4)
{
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t1;
}

int FUN_0c09ec36(int a4)
{
    int stk[4];

    *(int *)((int)stk + 12) = a4;
    *(int *)((int)stk + 8) = 0x3;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x3, 0xFFFFFFFF, 0x2, 0x3);
    return FUN_0c059ef6((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x1))), 0x1);
}

int FUN_0c0a908c(int a4)
{
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t1;
}

int FUN_0c0ab85c(int a4)
{
    int stk[4];

    *(int *)((int)stk + 12) = a4;
    *(int *)((int)stk + 8) = 0x21;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x21, 0xFFFFFFFF, 0x2, 0x21);
    return FUN_0c059ef6((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x1))), 0x1);
}

int FUN_0c0af198(int a4)
{
    int stk[4];

    *(int *)((int)stk + 12) = a4;
    *(int *)((int)stk + 8) = 0x21;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x21, 0xFFFFFFFF, 0x2, 0x21);
    return FUN_0c059ef6((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x1))), 0x1);
}

int FUN_0c0af568(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0af44c(a4);
            }
            return FUN_0c0af404(a4);
        }
        return FUN_0c0af2a4(a4, a5, a6);
    }
    return FUN_0c0af1c4(a4);
}

int FUN_0c0b21ac(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c0b1cf2();
    (((struct o160_float *)(a4))->v) = (*(float *)(((((a5 << 2) << 1) + (*(int *)((0xC25D634 + (t0 << 2))))) + 0x0)));
    return (t0 << 2);
}

int FUN_0c0b4b4e(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c0b4b20();
    (((struct o160_float *)(a4))->v) = (*(float *)(((((a5 << 2) << 2) + (*(int *)((0xC25D654 + (t0 << 2))))) + 0x0)));
    return (t0 << 2);
}

int FUN_0c0b97c2(int a4)
{
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t1;
}

int FUN_0c0b949a(int a4)
{
    int stk[4];

    *(int *)((int)stk + 12) = a4;
    *(int *)((int)stk + 8) = 0x3;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x3, 0xFFFFFFFF, 0x2, 0x3);
    return FUN_0c059ef6((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x1))), 0x1);
}

int FUN_0c0cd888(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((((t0 << 2) << 1) + 0xC25C264) + 0x0))) > (int)(*(short *)((((((struct o418_int *)(a4))->v)) + 0x2)))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (*(int *)((((((t0 - 1) << 2) << 1) + 0xC25C264) + 0x4)));
}

int FUN_0c0d00e4(int a4, int a5)
{
    register int t3;

    *(unsigned char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x0)) = 0x1;
    *(unsigned char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x1)) = (*(int *)((0xC540F18 + ((*(int *)0xC540F90) << 2))));
    *(unsigned int *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x4)) = a4;
    t3 = (((struct o24_short *)(a4))->v);
    *(unsigned short *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x8)) = t3;
    return t3;
}

int FUN_0c0d01f2(int a4)
{
    register int t0;
    register int t3;

    t0 = *(signed char *)0xC540F9A;
    if ((signed char)t0 == 7) {
        *(unsigned int *)0xC472668 = ((*(int *)0xC472668) + 0x1);
        t3 = (signed char)t0;
    } else {
        *(unsigned char *)((((signed char)t0 + 0xC540F9B) + 0x0)) = a4;
        *(unsigned char *)0xC540F9A = ((*(signed char *)0xC540F9A) + 0x1);
        t3 = 0x622;
    }
    return t3;
}

int FUN_0c0d0488(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((((t0 << 1) + t0) << 2) + 0xC540FA4) + 0x0))) == 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x10) {
            return 0xFFFFFFFF;
        }
    }
    return t0;
}

int FUN_0c0d04c4(int a4, int a5)
{
    register int t0;
    register int t1;

    *(unsigned short *)((a4 + 0x0)) = 0x1;
    if ((*(int *)((a5 + 0x0))) != 0) {
        t0 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t0 | 0x2);
        t1 = (t0 | 0x2);
    }
    t0 = t1;
    if ((*(int *)((a5 + 0x4))) != 0) {
        t1 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t1 | 0x4);
        t0 = (t1 | 0x4);
    }
    t1 = t0;
    if ((*(int *)((a5 + 0x8))) != 0) {
        t0 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t0 | 0x8);
        t1 = (t0 | 0x8);
    }
    return t1;
}

int FUN_0c0deff6(int a4)
{
    register int t1;

    (((struct oA8_uchar *)(a4))->v) = ((*(short *)((a4 + 0x1C))) & 0x1);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((short)(t1 - 1) == 0) {
        return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    }
    return (short)(t1 - 1);
}

int FUN_0c0f2034(void)
{
    register int t1;
    register int t2;
    int t3;

    if (((*(signed char *)0xC542237) == 6) && ((t1 = *(signed char *)0xC54098C, (int)t1 > 0) && ((t2 = *(signed char *)0xC54098D, t2 == 4) && (t3 = *(signed char *)0xC54098E, (int)t3 > (int)0x1)))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c104db8(void)
{
    register int t0;

    t0 = FUN_0c117d54();
    if ((int)t0 < 0) {
        t0 = FUN_0c05f22c(0x40);
        if (t0 != 0) {
            FUN_0c05aab6(0x0, 0x4);
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c11e938(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((unsigned int)0xC29244C < (unsigned int)0xC2925CC) {
        t0 = 0xC29244C;
        t1 = 0x0;
        for (;;) {
            t2 = *(short *)((t0 + 0x0));
            t0 = (t0 + 0x2);
            if (t2 != -1) {
                if (t2 == a4) {
                    break;
                }
                t1 = (t1 + 0x1);
                if ((unsigned int)t0 >= (unsigned int)0xC2925CC) {
                    return 0x0;
                }
                continue;
            }
            return 0x0;
        }
        return t1;
    }
    return 0x0;
}

int FUN_0c14811c(int a4, int a5)
{
    register float u1;
    register int t2;
    register int t3;

    if (a5 != 0) {
        *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
        (((struct o18_float *)(a4))->v) = 1.0f;
        u1 = *(float *)0xC14821C;
        (((struct o20_float *)(a4))->v) = u1;
        (((struct o1C_float *)(a4))->v) = u1;
        t3 = 0x1C;
    } else {
        t2 = *(short *)((a4 + 0x6));
        *(unsigned short *)((a4 + 0x6)) = (t2 & 0xFDFF);
        t3 = (t2 & 0xFDFF);
    }
    return t3;
}

int FUN_0c14bb54(int a4, int a5)
{
    register float u1;
    register int t2;
    register int t3;

    if (a5 != 0) {
        *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
        (((struct o18_float *)(a4))->v) = 1.0f;
        u1 = *(float *)0xC14BC60;
        (((struct o20_float *)(a4))->v) = u1;
        (((struct o1C_float *)(a4))->v) = u1;
        t3 = 0x1C;
    } else {
        t2 = *(short *)((a4 + 0x6));
        *(unsigned short *)((a4 + 0x6)) = (t2 & 0xFDFF);
        t3 = (t2 & 0xFDFF);
    }
    return t3;
}

int FUN_0c162f8a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = 0xC2A2EC4;
    if (a7 == 0) {
        t0 = 0xC2A2E60;
    }
    t1 = FUN_0c162770(a4, a5, a6, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC162DAC;
        *(unsigned short *)((t1 + 0x1C)) = 0x5A;
        t0 = 0x5A;
    }
    return t0;
}

int FUN_0c16d304(int a4)
{
    if ((*(short *)(((0x41C + a4) + 0x2))) == 0) {
        (((struct o15_uchar *)(a4))->v) = 0x4;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        *(volatile signed char *)((a4 + 0x2));
        *(unsigned short *)(((0x41C + a4) + 0x2)) = 0xB4;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16dba8(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) > 0) {
        if (!(((((struct o160_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) > 0.0f)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c16fad0(int a4)
{
    register int t0;

    t0 = (((struct o0_int *)0xC475A90)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c16fab2(a4);
        }
        return FUN_0c16fa90(a4, ((((struct o8_int *)0xC475A90)->v)));
    }
    *(volatile int *)0xC475A94;
    return FUN_0c16fa76(a4);
}

void FUN_0c0173bc(int a4, int a5)
{
    register int t0;
    int t2;

    t0 = *(int *)0xC304BA0;
    if (((*(signed char *)((t0 + 0x4C))) == 0) && (t2 = *(signed char *)0xC304C24, t2 == 0)) {
        if ((*(signed char *)((t0 + 0x50))) != 0) {
            (((struct o50_uchar *)(t0))->v) = 0x0;
            (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
        }
    }
}





int FUN_0c036d58(int a4)
{
    if ((*(int *)((((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0xC))) << 2) + 0xC4B4124))) != 0) {
        return FUN_0c035e46((*(int *)(((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0x10))) + 0x0))), (*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0x8))));
    }
    return 0xC4B4124;
}

int FUN_0c0410fa(void)
{
    int t4;

    if ((int)(*(short *)0xC54237A) < (int)0x2710) {
        *(unsigned short *)0xC54237A = ((*(short *)0xC54237A) + 0x1);
    }
    t4 = *(short *)0xC54237A;
    if ((t4 != 0xE10) && (t4 != 0x1C20)) {
        return 0x182;
    }
    return FUN_0c0bb662();
}

int FUN_0c049eac(int a4, int a5, int a6, int a7)
{
    int stk[1];
    int t0;

    t0 = *(signed char *)0xC542236;
    if ((t0 != 2) && (t0 != 4)) {
        FUN_0c049de4();
    } else {
        FUN_0c049a10(t0, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    return (unsigned char)(*(signed char *)0xC40F828);
}

int FUN_0c05189c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    return 0xA8;
}

int FUN_0c051a14(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    return 0xA8;
}

int FUN_0c051ad0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    return 0xA8;
}
