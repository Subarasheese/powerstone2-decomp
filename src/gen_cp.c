/* Straight-line functions with calls and guards (batch gen_cp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o430_short { char p[0x430]; short v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c0185b4(void);
int FUN_0c02fd44(void);
int FUN_0c035bc6(int);
int FUN_0c05738e(int, int, int, int);
int FUN_0c05a5a8(int);
int FUN_0c05af54(int);
int FUN_0c08df42(int, int, int, int);
int FUN_0c09ae00(int, int, int, int);
int FUN_0c0a2b94(int, int, int, int);
int FUN_0c0aad54(int, int, int, int);
int FUN_0c0bae5c(int, int, int, int);
int FUN_0c165ed0(int, int, int);
int FUN_0c165fec(int, int, int);
int FUN_0c180a6c(int, int, int);
int FUN_0c187a88(int, int, int);
int res_model_register(int);
int FUN_0c0fe108(int a4, float f4);
int FUN_0c105cf4(void);
int FUN_0c106728(int a4);
int FUN_0c106736(int a4);
int FUN_0c106744(int a4);
int FUN_0c109c1c(int a4);
int FUN_0c109c2a(int a4);
int FUN_0c109c38(int a4);
int FUN_0c10b6f2(int a4);
int FUN_0c10b700(int a4);
int FUN_0c10b6e4(int a4);
int FUN_0c10b720(int a4);
int FUN_0c10de48(int a4);
int FUN_0c115e12(int a4);
int FUN_0c115e84(int a4);
int FUN_0c115fd2(int a4);
int FUN_0c163670(int a4, int a5, int a6);
int FUN_0c16957c(int a4, int a5, int a6);
int FUN_0c16af78(int a4, int a5, int a6);
int FUN_0c166190(int a4, int a5, int a6);
int FUN_0c01d262(void);
int FUN_0c01d26e(void);
void FUN_0c029c9e(void);
int FUN_0c024396(void);
int FUN_0c02c95e(void);
int FUN_0c02da2e(void);
int FUN_0c030436(void);
int FUN_0c02fddc(void);
int FUN_0c036908(void);
int FUN_0c03e5f4(int a4, float f4);
int FUN_0c04331a(void);
int FUN_0c052364(int a4, int a5);
int FUN_0c052c3e(int a4);
int FUN_0c0573c0(int a4, int a5, int a6);
int FUN_0c0573cc(int a4, int a5, int a6);
int FUN_0c05af1a(int a4);
int FUN_0c05b00c(void);
int FUN_0c074768(int a4);
int FUN_0c083582(int a4, int a5);
int FUN_0c08dfe0(int a4, int a5, int a6, int a7);
int FUN_0c08dfa0(int a4, int a5, int a6, int a7);
int FUN_0c095148(int a4, int a5, int a6, int a7);
int FUN_0c09814c(int a4, int a5, int a6, int a7);
int FUN_0c09ae86(int a4, int a5, int a6, int a7);
int FUN_0c09ae60(int a4, int a5, int a6, int a7);
int FUN_0c0a2be8(int a4, int a5, int a6, int a7);
int FUN_0c0aadc2(int a4, int a5, int a6, int a7);
int FUN_0c0ae1ec(int a4, int a5, int a6, int a7);
int FUN_0c0aad82(int a4, int a5, int a6, int a7);
int FUN_0c0a2bc2(int a4, int a5, int a6, int a7);
int FUN_0c0b9176(int a4, int a5, int a6, int a7);
int FUN_0c0bb090(int a4, int a5, int a6, int a7);
int FUN_0c0bae8a(int a4, int a5, int a6, int a7);
int FUN_0c0f2ad4(int a4, int a5);
int FUN_0c100660(void);
int FUN_0c100672(void);
int FUN_0c100684(void);
int FUN_0c100696(void);
int FUN_0c100706(void);
int FUN_0c1064d8(void);
int FUN_0c1064e4(void);
int FUN_0c1064f0(void);
int FUN_0c1064fc(void);
int FUN_0c11c8b2(void);
int FUN_0c016226(void);
int FUN_0c016230(void);
int FUN_0c01623a(void);
void FUN_0c0169c2(void);

int FUN_0c0fe108(int a4, float f4)
{
    (((struct oBC_float *)(a4))->v) = f4;
    (((struct oB8_float *)(a4))->v) = f4;
    (((struct oB4_float *)(a4))->v) = f4;
    return 0xB4;
}

int FUN_0c105cf4(void)
{
    return ((((unsigned short)(*(short *)0xC542B88) == 1)) ? 1 : 0);
}

int FUN_0c106728(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c106736(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x2;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c106744(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x3;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c109c1c(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c109c2a(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x2;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c109c38(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x63;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c10b6f2(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c10b700(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x2;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c10b6e4(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c10b720(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x63;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c10de48(int a4)
{
    (((struct o15_uchar *)(a4))->v) = 0x4;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c115e12(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x63;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c115e84(int a4)
{
    return ((((int)(*(int *)(((a4 << 2) + 0xC474104))) > 0)) ? 1 : 0);
}

int FUN_0c115fd2(int a4)
{
    register int t1;

    t1 = *(signed char *)((0xC473A3C + ((*(short *)((a4 + 0x1C))) - 1)));
    *(unsigned short *)((a4 + 0x1E)) = (unsigned char)t1;
    return (unsigned char)t1;
}

int FUN_0c163670(int a4, int a5, int a6)
{
    (((struct o41C_uchar *)(a4))->v) = a5;
    *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
    return a6;
}

int FUN_0c16957c(int a4, int a5, int a6)
{
    (((struct o41C_uchar *)(a4))->v) = a5;
    *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
    return a6;
}

int FUN_0c16af78(int a4, int a5, int a6)
{
    (((struct o41C_uchar *)(a4))->v) = a5;
    *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
    return a6;
}

int FUN_0c166190(int a4, int a5, int a6)
{
    if ((*(int *)((a4 + 0x10))) == 0) {
        return FUN_0c165ed0(a4, a5, a6);
    }
    return FUN_0c165fec(a4, a5, a6);
}

int FUN_0c01d262(void)
{
    return FUN_0c187a88(0xC30AFA0, 0xC83BBD4, 0x754);
}

int FUN_0c01d26e(void)
{
    return FUN_0c187a88(0xC83BBD4, 0xC30AFA0, 0x754);
}

void FUN_0c029c9e(void)
{
    (((struct o6_uchar *)0xC30985B)->v) = 0x0;
    (((struct o0_uchar *)0xC30985B)->v) = 0x0;
}

int FUN_0c024396(void)
{
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    return FUN_0c0185b4();
}

int FUN_0c02c95e(void)
{
    (((struct o0_uchar *)0xC541F40)->v) = 0x0;
    (((struct o1_uchar *)0xC541F40)->v) = 0x0;
    (((struct o2_uchar *)0xC541F40)->v) = 0x0;
    return 0x0;
}

int FUN_0c02da2e(void)
{
    return ((((*(int *)0xC3BA8E0) == 0)) ? 1 : 0);
}

int FUN_0c030436(void)
{
    *(volatile signed char *)0xC5429B5;
    return 0x1;
}

int FUN_0c02fddc(void)
{
    return (FUN_0c02fd44());
}


int FUN_0c03e5f4(int a4, float f4)
{
    *(float *)(((a4 * 0x4C) + 0xC542498)) = f4;
    return 0xC542498;
}

int FUN_0c04331a(void)
{
    (((struct o0_uchar *)0xC541F41)->v) = 0x1;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    return 0x0;
}

int FUN_0c052364(int a4, int a5)
{
    *(unsigned int *)(((a4 * 0x2F8) + 0xC541110)) = a5;
    return 0xC541110;
}

int FUN_0c052c3e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    *(unsigned int *)((a4 + 0x18)) = 0x3E8;
    return (t0 + 0x1);
}

int FUN_0c0573c0(int a4, int a5, int a6)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a6;
    return FUN_0c05738e(a4, a5, 0x0, (*(signed char *)(((int)stk + 0))));
}

int FUN_0c0573cc(int a4, int a5, int a6)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a6;
    return FUN_0c05738e(a4, a5, 0x1, (*(signed char *)(((int)stk + 0))));
}

int FUN_0c05af1a(int a4)
{
    return FUN_0c180a6c(a4, 0x1300A0, 0x0);
}

int FUN_0c05b00c(void)
{
    FUN_0c05af54(0x1);
    return FUN_0c05a5a8(0x1);
}

int FUN_0c074768(int a4)
{
    return ((unsigned short)((((struct o430_short *)(a4))->v)) & 0x380);
}

int FUN_0c083582(int a4, int a5)
{
    (((struct o3715_uchar *)(a4))->v) = 0x13;
    (((struct o17_uchar *)(a4))->v) = a5;
    return 0x17;
}

int FUN_0c08dfe0(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC08DFAC))(a4, a5, a6, a7);
}

int FUN_0c08dfa0(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return FUN_0c08df42(a4, a5, a6, a7);
}

int FUN_0c095148(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC095114))(a4, a5, a6, a7);
}

int FUN_0c09814c(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC098118))(a4, a5, a6, a7);
}

int FUN_0c09ae86(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC09AE6C))(a4, a5, a6, a7);
}

int FUN_0c09ae60(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return FUN_0c09ae00(a4, a5, a6, a7);
}

int FUN_0c0a2be8(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC0A2BCE))(a4, a5, a6, a7);
}

int FUN_0c0aadc2(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC0AAD8E))(a4, a5, a6, a7);
}

int FUN_0c0ae1ec(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC0AE1B8))(a4, a5, a6, a7);
}

int FUN_0c0aad82(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return FUN_0c0aad54(a4, a5, a6, a7);
}

int FUN_0c0a2bc2(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return FUN_0c0a2b94(a4, a5, a6, a7);
}

int FUN_0c0b9176(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC0B9142))(a4, a5, a6, a7);
}

int FUN_0c0bb090(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC0BAEC4))(a4, a5, a6, a7);
}

int FUN_0c0bae8a(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return FUN_0c0bae5c(a4, a5, a6, a7);
}

int FUN_0c0f2ad4(int a4, int a5)
{
    (((struct o15_uchar *)(a4))->v) = a5;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c100660(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x1;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int FUN_0c100672(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x2;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int FUN_0c100684(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x3;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int FUN_0c100696(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x4;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int FUN_0c100706(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x5;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int FUN_0c1064d8(void)
{
    (((struct o0_uchar *)0xC541F45)->v) = 0x1;
    (((struct o1_uchar *)0xC541F45)->v) = 0x0;
    return 0x0;
}

int FUN_0c1064e4(void)
{
    (((struct o0_uchar *)0xC541F45)->v) = 0x3;
    (((struct o1_uchar *)0xC541F45)->v) = 0x0;
    return 0x0;
}

int FUN_0c1064f0(void)
{
    (((struct o0_uchar *)0xC541F45)->v) = 0x4;
    (((struct o1_uchar *)0xC541F45)->v) = 0x0;
    return 0x0;
}

int FUN_0c1064fc(void)
{
    (((struct o0_uchar *)0xC541F45)->v) = 0x5;
    (((struct o1_uchar *)0xC541F45)->v) = 0x0;
    return 0x0;
}

int FUN_0c11c8b2(void)
{
    (((struct o14_uchar *)((*(int *)0xC473C44)))->v) = 0x63;
    return 0x14;
}

int FUN_0c016226(void)
{
    return ((unsigned char)(*(signed char *)0xC30EF9F) & 0x44);
}

int FUN_0c016230(void)
{
    return ((unsigned char)(*(signed char *)0xC30EF9F) & 0x22);
}

int FUN_0c01623a(void)
{
    return ((unsigned char)(*(signed char *)0xC30EF9F) & 0x11);
}

void FUN_0c0169c2(void)
{
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x4)) = 0xFFFFFFFF;
}
