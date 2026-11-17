/* game/player: functions 0C07E79C-0C080320, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
int FUN_0c064f80(int);
int FUN_0c065b96(int, int, int, int, float);
int FUN_0c07eaf4(int, int, int);
int FUN_0c07ebd0(int);
int FUN_0c07fbb8(int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c07fc00(int a4);
int FUN_0c07fe02(int a4, int a5, int a6, int a7);

int FUN_0c07fc00(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_3 = *(signed char *)((v0_2 + 0x3715));
    v0_0 = (0x7);
    v0_1 = (v0_2);
    v0_2 = (v0_3);
    if ((v0_3 == 1)) goto L_C07FC20;
    if ((v0_2 != 15)) goto L_C07FC6C;
    L_C07FC20:;
    v0_2 = (FUN_0c07fbb8(v0_1)) != 0;
    if (v0_2) goto L_C07FC6C;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_2 = *(int *)((0xC5413E8 + ((short)(*(signed char *)((v0_1 + 0x1))) * (short)0x2F8)));
    v0_3 = FUN_0c07eaf4(v0_1, R5, R6);
    v0_2 = (FUN_0c065b96(v0_1, (v0_2 + v0_3), 0x2000, ((int)stk + 4), (*(float *)0xC07FD14))) == 0;
    if (v0_2) goto L_C07FC6C;
    *(unsigned int *)((v0_1 + 0x38)) = (unsigned short)((*(int *)(((int)stk + 4))) + 0x8000);
    (((struct o3717_uchar *)(v0_1))->v) = v0_0;
    (((struct o3718_uchar *)(v0_1))->v) = v0_0;
    R5 = (0x7);
    R6 = (0x7);
    L_C07FCC2:;
    FUN_0c085cac(v0_1, R5, R6, R7);
    v0_0 = (0x1);
    L_C07FCCE:;
    return v0_0;
    L_C07FC6C:;
    v0_2 = (FUN_0c064f80(v0_1)) != 0;
    if (v0_2) goto L_C07FCCC;
    v0_2 = (FUN_0c07ebd0(v0_1)) == 0;
    if (v0_2) goto L_C07FCCC;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_2 = *(int *)((0xC5413E8 + ((short)(*(signed char *)((v0_1 + 0x1))) * (short)0x2F8)));
    v0_3 = FUN_0c07eaf4(v0_1, R5, R6);
    v0_2 = (FUN_0c065b96(v0_1, (v0_2 + v0_3), 0x2000, ((int)stk + 4), 0.0f)) == 0;
    if (v0_2) goto L_C07FCCC;
    *(unsigned int *)((v0_1 + 0x38)) = (unsigned short)((*(int *)(((int)stk + 4))) + 0x8000);
    (((struct o3717_uchar *)(v0_1))->v) = v0_0;
    (((struct o3718_uchar *)(v0_1))->v) = 0x8;
    R5 = (0x7);
    R6 = (0x8);
    goto L_C07FCC2;
    L_C07FCCC:;
    v0_0 = (0x0);
    goto L_C07FCCE;
}

int FUN_0c07fe02(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (((((struct o376C_int *)(a4))->v)) != 0) {
        t0 = *(signed char *)((a4 + 0x371D));
        if (t0 != 3) {
            if (t0 != 5) {
                if (t0 != 6) {
                    if (a5 == 0) {
                        (((struct o3717_uchar *)(a4))->v) = 0x8;
                        (((struct o3718_uchar *)(a4))->v) = 0x0;
                        t0 = 0x0;
                    } else {
                        (((struct o3717_uchar *)(a4))->v) = 0x8;
                        (((struct o3718_uchar *)(a4))->v) = 0x1;
                        t0 = 0x1;
                    }
                    return FUN_0c085cac(a4, 0x8, t0, a7);
                }
                (((struct o3717_uchar *)(a4))->v) = 0x7;
                (((struct o3718_uchar *)(a4))->v) = 0xF;
                return FUN_0c085cac(a4, 0x7, 0xF, a7);
            }
            (((struct o3717_uchar *)(a4))->v) = 0x7;
            (((struct o3718_uchar *)(a4))->v) = 0xA;
            return FUN_0c085cac(a4, 0x7, 0xA, a7);
        }
        (((struct o3717_uchar *)(a4))->v) = 0x7;
        (((struct o3718_uchar *)(a4))->v) = 0xB;
        return FUN_0c085cac(a4, 0x7, 0xB, a7);
    }
    return 0x376C;
}
