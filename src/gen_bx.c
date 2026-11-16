/* Straight-line functions with calls and guards (batch gen_bx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101C_float { char p[0x101C]; float v; };
struct o1020_float { char p[0x1020]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o133_uchar { char p[0x133]; unsigned char v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o22_short { char p[0x22]; short v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o3744_uchar { char p[0x3744]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3824_short { char p[0x3824]; short v; };
struct o38CC_uint { char p[0x38CC]; unsigned int v; };
struct o38D0_uint { char p[0x38D0]; unsigned int v; };
struct o38D4_uint { char p[0x38D4]; unsigned int v; };
struct o38F8_uint { char p[0x38F8]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o404_uint { char p[0x404]; unsigned int v; };
struct o418_uint { char p[0x418]; unsigned int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o4A_uchar { char p[0x4A]; unsigned char v; };
struct o4B_uchar { char p[0x4B]; unsigned char v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c016a88(void);
int FUN_0c017e58(int, int);
int FUN_0c017e68(int, int);
int FUN_0c018e74(int);
int FUN_0c01cc56(int, int);
int FUN_0c01e9e4(void);
int FUN_0c01fce0(int, int, int, int);
int FUN_0c02188c(int);
int FUN_0c02440e(int);
int FUN_0c0298c8(void);
int FUN_0c029f52(void);
int FUN_0c02af32(void);
int FUN_0c02cd20(int, ...);
int FUN_0c02cdcc(int);
int FUN_0c02cf88(void);
int FUN_0c036024(int);
int FUN_0c036518(int, int);
int FUN_0c03681e(void);
int FUN_0c036864(int);
int FUN_0c036a34(int, int, int);
int FUN_0c036d58(int);
int FUN_0c037bf6(int);
int FUN_0c038024(int);
int FUN_0c038362(int);
int FUN_0c038c1c(int);
int FUN_0c038d8a(int);
int FUN_0c03df82(int);
int FUN_0c03e536(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0403bc(void);
int FUN_0c0404f0(void);
int FUN_0c04055c(void);
int FUN_0c052830(int);
int FUN_0c05283e(int);
int FUN_0c0549f8(int);
int FUN_0c054a6c(int, int, int);
int FUN_0c056c64(int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05846c(int, float, float);
int FUN_0c059bd6(int);
int FUN_0c059e60(int, int);
int FUN_0c059ef6(int, int);
int FUN_0c05a560(int, int, int, int);
int FUN_0c05aab2(void);
int FUN_0c05ab7e(int, int);
int FUN_0c05af1a(int);
int FUN_0c05af54(int);
int FUN_0c05b018(int, int, int, int, int);
int FUN_0c05b048(void);
int FUN_0c05b122(int);
int FUN_0c05b15c(void);
int FUN_0c05e238(int);
int FUN_0c05f690(int, int);
int FUN_0c05f7a0(void);
int FUN_0c063ea0(int);
int FUN_0c06e6f2(int);
int FUN_0c07086a(int);
int FUN_0c0708a6(int);
int FUN_0c07434c(int, int);
int FUN_0c074ce8(int);
int FUN_0c07a388(int);
int FUN_0c07a428(int);
int FUN_0c07a85e(void);
int FUN_0c07a96c(int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c086322(int);
int FUN_0c087318(int);
int FUN_0c087a42(int);
int FUN_0c087ae8(int);
int FUN_0c08dc36(int);
int FUN_0c08e7b0(int);
int FUN_0c08e866(int, int, int);
int FUN_0c091084(int);
int FUN_0c0910f6(int);
int FUN_0c0949e8(int);
int FUN_0c094a46(int);
int FUN_0c094e26(int, int, int, int);
int FUN_0c0950a2(int, int, int, int);
int FUN_0c097d88(int);
int FUN_0c097de6(int);
int FUN_0c09de6a(int);
int FUN_0c09dea8(int);
int FUN_0c09df38(int, int, int, int);
int FUN_0c0a067c(int);
int FUN_0c0a0cfc(int);
int FUN_0c0a0d68(int, int, int, int);
int FUN_0c0a0e02(int, int, int);
int FUN_0c0a0ec0(int);
int FUN_0c0a27fe(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0aa9d2(int);
int FUN_0c0adbc8(int);
int FUN_0c0adc4e(int);
int FUN_0c0ae9b2(int, int, int, int);
int FUN_0c0aeb00(int);
int FUN_0c0b111c(int);
int FUN_0c0b117c(int);
int FUN_0c0b8bc8(int);
int FUN_0c0b8c30(int);
int FUN_0c0bb5a6(int);
int FUN_0c0cc8b0(int, ...);
int FUN_0c0cff28(int, int);
int FUN_0c0d00e4(int, int);
int FUN_0c0dbe00(int);
int FUN_0c0deb54(int, int, int);
int FUN_0c0deba6(int);
int FUN_0c0df294(int);
int FUN_0c0e343a(void);
int FUN_0c0e3440(int);
int FUN_0c0e4dac(int);
int FUN_0c0f5836(int);
int FUN_0c0f5f2e(int);
int FUN_0c0f61fa(int);
int FUN_0c0fb6a6(void);
int FUN_0c11e1e0(int, int, int, int);
int FUN_0c11ef48(void);
int FUN_0c11f1ac(void);
int FUN_0c11f1fe(void);
int FUN_0c11f4f0(void);
int FUN_0c11f56c(void);
int FUN_0c11f5c2(void);
int FUN_0c11f8e4(void);
int FUN_0c1535b0(int, int);
int FUN_0c162770(int, int, int, int);
int FUN_0c16b01e(int, int, int);
int FUN_0c16b38e(int, float);
int FUN_0c16b5a6(int);
int FUN_0c170d30(void);
int FUN_0c170f22(void);
int FUN_0c1736e8(int);
int FUN_0c177100(int, int);
int FUN_0c177140(void);
int FUN_0c177380(int);
int FUN_0c1773a0(int);
int FUN_0c17a550(int);
extern int FUN_0c17da60();
int FUN_0c180a6c(int, int, int);
int FUN_0c181c20(float);
int FUN_0c181c30(float);
int FUN_0c187798(int, int, int);
int FUN_0c187b48(int, int, int);
int FUN_0c2b1b16(int);
int FUN_0c2b1b1c(void);
int FUN_0c2b4824(int);
int FUN_0c2b49a6(int);
int FUN_0c2b4a2e(int);
int FUN_0c2b4a4a(int, int);
int buLoadFileEx(int, int, int, int, int);
int buRewriteExecFile(int, int, int, int, int);
int game_reset_objects(void);
int hit_list_reset(int);
int syCfgSetSoundMode(int);
int thunk_FUN_0c03f346(int, int, int, int);
void FUN_0c16fa90(int a4, int a5);
int FUN_0c11ef08(void);
int FUN_0c11eee8(void);
int FUN_0c11ee7e(void);
int FUN_0c0360be(void);
int FUN_0c036b28(int a4);
int FUN_0c036dc4(void);
int FUN_0c0379b6(int a4, int a5);
int FUN_0c038548(int a4);
int FUN_0c038ec2(int a4);
int FUN_0c038e88(int a4);
int FUN_0c04307c(void);
int FUN_0c053f16(int a4, int a5, int a6, int a7);
int FUN_0c059ed8(int a4, int a5, int a6);
int FUN_0c05b288(int a4, float f4, float f5, float f6, float f7);
int FUN_0c05f6fc(void);
int FUN_0c05f770(void);
int FUN_0c064ee4(int a4, int a5);
int FUN_0c0a74b0(int a4);
int FUN_0c0b746c(int a4, int a5, int a6, int a7);
int FUN_0c0cb6a4(int a4);
int FUN_0c0ccfc0(int a4);
int FUN_0c0dd728(int a4, int a5, int a6);
int FUN_0c0e4f58(int a4, int a5);
int FUN_0c0ec6ce(int a4);
int FUN_0c0ee458(int a4);
int FUN_0c0fb8f0(void);
int FUN_0c0fb90e(void);
int FUN_0c0fe4ec(int a4);
int FUN_0c101e1a(int a4);
int FUN_0c11f18e(void);
int FUN_0c121316(void);
int FUN_0c11f54e(void);
int FUN_0c163116(int a4, int a5, int a6);
int FUN_0c16d2b4(int a4, int a5, int a6);
int FUN_0c018344(void);
int FUN_0c037320(int a4, int a5);
int FUN_0c03c9ac(void);
int FUN_0c04f098(void);
int FUN_0c052114(int a4);
int FUN_0c0520f8(int a4);
int FUN_0c0573e6(void);
int FUN_0c059dd6(int a4, int a5, int a6);
int FUN_0c059df2(int a4, int a5);
int FUN_0c059f04(int a4);
int FUN_0c05aeac(void);
int FUN_0c05b1e8(void);
int FUN_0c05b250(void);
int FUN_0c05e07a(int a4, int a5, int a6, int a7);
int FUN_0c05f80a(void);
int FUN_0c05f826(void);
int FUN_0c0612ee(int a4);
int FUN_0c06483e(int a4, int a5);
int FUN_0c0655c0(int a4, int a5, int a6);
int FUN_0c0699c2(int a4, int a5, int a6, int a7);
int FUN_0c06a0f0(int a4, int a5, int a6, int a7);
int FUN_0c06e958(int a4, int a5, int a6, int a7);
int FUN_0c070980(int a4);
int FUN_0c074862(int a4, int a5, int a6, int a7);
int FUN_0c07a9c6(int a4);
int FUN_0c07a52e(int a4);
int FUN_0c07c23e(void);
int FUN_0c07f0fc(int a4);
int FUN_0c086a94(int a4, int a5, int a6, int a7);
int FUN_0c0879a8(int a4, int a5, int a6, int a7);
int FUN_0c0874f6(int a4, int a5, int a6, int a7);
int FUN_0c088654(int a4, int a5, int a6, int a7);
int FUN_0c088868(int a4, int a5, int a6, int a7);
int FUN_0c0890d4(int a4, int a5, int a6, int a7);
int FUN_0c08941a(int a4, int a5, int a6, int a7);
int FUN_0c08668c(int a4, int a5, int a6, int a7);
int FUN_0c087b64(int a4);
int FUN_0c08958c(int a4, int a5, int a6, int a7);
int FUN_0c08992c(int a4, int a5, int a6, int a7);
int FUN_0c089e5a(int a4, int a5, int a6, int a7);
int FUN_0c08a4d6(int a4, int a5, int a6, int a7);
int FUN_0c08a726(int a4, int a5, int a6, int a7);
int FUN_0c08a97c(int a4, int a5, int a6, int a7);
int FUN_0c08ae20(int a4, int a5, int a6, int a7);
int FUN_0c08b06c(int a4, int a5, int a6, int a7);
int FUN_0c08b2b4(int a4, int a5, int a6, int a7);
int FUN_0c08b4c4(int a4, int a5, int a6, int a7);
int FUN_0c08b6f8(int a4, int a5, int a6, int a7);
int FUN_0c08ba4e(int a4, int a5, int a6, int a7);
int FUN_0c08c0c4(int a4, int a5, int a6, int a7);
int FUN_0c08dc6c(int a4, int a5, int a6, int a7);
int FUN_0c08e930(int a4, int a5, int a6);
int FUN_0c091148(int a4);
int FUN_0c094a68(int a4);
int FUN_0c097e08(int a4);
int FUN_0c09a55a(int a4, int a5, int a6, int a7);
int FUN_0c09de8c(int a4, int a5, int a6, int a7);
int FUN_0c09df88(int a4, int a5, int a6, int a7);
int FUN_0c0a06b0(int a4, int a5, int a6, int a7);
int FUN_0c0a0efc(int a4, int a5, int a6);
int FUN_0c0a2820(int a4, int a5, int a6, int a7);
int FUN_0c0aa9f4(int a4, int a5, int a6, int a7);
int FUN_0c0adc70(int a4);
int FUN_0c0b119e(int a4);
int FUN_0c0b8c52(int a4);
int FUN_0c0c2928(Stk4 s);
int FUN_0c0c6f96(int a4, int a5, int a6, int a7);
int FUN_0c0c86bc(int a4, int a5, int a6, int a7);
int FUN_0c0ded42(int a4);
int FUN_0c0decfc(int a4, int a5, int a6);
int FUN_0c115e20(void);
int FUN_0c116c12(int a4, int a5);
int FUN_0c143b4a(int a4, float f4);
int FUN_0c144984(int a4, int a5, int a6);
int FUN_0c148d64(int a4, int a5, int a6);
int FUN_0c1495c0(int a4, int a5, int a6);
int FUN_0c175898(void);
int FUN_0c01d27a(void);
int FUN_0c02ae12(int a4);
int FUN_0c0369b8(void);
int FUN_0c03dfa6(void);
void FUN_0c05883a(int a4, int a5, int a6, float f4, float f5, float f6);
int FUN_0c05a670(void);
void FUN_0c05a7f8(void);
int FUN_0c05aab6(int a4, int a5);
int FUN_0c05abb2(int a4, int a5);
int FUN_0c05b204(void);
int FUN_0c063f06(void);
int FUN_0c0640fc(void);
int FUN_0c064fba(int a4, int a5, int a6);
int FUN_0c07f172(int a4);
int FUN_0c0be1da(int a4);
int FUN_0c0d60de(int a4);
int FUN_0c0df2f0(int a4);
int FUN_0c0e0548(int a4, int a5);
int FUN_0c0e34a8(int a4);
int FUN_0c0f02aa(int a4);
int FUN_0c0fa94c(void);
int FUN_0c0fb8b0(int a4);
int FUN_0c101d38(int a4);
int FUN_0c115278(void);
int FUN_0c1152e4(void);
int FUN_0c115322(void);
int FUN_0c1154f4(void);
int FUN_0c1153a2(void);
int FUN_0c1155b6(void);
int FUN_0c137f74(int a4, int a5, int a6);
int FUN_0c1675dc(int a4, int a5, int a6);
int FUN_0c16b9d2(int a4, int a5, int a6, float f4);
int FUN_0c016252(int a4);
int FUN_0c01760a(void);
int FUN_0c017622(void);
int FUN_0c01fd34(void);
int FUN_0c0206be(void);
int FUN_0c020e94(int a4, int a5, int a6, int a7);
int FUN_0c02d4c4(void);
int FUN_0c036c38(void);
int FUN_0c0392bc(int a4);
int FUN_0c03980c(int a4, float f4, float f5);
int FUN_0c03c340(int a4);
int FUN_0c03d432(int a4);
int FUN_0c040728(void);
int FUN_0c042fe0(void);
int FUN_0c042ff8(void);
int FUN_0c043064(void);
int FUN_0c042eee(void);
int FUN_0c053efe(int a4);
int FUN_0c059c62(int a4, int a5);
int FUN_0c05b0be(int a4, int a5);
int FUN_0c05f2e2(int a4, int a5);
int FUN_0c060a84(int a4);
int FUN_0c073eb8(int a4, int a5, int a6);
int FUN_0c0a0dea(int a4, int a5, int a6, int a7);
int FUN_0c0bdfd0(int a4);
int FUN_0c0be39c(void);
void FUN_0c0d06cc(void);
int FUN_0c0f584a(void);
int FUN_0c0f5f42(void);
int FUN_0c0f620e(void);
void FUN_0c0fc69e(void);
int FUN_0c0fc90c(int a4);
int FUN_0c015906(void);
int FUN_0c017098(void);
int FUN_0c02bad0(void);
int FUN_0c02d046(int a4);
int FUN_0c02d4dc(void);
int FUN_0c02f4ac(void);
int FUN_0c0303fc(int a4);
int FUN_0c0365f0(int a4);
int FUN_0c03796e(int a4, int a5);
int FUN_0c04537c(void);
int FUN_0c045a22(void);
int FUN_0c05a02e(int a4);
int FUN_0c05abfe(int a4);
int FUN_0c05b10c(int a4);
int FUN_0c060bc2(void);
int FUN_0c0702ae(int a4);
int FUN_0c07ebd0(int a4);
int FUN_0c07ebe6(int a4);
int FUN_0c091bba(int a4);
int FUN_0c0a34c4(int a4);
int FUN_0c0b1bae(int a4);
int FUN_0c0bdedc(void);
int FUN_0c0bdf2e(void);
int FUN_0c0bdf44(void);
int FUN_0c0bdf98(int a4);
int FUN_0c0be3b4(void);
int FUN_0c0be438(void);
int FUN_0c0d558c(int a4);
int FUN_0c0e1080(int a4);
int FUN_0c0e1314(int a4);
int FUN_0c0fb66a(void);
int FUN_0c10ebc4(int a4);
int FUN_0c134274(int a4);
int FUN_0c16f87a(int a4, int a5);
int FUN_0c172434(int a4, int a5);
void FUN_0c017d7e(int a4, int a5, int a6, int a7);
int FUN_0c01cd2c(int a4);
int FUN_0c01cd40(int a4);
int FUN_0c01f6e4(void);
int FUN_0c021b3e(void);
int FUN_0c02bda8(int a4);
int FUN_0c02c35a(int a4);
int FUN_0c02d104(void);
int FUN_0c02d240(int a4, int a5, int a6, int a7);
int FUN_0c02d294(int a4, int a5, int a6, int a7);
void FUN_0c03859e(int a4);
int FUN_0c038944(int a4, int a5);
void FUN_0c03c4ca(void);
void FUN_0c03c742(void);
int FUN_0c0433f8(void);
int FUN_0c04d6e0(int a4);
int FUN_0c057cb4(void);
int FUN_0c059ce8(int a4);
int FUN_0c05a06c(int a4);
int FUN_0c05a4a6(int a4, int a5);
int FUN_0c05aad0(int a4, int a5, int a6);
int FUN_0c05b1d4(void);
int FUN_0c05e478(void);
float FUN_0c064ea0(int a4);
int FUN_0c07b008(int a4);
int FUN_0c095100(int a4, int a5, int a6, int a7);
int FUN_0c09b250(int a4);
int FUN_0c0be424(void);
int FUN_0c0c2aa2(int a4, int a5);
int FUN_0c0d60a8(int a4);
int FUN_0c0ede50(int a4);
int FUN_0c0f74ac(int a4);
int FUN_0c0f9cb0(int a4);
int FUN_0c1213c4(int a4);
int FUN_0c121958(int a4);
int FUN_0c143b36(int a4, float f4);
int FUN_0c15360e(int a4);
int FUN_0c169568(int a4, int a5, int a6);
int FUN_0c17106e(void);
int FUN_0c02aad2(void);
int FUN_0c03062a(int a4);
void FUN_0c0385b2(int a4);
int FUN_0c038958(int a4, int a5);
int FUN_0c0397a8(int a4, float f4, float f5);
int FUN_0c0397ba(int a4, float f4, float f5);
int FUN_0c0397fa(int a4, float f4, float f5);
int FUN_0c0397e8(int a4, float f4, float f5);
int FUN_0c042fce(void);
int FUN_0c044022(int a4, int a5, int a6, int a7);
void FUN_0c054e7e(int a4, int a5, int a6);
int FUN_0c059ca0(int a4);
int FUN_0c059cb2(int a4);
int FUN_0c05aa9c(int a4);
int FUN_0c05aae4(int a4, int a5);
int FUN_0c05ab12(int a4, int a5);
int FUN_0c064116(void);
int FUN_0c064f02(int a4);
int FUN_0c0cb776(int a4);
int FUN_0c0d55a2(int a4);
int FUN_0c0e1096(int a4);
int FUN_0c10b70e(int a4);
int FUN_0c10dae2(int a4);
int FUN_0c10daf4(int a4);
int FUN_0c10db06(int a4);
int FUN_0c10db28(int a4);
int FUN_0c10db3a(int a4);
int FUN_0c10db5e(int a4);
int FUN_0c016278(void);
int FUN_0c016296(void);
int FUN_0c0162b6(void);
int FUN_0c0162a6(void);
int FUN_0c017e38(void);
int FUN_0c017e48(void);
int FUN_0c017e78(void);
int FUN_0c017eb8(void);
int FUN_0c017ee8(void);
int FUN_0c017ed8(void);
int FUN_0c017ec8(void);
int FUN_0c021eb4(void);
int FUN_0c021ed2(void);
int FUN_0c02b50c(float f4);
int FUN_0c02b51c(float f4, float f5);
int FUN_0c02b7da(void);
int FUN_0c02bae6(void);
int FUN_0c029f60(void);
int FUN_0c02dc0c(void);
int FUN_0c02f7ec(void);
int FUN_0c02f7fc(void);
int FUN_0c02f80c(void);
int FUN_0c02f81c(void);
int FUN_0c02f82c(void);
int FUN_0c02f83c(void);
int FUN_0c03e08c(int a4, int a5, int a6, int a7);
int FUN_0c042f06(void);
int FUN_0c059e0e(int a4, int a5, int a6);
int FUN_0c05adb4(int a4);
int FUN_0c05ad94(int a4);
int FUN_0c05add4(int a4);
int FUN_0c05adc4(int a4);
int FUN_0c05ada4(int a4);
int FUN_0c05edf0(void);
int FUN_0c05f7fa(void);
int FUN_0c06dadc(int a4, int a5, int a6, int a7);
int FUN_0c06daec(int a4, int a5, int a6, int a7);
int FUN_0c07a9e2(int a4, int a5, int a6, int a7);
int FUN_0c07ac90(int a4, int a5, int a6, int a7);
int FUN_0c081ec2(int a4);
int FUN_0c0a34b4(int a4);
int FUN_0c0a34a4(int a4);
int FUN_0c0a34da(int a4);
int FUN_0c0a68a2(int a4, int a5, int a6, int a7);
int FUN_0c0aeb60(int a4, int a5, int a6, int a7);
int FUN_0c0bb67c(int a4);
int FUN_0c0bb69c(int a4);
int FUN_0c0bb68c(int a4);
int FUN_0c0bb6ac(int a4);
int FUN_0c0bb6bc(int a4);
int FUN_0c0bb6cc(int a4);
void FUN_0c0d04b4(int a4);


int FUN_0c11ef08(void)
{
    FUN_0c11f54e();
    FUN_0c03f40c(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038ec2(0x8);
}

int FUN_0c11eee8(void)
{
    FUN_0c11f18e();
    FUN_0c03f40c(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038ec2(0x8);
}

int FUN_0c11ee7e(void)
{
    FUN_0c11ef48();
    FUN_0c03f40c(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038ec2(0x8);
}

int FUN_0c0360be(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c036024((signed char)t0);
        t0 = (t0 + 0x1);
        if ((int)(signed char)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c036b28(int a4)
{
    return FUN_0c036a34((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0x8))), (*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0xC))), (*(int *)((((((a4 << 2) + a4) << 2) + 0xC1AA7E4) + 0x10))));
}

int FUN_0c036dc4(void)
{
    register int t2;

    FUN_0c036d58(0x2);
    t2 = 0xA;
    if ((*(signed char *)0xC5429A8) == 0) {
        t2 = 0x9;
    }
    FUN_0c036d58(t2);
    return FUN_0c036d58(0xC);
}

int FUN_0c0379b6(int a4, int a5)
{
    register int t4;

    (((struct o18_float *)((*(int *)0xC3BD868)))->v) = (*(float *)((a4 + 0x0)));
    (((struct o1C_float *)((*(int *)0xC3BD868)))->v) = (*(float *)((a5 + 0x0)));
    t4 = *(int *)0xC3BD868;
    *(unsigned int *)((t4 + 0x1C)) = ((*(int *)((t4 + 0x1C))) | 0x1);
    return 0x0;
}

int FUN_0c038548(int a4)
{
    register int t1;
    register int t2;

    t1 = 0xC532434;
    t2 = (*(int *)(((a4 << 2) + 0xC532434)));
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = (FUN_0c038024(t2));
        t2 = (*(int *)((t2 + 0xC)));
    }
    return t1;
}

int FUN_0c038ec2(int a4)
{
    register int t1;
    register int t2;

    t1 = 0xC532434;
    t2 = (*(int *)(((a4 << 2) + 0xC532434)));
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = (FUN_0c038d8a(t2));
        t2 = (*(int *)((t2 + 0xC)));
    }
    return t1;
}

int FUN_0c038e88(int a4)
{
    register int t1;
    register int t2;

    t1 = 0xC532434;
    t2 = (*(int *)(((a4 << 2) + 0xC532434)));
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = (FUN_0c038c1c(t2));
        t2 = (*(int *)((t2 + 0xC)));
    }
    return t1;
}

int FUN_0c04307c(void)
{
    register int t1;
    int t2;

    if (((*(signed char *)0xC5421F8) == 1) && ((t1 = *(signed char *)0xC5421F9, t1 == 3) && (t2 = *(signed char *)0xC5421FA, t2 == 99))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c053f16(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t3 = *(int *)((((*(signed char *)0xC542237) << 2) + 0xC241484));
        return ((int (*)(int, int, int, int))(t3))(0xA, a5, a6, a7);
    }
    return t0;
}

int FUN_0c059ed8(int a4, int a5, int a6)
{
    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == a5) {
        return FUN_0c059e60(a4, a6);
    }
    return 0x8C;
}

int FUN_0c05b288(int a4, float f4, float f5, float f6, float f7)
{
    return FUN_0c05846c(a4, f4, f5);
}

int FUN_0c05f6fc(void)
{
    *(unsigned int *)0xC5421D8 = 0x0;
    *(unsigned char *)0xC541F3D = 0x2;
    FUN_0c05b1d4();
    return FUN_0c187b48(0xC46E1B8, 0x0, 0x17);
}

int FUN_0c05f770(void)
{
    register int t1;

    if ((*(signed char *)0xC5429B4) == 1) {
        return 0x0;
    }
    t1 = *(signed char *)0xC3BD447;
    return (((*(int *)0xC46E1A8) & (unsigned char)t1) ^ (unsigned char)t1);
}

int FUN_0c064ee4(int a4, int a5)
{
    register int t1;
    register int t4;

    t1 = ((((struct o404_int *)(a4))->v));
    for (;;) {
        if (t1 == 0) {
            return 0x0;
        }
        t4 = *(int *)((t1 + 0x8));
        if ((*(signed char *)((t4 + 0x4))) == a5) {
            break;
        }
        t1 = (*(int *)((t1 + 0x0)));
    }
    return t4;
}

int FUN_0c0a74b0(int a4)
{
    FUN_0c0a3058(a4, 0xFFFFFFFF, 0x2, 0x3);
    return FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x1);
}

int FUN_0c0b746c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = *(signed char *)((a4 + 0x3728));
    t3 = 0x0;
    if (t0 != 0) {
        t3 = 0x1;
        if (t0 != 1) {
            t3 = 0x0;
        }
    }
    return ((int (*)(int, int, int, int))(0xC0B7322))(a4, t3, a6, a7);
}

int FUN_0c0cb6a4(int a4)
{
    register int t3;

    t3 = 0x166;
    if ((*(signed char *)0xC54235E) != 0) {
        (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) | ((int)0x1 << (int)(*(signed char *)0xC542363)));
        t3 = 0x12E;
    }
    return t3;
}

int FUN_0c0ccfc0(int a4)
{
    register int t3;

    t3 = 0x166;
    if ((*(signed char *)0xC54235E) != 0) {
        (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) | ((int)0x1 << (int)(*(signed char *)0xC542363)));
        t3 = 0x12E;
    }
    return t3;
}

int FUN_0c0dd728(int a4, int a5, int a6)
{
    (((struct o15_uchar *)(a4))->v) = a5;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return (FUN_0c187798(a4, a5, a6));
}


int FUN_0c0ec6ce(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o41C_uchar *)(a4))->v) = 0x5;
        (((struct o132_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0ee458(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o41C_uchar *)(a4))->v) = 0x5;
        (((struct o132_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0fb8f0(void)
{
    register int t0;
    register int t2;
    register int t3;

    { struct mvb32 { char b[32]; }; *(struct mvb32 *)(0xC83C6C4) = *(struct mvb32 *)(0xC5429A8); }
    t0 = 0xC5429C8;
    t2 = 0xC83C6E4;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC5429C8 + 1628)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    return 0x1;
}

int FUN_0c0fb90e(void)
{
    register int t0;
    register int t2;
    register int t3;

    { struct mvb32 { char b[32]; }; *(struct mvb32 *)(0xC5429A8) = *(struct mvb32 *)(0xC83C6C4); }
    t0 = 0xC83C6E4;
    t2 = 0xC5429C8;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC83C6E4 + 1628)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    return 0x1;
}

int FUN_0c0fe4ec(int a4)
{
    register int t0;

    t0 = FUN_0c187b48(0xC472B24, 0x0, 0x80);
    *(unsigned int *)0xC472B50 = a4;
    return t0;
}

int FUN_0c101e1a(int a4)
{
    if (((int)(*(int *)0xC472D20) > (int)0x1) && (((unsigned short)a4 & 0xFFF) == 0xFFF)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c11f18e(void)
{
    register int t0;

    t0 = *(signed char *)0xC4750AD;
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c11f4f0();
        }
        return FUN_0c11f1fe();
    }
    FUN_0c11f1ac();
    return FUN_0c11f1fe();
}

int FUN_0c121316(void)
{
    register int t0;

    t0 = 0xC532498;
    for (;;) {
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        t0 = (t0 + 0x3938);
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return 0xA8;
}

int FUN_0c11f54e(void)
{
    register int t0;

    t0 = *(signed char *)0xC4750AD;
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c11f8e4();
        }
        return FUN_0c11f5c2();
    }
    FUN_0c11f56c();
    return FUN_0c11f5c2();
}

int FUN_0c163116(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c162770(a4, a5, a6, 0xC2A2E74);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC162FD0;
        *(unsigned short *)((t0 + 0x1C)) = 0x78;
        t1 = 0x78;
    }
    return t1;
}

int FUN_0c16d2b4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c162770(a4, a5, a6, 0xC2A2FA0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC16D1EC;
        *(unsigned short *)((t0 + 0x1C)) = 0x78;
        t1 = 0x78;
    }
    return t1;
}

int FUN_0c018344(void)
{
    (((struct oA8_uchar *)((FUN_0c01cc56(0x8, 0xC018368))))->v) = 0x0;
    *(unsigned int *)0xC304F24 = 0x1;
    return 0xA8;
}

int FUN_0c037320(int a4, int a5)
{
    if ((int)(*(int *)((a5 + 0xC))) <= (int)a4) {
        return 0xFFFFFFFF;
    }
    return (*(int *)((((((a4 << 2) << 2) << 1) + (a5 + 0x10)) + 0x18)));
}


int FUN_0c04f098(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC04EFC8;
    }
    return t0;
}


int FUN_0c0520f8(int a4)
{
    if ((*(signed char *)((a4 + 0x5))) == 0) {
        FUN_0c052830(a4);
    }
    return FUN_0c05283e(a4);
}

int FUN_0c0573e6(void)
{
    int t1;

    if (((*(signed char *)0xC54244D) == 1) && (t1 = *(signed char *)0xC54244F, t1 != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c059dd6(int a4, int a5, int a6)
{
    return FUN_0c05aad0((*(int *)(((a5 << 2) + 0xC1C305C))), (a4 & 0x3), a6);
}

int FUN_0c059df2(int a4, int a5)
{
    return FUN_0c05aad0(a5, a4, ((a4 * 0x3938) + 0xC5324C0));
}

int FUN_0c059f04(int a4)
{
    FUN_0c059df2(a4, 0xF);
    return FUN_0c059e60(((a4 * 0x3938) + 0xC532498), 0x0);
}

int FUN_0c05aeac(void)
{
    register int t0;
    register int t1;

    t0 = 0x2;
    for (;;) {
        t1 = FUN_0c05af1a(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t1;
}

int FUN_0c05b1e8(void)
{
    register float u0;

    u0 = *(float *)0xC05B278;
    (((struct o0_float *)0xC46E164)->v) = (((((struct o8_float *)0xC46E164)->v)) * u0);
    (((struct o4_float *)0xC46E164)->v) = (((((struct oC_float *)0xC46E164)->v)) * u0);
    return FUN_0c05b15c();
}

int FUN_0c05b250(void)
{
    *(unsigned int *)0xC46E1A0 = ((*(int *)0xC46E1A0) + 0x1);
    *(unsigned int *)0xC46E1A0 = ((*(int *)0xC46E1A0) & 0x3);
    return FUN_0c05aab6((*(int *)0xC46E1A0), 0x0);
}

int FUN_0c05e07a(int a4, int a5, int a6, int a7)
{
    *(unsigned char *)((((a4 * 0x98) + 0xC541CDC) + 0x9)) = a4;
    (((struct o4C_uchar *)(((a4 * 0x98) + 0xC541CDC)))->v) = a5;
    return ((int (*)(int, int, int, int))(0xC05D904))(((a4 * 0x98) + 0xC541CDC), a5, a6, a7);
}

int FUN_0c05f80a(void)
{
    register int t0;

    t0 = FUN_0c2b1b1c();
    if (t0 == 1) {
        return FUN_0c2b1b16(0x0);
    }
    return t0;
}

int FUN_0c05f826(void)
{
    register int t0;

    t0 = FUN_0c2b1b1c();
    if (t0 == 0) {
        return FUN_0c2b1b16(0x1);
    }
    return t0;
}

int FUN_0c0612ee(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x126));
    if (t0 != 2) {
        if (t0 == 1) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c06483e(int a4, int a5)
{
    register float u0;
    register float u1;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    if (u1 > u0) {
        return 0xFFFFFFFF;
    }
    if (u0 == u1) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c0655c0(int a4, int a5, int a6)
{
    if ((int)(unsigned short)(((a5 - a4) + a6) + 0x8000) < (int)(a6 << 1)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0699c2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0699BE))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0695FE))(a4, a5, a6, a7);
}

int FUN_0c06a0f0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC06A0D0))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC069EEC))(a4, a5, a6, a7);
}

int FUN_0c06e958(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC06E90C))(a4, a5, a6, a7);
    }
    return FUN_0c06e6f2(a4);
}

int FUN_0c070980(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0708a6(a4);
    }
    return FUN_0c07086a(a4);
}

int FUN_0c074862(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC074DCC))(a4, a5, a6, a7);
    }
    return FUN_0c074ce8(a4);
}

int FUN_0c07a9c6(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c07a96c(a4);
    }
    return FUN_0c07a85e();
}

int FUN_0c07a52e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c07a428(a4);
    }
    return FUN_0c07a388(a4);
}

int FUN_0c07c23e(void)
{
    register int t0;

    t0 = 0xC471A9C;
    for (;;) {
        *(unsigned short *)((t0 + 0x2)) = 0x0;
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0xC);
        if ((unsigned int)t0 >= (unsigned int)0xC471ACC) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c07f0fc(int a4)
{
    register int t0;

    t0 = (((struct o430_short *)(a4))->v);
    if (((0x80 & (unsigned short)t0) != 0) && ((0x200 & (unsigned short)t0) != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c086a94(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0868CC))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08679C))(a4, a5, a6, a7);
}

int FUN_0c0879a8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0877BA))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC087610))(a4, a5, a6, a7);
}

int FUN_0c0874f6(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC087478))(a4, a5, a6, a7);
    }
    return FUN_0c087318(a4);
}

int FUN_0c088654(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08856C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0882AC))(a4, a5, a6, a7);
}

int FUN_0c088868(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08875C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08871A))(a4, a5, a6, a7);
}

int FUN_0c0890d4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08901E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC088FA2))(a4, a5, a6, a7);
}

int FUN_0c08941a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC089270))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC089180))(a4, a5, a6, a7);
}

int FUN_0c08668c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC086538))(a4, a5, a6, a7);
    }
    return FUN_0c086322(a4);
}

int FUN_0c087b64(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c087ae8(a4);
    }
    return FUN_0c087a42(a4);
}

int FUN_0c08958c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC089544))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0894CA))(a4, a5, a6, a7);
}

int FUN_0c08992c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC089790))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC089670))(a4, a5, a6, a7);
}

int FUN_0c089e5a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC089D48))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC089D02))(a4, a5, a6, a7);
}

int FUN_0c08a4d6(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08A452))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08A3B0))(a4, a5, a6, a7);
}

int FUN_0c08a726(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08A696))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08A5D0))(a4, a5, a6, a7);
}

int FUN_0c08a97c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08A862))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08A81C))(a4, a5, a6, a7);
}

int FUN_0c08ae20(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08AC24))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08AAB0))(a4, a5, a6, a7);
}

int FUN_0c08b06c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08AF52))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08AF0C))(a4, a5, a6, a7);
}

int FUN_0c08b2b4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08B1C8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08B144))(a4, a5, a6, a7);
}

int FUN_0c08b4c4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08B400))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08B370))(a4, a5, a6, a7);
}

int FUN_0c08b6f8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08B5EE))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08B5A8))(a4, a5, a6, a7);
}

int FUN_0c08ba4e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08BA32))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08B7E0))(a4, a5, a6, a7);
}

int FUN_0c08c0c4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08BF94))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08BEC2))(a4, a5, a6, a7);
}

int FUN_0c08dc6c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c08dc36(a4);
    }
    return ((int (*)(int, int, int, int))(0xC08DBD8))(a4, a5, a6, a7);
}

int FUN_0c08e930(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c08e866(a4, a5, a6);
    }
    return FUN_0c08e7b0(a4);
}

int FUN_0c091148(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0910f6(a4);
    }
    return FUN_0c091084(a4);
}

int FUN_0c094a68(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c094a46(a4);
    }
    return FUN_0c0949e8(a4);
}

int FUN_0c097e08(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c097de6(a4);
    }
    return FUN_0c097d88(a4);
}

int FUN_0c09a55a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC09A50C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC09A4A8))(a4, a5, a6, a7);
}


int FUN_0c09df88(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c09df38(a4, a5, a6, a7);
    }
    return FUN_0c09dea8(a4);
}

int FUN_0c0a06b0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0a067c(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0A0618))(a4, a5, a6, a7);
}

int FUN_0c0a0efc(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0a0ec0(a4);
    }
    return FUN_0c0a0e02(a4, a5, a6);
}

int FUN_0c0a2820(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0a27fe(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0A27A0))(a4, a5, a6, a7);
}

int FUN_0c0aa9f4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0aa9d2(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0AA974))(a4, a5, a6, a7);
}

int FUN_0c0adc70(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0adc4e(a4);
    }
    return FUN_0c0adbc8(a4);
}

int FUN_0c0b119e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0b117c(a4);
    }
    return FUN_0c0b111c(a4);
}

int FUN_0c0b8c52(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0b8c30(a4);
    }
    return FUN_0c0b8bc8(a4);
}


int FUN_0c0c6f96(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0C6DF8))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0C6D66))(a4, a5, a6, a7);
}

int FUN_0c0c86bc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0C8606))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0C85BA))(a4, a5, a6, a7);
}

int FUN_0c0ded42(int a4)
{
    register int t0;
    register int t2;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t2 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x6;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c0decfc(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0deba6(a4);
    }
    return FUN_0c0deb54(a4, a5, a6);
}

int FUN_0c115e20(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC474104;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        if ((int)t2 > 0) {
            t1 = (t1 + 0x1);
        }
        if ((unsigned int)t0 >= (unsigned int)0xC474404) {
            break;
        }
    }
    return t1;
}

int FUN_0c116c12(int a4, int a5)
{
    *(unsigned char *)(((a4 + 0x41C) + 0x1)) = (*(signed char *)(((a4 + 0x41C) + 0x0)));
    (((struct o41C_uchar *)(a4))->v) = a5;
    *(unsigned char *)((((a4 + 0x41C) + 0x2) + 0x4)) = 0x0;
    *(unsigned char *)((((a4 + 0x41C) + 0x2) + 0x3)) = 0x0;
    *(unsigned char *)((((a4 + 0x41C) + 0x2) + 0x2)) = 0x0;
    *(unsigned char *)((((a4 + 0x41C) + 0x2) + 0x1)) = 0x0;
    *(unsigned char *)((((a4 + 0x41C) + 0x2) + 0x0)) = 0x0;
    return 0x0;
}

int FUN_0c143b4a(int a4, float f4)
{
    register float u0;

    u0 = (((struct o18_float *)(a4))->v);
    (((struct o18_float *)(a4))->v) = (u0 - f4);
    if (0.0f > (u0 - f4)) {
        (((struct o18_float *)(a4))->v) = 0.0f;
    }
    u0 = (((struct o18_float *)(a4))->v);
    (((struct o20_float *)(a4))->v) = u0;
    (((struct o1C_float *)(a4))->v) = u0;
    return 0x1C;
}

int FUN_0c144984(int a4, int a5, int a6)
{
    register int t0;

    (((struct o15_uchar *)(a4))->v) = a5;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    t0 = a5;
    if (a5 == 1) {
        *(unsigned short *)((a4 + 0x1C)) = a6;
        t0 = a6;
    }
    return t0;
}

int FUN_0c148d64(int a4, int a5, int a6)
{
    register int t0;

    (((struct o15_uchar *)(a4))->v) = a5;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    t0 = a5;
    if (a5 == 1) {
        *(unsigned short *)((a4 + 0x1C)) = a6;
        t0 = a6;
    }
    return t0;
}

int FUN_0c1495c0(int a4, int a5, int a6)
{
    register int t0;

    (((struct o15_uchar *)(a4))->v) = a5;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    t0 = a5;
    if (a5 == 1) {
        *(unsigned short *)((a4 + 0x1C)) = a6;
        t0 = a6;
    }
    return t0;
}

int FUN_0c175898(void)
{
    FUN_0c1736e8(0x0);
    FUN_0c1736e8(0x1);
    FUN_0c1736e8(0x2);
    return FUN_0c1736e8(0x3);
}

int FUN_0c01d27a(void)
{
    (((struct o0_uint *)0xC305050)->v) = 0x0;
    (((struct o4_uint *)0xC305050)->v) = 0x0;
    (((struct o8_uint *)0xC305050)->v) = 0x0;
    (((struct oC_uint *)0xC305050)->v) = 0x22;
    (((struct o10_uint *)0xC305050)->v) = 0x0;
    return 0xC30505C;
}

int FUN_0c02ae12(int a4)
{
    register int t0;

    if ((signed char)a4 != 0) {
        t0 = 0x11;
        if ((signed char)a4 == 1) {
            t0 = 0x2A;
        }
        return FUN_0c018e74(t0);
    }
    return (signed char)a4;
}

int FUN_0c0369b8(void)
{
    register int t0;

    t0 = FUN_0c02af32();
    if ((*(int *)0xC4B41F0) != 0) {
        *(unsigned int *)0xC4B41F0 = 0x0;
    }
    return t0;
}

int FUN_0c03dfa6(void)
{
    register int t0;

    t0 = FUN_0c03df82(0x8000);
    if (t0 != 0) {
        return 0x1;
    }
    return 0x0;
}

void FUN_0c05883a(int a4, int a5, int a6, float f4, float f5, float f6)
{
    *(float *)((a4 + 0x0)) = (((((f6 - (float)a6) * (f4 - f5)) / ((float)a5 - (float)a6))) + f5);
}

int FUN_0c05a670(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = (0xC46DE94 + t0);
        t0 = (t0 + 0x14);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0x140) {
            break;
        }
    }
    return 0xC46DE94;
}

void FUN_0c05a7f8(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = (0xC46DFD4 + t0);
        t0 = (t0 + 0x18);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0xC0) {
            break;
        }
    }
}

int FUN_0c05aab6(int a4, int a5)
{
    return FUN_0c05aab2();
}

int FUN_0c05abb2(int a4, int a5)
{
    *(volatile int *)((((*(int *)0xC46E198) << 2) + 0xC257644));
    return FUN_0c05aab2();
}

int FUN_0c05b204(void)
{
    (((struct o0_float *)0xC46E164)->v) = (((((struct o8_float *)0xC46E164)->v)) * 0.0f);
    (((struct o4_float *)0xC46E164)->v) = (((((struct oC_float *)0xC46E164)->v)) * 0.0f);
    return FUN_0c05b15c();
}

int FUN_0c063f06(void)
{
    FUN_0c063ea0(((((struct o0_int *)0xC532434)->v)));
    FUN_0c063ea0(((((struct o4_int *)0xC532434)->v)));
    FUN_0c063ea0(((((struct o8_int *)0xC532434)->v)));
    return FUN_0c063ea0(((((struct o24_int *)0xC532434)->v)));
}

int FUN_0c0640fc(void)
{
    FUN_0c02440e(((((struct o0_int *)0xC532434)->v)));
    FUN_0c02440e(((((struct o8_int *)0xC532434)->v)));
    FUN_0c02440e(((((struct o4_int *)0xC532434)->v)));
    return FUN_0c02440e(((((struct o24_int *)0xC532434)->v)));
}

int FUN_0c064fba(int a4, int a5, int a6)
{
    *(float *)((a6 + 0x0)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
    (((struct o8_float *)(a6))->v) = (((((struct o8_float *)((a4 + 0x8)))->v)) - ((((struct o8_float *)((a5 + 0x8)))->v)));
    return 0x1;
}

int FUN_0c07f172(int a4)
{
    if (((unsigned short)((((struct o430_short *)(a4))->v)) & 128) != 0) {
        (((struct o3731_uchar *)(a4))->v) = 0x2;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0be1da(int a4)
{
    *(unsigned short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE)) = (*(signed char *)((0x374D + ((((struct o3760_int *)(a4))->v)))));
    return 0xC471AEE;
}

int FUN_0c0d60de(int a4)
{
    if ((unsigned char)(*(signed char *)(((unsigned char)(*(signed char *)((a4 + 0xC286EC8))) + 0xC472A80))) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0df2f0(int a4)
{
    if ((*(float *)(((((((((struct o22_short *)(a4))->v)) << 2) << 2) + 0xC1CA2DC) + 0x0))) > ((((struct o28_float *)(a4))->v))) {
        return 0x28;
    }
    return FUN_0c0df294(a4);
}

int FUN_0c0e0548(int a4, int a5)
{
    FUN_0c0cff28(a4, a5);
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c0e34a8(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 2) {
        if (t0 != 3) {
            return t0;
        }
        return FUN_0c0e3440(a4);
    }
    return FUN_0c0e343a();
}

int FUN_0c0f02aa(int a4)
{
    if ((*(short *)(((a4 + 0x428) + 0x4))) != -1) {
        *(unsigned short *)(((a4 + 0x428) + 0x4)) = ((*(short *)(((a4 + 0x428) + 0x4))) - 1);
    }
    return ((((*(short *)(((a4 + 0x428) + 0x4))) == 0)) ? 1 : 0);
}

int FUN_0c0fa94c(void)
{
    register int t4;

    (((struct o0_uchar *)0xC472AD4)->v) = ((((struct o0_int *)0xC28E6DC)->v));
    (((struct o1_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E0);
    (((struct o2_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E4);
    (((struct o3_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E8);
    t4 = (((struct o1C_int *)0xC28E6DC)->v);
    (((struct o7_uchar *)0xC472AD4)->v) = t4;
    return t4;
}

int FUN_0c0fb8b0(int a4)
{
    syCfgSetSoundMode((((a4 == 0)) ? 1 : 0));
    return FUN_0c05b122(a4);
}

int FUN_0c101d38(int a4)
{
    return ((((*(int *)((0xC5426C4 + ((((a4 << 2) + a4) << 2) << 1)))) == 1)) ? 1 : 0);
}

int FUN_0c115278(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x30);
}

int FUN_0c1152e4(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x31);
}

int FUN_0c115322(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x3F);
}

int FUN_0c1154f4(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x36);
}

int FUN_0c1153a2(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x34);
}

int FUN_0c1155b6(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x38);
}

int FUN_0c137f74(int a4, int a5, int a6)
{
    return (FUN_0c187798(a4, a5, a6));
}

int FUN_0c1675dc(int a4, int a5, int a6)
{
    return (FUN_0c187798(a4, a5, a6));
}

int FUN_0c16b9d2(int a4, int a5, int a6, float f4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c16b5a6(a4);
        }
        return FUN_0c16b38e(a4, f4);
    }
    return FUN_0c16b01e(a4, a5, a6);
}

int FUN_0c016252(int a4)
{
    register int t0;

    t0 = *(int *)0xC304BA0;
    (((struct o4B_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x4B))) & 0xC);
    t0 = *(int *)0xC304BA0;
    (((struct o4B_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x4B))) | a4);
    return 0x4B;
}

int FUN_0c01760a(void)
{
    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) != 0) {
        return FUN_0c017e68(0xC304D24, 0xC304DA4);
    }
    return 0x4C;
}

int FUN_0c017622(void)
{
    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) != 0) {
        return FUN_0c017e58(0xC304D24, 0xC304DA4);
    }
    return 0x4C;
}

int FUN_0c01fd34(void)
{
    register int t2;

    t2 = ((int (*)(void))((*(int *)((((*(signed char *)0xC309858) << 2) + 0xC20E520)))))();
    return (*(signed char *)0xC309862);
}

int FUN_0c0206be(void)
{
    (((struct o0_uchar *)0xC309858)->v) = 0x7;
    (((struct o1_uchar *)0xC3054C5)->v) = 0x0;
    (((struct o0_uchar *)0xC3054C5)->v) = 0x0;
    (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFF9;
    return 0xC3054C6;
}

int FUN_0c020e94(int a4, int a5, int a6, int a7)
{
    register int t1;

    *(unsigned char *)0xC309858 = ((*(signed char *)0xC309858) + 0x1);
    t1 = FUN_0c01fce0(0xC309858, a5, a6, a7);
    *(unsigned short *)0xC3052C8 = 0x12C;
    return t1;
}

int FUN_0c02d4c4(void)
{
    FUN_0c177100(0xC4FDCB4, 0x40);
    FUN_0c177380(0x1);
    return FUN_0c1773a0(0x1);
}

int FUN_0c036c38(void)
{
    FUN_0c036b28(0x16);
    FUN_0c036b28(0x17);
    FUN_0c036b28(0x18);
    FUN_0c036b28(0x19);
    return FUN_0c036b28(0x1A);
}

int FUN_0c0392bc(int a4)
{
    return FUN_0c187b48((((*(signed char *)((a4 + 0x1))) << 2) + 0xC3BD880), 0x0, 0x4);
}

int FUN_0c03980c(int a4, float f4, float f5)
{
    if (!(f5 > f4)) {
        if (((((struct o4_float *)(a4))->v)) > 1.0f) {
            return 0xFFFFFFFF;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c03c340(int a4)
{
    return (buRewriteExecFile(a4, 0xC1B71F8, 0xC3CC420, 0x5, 0x1));
}

int FUN_0c03d432(int a4)
{
    return (buLoadFileEx(a4, 0xC1B71F8, 0xC3CC420, 0x5, 0x1));
}

int FUN_0c040728(void)
{
    (((struct o0_uchar *)0xC5421F9)->v) = ((*(signed char *)0xC5421F9) + 0x1);
    (((struct o1_uchar *)0xC5421F9)->v) = 0x0;
    FUN_0c0403bc();
    FUN_0c0404f0();
    return FUN_0c04055c();
}

int FUN_0c042fe0(void)
{
    int t1;

    if (((*(signed char *)0xC5421F8) == 1) && (t1 = *(signed char *)0xC5421F9, t1 == 3)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c042ff8(void)
{
    int t1;

    if (((*(signed char *)0xC5421F8) == 1) && (t1 = *(signed char *)0xC5421F9, t1 == 4)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c043064(void)
{
    int t1;

    if (((*(signed char *)0xC5421F8) == 1) && (t1 = *(signed char *)0xC5421F9, t1 == 6)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c042eee(void)
{
    FUN_0c059bd6(0x2);
    FUN_0c05f690(0x0, (*(int *)0xC40DC50));
    return game_reset_objects();
}


int FUN_0c059c62(int a4, int a5)
{
    int stk[1];

    *(unsigned int *)(((int)stk + 0)) = a4;
    return (FUN_0c05a560(0x1, a5, ((int)stk + 0), 0x1));
}

int FUN_0c05b0be(int a4, int a5)
{
    return (FUN_0c05b018(0xC46DFEC, a4, a5, 0x7F, 0x0));
}

int FUN_0c05f2e2(int a4, int a5)
{
    (((struct o0_uchar *)0xC541F41)->v) = a4;
    (((struct o1_uchar *)0xC541F41)->v) = a5;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o4_uchar *)0xC541F41)->v) = 0x0;
    return 0x0;
}

int FUN_0c060a84(int a4)
{
    (((struct o168_float *)(a4))->v) = (*(float *)0xC060B08);
    (((struct o404_uint *)(a4))->v) = 0x0;
    (((struct o133_uchar *)(a4))->v) = 0x0;
    (((struct o135_uchar *)(a4))->v) = 0x0;
    return 0x135;
}

int FUN_0c073eb8(int a4, int a5, int a6)
{
    (((struct o418_uint *)(((a5 * 0x3938) + 0xC532498)))->v) = a6;
    return FUN_0c07434c(((a5 * 0x3938) + 0xC532498), 0x1);
}

int FUN_0c0a0dea(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3728));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c0a0cfc(a4);
        }
        return FUN_0c0a0d68(a4, a5, a6, a7);
    }
    return FUN_0c0a0cfc(a4);
}

int FUN_0c0bdfd0(int a4)
{
    register int t1;

    t1 = (((struct o3824_short *)(a4))->v);
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = t1;
    return t1;
}

int FUN_0c0be39c(void)
{
    register int t1;

    t1 = *(signed char *)0xC54222D;
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = t1;
    return t1;
}

void FUN_0c0d06cc(void)
{
    register int t0;

    t0 = 0xC472A68;
    for (;;) {
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x2);
        if ((unsigned int)t0 >= (unsigned int)0xC472A7C) {
            break;
        }
    }
    *(unsigned int *)0xC472A7C = 0x0;
}

int FUN_0c0f584a(void)
{
    return FUN_0c0f5836(0xA);
}

int FUN_0c0f5f42(void)
{
    return FUN_0c0f5f2e(0xA);
}

int FUN_0c0f620e(void)
{
    return FUN_0c0f61fa(0xA);
}

void FUN_0c0fc69e(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC472ADC;
    t1 = 0xC28E960;
    for (;;) {
        t2 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        *(unsigned char *)((t0 + 0x0)) = t2;
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)0xC472AE3) {
            break;
        }
    }
}

int FUN_0c0fc90c(int a4)
{
    register int t0;
    register int t1;

    if ((int)a4 > 0) {
        t0 = 0x0;
        for (;;) {
            t1 = t0;
            t0 = (t0 + 0x1);
            *(unsigned char *)((0xC472AE4 + t1)) = t1;
            if ((int)t0 >= (int)a4) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c015906(void)
{
    register int t3;

    t3 = 0xFFFFFFFF;
    if ((int)(*(signed char *)0xC30985A) >= (int)0x2) {
    } else {
        t3 = (*(signed char *)0xC30A402);
    }
    return t3;
}


int FUN_0c02bad0(void)
{
    (((struct o0_uchar *)0xC30EF14)->v) = 0x0;
    (((struct o1_uchar *)0xC30EF14)->v) = 0x0;
    (((struct o2_uchar *)0xC30EF14)->v) = 0x0;
    (((struct o3_uchar *)0xC30EF14)->v) = 0x0;
    return FUN_0c01e9e4();
}

int FUN_0c02d046(int a4)
{
    FUN_0c0fb6a6();
    FUN_0c02cdcc(a4);
    FUN_0c02cd20(a4);
    return FUN_0c02cf88();
}

int FUN_0c02d4dc(void)
{
    FUN_0c177140();
    FUN_0c177380(0x1);
    return FUN_0c1773a0(0x1);
}

int FUN_0c02f4ac(void)
{
    return (*(signed char *)(((((0x1 - (*(signed char *)0xC3BB3DC)) * 0xF7C) + 0xC4B10CC) + 0xB)));
}

int FUN_0c0303fc(int a4)
{
    (((struct o7C_uint *)(a4))->v) = 0x1;
    *(unsigned char *)(((a4 + 0x1) + 0x3)) = 0x0;
    *(unsigned char *)(((a4 + 0x1) + 0x2)) = 0x0;
    *(unsigned char *)(((a4 + 0x1) + 0x1)) = 0x0;
    *(unsigned char *)(((a4 + 0x1) + 0x0)) = 0x0;
    return 0x0;
}

int FUN_0c0365f0(int a4)
{
    int stk[2];
    register int t0;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = t0;
    FUN_0c036024(t0);
    return FUN_0c036518((*(int *)(((int)stk + 4))), 0x1);
}

int FUN_0c03796e(int a4, int a5)
{
    *(float *)((a4 + 0x0)) = ((((struct o18_float *)((*(int *)0xC3BD860)))->v));
    *(float *)((a5 + 0x0)) = ((((struct o1C_float *)((*(int *)0xC3BD860)))->v));
    return 0x0;
}

int FUN_0c04537c(void)
{
    (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    return 0x0;
}

int FUN_0c045a22(void)
{
    (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    return 0x0;
}

int FUN_0c05a02e(int a4)
{
    return FUN_0c05ab7e(0x5, ((a4 * 0x3938) + 0xC5324C0));
}

int FUN_0c05abfe(int a4)
{
    return (unsigned char)(*(signed char *)((((*(int *)((0xC257644 + ((*(int *)0xC46E198) << 2)))) + ((a4 << 2) << 1)) + 0x4)));
}

int FUN_0c05b10c(int a4)
{
    return FUN_0c180a6c((a4 & 0x7), 0x1200A0, 0x0);
}

int FUN_0c060bc2(void)
{
    register int t2;
    register int t1;

    t2 = (*(int *)0xC532434);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = 0x375E;
        *(unsigned char *)((t2 + t1)) = 0x0;
        t2 = (*(int *)((t2 + 0xC)));
    }
    return t1;
}

int FUN_0c0702ae(int a4)
{
    register int t0;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c0dbe00(a4);
    }
    return (short)(t0 - 1);
}

int FUN_0c07ebd0(int a4)
{
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07ebe6(int a4)
{
    if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x100) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c091bba(int a4)
{
    FUN_0c037bf6(a4);
    return FUN_0c038362(((((struct o3770_int *)(a4))->v)));
}

int FUN_0c0a34c4(int a4)
{
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    return FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x2);
}

int FUN_0c0b1bae(int a4)
{
    FUN_0c037bf6(a4);
    return FUN_0c038362(((((struct o3770_int *)(a4))->v)));
}

int FUN_0c0bdedc(void)
{
    *(unsigned char *)(((0xC471AEC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x1;
    return 0x1;
}

int FUN_0c0bdf2e(void)
{
    *(unsigned char *)(((0xC471AED + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x1;
    return 0x1;
}

int FUN_0c0bdf44(void)
{
    *(unsigned char *)(((0xC471AED + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x0;
    return 0x0;
}

int FUN_0c0bdf98(int a4)
{
    *(unsigned short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE)) = (*(signed char *)((a4 + 0x371A)));
    return 0xC471AEE;
}

int FUN_0c0be3b4(void)
{
    *(unsigned short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE)) = (*(short *)0xC542230);
    return 0xC471AEE;
}

int FUN_0c0be438(void)
{
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x0;
    return 0x0;
}

int FUN_0c0d558c(int a4)
{
    (((struct o132_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0xFFFFFF0F;
    return 0x12C;
}

int FUN_0c0e1080(int a4)
{
    (((struct o132_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0xFFFFFF0F;
    return 0x12C;
}

int FUN_0c0e1314(int a4)
{
    register int t1;
    register int t2;

    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
    t1 = (((struct oD0_int *)(a4))->v);
    t2 = *(short *)((t1 + 0x6));
    *(unsigned short *)((t1 + 0x6)) = (t2 & 0xFDFF);
    return (t2 & 0xFDFF);
}

int FUN_0c0fb66a(void)
{
    if ((*(signed char *)0xC472AD8) != (*(signed char *)0xC5429CC)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c10ebc4(int a4)
{
    FUN_0c05b048();
    return FUN_0c10db28(a4);
}

int FUN_0c134274(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x3715))) == 32) {
        return (*(signed char *)((t0 + 0x373E)));
    }
    return 0x0;
}

int FUN_0c16f87a(int a4, int a5)
{
    register int t0;

    t0 = 0xFFFFFFFF;
    if ((signed char)a4 == (signed char)a5) {
        t0 = 0xFFFF7F00;
    }
    return FUN_0c17a550(t0);
}

int FUN_0c172434(int a4, int a5)
{
    register int t0;

    t0 = 0xFFFFFFFF;
    if ((signed char)a4 == (signed char)a5) {
        t0 = 0xFFFF7F00;
    }
    return FUN_0c17a550(t0);
}

void FUN_0c017d7e(int a4, int a5, int a6, int a7)
{
    if ((*(int *)(((*(int *)0xC304BA0) + 0x4))) != 0) {
        thunk_FUN_0c03f346(a4, a5, a6, a7);
    return;
    }
}

int FUN_0c01cd2c(int a4)
{
    if (((unsigned short)(*(short *)0xC5426D8) & a4) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c01cd40(int a4)
{
    if (((unsigned short)(*(short *)0xC5426D4) & a4) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c01f6e4(void)
{
    register int t1;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t1 = *(int *)((((*(signed char *)0xC309859) << 2) + 0xC20E374));
    return ((int (*)(void))(t1))();
}

int FUN_0c021b3e(void)
{
    if ((*(signed char *)0xC3052CA) == 0) {
        return FUN_0c02188c(0x1);
    }
    *(unsigned char *)0xC309858 = 0x0;
    return 0xC3052CA;
}

int FUN_0c02bda8(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t2 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c02c35a(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t2 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c02d104(void)
{
    _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
    return ((int (*)(void))(0xAC02D130))();
}

int FUN_0c02d240(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(FUN_0c17da60))(0x1, 0xC02D446, a6, a7);
    return ((int (*)(int, int))(FUN_0c17da60))(0x0, 0xC02D478);
}

int FUN_0c02d294(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(FUN_0c17da60))(0x1, 0x0, a6, a7);
    return ((int (*)(int, int))(FUN_0c17da60))(0x0, 0x0);
}

void FUN_0c03859e(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + a4);
    *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a4 + 0x4))) + a4);
    *(unsigned int *)((a4 + 0x8)) = ((*(int *)((a4 + 0x8))) + a4);
}

int FUN_0c038944(int a4, int a5)
{
    (((struct o38CC_uint *)(a4))->v) = (*(int *)((a5 + 0x4)));
    (((struct o38D0_uint *)(a4))->v) = 0x0;
    (((struct o38D4_uint *)(a4))->v) = (*(int *)((a5 + 0x8)));
    return 0x38D4;
}

void FUN_0c03c4ca(void)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0xC83BBD4;
    t2 = 0xC3CA788;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC83BBD4 + 2432)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
}

void FUN_0c03c742(void)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0xC3CA788;
    t2 = 0xC83BBD4;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC3CA788 + 2432)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
}

int FUN_0c0433f8(void)
{
    if ((*(signed char *)0xC30541F) == 0) {
        return 0x0;
    }
    return (*(int *)0xC542390);
}

int FUN_0c04d6e0(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t2 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c057cb4(void)
{
    (((struct o4_uint *)0xC40FAB0)->v) = 0x0;
    (((struct o0_uint *)0xC40FAB0)->v) = 0x0;
    return FUN_0c187b48(0xC40FAB8, 0x0, 0x4200);
}

int FUN_0c059ce8(int a4)
{
    return FUN_0c05af54((*(int *)(((((a4 << 2) + a4) << 2) + 0xC1C2430))));
}

int FUN_0c05a06c(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    return FUN_0c05aad0(((*(signed char *)(((int)stk + 0))) + 0x80), 0x0, 0x0);
}

int FUN_0c05a4a6(int a4, int a5)
{
    *(float *)(((a4 << 2) + 0xC46E174)) = ((float)a5 / 127.0f);
    return 0xC46E174;
}

int FUN_0c05aad0(int a4, int a5, int a6)
{
    return FUN_0c05aab2();
}

int FUN_0c05b1d4(void)
{
    (((struct o0_float *)0xC46E164)->v) = ((((struct o8_float *)0xC46E164)->v));
    (((struct o4_float *)0xC46E164)->v) = ((((struct oC_float *)0xC46E164)->v));
    return FUN_0c05b15c();
}

int FUN_0c05e478(void)
{
    FUN_0c05e238(0x0);
    FUN_0c05e238(0x1);
    FUN_0c05e238(0x2);
    return FUN_0c05e238(0x3);
}

float FUN_0c064ea0(int a4)
{
    *(volatile signed char *)((a4 + 0x1));
    
    return ((((struct o14_float *)(a4))->v));
}

int FUN_0c07b008(int a4)
{
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o3744_uchar *)(a4))->v) = 0x14;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    return 0x0;
}

int FUN_0c095100(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x3728));
    if ((t0 != 0) && (t0 == 1)) {
        return FUN_0c0950a2(a4, a5, a6, a7);
    }
    return FUN_0c094e26(a4, a5, a6, a7);
}

int FUN_0c09b250(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3715));
    if (t0 != 26) {
        (((struct o38F8_uint *)(a4))->v) = 0x0;
    }
    return t0;
}

int FUN_0c0be424(void)
{
    *(unsigned short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE)) = 0x0;
    return 0xC471AEE;
}

int FUN_0c0c2aa2(int a4, int a5)
{
    register int t0;

    (((struct o423_uchar *)(a4))->v) = a5;
    t0 = *(signed char *)((a4 + 0x423));
    if (t0 != -1) {
        return FUN_0c0d00e4(a4, a5);
    }
    return t0;
}

int FUN_0c0d60a8(int a4)
{
    return ((((unsigned char)(*(signed char *)(((unsigned char)(*(signed char *)((a4 + 0xC286EC8))) + 0xC472A80))) == 0)) ? 1 : 0);
}

int FUN_0c0ede50(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    t2 = t0;
    if (t0 == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t2 = 0x16;
    }
    return t2;
}

int FUN_0c0f74ac(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t2 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c0f9cb0(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t2 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c1213c4(int a4)
{
    (((struct o0_uchar *)0xC4759E4)->v) = 0x1;
    (((struct o1_uchar *)0xC4759E4)->v) = 0x0;
    (((struct o2_uchar *)0xC4759E4)->v) = 0x0;
    (((struct o4_uchar *)0xC4759E4)->v) = a4;
    return a4;
}

int FUN_0c121958(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t2 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c143b36(int a4, float f4)
{
    register float u1;

    (((struct o84_float *)(a4))->v) = (((((struct o84_float *)(a4))->v)) + f4);
    u1 = (((struct o84_float *)(a4))->v);
    (((struct o8C_float *)(a4))->v) = u1;
    (((struct o88_float *)(a4))->v) = u1;
    return 0x88;
}

int FUN_0c15360e(int a4)
{
    FUN_0c1535b0(0x0, a4);
    return FUN_0c1535b0(0x1, a4);
}

int FUN_0c169568(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)((((a5 << 2) + (0xC4 + a4)) + 0x0));
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + a6);
    return 0x80;
}

int FUN_0c17106e(void)
{
    if ((unsigned char)(*(signed char *)0xC541F44) == 0) {
        FUN_0c170d30();
    }
    return FUN_0c170f22();
}

int FUN_0c02aad2(void)
{
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    return FUN_0c0573cc(0xFF000000, 0x0, 0x1);
}

int FUN_0c03062a(int a4)
{
    (((struct o44_ushort *)(a4))->v) = 0x0;
    (((struct o4A_uchar *)(a4))->v) = 0x0;
    (((struct o4B_uchar *)(a4))->v) = 0x0;
    return 0x4B;
}

void FUN_0c0385b2(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (((*(int *)((a4 + 0x0))) + a4) + 0x8);
    *(unsigned int *)((a4 + 0x4)) = (((*(int *)((a4 + 0x4))) + a4) + 0x8);
}

int FUN_0c038958(int a4, int a5)
{
    return FUN_0c038944(a4, ((((a5 << 1) + a5) << 2) + 0xC1ABF7C));
}

int FUN_0c0397a8(int a4, float f4, float f5)
{
    if (f5 > ((((struct o4_float *)(a4))->v))) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0397ba(int a4, float f4, float f5)
{
    if (((((struct o4_float *)(a4))->v)) > f5) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0397fa(int a4, float f4, float f5)
{
    if (f5 > ((((struct o8_float *)(a4))->v))) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0397e8(int a4, float f4, float f5)
{
    if (((((struct o8_float *)(a4))->v)) > f5) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c042fce(void)
{
    (((struct o0_uchar *)0xC541F41)->v) = 0x6;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    (((struct o0_uchar *)0xC5421F8)->v) = 0x0;
    (((struct o1_uchar *)0xC5421F8)->v) = 0x0;
    return 0x0;
}

int FUN_0c044022(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return t0;
}

void FUN_0c054e7e(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c054a6c(a4, a5, a6);
    return;
    }
}

int FUN_0c059ca0(int a4)
{
    return (*(int *)((0xC1C243C + (((a4 << 2) + a4) << 2))));
}

int FUN_0c059cb2(int a4)
{
    return (*(int *)((0xC1C2430 + (((a4 << 2) + a4) << 2))));
}

int FUN_0c05aa9c(int a4)
{
    return (*(int *)((0xC257758 + (((a4 << 1) + a4) << 2))));
}

int FUN_0c05aae4(int a4, int a5)
{
    return FUN_0c05aab2();
}

int FUN_0c05ab12(int a4, int a5)
{
    return FUN_0c05aab2();
}

int FUN_0c064116(void)
{
    FUN_0c181c20((*(float *)0xC0642C4));
    return FUN_0c181c30(1.0f);
}

int FUN_0c064f02(int a4)
{
    if (((((struct o404_int *)(a4))->v)) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0cb776(int a4)
{
    (((struct o48_float *)(a4))->v) = 1.5f;
    (((struct o44_float *)(a4))->v) = 1.5f;
    (((struct o40_float *)(a4))->v) = 1.5f;
    return 0x40;
}

int FUN_0c0d55a2(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0e1096(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c10b70e(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x3;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
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

int FUN_0c016278(void)
{
    register int t0;

    t0 = *(int *)0xC304BA0;
    (((struct o4B_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x4B))) ^ 0x4);
    return 0x4B;
}

int FUN_0c016296(void)
{
    register int t0;

    t0 = *(int *)0xC304BA0;
    (((struct o4B_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x4B))) ^ 0x8);
    return 0x4B;
}

int FUN_0c0162b6(void)
{
    register int t0;

    t0 = *(int *)0xC304BA0;
    (((struct o4B_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x4B))) & 0xF7);
    return 0x4B;
}

int FUN_0c0162a6(void)
{
    register int t0;

    t0 = *(int *)0xC304BA0;
    (((struct o4B_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x4B))) | 0x8);
    return 0x4B;
}

int FUN_0c017e38(void)
{
    register int t0;

    t0 = *(int *)0xCA00000;
    return ((int (*)(void))(t0))();
}

int FUN_0c017e48(void)
{
    register int t0;

    t0 = *(int *)0xCA00018;
    return ((int (*)(void))(t0))();
}

int FUN_0c017e78(void)
{
    register int t0;

    t0 = *(int *)0xCA0002C;
    return ((int (*)(void))(t0))();
}

int FUN_0c017eb8(void)
{
    register int t0;

    t0 = *(int *)0xCA00048;
    return ((int (*)(void))(t0))();
}

int FUN_0c017ee8(void)
{
    register int t0;

    t0 = *(int *)0xCA0005C;
    return ((int (*)(void))(t0))();
}

int FUN_0c017ed8(void)
{
    register int t0;

    t0 = *(int *)0xCA00058;
    return ((int (*)(void))(t0))();
}

int FUN_0c017ec8(void)
{
    register int t0;

    t0 = *(int *)0xCA0004C;
    return ((int (*)(void))(t0))();
}

int FUN_0c021eb4(void)
{
    return (short)(FUN_0c01cd2c(0x101));
}

int FUN_0c021ed2(void)
{
    return (short)(FUN_0c01cd2c(0x101));
}

int FUN_0c02b50c(float f4)
{
    (((struct o101C_float *)((*(int *)0xC30B70C)))->v) = f4;
    (((struct o1020_float *)((*(int *)0xC30B70C)))->v) = f4;
    return 0x1020;
}

int FUN_0c02b51c(float f4, float f5)
{
    (((struct o101C_float *)((*(int *)0xC30B70C)))->v) = f4;
    (((struct o1020_float *)((*(int *)0xC30B70C)))->v) = f5;
    return 0x1020;
}

int FUN_0c02b7da(void)
{
    return FUN_0c187b48(((*(int *)0xC30B70C) + 0x102C), 0x0, 0xCF0);
}

int FUN_0c02bae6(void)
{
    register int t1;

    t1 = *(int *)((((unsigned char)(*(signed char *)0xC30EF14) << 2) + 0xC20E9F0));
    return ((int (*)(void))(t1))();
}

int FUN_0c029f60(void)
{
    if ((*(signed char *)0xC30985A) == 0) {
        return FUN_0c0298c8();
    }
    return FUN_0c029f52();
}

int FUN_0c02dc0c(void)
{
    *(unsigned int *)0xC542458 = (*(int *)(((*(int *)((((*(int *)0xC4B40CC) + 0x10) + 0x1C))) + 0x0)));
    return 0xC542458;
}

int FUN_0c02f7ec(void)
{
    *(unsigned char *)0xC4B10D5 = 0x1;
    *(unsigned char *)0xC4B2051 = 0x1;
    return 0x1;
}

int FUN_0c02f7fc(void)
{
    *(unsigned char *)0xC4B10D5 = 0x0;
    *(unsigned char *)0xC4B2051 = 0x0;
    return 0x0;
}

int FUN_0c02f80c(void)
{
    *(unsigned char *)0xC4B10D6 = 0x1;
    *(unsigned char *)0xC4B2052 = 0x1;
    return 0x1;
}

int FUN_0c02f81c(void)
{
    *(unsigned char *)0xC4B10D6 = 0x0;
    *(unsigned char *)0xC4B2052 = 0x0;
    return 0x0;
}

int FUN_0c02f82c(void)
{
    *(unsigned char *)0xC4B10D4 = 0x1;
    *(unsigned char *)0xC4B2050 = 0x1;
    return 0x1;
}

int FUN_0c02f83c(void)
{
    *(unsigned char *)0xC4B10D4 = 0x0;
    *(unsigned char *)0xC4B2050 = 0x0;
    return 0x0;
}

int FUN_0c03e08c(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a5 + 0x0))) == 0) {
        return a4;
    }
    return ((int (*)(int, int, int, int))(0xC03E086))(a4, a5, a6, a7);
}

int FUN_0c042f06(void)
{
    (((struct o0_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FA) + 0x1);
    (((struct o1_uchar *)0xC5421FA)->v) = 0x0;
    *(unsigned int *)0xC54220C = 0x0;
    return 0x0;
}

int FUN_0c059e0e(int a4, int a5, int a6)
{
    return FUN_0c05aad0(a5, a4, a6);
}

int FUN_0c05adb4(int a4)
{
    return FUN_0c2b49a6((*(int *)(((a4 << 2) + 0xC46DE80))));
}

int FUN_0c05ad94(int a4)
{
    return FUN_0c2b4a2e((*(int *)(((a4 << 2) + 0xC46DE80))));
}

int FUN_0c05add4(int a4)
{
    return FUN_0c2b4a4a((*(int *)(((a4 << 2) + 0xC46DE80))), 0x0);
}

int FUN_0c05adc4(int a4)
{
    return FUN_0c2b4a4a((*(int *)(((a4 << 2) + 0xC46DE80))), 0x1);
}

int FUN_0c05ada4(int a4)
{
    return FUN_0c2b4824((*(int *)(((a4 << 2) + 0xC46DE80))));
}

int FUN_0c05edf0(void)
{
    (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
    (((struct o1_uchar *)0xC541F40)->v) = 0x0;
    return FUN_0c05b1d4();
}

int FUN_0c05f7fa(void)
{
    register int t0;

    t0 = FUN_0c05f7a0();
    *(unsigned int *)0xC46E1E0 = 0x1;
    return t0;
}

int FUN_0c06dadc(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC25918C + ((*(signed char *)((a4 + 0x2))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c06daec(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC2591CC + ((*(signed char *)((a4 + 0x2))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c07a9e2(int a4, int a5, int a6, int a7)
{
    return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))), a7);
}

int FUN_0c07ac90(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC259344 + ((*(signed char *)((a4 + 0x2))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int FUN_0c081ec2(int a4)
{
    return FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x51);
}

int FUN_0c0a34b4(int a4)
{
    return FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x0);
}

int FUN_0c0a34a4(int a4)
{
    return FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x1);
}

int FUN_0c0a34da(int a4)
{
    return FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x3);
}

int FUN_0c0a68a2(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x17))) != 0) {
        return ((int (*)(int, int, int, int))(0xC0A6604))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A667C))(a4, a5, a6, a7);
}

int FUN_0c0aeb60(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        return FUN_0c0ae9b2(a4, a5, a6, a7);
    }
    return FUN_0c0aeb00(a4);
}

int FUN_0c0bb67c(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        return FUN_0c0bb5a6(0x8);
    }
    return 0x3720;
}

int FUN_0c0bb69c(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        return FUN_0c0bb5a6(0x1);
    }
    return 0x3720;
}

int FUN_0c0bb68c(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        return FUN_0c0bb5a6(0x2);
    }
    return 0x3720;
}

int FUN_0c0bb6ac(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        return FUN_0c0bb5a6(0x1);
    }
    return 0x3720;
}

int FUN_0c0bb6bc(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        return FUN_0c0bb5a6(0x1);
    }
    return 0x3720;
}

int FUN_0c0bb6cc(int a4)
{
    if ((*(signed char *)((a4 + 0x3720))) == 0) {
        return FUN_0c0bb5a6(0xFFFFFFF8);
    }
    return 0x3720;
}

void FUN_0c0d04b4(int a4)
{
    (((struct o0_uint *)0xC542440)->v) = (*(int *)((a4 + 0x0)));
    (((struct o4_uint *)0xC542440)->v) = (*(int *)((a4 + 0x4)));
    (((struct o8_uint *)0xC542440)->v) = (*(int *)((a4 + 0x8)));
}
