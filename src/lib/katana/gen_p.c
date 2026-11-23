/* Straight-line functions with calls and guards (batch gen_p): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10CC_int { char p[0x10CC]; int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1D0_uint { char p[0x1D0]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_short { char p[0x30]; short v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o38_int { char p[0x38]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o90_short { char p[0x90]; short v; };
struct o90_uchar { char p[0x90]; unsigned char v; };
struct o9A_short { char p[0x9A]; short v; };
struct oB2_short { char p[0xB2]; short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oFCC_int { char p[0xFCC]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_int { char p[0xFD8]; int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_int { char p[0xFDC]; int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
int copy_device(void);
int FUN_0c185600(void);
int FUN_0c187990(int);
int FUN_0c187a88(int, int, int);
int FUN_0c18da58(void);
int FUN_0c18dae8(int, int, int);
int FUN_0c18dcf2(int, int);
int FUN_0c18dd02(int);
int FUN_0c18dd06(int, int);
int FUN_0c18df08(int);
int FUN_0c18df2c(int, int, int);
int FUN_0c18f014(int, int, int, int, int, int);
int FUN_0c18fbaa(int);
int FUN_0c18fd0c(void);
int FUN_0c18fd60(int);
int FUN_0c18fe5c(void);
int FUN_0c18fea6(int);
int FUN_0c193da4(void);
int FUN_0c193dae(void);
int FUN_0c194178(int, int, int);
int FUN_0c1948e0(int, int, int);
int FUN_0c198c42(int, int, int);
int FUN_0c19c678(int, int, int);
int FUN_0c19c9fc(int);
int FUN_0c19d2b4(int, int, int, int);
int FUN_0c1a02cc(int, int, int);
int FUN_0c1a03b2(int, int);
int FUN_0c1a14c0(int);
int FUN_0c1a14dc(int, int, int);
int FUN_0c1a1574(int, int);
int FUN_0c1a29ec(int, int);
extern int FUN_0c2bc7e4();
int FUN_0c2cc320(void);
int FUN_0c2cf554(int);
int FUN_0c2cf6f6(int);
int FUN_0c2cf7e0(void);
int FUN_0c2cfd24(Stk1, Stk1);
int FUN_0c2d16b8(int, int);
int FUN_0c2d5918(int, int, int);
int FUN_0c2d6428(int);
int FUN_0c2d65ae(int);
int FUN_0c2d663a(int);
int FUN_0c2e5952(int);
int FUN_0c2e5ea0(int);
int FUN_0c2e6310(void);
int FUN_0c2e638e(void);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int);
int FUN_0c2e81dc(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2ec8f4(void);
extern int FUN_0c2f344a();
int FUN_0c2f35d6(void);
int FUN_0c2f37ce(int, int);
int FUN_0c2f3bc8(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int kmiFLWCTRLFindFreeNBuf(void);
int kmiFLWCTRLFindVacantQueue(void);
int kmiFLWCTRLLockNBuf(int);
int kmyRequestCallback(int);
int kmySetupTA(int);
int memset(int, int, int);
extern int mpdrv_frame_send();
int mpdrv_insertnop(int);
int mpdrv_v2p(int);
int strlen(int);
int thunk_FUN_0c2e3f7c(void);
int FUN_0c2d0c0c(int a4);
int FUN_0c19ca94(int a4, int a5, int a6);
int kmiFLWCTRLGetRenderPacket(int a4, int a5);
int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c2e55e8(void);
int FUN_0c18f9a8(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c2f4812(int a4, int a5, int a6, int a7);
int FUN_0c1868e0(int a4, int a5, int a6);
int FUN_0c2eba86(void);
int FUN_0c2bc534(int a4, int a5, int a6, int a7);
int FUN_0c2d079c(int a4);
int FUN_0c2f3268(void);
int FUN_0c198134(int a4, int a5, int a6, int a7);
int FUN_0c2cf374(int a4);
int FUN_0c18dd2a(int a4, int a5, int a6, int a7);

int FUN_0c2d0c0c(int a4)
{

    register int R2;
    register int R3;
    register int R5;
    register int R8;
    register int R9;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_4 = a4;
    v0_0 = R9;
    v0_1 = R8;
    FUN_0c2d663a(0x0);
    v0_3 = (0x3);
    v0_0 = (0xC2EC430);
    v0_0 = (0xC8D2698);
    v0_1 = (0xC8D25F0);
    v0_2 = (0xC8D2634);
    R8 = (0x0);
    R9 = (0x0);
    L_C2D0CBE:;
    if (((unsigned char)v0_3 != 0)) goto L_C2D0C34;
    v0_3 = (0xC2D65AE);
    if (((unsigned char)R8 == 0)) goto L_C2D0CFC;
    v0_4 = (0x44C);
    L_C2D0D7A:;
    FUN_0c2d65ae(v0_4);
    v0_0 = (0x0);
    L_C2D0E2A:;
    return v0_0;
    L_C2D0CFC:;
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned short *)((v0_2 + 0x6)) = (unsigned char)(*(signed char *)(((v0_3 + 0x58) + 0x0)));
    *(unsigned short *)((v0_2 + 0x6)) = ((*(short *)((v0_2 + 0x6))) | ((unsigned char)(*(signed char *)((((v0_3 + 0x58) + 0x4) + 0x0))) << 8));
    *(unsigned short *)((v0_2 + 0x4)) = (unsigned char)(*(signed char *)(((((v0_3 + 0x58) + 0x4) + 0x4) + 0x0)));
    *(unsigned short *)((v0_2 + 0x4)) = ((*(short *)((v0_2 + 0x4))) | ((unsigned char)(*(signed char *)((((((v0_3 + 0x58) + 0x4) + 0x4) + 0x4) + 0x0))) << 8));
    *(unsigned char *)((v0_2 + 0x8)) = (*(signed char *)((((*(int *)((v0_1 + 0x0))) + 0x50) + 0x4)));
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned short *)((v0_2 + 0xA)) = (unsigned char)(*(signed char *)(((v0_3 + 0x48) + 0x0)));
    *(unsigned short *)((v0_2 + 0xA)) = ((*(short *)((v0_2 + 0xA))) | ((unsigned char)(*(signed char *)((((v0_3 + 0x48) + 0x4) + 0x0))) << 8));
    *(unsigned short *)((v0_2 + 0xC)) = (unsigned char)(*(signed char *)(((*(int *)((v0_1 + 0x0))) + 0x0)));
    *(unsigned short *)((v0_2 + 0xC)) = ((*(short *)((v0_2 + 0xC))) | ((unsigned char)(*(signed char *)((((*(int *)((v0_1 + 0x0))) + 0x44) + 0x0))) << 8));
    *(volatile signed char *)(((0x40 + (*(int *)((v0_1 + 0x0)))) + 0x0));
    L_C2D0D82:;
    v0_4 = *(int *)((v0_1 + 0x0));
    v0_3 = ((*(signed char *)(((v0_4 + 0x78) + 0x0))) & 8) == 0;
    v0_4 = (v0_4);
    if (v0_3) goto L_C2D0D6C;
    *(unsigned short *)((v0_2 + 0x16)) = (unsigned char)(*(signed char *)(((v0_4 + 0x48) + 0x0)));
    *(unsigned short *)((v0_2 + 0x16)) = ((*(short *)((v0_2 + 0x16))) | ((unsigned char)(*(signed char *)((((v0_4 + 0x48) + 0x4) + 0x0))) << 8));
    *(unsigned short *)((v0_2 + 0x14)) = (unsigned char)(*(signed char *)(((((v0_4 + 0x48) + 0x4) + 0x4) + 0x0)));
    *(unsigned short *)((v0_2 + 0x14)) = ((*(short *)((v0_2 + 0x14))) | ((unsigned char)(*(signed char *)((((((v0_4 + 0x48) + 0x4) + 0x4) + 0x4) + 0x0))) << 8));
    *(unsigned short *)((v0_2 + 0x12)) = (unsigned char)(*(signed char *)(((((((v0_4 + 0x48) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0)));
    *(unsigned short *)((v0_2 + 0x12)) = ((*(short *)((v0_2 + 0x12))) | ((unsigned char)(*(signed char *)((((((((v0_4 + 0x48) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0))) << 8));
    *(unsigned short *)((v0_2 + 0x10)) = (unsigned char)(*(signed char *)(((((((((v0_4 + 0x48) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0)));
    *(unsigned short *)((v0_2 + 0x10)) = ((*(short *)((v0_2 + 0x10))) | ((unsigned char)(*(signed char *)((((((((((v0_4 + 0x48) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0))) << 8));
    *(unsigned short *)((v0_2 + 0xE)) = (unsigned char)(*(signed char *)(((((((((((v0_4 + 0x48) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0)));
    *(unsigned short *)((v0_2 + 0xE)) = ((*(short *)((v0_2 + 0xE))) | ((unsigned char)(*(signed char *)((((((((((((v0_4 + 0x48) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0))) << 8));
    *(unsigned short *)((v0_2 + 0x18)) = (unsigned char)(*(signed char *)(((*(int *)((v0_1 + 0x0))) + 0x0)));
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned short *)((v0_2 + 0x18)) = ((*(short *)((v0_2 + 0x18))) | ((unsigned char)(*(signed char *)(((v0_3 + 0x44) + 0x0))) << 8));
    *(volatile signed char *)(((0x40 + (*(int *)((v0_1 + 0x0)))) + 0x0));
    v0_4 = ((v0_3 + 0x44));
    L_C2D0E1E:;
    v0_1 = (signed char)(FUN_0c2ec430((*(int *)((v0_0 + 0x0))))) == 0;
    if (v0_1) goto L_C2D0E1E;
    v0_0 = (0x1);
    goto L_C2D0E2A;
    L_C2D0D6C:;
    v0_3 = (signed char)(FUN_0c2ec430((*(int *)((v0_0 + 0x0))))) == 0;
    if (v0_3) goto L_C2D0D82;
    v0_2 = (0x460);
    v0_4 = (0x460);
    goto L_C2D0D7A;
    L_C2D0C34:;
    FUN_0c2d6428(0x1);
    FUN_0c2ec410(0xC8D2698, 0x4);
    L_C2D0C42:;
    v0_4 = (signed char)(FUN_0c2ec430((*(int *)((v0_0 + 0x0))))) == 0;
    if (v0_4) goto L_C2D0C42;
    FUN_0c2d6428(0x0);
    FUN_0c2ec410(0xC8D2698, 0xF);
    L_C2D0C5A:;
    v0_4 = (signed char)(FUN_0c2ec430((*(int *)((v0_0 + 0x0))))) == 0;
    if (v0_4) goto L_C2D0C68;
    R8 = (0x1);
    L_C2D0CAA:;
    v0_3 = ((v0_3 - 1));
    if (((unsigned char)R8 == 0)) goto L_C2D0CBC;
    if (((unsigned char)v0_3 == 0)) goto L_C2D0CBE;
    R8 = (R9);
    goto L_C2D0CBE;
    L_C2D0CBC:;
    v0_3 = (R9);
    goto L_C2D0CBE;
    L_C2D0C68:;
    v0_4 = *(int *)((v0_1 + 0x0));
    *(unsigned short *)((v0_2 + 0x2)) = (unsigned char)(*(signed char *)(((v0_4 + 0x68) + 0x0)));
    *(unsigned short *)((v0_2 + 0x2)) = ((*(short *)((v0_2 + 0x2))) | ((unsigned char)(*(signed char *)((((v0_4 + 0x68) + 0x4) + 0x0))) << 8));
    *(unsigned short *)((v0_2 + 0x0)) = (unsigned char)(*(signed char *)(((((v0_4 + 0x68) + 0x4) + 0x4) + 0x0)));
    *(unsigned short *)((v0_2 + 0x0)) = ((*(short *)((v0_2 + 0x0))) | ((unsigned char)(*(signed char *)((((((v0_4 + 0x68) + 0x4) + 0x4) + 0x4) + 0x0))) << 8));
    v0_5 = (unsigned short)(*(short *)((v0_2 + 0x0))) == 0xEA3C;
    v0_4 = (((((v0_4 + 0x68) + 0x4) + 0x4) + 0x4));
    if (v0_5) goto L_C2D0CAA;
    v0_4 = (unsigned short)(*(short *)((v0_2 + 0x2))) != 0x5536;
    if (v0_4) goto L_C2D0C5A;
    goto L_C2D0CAA;
}


int kmiFLWCTRLGetRenderPacket(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((((((struct o0_int *)0xC8BF120)->v)) == 4) && (t0 = *(int *)0xC8BE7D0, t0 != 0)) {
        (((struct o8_uint *)0xC8BFFC4)->v) = 0x1;
        for (;;) {
            t0 = kmiFLWCTRLFindVacantQueue();
            if (t0 != 0) {
                break;
            }
            kmyRequestCallback(0x7);
        }
        t1 = t0;
        t2 = t0;
    } else {
        (((struct o8_uint *)0xC8BFFC4)->v) = 0x0;
        for (;;) {
            t0 = kmiFLWCTRLFindVacantQueue();
            if (t0 != 0) {
                break;
            }
            kmyRequestCallback(0x7);
        }
        t1 = t0;
        t2 = t0;
    }
    t0 = *(int *)(((*(int *)((a4 + 0x8))) + 0xC));
    *(unsigned int *)((t2 + 0x1C)) = 0xFFFFFFFF;
    *(unsigned int *)((t2 + 0x20)) = 0xFFFFFFFF;
    *(unsigned int *)((t2 + 0x24)) = 0xFFFFFFFF;
    (((struct o0_uint *)0xC8BFF68)->v) = a5;
    if (a5 == 0) {
        t3 = t1;
        for (;;) {
            t1 = (((struct o10_int *)0xC8BF120)->v);
            if (t1 != 0) {
                (((struct o10_uint *)0xC8BF120)->v) = 0x0;
                (((struct o1C_uint *)0xC8BF120)->v) = 0x1;
                t3 = ((((struct o4_int *)0xC8BF120)->v));
                t3 = (t3 & (~t1));
                (((struct o4_uint *)0xC8BF120)->v) = t3;
                (((struct o1C_uint *)0xC8BF120)->v) = 0x0;
            }
            if ((((unsigned int)((((struct o4_int *)0xC8BF120)->v)) << (int)(-t0)) & 0x1) == 0) {
                break;
            }
            t3 = (kmyRequestCallback(0x7));
        }
        (((struct o1C_uint *)0xC8BF120)->v) = 0x1;
        (((struct o4_uint *)0xC8BF120)->v) = (((((struct o4_int *)0xC8BF120)->v)) | ((int)0x1 << (int)t0));
        (((struct o1C_uint *)0xC8BF120)->v) = 0x0;
        *(unsigned int *)((t2 + 0x14)) = 0x1;
        *(unsigned int *)((t2 + 0x1C)) = t0;
        *(volatile int *)0xC8BEFD4;
    } else {
        t1 = *(int *)0xC8BEFD4;
        if (t1 == 1) {
            *(volatile int *)0xC8BF0FC;
            t3 = 0x954;
            for (;;) {
                t4 = (((struct o10_int *)0xC8BF120)->v);
                if (t4 != 0) {
                    (((struct o10_uint *)0xC8BF120)->v) = 0x0;
                    (((struct o1C_uint *)0xC8BF120)->v) = 0x1;
                    t3 = ((((struct o4_int *)0xC8BF120)->v));
                    t3 = (t3 & (~t4));
                    (((struct o4_uint *)0xC8BF120)->v) = t3;
                    (((struct o1C_uint *)0xC8BF120)->v) = 0x0;
                }
                if ((((unsigned int)((((struct o4_int *)0xC8BF120)->v)) << (int)(-t0)) & 0x1) == 0) {
                    break;
                }
                t3 = (kmyRequestCallback(0x7));
            }
        } else {
            t3 = t1;
            for (;;) {
                t1 = (((struct o10_int *)0xC8BF120)->v);
                if (t1 != 0) {
                    (((struct o10_uint *)0xC8BF120)->v) = 0x0;
                    (((struct o1C_uint *)0xC8BF120)->v) = 0x1;
                    t3 = ((((struct o4_int *)0xC8BF120)->v));
                    t3 = (t3 & (~t1));
                    (((struct o4_uint *)0xC8BF120)->v) = t3;
                    (((struct o1C_uint *)0xC8BF120)->v) = 0x0;
                }
                if ((((unsigned int)((((struct o4_int *)0xC8BF120)->v)) << (int)(-t0)) & 0x1) == 0) {
                    break;
                }
                t3 = (kmyRequestCallback(0x7));
            }
        }
        (((struct o1C_uint *)0xC8BF120)->v) = 0x1;
        (((struct o4_uint *)0xC8BF120)->v) = (((((struct o4_int *)0xC8BF120)->v)) | ((int)0x1 << (int)t0));
        (((struct o1C_uint *)0xC8BF120)->v) = 0x0;
        *(unsigned int *)((t2 + 0x1C)) = t0;
        for (;;) {
            t0 = kmiFLWCTRLFindFreeNBuf();
            if (t0 != -1) {
                break;
            }
            kmyRequestCallback(0x7);
        }
        kmiFLWCTRLLockNBuf(t0);
        *(unsigned int *)((t2 + 0x20)) = t0;
        *(unsigned int *)((t2 + 0x3C)) = (*(int *)(((t0 << 2) + 0xC8BFF6C)));
        *(unsigned int *)((t2 + 0x14)) = 0x3;
        kmySetupTA((*(int *)((t2 + 0x3C))));
    }
    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = FUN_0c2cc320();
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x10)) = t2;
        *(unsigned int *)((t2 + 0xC)) = t1;
    } else {
        *(unsigned int *)((t2 + 0xC)) = 0x0;
    }
    *(unsigned int *)((t2 + 0x10)) = 0x0;
    *(unsigned int *)((t2 + 0x4)) = (((((struct o0_int *)0xC8BFFC4)->v)) & 0x7FFFFFFF);
    *(unsigned int *)((t2 + 0x0)) = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    (((struct o0_uint *)0xC8BFFC4)->v) = (((((struct o0_int *)0xC8BFFC4)->v)) + 0x1);
    (((struct o2C_uint *)0xC8BFF68)->v) = t2;
    return 0x0;
}

int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[7];
    register int t2;
    register int t3;
    register int t17;
    register int t21;
    register int t22;
    register int t23;
    register int t30;
    register int t42;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    register int t53;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t68;
    register int t69;
    register int t70;
    register int t81;
    register int t82;
    register int t83;
    register int t84;
    register int t99;
    register int t5;
    int t6;
    register int t7;
    register int t61;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = ((a7 + a9) + 0x3);
    *(unsigned char *)(((int)stk + 16)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0xC3007E8)));
    t2 = *(signed char *)(((((int)stk + 4) + 0xC) + 0x0));
    t3 = *(int *)0xC8D4D84;
    if (((int)((((struct o10CC_int *)(t3))->v)) > 0) && ((t5 = (((struct oFD8_int *)(t3))->v), (int)t5 > 0) && (t6 = (((struct oFCC_int *)(t3))->v), t7 = *(int *)((t6 + 0x0)), (((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) == ((short)((unsigned int)t7 >> 16) & 0x3)))) {
        mpdrv_insertnop(((((struct o10CC_int *)(t3))->v)));
    }
    t17 = *(int *)0xC8D4D84;
    (((struct oFCC_uint *)(t17))->v) = (((((struct oFCC_int *)(t17))->v)) + (((((struct oFD8_int *)(t17))->v)) << 2));
    t21 = (((struct oFCC_int *)((*(int *)0xC8D4D84)))->v);
    *(unsigned int *)(((int)stk + 24)) = (unsigned char)(a7 + a9);
    *(unsigned int *)((t21 + 0x0)) = (((((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) << 16) | (unsigned char)(a7 + a9));
    *(int *)((int)stk + 0) = (t21 + 0x4);
    t22 = *(int *)0xC8D4D84;
    t23 = (((struct o10B4_int *)(t22))->v);
    *(unsigned int *)(((t21 + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)((((*(int *)(((int)stk + 4))) << 2) + ((t22 + 0xFE8) + (((((t23 << 1) + t23) << 2) << 2) << 1)))))));
    t30 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (unsigned char)(*(signed char *)(((int)stk + 20)));
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((int)stk + 16)));
    if (((((struct o10C4_int *)((*(int *)0xC8D4D84)))->v)) == 1) {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = (((((((*(int *)(((int)stk + 8))) << 16) << 8) & 0xFF000000) | (((*(int *)(((int)stk + 4))) << 16) & 0xFF0000)) | (((unsigned char)(t2 & 0xC0) << 8) & 0xFF00)) | (*(int *)(((int)stk + 24))));
        t42 = (((t21 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t37 = t30;
            t38 = 0x0;
            t39 = (((t21 + 0x4) + 0x4) + 0x4);
            for (;;) {
                t40 = *(int *)((t37 + 0x0));
                t37 = (t37 + 0x4);
                t38 = (t38 + 0x1);
                *(unsigned int *)((t39 + 0x0)) = t40;
                t39 = (t39 + 0x4);
                if ((int)t38 >= (int)a7) {
                    break;
                }
            }
            t42 = t39;
        }
        t61 = t42;
    } else {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = ((((((unsigned char)(t2 & 0xC0) << 16) & 0xFF0000) | (((*(int *)(((int)stk + 4))) << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (*(int *)(((int)stk + 8))));
        t53 = (((t21 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t47 = t30;
            t48 = 0x0;
            t49 = (((t21 + 0x4) + 0x4) + 0x4);
            for (;;) {
                t50 = *(int *)((t47 + 0x0));
                t47 = (t47 + 0x4);
                t48 = (t48 + 0x1);
                *(unsigned int *)((t49 + 0x0)) = ((((((t50 << 16) << 8) & 0xFF000000) | ((t50 << 8) & 0xFF0000)) | (((int)t50 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t50 >> 16) >> 8));
                t49 = (t49 + 0x4);
                if ((int)t48 >= (int)a7) {
                    break;
                }
            }
            t53 = t49;
        }
        t61 = t53;
    }
    if (((((struct o10C4_int *)((*(int *)0xC8D4D84)))->v)) == 1) {
        if ((int)a9 > 0) {
            t68 = a8;
            t69 = 0x0;
            t70 = t61;
            for (;;) {
                t69 = (t69 + 0x1);
                *(unsigned int *)((t70 + 0x0)) = ((((((*(signed char *)((t68 + 0x1))) << 16) & 0xFF0000) | (((*(signed char *)((t68 + 0x2))) << 8) & 0xFF00)) | ((((*(signed char *)((t68 + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)((t68 + 0x3))));
                t70 = (t70 + 0x4);
                t68 = (t68 + 0x4);
                if ((int)t69 >= (int)a9) {
                    break;
                }
            }
        }
    } else {
        if ((int)a9 > 0) {
            t81 = 0x0;
            t82 = a8;
            t83 = t61;
            for (;;) {
                t84 = *(int *)((t82 + 0x0));
                t82 = (t82 + 0x4);
                t81 = (t81 + 0x1);
                *(unsigned int *)((t83 + 0x0)) = t84;
                t83 = (t83 + 0x4);
                if ((int)t81 >= (int)a9) {
                    break;
                }
            }
        }
    }
    (((struct oFD8_uint *)((*(int *)0xC8D4D84)))->v) = (*(int *)(((int)stk + 12)));
    t99 = *(int *)0xC8D4D84;
    (((struct oFDC_uint *)(t99))->v) = (((((struct oFDC_int *)(t99))->v)) + ((*(int *)(((int)stk + 12))) << 2));
    return 0x0;
}


int FUN_0c18f9a8(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[3];

    register int R2;
    register int R3;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_5 = a4;
    v0_2 = a5;
    v0_4 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    v0_2 = (((short)(a8 >> 0)));
    v0_4 = (v0_4);
    v0_0 = (v0_5);
    v0_5 = (v0_1);
    if (((unsigned short)v0_1 != 0)) goto L_C18F9D2;
    *(unsigned short *)((v0_0 + 0xA)) = v0_4;
    L_C18F9DA:;
    v0_3 = FUN_0c18fd0c();
    v0_1 = (v0_3);
    if ((v0_3 != 0)) goto L_C18F9F6;
    FUN_0c18fea6(v0_0);
    v0_3 = FUN_0c18fd0c();
    v0_1 = (v0_3);
    if ((v0_3 != 0)) goto L_C18F9F6;
    L_C18FB2A:;
    v0_0 = (0x0);
    L_C18FB96:;
    return v0_0;
    L_C18F9F6:;
    *(unsigned short *)((v0_1 + 0x8)) = v0_5;
    *(unsigned short *)((v0_1 + 0xA)) = v0_2;
    FUN_0c18dcf2((((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0))));
    v0_3 = ((unsigned short)v0_2);
    v0_6 = (0xC198C42);
    if (((unsigned short)v0_5 != 0)) goto L_C18FA3C;
    v0_5 = (FUN_0c198c42(v0_1, ((unsigned short)v0_4 + v0_3), 0x2)) == 0;
    if (v0_5) goto L_C18FA36;
    FUN_0c18fea6(v0_0);
    v0_3 = (FUN_0c198c42(v0_1, ((unsigned short)v0_4 + v0_3), 0x2)) == 0;
    if (v0_3) goto L_C18FA36;
    goto L_C18FB2A;
    L_C18FA36:;
    v0_4 = ((v0_4 + v0_2));
    L_C18FA5A:;
    FUN_0c18dae8(v0_1, (((int)stk + 0) + 0x4), v0_4);
    *(unsigned int *)((v0_1 + 0xC)) = 0x0;
    v0_3 = (0x0);
    if (((*(int *)((v0_0 + 0x14))) != 0)) goto L_C18FA72;
    *(unsigned int *)((v0_0 + 0x18)) = v0_1;
    L_C18FA96:;
    *(unsigned int *)((v0_0 + 0x14)) = v0_1;
    L_C18FB00:;
    if (((*(signed char *)((v0_0 + 0xD))) != 0)) goto L_C18FB12;
    if ((((signed char)(a9 >> 0)) != 0)) goto L_C18FB2A;
    *(unsigned char *)((v0_0 + 0xD)) = 0x1;
    L_C18FB12:;
    v0_1 = (FUN_0c18fbaa(v0_0)) != 0;
    if (v0_1) goto L_C18FB2A;
    v0_2 = FUN_0c18da58();
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C18FB2E;
    FUN_0c18fe5c();
    goto L_C18FB2A;
    L_C18FB2E:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_3;
    *(unsigned int *)((v0_1 + 0x4)) = v0_3;
    v0_2 = (v0_3);
    v0_4 = ((*(int *)((v0_0 + 0x14))));
    v0_5 = (0xC187A88);
    L_C18FB90:;
    if ((v0_4 != 0)) goto L_C18FB3A;
    v0_0 = (v0_1);
    goto L_C18FB96;
    L_C18FB3A:;
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) + 0x1);
    *(unsigned int *)((v0_1 + 0x4)) = ((*(int *)((v0_1 + 0x4))) + (unsigned short)(*(short *)((v0_4 + 0xA))));
    *(unsigned short *)((((v0_1 + 0x8) + (((v0_2 << 1) + v0_2) << 2)) + 0x0)) = (*(short *)((v0_4 + 0xA)));
    FUN_0c187a88((((v0_1 + 0x8) + (((v0_2 << 1) + v0_2) << 2)) + 0x4), v0_4, 0x8);
    v0_3 = ((((v0_2 << 1) + v0_2) << 2));
    v0_5 = (v0_4);
    if ((v0_2 != 0)) goto L_C18FB8A;
    *(unsigned int *)((v0_1 + 0x4)) = ((*(int *)((v0_1 + 0x4))) + (unsigned short)(*(short *)((v0_0 + 0xA))));
    *(unsigned short *)((((v0_1 + 0x8) + v0_3) + 0x0)) = ((*(short *)((((v0_1 + 0x8) + v0_3) + 0x0))) + (*(short *)((v0_0 + 0xA))));
    L_C18FB8A:;
    v0_3 = *(int *)((v0_4 + 0xC));
    FUN_0c18fd60(v0_5);
    v0_2 = ((v0_2 + 0x1));
    v0_4 = (v0_3);
    goto L_C18FB90;
    L_C18FA72:;
    if (((unsigned int)(*(short *)((v0_1 + 0x8))) <= (unsigned int)(*(short *)(((*(int *)((v0_0 + 0x18))) + 0x8))))) goto L_C18FA86;
    *(unsigned int *)(((*(int *)((v0_0 + 0x18))) + 0xC)) = v0_1;
    *(unsigned int *)((v0_0 + 0x18)) = v0_1;
    goto L_C18FB00;
    L_C18FA86:;
    if (((unsigned int)(*(short *)((v0_1 + 0x8))) >= (unsigned int)(*(short *)(((*(int *)((v0_0 + 0x14))) + 0x8))))) goto L_C18FA9A;
    *(unsigned int *)((v0_1 + 0xC)) = (*(int *)((v0_0 + 0x14)));
    goto L_C18FA96;
    L_C18FA9A:;
    v0_2 = *(int *)((v0_0 + 0x14));
    v0_4 = (0xC18DF08);
    v0_5 = (v0_2);
    v0_2 = ((*(int *)((v0_2 + 0xC))));
    L_C18FAFC:;
    if ((v0_2 != 0)) goto L_C18FAC8;
    goto L_C18FB00;
    L_C18FAC8:;
    v0_6 = *(short *)((v0_1 + 0x8));
    v0_4 = ((unsigned short)v0_6);
    if (((int)(unsigned short)v0_6 <= (int)(unsigned short)(*(short *)((v0_5 + 0x8))))) goto L_C18FAE2;
    if (((int)v0_4 >= (int)(unsigned short)(*(short *)((v0_2 + 0x8))))) goto L_C18FAE2;
    *(unsigned int *)((v0_1 + 0xC)) = v0_2;
    *(unsigned int *)((v0_5 + 0xC)) = v0_1;
    goto L_C18FB00;
    L_C18FAE2:;
    if (((*(short *)((v0_1 + 0x8))) != (*(short *)((v0_5 + 0x8))))) goto L_C18FAF8;
    FUN_0c18df08(v0_1);
    FUN_0c18fd60(v0_1);
    goto L_C18FB00;
    L_C18FAF8:;
    v0_5 = ((*(int *)((v0_5 + 0xC))));
    v0_2 = ((*(int *)((v0_2 + 0xC))));
    goto L_C18FAFC;
    L_C18FA3C:;
    v0_4 = (FUN_0c198c42(v0_1, v0_3, 0x2)) == 0;
    if (v0_4) goto L_C18FA58;
    FUN_0c18fea6(v0_0);
    v0_3 = (FUN_0c198c42(v0_1, v0_3, 0x2)) != 0;
    if (v0_3) goto L_C18FB2A;
    L_C18FA58:;
    v0_4 = (v0_2);
    goto L_C18FA5A;
    L_C18F9D2:;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + (unsigned short)v0_4);
    goto L_C18F9DA;
}

int FUN_0c2f4812(int a4, int a5, int a6, int a7)
{
    register int t91;
    register int t16;
    int t17;
    register int t19;
    int t22;
    register int t52;
    int t53;
    register int t14;

    (((struct o28_uchar *)0xC8DFF6C)->v) = 0x0;
    t91 = 0x0;
    if (((((struct o4_short *)0xC8DFFF8)->v)) == 0) {
    } else {
        (((struct o3_uchar *)0xC8DFF6C)->v) = 0x0;
        *(unsigned int *)0xC8DFD50 = ((((struct o0_int *)0xC8DFFF8)->v));
        (((struct o0_ushort *)0xC8DFF6C)->v) = ((((struct o4_short *)0xC8DFFF8)->v));
        (((struct o27_uchar *)0xC8DFF6C)->v) = ((((int)((unsigned char)(*(signed char *)(((*(int *)0xC8DFD50) + 0x0))) & 0x2) > (int)0x1)) ? 1 : 0);
        (((struct o27_uchar *)0xC8DFF6C)->v) = ((*(signed char *)0xC8DFF93) ^ (*(signed char *)0xC8DFFA6));
        if (((unsigned char)(*(signed char *)(((*(int *)0xC8DFD50) + 0x0))) & 0x1) != 0) {
            *(unsigned int *)0xC8DFD50 = ((*(int *)0xC8DFD50) + 0x1);
            t14 = (((((struct o0_short *)0xC8DFF6C)->v)) - 1);
        } else {
            *(unsigned int *)0xC8DFD50 = ((*(int *)0xC8DFD50) + 0x2);
            t14 = (((((struct o0_short *)0xC8DFF6C)->v)) - 2);
        }
        (((struct o0_ushort *)0xC8DFF6C)->v) = t14;
        t16 = *(int *)0xC8DFD50;
        *(unsigned int *)0xC8DFD50 = (t16 + 0x1);
        t17 = *(signed char *)((((t16 + 0x1) - 1) + 0x0));
        t91 = 0xE;
        if (((*(signed char *)0xC8DFFAA) != 0) || (((unsigned char)t17 == 0xAF) || ((unsigned char)t17 == 0xBF))) {
            if (((unsigned char)t17 & 0x1) == 0) {
                t19 = *(int *)0xC8DFD50;
                *(unsigned int *)0xC8DFD50 = (t19 + 0x1);
                t22 = *(signed char *)((((t19 + 0x1) - 1) + 0x0));
                (((struct o0_ushort *)0xC8DFF6C)->v) = (((((struct o0_short *)0xC8DFF6C)->v)) - 2);
                (((struct o3_uchar *)0xC8DFF6C)->v) = ((unsigned char)t17 >> 1);
                (((struct o26_uchar *)0xC8DFF6C)->v) = (0x1 & t22);
                if ((unsigned char)(*(signed char *)0xC8DFF70) != ((unsigned int)(unsigned char)t22 >> 1)) {
                    (((struct o34_uchar *)0xC8DFF6C)->v) = 0x0;
                    (((struct o4_uchar *)0xC8DFF6C)->v) = ((unsigned int)(unsigned char)t22 >> 1);
                } else {
                    (((struct o34_uchar *)0xC8DFF6C)->v) = 0x1;
                }
                t91 = 0x1;
            } else {
                if ((0x3 & (unsigned char)t17) == 3) {
                    (((struct o26_uchar *)0xC8DFF6C)->v) = (0x10 & t17);
                    (((struct o26_uchar *)0xC8DFF6C)->v) = ((unsigned int)((unsigned int)(unsigned char)(*(signed char *)0xC8DFF92) >> 2) >> 2);
                    t91 = 0x8;
                    if ((unsigned char)(t17 & 0xEF) != 3) {
                        t91 = 0x7;
                        if ((unsigned char)(t17 & 0xEF) != 15) {
                            t91 = 0x9;
                            if ((unsigned char)(t17 & 0xEF) != 67) {
                                t91 = 0xA;
                                if ((unsigned char)(t17 & 0xEF) != 99) {
                                    t91 = 0x6;
                                    if ((unsigned char)(t17 & 0xEF) != 111) {
                                        t91 = 0xB;
                                        if ((unsigned char)(t17 & 0xEF) != 0x87) {
                                            t91 = 0xC;
                                            if ((unsigned char)(t17 & 0xEF) != 0xAF) {
                                                t91 = 0xD;
                                                if ((unsigned char)(t17 & 0xEF) != 0xE3) {
                                                    t91 = 0xE;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    t52 = *(int *)0xC8DFD50;
                    *(unsigned int *)0xC8DFD50 = (t52 + 0x1);
                    t53 = *(signed char *)((((t52 + 0x1) - 1) + 0x0));
                    (((struct o26_uchar *)0xC8DFF6C)->v) = (0x1 & t53);
                    if ((unsigned char)(*(signed char *)0xC8DFF70) != ((unsigned int)(unsigned char)t53 >> 1)) {
                        (((struct o4_uchar *)0xC8DFF6C)->v) = ((unsigned int)(unsigned char)t53 >> 1);
                        (((struct o34_uchar *)0xC8DFF6C)->v) = 0x0;
                    } else {
                        (((struct o34_uchar *)0xC8DFF6C)->v) = 0x1;
                    }
                    t91 = 0x5;
                    if ((unsigned char)t17 == 13) {
                    } else {
                        t91 = 0x3;
                        if ((unsigned char)t17 == 5) {
                        } else {
                            t91 = 0x4;
                            if ((unsigned char)t17 == 9) {
                            } else {
                                t91 = 0xE;
                                if ((unsigned char)t17 == 1) {
                                    t91 = 0x2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return t91;
}

int FUN_0c1868e0(int a4, int a5, int a6)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_5 = a4;
    v0_6 = a5;
    v0_0 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    FUN_0c193da4();
    *(unsigned int *)0xC8A2E68 = 0x0;
    v0_4 = (v0_5);
    v0_0 = (v0_5);
    v0_6 = (0x0);
    if ((v0_5 != 1)) goto L_C18690C;
    L_C186AAE:;
    *(unsigned int *)0xC8A2E68 = 0x2B;
    L_C186AB4:;
    FUN_0c193dae();
    L_C186ABA:;
    v0_4 = (0xFFFFFFFF);
    L_C186ABC:;
    return v0_4;
    L_C18690C:;
    if ((v0_4 == 2)) goto L_C18691C;
    if ((v0_4 != 3)) goto L_C186918;
    goto L_C186AAE;
    L_C186918:;
    goto L_C186AAE;
    L_C18691C:;
    v0_7 = *(int *)(((int)stk + 0));
    v0_4 = (v0_7);
    v0_1 = (0xFFFFFFFF);
    v0_2 = (0xC8B57A0);
    v0_5 = (0x1);
    v0_3 = (0x37);
    if ((v0_7 == 1)) goto L_C18694E;
    if ((v0_4 != 2)) goto L_C186932;
    v0_7 = FUN_0c185600();
    v0_4 = (v0_7);
    if (!(((int)(short)v0_7 >= 0))) goto L_C186A0E;
    *(unsigned int *)((v0_2 + 0x0)) = (((short)v0_4 * (short)0x34) + 0xC8A2C60);
    *(unsigned short *)(((((short)v0_4 * (short)0x34) + 0xC8A2C60) + 0x6)) = v0_5;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x8)) = v0_6;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0xC)) = v0_5;
    v0_7 = FUN_0c1948e0(0x0, 0x0, 0x0);
    v0_5 = (v0_7);
    v0_6 = ((short)v0_7);
    if (((int)(short)v0_7 >= 0)) goto L_C186A7E;
    v0_4 = (v0_6);
    if ((v0_6 == -3)) goto L_C186A5A;
    if ((v0_4 == -2)) goto L_C186A60;
    if ((v0_4 == -1)) goto L_C186A66;
    *(unsigned int *)0xC8A2E68 = v0_1;
    goto L_C186A72;
    L_C186A0E:;
    *(unsigned int *)0xC8A2E68 = 0x17;
    goto L_C186AB4;
    L_C186A72:;
    FUN_0c193dae();
    *(unsigned int *)0xC8A2E68 = v0_3;
    goto L_C186ABA;
    L_C186A66:;
    *(unsigned int *)0xC8A2E68 = 0x2A;
    goto L_C186A72;
    L_C186A60:;
    *(unsigned int *)0xC8A2E68 = v0_3;
    goto L_C186A72;
    L_C186A5A:;
    *(unsigned int *)0xC8A2E68 = v0_1;
    goto L_C186A72;
    L_C186A7E:;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x0)) = (v0_4 + 0x1);
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x2)) = v0_5;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0xE)) = v0_0;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x10)) = (*(int *)(((int)stk + 0)));
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x12)) = (*(short *)(((int)stk + 4)));
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x8)) = 0x1;
    v0_6 = ((v0_4 + 0x1));
    L_C186AA4:;
    FUN_0c193dae();
    v0_4 = ((short)v0_6);
    goto L_C186ABC;
    L_C186932:;
    if ((v0_4 != 3)) goto L_C18693A;
    goto L_C186AAE;
    L_C18693A:;
    if ((v0_4 != 4)) goto L_C186942;
    goto L_C186AAE;
    L_C186942:;
    if ((v0_4 != 5)) goto L_C18694A;
    goto L_C186AAE;
    L_C18694A:;
    goto L_C186AAE;
    L_C18694E:;
    v0_7 = FUN_0c185600();
    v0_4 = (v0_7);
    if (((int)(short)v0_7 < 0)) goto L_C186A0E;
    *(unsigned int *)((v0_2 + 0x0)) = (((short)v0_4 * (short)0x34) + 0xC8A2C60);
    *(unsigned short *)(((((short)v0_4 * (short)0x34) + 0xC8A2C60) + 0x6)) = v0_5;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x8)) = v0_6;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0xC)) = v0_6;
    v0_6 = FUN_0c194178(0x0, 0xFFFFFFFF, 0x0);
    v0_5 = (v0_6);
    if (((int)(short)v0_6 >= 0)) goto L_C1869B2;
    v0_4 = ((short)v0_5);
    if (((short)v0_5 == -3)) goto L_C18699E;
    if ((v0_4 == -2)) goto L_C1869A4;
    if ((v0_4 == -1)) goto L_C1869A8;
    *(unsigned int *)0xC8A2E68 = v0_1;
    goto L_C186A72;
    L_C1869A8:;
    goto L_C186A66;
    L_C1869A4:;
    goto L_C186A60;
    L_C18699E:;
    *(unsigned int *)0xC8A2E68 = v0_1;
    goto L_C186A72;
    L_C1869B2:;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x0)) = (v0_4 + 0x1);
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x2)) = v0_5;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0xE)) = v0_0;
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x10)) = (*(int *)(((int)stk + 0)));
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x12)) = (*(short *)(((int)stk + 4)));
    *(unsigned short *)(((*(int *)((v0_2 + 0x0))) + 0x4)) = v0_1;
    v0_6 = ((v0_4 + 0x1));
    goto L_C186AA4;
}

int FUN_0c2eba86(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;

    memset(0xC8D6818, 0x0, 0xC);
    if (((unsigned char)(*(signed char *)0xC8D67BA) & 2) == 0) {
    } else {
        if (((unsigned char)(*(signed char *)0xC8D6795) & 32) != 0) {
            if ((*(signed char *)0xC8E00B5) != 0) {
                (((struct o2_uchar *)0xC8D6819)->v) = ((*(signed char *)0xC8D681B) | 0x8);
            }
            if ((*(signed char *)0xC8E00B4) != 0) {
                (((struct o2_uchar *)0xC8D6819)->v) = ((*(signed char *)0xC8D681B) | 0x10);
            }
            *(unsigned short *)0xC8D681C = (*(short *)0xC8E00B0);
            if ((*(signed char *)0xC8E0095) != 0) {
                (((struct o2_uchar *)0xC8D6819)->v) = ((*(signed char *)0xC8D681B) | 0x80);
            }
            if ((*(signed char *)0xC8E0095) != 0) {
                (((struct o2_uchar *)0xC8D6819)->v) = (((*(signed char *)0xC8D681B) & 0xF8) | 0x4);
            } else {
                (((struct o2_uchar *)0xC8D6819)->v) = (((*(signed char *)0xC8D681B) & 0xF8) | 0x3);
            }
            if ((*(signed char *)0xC8E0085) != 0) {
                (((struct o0_uchar *)0xC8D6819)->v) = ((*(signed char *)0xC8D6819) | 0x80);
                (((struct o1_uchar *)0xC8D6819)->v) = ((*(signed char *)0xC8D681A) | 0x1);
            }
            t4 = *(signed char *)0xC8E008F;
            (((struct o8_uchar *)0xC8D6819)->v) = t4;
            (((struct o7_uchar *)0xC8D6819)->v) = t4;
        } else {
            if (((unsigned char)(*(signed char *)0xC8D6793) & 128) == 0) {
                if (((unsigned char)(*(signed char *)0xC8D6794) & 192) == 0) {
                    (((struct o2_uchar *)0xC8D6819)->v) = (((*(signed char *)0xC8D681B) & 0xF8) | 0x2);
                } else {
                    (((struct o2_uchar *)0xC8D6819)->v) = (((*(signed char *)0xC8D681B) & 0xF8) | 0x1);
                }
            } else {
                if ((*(signed char *)0xC8DFFF1) != 0) {
                    (((struct o2_uchar *)0xC8D6819)->v) = ((*(signed char *)0xC8D681B) | 0x20);
                }
                if ((*(signed char *)0xC8DFFEF) != 0) {
                    (((struct o2_uchar *)0xC8D6819)->v) = ((*(signed char *)0xC8D681B) | 0x40);
                }
                t4 = (((struct o2_short *)0xC8DFFB6)->v);
                t5 = (((struct o0_short *)0xC8DFFB6)->v);
                t6 = t5;
                if ((int)(unsigned short)t5 > (int)(unsigned short)t4) {
                    t6 = t4;
                }
                *(unsigned short *)0xC8D681C = t6;
                (((struct o2_uchar *)0xC8D6819)->v) = ((*(signed char *)0xC8D681B) | 0x80);
                (((struct o2_uchar *)0xC8D6819)->v) = (((*(signed char *)0xC8D681B) & 0xF8) | 0x5);
                *(volatile short *)0xC8DFFEA;
                FUN_0c1a29ec(0xC8D6818, t5);
                if ((*(signed char *)0xC8DFFE0) != 0) {
                    *(volatile short *)0xC8DFFE2;
                    FUN_0c1a29ec(t0, 0xC8DFFE2);
                    *(volatile short *)((t1 + 0x0));
                    FUN_0c1a29ec(t2, t1);
                    *(unsigned short *)((t0 + 0x6)) = ((((struct o30_short *)0xC8DFFB6)->v));
                }
                *(unsigned char *)((t0 + 0x8)) = (*(signed char *)0xC8DFFBF);
                *(unsigned char *)((t0 + 0x9)) = (*(signed char *)0xC8DFFC2);
            }
        }
    }
    return 0xC8D6818;
}

int FUN_0c2bc534(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t0 = 0x0;
    if (((((struct o0_int *)0xC8C2148)->v)) == 0) {
    } else {
        (((struct o14_uint *)0xC8C2148)->v) = (((((struct o18_int *)0xC8C2148)->v)) - 1);
        (((struct o18_uint *)0xC8C2148)->v) = 0x0;
        t1 = a5;
        if (((((struct o10_int *)0xC8C2148)->v)) != 0) {
            (((struct o1C_uint *)0xC8C2148)->v) = (((((struct o0_int *)0xA05F80C4)->v)) & 0x3FF);
            (((struct o20_uint *)0xC8C2148)->v) = ((short)((unsigned int)((((struct o0_int *)0xA05F80C4)->v)) >> 16) & 0x3FF);
            t1 = 0xA05F80C4;
        }
        (((struct o10_uint *)0xC8C2148)->v) = 0x0;
        if (((((struct oC_int *)0xC8C2148)->v)) != 0) {
            *(unsigned int *)0xA05F8040 = ((((struct o8_int *)0xC8C2148)->v));
            (((struct o24_uint *)0xA05F80C4)->v) = (((((struct o24_int *)0xA05F80C4)->v)) & 0xFFFFFFF7);
            (((struct oC_uint *)0xC8C2148)->v) = 0x0;
        }
        if (((*(int *)0xA05F6908) & 0xF00) != 0) {
            t2 = 0xC8C2154;
            t0 = t1;
            t4 = 0xC8C2158;
            if (((*(int *)0xA05F6908) & 0x800) != 0) {
                (((struct o1C_uint *)0xC8C1EC8)->v) = (((((struct o1C_int *)0xC8C1EC8)->v)) + 0x1);
                if (((((struct o38_int *)0xC8C1EC8)->v)) != 0) {
                    t5 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC8C1EC8)->v))))(0x1, 0xFFFFFFFE, ((((struct o8_int *)0xC8C1EC8)->v)), (*(int *)0xA05F6908));
                } else {
                    t5 = 0xC8C2154;
                    t6 = t1;
                    t7 = 0xC8C2158;
                }
                t2 = t5;
                t0 = t6;
                t4 = t7;
            }
            t5 = t2;
            t6 = t0;
            t7 = t4;
            if (((*(int *)0xA05F6908) & 0x400) != 0) {
                (((struct o20_uint *)0xC8C1EC8)->v) = (((((struct o20_int *)0xC8C1EC8)->v)) + 0x1);
                if (((((struct o38_int *)0xC8C1EC8)->v)) != 0) {
                    t8 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC8C1EC8)->v))))(0x1, 0xFFFFFFFD, ((((struct o8_int *)0xC8C1EC8)->v)), (*(int *)0xA05F6908));
                } else {
                    t8 = t2;
                    t2 = t0;
                    t0 = t4;
                }
                t5 = t8;
                t6 = t2;
                t7 = t0;
            }
            t2 = t5;
            t0 = t6;
            t4 = t7;
            if (((*(int *)0xA05F6908) & 0x200) != 0) {
                (((struct o24_uint *)0xC8C1EC8)->v) = (((((struct o24_int *)0xC8C1EC8)->v)) + 0x1);
                if (((((struct o38_int *)0xC8C1EC8)->v)) != 0) {
                    t8 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC8C1EC8)->v))))(0x1, 0xFFFFFFFC, ((((struct o8_int *)0xC8C1EC8)->v)), (*(int *)0xA05F6908));
                } else {
                    t8 = t5;
                    t5 = t6;
                    t6 = t7;
                }
                t2 = t8;
                t0 = t5;
                t4 = t6;
            }
            t5 = t2;
            t6 = t0;
            t7 = t4;
            if (((*(int *)0xA05F6908) & 0x100) != 0) {
                (((struct o28_uint *)0xC8C1EC8)->v) = (((((struct o28_int *)0xC8C1EC8)->v)) + 0x1);
                if (((((struct o38_int *)0xC8C1EC8)->v)) != 0) {
                    t8 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC8C1EC8)->v))))(0x1, 0xFFFFFFFB, ((((struct o8_int *)0xC8C1EC8)->v)), (*(int *)0xA05F6908));
                } else {
                    t8 = t2;
                    t2 = t0;
                    t0 = t4;
                }
                t5 = t8;
                t6 = t2;
                t7 = t0;
            }
            *(unsigned int *)0xA05F6908 = 0xF00;
            t2 = ((int (*)(int, int, int))(FUN_0c2bc7e4))(t5, t6, t7);
            t2 = ((int (*)(void))(mpdrv_frame_send))();
            if ((int)t2 >= 0) {
                copy_device();
            } else {
                if (((((struct o38_int *)0xC8C1EC8)->v)) != 0) {
                    t0 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC8C1EC8)->v))))(0x1, 0xFFFFFFFA, ((((struct o8_int *)0xC8C1EC8)->v)), t2);
                }
            }
            t0 = t2;
        } else {
            t2 = ((int (*)(int, int, int, int))(mpdrv_frame_send))(0xC8C2154, t1, 0xC8C2158, a7);
            if ((int)t2 >= 0) {
                (((struct o30_uint *)0xC8C2148)->v) = 0x0;
                *(unsigned short *)((((((((struct o4_int *)0xC8C2148)->v)) << 1) + 0xC8C1EFC) + 0x0)) = 0x0;
                *(unsigned short *)((((((((struct o4_int *)0xC8C2148)->v)) << 1) + 0xC8C1EF4) + 0x0)) = ((*(int *)0xA05F810C) & 0x3FF);
                copy_device();
                (((struct o0_uint *)0xC8C1EC8)->v) = (((((struct o0_int *)0xC8C1EC8)->v)) + 0x1);
            } else {
                t1 = ((int (*)(void))(FUN_0c2bc7e4))();
                (((struct o10_uint *)0xC8C1EC8)->v) = (((((struct o10_int *)0xC8C1EC8)->v)) + 0x1);
                if (((((struct o38_int *)0xC8C1EC8)->v)) != 0) {
                    t1 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC8C1EC8)->v))))(0x1, 0xFFFFFFF9, ((((struct o8_int *)0xC8C1EC8)->v)), t2);
                }
            }
            t0 = t2;
        }
    }
    return t0;
}

int FUN_0c2d079c(int a4)
{
    int stk[9];
    int t0;
    register int t26;
    register int t30;
    register int t47;
    register int t70;
    register int t71;
    register int t78;

    t0 = *(signed char *)((((short)((short)(unsigned char)a4 * (short)0x32) + 0xC8D1DD8) + 0x0));
    if ((t0 != 66) && (t0 != 68)) {
        *(unsigned char *)((((int)stk + 8) + 0x0)) = (*(signed char *)(((((short)((short)(unsigned char)a4 * (short)0x32) + 0xC8D1DD8) + 0x2E) + 0x0)));
        *(unsigned char *)((((int)stk + 8) + 0x1)) = (*(signed char *)(((((short)((short)(unsigned char)a4 * (short)0x32) + 0xC8D1DD8) + 0x2E) + 0x1)));
        *(unsigned char *)((((int)stk + 8) + 0x2)) = (*(signed char *)(((((short)((short)(unsigned char)a4 * (short)0x32) + 0xC8D1DD8) + 0x2E) + 0x2)));
        *(unsigned char *)((((int)stk + 8) + 0x3)) = (*(signed char *)(((((short)((short)(unsigned char)a4 * (short)0x32) + 0xC8D1DD8) + 0x2E) + 0x3)));
        *(unsigned char *)(((((int)stk + 8) + 0x4) + 0x0)) = (*(signed char *)0xC8D25A8);
        *(unsigned char *)(((((int)stk + 8) + 0x4) + 0x1)) = (*(signed char *)0xC8D25A9);
        *(unsigned char *)(((((int)stk + 8) + 0x4) + 0x2)) = (*(signed char *)0xC8D25AA);
        *(unsigned char *)(((((int)stk + 8) + 0x4) + 0x3)) = (*(signed char *)0xC8D25AB);
        *(unsigned char *)((((int)stk + 4) + 0x0)) = (*(signed char *)((((int)stk + 8) + 0x0)));
        *(unsigned char *)((((int)stk + 4) + 0x1)) = (*(signed char *)((((int)stk + 8) + 0x1)));
        *(unsigned char *)((((int)stk + 4) + 0x2)) = (*(signed char *)((((int)stk + 8) + 0x2)));
        *(unsigned char *)((((int)stk + 4) + 0x3)) = (*(signed char *)((((int)stk + 8) + 0x3)));
        *(unsigned char *)((((int)stk + 0) + 0x0)) = (*(signed char *)(((((int)stk + 8) + 0x4) + 0x0)));
        *(unsigned char *)((((int)stk + 0) + 0x1)) = (*(signed char *)(((((int)stk + 8) + 0x4) + 0x1)));
        *(unsigned char *)((((int)stk + 0) + 0x2)) = (*(signed char *)(((((int)stk + 8) + 0x4) + 0x2)));
        *(unsigned char *)((((int)stk + 0) + 0x3)) = (*(signed char *)(((((int)stk + 8) + 0x4) + 0x3)));
        FUN_0c2cfd24(*(Stk1 *)(((int)stk + 0)), *(Stk1 *)(((int)stk + 4)));
        t26 = (((struct o9A_short *)((*(int *)0xC8D66E8)))->v);
        t78 = 0x0;
        if (((unsigned int)((((short)(*(signed char *)0xC8D25AD) * (short)0x3C) + (*(signed char *)0xC8D25AE)) + ((short)(*(signed char *)0xC8D25B0) * (short)0x5A0)) >= (unsigned int)(unsigned short)t26) && ((unsigned short)t26 != 0)) {
            t78 = 0x1;
        }
    } else {
        if (((unsigned short)((((struct o90_short *)((*(int *)0xC8D66E8)))->v)) & 0x100) != 0) {
            t30 = *(signed char *)0xC8D25BD;
            *(unsigned char *)((((int)stk + 8) + 0x0)) = (*(signed char *)(((((short)((short)(unsigned char)t30 * (short)0x32) + 0xC8D1DD8) + 0x2E) + 0x0)));
            *(unsigned char *)((((int)stk + 8) + 0x1)) = (*(signed char *)(((((short)((short)(unsigned char)t30 * (short)0x32) + 0xC8D1DD8) + 0x2E) + 0x1)));
            *(unsigned char *)((((int)stk + 8) + 0x2)) = (*(signed char *)(((((short)((short)(unsigned char)t30 * (short)0x32) + 0xC8D1DD8) + 0x2E) + 0x2)));
            *(unsigned char *)((((int)stk + 8) + 0x3)) = (*(signed char *)(((((short)((short)(unsigned char)t30 * (short)0x32) + 0xC8D1DD8) + 0x2E) + 0x3)));
            *(unsigned char *)(((((int)stk + 8) + 0x4) + 0x0)) = (*(signed char *)0xC8D25A8);
            *(unsigned char *)(((((int)stk + 8) + 0x4) + 0x1)) = (*(signed char *)0xC8D25A9);
            *(unsigned char *)(((((int)stk + 8) + 0x4) + 0x2)) = (*(signed char *)0xC8D25AA);
            *(unsigned char *)(((((int)stk + 8) + 0x4) + 0x3)) = (*(signed char *)0xC8D25AB);
            *(unsigned char *)((((int)stk + 4) + 0x0)) = (*(signed char *)((((int)stk + 8) + 0x0)));
            *(unsigned char *)((((int)stk + 4) + 0x1)) = (*(signed char *)((((int)stk + 8) + 0x1)));
            *(unsigned char *)((((int)stk + 4) + 0x2)) = (*(signed char *)((((int)stk + 8) + 0x2)));
            *(unsigned char *)((((int)stk + 4) + 0x3)) = (*(signed char *)((((int)stk + 8) + 0x3)));
            *(unsigned char *)((((int)stk + 0) + 0x0)) = (*(signed char *)(((((int)stk + 8) + 0x4) + 0x0)));
            *(unsigned char *)((((int)stk + 0) + 0x1)) = (*(signed char *)(((((int)stk + 8) + 0x4) + 0x1)));
            *(unsigned char *)((((int)stk + 0) + 0x2)) = (*(signed char *)(((((int)stk + 8) + 0x4) + 0x2)));
            *(unsigned char *)((((int)stk + 0) + 0x3)) = (*(signed char *)(((((int)stk + 8) + 0x4) + 0x3)));
        } else {
            t47 = *(signed char *)0xC8D25BD;
            *(unsigned char *)((((int)stk + 8) + 0x0)) = (*(signed char *)(((((short)((short)(unsigned char)t47 * (short)0x32) + 0xC8D1DD8) + 0x2A) + 0x0)));
            *(unsigned char *)((((int)stk + 8) + 0x1)) = (*(signed char *)(((((short)((short)(unsigned char)t47 * (short)0x32) + 0xC8D1DD8) + 0x2A) + 0x1)));
            *(unsigned char *)((((int)stk + 8) + 0x2)) = (*(signed char *)(((((short)((short)(unsigned char)t47 * (short)0x32) + 0xC8D1DD8) + 0x2A) + 0x2)));
            *(unsigned char *)((((int)stk + 8) + 0x3)) = (*(signed char *)(((((short)((short)(unsigned char)t47 * (short)0x32) + 0xC8D1DD8) + 0x2A) + 0x3)));
            *(unsigned char *)(((((int)stk + 8) + 0x4) + 0x0)) = (*(signed char *)0xC8D25A8);
            *(unsigned char *)(((((int)stk + 8) + 0x4) + 0x1)) = (*(signed char *)0xC8D25A9);
            *(unsigned char *)(((((int)stk + 8) + 0x4) + 0x2)) = (*(signed char *)0xC8D25AA);
            *(unsigned char *)(((((int)stk + 8) + 0x4) + 0x3)) = (*(signed char *)0xC8D25AB);
            *(unsigned char *)((((int)stk + 4) + 0x0)) = (*(signed char *)((((int)stk + 8) + 0x0)));
            *(unsigned char *)((((int)stk + 4) + 0x1)) = (*(signed char *)((((int)stk + 8) + 0x1)));
            *(unsigned char *)((((int)stk + 4) + 0x2)) = (*(signed char *)((((int)stk + 8) + 0x2)));
            *(unsigned char *)((((int)stk + 4) + 0x3)) = (*(signed char *)((((int)stk + 8) + 0x3)));
            *(unsigned char *)((((int)stk + 0) + 0x0)) = (*(signed char *)(((((int)stk + 8) + 0x4) + 0x0)));
            *(unsigned char *)((((int)stk + 0) + 0x1)) = (*(signed char *)(((((int)stk + 8) + 0x4) + 0x1)));
            *(unsigned char *)((((int)stk + 0) + 0x2)) = (*(signed char *)(((((int)stk + 8) + 0x4) + 0x2)));
            *(unsigned char *)((((int)stk + 0) + 0x3)) = (*(signed char *)(((((int)stk + 8) + 0x4) + 0x3)));
        }
        FUN_0c2cfd24(*(Stk1 *)(((int)stk + 0)), *(Stk1 *)(((int)stk + 4)));
        t70 = *(int *)0xC8D66E8;
        t71 = (((struct o9A_short *)(t70))->v);
        t78 = 0x0;
        if (((unsigned int)((((short)(*(signed char *)0xC8D25AD) * (short)0x3C) + (*(signed char *)0xC8D25AE)) + ((short)(*(signed char *)0xC8D25B0) * (short)0x5A0)) >= (unsigned int)(unsigned short)t71) && ((unsigned short)t71 != 0)) {
            t78 = 0x1;
            if (((unsigned short)((((struct o90_short *)(t70))->v)) & 64) != 0) {
                t78 = 0x0;
            }
        }
    }
    return t78;
}

int FUN_0c2f3268(void)
{
    int stk[7];
    register int t2;
    register int t9;
    register int t14;
    register int t15;
    register int t20;
    register int t25;
    register int t32;
    register int t37;
    register int t38;
    register int t52;
    register int t115;
    register int t120;
    int t54;
    int t71;
    int t88;

    if ((*(signed char *)0xC8DFFA6) != 0) {
        FUN_0c2f37ce(0x91, 0x11);
        t2 = ((int (*)(int, int, int, int, int, int, int, int))(FUN_0c2f344a))(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
        if ((unsigned char)(*(signed char *)0xC8DA0E9) == 4) {
            (((struct o0_uchar *)0xC8D6793)->v) = 0x0;
            FUN_0c2ec410(0xC8DFFC8, 0x0);
            (((struct o0_uchar *)0xC8DA0E8)->v) = 0x6;
            t9 = FUN_0c2ec430(((((struct o0_int *)0xC8DFFC8)->v)));
            if ((signed char)t9 != 0) {
                if (((unsigned short)(*(short *)0xC8D67B8) & 1) != 0) {
                    return FUN_0c2f35d6();
                }
                (((struct o0_uchar *)0xC8D6793)->v) = ((*(signed char *)0xC8D6793) | 0x80);
                FUN_0c2ec410(0xC8DFFC8, 0x4B0);
                t14 = FUN_0c2f3bc8();
                (((struct o0_uchar *)0xC8DA0E8)->v) = 0x5;
                return t14;
            }
            return (signed char)t9;
        }
        t15 = *(signed char *)0xC8DA0E9;
        if (((unsigned char)t15 != 2) && ((unsigned char)t15 != 5)) {
            if ((unsigned char)(*(signed char *)0xC8DA0E9) != 3) {
                t20 = FUN_0c2ec430(((((struct o0_int *)0xC8DFFC8)->v)));
                if ((signed char)t20 != 0) {
                    if (((unsigned short)(*(short *)0xC8D67B8) & 1) != 0) {
                        return FUN_0c2f35d6();
                    }
                    (((struct o0_uchar *)0xC8D6793)->v) = ((*(signed char *)0xC8D6793) | 0x80);
                    FUN_0c2ec410(0xC8DFFC8, 0x4B0);
                    t25 = FUN_0c2f3bc8();
                    (((struct o0_uchar *)0xC8DA0E8)->v) = 0x5;
                    return t25;
                }
                return (signed char)t20;
            }
            (((struct o0_uchar *)0xC8D6793)->v) = ((*(signed char *)0xC8D6793) | 0x8);
            return FUN_0c2f35d6();
        }
        (((struct o0_uchar *)0xC8D6793)->v) = ((*(signed char *)0xC8D6793) & 0xFE);
        (((struct o0_uchar *)0xC8D6793)->v) = ((*(signed char *)0xC8D6793) | 0x80);
        FUN_0c2ec410(0xC8DFFC8, 0x14);
        FUN_0c2f3bc8();
        (((struct o0_uchar *)0xC8DA0E8)->v) = 0x4;
        t32 = FUN_0c2ec430(((((struct o0_int *)0xC8DFFC8)->v)));
        if ((signed char)t32 != 0) {
            if (((unsigned short)(*(short *)0xC8D67B8) & 1) != 0) {
                return FUN_0c2f35d6();
            }
            (((struct o0_uchar *)0xC8D6793)->v) = ((*(signed char *)0xC8D6793) | 0x80);
            FUN_0c2ec410(0xC8DFFC8, 0x4B0);
            t37 = FUN_0c2f3bc8();
            (((struct o0_uchar *)0xC8DA0E8)->v) = 0x5;
            return t37;
        }
        return (signed char)t32;
    }
    t38 = ((int (*)(void))(FUN_0c2f344a))();
    if (((unsigned char)(*(signed char *)0xC8D6795) & 8) != 0) {
        (((struct o0_uchar *)0xC8D6793)->v) = 0x0;
        t52 = FUN_0c2ec410(0xC8DFFC8, 0x0);
        (((struct o0_uchar *)0xC8DA0E8)->v) = 0x6;
        return t52;
    }
    if (((unsigned char)(*(signed char *)0xC8DA0E9) != 1) && (t54 = *(signed char *)0xC8DFFCF, t54 == 0)) {
    } else {
        if (((unsigned short)(*(short *)0xC8D67B8) & 128) != 0) {
            if ((((unsigned char)(*(signed char *)0xC8D67A3) & 16) != 0) && (t71 = *(signed char *)0xC8DA0EC, t71 == 0)) {
                if ((int)(unsigned char)(*(signed char *)0xC8DFFCF) < (int)0xA) {
                    FUN_0c2f37ce(0x4D, 0x45);
                } else {
                    (((struct o4_uchar *)0xC8DA0E8)->v) = 0x1;
                    (((struct o7_uchar *)0xC8DFFC8)->v) = 0x0;
                    FUN_0c2f37ce(0x43, 0x45);
                }
            } else {
                FUN_0c2f37ce(0x43, 0x45);
            }
        } else {
            FUN_0c2f37ce(0x0, 0x45);
        }
    }
    if (((unsigned char)(*(signed char *)0xC8DA0E9) != 5) && (t88 = *(signed char *)0xC8DFFCF, (int)(unsigned char)t88 <= (int)0x15)) {
    } else {
        if (((unsigned short)(*(short *)0xC8D67B8) & 128) != 0) {
            if ((unsigned char)(*(signed char *)0xC8DA0E9) != 5) {
                FUN_0c2ec410(0xC8DFFC8, 0x64);
                (((struct o0_uchar *)0xC8DA0E8)->v) = 0x3;
            } else {
                (((struct o0_uchar *)0xC8D6793)->v) = ((*(signed char *)0xC8D6793) & 0xFE);
                (((struct o0_uchar *)0xC8D6793)->v) = ((*(signed char *)0xC8D6793) | 0x80);
                FUN_0c2ec410(0xC8DFFC8, 0x4B0);
                FUN_0c2f3bc8();
                (((struct o0_uchar *)0xC8DA0E8)->v) = 0x5;
            }
        } else {
            FUN_0c2f35d6();
        }
    }
    t115 = FUN_0c2ec430(((((struct o0_int *)0xC8DFFC8)->v)));
    if ((signed char)t115 != 0) {
        if (((unsigned short)(*(short *)0xC8D67B8) & 1) != 0) {
            return FUN_0c2f35d6();
        }
        (((struct o0_uchar *)0xC8D6793)->v) = ((*(signed char *)0xC8D6793) | 0x80);
        FUN_0c2ec410(0xC8DFFC8, 0x4B0);
        t120 = FUN_0c2f3bc8();
        (((struct o0_uchar *)0xC8DA0E8)->v) = 0x5;
        return t120;
    }
    return (signed char)t115;
}

int FUN_0c198134(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t0;
    register int t4;
    register int t7;
    register int t13;
    register int t15;
    register int t25;
    register int t28;
    register int t34;
    register int t36;
    register int t46;
    register int t49;
    register int t53;
    register int t56;
    register int t59;
    register int t63;
    register int t73;
    register int t75;
    register int t78;
    register int t68;

    *(unsigned char *)(((int)stk + 24)) = a4;
    *(unsigned char *)(((int)stk + 28)) = a5;
    *(unsigned int *)(((int)stk + 32)) = a6;
    t0 = *(signed char *)(((int)stk + 24));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 3) {
            t78 = 0xFFFFFFFF;
            if ((unsigned char)t0 == 17) {
                *(unsigned short *)(((int)stk + 48)) = 0x123;
                *(unsigned short *)(((int)stk + 50)) = 0x1;
                *(unsigned char *)(((((int)stk + 24) + 0x1C) + 0x3)) = 0x0;
                *(unsigned char *)(((((int)stk + 24) + 0x1C) + 0x2)) = 0x0;
                *(unsigned char *)(((((int)stk + 24) + 0x1C) + 0x1)) = 0x0;
                (((struct o1C_uchar *)(((int)stk + 24)))->v) = 0x0;
                t4 = *(int *)((a7 + 0x0));
                FUN_0c18dcf2((((((t4 << 1) + t4) << 2) + (a7 + 0x8)) + 0x4), (((int)stk + 24) + 0x14));
                t7 = *(int *)((a7 + 0x0));
                *(unsigned short *)((((((t7 << 1) + t7) << 2) + (a7 + 0x8)) + 0x0)) = 0xC;
                *(unsigned int *)((a7 + 0x4)) = ((*(int *)((a7 + 0x4))) + 0xC);
                *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a7 + 0x0))) + 0x1);
                (((struct o14_uchar *)(((int)stk + 24)))->v) = (*(signed char *)(((int)stk + 24)));
                *(unsigned char *)(((((int)stk + 24) + 0x14) + 0x1)) = (*(signed char *)(((int)stk + 28)));
                *(unsigned short *)(((((int)stk + 24) + 0x14) + 0x2)) = 0x0;
                t13 = FUN_0c19c678(0x0, a7, 0x1);
                *(unsigned char *)((((((int)stk + 24) + 0x14) + 0x2) + 0x0)) = ((unsigned int)(unsigned short)t13 >> 8);
                *(unsigned char *)(((((((int)stk + 24) + 0x14) + 0x2) + 0x1) + 0x0)) = t13;
                *(int *)((int)stk + 20) = 0x0;
                *(int *)((int)stk + 16) = 0x1;
                *(int *)((int)stk + 12) = 0x0;
                *(int *)((int)stk + 8) = 0x0;
                *(int *)((int)stk + 4) = 0x0;
                *(int *)((int)stk + 0) = 0x0;
                t15 = FUN_0c18f014(a7, (*(int *)(((int)stk + 32))), 0x0, 0x0, 0x0, 0x0);
                t78 = 0x0;
                if (t15 != 0) {
                    t78 = 0xFFFFFFFF;
                }
            }
        } else {
            *(unsigned int *)(((int)stk + 48)) = 0x0;
            t25 = *(int *)((a7 + 0x0));
            FUN_0c18dcf2((((((t25 << 1) + t25) << 2) + (a7 + 0x8)) + 0x4), (((int)stk + 24) + 0x14));
            t28 = *(int *)((a7 + 0x0));
            *(unsigned short *)((((((t28 << 1) + t28) << 2) + (a7 + 0x8)) + 0x0)) = 0x8;
            *(unsigned int *)((a7 + 0x4)) = ((*(int *)((a7 + 0x4))) + 0x8);
            *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a7 + 0x0))) + 0x1);
            (((struct o14_uchar *)(((int)stk + 24)))->v) = (*(signed char *)(((int)stk + 24)));
            *(unsigned char *)(((((int)stk + 24) + 0x14) + 0x1)) = (*(signed char *)(((int)stk + 28)));
            *(unsigned short *)(((((int)stk + 24) + 0x14) + 0x2)) = 0x0;
            t34 = FUN_0c19c678(0x0, a7, 0x1);
            *(unsigned char *)((((((int)stk + 24) + 0x14) + 0x2) + 0x0)) = ((unsigned int)(unsigned short)t34 >> 8);
            *(unsigned char *)(((((((int)stk + 24) + 0x14) + 0x2) + 0x1) + 0x0)) = t34;
            *(int *)((int)stk + 20) = 0x0;
            *(int *)((int)stk + 16) = 0x1;
            *(int *)((int)stk + 12) = 0x0;
            *(int *)((int)stk + 8) = 0x0;
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x0;
            t36 = FUN_0c18f014(a7, (*(int *)(((int)stk + 32))), 0x0, 0x0, 0x0, 0x0);
            t78 = 0x0;
            if (t36 != 0) {
                t78 = 0xFFFFFFFF;
            }
        }
    } else {
        t46 = *(int *)((a7 + 0x0));
        if ((*(signed char *)(((((((t46 - 1) << 1) + (t46 - 1)) << 2) + (a7 + 0x8)) + 0x8))) == 1) {
            t49 = *(int *)((a7 + 0x0));
            t68 = (FUN_0c18dd02(((((((t49 - 1) << 1) + (t49 - 1)) << 2) + (a7 + 0x8)) + 0x4)));
        } else {
            FUN_0c18dcf2((((int)stk + 24) + 0xC), (((int)stk + 24) + 0x14));
            t53 = *(int *)((a7 + 0x0));
            FUN_0c18dae8((((int)stk + 24) + 0xC), ((((((t53 - 1) << 1) + (t53 - 1)) << 2) + (a7 + 0x8)) + 0x4), 0x8);
            t56 = *(int *)((a7 + 0x0));
            FUN_0c18dd06(((((((t56 - 1) << 1) + (t56 - 1)) << 2) + (a7 + 0x8)) + 0x4), 0x8);
            t59 = *(int *)((a7 + 0x0));
            *(unsigned short *)((((((t59 << 1) + t59) << 2) + (a7 + 0x8)) + 0x0)) = 0x8;
            *(unsigned short *)(((((((t59 - 1) << 1) + (t59 - 1)) << 2) + (a7 + 0x8)) + 0x0)) = ((*(short *)(((((((t59 - 1) << 1) + (t59 - 1)) << 2) + (a7 + 0x8)) + 0x0))) - 8);
            t63 = *(int *)((a7 + 0x0));
            FUN_0c18dcf2((((((t63 << 1) + t63) << 2) + (a7 + 0x8)) + 0x4), (((int)stk + 24) + 0x14));
            *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a7 + 0x0))) + 0x1);
            t68 = (((int)stk + 24) + 0x14);
        }
        *(unsigned char *)((t68 + 0x0)) = (*(signed char *)(((int)stk + 24)));
        *(unsigned char *)((t68 + 0x1)) = (*(signed char *)(((int)stk + 28)));
        *(unsigned short *)((t68 + 0x2)) = 0x0;
        t73 = FUN_0c19c678(0x0, a7, 0x1);
        *(unsigned char *)(((t68 + 0x2) + 0x0)) = ((unsigned int)(unsigned short)t73 >> 8);
        *(unsigned char *)((((t68 + 0x2) + 0x1) + 0x0)) = t73;
        *(int *)((int)stk + 20) = 0x0;
        *(int *)((int)stk + 16) = 0x1;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x0;
        t75 = FUN_0c18f014(a7, (*(int *)(((int)stk + 32))), 0x0, 0x0, 0x0, 0x0);
        t78 = 0x0;
        if (t75 != 0) {
            t78 = 0xFFFFFFFF;
        }
    }
    return t78;
}

int FUN_0c2cf374(int a4)
{

    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_4 = a4;
    v0_2 = (0xC8D666A);
    if (((*(signed char *)0xC8D666A) != 0)) goto L_C2CF38A;
    L_C2CF52E:;
    v0_5 = (0x1);
    L_C2CF548:;
    return v0_5;
    L_C2CF38A:;
    v0_5 = (0x30);
    v0_7 = (0xC8D6440);
    if ((((unsigned char)(*(signed char *)0xC8D6457) & 0x30) == 16)) goto L_C2CF3A2;
    v0_4 = ((v0_4 & 0x7F));
    L_C2CF3A2:;
    v0_6 = ((unsigned char)v0_4);
    if (((int)(unsigned char)v0_4 < (int)0x61)) goto L_C2CF3C4;
    if (((int)v0_6 > (int)0x7A)) goto L_C2CF3C4;
    if ((v0_6 == (unsigned char)(*(signed char *)0xC8D6526))) goto L_C2CF3C4;
    if ((v0_6 == (unsigned char)(*(signed char *)((v0_7 + 0x5))))) goto L_C2CF3C4;
    v0_4 = ((v0_4 - 32));
    L_C2CF3C4:;
    v0_3 = ((unsigned char)v0_4);
    v0_0 = (0xC8D6640);
    v0_1 = (0xC8D6669);
    v0_6 = ((unsigned char)(*(signed char *)0xC8D6669));
    if (((unsigned char)v0_4 != (unsigned char)(*(signed char *)((v0_7 + 0x5))))) goto L_C2CF464;
    if (!(((int)v0_6 >= (int)0x2))) goto L_C2CF532;
    if ((v0_6 != 2)) goto L_C2CF3EC;
    goto L_C2CF52E;
    L_C2CF532:;
    FUN_0c2cf7e0();
    if ((((unsigned char)(*(signed char *)0xC8D677E) & 4) == 0)) goto L_C2CF546;
    FUN_0c2e81dc();
    L_C2CF546:;
    v0_5 = (0x0);
    goto L_C2CF548;
    L_C2CF3EC:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) - 1);
    if (((unsigned char)(*(signed char *)((v0_1 + 0x0))) != 2)) goto L_C2CF400;
    *(unsigned char *)((v0_2 + 0x0)) = 0x1;
    goto L_C2CF52E;
    L_C2CF400:;
    v0_3 = (((*(signed char *)((v0_1 + 0x0))) + 0xFF));
    L_C2CF40A:;
    v0_6 = *(signed char *)((v0_0 + (unsigned char)v0_3));
    v0_4 = ((unsigned char)v0_6);
    if (((int)(unsigned char)v0_6 < (int)v0_5)) goto L_C2CF41A;
    if (((int)v0_4 <= (int)0x39)) goto L_C2CF408;
    L_C2CF41A:;
    if ((v0_4 == 61)) goto L_C2CF408;
    v0_4 = (signed char)(FUN_0c2cf6f6((*(signed char *)((v0_0 + ((unsigned char)v0_3 - 1)))))) == 0;
    v0_5 = (0x1);
    if (v0_4) goto L_C2CF434;
    v0_3 = ((v0_3 - 1));
    L_C2CF434:;
    *(unsigned char *)((v0_2 + 0x0)) = v0_5;
    L_C2CF440:;
    if (((unsigned char)v0_3 != (unsigned char)(*(signed char *)((v0_1 + 0x0))))) goto L_C2CF438;
    goto L_C2CF52E;
    L_C2CF438:;
    FUN_0c2cf554((*(signed char *)((v0_0 + (unsigned char)v0_3))));
    v0_3 = ((v0_3 + 0x1));
    goto L_C2CF440;
    L_C2CF408:;
    v0_3 = ((v0_3 - 1));
    goto L_C2CF40A;
    L_C2CF464:;
    if ((v0_3 == 32)) goto L_C2CF52E;
    if ((v0_3 == 44)) goto L_C2CF52E;
    if (((int)v0_3 > (int)0x7E)) goto L_C2CF52E;
    if (((int)v0_3 >= (int)0x20)) goto L_C2CF488;
    if ((v0_3 != 13)) goto L_C2CF52E;
    L_C2CF488:;
    if ((v0_3 != 13)) goto L_C2CF49A;
    if (((unsigned char)(*(signed char *)0xC8D6526) != v0_3)) goto L_C2CF52E;
    L_C2CF49A:;
    v0_5 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)((v0_1 + 0x0)) = (v0_5 + 0x1);
    *(unsigned char *)((v0_0 + (unsigned char)((v0_5 + 0x1) - 1))) = v0_4;
    if (((int)(unsigned char)(*(signed char *)((v0_1 + 0x0))) > (int)0x29)) goto L_C2CF532;
    v0_7 = *(signed char *)((v0_1 + 0x0));
    v0_5 = ((unsigned char)v0_7);
    v0_6 = (v0_0);
    if (((unsigned char)v0_7 != 1)) goto L_C2CF4CA;
    if (((unsigned char)(*(signed char *)((v0_6 + 0x0))) != 65)) goto L_C2CF532;
    goto L_C2CF52E;
    L_C2CF4CA:;
    if ((v0_5 != 2)) goto L_C2CF4E6;
    if (((unsigned char)(*(signed char *)((v0_6 + 0x1))) == 84)) goto L_C2CF52E;
    if (((unsigned char)(*(signed char *)((v0_6 + 0x1))) != 65)) goto L_C2CF532;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) - 1);
    goto L_C2CF52E;
    L_C2CF4E6:;
    v0_4 = (signed char)(FUN_0c2cf554(v0_4)) == 0;
    if (v0_4) goto L_C2CF532;
    if (((unsigned char)(*(signed char *)0xC8D6526) != v0_3)) goto L_C2CF52E;
    *(unsigned char *)((v0_2 + 0x0)) = 0x0;
    *(unsigned char *)0xC8D678D = ((*(signed char *)0xC8D678D) | 0x20);
    *(unsigned short *)0xC8D6524 = 0x0;
    v0_4 = (0xC8D6524);
    v0_5 = (0xC8D64A3);
    L_C2CF520:;
    v0_2 = *(signed char *)((v0_1 + 0x0));
    *(unsigned char *)((v0_1 + 0x0)) = (v0_2 - 1);
    if (((unsigned char)((v0_2 - 1) + 0x1) != 0)) goto L_C2CF50E;
    goto L_C2CF52E;
    L_C2CF50E:;
    v0_2 = *(short *)((v0_4 + 0x0));
    *(unsigned char *)((v0_5 + (unsigned short)v0_2)) = (*(signed char *)((v0_0 + (unsigned short)v0_2)));
    *(unsigned short *)((v0_4 + 0x0)) = ((*(short *)((v0_4 + 0x0))) + 0x1);
    goto L_C2CF520;
}

int FUN_0c18dd2a(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t10;
    register int t11;
    register int t12;
    register int t35;
    register int t40;
    register int t41;
    register int t53;
    register int t102;
    register int t103;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t62;
    register int t64;
    register int t83;
    register int t86;
    register int t87;
    register int t31;
    register int t45;
    register int t54;
    register int t55;
    int t56;
    register int t78;
    register int t91;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a4;
    t1 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    if (a6 == 1) {
        t2 = a6;
        t3 = t1;
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            if (t3 == 0) {
                break;
            }
            t3 = (t3 - 1);
            t6 = *(int *)(((int)stk + 0));
            t2 = (*(signed char *)(((((t6 + 0x8) + (((t3 << 1) + t3) << 2)) + 0x4) + 0x4)));
            if (t2 == 1) {
                t31 = (*(int *)(((((t6 + 0x8) + (((t3 << 1) + t3) << 2)) + 0x4) + 0x0)));
            } else {
                if (t2 == 2) {
                    t10 = *(int *)(((((t6 + 0x8) + (((t3 << 1) + t3) << 2)) + 0x4) + 0x0));
                    *(unsigned int *)(((int)stk + 12)) = ((unsigned int)(t10 & 0xFF0000) >> 16);
                    t11 = *(int *)0xC8A73D4;
                    *(unsigned int *)(((int)stk + 8)) = ((((unsigned int)((unsigned int)(t10 & 0xFF000000) >> 16) >> 8) * 0x3C) + t11);
                    t12 = *(int *)(((int)stk + 12));
                    t2 = t12;
                    t2 = (t2 << 2);
                    t2 = (*(short *)(((((t12 << 1) + t2) + ((*(int *)(((int)stk + 8))) + 0xC)) + 0x2)));
                    t2 = (unsigned short)t2;
                    t2 = (t2 + (unsigned short)t10);
                    t31 = ((*(int *)((((((unsigned int)((unsigned int)(t10 & 0xFF000000) >> 16) >> 8) * 0x3C) + t11) + 0x0))) + t2);
                } else {
                    t31 = (*(int *)(((((*(int *)(((int)stk + 0))) + 0x8) + (((t3 << 1) + t3) << 2)) + 0x4)));
                }
            }
            t35 = *(short *)((((((t3 << 1) + t3) << 2) + ((*(int *)(((int)stk + 0))) + 0x8)) + 0x0));
            t40 = t31;
            t41 = t35;
            if (t4 != 0) {
                t5 = (t5 | (unsigned char)(*(signed char *)((t31 + 0x0))));
                t5 = (unsigned short)t5;
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + t5);
                t40 = (t31 + 0x1);
                t41 = (t35 - 1);
            }
            if (((short)t41 & 0x1) != 0) {
                t2 = (short)t41;
                t2 = (t2 - 1);
                t4 = 0x1;
                t5 = (*(signed char *)((t40 + t2)));
                t5 = (unsigned char)t5;
                t5 = (t5 << 8);
                t5 = (t5 & 0xFF00);
                t45 = (t41 - 1);
            } else {
                t5 = 0x0;
                t4 = 0x0;
                t45 = t41;
            }
            t2 = (FUN_0c18df2c((((int)stk + 0) + 0x4), t40, ((short)t45 >> 1)));
        }
        if (t4 == 0) {
        } else {
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + (unsigned short)t5);
        }
    } else {
        *(unsigned int *)(((int)stk + 16)) = 0x0;
        t53 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 8)) = (t53 + 0x8);
        *(unsigned int *)(((int)stk + 0)) = (t53 + 0x8);
        *(unsigned int *)(((int)stk + 12)) = (t53 + 0x8);
        t102 = 0x0;
        t103 = 0x0;
        if ((int)t1 > 0) {
            t57 = 0x0;
            t58 = 0x0;
            for (;;) {
                t59 = *(int *)(((int)stk + 12));
                t60 = *(signed char *)(((t59 + 0x4) + 0x4));
                if (t60 == 1) {
                    t78 = (*(int *)(((t59 + 0x4) + 0x0)));
                } else {
                    if (t60 == 2) {
                        t62 = *(int *)(((t59 + 0x4) + 0x0));
                        t55 = 0xC8A73D4;
                        t56 = (*(int *)((t55 + 0x0)));
                        t64 = ((((unsigned int)((unsigned int)(t62 & 0xFF000000) >> 16) >> 8) * 0x3C) + t56);
                        t56 = ((unsigned int)(t62 & 0xFF0000) >> 16);
                        t56 = (t56 << 2);
                        t54 = t64;
                        t54 = (t54 + 0xC);
                        t78 = ((*(int *)((t64 + 0x0))) + ((unsigned short)(*(short *)(((((((unsigned int)(t62 & 0xFF0000) >> 16) << 1) + t56) + t54) + 0x2))) + (unsigned short)t62));
                    } else {
                        t78 = (*(int *)(((*(int *)(((int)stk + 0))) + 0x4)));
                    }
                }
                t83 = *(short *)(((*(int *)(((int)stk + 8))) + 0x0));
                t86 = t78;
                t87 = t83;
                if (t57 != 0) {
                    t55 = (*(signed char *)((t78 + 0x0)));
                    t56 = (*(int *)(((int)stk + 4)));
                    t55 = (unsigned char)t55;
                    t58 = (t58 | t55);
                    t58 = (unsigned short)t58;
                    t56 = (t56 + t58);
                    *(unsigned int *)(((int)stk + 4)) = t56;
                    t86 = (t78 + 0x1);
                    t87 = (t83 - 1);
                }
                t56 = (short)t87;
                if ((t56 & 0x1) != 0) {
                    t58 = (*(signed char *)((t86 + ((short)t87 - 1))));
                    t57 = 0x1;
                    t56 = 0xFF00;
                    t58 = (unsigned char)t58;
                    t58 = (t58 << 8);
                    t58 = (t58 & t56);
                    t91 = (t87 - 1);
                } else {
                    t58 = 0x0;
                    t57 = 0x0;
                    t91 = t87;
                }
                FUN_0c18df2c((((int)stk + 0) + 0x4), t86, ((short)t91 >> 1));
                t56 = (*(int *)(((int)stk + 16)));
                t56 = (t56 + 0x1);
                *(unsigned int *)(((int)stk + 16)) = t56;
                t55 = (*(int *)(((int)stk + 8)));
                t55 = (t55 + 0xC);
                *(unsigned int *)(((int)stk + 8)) = t55;
                t54 = (*(int *)(((int)stk + 0)));
                t54 = (t54 + 0xC);
                *(unsigned int *)(((int)stk + 0)) = t54;
                t56 = (*(int *)(((int)stk + 12)));
                t56 = (t56 + 0xC);
                *(unsigned int *)(((int)stk + 12)) = t56;
                t55 = (*(int *)(((int)stk + 16)));
                if ((int)t55 >= (int)t1) {
                    break;
                }
            }
            t102 = t57;
            t103 = t58;
        }
        if (t102 != 0) {
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + (unsigned short)t103);
        }
    }
    return (*(int *)(((int)stk + 4)));
}

int FUN_0c19ca94(int a4, int a5, int a6)
{
    int stk[118];
    register int t0;
    register int t3;
    register int t5;
    register int t8;
    register int t9;
    register int t10;
    register int t14;
    register int t16;
    register int t17;
    register int t19;
    register int t37;
    register int t38;
    register int t73;
    register int t66;
    register int t40;
    register int t41;
    register int t42;
    register int t46;
    register int t48;
    register int t49;
    register int t51;
    register int t79;
    register int t81;
    register int t90;
    register int t95;
    register int t11;
    int t12;
    register int t13;
    register int t26;
    register int t43;
    int t44;
    register int t45;
    register int t59;
    register int t60;
    register int t97;

    (((struct o1D0_uint *)(((int)stk + 4)))->v) = a6;
    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned short *)(((int)stk + 4)) = (*(short *)(((*(int *)(((int)stk + 8))) + 0x2)));
    t3 = FUN_0c1a02cc((0x1D0 + ((int)stk + 4)), 0xC8B5DB4, 0x1);
    t5 = 0xFFFFFFFF;
    if ((short)t3 != 1) {
    } else {
        t5 = (unsigned char)(*(signed char *)0xC8B5DB4);
    }
    if ((short)t5 != -1) {
        *(unsigned int *)(((int)stk + 12)) = (0x114 + ((int)stk + 4));
        if ((int)(short)t5 > 0) {
            t8 = (0x114 + ((int)stk + 4));
            t9 = 0x0;
            for (;;) {
                t10 = t8;
                *(int *)((int)stk + 0) = t10;
                t8 = (t8 + 0x1);
                if (((0x1D4 + ((int)stk + 0)) != 0) && ((t11 = *(int *)(((int)stk + 468)), t11 != 0) && (t12 = *(int *)(((int)stk + 468)), t13 = *(short *)((t12 + 0x4)), (int)(unsigned short)t13 > (int)0x1))) {
                    t14 = *(int *)(((int)stk + 468));
                    *(unsigned short *)(((0x4 + t14) + 0x0)) = ((*(short *)((0x4 + t14))) - 1);
                    t16 = *(int *)(((int)stk + 468));
                    t17 = *(int *)((t16 + 0x0));
                    *(unsigned int *)((t16 + 0x0)) = (t17 + 0x1);
                    t26 = (unsigned char)(*(signed char *)((((t17 + 0x1) - 1) + 0x0)));
                } else {
                    t19 = FUN_0c1a02cc((0x1D4 + ((int)stk + 0)), 0xC8B5DB4, 0x1);
                    t26 = 0xFFFFFFFF;
                    if ((short)t19 != 1) {
                    } else {
                        t26 = (unsigned char)(*(signed char *)0xC8B5DB4);
                    }
                }
                t9 = (t9 + 0x1);
                *(unsigned char *)((t10 + 0x0)) = t26;
                if ((int)t9 >= (int)(short)t5) {
                    break;
                }
            }
        }
    }
    t37 = *(short *)(((int)stk + 4));
    t38 = ((t37 - t5) - 1);
    if ((int)(short)((t37 - t5) - 1) < 0) {
        t38 = 0x0;
    }
    t73 = t38;
    if ((short)t38 != 0) {
        *(unsigned int *)(((int)stk + 4)) = (0x154 + ((int)stk + 4));
        t66 = t38;
        if ((int)(short)t38 > 0) {
            t40 = t38;
            t41 = 0x0;
            for (;;) {
                t42 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t42 + 0x1);
                *(int *)((int)stk + 0) = ((t42 + 0x1) - 1);
                if (((0x1D4 + ((int)stk + 0)) != 0) && ((t43 = *(int *)(((int)stk + 468)), t43 != 0) && (t44 = *(int *)(((int)stk + 468)), t45 = *(short *)((t44 + 0x4)), (int)(unsigned short)t45 > (int)0x1))) {
                    t46 = *(int *)(((int)stk + 468));
                    *(unsigned short *)(((0x4 + t46) + 0x0)) = ((*(short *)((0x4 + t46))) - 1);
                    t48 = *(int *)(((int)stk + 468));
                    t49 = *(int *)((t48 + 0x0));
                    *(unsigned int *)((t48 + 0x0)) = (t49 + 0x1);
                    t59 = (unsigned char)(*(signed char *)((((t49 + 0x1) - 1) + 0x0)));
                    t60 = t40;
                } else {
                    t40 = 0x1D4;
                    t40 = (t40 + ((int)stk + 0));
                    t51 = FUN_0c1a02cc(t40, 0xC8B5DB4, 0x1);
                    t59 = 0xFFFFFFFF;
                    if ((short)t51 != 1) {
                    } else {
                        t59 = (unsigned char)(*(signed char *)0xC8B5DB4);
                    }
                }
                t40 = t60;
                t41 = (t41 + 0x1);
                *(unsigned char *)((((t42 + 0x1) - 1) + 0x0)) = t59;
                if ((int)t41 >= (int)(short)t38) {
                    break;
                }
            }
            t66 = t40;
        }
        *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x0)) = 0x0;
        t73 = t66;
    }
    (((struct o90_uchar *)(((int)stk + 4)))->v) = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x1)));
    { int k_; for (k_ = 0; (*(char *)(((int)stk + 0x95) + k_) = *(char *)((*(int *)((t0 + 0x4))) + k_)) != 0; k_++) ; }  /* manual: _slow_strcpy r0 r15 + 0x91 (stk + 0x95), r1 the word at r12 (t0) + 4 */
    t79 = strlen((*(int *)((t0 + 0x4))));
    t81 = strlen((*(int *)((t0 + 0x0))));
    FUN_0c187a88((((unsigned short)t79 + (0x90 + ((int)stk + 4))) + 0x1), (*(int *)(((int)stk + 12))), (short)t5);
    memset((((int)stk + 4) + 0xC), 0x0, 0x81);
    *(unsigned char *)(((((int)stk + 4) + 0xC) + 0x0)) = 0x10;
    FUN_0c1a14c0((0x178 + ((int)stk + 4)));
    FUN_0c1a14dc((0x178 + ((int)stk + 4)), (0x90 + ((int)stk + 4)), (((unsigned short)t79 + (short)t5) + 0x1));
    FUN_0c1a1574(((((int)stk + 4) + 0xC) + 0x1), (0x178 + ((int)stk + 4)));
    FUN_0c187a88(((((int)stk + 4) + 0xC) + 0x11), (*(int *)((t0 + 0x0))), (short)t81);
    t90 = FUN_0c1a03b2((((int)stk + 4) + 0xC), (t81 + 0x11));
    FUN_0c19d2b4(a4, 0x2, (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x1))), t90);
    if ((int)(unsigned char)(*(signed char *)((a4 + 0x6))) > 0) {
        t95 = *(signed char *)((a4 + 0x6));
        *(unsigned char *)((a4 + 0x6)) = (t95 - 1);
        t97 = (t95 - 1);
    } else {
        t97 = (FUN_0c19c9fc(a4));
    }
    return t97;
}

