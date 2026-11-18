/* game/unsorted: functions 0C0FB96C-0C0FC8F6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f0aa(void);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05f222(void);
int FUN_0c05f22c(int);
int FUN_0c0fe0b2(void);
int FUN_0c0fe4ec(int);
int FUN_0c0fe530(void);
int FUN_0c1171f0(int);
int FUN_0c16f7ba(void);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(void);
int FUN_0c0fb96c(int a4);
int FUN_0c0fb9a6(void);
int FUN_0c0fb9aa(int a4);
int FUN_0c0fbda4(int a4);
int FUN_0c0fbdd4(int a4);
int FUN_0c0fbe36(int a4);
int FUN_0c0fc67e(void);
void FUN_0c0fc69e(void);
int FUN_0c0fc6b6(void);
int FUN_0c0fc6e6(void);
int FUN_0c0fc722(void);
int FUN_0c0fc776(void);

int FUN_0c0fb96c(int a4)
{
    register int t0;
    register int t1;

    if ((a4 != 1) && (a4 != 2)) {
        t0 = a4;
        if (a4 != 4) {
        } else {
            t1 = FUN_0c0fc722();
            if (t1 != 0) {
                (((struct o0_uchar *)0xC541F43)->v) = 0x3;
            } else {
                (((struct o0_uchar *)0xC541F43)->v) = 0x4;
            }
            (((struct o1_uchar *)0xC541F43)->v) = 0x0;
            t0 = 0x0;
        }
        t1 = t0;
    } else {
        (((struct o0_uchar *)0xC541F43)->v) = a4;
        (((struct o1_uchar *)0xC541F43)->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c0fb9a6(void)
{
    return FUN_0c0fb96c(0x1);
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

int FUN_0c0fbdd4(int a4)
{
    register int t0;
    register int t9;

    t0 = *(signed char *)((a4 + 0x14));
    t9 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x0, ((((struct o4_int *)0xC4B4118)->v)));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x40, ((((struct o0_int *)0xC4B4118)->v)));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t9 = 0xA8;
    }
    return t9;
}

int FUN_0c0fbe36(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FBDD4;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fc67e(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FBE60;
        t1 = 0xFFFFFFFF;
    }
    return t1;
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

int FUN_0c0fc6e6(void)
{
    register int t6;

    (((struct o0_uchar *)0xC542A08)->v) = (*(signed char *)0xC472ADC);
    (((struct o1_uchar *)0xC542A08)->v) = (*(signed char *)0xC472ADD);
    (((struct o2_uchar *)0xC542A08)->v) = (*(signed char *)0xC472ADE);
    (((struct o3_uchar *)0xC542A08)->v) = (*(signed char *)0xC472ADF);
    (((struct o4_uchar *)0xC542A08)->v) = (*(signed char *)0xC472AE0);
    (((struct o5_uchar *)0xC542A08)->v) = (*(signed char *)0xC472AE1);
    t6 = *(signed char *)0xC472AE2;
    (((struct o6_uchar *)0xC542A08)->v) = t6;
    return t6;
}

int FUN_0c0fc722(void)
{
    if ((*(signed char *)0xC542A08) == (*(signed char *)0xC472ADC)) {
        if ((*(signed char *)0xC542A09) == (*(signed char *)0xC472ADD)) {
            if ((*(signed char *)0xC542A0A) == (*(signed char *)0xC472ADE)) {
                if ((*(signed char *)0xC542A0B) == (*(signed char *)0xC472ADF)) {
                    if ((*(signed char *)0xC542A0C) == (*(signed char *)0xC472AE0)) {
                        if ((*(signed char *)0xC542A0D) == (*(signed char *)0xC472AE1)) {
                            if ((*(signed char *)0xC542A0E) != (*(signed char *)0xC472AE2)) {
                                return 0x1;
                            }
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c0fc776(void)
{
    int stk[3];
    register int t0;
    register int t15;
    register int t22;
    register int t24;
    register int t43;
    register int t45;
    register int t56;
    register int t58;
    register int t75;
    register int t77;
    register int t20;
    register int t41;
    register int t54;

    t0 = *(signed char *)0xC541F43;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)(*(signed char *)0xC541F44) == 0) {
                        (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        *(unsigned short *)0xC541F52 = 0xC;
                        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x9);
                    } else {
                        t20 = 0xC541F43;
                    }
                    t15 = *(short *)0xC541F52;
                    *(unsigned short *)0xC541F52 = (t15 - 1);
                    if ((int)(short)(t15 - 1) <= 0) {
                        FUN_0c05f222();
                        FUN_0c03f0aa();
                    } else {
                    }
                    t22 = ((int (*)(int, int))(FUN_0c03f40c))(0x5, t20);
                    FUN_0c038e88(0x5);
                    t24 = ((int (*)(int))(FUN_0c03f40c))(0x8);
                    return FUN_0c038e88(0x8);
                }
                if ((unsigned char)(*(signed char *)0xC541F44) == 0) {
                    FUN_0c0fe4ec(0x1);
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    FUN_0c0fc6e6();
                }
                return FUN_0c0fe530();
            }
            if ((unsigned char)(*(signed char *)0xC541F44) != 0) {
                
                t41 = 0xC541F43;
            } else {
                FUN_0c03eff6();
                FUN_0c16f7ba();
                FUN_0c0fe0b2();
                (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
            }
            t43 = ((int (*)(int, int))(FUN_0c03f40c))(0x5, t41);
            FUN_0c038e88(0x5);
            t45 = ((int (*)(int))(FUN_0c03f40c))(0x8);
            return FUN_0c038e88(0x8);
        }
        if ((unsigned char)(*(signed char *)0xC541F44) != 0) {
            
            t54 = 0xC541F43;
        } else {
            (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
            FUN_0c03eff6();
            FUN_0c16f7ba();
            FUN_0c0fc67e();
        }
        t56 = ((int (*)(int, int))(FUN_0c03f40c))(0x5, t54);
        FUN_0c038e88(0x5);
        t58 = ((int (*)(int))(FUN_0c03f40c))(0x8);
        return FUN_0c038e88(0x8);
    }
    (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
    (((struct o2_uchar *)0xC541F43)->v) = 0x0;
    (((struct o1_uchar *)0xC541F43)->v) = 0x0;
    *(unsigned short *)0xC541F50 = 0x0;
    *(unsigned short *)0xC541F52 = 0x0;
    FUN_0c03eff6();
    FUN_0c0527e6();
    FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    (((struct o0_uint *)0xC542440)->v) = 0xFF004000;
    (((struct o4_uint *)0xC542440)->v) = 0xFF004000;
    (((struct o8_uint *)0xC542440)->v) = 0xFF004000;
    FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
    FUN_0c036de8(0x19, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c036de8(0x1C, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c0fc6b6();
    if ((unsigned char)(*(signed char *)0xC541F44) != 0) {
        
    } else {
        (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
        FUN_0c03eff6();
        FUN_0c16f7ba();
        FUN_0c0fc67e();
    }
    t75 = ((int (*)(int))(FUN_0c03f40c))(0x5);
    FUN_0c038e88(0x5);
    t77 = ((int (*)(int))(FUN_0c03f40c))(0x8);
    return FUN_0c038e88(0x8);
}
