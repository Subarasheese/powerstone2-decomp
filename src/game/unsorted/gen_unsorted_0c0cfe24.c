/* game/unsorted: functions 0C0CFE24-0C0D00D2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int FUN_0c03796e(int, int);
int FUN_0c0379b6(int, int);
int FUN_0c03f258(int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0cfe24(int a4);
int FUN_0c0cfecc(int a4, int a5, int a6);
int FUN_0c0cff28(int a4, int a5);
int FUN_0c0cff96(int a4, int a5, float f4);

int FUN_0c0cfe24(int a4)
{

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    v0_0 = (v0_1);
    if (((int)(*(int *)((v0_1 + 0x8))) < 0)) goto L_C0CFE66;
    v0_1 = FUN_0c037320((*(int *)((v0_0 + 0x8))), (*(int *)0xC4B410C));
    v0_2 = FUN_0c03f444((*(int *)((v0_0 + 0x4))), 0x0, v0_1);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0CFEC0;
    FUN_0c03733c(v0_1, (*(int *)((v0_0 + 0x8))), (*(int *)0xC4B410C));
    (((struct oAC_ushort *)(v0_1))->v) = 0xF;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    L_C0CFE7A:;
    if ((v0_1 == 0)) goto L_C0CFEC0;
    *(unsigned int *)((v0_1 + 0x4)) = (*(int *)((v0_0 + 0x0)));
    *(unsigned char *)((v0_1 + 0x2)) = (*(signed char *)((v0_0 + 0xC)));
    *(unsigned char *)((v0_1 + 0x1)) = 0xFFFFFFFF;
    (((struct o1B_uchar *)(v0_1))->v) = (*(int *)((v0_0 + 0x10)));
    (((struct o48_float *)(v0_1))->v) = 1.0f;
    (((struct o44_float *)(v0_1))->v) = 1.0f;
    (((struct o40_float *)(v0_1))->v) = 1.0f;
    if (((int)(*(int *)((v0_0 + 0x18))) < 0)) goto L_C0CFEC0;
    FUN_0c064d24(v0_1, 0x2, (*(int *)((v0_0 + 0x18))), 0x1, 0x10, 0x0, 0x0, 0xFFFFFFEF);
    L_C0CFEC0:;
    return v0_1;
    L_C0CFE66:;
    v0_2 = FUN_0c03f258((*(int *)((v0_0 + 0x4))), 0x0);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0CFEC0;
    (((struct oAC_ushort *)(v0_1))->v) = 0xF;
    goto L_C0CFE7A;
}

int FUN_0c0cfecc(int a4, int a5, int a6)
{
    register int t1;
    register int t3;

    t1 = (a4 + ((short)(*(short *)((a5 + 0x0))) * (short)0x1C));
    for (;;) {
        if ((int)(*(short *)((a5 + 0x0))) >= (int)a6) {
            return 0xFFFFFFFF;
        }
        t3 = FUN_0c0cfe24(t1);
        if (t3 == 0) {
            break;
        }
        if ((int)(*(int *)((t1 + 0x14))) >= 0) {
            *(unsigned int *)(((((*(int *)((t1 + 0x14))) << 2) + 0xC540D94) + 0x0)) = t3;
        }
        t1 = (t1 + 0x1C);
        *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) + 0x1);
    }
    return (*(short *)((a5 + 0x0)));
}

int FUN_0c0cff28(int a4, int a5)
{
    (((struct o15_uchar *)(a4))->v) = a5;
    return 0x15;
}

int FUN_0c0cff96(int a4, int a5, float f4)
{
    int stk[7];
    register int t4;
    register int t6;
    register int t10;
    register int t11;
    register int t13;
    register float u17;
    register int t54;
    register int t29;
    register int t30;
    register int t37;
    register int t39;
    register int t41;
    register int t42;
    register int t43;
    int t9;
    register int t12;
    register float u14;
    register float u15;
    register float u23;
    register int t24;
    register float u31;
    register float u44;
    register float u45;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = 0x1;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0xC);
    (((struct oC_float *)(((int)stk + 0)))->v) = (((((struct o8_float *)(a5))->v)) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 16)) = (((((struct oC_float *)(a5))->v)) - ((((struct o4_float *)(a5))->v)));
    t4 = *(int *)(((int)stk + 0));
    mdl_vtx_iter_begin(t4, t4);
    for (;;) {
        t6 = mdl_vtx_iter_next();
        if (t6 != 0) {
            break;
        }
        FUN_0c03796e((((int)stk + 0) + 0x14), ((((int)stk + 0) + 0x14) + 0x4));
        t10 = 0x0;
        t11 = (a5 + 0x10);
        t13 = t12;
        u17 = f4;
        for (;;) {
            if ((unsigned int)t11 >= (unsigned int)(a5 + 0x18)) {
                break;
            }
            u15 = (*(float *)((t11 + 0x0)));
            if (u15 != (0.0f)) {
                t9 = a5;
                t9 = (t9 + 0x10);
                t13 = t10;
                t9 = (t9 + t10);
                t13 = (t13 + (((int)stk + 0) + 0x14));
                u15 = (*(float *)((t9 + 0x0)));
                u14 = (*(float *)((t13 + 0x0)));
                u14 = (u14 + u15);
                u17 = u14;
                *(float *)((t13 + 0x0)) = u14;
                u15 = (*(float *)(((a5 + t10) + 0x0)));
                if (!(u15 > u17) && (t9 = a5, t9 = (t9 + 0x8), t9 = (t9 + t10), u23 = *(float *)((t9 + 0x0)), t24 = (u15 > u17), u15 = u23, !(u17 > u15))) {
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                }
            }
            t11 = (t11 + 0x4);
            t10 = (t10 + 0x4);
        }
        FUN_0c0379b6((((int)stk + 0) + 0x14), ((((int)stk + 0) + 0x14) + 0x4));
    }
    t54 = t6;
    if ((*(int *)(((int)stk + 8))) != 0) {
        t29 = (*(int *)(((int)stk + 4)));
        t30 = (a5 + 0x10);
        for (;;) {
            if ((unsigned int)t30 >= (unsigned int)(a5 + 0x18)) {
                break;
            }
            u31 = (*(float *)((t30 + 0x0)));
            if (!((0.0f) > u31)) {
                u31 = (*(float *)((t29 + 0x0)));
                u31 = (-u31);
                *(float *)((t29 + 0x0)) = u31;
            }
            t30 = (t30 + 0x4);
            t29 = (t29 + 0x4);
        }
        t37 = *(int *)(((int)stk + 0));
        mdl_vtx_iter_begin(t37, t37);
        for (;;) {
            t39 = mdl_vtx_iter_next();
            if (t39 != 0) {
                break;
            }
            t41 = (FUN_0c03796e((((int)stk + 0) + 0x14), ((((int)stk + 0) + 0x14) + 0x4)));
            t42 = 0x0;
            t43 = (a5 + 0x10);
            for (;;) {
                if ((unsigned int)t43 >= (unsigned int)(a5 + 0x18)) {
                    break;
                }
                u45 = (*(float *)((t43 + 0x0)));
                if (u45 != (0.0f)) {
                    t41 = t42;
                    u44 = (*(float *)(((((int)stk + 0) + 0x14) + t41)));
                    u45 = (*(float *)((((((int)stk + 0) + 0xC) + t41) + 0x0)));
                    u44 = (u44 + u45);
                    *(float *)(((((int)stk + 0) + 0x14) + t41)) = u44;
                }
                t43 = (t43 + 0x4);
                t42 = (t42 + 0x4);
            }
            FUN_0c0379b6((((int)stk + 0) + 0x14), ((((int)stk + 0) + 0x14) + 0x4));
        }
        t54 = t39;
    }
    return t54;
}
