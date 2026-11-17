/* game/menu/option: functions 0C01EA00-0C01FA4E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct oA_short { char p[0xA]; short v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int FUN_0c010448(void);
int FUN_0c018e74(int);
int FUN_0c01cb7c(void);
int FUN_0c01cd40(int);
int FUN_0c01d094(void);
int FUN_0c01d27a(void);
int FUN_0c01e294(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c01e96a(int, int, int, int);
int FUN_0c01e9e4(void);
int FUN_0c01f6f8(void);
int FUN_0c01fc62(int, int, int, int);
int FUN_0c02b182(int);
int FUN_0c02e9d4(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05b05c(int, int);
int FUN_0c177450(void);
int FUN_0c183074(int);
int FUN_0c18422a(void);
int pl_ayame_frame_hook(int, int, int, int);
int FUN_0c184a90(int, int, int, int, int, int);
int FUN_0c184b4c(void);
int FUN_0c184c0c(int);
int FUN_0c184c48(int);
int FUN_0c1854a0(int);
int FUN_0c18589e(int, int);
int FUN_0c185940(int, int, int);
int FUN_0c185d50(int);
int FUN_0c186380(int);
int FUN_0c1868e0(int, int, int);
int FUN_0c187d24(int, int);
int strcpy(int, int, int);
int syCfgGetIndividualID(int);
int FUN_0c01ea00(int a4, int a5, int a6, int a7);
int FUN_0c01ea2c(void);
int FUN_0c01ea32(int a4, int a5, int a6, int a7);
int FUN_0c01f08a(void);
int FUN_0c01f0e2(int a4);
int FUN_0c01f2a4(void);
int FUN_0c01f30c(void);
int FUN_0c01f5c4(void);
int FUN_0c01f618(void);
int FUN_0c01f6ac(void);
int FUN_0c01f6e4(void);
int FUN_0c01f7f4(void);
int FUN_0c01f86c(void);
int FUN_0c01f870(void);
int FUN_0c01f8a2(void);
int FUN_0c01f8dc(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c01f9ec(void);

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

int FUN_0c01ea2c(void)
{
    return FUN_0c18422a();
}

int FUN_0c01ea32(int a4, int a5, int a6, int a7)
{
    return pl_ayame_frame_hook(0x0, a5, a6, a7);
}

int FUN_0c01f08a(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t0 = FUN_0c01cd40(0x8000);
    if ((short)t0 != 0) {
        *(unsigned int *)0xC30B6F8 = ((*(int *)0xC30B6F8) + 0x1);
    } else {
        *(unsigned int *)0xC30B6F8 = 0x0;
    }
    t1 = (short)t0;
    if ((int)(*(int *)0xC30B6F8) > (int)0x3C) {
        *(unsigned short *)0xC30540C = 0x0;
        t1 = 0x0;
    }
    t0 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned char *)0xC309859 = ((*(signed char *)0xC309859) + 0x1);
        return t1;
    }
    return FUN_0c184c48(0xC3050F4);
}

int FUN_0c01f0e2(int a4)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;

    *(unsigned int *)0xC83C6C0 = 0x1;
    (((struct oC_uchar *)0xC3050FC)->v) = 0xFFFFFFF8;
    t0 = (((struct o0_short *)0xC3050FC)->v);
    if (t0 == 4) {
        (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
        t1 = t0;
    } else {
        t0 = FUN_0c01cd40(0x8000);
        if ((short)t0 != 0) {
            *(unsigned int *)0xC30B6F8 = ((*(int *)0xC30B6F8) + 0x1);
        } else {
            *(unsigned int *)0xC30B6F8 = 0x0;
        }
        if ((int)(*(int *)0xC30B6F8) <= (int)0x3C) {
            t2 = (((struct o0_short *)0xC3050FC)->v);
            if ((t2 != 8) && (t2 != 5)) {
                (((struct o1_uchar *)0xC309858)->v) = 0x2;
                *(unsigned short *)0xC30540C = 0x64;
                t3 = t2;
            } else {
                t2 = (((struct oA_short *)0xC3050FC)->v);
                switch (t2) {
                case 2:
                    (((struct oC_uchar *)0xC3050FC)->v) = 0xFFFFFFF4;
                    break;
                case 3:
                    (((struct oC_uchar *)0xC3050FC)->v) = 0xFFFFFFF2;
                    break;
                case 6:
                    (((struct oC_uchar *)0xC3050FC)->v) = 0xFFFFFFF3;
                    break;
                default:
                    (((struct oC_uchar *)0xC3050FC)->v) = 0xFFFFFFF8;
                    break;
                }
                (((struct o0_uchar *)0xC309858)->v) = 0x5;
                (((struct o1_uchar *)0xC309858)->v) = 0x0;
                t3 = t2;
            }
            t2 = t3;
        } else {
            (((struct o0_uchar *)0xC309858)->v) = 0x5;
            (((struct o1_uchar *)0xC309858)->v) = 0x0;
            t2 = (short)t0;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c01f2a4(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC309859) << 2) + 0xC20E360));
    return ((int (*)(void))(t1))();
}

int FUN_0c01f30c(void)
{
    int stk[38];
    register int t30;
    register int t33;
    register int t41;
    register int t46;
    register int t44;
    register int t47;
    register int t54;
    register int t64;
    register int t69;
    register int t67;
    register int t70;
    register int t77;
    register int t87;
    register int t89;
    register int t90;
    register int t103;
    register int t104;
    register int t105;
    register int t108;
    register int t111;

    FUN_0c183074(0xC01EA00);
    FUN_0c01e9e4();
    FUN_0c018e74(0x2);
    FUN_0c01cb7c();
    FUN_0c0573c0(0xFF000000, 0x0, 0x14);
    *(unsigned int *)0xC30B6F8 = 0x0;
    *(unsigned char *)0xC309859 = ((*(signed char *)0xC309859) + 0x1);
    *(unsigned char *)0xC3054C5 = 0x1;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 8) + 0x64);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 8) + 0x4C);
    *(unsigned int *)(((int)stk + 16)) = (((int)stk + 8) + 0x2C);
    *(unsigned int *)(((int)stk + 20)) = 0xC1A8838;
    *(unsigned int *)(((int)stk + 24)) = 0xC1A8893;
    *(unsigned int *)(((int)stk + 28)) = 0xC305109;
    *(unsigned int *)(((int)stk + 32)) = 0xC309963;
    *(unsigned int *)(((int)stk + 36)) = 0xC30997F;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0x4;
    *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x2)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x4)) = 0x2;
    *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x8)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x6)) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0xC)) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x10)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x2)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x4)) = 0x78;
    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x6)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x8)) = 0x1E;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xC)) = 0xC1A88A0;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x10)) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x14)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0x5DC;
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0xC)) = 0x12345678;
    *(unsigned short *)(((*(int *)(((int)stk + 16))) + 0x10)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 16))) + 0x12)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 16))) + 0x14)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0x4;
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x18)) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x1C)) = 0x0;
    t30 = *(int *)(((int)stk + 12));
    if (((*(int *)(((*(int *)0xC3BABB4) + 0x0))) & 0x100) != 0) {
        *(unsigned short *)((t30 + 0x0)) = 0x1;
    } else {
        *(unsigned short *)((t30 + 0x0)) = 0x0;
    }
    *(unsigned char *)0xC30A3FC = 0x0;
    t33 = 0x0;
    for (;;) {
        if ((int)t33 >= (int)0x5) {
            t33 = 0xC30A3FC;
            if ((*(signed char *)((t33 + 0x0))) != 0) {
                strcpy(0xC305109, t33, 0xC30A3FC);
                t33 = 0xC1A88A8;
                FUN_0c187d24(0xC305109, t33);
                t33 = 0xC1A88AC;
                FUN_0c187d24(0xC305109, t33);
                syCfgGetIndividualID(0xC309998);
                t41 = 0x0;
                for (;;) {
                    t33 = (*(signed char *)((0xC309998 + t41)));
                    t46 = (int)(signed char)((int)((signed char)t33 & 0xF0) >> 4) < (int)0xA;
                    t44 = ((int)((signed char)t33 & 0xF0) >> 4);
                    t33 = (t33 & 0xF);
                    t47 = (t44 + 0x37);
                    if (t46) {
                        t47 = (t44 + 0x30);
                    }
                    *(unsigned char *)((0xC309963 + (t41 << 1))) = t47;
                    if ((int)(signed char)t33 < (int)0xA) {
                        t33 = (t33 + 0x30);
                    } else {
                        t33 = (t33 + 0x37);
                    }
                    t54 = ((t41 << 1) + 0xC309963);
                    t41 = (t41 + 0x1);
                    *(unsigned char *)((t54 + 0x1)) = t33;
                    if ((int)t41 >= (int)0x6) {
                        break;
                    }
                }
                t33 = 0xC1A88A4;
                *(unsigned char *)((0xC309963 + (t41 << 1))) = 0x0;
                strcpy(0xC30997F, t33, t47);
            } else {
                t33 = 0xC1A88AC;
                strcpy(0xC305109, t33, 0xC30A3FC);
                syCfgGetIndividualID(0xC309998);
                t64 = 0x0;
                for (;;) {
                    t33 = (*(signed char *)((0xC309998 + t64)));
                    t69 = (int)(signed char)((int)((signed char)t33 & 0xF0) >> 4) < (int)0xA;
                    t67 = ((int)((signed char)t33 & 0xF0) >> 4);
                    t33 = (t33 & 0xF);
                    t70 = (t67 + 0x37);
                    if (t69) {
                        t70 = (t67 + 0x30);
                    }
                    *(unsigned char *)((0xC309963 + (t64 << 1))) = t70;
                    if ((int)(signed char)t33 < (int)0xA) {
                        t33 = (t33 + 0x30);
                    } else {
                        t33 = (t33 + 0x37);
                    }
                    t77 = ((t64 << 1) + 0xC309963);
                    t64 = (t64 + 0x1);
                    *(unsigned char *)((t77 + 0x1)) = t33;
                    if ((int)t64 >= (int)0x6) {
                        break;
                    }
                }
                t33 = 0xC1A88A4;
                *(unsigned char *)((0xC309963 + (t64 << 1))) = 0x0;
                strcpy(0xC30997F, t33, t70);
            }
            FUN_0c184b4c();
            FUN_0c01ea2c();
            *(int *)((int)stk + 4) = 0x0;
            t33 = 0x0;
            *(int *)((int)stk + 0) = 0x0;
            FUN_0c184a90(0x0, t33, 0x0, 0x0, 0x0, 0x0);
            *(unsigned int *)0xC305068 = (short)(FUN_0c184c0c(((int)stk + 8)));
            *(unsigned char *)0xC309859 = ((*(signed char *)0xC309859) + 0x1);
            *(unsigned short *)0xC30540C = 0x64;
            return 0xC30540C;
        }
        if ((unsigned char)(*(signed char *)((t33 + ((*(int *)0xC3BABB4) + 0x34)))) == 44) {
            break;
        }
        t33 = (t33 + 0x1);
    }
    if ((int)t33 > 0) {
        t87 = 0x0;
        for (;;) {
            t89 = t87;
            t90 = (((*(int *)0xC3BABB4) + 0x34) + t87);
            t87 = (t87 + 0x1);
            *(unsigned char *)((0xC30A3FC + t89)) = (*(signed char *)((t90 + 0x0)));
            if ((int)t87 >= (int)t33) {
                break;
            }
        }
    }
    *(unsigned char *)((0xC30A3FC + t33)) = 0x0;
    if ((*(signed char *)0xC30A3FC) != 0) {
        strcpy(0xC305109, 0xC30A3FC, 0xC30A3FC);
        FUN_0c187d24(0xC305109, 0xC1A88A8);
        FUN_0c187d24(0xC305109, 0xC1A88AC);
    } else {
        strcpy(0xC305109, 0xC1A88AC, 0xC30A3FC);
    }
    syCfgGetIndividualID(0xC309998);
    t103 = 0x0;
    for (;;) {
        t104 = *(signed char *)((0xC309998 + t103));
        t105 = (((int)((signed char)t104 & 0xF0) >> 4) + 0x37);
        if ((int)(signed char)((int)((signed char)t104 & 0xF0) >> 4) < (int)0xA) {
            t105 = (((int)((signed char)t104 & 0xF0) >> 4) + 0x30);
        }
        *(unsigned char *)((0xC309963 + (t103 << 1))) = t105;
        t108 = ((t104 & 0xF) + 0x37);
        if ((int)(signed char)(t104 & 0xF) < (int)0xA) {
            t108 = ((t104 & 0xF) + 0x30);
        }
        t111 = ((t103 << 1) + 0xC309963);
        t103 = (t103 + 0x1);
        *(unsigned char *)((t111 + 0x1)) = t108;
        if ((int)t103 >= (int)0x6) {
            break;
        }
    }
    *(unsigned char *)((0xC309963 + (t103 << 1))) = 0x0;
    strcpy(0xC30997F, 0xC1A88A4, t105);
    FUN_0c184b4c();
    FUN_0c01ea2c();
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    FUN_0c184a90(0x0, 0x0, 0x0, 0x0, 0x0, 0x0);
    *(unsigned int *)0xC305068 = (short)(FUN_0c184c0c(((int)stk + 8)));
    *(unsigned char *)0xC309859 = ((*(signed char *)0xC309859) + 0x1);
    *(unsigned short *)0xC30540C = 0x64;
    return 0xC30540C;
}

int FUN_0c01f5c4(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c01cd40(0x8000);
    if ((short)t0 != 0) {
        *(unsigned int *)0xC30B6F8 = ((*(int *)0xC30B6F8) + 0x1);
    } else {
        *(unsigned int *)0xC30B6F8 = 0x0;
    }
    t1 = (short)t0;
    if ((int)(*(int *)0xC30B6F8) > (int)0x3C) {
        *(unsigned short *)0xC30540C = 0x0;
        t1 = 0x0;
    }
    t0 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned char *)0xC309859 = ((*(signed char *)0xC309859) + 0x1);
        return t1;
    }
    return FUN_0c184c48(0xC3050F4);
}

int FUN_0c01f618(void)
{
    register int t0;
    register int t1;
    int t2;

    (((struct oC_uchar *)0xC3050FC)->v) = 0xFFFFFFF1;
    t0 = (((struct o0_short *)0xC3050FC)->v);
    if (t0 != 4) {
        t1 = FUN_0c01cd40(0x8000);
        if ((short)t1 != 0) {
            *(unsigned int *)0xC30B6F8 = ((*(int *)0xC30B6F8) + 0x1);
        } else {
            *(unsigned int *)0xC30B6F8 = 0x0;
        }
        if ((int)(*(int *)0xC30B6F8) <= (int)0x3C) {
            t2 = (((struct o0_short *)0xC3050FC)->v);
            if ((t2 != 8) && (t2 != 5)) {
                (((struct o1_uchar *)0xC309858)->v) = 0x2;
                *(unsigned short *)0xC30540C = 0x64;
                return t2;
            }
            t2 = (((struct oA_short *)0xC3050FC)->v);
            if (t2 == 6) {
                (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
                (((struct o3_uchar *)0xC309858)->v) = 0x0;
                *(unsigned short *)0xC30540C = 0x3C;
                return FUN_0c0573cc(0xFF000000, 0x0, 0x14);
            }
            (((struct o0_uchar *)0xC309858)->v) = 0x5;
            (((struct o1_uchar *)0xC309858)->v) = 0x0;
            return t2;
        }
        (((struct o0_uchar *)0xC309858)->v) = 0x5;
        (((struct o1_uchar *)0xC309858)->v) = 0x0;
        return (short)t1;
    }
    (((struct o0_uchar *)0xC309858)->v) = 0x5;
    (((struct o1_uchar *)0xC309858)->v) = 0x0;
    return t0;
}

int FUN_0c01f6ac(void)
{
    register int t0;
    register int t1;

    t0 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        t0 = FUN_0c01f6f8();
        t1 = t0;
        if (t0 != 0) {
            t0 = FUN_0c01e9e4();
            (((struct o0_uchar *)0xC309858)->v) = 0x1;
            (((struct o1_uchar *)0xC309858)->v) = 0x0;
            (((struct o2_uchar *)0xC309858)->v) = 0x0;
            (((struct o3_uchar *)0xC309858)->v) = 0x0;
            t1 = t0;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c01f6e4(void)
{
    register int t1;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t1 = *(int *)((((*(signed char *)0xC309859) << 2) + 0xC20E374));
    return ((int (*)(void))(t1))();
}

int FUN_0c01f7f4(void)
{
    int stk[4];
    register int t0;
    register int t3;
    register int t7;
    register int t8;
    register int t9;
    register int t12;
    register int t6;

    t0 = FUN_0c1868e0(0x2, 0x1, 0x0);
    *(unsigned int *)0xC309994 = t0;
    if ((int)t0 >= 0) {
        FUN_0c18589e(((int)stk + 0), 0x10);
        *(unsigned short *)(((int)stk + 0)) = 0x2;
        *(unsigned short *)(((int)stk + 2)) = (FUN_0c185d50(0x22B8));
        t3 = FUN_0c1854a0(0xC1A88BC);
        if (t3 != 0) {
            t7 = 0x4;
            t8 = (((int)stk + 0) + 0x4);
            t9 = (*(int *)(((*(int *)((t3 + 0x10))) + 0x0)));
            for (;;) {
                if (t7 == 0) {
                    break;
                }
                t6 = (*(signed char *)((t9 + 0x0)));
                t9 = (t9 + 0x1);
                t7 = (t7 - 1);
                *(unsigned char *)((t8 + 0x0)) = t6;
                t8 = (t8 + 0x1);
            }
            t12 = FUN_0c185940((*(int *)0xC309994), ((int)stk + 0), 0x10);
            if ((int)t12 < 0) {
                FUN_0c186380((*(int *)0xC309994));
                return 0xFFFFFFFF;
            }
            return 0x0;
        }
        FUN_0c186380((*(int *)0xC309994));
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int FUN_0c01f86c(void)
{
    return FUN_0c01f2a4();
}

int FUN_0c01f870(void)
{
    register int t2;

    t2 = FUN_0c01f7f4();
    if (t2 == -1) {
        (((struct o0_uchar *)0xC309858)->v) = 0x5;
    } else {
        (((struct o0_uchar *)0xC309858)->v) = ((*(signed char *)0xC309858) + 0x1);
        (((struct o1_uchar *)0xC309858)->v) = 0x0;
        (((struct o2_ushort *)0xC30AF96)->v) = 0x1C20;
        (((struct o0_ushort *)0xC30AF96)->v) = 0x1;
        t2 = 0xC30AF98;
    }
    return t2;
}

int FUN_0c01f8a2(void)
{
    return FUN_0c01f6e4();
}

int FUN_0c01f8dc(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t0 = *(signed char *)0xC309859;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        (((struct o0_uchar *)0xC309858)->v) = 0x8;
                        (((struct o3_uchar *)0xC309858)->v) = 0x0;
                        (((struct o2_uchar *)0xC309858)->v) = 0x0;
                        (((struct o1_uchar *)0xC309858)->v) = 0x0;
                        if ((*(signed char *)0xC309993) != 0) {
                            *(unsigned char *)0xC3054C4 = 0x1;
                        } else {
                            *(unsigned char *)0xC3054C4 = 0x0;
                        }
                        FUN_0c01fc62(0xC3054C4, 0x1, a6, a7);
                        return FUN_0c05b05c(0x1E, 0x0);
                    }
                    t1 = *(short *)0xC30EF6C;
                    *(unsigned short *)0xC30EF6C = (t1 - 1);
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
                    }
                    return t0;
                }
                t1 = FUN_0c01e294(a4, 0x1, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
                if (t1 != 0) {
                    if (t1 == 1) {
                        (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
                        t2 = FUN_0c018e74(0x10);
                        *(unsigned short *)0xC30EF6C = 0x20;
                        return t2;
                    }
                    return FUN_0c010448();
                }
                return t1;
            }
            t1 = FUN_0c01f6f8();
            if (t1 != 0) {
                (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
                (((struct o2_uchar *)0xC309858)->v) = 0x0;
                (((struct o3_uchar *)0xC309858)->v) = 0x0;
                FUN_0c01d27a();
                return FUN_0c01d094();
            }
            return t1;
        }
        t1 = *(short *)0xC30540C;
        *(unsigned short *)0xC30540C = (t1 - 1);
        if ((int)(short)(t1 - 1) >= 0) {
        } else {
            (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
        }
        return t0;
    }
    t0 = FUN_0c186380((*(int *)0xC309994));
    (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
    (((struct o3_uchar *)0xC309858)->v) = 0x0;
    *(unsigned short *)0xC30540C = 0x3C;
    return t0;
}

int FUN_0c01f9ec(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC309859;
    if (t0 == 0) {
        t1 = FUN_0c186380((*(int *)0xC309994));
        *(unsigned short *)0xC30540C = 0x3C;
        (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
        (((struct o3_uchar *)0xC309858)->v) = 0x0;
        t2 = t1;
    } else {
        if ((signed char)t0 == 1) {
            t1 = *(short *)0xC30540C;
            *(unsigned short *)0xC30540C = (t1 - 1);
            if ((int)(short)(t1 - 1) < 0) {
                (((struct o1_uchar *)0xC309858)->v) = ((*(signed char *)0xC309859) + 0x1);
            }
            t1 = (signed char)t0;
        } else {
            t0 = FUN_0c01f6f8();
            t1 = t0;
            if (t0 != 0) {
                (((struct o0_uchar *)0xC309858)->v) = 0xF;
                (((struct oA_uchar *)0xC309858)->v) = (*(signed char *)0xC305108);
                t1 = 0xC305108;
            }
        }
        t2 = t1;
    }
    return t2;
}
