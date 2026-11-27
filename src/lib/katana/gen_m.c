/* Straight-line functions with calls and guards (batch gen_m): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_int { char p[0x100]; int v; };
struct o104_int { char p[0x104]; int v; };
struct o108_int { char p[0x108]; int v; };
struct o10C_short { char p[0x10C]; short v; };
struct o10C_ushort { char p[0x10C]; unsigned short v; };
struct o10E_ushort { char p[0x10E]; unsigned short v; };
struct o110_short { char p[0x110]; short v; };
struct o112_ushort { char p[0x112]; unsigned short v; };
struct o118_short { char p[0x118]; short v; };
struct o118_ushort { char p[0x118]; unsigned short v; };
struct o11A_short { char p[0x11A]; short v; };
struct o11A_ushort { char p[0x11A]; unsigned short v; };
struct o120_short { char p[0x120]; short v; };
struct o120_ushort { char p[0x120]; unsigned short v; };
struct o122_short { char p[0x122]; short v; };
struct o122_ushort { char p[0x122]; unsigned short v; };
struct o124_ushort { char p[0x124]; unsigned short v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_short { char p[0x12C]; short v; };
struct o13A_short { char p[0x13A]; short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o140_uchar { char p[0x140]; unsigned char v; };
struct o144_short { char p[0x144]; short v; };
struct o146_short { char p[0x146]; short v; };
struct o158_int { char p[0x158]; int v; };
struct o16C_short { char p[0x16C]; short v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1D4_uint { char p[0x1D4]; unsigned int v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uchar { char p[0x54]; unsigned char v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_int { char p[0x60]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_int { char p[0x70]; int v; };
struct o74_int { char p[0x74]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_uchar { char p[0x94]; unsigned char v; };
struct oA8_int { char p[0xA8]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oB0_short { char p[0xB0]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oE0_uint { char p[0xE0]; unsigned int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF4_short { char p[0xF4]; short v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };
extern int _slow_strcpy();
int FUN_0c187a88(int, int, int);
int FUN_0c18da58(void);
int FUN_0c18da86(int);
int FUN_0c18dab4(int);
int FUN_0c18dae8(int, int, int);
int FUN_0c18dcf2(int, int);
int FUN_0c18dd02(int);
int FUN_0c18dd06(int, int);
int FUN_0c1901e4(int);
int FUN_0c190344(int, int, int, int);
int FUN_0c1904d8(int);
int FUN_0c190bfc(int);
int FUN_0c190fa0(int, int);
int FUN_0c1965cc(int, int, int);
int FUN_0c198134(int, int, int, int);
int FUN_0c198314(int);
int FUN_0c198790(int, int, int, int);
int FUN_0c19c678(int, int, int);
int FUN_0c19c774(int, int, int);
int FUN_0c19d2b4(int, int, int, int);
int FUN_0c1a02cc(int, int, int);
int FUN_0c1a03b2(int, int);
int FUN_0c1a14c0(int);
int FUN_0c1a14dc(int, int, int);
int FUN_0c1a1574(int, int);
extern int FUN_0c1a2184();
int FUN_0c2d2d10(void);
int FUN_0c2d4768(int, int);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d4ad2(void);
int FUN_0c2d73f6(int);
int FUN_0c2e3afe(int, int, int, int);
int FUN_0c2e3d4a(int, int, int, int, int, int, int, int, int, int);
int FUN_0c2e6404(void);
int FUN_0c2e6474(int, int);
int FUN_0c2e6874(int);
int FUN_0c2e93ac(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int syIntAdrChk_dumpline(int, int, int);
int syIntAdrChk_init(void);
int FUN_0c2fb8b2(int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
int kmiFLWCTRLCheckVBufOverflow(int, int, int, int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmyGetDMAHANDLE(int);
int kmyRequestCallback(int);
int kmyRequestDMA(int);
int kmySetTADMA(int, int, int, int, int, int);
int kmytex_FBAllocEntry(void);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int kmytex_FBFreeEntry(int);
int nlLineSendQuadA(int, int, int, int, float, float);
int nlLineSendQuadB(int, int, int, int, float, float);
int nlLineSendQuadC(int, int, int, int, float, float);
int nlLineSendQuadD(int, int, int, int, float, float);
int nlLineSendQuadE(int, int, int, float);
int strlen(int);
int syIntAdrChk_finish(void);
int syIntAdrChk_getchar(void);
int syIntAdrChk_printh(int);
int FUN_0c2ccce0(int a4);
int FUN_0c2d21ba(void);
int FUN_0c2cb300(int a4);
int FUN_0c197eb4(int a4, int a5, int a6);
int kmytex_ABSalloc(int a4, int a5, int a6, int a7);
int FUN_0c19ccc0(int a4, int a5, int a6);
int kmyRegisterBGPlane(int a4);
int FUN_0c2e38c2(int a4);
int FUN_0c2edfa0(int a4);
int syIntChkDump(int a4, int a5);
int FUN_0c2e6d72(void);
void ADXF_Ocbi(int a4, int a5, int a6, int a7);
int FUN_0c1826a0(int a4, int a5, int a6, int a7);
int FUN_0c190d42(int a4, int a5);

int FUN_0c2ccce0(int a4)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t4;
    register int t12;
    int t13;
    register int t17;
    register int t20;
    register int t77;
    register int t31;
    register int t33;
    register int t34;
    register int t37;
    register int t39;
    register int t41;
    register int t43;
    register int t45;
    register int t51;
    register int t54;
    register int t80;
    register int t27;
    register int t72;

    t12 = *(int *)((a4 + 0x8));
    t2 = *(int *)((t12 + 0x10));
    t3 = *(int *)(((*(int *)((a4 + 0x18))) + 0xC));
    t4 = (((struct o2C_int *)0xC8BFF68)->v);
    *(unsigned int *)(((int)stk + 8)) = (t2 << 2);
    *(unsigned int *)((((t2 << 2) + (0x184 + t4)) + 0x0)) = 0x0;
    t13 = 0x0;
    if (((((struct o0_int *)0xC8BFF68)->v)) == 0) {
    } else {
        *(unsigned int *)0xC8BF0DC = (*(int *)0xFFD8000C);
        t13 = t3;
    }
    *(unsigned int *)(((int)stk + 16)) = 0x5;
    for (;;) {
        *(int *)((int)stk + 4) = (((0xE4 + t4) + (((t2 << 2) + t2) << 2)) + (t13 << 2));
        t17 = *(int *)(((t13 << 2) + (*(int *)((a4 + 0x0)))));
        t20 = *(int *)(((t13 << 2) + ((*(int *)((((*(int *)(((*(int *)((a4 + 0x8))) + 0xC))) << 2) + (*(int *)((a4 + 0xC)))))) + (((t2 << 2) + t2) << 2))));
        *(unsigned int *)(((((t4 + 0x44) + (((t2 << 2) + t2) << 2)) + (t13 << 2)) + 0x0)) = t20;
        *(unsigned int *)(((((0xE4 + t4) + (((t2 << 2) + t2) << 2)) + (t13 << 2)) + 0x0)) = (t17 - t20);
        if ((((((struct o0_int *)0xC8BFF68)->v)) != 0) && (t13 == t3)) {
            t27 = t12;
        } else {
            t12 = a4;
            kmiFLWCTRLCheckVBufOverflow(t12, t4, t2, t13);
        }
        t12 = t27;
        t77 = t12;
        if ((*(int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2))))) != 0) {
            if (((((struct o0_int *)0xC8BFF68)->v)) == 0) {
                t31 = *(int *)((a4 + 0x0));
                t12 = (*(int *)(((t13 << 2) + t31)));
                t33 = *(int *)(((t13 << 2) + t31));
                t12 = (t12 & 0x3FFFFFF);
                t12 = (t12 | 0xE0000000);
                (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t33 >> 16) >> 8);
                (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t33 >> 16) >> 8);
                *(unsigned int *)((t12 + 0x0)) = 0x0;
                _builtin_prefetch((void *)t12);
                t34 = *(int *)((a4 + 0x0));
                *(unsigned int *)(((t13 << 2) + t34)) = ((*(int *)(((t13 << 2) + t34))) + 0x20);
                *(unsigned int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2)))) = ((*(int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2))))) + 0x20);
                t37 = *(int *)(((int)stk + 8));
                *(unsigned int *)((((0x184 + t4) + t37) + 0x0)) = ((*(int *)((((0x184 + t4) + t37) + 0x0))) | ((int)0x1 << (int)t13));
                t72 = t12;
            } else {
                if (t13 != t3) {
                    t39 = *(int *)((a4 + 0x0));
                    t12 = (*(int *)(((t13 << 2) + t39)));
                    t41 = *(int *)(((t13 << 2) + t39));
                    t12 = (t12 & 0x3FFFFFF);
                    t12 = (t12 | 0xE0000000);
                    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t41 >> 16) >> 8);
                    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t41 >> 16) >> 8);
                    *(unsigned int *)((t12 + 0x0)) = 0x0;
                    _builtin_prefetch((void *)t12);
                    *(unsigned int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2)))) = ((*(int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2))))) + 0x20);
                    t43 = *(int *)(((int)stk + 8));
                    *(unsigned int *)((((0x184 + t4) + t43) + 0x0)) = ((*(int *)((((0x184 + t4) + t43) + 0x0))) | ((int)0x1 << (int)t13));
                } else {
                    t45 = *(int *)(((int)stk + 8));
                    *(unsigned int *)((((0x184 + t4) + t45) + 0x0)) = ((*(int *)((((0x184 + t4) + t45) + 0x0))) | ((int)0x1 << (int)t13));
                    *(unsigned int *)(((t13 << 2) + ((t4 + 0x44) + (((t2 << 2) + t2) << 2)))) = 0xC2E3240;
                    *(unsigned int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2)))) = 0x20;
                }
                t51 = *(int *)((a4 + 0x0));
                *(unsigned int *)(((t13 << 2) + t51)) = ((*(int *)(((t13 << 2) + t51))) + 0x20);
                if (t2 != (((((struct o0_int *)0xC8BFFB4)->v)) - 1)) {
                    for (;;) {
                        t12 = 0x0;
                        t54 = kmyGetDMAHANDLE(t12);
                        *(unsigned int *)(((int)stk + 12)) = t54;
                        if (t54 != 0) {
                            break;
                        }
                        t12 = 0x7;
                        kmyRequestCallback(t12);
                    }
                    *(int *)((int)stk + 4) = ((int)0x1 << (int)t13);
                    *(int *)((int)stk + 0) = 0x0;
                    t12 = (*(int *)(((int)stk + 12)));
                    kmySetTADMA(t12, (*(int *)((t4 + 0x3C))), (*(int *)(((t13 << 2) + ((t4 + 0x44) + (((t2 << 2) + t2) << 2))))), (*(int *)(((t13 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2))))), 0x0, ((int)0x1 << (int)t13));
                    t12 = (*(int *)(((int)stk + 12)));
                    (((struct o8_uint *)0xC8BFFB4)->v) = (kmyRequestDMA(t12));
                } else {
                    t72 = t12;
                }
            }
            t77 = t72;
        }
        t12 = t77;
        t13 = (t13 + 0x1);
        if ((unsigned int)t13 >= (unsigned int)0x5) {
            t13 = 0x0;
        }
        t80 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 16)) = (t80 - 1);
        if ((t80 - 1) != 0) continue;
        break;
    }
    return 0x0;
}

int FUN_0c2d21ba(void)
{
    register int t2;
    register int t3;
    register int t5;
    register int t11;
    register int t13;
    register int t25;
    register int t31;
    register int t26;
    register int t30;
    register int t43;
    register int t46;
    register int t48;
    register int t50;
    register int t52;
    register int t59;
    register int t61;
    register int t63;
    register int t65;
    register int t67;
    register int t74;
    register int t76;
    register int t90;
    register int t91;
    register int t94;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t54;
    register int t56;
    int t80;
    register int t81;
    register int t87;

    (((struct o7_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F7) & 0xFD);
    (((struct o7_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F7) & 0xFE);
    t2 = FUN_0c2d2d10();
    if ((signed char)t2 != 0) {
        t3 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o14_uchar *)(t3))->v) = ((*(signed char *)(((t3 + 0x14) + 0x0))) & 0xF7);
        t5 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o24_uchar *)(t5))->v) = ((*(signed char *)(((t5 + 0x24) + 0x0))) | 0x4);
        *(volatile signed char *)(((((((struct o0_int *)0xC8D25F0)->v)) + 0x24) + 0x0));
        
        t11 = ((int (*)(void))(FUN_0c1a2184))();
        FUN_0c2d4ad2();
        t13 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o20_uchar *)(t13))->v) = ((*(signed char *)(((t13 + 0x20) + 0x0))) | 0x40);
        if ((((*(signed char *)(((((((struct o0_int *)0xC8D25F0)->v)) + 0x24) + 0x0))) & 16) == 0) && ((t17 = (((struct o0_int *)0xC8D25F0)->v), t18 = *(signed char *)((0x48 + t17)), (unsigned char)t18 == 2) || (t19 = (((struct o0_int *)0xC8D25F0)->v), t20 = *(signed char *)((0x48 + t19)), (unsigned char)t20 == 1))) {
            (((struct o7_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F7) | 0x2);
        }
        t25 = *(signed char *)(((((((struct o0_int *)0xC8D25F0)->v)) + 0x24) + 0x0));
        t31 = t25;
        if ((t25 & 16) != 0) {
            t26 = (((struct o0_int *)0xC8D25F0)->v);
            (((struct o20_uchar *)(t26))->v) = ((*(signed char *)(((t26 + 0x20) + 0x0))) | 0x1);
            FUN_0c2ec410(0xC8D2698, 0x1);
            for (;;) {
                t30 = FUN_0c2ec430(((((struct o4_int *)0xC8D2694)->v)));
                if ((signed char)t30 != 0) {
                    break;
                }
            }
            t31 = (signed char)t30;
        }
        return t31;
    }
    (((struct o0_uint *)0xC8D2694)->v) = 0x0;
    (((struct oE_uchar *)0xC8D25F0)->v) = 0x0;
    (((struct o30_uchar *)0xC8D25F0)->v) = 0x1;
    (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xBF);
    (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xDF);
    (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xEF);
    (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xF7);
    (((struct o5_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F5) & 0xF7);
    (((struct o5_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F5) & 0xFB);
    FUN_0c2e93ac();
    t43 = (((struct o0_int *)0xC8D25F0)->v);
    (((struct o14_uchar *)(t43))->v) = ((*(signed char *)(((t43 + 0x14) + 0x0))) & 0xEF);
    if (((unsigned char)(*(signed char *)0xC8D2668) & 1) != 0) {
        t46 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o54_uchar *)(t46))->v) = ((*(signed char *)(((t46 + 0x54) + 0x0))) | 0x8);
        t48 = (((struct o0_int *)0xC8D25F0)->v);
        t54 = ((*(signed char *)(((t48 + 0x24) + 0x0))) & 0xFB);
        t56 = (t48 + 0x24);
    } else {
        t50 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o54_uchar *)(t50))->v) = ((*(signed char *)(((t50 + 0x54) + 0x0))) & 0xF7);
        t52 = (((struct o0_int *)0xC8D25F0)->v);
        t54 = ((*(signed char *)(((t52 + 0x24) + 0x0))) | 0x4);
        t56 = (t52 + 0x24);
    }
    *(unsigned char *)((t56 + 0x0)) = t54;
    if (((unsigned char)(*(signed char *)0xC8D2668) & 2) != 0) {
        t59 = (((struct o0_int *)0xC8D25F0)->v);
        *(unsigned char *)((t59 + 0xC)) = ((*(signed char *)((t59 + 0xC))) | 0x8);
        t61 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o54_uchar *)(t61))->v) = ((*(signed char *)(((t61 + 0x54) + 0x0))) | 0x1);
        t63 = FUN_0c2d4768(0x3A5, 0x1);
        FUN_0c2d487c(0x3A5, (0x10 | (unsigned char)t63), 0x1);
    } else {
        t65 = (((struct o0_int *)0xC8D25F0)->v);
        *(unsigned char *)((t65 + 0xC)) = ((*(signed char *)((t65 + 0xC))) & 0xF7);
        t67 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o54_uchar *)(t67))->v) = ((*(signed char *)(((t67 + 0x54) + 0x0))) & 0xFE);
        t87 = 0xC8D2668;
    }
    t74 = (((struct o0_int *)0xC8D25F0)->v);
    (((struct o24_uchar *)(t74))->v) = ((*(signed char *)(((t74 + 0x24) + 0x0))) | 0x1);
    t76 = (((struct o0_int *)0xC8D25F0)->v);
    (((struct o20_uchar *)(t76))->v) = ((*(signed char *)(((t76 + 0x20) + 0x0))) | 0x1);
    if ((((unsigned char)(*(signed char *)((0x48 + ((((struct o0_int *)0xC8D25F0)->v))))) & 0xF0) == 0xA0) && (t80 = (((struct o0_int *)0xC8D25F0)->v), t81 = *(signed char *)(((t80 + 0x24) + 0x0)), (t81 & 16) == 0)) {
        FUN_0c2d487c(0xA04, 0x0, 0x2);
    } else {
    }
    *(volatile signed char *)(((((((struct o0_int *)0xC8D25F0)->v)) + 0x54) + 0x0));
    t90 = ((int (*)(int))(FUN_0c1a2184))(t87);
    t91 = FUN_0c2d4768(0x10D, 0x1);
    FUN_0c2d487c(0x10D, (0x8 | (unsigned char)t91), 0x1);
    t94 = *(signed char *)(((((((struct o0_int *)0xC8D25F0)->v)) + 0x24) + 0x0));
    if ((t94 & 16) != 0) {
        return FUN_0c2ec410(0xC8D2688, 0xC8);
    }
    return t94;
}

int FUN_0c2cb300(int a4)
{
    int t45;

    (((struct o0_uint *)0xC8D0644)->v) = 0x0;
    (((struct o4_uint *)0xC8D0644)->v) = 0x0;
    (((struct o10_uint *)0xC8D0644)->v) = ((((struct oF8_int *)(a4))->v));
    (((struct o14_uint *)0xC8D0644)->v) = ((((struct oF0_int *)(a4))->v));
    (((struct o18_uint *)0xC8D0644)->v) = ((((struct oF4_int *)(a4))->v));
    (((struct o0_uint *)0xC8D0604)->v) = ((((((((((((((struct o54_int *)(a4))->v)) << 1) | ((((struct o50_int *)(a4))->v))) | (((((struct o5C_int *)(a4))->v)) << 2)) | ((((((struct o68_int *)(a4))->v)) << 2) << 1)) | (((*(int *)((a4 + 0x30))) << 2) << 2)) | (((((((struct o60_int *)(a4))->v)) << 2) << 2) << 1)) | ((((*(int *)((a4 + 0x28))) << 2) << 2) << 2)) | ((*(int *)((a4 + 0x2C))) << 7)) | (((((struct o48_int *)(a4))->v)) << 8)) | ((((((struct o4C_int *)(a4))->v)) << 8) << 1));
    (((struct oC_uint *)0xC8D0604)->v) = (((*(int *)((a4 + 0x4))) & 0x7FF) | (((*(int *)((a4 + 0x0))) & 0x7FF) << 16));
    (((struct o4_uint *)0xC8D0604)->v) = (((*(int *)((a4 + 0x4))) & 0x7FF) << 16);
    (((struct o10_uint *)0xC8D0604)->v) = (((*(int *)((a4 + 0x8))) & 0x7FF) | (((*(int *)((a4 + 0x14))) & 0x7FF) << 16));
    (((struct o14_uint *)0xC8D0604)->v) = (((*(int *)((a4 + 0x10))) & 0x7FF) | (((*(int *)((a4 + 0xC))) & 0x7FF) << 16));
    (((struct o8_uint *)0xC8D0604)->v) = ((((((struct o74_int *)(a4))->v)) & 0x7FF) | ((((((struct o78_int *)(a4))->v)) & 0x7FF) << 16));
    (((struct o18_uint *)0xC8D0604)->v) = (((((*(int *)((a4 + 0x18))) & 0x7F) | (((*(int *)((a4 + 0x1C))) & 0xF) << 8)) | (((((*(int *)((a4 + 0x20))) & 0x3FF) << 8) << 2) << 2)) | (((*(int *)((a4 + 0x24))) & 0x7F) << 22));
    (((struct o24_uint *)0xC8D0604)->v) = ((((((((*(int *)((a4 + 0x34))) & 0x1) | (((*(int *)((a4 + 0x38))) & 0x1) << 1)) | (((*(int *)((a4 + 0x3C))) & 0x1) << 2)) | (((((((struct o40_int *)(a4))->v)) & 0x1) << 2) << 1)) | (((0xF & ((((struct o44_int *)(a4))->v))) << 2) << 2)) | ((((((struct o6C_int *)(a4))->v)) & 0x1) << 8)) | ((((((struct o70_int *)(a4))->v)) & 0x3F) << 16));
    (((struct o28_uint *)0xC8D0604)->v) = (((((struct o10_int *)0xC8D0644)->v)) + ((((struct o0_int *)0xC8D0644)->v)));
    (((struct o2C_uint *)0xC8D0604)->v) = ((((((struct o14_int *)0xC8D0644)->v)) + ((((struct o4_int *)0xC8D0644)->v))) | ((((((struct o18_int *)0xC8D0644)->v)) + ((((struct o4_int *)0xC8D0644)->v))) << 16));
    t45 = kmiReadRegister(0x44);
    kmiWriteRegister(0x44, (0x800000 & t45));
    kmiWriteRegister(0x5C, 0x0);
    kmiWriteRegister(0xCC, ((((struct o8_int *)0xC8D0604)->v)));
    kmiWriteRegister(0xD0, ((((struct o0_int *)0xC8D0604)->v)));
    kmiWriteRegister(0xD4, ((((struct oC_int *)0xC8D0604)->v)));
    kmiWriteRegister(0xD8, ((((struct o10_int *)0xC8D0604)->v)));
    kmiWriteRegister(0xDC, ((((struct o14_int *)0xC8D0604)->v)));
    kmiWriteRegister(0xE0, ((((struct o18_int *)0xC8D0604)->v)));
    kmiWriteRegister(0xEC, ((((struct o28_int *)0xC8D0604)->v)));
    kmiWriteRegister(0xF0, ((((struct o2C_int *)0xC8D0604)->v)));
    kmiWriteRegister(0xE8, (((((struct o24_int *)0xC8D0604)->v)) | 0x8));
    return (kmiWriteRegister(0xC8, ((((struct o4_int *)0xC8D0604)->v))));
}

int FUN_0c197eb4(int a4, int a5, int a6)
{
    int stk[15];
    register int t12;
    register int t110;
    register int t16;
    register int t62;
    register int t78;
    register int t97;
    register int t82;
    register int t83;
    register int t84;
    register int t85;
    register int t92;
    register int t9;
    register int t102;
    register int t25;
    register int t26;
    register int t27;

    *(unsigned int *)(((int)stk + 0)) = (unsigned short)a5;
    *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a4 + 0x4))) - (unsigned short)a5);
    *(unsigned short *)((a4 + 0x8)) = ((*(short *)((a4 + 0x8))) - a5);
    FUN_0c18dd06((a4 + 0xC), (*(int *)(((int)stk + 0))));
    if ((*(signed char *)((a4 + 0x10))) == 1) {
        t9 = (FUN_0c18dd02((a4 + 0xC)));
    } else {
        FUN_0c18dcf2((((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x34));
        FUN_0c18dae8((((int)stk + 0) + 0x2C), (a4 + 0xC), 0x8);
        t9 = (((int)stk + 0) + 0x34);
    }
    FUN_0c19c678(0x0, a4, 0x0);
    t12 = *(signed char *)((t9 + 0x0));
    t110 = 0x0;
    if ((unsigned char)t12 == 0) {
    } else {
        if ((unsigned char)t12 != 8) {
            if ((unsigned char)t12 != 3) {
                t102 = 0x0;
                if ((unsigned char)t12 == 4) {
                } else {
                    if ((unsigned char)t12 == 5) {
                        FUN_0c18dd06((a4 + 0xC), 0x8);
                        FUN_0c18dcf2((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x1C));
                        FUN_0c18dae8((((int)stk + 0) + 0x14), (a4 + 0xC), 0x14);
                        t16 = *(signed char *)((t9 + 0x1));
                        if (((unsigned char)t16 != 0) && ((unsigned char)t16 != 2)) {
                            FUN_0c187a88((((int)stk + 0) + 0x4), (t9 + 0x4), 0x4);
                            t25 = (*(int *)(((int)stk + 44)));
                            t26 = (*(int *)(((int)stk + 4)));
                            t27 = 0x6;
                        } else {
                            FUN_0c187a88((((int)stk + 0) + 0x8), (t9 + 0x4), 0x4);
                            t26 = *(int *)(((int)stk + 8));
                            t25 = (FUN_0c198314((*(int *)(((int)stk + 44)))));
                            t27 = 0x2;
                        }
                        FUN_0c198790(t25, t26, t27, a6);
                        t102 = 0x0;
                    } else {
                        t102 = 0x0;
                        if ((unsigned char)t12 == 14) {
                        } else {
                            if ((unsigned char)t12 == 18) {
                                if (((((struct o0_short *)0xC8B5D98)->v)) == 0) {
                                    (((struct o2_ushort *)0xC8B5D98)->v) = (*(short *)((t9 + 0x6)));
                                    (((struct o0_ushort *)0xC8B5D98)->v) = (*(short *)((t9 + 0x4)));
                                    (((struct o4_uint *)0xC8B5D98)->v) = (*(int *)((t9 + 0x8)));
                                }
                                t102 = 0x0;
                            } else {
                                t102 = 0x0;
                                if ((unsigned char)t12 == 13) {
                                } else {
                                    t102 = 0x0;
                                    if ((unsigned char)t12 == 17) {
                                    } else {
                                        t102 = 0x0;
                                        if ((unsigned char)t12 == 11) {
                                        } else {
                                            t102 = 0xFFFFFFFF;
                                            if ((unsigned char)t12 == 12) {
                                                t102 = 0x0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                FUN_0c18dd06((a4 + 0xC), 0x8);
                FUN_0c18dcf2((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x1C));
                FUN_0c18dae8((((int)stk + 0) + 0xC), (a4 + 0xC), 0x14);
                t62 = *(signed char *)(((int)stk + 28));
                *(unsigned short *)(((int)stk + 0)) = (((unsigned char)t62 & 0xF) << 2);
                FUN_0c18dd06((a4 + 0xC), (unsigned short)(((unsigned char)t62 & 0xF) << 2));
                if ((unsigned char)(*(signed char *)(((int)stk + 37))) != 17) {
                } else {
                    FUN_0c18dcf2((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x14));
                    FUN_0c18dae8((((int)stk + 0) + 0xC), (a4 + 0xC), 0x8);
                    FUN_0c19c774((*(short *)(((int)stk + 22))), (*(int *)(((int)stk + 44))), (*(signed char *)((t9 + 0x1))));
                }
                t102 = 0x0;
            }
        } else {
            t78 = FUN_0c18da58();
            t97 = 0xFFFFFFFF;
            if (t78 == 0) {
            } else {
                *(unsigned int *)((t78 + 0x0)) = (*(int *)((a4 + 0x0)));
                *(unsigned int *)((t78 + 0x4)) = (*(int *)((a4 + 0x4)));
                t82 = t78;
                t83 = 0xC18DCF2;
                t84 = (*(int *)((a4 + 0x0)));
                t85 = 0x0;
                for (;;) {
                    if ((int)t85 >= (int)(*(int *)((a4 + 0x0)))) {
                        break;
                    }
                    t83 = t85;
                    t83 = (t83 << 1);
                    t83 = (t83 + t85);
                    t84 = (t84 - 1);
                    *(unsigned int *)(((int)stk + 0)) = (((t84 << 1) + t84) << 2);
                    t82 = (*(short *)((((((t84 << 1) + t84) << 2) + (a4 + 0x8)) + 0x0)));
                    t83 = (t83 << 2);
                    *(unsigned short *)((((t78 + 0x8) + t83) + 0x0)) = t82;
                    t82 = (FUN_0c187a88((((t78 + 0x8) + t83) + 0x4), (((a4 + 0x8) + (*(int *)(((int)stk + 0)))) + 0x4), 0x8));
                    t85 = (t85 + 0x1);
                }
                t92 = FUN_0c198134(0x0, 0x0, a6, t78);
                if (t92 == -1) {
                    FUN_0c18da86(t78);
                    t97 = 0xFFFFFFFF;
                } else {
                    FUN_0c18da86(t78);
                    t97 = 0x0;
                }
            }
            t102 = t97;
        }
        t110 = t102;
    }
    return t110;
}

int kmytex_ABSalloc(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t4;
    register int t7;
    register int t17;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t133;
    register int t30;
    register int t33;
    register int t47;
    register int t51;
    register int t68;
    register int t70;
    register int t85;
    register int t86;
    register int t89;
    register int t90;
    register int t97;
    register int t9;
    register int t14;
    int t15;
    register int t40;
    register int t58;
    register int t77;
    register int t106;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned short *)(((int)stk + 8)) = a7;
    t0 = *(int *)((a6 + 0x0));
    t1 = ((t0 + 0x20) & 0xFFFFFFE0);
    if ((t0 & 0x1F) == 0) {
        t1 = t0;
    }
    t4 = ((a5 + 0x20) & 0xFFFFFFE0);
    if ((a5 & 0x1F) == 0) {
        t4 = a5;
    }
    t7 = *(short *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = ((t7 << 2) << 2);
    t11 = *(int *)(((((t7 << 2) << 2) + 0xC304140) + 0x8));
    t17 = 0x0;
    if (t11 != 0) {
        t10 = 0xC304140;
        t12 = 0x0;
        for (;;) {
            t13 = *(int *)((t11 + 0xC));
            if (((unsigned int)t13 <= (unsigned int)t1) && ((t14 = *(int *)((t11 + 0x10)), t9 = t14, t9 = (t9 + t13), (unsigned int)t9 > (unsigned int)t1) && (((unsigned int)t13 <= (unsigned int)(t4 + t1)) && (t15 = *(int *)((t11 + 0x10)), t10 = t15, t10 = (t10 + t13), (unsigned int)t10 >= (unsigned int)(t4 + t1))))) {
                t12 = t11;
                t11 = 0x0;
            } else {
                t11 = (*(int *)((t11 + 0x8)));
            }
            if (t11 == 0) {
                break;
            }
        }
        t17 = t12;
    }
    t133 = 0x3;
    if (t17 == 0) {
    } else {
        if ((*(int *)((t17 + 0x10))) == t4) {
            t30 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 0)) = (0xC304140 + t30);
            kmytex_FBDeQueueEntry(((*(int *)(((int)stk + 0))) + 0x8), ((0xC304140 + t30) + 0xC), t17);
            t33 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 0)) = (0xC304140 + t33);
            kmytex_FBEnQueueTop((*(int *)(((int)stk + 0))), ((0xC304140 + t33) + 0x4), t17);
            *(unsigned int *)((a6 + 0x0)) = (*(int *)((t17 + 0xC)));
            *(unsigned int *)((t17 + 0x14)) = a6;
            *(unsigned short *)((t17 + 0x0)) = 0x1;
            if ((*(short *)(((int)stk + 8))) == 0) {
                t40 = ((*(short *)((t17 + 0x0))) | 0x40);
            } else {
                t40 = ((*(short *)((t17 + 0x0))) | 0x80);
            }
            *(unsigned short *)((t17 + 0x0)) = t40;
            *(unsigned short *)((t17 + 0x0)) = ((*(short *)((t17 + 0x0))) | (*(int *)(((int)stk + 12))));
            t133 = 0x0;
        } else {
            if ((*(int *)((t17 + 0xC))) == t1) {
                t47 = kmytex_FBAllocEntry();
                t133 = 0x3;
                if (t47 == 0) {
                } else {
                    *(unsigned int *)((t47 + 0xC)) = (*(int *)((t17 + 0xC)));
                    *(unsigned int *)((t47 + 0x10)) = t4;
                    *(unsigned int *)((t17 + 0x10)) = ((*(int *)((t17 + 0x10))) - t4);
                    *(unsigned int *)((t17 + 0xC)) = ((*(int *)((t17 + 0xC))) + t4);
                    t51 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 0)) = (0xC304140 + t51);
                    kmytex_FBEnQueueTop((*(int *)(((int)stk + 0))), ((0xC304140 + t51) + 0x4), t47);
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((t47 + 0xC)));
                    *(unsigned int *)((t47 + 0x14)) = a6;
                    *(unsigned short *)((t47 + 0x0)) = 0x1;
                    if ((*(short *)(((int)stk + 8))) == 0) {
                        t58 = ((*(short *)((t47 + 0x0))) | 0x40);
                    } else {
                        t58 = ((*(short *)((t47 + 0x0))) | 0x80);
                    }
                    *(unsigned short *)((t47 + 0x0)) = t58;
                    *(unsigned short *)((t47 + 0x0)) = ((*(short *)((t47 + 0x0))) | (*(int *)(((int)stk + 12))));
                    t133 = 0x0;
                }
            } else {
                if (((*(int *)((t17 + 0xC))) + (*(int *)((t17 + 0x10)))) == (t4 + t1)) {
                    t68 = kmytex_FBAllocEntry();
                    t133 = 0x3;
                    if (t68 != 0) {
                        *(unsigned int *)((t17 + 0x10)) = ((*(int *)((t17 + 0x10))) - t4);
                        *(unsigned int *)((t68 + 0xC)) = t1;
                        *(unsigned int *)((t68 + 0x10)) = t4;
                        t70 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 0)) = (0xC304140 + t70);
                        kmytex_FBEnQueueTop((*(int *)(((int)stk + 0))), ((0xC304140 + t70) + 0x4), t68);
                        *(unsigned int *)((a6 + 0x0)) = (*(int *)((t68 + 0xC)));
                        *(unsigned int *)((t68 + 0x14)) = a6;
                        *(unsigned short *)((t68 + 0x0)) = 0x1;
                        if ((*(short *)(((int)stk + 8))) == 0) {
                            t77 = ((*(short *)((t68 + 0x0))) | 0x40);
                        } else {
                            t77 = ((*(short *)((t68 + 0x0))) | 0x80);
                        }
                        *(unsigned short *)((t68 + 0x0)) = t77;
                        *(unsigned short *)((t68 + 0x0)) = ((*(short *)((t68 + 0x0))) | (*(int *)(((int)stk + 12))));
                        t133 = 0x0;
                    }
                } else {
                    t85 = kmytex_FBAllocEntry();
                    t133 = 0x3;
                    if (t85 != 0) {
                        t86 = kmytex_FBAllocEntry();
                        *(unsigned int *)(((int)stk + 0)) = t86;
                        if (t86 == 0) {
                            kmytex_FBFreeEntry(t85);
                            t133 = 0x3;
                        } else {
                            *(unsigned int *)(((int)stk + 20)) = (*(int *)((t17 + 0x10)));
                            t89 = *(int *)((t17 + 0xC));
                            *(unsigned int *)(((int)stk + 16)) = (t1 - t89);
                            *(unsigned int *)((t17 + 0x10)) = (t1 - t89);
                            *(unsigned int *)((t85 + 0xC)) = t1;
                            *(unsigned int *)((t85 + 0x10)) = t4;
                            t90 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 24)) = (0xC304140 + t90);
                            kmytex_FBEnQueueTop((*(int *)(((int)stk + 24))), ((0xC304140 + t90) + 0x4), t85);
                            *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0xC)) = (t4 + t1);
                            *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x10)) = (((*(int *)(((int)stk + 20))) - t4) - (*(int *)(((int)stk + 16))));
                            t97 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 16)) = (0xC304140 + t97);
                            kmytex_FBEnQueueEntry(((*(int *)(((int)stk + 16))) + 0xC), (*(int *)(((int)stk + 0))), (*(int *)(((0xC304140 + t97) + 0xC))));
                            *(unsigned int *)((a6 + 0x0)) = (*(int *)((t85 + 0xC)));
                            *(unsigned int *)((t85 + 0x14)) = a6;
                            *(unsigned short *)((t85 + 0x0)) = 0x1;
                            if ((*(short *)(((int)stk + 8))) == 0) {
                                t106 = ((*(short *)((t85 + 0x0))) | 0x40);
                            } else {
                                t106 = ((*(short *)((t85 + 0x0))) | 0x80);
                            }
                            *(unsigned short *)((t85 + 0x0)) = t106;
                            *(unsigned short *)((t85 + 0x0)) = ((*(short *)((t85 + 0x0))) | (*(int *)(((int)stk + 12))));
                            t133 = 0x0;
                        }
                    }
                }
            }
        }
    }
    return t133;
}


int kmyRegisterBGPlane(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)((a4 + 0x4));
    (((struct o4_uint *)0xC8D0CBC)->v) = ((t1 & 0xFFC30000) | ((t0 & 0xF) << 22));
    (((struct o8_uint *)0xC8D0CBC)->v) = (*(int *)((a4 + 0x8)));
    (((struct oC_uint *)0xC8D0CBC)->v) = (*(int *)((a4 + 0xC)));
    (((struct o10_uint *)0xC8D0CBC)->v) = (*(int *)((a4 + 0x10)));
    (((struct o14_uint *)0xC8D0CBC)->v) = (*(int *)((a4 + 0x14)));
    (((struct o18_uint *)0xC8D0CBC)->v) = (*(int *)(((a4 + 0x18) + 0x0)));
    if ((((unsigned int)((unsigned int)((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 16) >> 8) >> 1) & 0x1) != 0) {
        (((struct o1C_uint *)0xC8D0CBC)->v) = (*(int *)((a4 + 0x1C)));
        t2 = 0x7;
        if ((((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 22) & 0x1) == 0) {
            (((struct o20_uint *)0xC8D0CBC)->v) = (*(int *)((a4 + 0x20)));
            t2 = 0x8;
        }
        *(unsigned int *)((((t2 << 2) + 0xC8D0CC0) + 0x0)) = (*(int *)((a4 + 0x24)));
        t3 = (t2 + 0x1);
        if ((((unsigned int)((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 16) >> 8) & 0x1) != 0) {
            *(unsigned int *)(((((t2 + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = (*(int *)((a4 + 0x28)));
            t3 = ((t2 + 0x1) + 0x1);
        }
        t2 = t3;
    } else {
        (((struct o1C_uint *)0xC8D0CBC)->v) = (*(int *)((a4 + 0x24)));
        t2 = 0x7;
    }
    *(unsigned int *)((((t2 << 2) + 0xC8D0CC0) + 0x0)) = (*(int *)((a4 + 0x2C)));
    *(unsigned int *)(((((t2 + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = (*(int *)((a4 + 0x30)));
    *(unsigned int *)((((((t2 + 0x1) + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = (*(int *)(((a4 + 0x34) + 0x0)));
    if ((((unsigned int)((unsigned int)((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 16) >> 8) >> 1) & 0x1) != 0) {
        *(unsigned int *)(((((((t2 + 0x1) + 0x1) + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = (*(int *)((a4 + 0x38)));
        t3 = ((((t2 + 0x1) + 0x1) + 0x1) + 0x1);
        if ((((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 22) & 0x1) == 0) {
            *(unsigned int *)((((((((t2 + 0x1) + 0x1) + 0x1) + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = (*(int *)((a4 + 0x3C)));
            t3 = (((((t2 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
        }
        *(unsigned int *)((((t3 << 2) + 0xC8D0CC0) + 0x0)) = ((((struct o40_int *)(a4))->v));
        t4 = (t3 + 0x1);
        if ((((unsigned int)((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 16) >> 8) & 0x1) != 0) {
            *(unsigned int *)(((((t3 + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = ((((struct o44_int *)(a4))->v));
            t4 = ((t3 + 0x1) + 0x1);
        }
        t3 = t4;
    } else {
        *(unsigned int *)(((((((t2 + 0x1) + 0x1) + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = ((((struct o40_int *)(a4))->v));
        t3 = ((((t2 + 0x1) + 0x1) + 0x1) + 0x1);
    }
    *(unsigned int *)((((t3 << 2) + 0xC8D0CC0) + 0x0)) = ((((struct o48_int *)(a4))->v));
    *(unsigned int *)(((((t3 + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = ((((struct o4C_int *)(a4))->v));
    *(unsigned int *)((((((t3 + 0x1) + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = ((((struct o50_int *)(a4))->v));
    if ((((unsigned int)((unsigned int)((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 16) >> 8) >> 1) & 0x1) != 0) {
        *(unsigned int *)(((((((t3 + 0x1) + 0x1) + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = ((((struct o54_int *)(a4))->v));
        t2 = ((((t3 + 0x1) + 0x1) + 0x1) + 0x1);
        if ((((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 22) & 0x1) == 0) {
            *(unsigned int *)((((((((t3 + 0x1) + 0x1) + 0x1) + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = ((((struct o58_int *)(a4))->v));
            t2 = (((((t3 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
        }
        *(unsigned int *)((((t2 << 2) + 0xC8D0CC0) + 0x0)) = ((((struct o5C_int *)(a4))->v));
        t4 = (t2 + 0x1);
        if ((((unsigned int)((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 16) >> 8) & 0x1) != 0) {
            *(unsigned int *)(((((t2 + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = ((((struct o60_int *)(a4))->v));
            t4 = ((t2 + 0x1) + 0x1);
        }
        t0 = t4;
    } else {
        *(unsigned int *)(((((((t3 + 0x1) + 0x1) + 0x1) << 2) + 0xC8D0CC0) + 0x0)) = ((((struct o5C_int *)(a4))->v));
        t0 = ((((t3 + 0x1) + 0x1) + 0x1) + 0x1);
    }
    (((struct o0_uint *)0xC8D0CBC)->v) = (t0 << 2);
    return 0x0;
}

int FUN_0c2e38c2(int a4)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    int R5;
    register int R6;
    register int R7;
    int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = a4;
    v0_0 = (signed char)(FUN_0c2ec430((*(int *)0xC8D6614))) == 0;
    if (v0_0) goto L_C2E38DA;
    if (((*(signed char *)0xC8D6441) == 0)) goto L_C2E38EC;
    L_C2E38DA:;
    v0_0 = *(signed char *)0xC8D6783;
    (((struct o6_uchar *)0xC8D677D)->v) = (v0_0 | 0x2);
    *(unsigned char *)0xC8D6498 = 0x6;
    return (v0_0 | 0x2);
    L_C2E38EC:;
    v0_1 = R14;
    *(int *)((int)stk + 36) = v0_1;
    v0_2 = R13;
    *(int *)((int)stk + 32) = v0_2;
    v0_3 = R12;
    *(int *)((int)stk + 28) = v0_3;
    v0_4 = R11;
    *(int *)((int)stk + 24) = v0_4;
    v0_5 = R10;
    *(int *)((int)stk + 20) = v0_5;
    v0_6 = R9;
    *(int *)((int)stk + 16) = v0_6;
    v0_7 = R8;
    *(int *)((int)stk + 12) = v0_7;
    *(unsigned char *)(((int)stk + 4)) = ((*(signed char *)0xC8D677D) & 0x8);
    (((struct o0_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D677D) & 0xF7);
    (((struct o0_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D677D) & 0xFE);
    (((struct o8_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D6785) & 0xBF);
    v0_0 = *(signed char *)0xC8D677E;
    *(unsigned int *)(((int)stk + 24)) = v0_1;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    v0_1 = ((unsigned char)v0_0);
    R10 = (0x2);
    R11 = (0xC8D6498);
    R13 = (0x1);
    R14 = (0xC8D6778);
    R8 = (0x1);
    if ((((unsigned char)v0_0 & 8) == 0)) goto L_C2E3968;
    L_C2E3AE8:;
    *(unsigned char *)((R11 + 0x0)) = R10;
    L_C2E3AEA:;
    *(volatile int *)((int)stk + 8);
    *(volatile int *)((int)stk + 12);
    *(volatile int *)((int)stk + 16);
    *(volatile int *)((int)stk + 20);
    *(volatile int *)((int)stk + 24);
    return v0_1;
    L_C2E3968:;
    v0_0 = ((unsigned short)((((struct oB0_short *)((*(int *)0xC8D66E8)))->v)) & 16) == 0;
    if (v0_0) goto L_C2E3986;
    v0_0 = FUN_0c2e6404();
    v0_1 = ((signed char)v0_0);
    if (((signed char)v0_0 != 0)) goto L_C2E3986;
    goto L_C2E3AEA;
    L_C2E3986:;
    v0_1 = *(signed char *)0xC8D645B;
    R12 = (0xC8D6687);
    v0_0 = (R14);
    R5 = ((unsigned char)v0_1);
    R9 = (0xC8D6526);
    if (((0x3 & (unsigned char)v0_1) == 0)) goto L_C2E399E;
    if (!(((0x2 & R5) != 0))) goto L_C2E399E;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_1 = ((unsigned char)v0_2);
    if ((((unsigned char)v0_2 & 4) == 0)) goto L_C2E3A86;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) & 0xFB);
    v0_0 = FUN_0c2e3afe(0xC304178, R12, (*(signed char *)(((int)stk + 4))), 0x46);
    v0_1 = (v0_0);
    R13 = (v0_0);
    if (((unsigned char)v0_0 != 0)) goto L_C2E3A8A;
    goto L_C2E3AE8;
    L_C2E399E:;
    v0_1 = ((unsigned char)(*(signed char *)(((v0_0 + 0x10) + 0x0))) & 128) == 0;
    if (v0_1) goto L_C2E39BC;
    (((struct o10_uchar *)(v0_0))->v) = ((*(signed char *)(((v0_0 + 0x10) + 0x0))) & 0x7F);
    (((struct o10_uchar *)(v0_0))->v) = ((*(signed char *)(((v0_0 + 0x10) + 0x0))) | 0x2);
    R5 = ((v0_0 + 0x10));
    L_C2E39BC:;
    v0_0 = (unsigned char)(*(signed char *)(((*(int *)0xC304178) + 0x0))) != 76;
    if (v0_0) goto L_C2E3A30;
    FUN_0c2e3d4a(0xC8D63AE, R5, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 4), *(int *)((int)stk + 8), *(int *)((int)stk + 12), *(int *)((int)stk + 16), *(int *)((int)stk + 20));
    FUN_0c2e6474(R12, 0xC8D63AE);
    *(unsigned int *)(((int)stk + 0)) = 0xC8D63AE;
    L_C2E39DA:;
    v0_0 = (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) != 59;
    if (v0_0) goto L_C2E39E8;
    R13 = (R10);
    L_C2E3A8A:;
    FUN_0c2e6474(0xC8D63AE, R12);
    v0_0 = FUN_0c2e6874(R12);
    v0_1 = ((signed char)v0_0);
    if (((signed char)v0_0 != 1)) goto L_C2E3AA4;
    *(unsigned char *)((R11 + 0x0)) = 0x4;
    goto L_C2E3AEA;
    L_C2E3AA4:;
    *(unsigned char *)0xC8D644E = ((*(signed char *)0xC8D644E) | 0x80);
    (((struct o0_uchar *)0xC8D65EE)->v) = 0x8;
    *(unsigned int *)0xC8D6680 = R12;
    v0_0 = (*(signed char *)((R9 + 0x0))) != (*(signed char *)((R12 + 0x0)));
    if (v0_0) goto L_C2E3AC8;
    (((struct o10_uchar *)(R14))->v) = ((*(signed char *)(((R14 + 0x10) + 0x0))) | 0x2);
    L_C2E3AC8:;
    (((struct o1E_uchar *)0xC8D65EE)->v) = R8;
    (((struct o1E_uchar *)(R14))->v) = ((*(signed char *)(((R14 + 0x1E) + 0x0))) | 0x4);
    v0_1 = ((unsigned char)R13);
    if (((unsigned char)R13 != 2)) goto L_C2E3AE2;
    *(unsigned char *)((R11 + 0x0)) = 0x6;
    goto L_C2E3AEA;
    L_C2E3AE2:;
    *(unsigned char *)((R11 + 0x0)) = 0x5;
    v0_1 = (0x5);
    goto L_C2E3AEA;
    L_C2E39E8:;
    v0_0 = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) == (*(signed char *)((R9 + 0x0)));
    if (v0_0) goto L_C2E3A8A;
    v0_0 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_0 + 0x1);
    v0_0 = (*(signed char *)((((v0_0 + 0x1) - 1) + 0x0))) != 0;
    if (v0_0) goto L_C2E39DA;
    goto L_C2E3A8A;
    L_C2E3A30:;
    v0_0 = ((unsigned char)(*(signed char *)((R14 + 0x1))) & R8) != 0;
    if (v0_0) goto L_C2E3A8A;
    v0_0 = FUN_0c2e3afe(0xC304178, R12, (*(signed char *)(((int)stk + 4))), 0x46);
    v0_1 = (v0_0);
    R13 = (v0_0);
    if (((unsigned char)v0_0 == 0)) goto L_C2E3AE8;
    v0_0 = ((unsigned char)(*(signed char *)((R14 + 0x8))) & 128) == 0;
    if (v0_0) goto L_C2E3A8A;
    FUN_0c2e3d4a(R12, R5, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 4), *(int *)((int)stk + 8), *(int *)((int)stk + 12), *(int *)((int)stk + 16), *(int *)((int)stk + 20));
    *(unsigned char *)((R14 + 0x8)) = ((*(signed char *)((R14 + 0x8))) & 0x7F);
    goto L_C2E3A8A;
    L_C2E3A86:;
    *(unsigned char *)((R11 + 0x0)) = R8;
    goto L_C2E3AEA;
}

int FUN_0c2edfa0(int a4)
{
    if (a4 == 0) {
        return 0x0;
    }
    if ((unsigned int)a4 <= (unsigned int)0x4B) {
        return 0x1;
    }
    if ((unsigned int)a4 <= (unsigned int)0x12C) {
        return 0x2;
    }
    if ((unsigned int)a4 <= (unsigned int)0x258) {
        return 0x3;
    }
    if ((unsigned int)a4 <= (unsigned int)0x4B0) {
        return 0x4;
    }
    if ((unsigned int)a4 <= (unsigned int)0x960) {
        return 0x5;
    }
    if ((unsigned int)a4 <= (unsigned int)0x12C0) {
        return 0x6;
    }
    if ((unsigned int)a4 <= (unsigned int)0x1C20) {
        return 0x7;
    }
    if ((unsigned int)a4 <= (unsigned int)0x2580) {
        return 0x8;
    }
    if ((unsigned int)a4 <= (unsigned int)0x2EE0) {
        return 0xB;
    }
    if ((unsigned int)a4 <= (unsigned int)0x3840) {
        return 0xC;
    }
    if ((unsigned int)a4 <= (unsigned int)0x41A0) {
        return 0xD;
    }
    if ((unsigned int)a4 <= (unsigned int)0x4B00) {
        return 0xE;
    }
    if ((unsigned int)a4 <= (unsigned int)0x5460) {
        return 0x15;
    }
    if ((unsigned int)a4 <= (unsigned int)0x5DC0) {
        return 0x16;
    }
    if ((unsigned int)a4 <= (unsigned int)0x6720) {
        return 0x17;
    }
    if ((unsigned int)a4 <= (unsigned int)0x6D60) {
        return 0x18;
    }
    if ((unsigned int)a4 <= (unsigned int)0x7080) {
        return 0x19;
    }
    if ((unsigned int)a4 <= (unsigned int)0x7295) {
        return 0x1A;
    }
    if ((unsigned int)a4 <= (unsigned int)0x77CB) {
        return 0x1C;
    }
    if ((unsigned int)a4 <= (unsigned int)0x79E0) {
        return 0x1D;
    }
    if ((unsigned int)a4 <= (unsigned int)0x7D00) {
        return 0x1E;
    }
    if ((unsigned int)a4 <= (unsigned int)0x8235) {
        return 0x1F;
    }
    if ((unsigned int)a4 <= (unsigned int)0x8340) {
        return 0x20;
    }
    if ((unsigned int)a4 <= (unsigned int)0x84D0) {
        return 0x21;
    }
    if ((unsigned int)a4 <= (unsigned int)0x876B) {
        return 0x22;
    }
    if ((unsigned int)a4 <= (unsigned int)0x8CA0) {
        return 0x23;
    }
    if ((unsigned int)a4 <= (unsigned int)0x91D5) {
        return 0x24;
    }
    if ((unsigned int)a4 <= (unsigned int)0x9470) {
        return 0x25;
    }
    if ((unsigned int)a4 <= (unsigned int)0x970B) {
        return 0x27;
    }
    if ((unsigned int)a4 <= (unsigned int)0x9C40) {
        return 0x28;
    }
    if ((unsigned int)a4 <= (unsigned int)0xA175) {
        return 0x29;
    }
    if ((unsigned int)a4 <= (unsigned int)0xA410) {
        return 0x2A;
    }
    if ((unsigned int)a4 <= (unsigned int)0xA6AB) {
        return 0x2B;
    }
    if ((unsigned int)a4 <= (unsigned int)0xABE0) {
        return 0x2C;
    }
    if ((unsigned int)a4 <= (unsigned int)0xB115) {
        return 0x2D;
    }
    if ((unsigned int)a4 <= (unsigned int)0xB3B0) {
        return 0x2E;
    }
    if ((unsigned int)a4 <= (unsigned int)0xB64B) {
        return 0x2F;
    }
    if ((unsigned int)a4 <= (unsigned int)0xBB80) {
        return 0x30;
    }
    if ((unsigned int)a4 <= (unsigned int)0xC0B5) {
        return 0x31;
    }
    if ((unsigned int)a4 <= (unsigned int)0xC350) {
        return 0x32;
    }
    if ((unsigned int)a4 <= (unsigned int)0xC5EB) {
        return 0x33;
    }
    if ((unsigned int)a4 <= (unsigned int)0xCB20) {
        return 0x34;
    }
    if ((unsigned int)a4 <= (unsigned int)0xD055) {
        return 0x35;
    }
    if ((unsigned int)a4 <= (unsigned int)0xD2F0) {
        return 0x36;
    }
    if ((unsigned int)a4 <= (unsigned int)0xD58B) {
        return 0x37;
    }
    if ((unsigned int)a4 <= (unsigned int)0xDAC0) {
        return 0x38;
    }
    return 0xFF;
}

int syIntChkDump(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t16;
    register int t56;
    register int t57;
    register int t73;
    register int t76;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = *(short *)(((int)stk + 0));
    if (((unsigned short)t0 != 0x300) && (((unsigned short)t0 != 0x340) && (((unsigned short)t0 != 0x380) && ((unsigned short)t0 != 0x3C0)))) {
        return (unsigned short)t0;
    }
    *(unsigned int *)0xC8D83E4 = a5;
    *(unsigned int *)(((int)stk + 8)) = (syIntAdrChk_init());
    FUN_0c2fb8b2(0xC302ABC);
    syIntAdrChk_dumpline(0xC302AE0, 0xA, 0x8);
    syIntAdrChk_dumpline(0xC302AEC, 0x12, 0x8);
    syIntAdrChk_dumpline(0xC302AF8, 0x1A, 0x8);
    syIntAdrChk_dumpline(0xC302B04, 0x22, 0x8);
    FUN_0c2fb8b2(0xC302B10);
    syIntAdrChk_printh(((((struct oA8_int *)((*(int *)0xC8D83E4)))->v)));
    FUN_0c2fb8b2(0xC302B18);
    syIntAdrChk_printh(((((struct oAC_int *)((*(int *)0xC8D83E4)))->v)));
    syIntAdrChk_dumpline(0xC302B24, 0x2D, 0x8);
    t16 = *(int *)0xC8D83E4;
    *(unsigned int *)(((int)stk + 4)) = ((((struct oF0_int *)(t16))->v));
    (((struct oF0_uint *)(t16))->v) = (*(int *)(((*(int *)0xC8D83E4) + 0x4)));
    syIntAdrChk_dumpline(0xC302B34, 0x35, 0x8);
    (((struct oF0_uint *)((*(int *)0xC8D83E4)))->v) = (*(int *)(((int)stk + 4)));
    syIntAdrChk_dumpline(0xC302B40, 0x2, 0x8);
    FUN_0c2fb8b2(0xC302B50);
    syIntAdrChk_printh(((((struct oF0_int *)((*(int *)0xC8D83E4)))->v)));
    FUN_0c2fb8b2(0xC302B58);
    syIntAdrChk_printh(((((struct oF4_int *)((*(int *)0xC8D83E4)))->v)));
    FUN_0c2fb8b2(0xC302B60);
    syIntAdrChk_printh(((((struct oF8_int *)((*(int *)0xC8D83E4)))->v)));
    FUN_0c2fb8b2(0xC302B68);
    syIntAdrChk_printh(((((struct oFC_int *)((*(int *)0xC8D83E4)))->v)));
    FUN_0c2fb8b2(0xC302B70);
    syIntAdrChk_printh((*(int *)(((*(int *)0xC8D83E4) + 0x0))));
    FUN_0c2fb8b2(0xC302B78);
    syIntAdrChk_printh(((((struct o100_int *)((*(int *)0xC8D83E4)))->v)));
    FUN_0c2fb8b2(0xC302B80);
    syIntAdrChk_printh(((((struct o104_int *)((*(int *)0xC8D83E4)))->v)));
    FUN_0c2fb8b2(0xC302B88);
    syIntAdrChk_printh(((((struct o108_int *)((*(int *)0xC8D83E4)))->v)));
    t56 = 0x0;
    for (;;) {
        t57 = ((~(((~t56) + 0x1) & 0x3)) + 0x1);
        if ((int)t56 >= 0) {
            t57 = (t56 & 0x3);
        }
        if (t57 == 0) {
            FUN_0c2fb8b2(0xC302B90);
        }
        syIntAdrChk_printh((*(int *)((((t56 << 2) + 0xC3029A8) + 0x0))));
        FUN_0c2fb8b2(0xC302B94);
        syIntAdrChk_printh((*(int *)(((*(int *)((((t56 << 2) + 0xC3029A8) + 0x0))) + 0x0))));
        FUN_0c2fb8b2(0xC302B98);
        t56 = (t56 + 0x1);
        if ((int)t56 >= (int)0x45) {
            break;
        }
    }
    FUN_0c2fb8b2(0xC302B90);
    t73 = 0xC302B9C;
    if ((*(int *)(((int)stk + 8))) != 0) {
        
        t73 = 0xC302BE8;
    }
    FUN_0c2fb8b2(t73);
    for (;;) {
        t76 = syIntAdrChk_getchar();
        if ((signed char)t76 == 13) {
            break;
        }
    }
    *(unsigned int *)0xFF000024 = (unsigned short)(*(short *)(((int)stk + 0)));
    return syIntAdrChk_finish();
}

int FUN_0c2e6d72(void)
{
    int t0;

    if ((((unsigned char)(*(signed char *)0xC8D6458) & 128) != 0) && (t0 = *(signed char *)0xC8D6782, ((unsigned char)t0 & 16) == 0)) {
        t0 = (*(signed char *)0xC8D6630);
    } else {
        t0 = (FUN_0c2d73f6((*(signed char *)0xC8D65EE)));
    }
    if ((unsigned int)((unsigned char)t0 - 1) >= (unsigned int)0x3B) {
        return 0x1;
    }
    switch ((((unsigned char)t0 - 1) << 1)) {
        case 0:
        {
            return 0x1;
        }
        case 2:
        {
            return 0x5;
        }
        case 4:
        {
            return 0xA;
        }
        case 6:
        {
            return 0xB;
        }
        case 8:
        {
            return 0x3C;
        }
        case 10:
        {
            return 0xC;
        }
        case 12:
        {
            return 0x3D;
        }
        case 14:
        {
            return 0xD;
        }
        case 16:
        {
            return 0x3B;
        }
        case 18:
        {
            return 0xE;
        }
        case 20:
        {
            return 0x42;
        }
        case 22:
        {
            return 0x43;
        }
        case 24:
        {
            return 0x44;
        }
        case 26:
        {
            return 0x68;
        }
        case 28:
        {
            return 0x45;
        }
        case 30:
        {
            return 0x69;
        }
        case 32:
        {
            return 0x6A;
        }
        case 34:
        {
            return 0x49;
        }
        case 36:
        {
            return 0x47;
        }
        case 38:
        {
            return 0x6B;
        }
        case 40:
        {
            return 0x4A;
        }
        case 42:
        {
            return 0x48;
        }
        case 44:
        {
            return 0x6C;
        }
        case 46:
        {
            return 0x4B;
        }
        case 48:
        {
            return 0x6D;
        }
        case 50:
        {
            return 0x4C;
        }
        case 52:
        {
            return 0xF;
        }
        case 54:
        {
            return 0x6E;
        }
        case 56:
        {
            return 0x4E;
        }
        case 58:
        {
            return 0x6F;
        }
        case 60:
        {
            return 0x50;
        }
        case 62:
        {
            return 0x70;
        }
        case 64:
        {
            return 0x51;
        }
        case 66:
        {
            return 0x71;
        }
        case 68:
        {
            return 0x59;
        }
        case 70:
        {
            return 0x72;
        }
        case 72:
        {
            return 0x14;
        }
        case 74:
        {
            return 0x73;
        }
        case 76:
        {
            return 0x5D;
        }
        case 78:
        {
            return 0x74;
        }
        case 80:
        {
            return 0x5E;
        }
        case 82:
        {
            return 0x75;
        }
        case 84:
        {
            return 0x5F;
        }
        case 86:
        {
            return 0x76;
        }
        case 88:
        {
            return 0x1B;
        }
        case 90:
        {
            return 0x10;
        }
        case 92:
        {
            return 0x15;
        }
        case 94:
        case 96:
        case 98:
        case 108:
        case 112:
        case 114:
        {
            return 0x1;
        }
        case 100:
        {
            return 0x11;
        }
        case 102:
        {
            return 0x60;
        }
        case 104:
        {
            return 0x13;
        }
        case 106:
        {
            return 0x18;
        }
        case 110:
        {
            return 0x19;
        }
        default:
        {
            return 0x1A;
        }
    }
}

void ADXF_Ocbi(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    register int t3;

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int, int, int))(0xAC2C48E0))(a4, a5, a6, a7);
    return;
    }
    t2 = (0x1FFFFFE0 & a4);
    t3 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t2);
        t3 = (t3 - 0x1);
        t2 = (t2 + 0x20);
        if (t3 == 0) {
            break;
        }
    }
}

int FUN_0c1826a0(int a4, int a5, int a6, int a7)
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
    register float u5;
    register float u6;
    register float u7;
    register float u8;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = (((struct o4_float *)(a5))->v);
    u3 = (((struct o4_float *)(a6))->v);
    u4 = (((struct o4_float *)0xC2A6238)->v);
    u5 = ((u2 - u3) * (u2 - u3));
    u5 = u5 + ((u0 - u1)) * ((u0 - u1));
    if (u5 == 0.0f) {
        t0 = a6;
        if (!(((((struct o8_float *)(a5))->v)) > ((((struct o8_float *)(a6))->v)))) {
            t0 = a5;
        }
        nlLineSendQuadE(a4, t0, a7, (u4 * 0.5f));
        t0 = (a4 + 0x80);
    } else {
        u6 = (((struct o0_float *)0xC2A6238)->v);
        u7 = (u4 * 0.5f);
        u4 = ((1.0f / _builtin_sqrtf(u5)) * u7);
        u8 = ((1.0f / _builtin_sqrtf(u5)) * u7);
        t1 = (int)((1.0f / u6) * (u0 - u1));
        if ((int)(int)((1.0f / u6) * (u0 - u1)) < 0) {
            t1 = (-(int)((1.0f / u6) * (u0 - u1)));
        }
        t2 = (int)((1.0f / u6) * (u2 - u3));
        if ((int)(int)((1.0f / u6) * (u2 - u3)) < 0) {
            t2 = (-(int)((1.0f / u6) * (u2 - u3)));
        }
        t3 = t2;
        if ((int)t1 < (int)t2) {
            t3 = t1;
        }
        (((struct o8_float *)(a5))->v) = (1.0f / ((((struct o8_float *)(a5))->v)));
        (((struct o8_float *)(a6))->v) = (1.0f / ((((struct o8_float *)(a6))->v)));
        if ((int)t3 <= (int)0x1) {
            nlLineSendQuadA(a4, a5, a6, a7, ((u0 - u1) * u4), ((u2 - u3) * u8));
            t1 = a4;
        } else {
            (((struct o0_float *)0xC86CE70)->v) = ((1.0f / (float)t3) * (u0 - u1));
            (((struct o4_float *)0xC86CE70)->v) = ((1.0f / (float)t3) * (u2 - u3));
            (((struct o8_float *)0xC86CE70)->v) = ((((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a6))->v))) * (1.0f / (float)t3));
            (((struct oC_float *)0xC86CE70)->v) = (*(float *)((a6 + 0x0)));
            (((struct o18_float *)0xC86CE70)->v) = (((((struct oC_float *)0xC86CE70)->v)) + ((((struct o0_float *)0xC86CE70)->v)));
            (((struct o10_float *)0xC86CE70)->v) = ((((struct o4_float *)(a6))->v));
            (((struct o1C_float *)0xC86CE70)->v) = (((((struct o10_float *)0xC86CE70)->v)) + ((((struct o4_float *)0xC86CE70)->v)));
            (((struct o14_float *)0xC86CE70)->v) = ((((struct o8_float *)(a6))->v));
            (((struct o20_float *)0xC86CE70)->v) = (((((struct o14_float *)0xC86CE70)->v)) + ((((struct o8_float *)0xC86CE70)->v)));
            nlLineSendQuadD(a4, 0xC86CE88, 0xC86CE7C, a7, ((u0 - u1) * u4), ((u2 - u3) * u8));
            t2 = (a4 + 0x80);
            if ((int)0x1 < (int)(t3 - 1)) {
                t4 = 0x1;
                t5 = (a4 + 0x80);
                for (;;) {
                    (((struct oC_float *)0xC86CE70)->v) = (((((struct oC_float *)0xC86CE70)->v)) + ((((struct o0_float *)0xC86CE70)->v)));
                    (((struct o18_float *)0xC86CE70)->v) = (((((struct o18_float *)0xC86CE70)->v)) + ((((struct o0_float *)0xC86CE70)->v)));
                    (((struct o10_float *)0xC86CE70)->v) = (((((struct o10_float *)0xC86CE70)->v)) + ((((struct o4_float *)0xC86CE70)->v)));
                    (((struct o1C_float *)0xC86CE70)->v) = (((((struct o1C_float *)0xC86CE70)->v)) + ((((struct o4_float *)0xC86CE70)->v)));
                    (((struct o14_float *)0xC86CE70)->v) = (((((struct o14_float *)0xC86CE70)->v)) + ((((struct o8_float *)0xC86CE70)->v)));
                    (((struct o20_float *)0xC86CE70)->v) = (((((struct o20_float *)0xC86CE70)->v)) + ((((struct o8_float *)0xC86CE70)->v)));
                    nlLineSendQuadC(t5, 0xC86CE88, 0xC86CE7C, a7, ((u0 - u1) * u4), ((u2 - u3) * u8));
                    t4 = (t4 + 0x1);
                    t5 = (t5 + 0x80);
                    if ((int)t4 >= (int)(t3 - 1)) {
                        break;
                    }
                }
                t2 = t5;
            }
            (((struct oC_float *)0xC86CE70)->v) = (((((struct oC_float *)0xC86CE70)->v)) + ((((struct o0_float *)0xC86CE70)->v)));
            (((struct o18_float *)0xC86CE70)->v) = (((((struct o18_float *)0xC86CE70)->v)) + ((((struct o0_float *)0xC86CE70)->v)));
            (((struct o10_float *)0xC86CE70)->v) = (((((struct o10_float *)0xC86CE70)->v)) + ((((struct o4_float *)0xC86CE70)->v)));
            (((struct o1C_float *)0xC86CE70)->v) = (((((struct o1C_float *)0xC86CE70)->v)) + ((((struct o4_float *)0xC86CE70)->v)));
            (((struct o14_float *)0xC86CE70)->v) = (((((struct o14_float *)0xC86CE70)->v)) + ((((struct o8_float *)0xC86CE70)->v)));
            (((struct o20_float *)0xC86CE70)->v) = (((((struct o20_float *)0xC86CE70)->v)) + ((((struct o8_float *)0xC86CE70)->v)));
            nlLineSendQuadB(t2, 0xC86CE88, 0xC86CE7C, a7, ((u0 - u1) * u4), ((u2 - u3) * u8));
            t1 = t2;
        }
        t0 = (t1 + 0x80);
    }
    return t0;
}

int FUN_0c190d42(int a4, int a5)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    switch (a5) {
    case 3:
        if (((unsigned short)((((struct o13A_short *)(a4))->v)) != 10) && (t1 = *(int *)0xC8A97B8, t2 = (((struct o110_short *)(a4))->v), (int)t2 <= (int)t1)) {
            (((struct o12A_ushort *)(a4))->v) = ((((struct o2_short *)0xC2AE6EC)->v));
        } else {
            FUN_0c1901e4(a4);
        }
        break;
    case 0:
        t0 = (((struct o122_short *)(a4))->v);
        (((struct o122_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0xC) {
            (((struct o122_ushort *)(a4))->v) = 0xC;
            FUN_0c190fa0(a4, 0x4);
        } else {
            (((struct o120_ushort *)(a4))->v) = (((((((((struct o118_short *)(a4))->v)) >> 1) >> 1) + ((((struct o11A_short *)(a4))->v))) >> 1) * (*(int *)(((((((struct o122_short *)(a4))->v)) << 2) + 0xC2AE704))));
            if ((int)((((struct o120_short *)(a4))->v)) < (int)0x2) {
                (((struct o120_ushort *)(a4))->v) = 0x2;
            } else {
                if ((int)((((struct o120_short *)(a4))->v)) > (int)0x80) {
                    (((struct o120_ushort *)(a4))->v) = 0x80;
                }
            }
            (((struct o124_ushort *)(a4))->v) = ((((struct o120_short *)(a4))->v));
            if ((int)((((struct o122_short *)(a4))->v)) > (int)0x3) {
                (((struct o11A_ushort *)(a4))->v) = (((((struct o11A_short *)(a4))->v)) + ((((((struct o118_short *)(a4))->v)) >> 1) >> 1));
                (((struct o118_ushort *)(a4))->v) = 0x0;
            }
            (((struct oE0_uint *)(a4))->v) = ((((struct oDC_int *)(a4))->v));
            (((struct o112_ushort *)(a4))->v) = 0x0;
            t0 = (((struct oF4_short *)(a4))->v);
            t3 = (((struct o10C_short *)(a4))->v);
            t4 = (unsigned short)t3;
            if ((int)(unsigned short)t0 < (int)(unsigned short)t3) {
                t4 = (unsigned short)t0;
            }
            t0 = (int)((int)(((int)((unsigned int)((int)((unsigned int)t4 + (unsigned int)0x0)) + ((((int)0x0 > (int)t4)) ? 1u : 0u))) >> 1) / (int)(unsigned short)((((struct o12C_short *)(a4))->v)));
            t3 = t0;
            if ((int)t0 < (int)0x2) {
                t3 = 0x2;
            }
            (((struct o10C_ushort *)(a4))->v) = ((((struct o12C_short *)(a4))->v));
            (((struct o10E_ushort *)(a4))->v) = ((unsigned short)t3 * (unsigned short)((((struct o12C_short *)(a4))->v)));
            FUN_0c1904d8(a4);
        }
        break;
    case 1:
        FUN_0c190bfc(a4);
        (((struct o140_uchar *)(a4))->v) = 0x1;
        FUN_0c1904d8(a4);
        (((struct o140_uchar *)(a4))->v) = 0x0;
        break;
    case 2:
        if ((int)(unsigned short)((((struct o13A_short *)(a4))->v)) >= (int)0x4) {
            if ((((((struct o16C_short *)(a4))->v)) != 0) && (t0 = (((struct o13A_short *)(a4))->v), (int)(unsigned short)t0 <= (int)0x5)) {
                t0 = (((struct o110_short *)(a4))->v);
                t3 = (((struct o16C_short *)(a4))->v);
                t4 = *(int *)0xC8A97B8;
                t5 = ((t3 << 2) << 1);
                if ((int)t4 < (int)((t3 << 2) << 1)) {
                    t5 = t4;
                }
                if ((int)t0 < (int)(t5 + t3)) {
                    FUN_0c18dab4(((((struct oF8_int *)(a4))->v)));
                    t0 = FUN_0c18dab4((((((struct oDC_int *)(a4))->v)) - 1));
                    FUN_0c190344(((((struct o158_int *)(a4))->v)), ((((struct o144_short *)(a4))->v)), ((((struct o146_short *)(a4))->v)), t0);
                    t0 = (((struct o16C_short *)(a4))->v);
                    t3 = (((struct o2_short *)0xC2AE6EC)->v);
                    t4 = t0;
                    if ((int)t3 < (int)t0) {
                        t4 = t3;
                    }
                    (((struct o128_ushort *)(a4))->v) = t4;
                } else {
                    FUN_0c190fa0(a4, 0x4);
                }
            } else {
                if (((((struct o16C_short *)(a4))->v)) != 0) {
                    (((struct o128_ushort *)(a4))->v) = ((((struct o16C_short *)(a4))->v));
                } else {
                    (((struct o128_ushort *)(a4))->v) = ((((struct o0_short *)0xC2AE6EC)->v));
                }
            }
        } else {
            FUN_0c190fa0(a4, 0x4);
        }
        break;
    }
    return 0x0;
}
