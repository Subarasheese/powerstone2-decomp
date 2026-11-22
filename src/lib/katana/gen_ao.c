/* Straight-line functions with calls and guards (batch gen_ao): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_short { char p[0x10]; short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10E_ushort { char p[0x10E]; unsigned short v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o118_ushort { char p[0x118]; unsigned short v; };
struct o11A_ushort { char p[0x11A]; unsigned short v; };
struct o120_short { char p[0x120]; short v; };
struct o120_ushort { char p[0x120]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o130_uint { char p[0x130]; unsigned int v; };
struct o138_ushort { char p[0x138]; unsigned short v; };
struct o13A_ushort { char p[0x13A]; unsigned short v; };
struct o13C_ushort { char p[0x13C]; unsigned short v; };
struct o13E_uchar { char p[0x13E]; unsigned char v; };
struct o13F_uchar { char p[0x13F]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15C_ushort { char p[0x15C]; unsigned short v; };
struct o160_uint { char p[0x160]; unsigned int v; };
struct o168_uint { char p[0x168]; unsigned int v; };
struct o16E_uchar { char p[0x16E]; unsigned char v; };
struct o16F_uchar { char p[0x16F]; unsigned char v; };
struct o170_uchar { char p[0x170]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2A_uchar { char p[0x2A]; unsigned char v; };
struct o2B_uchar { char p[0x2B]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o36_uchar { char p[0x36]; unsigned char v; };
struct o38_uchar { char p[0x38]; unsigned char v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o41_uchar { char p[0x41]; unsigned char v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_short { char p[0x50]; short v; };
struct o58_short { char p[0x58]; short v; };
struct o58_uchar { char p[0x58]; unsigned char v; };
struct o59_uchar { char p[0x59]; unsigned char v; };
struct o610_uint { char p[0x610]; unsigned int v; };
struct o614_uint { char p[0x614]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o78_uchar { char p[0x78]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_short { char p[0x84]; short v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o90_short { char p[0x90]; short v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
int ADXB_Destroy(int);
int ADXPD_Create(void);
int FUN_0c10121c(int, int, int);
int FUN_0c180d72(int);
extern int FUN_0c183708();
int FUN_0c184000(int, int, int);
int FUN_0c185560(int);
int FUN_0c1855b4(int);
int FUN_0c187a88(int, int, int);
int FUN_0c18dae8(int, int, int);
int FUN_0c18dcfa(int, int);
int FUN_0c18dd06(int, int);
int FUN_0c190c4e(int);
int FUN_0c19114c(int);
int FUN_0c193da4(void);
int FUN_0c193dae(void);
int FUN_0c193fc0(int, int, int, int);
int FUN_0c1947b8(int);
int FUN_0c194962(int);
int FUN_0c19a91c(int);
int FUN_0c19af74(int);
int FUN_0c19c1c8(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c19c9fc(int);
int FUN_0c19ca1a(int, int);
int FUN_0c19ca94(int, int, int);
int FUN_0c19ccc0(int, int, int);
int FUN_0c19d0ba(int);
int FUN_0c19d0da(int);
int FUN_0c19d1ae(int);
int FUN_0c19d208(int, int);
int FUN_0c19d41e(int, int, int, int);
int FUN_0c19d9ac(int);
int FUN_0c19db04(int, int);
int FUN_0c19db2c(int, int);
int FUN_0c19db48(int, int);
int FUN_0c19dbaa(int, int);
int FUN_0c19dbc2(int, int);
int FUN_0c19dbe4(int, int);
int FUN_0c19e4b6(int);
int FUN_0c19e64a(int);
int FUN_0c19ecba(int);
int FUN_0c19ecd4(int);
int FUN_0c1a02aa(int, int);
int FUN_0c1a2a68(int, int, int);
int FUN_0c1a3150(int, int);
int FUN_0c1a3198(int, int, int);
int FUN_0c2b16a0(int, int);
int FUN_0c2b372a(int);
int FUN_0c2bd998(int);
int FUN_0c2bdfe2(int, int, int);
int FUN_0c2c4eac(int);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d6272(void);
int FUN_0c2d62c8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c2d65ae(int);
int FUN_0c2d6634(void);
int FUN_0c2d663a(int);
int FUN_0c2d7806(int);
int FUN_0c2d8d9e(int);
int FUN_0c2db8f4(int, int, int);
int FUN_0c2db908(int, int, int);
int FUN_0c2dc15c(void);
int FUN_0c2dc160(int);
int FUN_0c2dc178(int);
int FUN_0c2dc1ae(int, ...);
int FUN_0c2e80fa(void);
int FUN_0c2e8122(void);
int FUN_0c2ec29a(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2ec532(int, int);
int FUN_0c2f35ac(void);
int FUN_0c2f37be(void);
int FUN_0c2f6bcc(void);
int FUN_0c2fa4c4(int, int);
int FUN_0c2fa4cc(int, int, int);
int FUN_0c2fa4ec(void);
int FUN_0c2faa70(void);
int FUN_0c2fb3b4(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int fmMngClearBuf(int, int);
int fmMngReadSctAllData(int);
int kdSetHandler(int, int);
int kmtex_GetTextureLevel(int, int);
int kmyCopyToTextureRom(int, int, int, int);
int kmyRegisterBGPlane(int);
int memset(int, int, int);
int mwRnaDestroy(int);
int mwRnaGetPlaySw(int);
int mwRnaSetOutPan(int, int);
int nlLoadTextureMem(int, int, int);
int nl_texture_slot_alloc(void);
int nl_texture_slot_finish(int);
int nlsndG2WriteN(int, int, int);
int thunk_FUN_0c2c067e(int);
int thunk_FUN_0c2c2156(void);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int mwRnaFinish(void);
int FUN_0c2d3b8c(void);
int FUN_0c1a240c(int a4, int a5, int a6);
int FUN_0c18ca00(int a4);
int FUN_0c198bb0(int a4, int a5);
int FUN_0c19cfd8(int a4, int a5);
int FUN_0c19e5b8(int a4, int a5, int a6, int a7);
int FUN_0c2b1962(int a4, int a5);
int FUN_0c2cfda6(void);
int FUN_0c2ee63c(void);
int FUN_0c2f35d6(void);
int FUN_0c2f5990(int a4, int a5);
int FUN_0c1819a4(int a4, int a5, int a6);
int FUN_0c19e4fa(int a4);
int FUN_0c2b87a6(int a4, int a5, int a6, int a7);
int FUN_0c2b905e(int a4, int a5, int a6, int a7);
void FUN_0c2d097e(int a4, int a5, int a6, int a7);
int FUN_0c2d2c54(void);
int FUN_0c2d8cfc(int a4);
int FUN_0c186b20(int a4, int a5);
int copySmallVQToTextureRom(int a4, int a5, int a6, int a7);
int FUN_0c1945a0(int a4, int a5, int a6);
int vmsfs_getvolume(int a4, int a5);
int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8);
int FUN_0c181ade(int a4, int a5, int a6, int a7);
int FUN_0c1857ec(int a4);
int FUN_0c192164(int a4, int a5, int a6, int a7);
int FUN_0c19a3bc(int a4);
int FUN_0c19a9c6(int a4, int a5);
int buInit(int a4, int a5, int a6, int a7);
int fmMngFormat(int a4, int a5, int a6);
int mwRnaSetPlaySw(int a4, int a5, int a6, int a7);
int ADXB_Create(int a4, int a5, int a6, int a7);
void FUN_0c2e6ce6(int a4);
void FUN_0c2f24d6(void);
int FUN_0c2f4194(void);
int FUN_0c2f92c0(int a4);
int FUN_0c2fa308(void);
int FUN_0c18d498(int a4);
int FUN_0c19fa48(int a4, int a5);
int vmsfs_read_disk_image(int a4, int a5);
int FUN_0c2f7baa(int a4, int a5, int a6, int a7);
float math_tan_angle16(int a4);
int nlLocate(int a4, int a5);
int FUN_0c186380(int a4);
int kmLoadTextureRom(int a4, int a5);
int vmsfs_isformat(int a4, int a5, int a6, int a7);
void FUN_0c2d7302(int a4);
int kmytex_FBAllocEntry(void);
int FUN_0c18d7cc(int a4, int a5, int a6);
int FUN_0c2b36a4(int a4, int a5, int a6);
int mwRnaSetNumChan(int a4, int a5, int a6, int a7);
int kmtex_TextureSize_smallVQ(int a4);

int mwRnaFinish(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xC8CD46C;
    t1 = 0xC8CD46C;
    t2 = 0xC8CD46C;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t2 + 0x0))) == 1) {
            t0 = t1;
            FUN_0c2c4eac(t0);
        } else {
            t3 = t0;
        }
        t2 = (t2 + 0x90);
        t0 = t3;
        t1 = (t1 + 0x90);
        if ((unsigned int)t2 >= (unsigned int)0xC8CD8EC) {
            break;
        }
    }
    t0 = 0xC8CD46C;
    t1 = 0xC8CD46C;
    t2 = 0xC8CD46C;
    t3 = 0xC8CD46C;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t3 + 0x0))) == 1) {
            t0 = t2;
            mwRnaDestroy(t0);
        } else {
            t4 = t0;
            t5 = t1;
        }
        t3 = (t3 + 0x90);
        t0 = t4;
        t1 = t5;
        t2 = (t2 + 0x90);
        if ((unsigned int)t3 >= (unsigned int)0xC8CD8EC) {
            break;
        }
    }
    memset(0xC8CD46C, 0x0, 0x480);
    memset(0xC8CD8EC, 0x0, 0x820);
    t0 = 0x0;
    t1 = 0xC8CE10C;
    for (;;) {
        t0 = (t0 + 0x1);
        *(unsigned int *)((t1 + 0x0)) = 0x80808080;
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0x200) {
            break;
        }
    }
    t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC303DA0) + 0x10)))))(t0, 0x80808080, 0x200, t1);
    return FUN_0c2dc15c();
}

int FUN_0c2d3b8c(void)
{
    int stk[3];
    register int t2;
    register int t10;
    register int t11;
    register int t14;
    register int t16;
    register int t17;
    register int t25;
    register int t27;
    register int t28;
    register int t35;
    register int t36;
    register int t6;
    register int t7;
    int t8;
    register int t9;
    register int t37;

    (((struct o36_uchar *)0xC8D25F0)->v) = ((*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x8))) & 0x1);
    t2 = (((struct o0_int *)0xC8D25F0)->v);
    *(unsigned char *)((t2 + 0x8)) = ((*(signed char *)((t2 + 0x8))) & 0xFE);
    if (((unsigned char)(*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x48))) != 0x84) && ((t6 = (((struct o0_int *)0xC8D25F0)->v), t7 = *(signed char *)((t6 + 0x48)), (unsigned char)t7 != 0x82) && (t8 = (((struct o0_int *)0xC8D25F0)->v), t9 = *(signed char *)((0x48 + t8)), (unsigned char)t9 != 82))) {
        if (((unsigned char)t9 & 0xF0) == 0xC0) {
            t10 = FUN_0c2d6272();
            t11 = FUN_0c2d62c8(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            t37 = (unsigned char)t11;
            if ((unsigned char)t10 == (unsigned char)t11) {
                FUN_0c2d487c(0xA0F, 0x10, 0x2);
                FUN_0c2d487c(0xB0F, 0x100, 0x2);
                (((struct o31_uchar *)0xC8D25F0)->v) = 0x4;
                t14 = (((struct o0_int *)0xC8D25F0)->v);
                (((struct o20_uchar *)(t14))->v) = ((*(signed char *)(((t14 + 0x20) + 0x0))) | 0x4);
                t16 = (((struct o0_int *)0xC8D25F0)->v);
                t17 = *(signed char *)((t16 + 0x8));
                *(unsigned char *)((t16 + 0x8)) = (t17 | 0x2);
                t37 = (t17 | 0x2);
            }
        } else {
            FUN_0c2d487c(0xA0F, 0x10, 0x2);
            FUN_0c2d487c(0xB0F, 0x100, 0x2);
            (((struct o31_uchar *)0xC8D25F0)->v) = 0x4;
            t25 = (((struct o0_int *)0xC8D25F0)->v);
            (((struct o20_uchar *)(t25))->v) = ((*(signed char *)(((t25 + 0x20) + 0x0))) | 0x4);
            t27 = (((struct o0_int *)0xC8D25F0)->v);
            t28 = *(signed char *)((t27 + 0x8));
            *(unsigned char *)((t27 + 0x8)) = (t28 | 0x2);
            t37 = (t28 | 0x2);
        }
    } else {
        t35 = (((struct o0_int *)0xC8D25F0)->v);
        t36 = *(signed char *)(((t35 + 0x1C) + 0x0));
        (((struct o1C_uchar *)(t35))->v) = (t36 | 0x40);
        t37 = (t36 | 0x40);
    }
    return t37;
}

int FUN_0c1a240c(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t5;
    register int t7;
    register int t8;
    int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = (int)((int)(a6 + 0x1) / (int)0x5);
    FUN_0c187a88((((((int)stk + 0) + 0x4) - ((t0 + 0x1) << 1)) + 0x8), ((a4 - ((t0 + 0x1) << 1)) + 0x8), ((t0 + 0x1) << 1));
    FUN_0c1a3198((((((int)stk + 0) + 0x4) - ((t0 + 0x1) << 1)) + 0x8), ((t0 + 0x1) << 1), 0x2);
    FUN_0c1a2a68(((a4 - ((t0 + 0x1) << 1)) + 0x8), (((((int)stk + 0) + 0x4) - ((t0 + 0x1) << 1)) + 0x8), ((t0 + 0x1) << 1));
    t5 = FUN_0c1a3150(((a4 - ((t0 + 0x1) << 1)) + 0x8), ((t0 + 0x1) << 1));
    if (a5 != 0) {
        t7 = ((*(int *)(((int)stk + 0))) + 0x7);
        t8 = 0x0;
        t9 = 0x7;
        t10 = a5;
        for (;;) {
            t11 = *(signed char *)((t7 + 0x0));
            t8 = (t8 + ((unsigned char)t11 + t10));
            *(unsigned char *)((t7 + 0x0)) = t8;
            t8 = (unsigned short)t8;
            if (((int)t8 >= (int)0x100) && (t9 = (t9 - 1), t12 = ((unsigned char)t11 + t10), t10 = 0x0, t13 = ((int)t8 >= (int)0x100), t8 = 0x1, t7 = (t7 - 1), (int)(unsigned short)t9 >= 0)) continue;
            break;
        }
    }
    return t5;
}

int FUN_0c18ca00(int a4)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t28;
    register int t15;
    register int t16;
    register int t17;
    register int t18;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = (((struct o14_int *)0xC8A6F20)->v);
    t2 = (((struct o0_int *)0xC8A6F20)->v);
    t17 = *(int *)((a4 + 0x0));
    t16 = (((struct oC_int *)0xC8A6F20)->v);
    if ((unsigned int)(t2 - t1) > (unsigned int)(*(int *)((a4 + 0x4)))) {
        t15 = *(int *)((a4 + 0x4));
        (((struct o38_uint *)0xC8A6F20)->v) = t15;
        (((struct o3C_uint *)0xC8A6F20)->v) = ((((((struct o0_int *)0xC8A6F20)->v)) - ((((struct o14_int *)0xC8A6F20)->v))) - t15);
    } else {
        (((struct o38_uint *)0xC8A6F20)->v) = (t2 - t1);
        (((struct o3C_uint *)0xC8A6F20)->v) = 0x0;
        t15 = (t2 - t1);
    }
    (((struct o14_uint *)0xC8A6F20)->v) = (((((struct o14_int *)0xC8A6F20)->v)) + t15);
    t28 = t16;
    if ((int)t15 > 0) {
        for (;;) {
            t18 = *(signed char *)((t16 + 0x0));
            t16 = (t16 + 0x1);
            *(unsigned char *)((t17 + 0x0)) = t18;
            t17 = (t17 + 0x1);
            if (t16 == (((((struct o0_int *)0xC8A6F20)->v)) + ((((struct o8_int *)0xC8A6F20)->v)))) {
                t16 = ((((struct o8_int *)0xC8A6F20)->v));
            }
            t15 = (t15 - 1);
            if ((int)t15 <= 0) {
                break;
            }
        }
        t28 = t16;
    }
    (((struct oC_uint *)0xC8A6F20)->v) = t28;
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
    return 0xC8A6F58;
}

int FUN_0c198bb0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned int *)0xC8B5DA0 = ((((struct o0_int *)0xC8A73D0)->v));
    t0 = a4;
    t1 = a5;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)(unsigned char)(*(signed char *)0xC8A73D8)) {
            break;
        }
        t4 = 0xFFFFFFFF;
        t1 = 0x6;
        t0 = ((((struct o4_int *)0xC8A73D0)->v));
        t0 = (t0 + t3);
        *(unsigned int *)((t0 + 0x0)) = (*(int *)0xC8B5DA0);
        t5 = (*(int *)0xC2AE810);
        t5 = (unsigned short)t5;
        *(unsigned int *)0xC8B5DA0 = ((*(int *)0xC8B5DA0) + t5);
        *(unsigned int *)((t0 + 0x4)) = 0x8;
        t5 = (*(int *)0xC2AE810);
        *(unsigned int *)((t0 + 0x8)) = t5;
        *(unsigned short *)((t0 + 0xC)) = t4;
        t4 = 0x0;
        *(unsigned short *)((t0 + 0xE)) = t4;
        t4 = (*(int *)0xC2AE810);
        *(unsigned short *)((t0 + 0x10)) = t4;
        for (;;) {
            *(unsigned short *)((((t0 + 0xC) + t1) + 0x0)) = 0x0;
            t4 = (*(int *)0xC2AE810);
            *(unsigned short *)((((t0 + 0xC) + t1) + 0x2)) = t4;
            t5 = ((t0 + 0xC) + t1);
            t1 = (t1 + 0x6);
            t4 = 0x0;
            *(unsigned short *)((t5 + 0x4)) = t4;
            if ((unsigned int)t1 >= (unsigned int)0x30) {
                break;
            }
        }
        t3 = (t3 + 0x3C);
        t2 = (t2 + 0x1);
    }
    return 0x0;
}

int FUN_0c19cfd8(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t24;
    register int t4;
    register int t14;

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c19d208(((int)stk + 0), (((int)stk + 0) + 0x4));
    t24 = (short)t0;
    if ((short)t0 != -1) {
        *(unsigned short *)(((int)stk + 2)) = ((*(short *)(((int)stk + 2))) - 4);
        FUN_0c1a02aa((((int)stk + 0) + 0x4), (*(short *)(((int)stk + 2))));
        t4 = *(signed char *)(((int)stk + 0));
        if ((unsigned char)t4 != 1) {
            if ((unsigned char)t4 != 2) {
                if ((unsigned char)t4 != 3) {
                    t24 = (unsigned char)t4;
                    if ((unsigned char)t4 != 4) {
                    } else {
                        FUN_0c19114c((a4 + 0x10));
                        FUN_0c19c9fc(a4);
                        *(unsigned short *)((a4 + 0x8)) = 0x1;
                        t24 = 0x1;
                    }
                } else {
                    FUN_0c19114c((a4 + 0x10));
                    t24 = (FUN_0c19ca1a(a4, 0x10));
                }
            } else {
                t14 = FUN_0c19ccc0(a4, ((int)stk + 0), (*(int *)(((int)stk + 4))));
                t24 = (short)t14;
                if ((short)t14 == 0) {
                    t24 = (FUN_0c19ca1a(a4, 0x20));
                }
            }
        } else {
            t24 = (FUN_0c19ca94(a4, ((int)stk + 0), (*(int *)(((int)stk + 4)))));
        }
    }
    return t24;
}

int FUN_0c19e5b8(int a4, int a5, int a6, int a7)
{
    register int t6;
    register int t10;

    FUN_0c19d41e(a4, a5, a6, a7);
    FUN_0c19d1ae(a4);
    FUN_0c19e4b6(a4);
    if ((int)(unsigned char)(*(signed char *)(((*(int *)((a4 + 0xC))) + 0x0))) >= (int)0x1) {
        t6 = *(int *)((a4 + 0x30));
        FUN_0c19dbc2(t6, (*(short *)((a5 + 0xC))));
        FUN_0c19db04(t6, (*(int *)((a5 + 0x0))));
        t10 = *(short *)((a5 + 0x6));
        if (((0x80 & (unsigned short)t10) == 0) && ((unsigned short)t10 != 4)) {
            FUN_0c19db48((t6 + 0x34), (*(short *)((a5 + 0x6))));
            FUN_0c19db48(t6, (*(short *)((a5 + 0x6))));
        } else {
            FUN_0c19db48((t6 + 0x34), ((*(short *)((a5 + 0x6))) & 0x7F));
        }
        FUN_0c19dbaa(t6, (*(int *)((a5 + 0x8))));
        FUN_0c19dbe4(t6, (*(short *)((a5 + 0xE))));
        FUN_0c19db2c(t6, (*(short *)((a5 + 0x4))));
        FUN_0c19d9ac(a4);
    }
    return 0x0;
}

int FUN_0c2b1962(int a4, int a5)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t6;
    register int t3;
    register int t4;
    register int t7;
    register int t8;
    register int t11;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 0));
    t2 = FUN_0c2b16a0((a5 * a4), a5);
    if (t2 != 0) {
        t6 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)(a5 * a4)) {
            t3 = 0x0;
            for (;;) {
                t4 = (t2 + t3);
                t3 = (t3 + 0x4);
                *(unsigned int *)((t4 + 0x0)) = 0x0;
                if ((unsigned int)t3 >= (unsigned int)(a5 * a4)) {
                    break;
                }
            }
            t6 = t3;
        }
        if ((unsigned int)(t6 - 4) < (unsigned int)((a5 * a4) & 0x3)) {
            t7 = (t6 - 4);
            t8 = (t2 + (t6 - 4));
            for (;;) {
                t7 = (t7 + 0x1);
                *(unsigned char *)((t8 + 0x0)) = 0x0;
                t8 = (t8 + 0x1);
                if ((unsigned int)t7 >= (unsigned int)((a5 * a4) & 0x3)) {
                    break;
                }
            }
        }
        _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
        t11 = t2;
    } else {
        _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
        t11 = 0x0;
    }
    return t11;
}

int FUN_0c2cfda6(void)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o4_uchar *)0xC8D25B8)->v) = 0x0;
    (((struct o3_uchar *)0xC8D25B8)->v) = 0x0;
    (((struct o2_uchar *)0xC8D25B8)->v) = 0x0;
    (((struct o1_uchar *)0xC8D25B8)->v) = 0x0;
    (((struct o0_uchar *)0xC8D25B8)->v) = 0x0;
    (((struct o5_uchar *)0xC8D25B8)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        *(unsigned char *)((((short)((short)(signed char)t0 * (short)0x32) + 0xC8D1DD8) + 0x0)) = 0x2A;
        t1 = 0x0;
        for (;;) {
            t2 = ((signed char)t1 + (((short)((short)(signed char)t0 * (short)0x32) + 0xC8D1DD8) + 0x1));
            t1 = (t1 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = 0x20;
            if ((int)(signed char)t1 >= (int)0x28) {
                break;
            }
        }
        t1 = ((short)(signed char)t0 * (short)0x32);
        t0 = (t0 + 0x1);
        (((struct o29_uchar *)(((short)t1 + 0xC8D1DD8)))->v) = 0x0;
        (((struct o2A_uchar *)(((short)t1 + 0xC8D1DD8)))->v) = 0x0;
        (((struct o2B_uchar *)(((short)t1 + 0xC8D1DD8)))->v) = 0x0;
        (((struct o2C_uchar *)(((short)t1 + 0xC8D1DD8)))->v) = 0x0;
        (((struct o2D_uchar *)(((short)t1 + 0xC8D1DD8)))->v) = 0x0;
        (((struct o2E_uchar *)(((short)t1 + 0xC8D1DD8)))->v) = 0x0;
        (((struct o2F_uchar *)(((short)t1 + 0xC8D1DD8)))->v) = 0x0;
        (((struct o30_uchar *)(((short)t1 + 0xC8D1DD8)))->v) = 0x0;
        (((struct o31_uchar *)(((short)t1 + 0xC8D1DD8)))->v) = 0x0;
        if ((int)(signed char)t0 >= (int)0x28) {
            break;
        }
    }
    return 0x31;
}

int FUN_0c2ee63c(void)
{
    int stk[1];
    register int t0;
    register int t5;
    register int t17;

    t0 = FUN_0c2d6634();
    *(unsigned char *)(((int)stk + 0)) = t0;
    if ((signed char)t0 != 0) {
        FUN_0c2d663a(0x0);
    }
    (((struct o0_uchar *)0xC8D7169)->v) = 0x0;
    (((struct o2_uchar *)0xC8D7169)->v) = 0x0;
    (((struct o0_ushort *)0xC8D83C2)->v) = 0x0;
    (((struct o2_ushort *)0xC8D83C2)->v) = 0x0;
    memset(0xC8D7A9E, 0x0, 0x920);
    t5 = *(signed char *)0xC8D7030;
    if (((unsigned char)t5 != 0) && (((unsigned char)t5 != 1) && ((unsigned char)t5 != 2))) {
        if (((unsigned char)t5 != 8) && ((unsigned char)t5 != 9)) {
            if ((unsigned char)t5 != 12) {
            } else {
                *(unsigned char *)0xC8D7057 = 0x8;
            }
            t17 = (unsigned char)t5;
        } else {
            *(unsigned short *)0xC8D7170 = 0x4;
            t17 = (FUN_0c2fb3b4());
        }
    } else {
        *(unsigned short *)0xC8D7170 = 0x4;
        t17 = (FUN_0c2faa70());
    }
    if ((*(signed char *)(((int)stk + 0))) != 0) {
        return FUN_0c2d663a(0xC2D562A);
    }
    return t17;
}

int FUN_0c2f35d6(void)
{
    int t0;
    register int t1;
    register int t2;

    if (((unsigned char)(*(signed char *)0xC8D67BA) & 2) != 0) {
        *(unsigned short *)0xC8D67B8 = ((*(short *)0xC8D67B8) | 0x1);
    }
    (((struct o2_uchar *)0xC8D6791)->v) = ((*(signed char *)0xC8D6793) & 0x8);
    (((struct o4_uchar *)0xC8D6791)->v) = 0x0;
    (((struct o0_uchar *)0xC8D6791)->v) = 0x7F;
    t1 = *(short *)0xC8D67B8;
    if ((0x11 & (unsigned short)t1) == 0) {
        t2 = FUN_0c2f35ac();
        *(unsigned int *)0xC8D6814 = 0x1;
        return t2;
    }
    if ((((unsigned short)t1 & 0x10) == 0) && (t0 = *(signed char *)0xC8D679A, ((unsigned char)t0 & 64) != 0)) {
        FUN_0c2f37be();
    } else {
        t0 = (unsigned short)t1;
        t1 = 0xC8D67B8;
    }
    return FUN_0c2ec532(t0, t1);
}

int FUN_0c2f5990(int a4, int a5)
{
    int t0;
    register int t1;
    int t2;
    register int t3;

    if ((unsigned char)(*(signed char *)0xC8DFF9D) != 1) {
        (((struct o31_uchar *)0xC8DFF72)->v) = 0x1;
    }
    t3 = *(signed char *)0xC8DFF93;
    if (((unsigned char)t3 != 0) && (t0 = *(signed char *)0xC8DFF92, t0 != 0)) {
        FUN_0c2f6bcc();
        if ((*(signed char *)0xC8DFFA4) == 0) {
            (((struct o1E_uchar *)0xC8DFF72)->v) = 0x2;
            (((struct o1F_uchar *)0xC8DFF72)->v) = 0x1;
        } else {
            (((struct o1E_uchar *)0xC8DFF72)->v) = 0x3;
            (((struct o1F_uchar *)0xC8DFF72)->v) = 0x5;
        }
        (((struct o23_uchar *)0xC8DFF72)->v) = 0x0;
        (((struct o22_uchar *)0xC8DFF72)->v) = 0x1;
    } else {
        if (((unsigned char)t3 == 0) && ((t1 = *(signed char *)0xC8DFF92, t1 != 0) && (t2 = *(signed char *)0xC8DFFA1, t2 != 0))) {
            (((struct o0_uchar *)0xC8DFF72)->v) = (*(signed char *)0xC8DFF70);
            (((struct o2F_uchar *)0xC8DFF72)->v) = 0x0;
        }
    }
    t0 = 0xC8DFFA1;
    if ((*(signed char *)0xC8DFFA1) == 0) {
        (((struct o1A_uchar *)0xC8DFF72)->v) = 0x1;
        *(unsigned int *)0xC8DFF80 = (*(int *)0xC8D67BC);
        t0 = 0xC8DFF80;
    }
    return t0;
}

int FUN_0c1819a4(int a4, int a5, int a6)
{
    int stk[2];
    register int t2;
    register int t4;
    register int t5;

    *(unsigned short *)(((int)stk + 0)) = a5;
    t2 = *(signed char *)(((unsigned char)((((a4 << 1) + a4) << 2) << 1) + 0xC86CC40));
    if (t2 == 1) {
        *(unsigned int *)(((int)stk + 4)) = ((((short)a4 << 8) << 2) << 2);
        FUN_0c180d72(((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x2A2));
        t4 = *(short *)(((int)stk + 0));
        t5 = *(int *)(((int)stk + 4));
        FUN_0c180d72((((t4 << 16) | t5) | 0x3A2));
        if ((*(int *)(((unsigned char)((((a4 << 1) + a4) << 2) << 1) + 0xC86CC48))) != 0) {
            FUN_0c180d72((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x2A2) + 0x800));
            return FUN_0c180d72(((((t4 << 16) | t5) | 0x3A2) + 0x800));
        }
        return 0xC86CC48;
    }
    return t2;
}

int FUN_0c19e4fa(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned char *)(((*(int *)((a4 + 0xC))) + 0x0)) = 0x2;
    t1 = *(int *)((a4 + 0xC));
    *(unsigned char *)((t1 + 0x2)) = ((*(signed char *)((t1 + 0x2))) & 0xCF);
    (((struct oD8_uint *)((*(int *)((a4 + 0xC)))))->v) = 0x0;
    if (((*(short *)((t0 + 0x1C))) & 8) != 0) {
        t1 = (((struct o24_short *)(t0))->v);
        if ((unsigned short)t1 != 0xC023) {
            if ((unsigned short)t1 != 0xC223) {
            } else {
                FUN_0c19d0ba((*(int *)((a4 + 0xC))));
                FUN_0c19d0da((*(int *)((a4 + 0xC))));
            }
        } else {
            FUN_0c19ecba((*(int *)((a4 + 0xC))));
        }
    }
    if ((((((struct o50_short *)(t0))->v)) & 8) != 0) {
        t1 = (((struct o58_short *)(t0))->v);
        if ((unsigned short)t1 != 0xC023) {
            if ((unsigned short)t1 != 0xC223) {
            } else {
                FUN_0c19d0da((*(int *)((a4 + 0xC))));
                FUN_0c19d0ba((*(int *)((a4 + 0xC))));
            }
        } else {
            FUN_0c19ecd4((*(int *)((a4 + 0xC))));
        }
    }
    return FUN_0c19e64a((*(int *)((a4 + 0xC))));
}

int FUN_0c2b87a6(int a4, int a5, int a6, int a7)
{
    int stk[29];
    register int t5;
    register int t6;
    register int t17;
    register int t19;

    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x4);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0xC)));
    t5 = 0x0;
    t6 = (*(int *)(((int)stk + 0)));
    for (;;) {
        *(float *)((((((int)stk + 0) + 0x20) + t5) + 0x0)) = ((((struct o4_float *)((*(int *)((t6 + 0x0)))))->v));
        (((struct o4_float *)(((((int)stk + 0) + 0x20) + t5)))->v) = ((((struct o8_float *)((*(int *)((t6 + 0x0)))))->v));
        (((struct o8_float *)(((((int)stk + 0) + 0x20) + t5)))->v) = ((((struct oC_float *)((*(int *)((t6 + 0x0)))))->v));
        *(unsigned int *)((((((int)stk + 0) + 0x20) + t5) + 0xC)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x10)));
        *(unsigned int *)((((((int)stk + 0) + 0x20) + t5) + 0x14)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x18)));
        t17 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        t19 = ((((int)stk + 0) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t19 + 0x18)) = (*(int *)((t17 + 0x1C)));
        if ((unsigned int)t5 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 0) + 0x10)));
}

int FUN_0c2b905e(int a4, int a5, int a6, int a7)
{
    int stk[29];
    register int t5;
    register int t6;
    register int t17;
    register int t19;

    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x4);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0xC)));
    t5 = 0x0;
    t6 = (*(int *)(((int)stk + 0)));
    for (;;) {
        *(float *)((((((int)stk + 0) + 0x20) + t5) + 0x0)) = ((((struct o4_float *)((*(int *)((t6 + 0x0)))))->v));
        (((struct o4_float *)(((((int)stk + 0) + 0x20) + t5)))->v) = ((((struct o8_float *)((*(int *)((t6 + 0x0)))))->v));
        (((struct o8_float *)(((((int)stk + 0) + 0x20) + t5)))->v) = ((((struct oC_float *)((*(int *)((t6 + 0x0)))))->v));
        *(unsigned int *)((((((int)stk + 0) + 0x20) + t5) + 0xC)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x10)));
        *(unsigned int *)((((((int)stk + 0) + 0x20) + t5) + 0x14)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x18)));
        t17 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        t19 = ((((int)stk + 0) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t19 + 0x18)) = (*(int *)((t17 + 0x1C)));
        if ((unsigned int)t5 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 0) + 0x10)));
}

void FUN_0c2d097e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o4_uchar *)0xC8D25B8)->v) = ((*(signed char *)0xC8D25BC) + 0x1);
    if (((unsigned short)((((struct o90_short *)((*(int *)0xC8D66E8)))->v)) & 16) != 0) {
        (((struct o0_uchar *)0xC8D25B8)->v) = (*(signed char *)0xC8D25A8);
        (((struct o1_uchar *)0xC8D25B8)->v) = (*(signed char *)0xC8D25A9);
        (((struct o2_uchar *)0xC8D25B8)->v) = (*(signed char *)0xC8D25AA);
        (((struct o3_uchar *)0xC8D25B8)->v) = (*(signed char *)0xC8D25AB);
    }
    t2 = (((struct o90_short *)((*(int *)0xC8D66E8)))->v);
    if (((0x3 & (unsigned short)t2) == 2) || (t0 = (int)(((unsigned int)(0xC & (unsigned short)t2)) & 1), t1 = (int)(((unsigned int)((0xC & (unsigned short)t2) >> 1)) & 1), (((0xC & (unsigned short)t2) >> 1) >> 1) == 2)) {
        t0 = *(signed char *)0xC8D25BD;
        (((struct o29_uchar *)(((short)((short)(unsigned char)t0 * (short)0x32) + 0xC8D1DD8)))->v) = ((*(signed char *)((((short)((short)(unsigned char)t0 * (short)0x32) + 0xC8D1DD8) + 0x29))) + 0x1);
        if (((unsigned short)((((struct o90_short *)((*(int *)0xC8D66E8)))->v)) & 32) != 0) {
            t0 = *(signed char *)0xC8D25BD;
            (((struct o2A_uchar *)(((short)((short)(unsigned char)t0 * (short)0x32) + 0xC8D1DD8)))->v) = (*(signed char *)0xC8D25A8);
            *(unsigned char *)(((((short)((short)(unsigned char)t0 * (short)0x32) + 0xC8D1DD8) + 0x2A) + 0x1)) = (*(signed char *)0xC8D25A9);
            *(unsigned char *)(((((short)((short)(unsigned char)t0 * (short)0x32) + 0xC8D1DD8) + 0x2A) + 0x2)) = (*(signed char *)0xC8D25AA);
            *(unsigned char *)(((((short)((short)(unsigned char)t0 * (short)0x32) + 0xC8D1DD8) + 0x2A) + 0x3)) = (*(signed char *)0xC8D25AB);
        }
    }
}

int FUN_0c2d2c54(void)
{
    int stk[2];
    register int t1;
    register int t7;
    register int t10;
    register int t12;
    register int t16;
    register int t18;

    if (((*(signed char *)0xC8D25F7) & 4) != 0) {
        t1 = *(int *)0xC8D25F0;
        (((struct o78_uchar *)(t1))->v) = ((*(signed char *)(((t1 + 0x78) + 0x0))) & 0xDF);
        FUN_0c2ec410(((int)stk + 0), 0xA);
        for (;;) {
            if (((*(signed char *)((((*(int *)0xC8D25F0) + 0x78) + 0x0))) & 8) != 0) {
                break;
            }
            t7 = FUN_0c2ec430((*(int *)(((int)stk + 0))));
            if ((signed char)t7 == 0) continue;
            break;
        }
    }
    t10 = *(int *)0xC8D25F0;
    (((struct o24_uchar *)(t10))->v) = ((*(signed char *)(((t10 + 0x24) + 0x0))) & 0xFE);
    t12 = *(int *)0xC8D25F0;
    (((struct o20_uchar *)(t12))->v) = ((*(signed char *)(((t12 + 0x20) + 0x0))) & 0xFE);
    FUN_0c2ec410(((int)stk + 0), 0x32);
    for (;;) {
        t16 = *(signed char *)((((*(int *)0xC8D25F0) + 0x3C) + 0x0));
        if ((t16 & 32) == 0) {
            return t16;
        }
        t18 = FUN_0c2ec430((*(int *)(((int)stk + 0))));
        if ((signed char)t18 != 0) {
            break;
        }
    }
    return (FUN_0c2d65ae(0x488));
}

int FUN_0c2d8cfc(int a4)
{
    *(unsigned int *)(((a4 + 0xC) + 0x4)) = (a4 + 0xC);
    *(unsigned int *)(((a4 + 0xC) + 0x8)) = ((a4 + 0xC) + 0x1);
    *(unsigned int *)(((a4 + 0x18) + 0x4)) = (a4 + 0x18);
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((a4 + 0x18) + 0x1);
    *(unsigned int *)(((a4 + 0x24) + 0x4)) = (a4 + 0x24);
    *(unsigned int *)(((a4 + 0x24) + 0x8)) = ((a4 + 0x24) + 0x1);
    *(unsigned int *)(((a4 + 0x30) + 0x4)) = (a4 + 0x30);
    (((struct o30_uchar *)(a4))->v) = 0x0;
    *(unsigned int *)(((a4 + 0x38) + 0x4)) = (a4 + 0x38);
    (((struct o38_uchar *)(a4))->v) = 0x0;
    FUN_0c2d8d9e((a4 + 0x42));
    *(unsigned int *)(((a4 + 0x50) + 0x4)) = (a4 + 0x50);
    (((struct o4C_uint *)(a4))->v) = (a4 + 0x42);
    *(unsigned short *)((a4 + 0x0)) = 0x0;
    *(unsigned char *)((a4 + 0x2)) = 0x0;
    *(unsigned char *)((a4 + 0x3)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned char *)(((*(int *)((a4 + 0x34))) + 0x0)) = 0x0;
    (((struct o41_uchar *)(a4))->v) = 0x0;
    (((struct o30_uchar *)(a4))->v) = ((*(signed char *)(((a4 + 0x30) + 0x0))) | 0x2);
    (((struct o40_uchar *)(a4))->v) = 0x0;
    (((struct o58_uchar *)(a4))->v) = 0x0;
    (((struct o59_uchar *)(a4))->v) = 0x0;
    return a4;
}

int FUN_0c186b20(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    if ((*(int *)((((*(int *)0xC83CD40) + ((a4 << 2) << 1)) + 0x0))) == 0) {
        *(unsigned int *)(((((*(int *)0xC83CD40) + ((a4 << 2) << 1)) + 0x4) + 0x0)) = (nl_texture_slot_alloc());
    }
    t0 = *(int *)0xC83CD40;
    *(unsigned int *)(((t0 + ((a4 << 2) << 1)) + 0x0)) = ((*(int *)(((t0 + ((a4 << 2) << 1)) + 0x0))) + 0x1);
    t0 = *(int *)((((*(int *)0xC83CD40) + ((a4 << 2) << 1)) + 0x4));
    t1 = *(int *)0xC8A64D8;
    if ((*(int *)((((t0 * 0x3C) + t1) + 0x2C))) == 0) {
        t3 = nlLoadTextureMem(a5, t0, (*(int *)((a5 + 0x8))));
        if (t3 != 0) {
            *(unsigned int *)0xC8A2E6C = 0x1;
            t3 = 0x1;
        } else {
            nl_texture_slot_finish(t0);
            *(unsigned int *)((((t0 * 0x3C) + t1) + 0x38)) = t0;
            *(unsigned int *)((((t0 * 0x3C) + t1) + 0x2C)) = ((*(int *)((((t0 * 0x3C) + t1) + 0x2C))) + 0x1);
            t3 = 0x0;
        }
    } else {
        *(unsigned int *)((((t0 * 0x3C) + t1) + 0x2C)) = ((*(int *)((((t0 * 0x3C) + t1) + 0x2C))) + 0x1);
        t3 = 0x0;
    }
    return t3;
}

int copySmallVQToTextureRom(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t7;

    t0 = kmtex_GetTextureLevel(a6, a6);
    if ((a7 & 0x80000000) != 0) {
        t6 = ((*(int *)(((t0 << 2) + 0xC3001EC))) + 0xA);
        t7 = (*(int *)(((t0 << 2) + 0xC300178)));
    } else {
        t6 = (*(int *)(((t0 << 2) + 0xC3001C0)));
        t7 = (*(int *)(((t0 << 2) + 0xC30015C)));
    }
    kmyCopyToTextureRom(a4, a5, t7, 0x0);
    return kmyCopyToTextureRom((a4 + 0x800), (a5 + t7), t6, 0x0);
}

int FUN_0c1945a0(int a4, int a5, int a6)
{
    int stk[9];
    register int t1;
    register int t13;

    *(unsigned short *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned short *)(((int)stk + 20)) = a6;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0x4);
    t1 = FUN_0c193fc0((*(short *)(((int)stk + 16))), (((int)stk + 0) + 0x4), 0x0, 0x0);
    if ((short)t1 == 0) {
        if ((*(short *)(((int)stk + 8))) == 0) {
            *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x0)) = 0x0;
            *(volatile short *)(((int)stk + 4));
            
            return 0xFFFFFFFF;
        }
        *(unsigned short *)(((int)stk + 24)) = (*(short *)(((int)stk + 16)));
        *(unsigned short *)(((int)stk + 26)) = (*(short *)(((int)stk + 20)));
        *(unsigned int *)(((int)stk + 28)) = (*(int *)(((int)stk + 12)));
        *(unsigned int *)(((int)stk + 32)) = 0x0;
        t13 = FUN_0c184000(0x4119, (((int)stk + 4) + 0x14), 0x0);
        if ((short)t13 == -1) {
            return 0xFFFFFFFF;
        }
        return t13;
    }
    return t1;
}


int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x10));
    t1 = FUN_0c181ade((*(int *)((((a4 + 0x2C) + (a5 << 2)) + 0x0))), a7, ((*(int *)((((a5 << 2) + (a4 + 0x20)) + 0x0))) + ((int)((int)(a6 * t0) / (int)0x8))), ((int)((int)(a8 * t0) / (int)0x8)));
    if ((int)t1 < 0) {
        if (t1 == -1) {
            return (FUN_0c2dc1ae(0xC300CE0));
        }
        if (t1 == -2) {
            return (FUN_0c2dc1ae(0xC300D10));
        }
        if (t1 == -3) {
            return (FUN_0c2dc1ae(0xC300D50));
        }
        t0 = t1;
        if (t1 == -4) {
            t0 = (FUN_0c2dc1ae(0xC300D90));
        }
        return t0;
    }
    return t1;
}

int FUN_0c181ade(int a4, int a5, int a6, int a7)
{
    register int t5;

    if ((*(int *)((a4 + 0x0))) != 1) {
        return 0xFFFFFFFF;
    }
    if ((a5 & 0x1F) != 0) {
        return 0xFFFFFFFE;
    }
    if ((a6 & 0x1F) != 0) {
        return 0xFFFFFFFD;
    }
    if ((0x1F & a7) != 0) {
        return 0xFFFFFFFC;
    }
    t5 = *(int *)0xC86CC38;
    if (t5 == 0) {
        nlsndG2WriteN(a5, a6, ((unsigned int)a7 >> 2));
        return 0x0;
    }
    if (t5 != 1) {
        return 0xFFFFFFFB;
    }
    return 0x0;
}

int FUN_0c1857ec(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC8B1AA0;
    t1 = 0x0;
    t2 = 0xC8B1AA0;
    for (;;) {
        if ((*(short *)((t0 + 0x0))) == 0) {
            break;
        }
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x618);
        t0 = (t0 + 0x618);
        if ((int)(short)t1 >= (int)0xA) {
            return 0x0;
        }
    }
    *(unsigned short *)((t2 + 0x0)) = 0x1;
    *(unsigned short *)((t2 + 0x2)) = a4;
    t0 = (((struct o4_int *)0xC8B5790)->v);
    if (t0 == 0) {
        (((struct o0_uint *)0xC8B5790)->v) = t2;
        (((struct o4_uint *)0xC8B5790)->v) = t2;
        (((struct o610_uint *)(t2))->v) = 0x0;
        (((struct o614_uint *)(t2))->v) = 0x0;
    } else {
        (((struct o614_uint *)(t0))->v) = t2;
        (((struct o610_uint *)(t2))->v) = ((((struct o4_int *)0xC8B5790)->v));
        (((struct o614_uint *)(t2))->v) = 0x0;
        (((struct o4_uint *)0xC8B5790)->v) = t2;
    }
    return t2;
}

int FUN_0c192164(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t1;
    register int t7;
    register int t9;
    register int t12;

    if ((unsigned short)a4 != 0x81) {
        t12 = 0x0;
        if ((unsigned short)a4 != 0x82) {
        } else {
            (((struct o0_uchar *)0xC874F90)->v) = 0x1;
            (((struct o1_uchar *)0xC874F90)->v) = 0x2;
            { struct mvb12 { char b[12]; }; *(struct mvb12 *)(((int)stk + 0)) = *(struct mvb12 *)(0xC874F90); }
            t1 = ((int (*)(int, int, int, int, Stk3))(FUN_0c183708))((*(int *)0xC8AA218), a5, a6, a7, *(Stk3 *)(((int)stk + 0)));
            t12 = 0x1;
        }
    } else {
        (((struct o0_uchar *)0xC874F90)->v) = 0x0;
        { struct mvb12 { char b[12]; }; *(struct mvb12 *)(((int)stk + 0)) = *(struct mvb12 *)(0xC874F90); }
        t7 = ((int (*)(int, int, int, int, Stk3))(FUN_0c183708))((*(int *)0xC8AA218), a5, a6, a7, *(Stk3 *)(((int)stk + 0)));
        (((struct o1_uchar *)0xC874F90)->v) = 0x0;
        { struct mvb12 { char b[12]; }; *(struct mvb12 *)(((int)stk + 0)) = *(struct mvb12 *)(0xC874F90); }
        t9 = ((int (*)(int, Stk3))(FUN_0c183708))((*(int *)0xC8AA218), *(Stk3 *)(((int)stk + 0)));
        t12 = 0x1;
    }
    return t12;
}

int FUN_0c19a3bc(int a4)
{
    register int t0;

    t0 = *(int *)0xC8A73C0;
    (((struct o138_ushort *)(((a4 * 0x174) + t0)))->v) = 0x1;
    (((struct o13A_ushort *)(((a4 * 0x174) + t0)))->v) = 0x0;
    (((struct o12C_ushort *)(((a4 * 0x174) + t0)))->v) = 0x218;
    (((struct o16F_uchar *)(((a4 * 0x174) + t0)))->v) = 0x0;
    (((struct o13F_uchar *)(((a4 * 0x174) + t0)))->v) = 0x0;
    (((struct o13E_uchar *)(((a4 * 0x174) + t0)))->v) = 0x0;
    (((struct o118_ushort *)(((a4 * 0x174) + t0)))->v) = 0x0;
    (((struct o11A_ushort *)(((a4 * 0x174) + t0)))->v) = 0x18;
    (((struct o120_ushort *)(((a4 * 0x174) + t0)))->v) = 0xC;
    if ((int)((((struct o120_short *)(((a4 * 0x174) + t0)))->v)) < (int)0x2) {
        (((struct o120_ushort *)(((a4 * 0x174) + t0)))->v) = 0x2;
    } else {
        if ((int)((((struct o120_short *)(((a4 * 0x174) + t0)))->v)) > (int)0x80) {
            (((struct o120_ushort *)(((a4 * 0x174) + t0)))->v) = 0x80;
        }
    }
    (((struct o10E_ushort *)(((a4 * 0x174) + t0)))->v) = 0xFFFF;
    (((struct o13C_ushort *)(((a4 * 0x174) + t0)))->v) = 0xFFFF;
    FUN_0c190c4e(((a4 * 0x174) + t0));
    (((struct o170_uchar *)(((a4 * 0x174) + t0)))->v) = 0x1E;
    (((struct o16E_uchar *)(((a4 * 0x174) + t0)))->v) = 0x0;
    (((struct o15C_ushort *)(((a4 * 0x174) + t0)))->v) = 0x0;
    (((struct o160_uint *)(((a4 * 0x174) + t0)))->v) = 0x0;
    (((struct o168_uint *)(((a4 * 0x174) + t0)))->v) = 0x0;
    (((struct o130_uint *)(((a4 * 0x174) + t0)))->v) = 0x0;
    return 0x130;
}

int FUN_0c19a9c6(int a4, int a5)
{
    register int t0;

    if ((int)(unsigned char)a5 <= (int)0x2) {
        t0 = FUN_0c19af74(a4);
        if (t0 != 0) {
            return 0xFFFFFFFC;
        }
        t0 = *(int *)0xC8A73C0;
        if ((unsigned char)a5 == 0) {
            (((struct o13E_uchar *)(((a4 * 0x174) + t0)))->v) = ((*(signed char *)((((a4 * 0x174) + t0) + 0x13E))) | 0x4);
            return 0x0;
        }
        if ((unsigned char)a5 == 2) {
            (((struct o13E_uchar *)(((a4 * 0x174) + t0)))->v) = ((*(signed char *)((((a4 * 0x174) + t0) + 0x13E))) | 0xC);
        }
        if ((unsigned char)a5 == 1) {
            (((struct o13E_uchar *)(((a4 * 0x174) + t0)))->v) = ((*(signed char *)((((a4 * 0x174) + t0) + 0x13E))) | 0x8);
        }
        return FUN_0c19a91c(a4);
    }
    return 0xFFFFFFFC;
}

int buInit(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register int t5;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    (((struct o14_uint *)0xC8BA3F0)->v) = a5;
    (((struct o10_uint *)0xC8BA3F0)->v) = a6;
    (((struct o0_uint *)0xC8BA3F0)->v) = 0x0;
    (((struct o4_uint *)0xC8BA3F0)->v) = 0x0;
    (((struct o8_uint *)0xC8BA3F0)->v) = 0x0;
    (((struct oC_uint *)0xC8BA3F0)->v) = 0x0;
    FUN_0c2bd998(a5);
    t2 = FUN_0c2bdfe2(a4, a5, a6);
    kdSetHandler((*(int *)0xC2FED5C), 0xC2B24C8);
    if ((t2 == 0) && (a7 != 0)) {
        t5 = ((int (*)(void))(a7))();
    }
    *(unsigned int *)0xC303700 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t2;
}


int mwRnaSetPlaySw(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t4;
    register int t5;
    register int t8;
    register int t13;
    register int t14;
    register int t17;

    *(unsigned int *)(((int)stk + 4)) = a5;
    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC2FFEE8;
        return (FUN_0c2dc1ae(0xC2FFEE8));
    }
    FUN_0c2dc160((((int)stk + 4) + 0x4));
    if ((*(int *)(((int)stk + 4))) == 0) {
        t4 = mwRnaGetPlaySw(a4);
        if (t4 != 0) {
            t5 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 4)) = t5;
            t8 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t5 + 0x0))) + 0x14)))))(t5, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x5);
        }
    } else {
        if ((*(int *)(((int)stk + 4))) == 1) {
            t13 = mwRnaGetPlaySw(a4);
            if (t13 != 1) {
                t14 = *(int *)((a4 + 0x38));
                *(unsigned int *)(((int)stk + 4)) = t14;
                t17 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t14 + 0x0))) + 0x10)))))(t14, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) | 0x2);
            }
        }
    }
    return (FUN_0c2dc178((((int)stk + 4) + 0x4)));
}

int ADXB_Create(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        if ((*(short *)((((t0 * 0xAC) + 0xC8D4D8C) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    t1 = 0x0;
    if (t0 != 8) {
        memset(((t0 * 0xAC) + 0xC8D4D8C), 0x0, 0xAC);
        *(unsigned short *)((((t0 * 0xAC) + 0xC8D4D8C) + 0x0)) = 0x1;
        t1 = ADXPD_Create();
        *(unsigned int *)((((t0 * 0xAC) + 0xC8D4D8C) + 0x8)) = t1;
        if (t1 == 0) {
            ADXB_Destroy(((t0 * 0xAC) + 0xC8D4D8C));
            t1 = 0x0;
        } else {
            *(unsigned int *)((((t0 * 0xAC) + 0xC8D4D8C) + 0x38)) = a4;
            *(unsigned int *)((((t0 * 0xAC) + 0xC8D4D8C) + 0x3C)) = a5;
            (((struct o40_uint *)(((t0 * 0xAC) + 0xC8D4D8C)))->v) = a6;
            (((struct o44_uint *)(((t0 * 0xAC) + 0xC8D4D8C)))->v) = a7;
            (((struct o88_uint *)(((t0 * 0xAC) + 0xC8D4D8C)))->v) = 0xC2DB96C;
            (((struct o8C_uint *)(((t0 * 0xAC) + 0xC8D4D8C)))->v) = ((t0 * 0xAC) + 0xC8D4D8C);
            (((struct o90_uint *)(((t0 * 0xAC) + 0xC8D4D8C)))->v) = 0xC2DB98A;
            (((struct o94_uint *)(((t0 * 0xAC) + 0xC8D4D8C)))->v) = ((t0 * 0xAC) + 0xC8D4D8C);
            t1 = ((t0 * 0xAC) + 0xC8D4D8C);
        }
    }
    return t1;
}

void FUN_0c2e6ce6(int a4)
{
    register int t0;

    if (((unsigned char)(*(signed char *)0xC8D6795) & 0x1) == 0) {
        t0 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x20;
        t0 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = ((*(signed char *)0xC8D646C) + 0x30);
    }
    if (((unsigned char)(*(signed char *)0xC8D6795) & 0x1) != 0) {
        t0 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x20;
        t0 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x2D;
        t0 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x20;
        t0 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x56;
        t0 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x34;
        t0 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x32;
        t0 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x42;
        t0 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x49;
        t0 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a4 + 0x0)) = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x53;
    }
}

void FUN_0c2f24d6(void)
{
    int stk[3];
    register int t1;
    register int t3;

    FUN_0c2fa4cc(0x4, 0x1, ((int)stk + 0));
    t1 = *(signed char *)(((int)stk + 0));
    *(unsigned short *)(((int)stk + 4)) = (((((unsigned char)t1 << 2) + (unsigned char)t1) << 2) << 1);
    t3 = 0x0;
    for (;;) {
        if ((unsigned char)(*(signed char *)((0xC302C78 + (unsigned char)t3))) == 49) {
            FUN_0c2fa4c4((*(signed char *)0xC8D6471), (((*(short *)(((int)stk + 4))) + (unsigned char)t3) + 0x22));
            FUN_0c2fa4ec();
            return;
        }
        t3 = (t3 + 0x1);
        if ((unsigned char)(*(signed char *)((0xC302C78 + (unsigned char)t3))) == 0xFF) {
            break;
        }
    }
    for (;;) {
    }
}

int FUN_0c2f4194(void)
{
    int t0;
    register int t2;
    register int t4;

    (((struct o24_uchar *)0xC8DFF78)->v) = 0x0;
    if ((*(signed char *)0xC8DFF9F) == 0) {
        t4 = *(signed char *)0xC8D6791;
        t2 = (unsigned char)t4;
        if (((unsigned char)t4 & 8) != 0) {
            t4 = *(signed char *)0xC8D679A;
            t2 = ((unsigned char)t4 & 0x6);
            if ((((unsigned char)t4 & 0x6) == 4) && (t0 = *(short *)0xC8DE914, t0 != 0)) {
            } else {
                (((struct o27_uchar *)0xC8DFF78)->v) = 0x1;
                (((struct o18_uchar *)0xC8DFF78)->v) = 0x8;
                (((struct o19_uchar *)0xC8DFF78)->v) = 0x3;
                (((struct o1D_uchar *)0xC8DFF78)->v) = 0x1;
                (((struct o1C_uchar *)0xC8DFF78)->v) = 0x0;
                (((struct o0_uchar *)0xC8DFF78)->v) = (*(signed char *)0xC8DFF77);
                if (((unsigned char)(*(signed char *)0xC8D679A) & 4) == 0) {
                    (((struct o24_uchar *)0xC8DFF78)->v) = 0x40;
                }
                if (((unsigned char)(*(signed char *)0xC8D679A) & 6) == 0) {
                    (((struct o24_uchar *)0xC8DFF78)->v) = 0xC0;
                }
                t0 = *(signed char *)0xC8D67A4;
                if (((unsigned char)t0 & 32) != 0) {
                    t4 = FUN_0c2ec29a();
                    (((struct o23_uchar *)0xC8DFF78)->v) = t4;
                } else {
                    (((struct o23_uchar *)0xC8DFF78)->v) = 0x0;
                    t4 = (unsigned char)t0;
                }
                (((struct o1_uchar *)0xC8DFF78)->v) = 0x1;
                t2 = t4;
            }
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c2f92c0(int a4)
{
    if ((int)(unsigned char)a4 >= (int)0x2F) {
        return 0x200;
    }
    if ((int)(unsigned char)a4 >= (int)0x22) {
        return 0x100;
    }
    if ((int)(unsigned char)a4 >= (int)0x14) {
        return 0x80;
    }
    if ((int)(unsigned char)a4 >= (int)0xD) {
        return 0x40;
    }
    if ((unsigned char)a4 != 5) {
        if ((unsigned char)a4 != 6) {
            if ((unsigned char)a4 != 7) {
                if ((unsigned char)a4 != 9) {
                    if ((unsigned char)a4 != 10) {
                        if ((unsigned char)a4 != 11) {
                            if ((unsigned char)a4 != 12) {
                                if (((unsigned char)(*(signed char *)0xC8D645B) & 0x40) != 0) {
                                    return 0x1;
                                }
                                return 0x2;
                            }
                            *(unsigned char *)0xC8D6780 = ((*(signed char *)0xC8D6780) | 0x40);
                            return 0x4;
                        }
                        return 0x2;
                    }
                    return 0x20;
                }
                return 0x800020;
            }
            return 0x20;
        }
        return 0x10;
    }
    if (((unsigned char)(*(signed char *)0xC8D645B) & 0x40) == 0) {
        return 0x10;
    }
    return 0x1;
}

int FUN_0c2fa308(void)
{
    register int t0;
    register int t1;

    if (((unsigned char)(*(signed char *)0xC8D6783) & 16) != 0) {
        if ((int)(unsigned short)(*(short *)0xC8D6524) >= (int)0x2) {
            *(unsigned char *)0xC8D6783 = ((*(signed char *)0xC8D6783) & 0xEF);
            t0 = *(signed char *)0xC8D6783;
            *(unsigned char *)0xC8D6783 = (t0 & 0xDF);
            t1 = (t0 & 0xDF);
        } else {
            if (((unsigned char)(*(signed char *)0xC8D6783) & 32) == 0) {
                FUN_0c2ec410(0xC8D6608, 0x12C);
                t0 = *(signed char *)0xC8D6783;
                *(unsigned char *)0xC8D6783 = (t0 | 0x20);
                t1 = (t0 | 0x20);
            } else {
                t0 = FUN_0c2ec430(((((struct o0_int *)0xC8D6608)->v)));
                t1 = (signed char)t0;
                if ((signed char)t0 != 0) {
                    t0 = FUN_0c2ec430(((((struct oC_int *)0xC8D6608)->v)));
                    t1 = (signed char)t0;
                    if ((signed char)t0 != 0) {
                        if (((unsigned char)(*(signed char *)0xC8D644E) & 128) != 0) {
                            FUN_0c2e8122();
                        } else {
                            FUN_0c2e80fa();
                        }
                        t0 = *(signed char *)0xC8D6783;
                        *(unsigned char *)0xC8D6783 = (t0 & 0xDF);
                        t1 = (t0 & 0xDF);
                    }
                }
            }
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)0xC8D6783;
        *(unsigned char *)0xC8D6783 = (t1 & 0xDF);
        t0 = (t1 & 0xDF);
    }
    return t0;
}

int FUN_0c18d498(int a4)
{
    register int t18;

    t18 = FUN_0c19c1c8((*(int *)((a4 + 0x0))), (*(short *)((a4 + 0x4))), (*(short *)((a4 + 0x6))), (*(signed char *)((a4 + 0x8))), ((*(signed char *)((a4 + 0x9)))), ((*(signed char *)((a4 + 0xA)))), ((*(signed char *)((a4 + 0xB)))), ((*(short *)((a4 + 0xC)))), ((*(int *)((a4 + 0x10)))), ((*(int *)((a4 + 0x14)))), ((*(int *)((a4 + 0x18)))));
    if ((int)t18 < 0) {
        return t18;
    }
    return (0x80 | t18);
}

int FUN_0c19fa48(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((int)(short)a4 > 0) && ((int)(short)a4 <= (int)0x10)) {
        (((struct o4_uint *)0xC8B6108)->v) = 0xC8B6140;
        (((struct o9_uchar *)0xC8B6108)->v) = (a4 + 0xFF);
    }
    if (((int)(short)a5 > 0) && ((int)(short)a5 <= (int)0x10)) {
        (((struct o0_uint *)0xC8B6108)->v) = 0xC8B6A00;
        (((struct o8_uchar *)0xC8B6108)->v) = (a5 + 0xFF);
    }
    (((struct oA_uchar *)0xC8B6108)->v) = 0x0;
    (((struct oB_uchar *)0xC8B6108)->v) = 0xFF;
    (((struct oC_uchar *)0xC8B6108)->v) = 0xFF;
    if ((int)(short)a5 > 0) {
        t0 = *(signed char *)0xC8B6110;
        t1 = (((struct o0_int *)0xC8B6108)->v);
        if ((int)(short)(unsigned char)t0 > 0) {
            t2 = (unsigned char)t0;
            for (;;) {
                *(unsigned char *)(((((short)t2 * (short)0x8C) + t1) + 0x0)) = t2;
                t0 = (((short)t2 * (short)0x8C) + t1);
                t3 = (((short)t2 - 1) * 0x8C);
                t2 = (t2 - 1);
                *(unsigned int *)((t0 + 0x4)) = (t3 + t1);
                if ((int)(short)t2 <= 0) {
                    break;
                }
            }
        }
        *(unsigned int *)((t1 + 0x4)) = (((unsigned short)(unsigned char)(*(signed char *)0xC8B6110) * (unsigned short)0x8C) + t1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
    }
    return 0xC8B6108;
}

int vmsfs_read_disk_image(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC303C74)));
    t0 = a5;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)((*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x0))) + 0x1)) {
            return 0x0;
        }
        t2 = FUN_0c10121c(a4, t1, t0);
        if ((int)t2 < 0) {
            break;
        }
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x200);
    }
    return t2;
}

int FUN_0c2f7baa(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if (((*(signed char *)0xC8E0ADA) == 0) && (t0 = *(signed char *)0xC8DFFB0, t0 != 0)) {
        t0 = 0x1;
        if ((unsigned short)((((struct o10_short *)0xC8E0ADA)->v)) == (unsigned short)(*(short *)((((unsigned short)((((struct oC_short *)0xC8E0ADA)->v)) << 1) + (*(int *)0xC8E0AF8))))) {
            t1 = 0x1;
            if ((unsigned char)(*(signed char *)0xC8E09D7) != (unsigned char)(*(signed char *)(((unsigned short)((((struct oC_short *)0xC8E0ADA)->v)) + (*(int *)0xC8E0AF4))))) {
            } else {
                (((struct oC_ushort *)0xC8E0ADA)->v) = 0x0;
                t1 = 0x0;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        (((struct o0_uchar *)0xC8E0ADA)->v) = 0x0;
        t0 = *(signed char *)0xC8E09D7;
        t2 = *(int *)0xC8E0B00;
        t3 = *(int *)0xC8E0AF4;
        t4 = (*(short *)((((unsigned short)((((struct o10_short *)0xC8E0ADA)->v)) << 1) + (*(int *)0xC8E0AFC))));
        for (;;) {
            if ((unsigned short)t4 == 0) {
                return 0x1;
            }
            if ((unsigned char)(*(signed char *)((t3 + (unsigned short)t4))) == (unsigned short)(unsigned char)t0) {
                break;
            }
            t4 = (*(short *)((t2 + ((unsigned short)t4 << 1))));
        }
        (((struct oC_ushort *)0xC8E0ADA)->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

float math_tan_angle16(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register int t3;
    register float u4;
    register float u5;
    register int t6;

    if ((0x7FFF & (unsigned short)a4) != 0x4000) {
        u0 = ((((float)(unsigned short)(unsigned short)a4 * 6.28318548f) / 65536.0f) / 1.57079637f);
        u1 = (((float)(unsigned short)(unsigned short)a4 * 6.28318548f) / 65536.0f);
        u2 = ((float)(int)(u0 + 0.5f) * 1.57079637f);
        t3 = 0xD;
        u4 = ((float)(int)(u0 + 0.5f) * 1.57079637f);
        u5 = 0.0f;
        for (;;) {
            if ((int)t3 < (int)0x3) {
                break;
            }
            t6 = t3;
            t3 = (t3 - 2);
            u4 = (float)t6;
            u4 = (u4 - u5);
            u5 = ((u1 - u2) * (u1 - u2));
            u5 = (u5 / u4);
        }
        if (((int)(u0 + 0.5f) & 0x1) == 0) {
            return ((u1 - u2) / (1.0f - u5));
        }
        if (((u1 - u2) / (1.0f - u5)) != 0.0f) {
            return (-1.0f / ((u1 - u2) / (1.0f - u5)));
        }
        return 3.40282347e+38f;
    }
    return 3.40282347e+38f;
}

int nlLocate(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;

    t0 = (((struct o8_int *)0xC8684D4)->v);
    if ((*(int *)0xC2A60BC) == 0) {
        u0 = (((struct o8_float *)0xC2A6140)->v);
        u1 = (float)(t0 * a4);
        (((struct o0_uint *)0xC8684D4)->v) = (int)(u1 + u0);
        (((struct o10_uint *)0xC8684D4)->v) = (int)(u1 + u0);
        (((struct o4_uint *)0xC8684D4)->v) = (int)(((float)(((((struct oC_int *)0xC8684D4)->v)) * a5)) + ((((struct oC_float *)0xC2A6140)->v)));
    } else {
        u0 = (((struct oC_float *)0xC2A6140)->v);
        u1 = (float)(t0 * a4);
        (((struct o0_uint *)0xC8684D4)->v) = (int)(u1 + u0);
        (((struct o10_uint *)0xC8684D4)->v) = (int)(u1 + u0);
        (((struct o4_uint *)0xC8684D4)->v) = (int)((((float)((((((struct oC_int *)0xC8684D4)->v)) * a5) + (*(short *)0xC8A6CA8))) - ((((struct o8_float *)0xC2A6140)->v))) - ((((struct o0_float *)0xC2A6140)->v)));
    }
    return 0xC8684E0;
}

int FUN_0c186380(int a4)
{
    register int t1;
    register int t2;
    register int t5;

    FUN_0c193da4();
    *(unsigned int *)0xC8A2E68 = 0x0;
    t1 = FUN_0c185560(a4);
    if ((int)(short)t1 >= 0) {
        *(unsigned int *)0xC8B57A0 = (((short)t1 * (short)0x34) + 0xC8A2C60);
        t2 = *(short *)(((((short)t1 * (short)0x34) + 0xC8A2C60) + 0x2));
        if ((*(short *)(((((short)t1 * (short)0x34) + 0xC8A2C60) + 0xE))) == 2) {
            t5 = *(short *)(((((short)t1 * (short)0x34) + 0xC8A2C60) + 0x10));
            if (t5 != 1) {
                if (t5 == 2) {
                    FUN_0c194962((short)t2);
                    FUN_0c1855b4((*(int *)0xC8B57A0));
                    FUN_0c193dae();
                    return 0x0;
                }
                *(unsigned int *)0xC8A2E68 = 0x2B;
                FUN_0c193dae();
                return 0xFFFFFFFF;
            }
            FUN_0c1947b8((short)t2);
            FUN_0c1855b4((*(int *)0xC8B57A0));
            FUN_0c193dae();
            return 0x0;
        }
        *(unsigned int *)0xC8A2E68 = 0x2B;
    } else {
        *(unsigned int *)0xC8A2E68 = 0x26;
    }
    FUN_0c193dae();
    return 0xFFFFFFFF;
}

int kmLoadTextureRom(int a4, int a5)
{
    int t6;
    register int t7;
    register int t15;
    register int t16;

    if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        copySmallVQToTextureRom((*(int *)((a4 + 0x1C))), a5, (*(int *)((a4 + 0xC))), (*(int *)((a4 + 0x18))));
    } else {
        t6 = *(int *)((a4 + 0x18));
        if (((0x4000000 & t6) == 0) && (((0x80000000 & t6) != 0) && (((0x40000000 & t6) == 0) && ((0x8000 & t6) == 0)))) {
            t7 = *(int *)((a4 + 0xC));
            t15 = ((*(int *)((a4 + 0x1C))) + 0x4);
            t16 = ((*(int *)((((kmtex_GetTextureLevel(t7, t7)) << 2) + 0xC300194))) + 0x4);
        } else {
            t15 = (*(int *)((a4 + 0x1C)));
            t16 = (*(int *)((a4 + 0x14)));
        }
        kmyCopyToTextureRom(t15, a5, t16, 0x0);
    }
    return 0x0;
}

int vmsfs_isformat(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) != 0) {
        t2 = vmsio_isready(a4);
        if (t2 == 0) {
            vmsfs_unmount(a4);
            t2 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t4 = 0xFFFFFF01;
            if ((t3 != 0) && (t0 = *(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x8)), t0 != 0)) {
                t0 = (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20)));
                t3 = 0x0;
                for (;;) {
                    if ((unsigned char)(*(signed char *)((t0 + 0x0))) != 85) {
                        break;
                    }
                    t3 = (t3 + 0x1);
                    t0 = (t0 + 0x1);
                    if ((int)t3 >= (int)0x10) {
                        if ((*(int *)(((a4 << 2) + 0xC8C5044))) != 0) {
                            return 0xFFFFFF03;
                        }
                        return 0x0;
                    }
                }
                *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xB)) = 0x0;
                *(unsigned char *)((((a4 * 0x148) + 0xC8C4604) + 0xC)) = 0x0;
                t4 = 0xFFFFFF03;
            }
            t2 = t4;
        }
        t1 = t2;
    }
    return t1;
}

void FUN_0c2d7302(int a4)
{
    register int t6;

    if ((unsigned short)a4 != 0) {
        if ((unsigned char)(*(signed char *)0xC8D6831) == 13) {
            *(unsigned char *)0xC8D683B = a4;
            return;
        }
        *(unsigned short *)((((short)((short)(unsigned char)(*(signed char *)0xC8D7089) * (short)0x8C) + 0xC8D2B88) + 0x2)) = a4;
        if (((((struct o84_short *)(((short)((short)(unsigned char)(*(signed char *)0xC8D7089) * (short)0x8C) + 0xC8D2B88)))->v)) == 0) {
            (((struct o0_uchar *)0xC8D7085)->v) = ((*(signed char *)0xC8D7085) + 0x1);
            t6 = *(signed char *)0xC8D7089;
            *(unsigned short *)((((short)((short)(unsigned char)t6 * (short)0x8C) + 0xC8D2B88) + 0x0)) = ((*(short *)((((short)((short)(unsigned char)t6 * (short)0x8C) + 0xC8D2B88) + 0x0))) & 0xFFFE);
            (((struct o4_uchar *)0xC8D7085)->v) = (((*(signed char *)0xC8D7089) + 0x1) & 0x7);
            FUN_0c2d7806(0x1);
    return;
        }
        (((struct o4_uchar *)0xC8D7085)->v) = (((*(signed char *)0xC8D7089) + 0x1) & 0x7);
        (((struct o0_uchar *)0xC8D7085)->v) = ((*(signed char *)0xC8D7085) + 0x1);
        return;
    }
}

int kmytex_FBAllocEntry(void)
{
    register int t0;
    register int t1;

    t0 = (((struct o0_int *)0xC304124)->v);
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        for (;;) {
            if (((unsigned short)(*(short *)(((((((t1 << 1) + t1) << 2) << 1) + ((((struct o18_int *)0xC304124)->v))) + 0x0))) & 0x1) == 0) {
                break;
            }
            t1 = (t1 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)t0) {
                return 0x0;
            }
        }
        *(unsigned short *)(((((((struct o18_int *)0xC304124)->v)) + ((((t1 << 1) + t1) << 2) << 1)) + 0x0)) = 0x1;
        return (((((struct o18_int *)0xC304124)->v)) + ((((t1 << 1) + t1) << 2) << 1));
    }
    return 0x0;
}

int FUN_0c18d7cc(int a4, int a5, int a6)
{
    int stk[3];
    register int t2;
    register int t4;
    register int t3;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    FUN_0c18dcfa((((int)stk + 0) + 0x4), a4);
    t2 = 0x0;
    t4 = a6;
    for (;;) {
        if (t4 == 0) {
            break;
        }
        t3 = t2;
        t3 = (t3 << 1);
        t3 = (t3 + t2);
        t3 = (t3 << 2);
        if ((int)(t4 - (*(short *)((((a5 + 0x8) + t3) + 0x0)))) >= 0) {
            t5 = a5;
            t5 = (t5 + 0x8);
            t5 = (t5 + t3);
            t5 = (*(short *)((t5 + 0x0)));
        } else {
            t5 = t4;
        }
        FUN_0c18dae8((((int)stk + 0) + 0x4), (((a5 + 0x8) + t3) + 0x4), t5);
        FUN_0c18dd06((((int)stk + 0) + 0x4), t5);
        t2 = (t2 + 0x1);
        t4 = (t4 - t5);
    }
    return 0x0;
}

int FUN_0c2b36a4(int a4, int a5, int a6)
{
    int stk[2];
    int t1;
    int t2;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    *(unsigned char *)((a6 + 0x0)) = 0x0;
    *(unsigned char *)((a6 + 0x1)) = 0x0;
    t1 = FUN_0c2b372a((*(short *)(((int)stk + 0))));
    t2 = *(int *)(((int)stk + 4));
    if ((t2 != 0) && (t2 != 1)) {
        if ((t2 != 2) && ((t2 != 3) && (t2 != 4))) {
            if ((t2 != 8) && (t2 != 9)) {
                if (t2 != 5) {
                    if (t2 != 6) {
                        return t2;
                    }
                    *(unsigned char *)((a6 + 0x0)) = 0x20;
                    *(unsigned char *)((a6 + 0x1)) = 0x20;
                    return 0x20;
                }
                *(unsigned char *)((a6 + 0x0)) = 0x18;
                *(unsigned char *)((a6 + 0x1)) = 0x18;
                return 0x18;
            }
            return t2;
        }
        if ((t1 != 0) && (t1 != -1)) {
            *(unsigned char *)((a6 + 0x0)) = 0x18;
        } else {
            *(unsigned char *)((a6 + 0x0)) = 0xC;
        }
    } else {
        *(unsigned char *)((a6 + 0x0)) = 0xC;
    }
    *(unsigned char *)((a6 + 0x1)) = 0x18;
    return 0x18;
}


int kmtex_TextureSize_smallVQ(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t0 = *(int *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x10));
    t2 = kmtex_GetTextureLevel(t0, t1);
    if (((*(int *)((a4 + 0x18))) & 0x80000000) != 0) {
        t3 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        if ((unsigned int)((unsigned int)((unsigned int)t0 >> 1) >> 1) < (unsigned int)((unsigned int)((unsigned int)t1 >> 1) >> 1)) {
            t3 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        }
        t4 = (((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1));
        t5 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        t6 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        if ((unsigned int)t3 > (unsigned int)0x1) {
            t7 = t3;
            t3 = (((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1));
            t8 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
            t9 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
            for (;;) {
                t10 = (t8 * t9);
                t8 = ((unsigned int)t8 >> 1);
                t9 = ((unsigned int)t9 >> 1);
                t7 = ((unsigned int)t7 >> 1);
                t3 = (t3 + t10);
                if ((unsigned int)t7 <= (unsigned int)0x1) {
                    break;
                }
            }
            t4 = t3;
            t5 = t8;
            t6 = t9;
        }
        t3 = (t4 + (t5 * t6));
        if (t5 == t6) {
            t3 = (t4 + 0x2);
        }
        t4 = ((t3 + 0xA) + (*(int *)(((t2 << 2) + 0xC300178))));
    } else {
        t4 = ((((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1)) + (*(int *)(((t2 << 2) + 0xC30015C))));
    }
    return t4;
}
