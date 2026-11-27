/* game/player: functions 0C07E79C-0C080320, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1C_float { char p[0x1C]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o381E_short { char p[0x381E]; short v; };
struct o3820_short { char p[0x3820]; short v; };
struct o38_float { char p[0x38]; float v; };
int FUN_0c064f80(int);
int FUN_0c07c92c(int);
int FUN_0c07c9c0(int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07f720(int, int, int, float);
int FUN_0c07fae8(int);
int FUN_0c07fb42(int);
int FUN_0c085cac(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c07ebfc(int a4);
int FUN_0c07ed90(int a4, int a5);
int FUN_0c07f820(int a4, float f4);
int FUN_0c07fcda(int a4);

int FUN_0c07ebfc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = FUN_0c07ebd0(a4);
    t1 = 0x4;
    if (t0 != 0) {
        t0 = *(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)));
        t2 = FUN_0c07eaf4(a4);
        t3 = *(int *)((a4 + 0x38));
        t4 = (unsigned short)((unsigned short)(t0 + t2) - t3);
        if ((0x8000 & (unsigned short)((unsigned short)(t0 + t2) - t3)) != 0) {
            t4 = ((unsigned short)((unsigned short)(t0 + t2) - t3) | 0xFFFF0000);
        }
        t0 = 0x0;
        if (((int)t4 >= (int)0x2000) || ((int)t4 <= (int)0xFFFFE000)) {
            t2 = 0x1;
            if (((int)t4 >= (int)0xFFFFE000) || ((int)t4 <= (int)0xFFFFA000)) {
                t3 = 0x3;
                if (((int)t4 > (int)0x2000) && ((int)t4 < (int)0x6000)) {
                    t3 = 0x2;
                }
                t2 = t3;
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}


int FUN_0c07f820(int a4, float f4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R8;
    register float F2;
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
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_4 = a4;
    w0_1 = f4;
    v0_0 = (v0_4);
    if (((*(signed char *)((v0_4 + 0x3721))) == 0)) goto L_C07F83E;
    L_C07F98E:;
    v0_6 = (0x0);
    L_C07F990:;
    return v0_6;
    L_C07F83E:;
    v0_1 = (FUN_0c07f720(v0_0, (((int)stk + 0) + 0x4), ((int)stk + 0), w0_1)) != 0;
    if (v0_1) goto L_C07F850;
    goto L_C07F98E;
    L_C07F850:;
    v0_4 = *(int *)(((int)stk + 0));
    v0_2 = (0x3938);
    v0_3 = (0xC532498);
    v0_1 = (((v0_4 * 0x3938) + 0xC532498));
    if (((*(signed char *)((((v0_4 * 0x3938) + 0xC532498) + 0x371D))) != 1)) goto L_C07F868;
    goto L_C07F98E;
    L_C07F868:;
    if ((((((struct o381E_short *)(v0_0))->v)) == 0)) goto L_C07F874;
    goto L_C07F98E;
    L_C07F874:;
    if ((((((struct o3820_short *)(v0_1))->v)) == 0)) goto L_C07F880;
    goto L_C07F98E;
    L_C07F880:;
    v0_4 = (FUN_0c064f80(v0_0)) != 0;
    v0_5 = (0xC25AA84);
    w0_0 = (50.0f);
    if (v0_4) goto L_C07F914;
    v0_6 = (0x3715);
    if (((*(signed char *)((((((*(signed char *)((v0_0 + 0x3715))) << 2) << 1) + v0_5) + 0x0))) == 0)) goto L_C07F98E;
    if (((*(signed char *)((((((*(signed char *)((v0_1 + v0_6))) << 2) << 1) + v0_5) + 0x2))) != 3)) goto L_C07F98E;
    if (((*(float *)(((int)stk + 4))) > 70.0f)) goto L_C07F98E;
    v0_4 = *(int *)(((int)stk + 0));
    w0_2 = (((struct o2C_float *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 12)) = ((v0_4 * v0_2) + v0_3);
    w0_5 = (((struct o2C_float *)(((v0_4 * v0_2) + v0_3)))->v);
    w0_1 = (w0_2);
    w0_3 = ((w0_2 - w0_5));
    w0_4 = (w0_5);
    if ((!(0.0f > (w0_2 - w0_5)))) goto L_C07F8E0;
    w0_1 = (((-w0_1) + w0_4));
    L_C07F8E2:;
    if ((w0_1 > w0_0)) goto L_C07F98E;
    (((struct o372A_uchar *)(v0_0))->v) = (*(signed char *)((v0_1 + 0x1)));
    v0_6 = (0x2);
    goto L_C07F990;
    L_C07F8E0:;
    w0_1 = (w0_3);
    goto L_C07F8E2;
    L_C07F914:;
    v0_6 = (0x3715);
    v0_4 = (v0_5);
    if (((*(signed char *)((((((*(signed char *)((v0_0 + 0x3715))) << 2) << 1) + v0_5) + 0x0))) == 0)) goto L_C07F98E;
    if (((*(signed char *)((((((*(signed char *)((v0_1 + v0_6))) << 2) << 1) + v0_4) + 0x2))) != 1)) goto L_C07F98E;
    if (((*(signed char *)((v0_1 + 0x3715))) != 32)) goto L_C07F94A;
    if (((*(signed char *)((0xC25ABF5 + ((*(signed char *)((v0_1 + 0x3739))) << 2)))) != 1)) goto L_C07F98E;
    L_C07F94A:;
    if (((*(float *)(((int)stk + 4))) > (*(float *)0xC07F9F8))) goto L_C07F98E;
    v0_4 = *(int *)(((int)stk + 0));
    w0_2 = (((struct o2C_float *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 8)) = ((v0_4 * v0_2) + v0_3);
    w0_5 = (((struct o2C_float *)(((v0_4 * v0_2) + v0_3)))->v);
    w0_1 = (w0_2);
    w0_3 = (w0_5);
    w0_4 = ((w0_2 - w0_5));
    if ((!(0.0f > (w0_2 - w0_5)))) goto L_C07F97C;
    w0_1 = (((-w0_1) + w0_3));
    L_C07F97E:;
    if ((w0_1 > w0_0)) goto L_C07F98E;
    (((struct o372A_uchar *)(v0_0))->v) = (*(signed char *)((v0_1 + 0x1)));
    v0_6 = (0x1);
    goto L_C07F990;
    L_C07F97C:;
    w0_1 = (w0_4);
    goto L_C07F97E;
}

int FUN_0c07fcda(int a4)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = FUN_0c07fae8(a4);
    if (t0 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x23;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        FUN_0c085cac(a4, 0x23, 0x0);
        t0 = 0x1;
    } else {
        t0 = FUN_0c07c9c0(a4);
        if (t0 != 0) {
            (((struct o3717_uchar *)(a4))->v) = 0x26;
            t2 = 0x2;
            if (t0 == 1) {
                t2 = 0x0;
            }
            (((struct o3718_uchar *)(a4))->v) = t2;
            t2 = 0x2;
            if (t0 == 1) {
                t2 = 0x0;
            }
            FUN_0c085cac(a4, 0x26, t2);
            t0 = 0x1;
        } else {
            t2 = FUN_0c07c92c(a4);
            if (t2 != 0) {
                (((struct o3717_uchar *)(a4))->v) = 0x28;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                FUN_0c085cac(a4, 0x28, 0x0);
                t2 = 0x1;
            } else {
                t3 = FUN_0c07fb42(a4);
                t2 = 0x0;
                if (t3 != 0) {
                    (((struct o3717_uchar *)(a4))->v) = 0x7;
                    (((struct o3718_uchar *)(a4))->v) = 0xD;
                    FUN_0c085cac(a4, 0x7, 0xD);
                    t2 = 0x1;
                }
            }
            t0 = t2;
        }
    }
    return t0;
}
