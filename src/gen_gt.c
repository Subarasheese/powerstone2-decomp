/* Straight-line functions with calls and guards (batch gen_gt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c120654(int a4, int a5, int a6);

int FUN_0c120654(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t77;
    register int t2;
    register int t3;
    register int t10;
    register int t26;
    register int t46;
    register int t51;
    register int t53;
    register int t55;
    register int t57;
    register int t59;
    register int t61;
    register int t64;
    register int t72;
    register int t73;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0xB);
    t77 = t0;
    if (t0 != 0) {
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        t2 = *(int *)0xC4B410C;
        t3 = 0xB;
        if ((*(int *)(((int)stk + 0))) != 0) {
            t3 = 0xC;
        }
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, t3, t2);
        FUN_0c03744a(((((struct oC8_int *)(t0))->v)), 0x0, 0xA, (*(int *)0xC4B410C));
        t10 = *(int *)0xC4B410C;
        if ((int)a5 > (int)0xF423F) {
            FUN_0c03744a(((((struct oCC_int *)(t0))->v)), 0x0, 0x9F, t10);
        } else {
            FUN_0c03744a(((((struct oCC_int *)(t0))->v)), 0x0, 0x9E, t10);
            if ((int)a5 < (int)0x3E8) {
                *(unsigned char *)((((((struct oCC_int *)(t0))->v)) + 0x0)) = 0x0;
            } else {
                *(unsigned char *)((((((struct oCC_int *)(t0))->v)) + 0x0)) = 0x1;
            }
        }
        t26 = a5;
        if ((int)a5 > (int)0x5F5E0FF) {
            t26 = 0x5F5E0FF;
        }
        t46 = 0x8;
        if ((int)t26 >= (int)0x989680) {
        } else {
            t46 = 0x7;
            if ((int)t26 >= (int)0xF4240) {
            } else {
                t46 = 0x6;
                if ((int)t26 >= (int)0x186A0) {
                } else {
                    t46 = 0x5;
                    if ((int)t26 >= (int)0x2710) {
                    } else {
                        t46 = 0x4;
                        if ((int)t26 >= (int)0x3E8) {
                        } else {
                            t46 = 0x3;
                            if ((int)t26 >= (int)0x64) {
                            } else {
                                t46 = 0x1;
                                if ((int)t26 >= (int)0xA) {
                                    t46 = 0x2;
                                }
                            }
                        }
                    }
                }
            }
        }
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x1C)) = ((int)((int)t26 / (int)0x989680));
        t51 = (int)((int)t26 % (int)0x989680);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x18)) = ((int)((int)t51 / (int)0xF4240));
        t53 = (int)((int)t51 % (int)0xF4240);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x14)) = ((int)((int)t53 / (int)0x186A0));
        t55 = (int)((int)t53 % (int)0x186A0);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x10)) = ((int)((int)t55 / (int)0x2710));
        t57 = (int)((int)t55 % (int)0x2710);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0xC)) = ((int)((int)t57 / (int)0x3E8));
        t59 = (int)((int)t57 % (int)0x3E8);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x8)) = ((int)((int)t59 / (int)0x64));
        t61 = (int)((int)t59 % (int)0x64);
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = ((int)((int)t61 / (int)0xA));
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = ((int)((int)t61 % (int)0xA));
        t64 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + (t64 << 2)) + 0xC))), (*(int *)(((((int)stk + 0) + 0x8) + (t64 << 2)))), 0x0, (*(int *)0xC4B410C));
            *(volatile int *)((((0xC4 + t0) + (t64 << 2)) + 0xC));
            FUN_0c187798();
            t72 = (t64 << 2);
            t73 = ((int)t46 > (int)t64);
            t64 = (t64 + 0x1);
            *(unsigned char *)(((*(int *)(((t72 + (0xC4 + t0)) + 0xC))) + 0x0)) = ((t73) ? 1 : 0);
            if ((int)t64 >= (int)0x8) {
                break;
            }
        }
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1205C4;
        *(volatile int *)(((int)stk + 4));
        t77 = (FUN_0c187798());
    }
    return t77;
}
