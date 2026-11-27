/* Straight-line functions with calls and guards (batch gen_pn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
extern int FUN_0c03f346();
int mdl_vtx_get_pos(int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_set_pos(int);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int FUN_0c0e1fa4(int a4, int a5, int a6, int a7);

int FUN_0c0e1fa4(int a4, int a5, int a6, int a7)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    v0_4 = *(int *)((int)stk + 0);
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_3 = (((((struct oC4_int *)(v0_2))->v)));
    v0_2 = (v0_2);
    if (((*(signed char *)0xC54223C) == 2)) goto L_C0E1FC6;
    L_C0E20E4:;
    v0_4 = ((((int (*)(int, int, int, int))(FUN_0c03f346))(v0_2, v0_0, v0_1, a7)));
    L_C0E2104:;
    return v0_4;
    L_C0E1FC6:;
    v0_5 = *(signed char *)((v0_2 + 0x14));
    v0_4 = (v0_5);
    v0_6 = (0xC03783C);
    v0_6 = (0xC037984);
    v0_6 = (0xC037862);
    if ((v0_5 == 0)) goto L_C0E1FDC;
    if ((v0_4 == 1)) goto L_C0E2020;
    goto L_C0E2104;
    L_C0E2020:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((v0_2 + 0x10)))))->v)) + 0x6C)); }
    nlSubVector3op((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x10), 0xC1CA714);
    *(unsigned short *)((v0_2 + 0x1C)) = ((*(short *)((v0_2 + 0x1C))) + 0x1);
    v0_4 = (0xC17C2F0);
    if ((((*(short *)((v0_2 + 0x1C))) & 1) == 0)) goto L_C0E20EE;
    v0_3 = *(int *)((v0_3 + 0x8));
    v0_4 = v0_3;
    mdl_vtx_iter_begin(v0_3, v0_3);
    v0_3 = (0xC037944);
    L_C0E20A2:;
    v0_3 = (mdl_vtx_iter_next()) == 0;
    if (v0_3) goto L_C0E2084;
    v0_4 = (0x15);
    if (((int)(*(signed char *)(((*(int *)((v0_2 + 0x10))) + 0x15))) < (int)0x3)) goto L_C0E2104;
    nlSubVector3op((((int)stk + 0) + 0x4), (((((struct oC4_int *)((*(int *)((v0_2 + 0x10)))))->v)) + 0x6C), 0xC1CA714);
    nlSubVector3op((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4));
    w0_0 = nlScalor((((int)stk + 0) + 0x4));
    v0_4 = (0xC0E2178);
    w0_1 = (w0_0);
    if ((!((*(float *)0xC0E2178) > w0_0))) goto L_C0E2104;
    goto L_C0E20E4;
    L_C0E2084:;
    mdl_vtx_iter_next();
    mdl_vtx_get_pos((((int)stk + 0) + 0x4));
    mdl_vtx_set_pos((((int)stk + 0) + 0x10));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((((int)stk + 0) + 0x4)); }
    goto L_C0E20A2;
    L_C0E20EE:;
    v0_0 = *(int *)((v0_3 + 0x8));
    v0_4 = v0_0;
    mdl_vtx_iter_begin(v0_0, v0_0);
    mdl_vtx_iter_next();
    mdl_vtx_iter_next();
    v0_4 = ((mdl_vtx_set_pos((((int)stk + 0) + 0x10))));
    goto L_C0E2104;
    L_C0E1FDC:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_2))->v) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x28)) = *(struct mv3 *)(0xC1CA714); }
    *(unsigned short *)((v0_2 + 0x1C)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x6C)) = *(struct mv3 *)(0xC1CA720); }
    v0_5 = *(int *)((v0_3 + 0x8));
    v0_4 = v0_5;
    mdl_vtx_iter_begin(v0_5, v0_5);
    L_C0E2018:;
    v0_4 = (mdl_vtx_iter_next()) == 0;
    if (v0_4) goto L_C0E2012;
    goto L_C0E2020;
    L_C0E2012:;
    mdl_vtx_set_pos(0xC1CA720);
    goto L_C0E2018;
}
