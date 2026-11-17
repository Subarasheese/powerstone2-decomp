/* game/unsorted: functions 0C0E1FA4-0C0E2168, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
int FUN_0c0e1fa4(int a4, int a5, int a6, int a7);
int FUN_0c0e2116(int a4);

int FUN_0c0e1fa4(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t4;
    register int t50;
    register int t7;
    register int t11;
    register int t13;
    register int t19;
    register float t26;
    register int t38;
    register int t60;
    register int t61;
    register int t62;
    register int t64;
    register int t68;
    register int t72;
    register int t74;
    register int t80;
    register float t87;
    register int t99;
    register int t120;
    register int t111;

    t0 = (((struct oC4_int *)(a4))->v);
    if ((*(signed char *)0xC54223C) != 2) {
        t120 = (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
    } else {
        t4 = *(signed char *)((a4 + 0x14));
        if (t4 != 0) {
            t50 = t4;
            if (t4 != 1) {
            } else {
                *(volatile int *)(((*(int *)((a4 + 0x10))) + 0xC4));
                t7 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
                FUN_0c0e2390((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x10), 0xC1CA714);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                    t11 = *(int *)((t0 + 0x8));
                    *(unsigned int *)(((int)stk + 0)) = t11;
                    mdl_vtx_iter_begin(t11, t11);
                    for (;;) {
                        t13 = mdl_vtx_iter_next();
                        if (t13 != 0) {
                            break;
                        }
                        mdl_vtx_iter_next();
                        mdl_vtx_get_pos((((int)stk + 0) + 0x4));
                        mdl_vtx_set_pos((((int)stk + 0) + 0x10));
                        t19 = ((int (*)(void))(FUN_0c187798))();
                    }
                    t50 = 0x15;
                    if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x15))) >= (int)0x3) {
                        FUN_0c0e2390((((int)stk + 0) + 0x4), (((((struct oC4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x6C), 0xC1CA714);
                        FUN_0c0e2390((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4));
                        t26 = FUN_0c0e2340((((int)stk + 0) + 0x4));
                        t50 = 0xC0E2178;
                        if ((*(float *)0xC0E2178) > t26) {
                            t50 = (((int (*)(int))(FUN_0c03f346))(a4));
                        }
                    }
                } else {
                    t38 = *(int *)((t0 + 0x8));
                    *(unsigned int *)(((int)stk + 0)) = t38;
                    mdl_vtx_iter_begin(t38, t38);
                    mdl_vtx_iter_next();
                    mdl_vtx_iter_next();
                    t50 = (mdl_vtx_set_pos((((int)stk + 0) + 0x10)));
                }
            }
            t111 = t50;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t60 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t61 = ((int (*)(void))(FUN_0c187798))();
            t62 = *(int *)((t0 + 0x8));
            *(unsigned int *)(((int)stk + 0)) = t62;
            mdl_vtx_iter_begin(t62, t62);
            for (;;) {
                t64 = mdl_vtx_iter_next();
                if (t64 != 0) {
                    break;
                }
                mdl_vtx_set_pos(0xC1CA720);
            }
            *(volatile int *)(((*(int *)((a4 + 0x10))) + 0xC4));
            t68 = ((int (*)(void))(FUN_0c187798))();
            FUN_0c0e2390((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x10), 0xC1CA714);
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                t72 = *(int *)((t0 + 0x8));
                *(unsigned int *)(((int)stk + 0)) = t72;
                mdl_vtx_iter_begin(t72, t72);
                for (;;) {
                    t74 = mdl_vtx_iter_next();
                    if (t74 != 0) {
                        break;
                    }
                    mdl_vtx_iter_next();
                    mdl_vtx_get_pos((((int)stk + 0) + 0x4));
                    mdl_vtx_set_pos((((int)stk + 0) + 0x10));
                    t80 = ((int (*)(void))(FUN_0c187798))();
                }
                t111 = 0x15;
                if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x15))) >= (int)0x3) {
                    FUN_0c0e2390((((int)stk + 0) + 0x4), (((((struct oC4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x6C), 0xC1CA714);
                    FUN_0c0e2390((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4));
                    t87 = FUN_0c0e2340((((int)stk + 0) + 0x4));
                    t111 = 0xC0E2178;
                    if ((*(float *)0xC0E2178) > t87) {
                        t111 = (((int (*)(int))(FUN_0c03f346))(a4));
                    }
                }
            } else {
                t99 = *(int *)((t0 + 0x8));
                *(unsigned int *)(((int)stk + 0)) = t99;
                mdl_vtx_iter_begin(t99, t99);
                mdl_vtx_iter_next();
                mdl_vtx_iter_next();
                t111 = (mdl_vtx_set_pos((((int)stk + 0) + 0x10)));
            }
        }
        t120 = t111;
    }
    return t120;
}

int FUN_0c0e2116(int a4)
{
    register int t2;
    register int t6;

    FUN_0c037320(0x77, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t6 = t2;
    if (t2 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x0, 0x77, (*(int *)0xC4B410C));
        *(unsigned int *)((t2 + 0x4)) = 0xC0E1FA4;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x10)) = a4;
        t6 = 0xA9;
    }
    return t6;
}
