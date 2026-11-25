/* Straight-line functions with calls and guards (batch gen_abz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c02ec70(void);
int FUN_0c02f4ac(void);
int FUN_0c02f4c2(int);
int FUN_0c02f80c(void);
int FUN_0c02f81c(void);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c0527e6(void);
int FUN_0c056e44(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c05a344(void);
int FUN_0c100604(void);
int FUN_0c1008c4(void);
int FUN_0c10489c(void);
int FUN_0c10491c(void);
int FUN_0c10662c(void);
int FUN_0c118d7a(int);
int FUN_0c16f7ba(void);
int FUN_0c1002f4(void);

int FUN_0c1002f4(void)
{
    int t1;
    int stk[8];
    int t5;
    int qe0;
    int t30;
    int t6;
    int t25;
    int t34;
    int t46;
    int t38;
    int t37;
    int t36;
    int t35;

    FUN_0c10491c();
    t1 = *(signed char *)0xC541F43;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 == 2) {
                (((struct oC_uint *)0xC474720)->v) = (FUN_0c02f4c2(0xC541F43));
                (((struct o10_uint *)0xC474720)->v) = (FUN_0c02f4ac());
                if ((((((struct o0_int *)0xC474720)->v)) != -1) && (t5 = (((struct o10_int *)0xC474720)->v), t5 != -1)) {
                    t6 = (((struct o0_int *)0xC474720)->v);
                    qe0 = ((((t6 << 2) + 0xC295DFC) + 0x0));
                    if ((*(int *)(((((t5 << 2) << 2) + (*(int *)qe0)) + 0xC))) != -1) {
                        FUN_0c059c7a((*(int *)(((((t5 << 2) << 2) + (*(int *)qe0)) + 0xC))), 0x0);
                    }
                }
                if ((unsigned char)(*(signed char *)0xC541F44) != 5) {
                    if (((*(int *)0xC473CA0) != 0) && (t25 = *(int *)0xC474C3C, t25 != 0)) {
                        FUN_0c02f80c();
                        return FUN_0c118d7a((*(int *)0xC474C3C));
                    }
                    FUN_0c02f81c();
                }
                FUN_0c100604();
                t30 = *(signed char *)0xC541F44;
                if ((unsigned char)t30 != 6) {
                } else {
                    return (unsigned char)t30;
                }
            } else {
                return (unsigned char)t1;
            }
        } else {
            (((struct oC_uint *)0xC474720)->v) = (FUN_0c02f4c2(0xC541F43));
            (((struct o10_uint *)0xC474720)->v) = (FUN_0c02f4ac());
            if ((((((struct o0_int *)0xC474720)->v)) != -1) && ((t34 = (((struct o10_int *)0xC474720)->v), t34 != -1) && (t35 = (((struct o0_int *)0xC474720)->v), t36 = (((struct o10_int *)0xC474720)->v), t37 = *(int *)((0xC295DFC + (t35 << 2))), t38 = *(int *)(((t37 + ((t36 << 2) << 2)) + 0xC)), t38 != -1))) {
                FUN_0c059c7a((*(int *)((((*(int *)(((((((struct o0_int *)0xC474720)->v)) << 2) + 0xC295DFC))) + ((((((struct o10_int *)0xC474720)->v)) << 2) << 2)) + 0xC))), 0x0);
            }
            if (((*(int *)0xC473CA0) != 0) && (t46 = *(int *)0xC474C3C, t46 != 0)) {
                FUN_0c02f80c();
                return FUN_0c118d7a((*(int *)0xC474C3C));
            }
            FUN_0c02f81c();
            FUN_0c10662c();
        }
    } else {
        (((struct o0_uchar *)0xC541F43)->v) = 0x1;
        *(unsigned int *)0xC473CA0 = 0x0;
        (((struct o18_uint *)0xC474720)->v) = 0x0;
        (((struct o1_uchar *)0xC541F43)->v) = 0x0;
        (((struct o2_uchar *)0xC541F43)->v) = 0x0;
        FUN_0c03eff6();
        FUN_0c16f7ba();
        FUN_0c0527e6();
        FUN_0c03ea04(0xB, 0x0);
        (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x23);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC5410B8) = *(struct mv3 *)(0xC1FBC44); }
        FUN_0c05a344();
        FUN_0c02ec70();
        FUN_0c056e44(0x23, 0x0);
        FUN_0c1008c4();
        FUN_0c10489c();
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    FUN_0c038e88(0x8);
    FUN_0c03f40c(0x9);
    return (FUN_0c038e88(0x9));
}
