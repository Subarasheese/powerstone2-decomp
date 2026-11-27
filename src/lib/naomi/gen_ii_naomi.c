/* Straight-line functions with calls and guards (batch gen_ii): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1D10_int { char p[0x1D10]; int v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o382C_ushort { char p[0x382C]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o814_uint { char p[0x814]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC18_int { char p[0xC18]; int v; };
int FUN_0c02b536(int);
int FUN_0c02b570(void);
int FUN_0c037bf6(int, int, int);
int FUN_0c067672(int);
int FUN_0c07daea(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c181bb0(int, int, int);
int FUN_0c184ddc(void);
int FUN_0c184f9a(int, int, int, int, int);
int FUN_0c184fd0(int, int);
int FUN_0c2d2050(int, int, int, int, int);
int FUN_0c2d2d8c(int);
int FUN_0c2d2e74(int);
int FUN_0c2e5ea0(int);
int FUN_0c2e638e(void);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int, int, int);
int FUN_0c2f8d7c(int, int, int, int, int, int);
int FUN_0c2f94d4(int);
int math_vec3_accumulate(int, int);
int memset(int, int, int);
int nlLineSetThickness(float);
int nlUnitMatrix(void);
extern int strcpy();
int strlen(int);
int FUN_0c172204(int a4);
int FUN_0c2e5800(void);
int FUN_0c02b692(int a4, int a5, int a6);
int FUN_0c0ba628(int a4, int a5, int a6);
int FUN_0c2f8b40(int a4);
int FUN_0c185080(int a4, int a5, int a6);


int FUN_0c185080(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t4;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;
    register int t12;
    register int t13;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t23;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 4)) = 0xC8A2430;
    memset(0xC8A2430, 0x0, 0x800);
    t2 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t2 + 0x1);
    *(unsigned char *)((((t2 + 0x1) - 0x1) + 0x0)) = ((int)(((((struct oC18_int *)(((short)((short)t0 * (short)0xC24) + 0xC89C310)))->v)) & 0xFF00) >> 8);
    t4 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t4 + 0x1);
    *(unsigned char *)((((t4 + 0x1) - 0x1) + 0x0)) = (*(signed char *)((((short)((short)t0 * (short)0xC24) + 0xC89C310) + 0xC18)));
    t6 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t6 + 0x1);
    *(unsigned char *)((((t6 + 0x1) - 0x1) + 0x0)) = 0x1;
    t7 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t7 + 0x1);
    *(unsigned char *)((((t7 + 0x1) - 0x1) + 0x0)) = 0x0;
    t8 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t8 + 0x1);
    *(unsigned char *)((((t8 + 0x1) - 0x1) + 0x0)) = 0x0;
    t9 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t9 + 0x1);
    *(unsigned char *)((((t9 + 0x1) - 0x1) + 0x0)) = 0x1;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x6);
    *(unsigned int *)(((int)stk + 8)) = (0x818 + ((short)((short)t0 * (short)0xC24) + 0xC89C310));
    t11 = 0x1;
    for (;;) {
        t12 = FUN_0c184fd0(((int)stk + 4), (((int)stk + 4) + 0x4));
        if (t12 == 0) {
            break;
        }
        t11 = 0x0;
    }
    if (t11 != 0) {
        *(unsigned int *)(((int)stk + 8)) = 0xC89BF10;
        for (;;) {
            t13 = FUN_0c184fd0(((int)stk + 4), (((int)stk + 4) + 0x4));
            if (t13 == 0) {
                break;
            }
        }
    }
    t15 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t15 + 0x1);
    *(unsigned char *)((((t15 + 0x1) - 0x1) + 0x0)) = 0x0;
    t16 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t16 + 0x1);
    *(unsigned char *)((((t16 + 0x1) - 0x1) + 0x0)) = 0x0;
    t17 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t17 + 0x1);
    *(unsigned char *)((((t17 + 0x1) - 0x1) + 0x0)) = 0x1;
    t18 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t18 + 0x1);
    *(unsigned char *)((((t18 + 0x1) - 0x1) + 0x0)) = 0x0;
    t19 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t19 + 0x1);
    *(unsigned char *)((((t19 + 0x1) - 0x1) + 0x0)) = 0x1;
    memset((((short)((short)t0 * (short)0xC24) + 0xC89C310) + 0xE), 0x0, 0x800);
    *(unsigned int *)((((short)((short)t0 * (short)0xC24) + 0xC89C310) + 0x4)) = 0x1;
    (((struct o814_uint *)(((short)((short)t0 * (short)0xC24) + 0xC89C310)))->v) = ((FUN_0c184ddc()) + (*(int *)(((int)stk + 16))));
    t23 = *(int *)(((int)stk + 4));
    *(int *)((int)stk + 0) = (t23 - 0xC8A2430);
    return (FUN_0c184f9a((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 20))), 0x3500, 0xC8A2430, (t23 - 0xC8A2430)));
}
