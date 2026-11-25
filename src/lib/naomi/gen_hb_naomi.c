/* Straight-line functions with calls and guards (batch gen_hb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1D4_uint { char p[0x1D4]; unsigned int v; };
struct o2C8_int { char p[0x2C8]; int v; };
struct o2C8_uint { char p[0x2C8]; unsigned int v; };
struct o2CC_int { char p[0x2CC]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o94_uchar { char p[0x94]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c0522e2(int, int);
int FUN_0c052364(int, int);
int FUN_0c054c90(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c060028(int, int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c061416(int, int, int, int);
int FUN_0c06151a(int, int, int, int, float);
int FUN_0c07e2f4(int, int);
int FUN_0c1171f0(int);
int FUN_0c1377a8(int, int, int, int);
int FUN_0c137a9a(int, int, int, int);
int FUN_0c137c7c(int, int, int, int);
int FUN_0c1965cc(int, int, int);
int FUN_0c19d2b4(int, int, int, int);
int FUN_0c1a02cc(int, int, int);
int FUN_0c1a03b2(int, int);
int FUN_0c1a14c0(int);
int FUN_0c1a14dc(int, int, int);
int FUN_0c1a1574(int, int);
float math_interval_overlap(float, float, float, float);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int strlen(int);
int FUN_0c19ccc0(int a4, int a5, int a6);
int FUN_0c061a10(int a4, int a5, int a6, int a7);
int FUN_0c137cb4(int a4, int a5, int a6, int a7);
int FUN_0c0fd6e4(int a4);
int FUN_0c062c50(int a4, int a5, int a6, int a7);
int FUN_0c054a6c(int a4, int a5, int a6);

int FUN_0c19ccc0(int a4, int a5, int a6)
{
    int stk[119];
    register int t101;
    register int t4;
    register int t6;
    register int t9;
    register int t10;
    register int t11;
    register int t15;
    register int t17;
    register int t18;
    register int t20;
    register int t39;
    register int t40;
    register int t71;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t50;
    register int t52;
    register int t53;
    register int t55;
    register int t81;
    register int t95;
    register int t96;
    register int t12;
    int t13;
    register int t14;
    register int t27;
    register int t47;
    int t48;
    register int t49;
    register int t62;
    register int t63;
    register int t64;
    register int t82;
    register int t94;

    (((struct o1D4_uint *)(((int)stk + 4)))->v) = a6;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x30)));
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t101 = 0xFFFFFFFF;
    if ((*(signed char *)((a5 + 0x1))) != (*(signed char *)((a4 + 0x1)))) {
    } else {
        *(unsigned short *)(((int)stk + 12)) = (*(short *)((a5 + 0x2)));
        t4 = FUN_0c1a02cc((0x1D4 + ((int)stk + 4)), 0xC8B5DB4, 0x1);
        t6 = 0xFFFFFFFF;
        if ((short)t4 != 1) {
        } else {
            t6 = (unsigned char)(*(signed char *)0xC8B5DB4);
        }
        *(unsigned short *)(((int)stk + 8)) = t6;
        if ((short)t6 != -1) {
            *(unsigned int *)(((int)stk + 16)) = (0x118 + ((int)stk + 4));
            if ((int)(short)t6 > 0) {
                t9 = (0x118 + ((int)stk + 4));
                t10 = 0x0;
                for (;;) {
                    t11 = t9;
                    *(int *)((int)stk + 0) = t11;
                    t9 = (t9 + 0x1);
                    if (((0x1D8 + ((int)stk + 0)) != 0) && ((t12 = *(int *)(((int)stk + 472)), t12 != 0) && (t13 = *(int *)(((int)stk + 472)), t14 = *(short *)((t13 + 0x4)), (int)(unsigned short)t14 > (int)0x1))) {
                        t15 = *(int *)(((int)stk + 472));
                        *(unsigned short *)(((0x4 + t15) + 0x0)) = ((*(short *)((0x4 + t15))) - 1);
                        t17 = *(int *)(((int)stk + 472));
                        t18 = *(int *)((t17 + 0x0));
                        *(unsigned int *)((t17 + 0x0)) = (t18 + 0x1);
                        t27 = (unsigned char)(*(signed char *)((((t18 + 0x1) - 1) + 0x0)));
                    } else {
                        t20 = FUN_0c1a02cc((0x1D8 + ((int)stk + 0)), 0xC8B5DB4, 0x1);
                        t27 = 0xFFFFFFFF;
                        if ((short)t20 != 1) {
                        } else {
                            t27 = (unsigned char)(*(signed char *)0xC8B5DB4);
                        }
                    }
                    t10 = (t10 + 0x1);
                    *(unsigned char *)((t11 + 0x0)) = t27;
                    if ((int)t10 >= (int)(short)t6) {
                        break;
                    }
                }
            }
        }
        t42 = *(short *)(((int)stk + 8));
        t39 = *(short *)(((int)stk + 12));
        t40 = ((t39 - t42) - 1);
        if ((int)(short)((t39 - t42) - 1) < 0) {
            t40 = 0x0;
        }
        if ((short)t40 != 0) {
            t71 = (0x158 + ((int)stk + 4));
            if ((int)(short)t40 > 0) {
                t43 = t40;
                t44 = (0x158 + ((int)stk + 4));
                t45 = 0x0;
                for (;;) {
                    t46 = t44;
                    *(int *)((int)stk + 0) = t46;
                    t44 = (t44 + 0x1);
                    if (((0x1D8 + ((int)stk + 0)) != 0) && ((t47 = *(int *)(((int)stk + 472)), t47 != 0) && (t48 = *(int *)(((int)stk + 472)), t49 = *(short *)((t48 + 0x4)), (int)(unsigned short)t49 > (int)0x1))) {
                        t50 = *(int *)(((int)stk + 472));
                        *(unsigned short *)(((0x4 + t50) + 0x0)) = ((*(short *)((0x4 + t50))) - 1);
                        t52 = *(int *)(((int)stk + 472));
                        t53 = *(int *)((t52 + 0x0));
                        *(unsigned int *)((t52 + 0x0)) = (t53 + 0x1);
                        t62 = (unsigned char)(*(signed char *)((((t53 + 0x1) - 1) + 0x0)));
                        t63 = t42;
                        t64 = t43;
                    } else {
                        t43 = 0x1D8;
                        t42 = 0xC1A02CC;
                        t43 = (t43 + ((int)stk + 0));
                        t55 = FUN_0c1a02cc(t43, 0xC8B5DB4, 0x1);
                        t62 = 0xFFFFFFFF;
                        if ((short)t55 != 1) {
                        } else {
                            t62 = (unsigned char)(*(signed char *)0xC8B5DB4);
                        }
                    }
                    t45 = (t45 + 0x1);
                    t42 = t63;
                    t43 = t64;
                    *(unsigned char *)((t46 + 0x0)) = t62;
                    if ((int)t45 >= (int)(short)t40) {
                        break;
                    }
                }
                t71 = t44;
            }
            *(unsigned char *)((t71 + 0x0)) = 0x0;
        }
        (((struct o94_uchar *)(((int)stk + 4)))->v) = (*(signed char *)((a5 + 0x1)));
        t81 = *(int *)(((*(int *)(((int)stk + 4))) + 0x4));
        for (t82 = 0; ; t82++) { *(unsigned char *)(((0x94 + ((int)stk + 4)) + 0x1) + t82) = *(unsigned char *)(t81 + t82); if (*(unsigned char *)(t81 + t82) == 0) break; }
        *(unsigned short *)(((int)stk + 4)) = (strlen((*(int *)(((*(int *)(((int)stk + 4))) + 0x4)))));
        FUN_0c1a14c0((0x17C + ((int)stk + 4)));
        FUN_0c1a14dc((0x17C + ((int)stk + 4)), (0x94 + ((int)stk + 4)), ((*(short *)(((int)stk + 4))) + 0x1));
        FUN_0c1a14dc((0x17C + ((int)stk + 4)), 0xC8B5DB9, (unsigned short)(*(short *)0xC8B5DB6));
        FUN_0c1a1574((((int)stk + 4) + 0x10), (0x17C + ((int)stk + 4)));
        FUN_0c1965cc((((int)stk + 4) + 0x10), (*(int *)(((int)stk + 16))), 0x10);
        for (t94 = 0; ; t94++) { *(unsigned char *)((((int)stk + 4) + 0x10) + t94) = *(unsigned char *)(0xC20AA44 + t94); if (*(unsigned char *)(0xC20AA44 + t94) == 0) break; }
        *(unsigned short *)(((int)stk + 8)) = 0x3;
        *(unsigned short *)(((int)stk + 4)) = 0x0;
        t95 = strlen((((int)stk + 4) + 0x10));
        t96 = FUN_0c1a03b2((((int)stk + 4) + 0x10), t95);
        FUN_0c19d2b4(a4, (*(short *)(((int)stk + 8))), (*(signed char *)((a5 + 0x1))), t96);
        t101 = (*(short *)(((int)stk + 4)));
    }
    return t101;
}


