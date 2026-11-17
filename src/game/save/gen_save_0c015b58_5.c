/* game/save: functions 0C015B58-0C017EF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o49_uchar { char p[0x49]; unsigned char v; };
struct o4D_uchar { char p[0x4D]; unsigned char v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
int FUN_0c016230(void);
int FUN_0c016244(void);
int FUN_0c01626a(void);
int FUN_0c016288(void);
int FUN_0c0163c4(int, int, int, int);
int FUN_0c01643e(int);
int FUN_0c0166cc(int);
int FUN_0c016a88(int, int, int, int, int, int, int, int);
int FUN_0c017c70(void);
extern int thunk_FUN_0c03f346();
int FUN_0c187d44(int, int);
int FUN_0c187d98(int, int, int);
int strncpy(int, int, int);
int FUN_0c016d00(int a4, int a5, int a6, int a7);
int FUN_0c017be8(int a4, int a5, int a6, int a7);

int FUN_0c016d00(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t10;
    register int t17;
    register int t21;
    register int t36;
    register int t100;
    register int t51;
    register int t55;
    register int t75;
    register int t80;
    register int t81;
    register int t124;
    register int t125;
    register int t126;
    register int t128;
    register int t129;
    register int t131;
    register int t133;
    register int t135;
    register int t136;
    register int t142;
    register int t150;
    register int t154;
    register int t166;
    register int t229;
    register int t180;
    register int t184;
    register int t204;
    register int t209;
    register int t210;
    register int t108;
    register int t39;
    register int t237;
    register int t169;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x49))) != 0) {
        if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) != 0) {
            FUN_0c016a88(a4, a5, a6, a7, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
        }
        t10 = FUN_0c016244();
        t100 = FUN_0c01626a();
        if (t100 != 0) {
            strncpy(((int)stk + 8), ((*(int *)(((t10 << 2) + 0xC20BDF8))) + (((unsigned char)(*(signed char *)(((*(int *)0xC304BA0) + 0x4F))) - 10) << 1)), 0x2);
            *(unsigned char *)((((int)stk + 8) + 0x2)) = 0x0;
            t17 = FUN_0c187d98(((int)stk + 8), 0xC1A5E14, 0x2);
            if (t17 != 0) {
                t39 = FUN_0c0163c4(0xC304C24, ((int)stk + 8), (unsigned char)(*(signed char *)(((*(int *)0xC304BA0) + 0x4D))), 0x26);
                t21 = *(int *)0xC304BA0;
                (((struct o4D_uchar *)(t21))->v) = ((*(signed char *)((t21 + 0x4D))) + t39);
                if ((*(signed char *)(((*(int *)0xC304BA0) + 0x51))) != 0) {
                    FUN_0c01643e((*(int *)0xC20BE10));
                }
            } else {
                t39 = FUN_0c0163c4(0xC304BA4, ((int)stk + 8), (unsigned char)(*(signed char *)(((*(int *)0xC304BA0) + 0x50))), (*(int *)(((*(int *)0xC304BA0) + 0x18))));
                t36 = *(int *)0xC304BA0;
                (((struct o50_uchar *)(t36))->v) = ((*(signed char *)((t36 + 0x50))) + t39);
            }
            if (t39 != 0) {
                (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
            }
            t108 = (FUN_0c017c70());
        } else {
            if ((int)t10 >= (int)0x2) {
                t51 = *(signed char *)((((unsigned char)(*(signed char *)(((0x4F + (*(int *)0xC304BA0)) + 0x0))) - 10) + (*(int *)((0xC20BE08 + ((t10 - 2) << 2))))));
                FUN_0c187d44((*(int *)0xC20C8FC), (unsigned char)t51);
                t55 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
                t100 = (unsigned char)t55;
                if ((((unsigned char)t55 & 4) == 0) || (((int)(unsigned char)t51 >= (int)0x30) && ((int)(unsigned char)t51 <= (int)0x39))) {
                    t100 = (unsigned char)t51;
                    if ((((unsigned char)(*(signed char *)((0x4A + (*(int *)0xC304BA0)))) & 8) == 0) || ((((int)(unsigned char)t51 >= (int)0x30) && ((int)(unsigned char)t51 <= (int)0x39)) || ((unsigned char)t51 == 45))) {
                        t75 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
                        t100 = (unsigned char)t75;
                        if ((((unsigned char)t75 & 16) != 0) && ((((int)(unsigned char)t51 < (int)0x30) || ((int)(unsigned char)t51 > (int)0x39)) && (((int)(unsigned char)t51 < (int)0x41) || ((int)(unsigned char)t51 > (int)0x5A)))) {
                        } else {
                            *(unsigned char *)((((int)stk + 8) + 0x0)) = t51;
                            *(unsigned char *)((((int)stk + 8) + 0x1)) = 0x0;
                            t80 = FUN_0c0163c4(0xC304BA4, ((int)stk + 8), (unsigned char)(*(signed char *)(((*(int *)0xC304BA0) + 0x50))), (*(int *)(((*(int *)0xC304BA0) + 0x18))));
                            t81 = *(int *)0xC304BA0;
                            (((struct o50_uchar *)(t81))->v) = ((*(signed char *)((t81 + 0x50))) + t80);
                            if (t80 != 0) {
                                (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
                            }
                            t100 = (FUN_0c017c70());
                        }
                    }
                }
            }
            t108 = t100;
        }
        return t108;
    }
    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) != 0) {
        FUN_0c016a88(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
    }
    t124 = FUN_0c016230();
    t125 = *(int *)0xC304BA0;
    t126 = 0x0;
    if (t124 != 0) {
        t126 = 0x1;
    }
    t128 = *(signed char *)(((t125 + 0x53) + 0x0));
    t129 = t128;
    if ((unsigned char)t128 == 0x87) {
        t129 = 0x0;
    }
    t131 = t129;
    if ((unsigned char)t129 == 0x89) {
        t131 = 0x1;
    }
    t133 = FUN_0c016244();
    t229 = FUN_0c01626a();
    if (t229 != 0) {
        t135 = FUN_0c016288();
        t136 = t133;
        if ((t135 == 0) && ((int)t133 <= (int)0x1)) {
            t136 = 0x4;
        }
        strncpy(((int)stk + 0), ((*(int *)(((((((unsigned char)t126 << 2) + (unsigned char)t126) + t136) << 2) + 0xC20BDC0))) + ((unsigned char)t131 << 1)), 0x2);
        if (t136 == 4) {
            t142 = *(signed char *)((((int)stk + 0) + 0x0));
            if ((((int)(unsigned char)t142 >= (int)0x41) && ((int)(unsigned char)t142 <= (int)0x5A)) || (((int)(unsigned char)t142 >= (int)0x61) && ((int)(unsigned char)t142 <= (int)0x7A))) {
                *(unsigned char *)((((int)stk + 0) + 0x1)) = (t133 + 0x1);
            }
        }
        *(unsigned char *)((((int)stk + 0) + 0x2)) = 0x0;
        t150 = FUN_0c187d98(((int)stk + 0), 0xC1A5E14, 0x2);
        if (t150 != 0) {
            t169 = FUN_0c0163c4(0xC304C24, ((int)stk + 0), (unsigned char)(*(signed char *)(((*(int *)0xC304BA0) + 0x4D))), 0x26);
            t154 = *(int *)0xC304BA0;
            (((struct o4D_uchar *)(t154))->v) = ((*(signed char *)((t154 + 0x4D))) + t169);
            if (t136 == 4) {
                FUN_0c0166cc(t133);
            }
        } else {
            t169 = FUN_0c0163c4(0xC304BA4, ((int)stk + 0), (unsigned char)(*(signed char *)(((*(int *)0xC304BA0) + 0x50))), (*(int *)(((*(int *)0xC304BA0) + 0x18))));
            t166 = *(int *)0xC304BA0;
            (((struct o50_uchar *)(t166))->v) = ((*(signed char *)((t166 + 0x50))) + t169);
        }
        if (t169 != 0) {
            (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
        }
        t237 = (FUN_0c017c70());
    } else {
        if ((int)t133 >= (int)0x2) {
            t180 = *(signed char *)(((unsigned char)t131 + (*(int *)((0xC20BDE8 + (((((unsigned char)t126 << 1) + t133) - 2) << 2))))));
            FUN_0c187d44((*(int *)0xC20C8FC), (unsigned char)t180);
            t184 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
            t229 = (unsigned char)t184;
            if ((((unsigned char)t184 & 4) == 0) || (((int)(unsigned char)t180 >= (int)0x30) && ((int)(unsigned char)t180 <= (int)0x39))) {
                t229 = (unsigned char)t180;
                if ((((unsigned char)(*(signed char *)((0x4A + (*(int *)0xC304BA0)))) & 8) == 0) || ((((int)(unsigned char)t180 >= (int)0x30) && ((int)(unsigned char)t180 <= (int)0x39)) || ((unsigned char)t180 == 45))) {
                    t204 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
                    t229 = (unsigned char)t204;
                    if ((((unsigned char)t204 & 16) != 0) && ((((int)(unsigned char)t180 < (int)0x30) || ((int)(unsigned char)t180 > (int)0x39)) && (((int)(unsigned char)t180 < (int)0x41) || ((int)(unsigned char)t180 > (int)0x5A)))) {
                    } else {
                        *(unsigned char *)((((int)stk + 0) + 0x0)) = t180;
                        *(unsigned char *)((((int)stk + 0) + 0x1)) = 0x0;
                        t209 = FUN_0c0163c4(0xC304BA4, ((int)stk + 0), (unsigned char)(*(signed char *)(((*(int *)0xC304BA0) + 0x50))), (*(int *)(((*(int *)0xC304BA0) + 0x18))));
                        t210 = *(int *)0xC304BA0;
                        (((struct o50_uchar *)(t210))->v) = ((*(signed char *)((t210 + 0x50))) + t209);
                        if (t209 != 0) {
                            (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
                        }
                        t229 = (FUN_0c017c70());
                    }
                }
            }
        }
        t237 = t229;
    }
    return t237;
}

int FUN_0c017be8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x20))), a5, a6, a7);
    t0 = ((int (*)(int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x24))));
    t0 = ((int (*)(int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x2C))));
    t0 = ((int (*)(int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x30))));
    (((struct o49_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
    return 0x49;
}
