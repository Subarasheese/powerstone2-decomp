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


int FUN_0c2e5800(void)
{
    int stk[4];
    register int t11;
    register int t37;
    register int t22;
    register int t29;
    register int t42;
    register int t44;
    register int t67;

    FUN_0c2e732c();
    FUN_0c2e732c();
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    FUN_0c2e638e();
    for (;;) {
        *(unsigned int *)(((int)stk + 12)) = (((*(int *)(((int)stk + 12))) << 2) << 2);
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + (unsigned char)(FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))))));
        FUN_0c2e638e();
        t11 = *(signed char *)(((*(int *)0xC304178) + 0x0));
        if (((unsigned char)t11 != (unsigned char)(*(signed char *)0xC8D6526)) && (((unsigned char)t11 != 61) && ((unsigned char)t11 != 84))) continue;
        break;
    }
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) & 0xFFFFFFFE);
    if ((unsigned char)(*(signed char *)(((*(int *)0xC304178) + 0x0))) != 61) {
        t37 = 0x1;
        if ((unsigned char)(*(signed char *)(((*(int *)0xC304178) + 0x0))) == 84) {
            FUN_0c2e638e();
            t22 = FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))));
            FUN_0c2e638e();
            t37 = t22;
            if ((*(signed char *)(((*(int *)0xC304178) + 0x0))) != (*(signed char *)0xC8D6526)) {
                t29 = FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))));
                FUN_0c2e638e();
                t37 = (((t22 << 2) << 2) + t29);
            }
        }
        t42 = t37;
        if ((unsigned char)t37 == 0xFF) {
            t42 = (t37 - 1);
        }
        if ((int)0x1 <= (int)(unsigned char)t42) {
            t44 = 0x1;
            for (;;) {
                FUN_0c2e76c8((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), 0x10, 0x8, ((int)stk + 0));
                FUN_0c2e7200(0xC3011CC);
                FUN_0c2e7200(((int)stk + 0));
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x4);
                if ((int)(unsigned char)t44 > 0) {
                    if (((int)((int)(unsigned char)t44 % (int)0x8)) == 0) {
                        FUN_0c2e732c();
                    }
                }
                t44 = (t44 + 0x1);
                if ((int)(unsigned char)t44 > (int)(unsigned char)t42) {
                    break;
                }
            }
        }
    } else {
        FUN_0c2e638e();
        t67 = 0x0;
        for (;;) {
            t67 = (t67 << 2);
            t67 = (t67 << 2);
            t67 = (t67 + (unsigned char)(FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))))));
            FUN_0c2e638e();
            if ((*(signed char *)(((*(int *)0xC304178) + 0x0))) == (*(signed char *)0xC8D6526)) {
                break;
            }
        }
        *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = t67;
    }
    return (FUN_0c2e732c());
}


int FUN_0c2f8b40(int a4)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t14;
    register int t21;
    register int t38;
    register int t7;
    int t8;
    register int t9;
    int t10;
    register int t16;
    int t17;
    register int t18;
    int t19;

    *(unsigned char *)(((int)stk + 8)) = a4;
    if ((((((struct o0_int *)0xC8D65E4)->v)) & 128) != 0) {
        t1 = *(signed char *)0xC8D6475;
        t2 = *(signed char *)0xC8D6476;
        t3 = *(signed char *)0xC8D6472;
        t4 = *(signed char *)0xC8D6474;
        t6 = *(signed char *)0xC8D6477;
        t14 = (t6 & 0xF7);
        if (((((unsigned char)(*(signed char *)0xC8D645B) & 0x3) == 0) && ((t7 = *(signed char *)0xC8D644E, ((unsigned char)t7 & 128) != 0) && (t8 = *(signed char *)0xC8D6464, ((unsigned char)t8 & 8) != 0))) || ((t9 = *(signed char *)0xC8D644E, ((unsigned char)t9 & 128) == 0) && (t10 = *(signed char *)0xC8D6464, ((unsigned char)t10 & 128) != 0))) {
            t14 = (t6 | 0x8);
        }
        t21 = (((((unsigned char)t1 << 8) + ((unsigned char)t2 << 16)) + (((unsigned char)t3 << 16) << 8)) + (unsigned char)t4);
        if (((((unsigned char)(*(signed char *)0xC8D645B) & 0x3) == 0) && ((t16 = *(signed char *)0xC8D644E, ((unsigned char)t16 & 128) != 0) && (t17 = *(signed char *)0xC8D6464, ((unsigned char)t17 & 0xF) == 1))) || ((t18 = *(signed char *)0xC8D644E, ((unsigned char)t18 & 128) == 0) && (t19 = *(signed char *)0xC8D6464, ((unsigned char)t19 & 0xF0) == 16))) {
            t21 = ((((((unsigned char)t1 << 8) + ((unsigned char)t2 << 16)) + (((unsigned char)t3 << 16) << 8)) + (unsigned char)t4) & 0xFFFFFFFE);
        }
        FUN_0c2d2d8c(t14);
        FUN_0c2d2e74(t21);
    }
    if ((*(signed char *)(((int)stk + 8))) != 0) {
        *(int *)((int)stk + 4) = 0x1;
        *(int *)((int)stk + 0) = 0xC8E00EF;
        FUN_0c2f8d7c(0xC8E00E8, 0xC8E00EC, 0xC8E00ED, 0xC8E00EE, 0xC8E00EF, 0x1);
    }
    (((struct oA_uchar *)0xC8D65E4)->v) = (FUN_0c2f94d4((*(signed char *)0xC8E00ED)));
    t38 = (*(signed char *)0xC8E00EF);
    *(int *)((int)stk + 4) = t38;
    return (FUN_0c2d2050((*(int *)0xC8E00E8), (*(signed char *)0xC8E00EC), (*(signed char *)0xC8E00ED), (*(signed char *)0xC8E00EE), t38));
}

