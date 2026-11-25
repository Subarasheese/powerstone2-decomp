/* Straight-line functions with calls and guards (batch gen_xd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o46C_int { char p[0x46C]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c15b4fa(int, int, int, int, int, int, int, int, int);
int FUN_0c08c960(int a4);

int FUN_0c08c960(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R10;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_4 = a4;
    v0_5 = *(signed char *)((v0_4 + 0x18));
    v0_3 = (v0_5);
    v0_1 = ((*(int *)0xC4B40CC));
    v0_0 = (v0_4);
    v0_4 = (0xC2596C4);
    v0_2 = (0xC259A2C);
    if ((v0_5 != 0)) goto L_C08C980;
    L_C08CA94:;
    return v0_3;
    L_C08C980:;
    if ((v0_3 == 1)) goto L_C08C9B4;
    if ((v0_3 == 2)) goto L_C08CA22;
    goto L_C08CA94;
    L_C08CA22:;
    v0_5 = *(signed char *)(((((unsigned char)(*(signed char *)((v0_0 + 0x3721))) << 2) + v0_4) + 0x3));
    v0_3 = (v0_5);
    if ((v0_5 == 0)) goto L_C08CA94;
    v0_5 = *(signed char *)(((((unsigned char)(*(signed char *)((v0_0 + 0x3721))) << 2) + v0_4) + 0x3));
    v0_4 = *(signed char *)(((((short)v0_5 * (short)0x1C) + v0_2) + 0x0));
    v0_3 = (0x8C);
    v0_2 = ((((short)v0_5 * (short)0x1C) + v0_2));
    FPUL_ = (v0_4);
    if (((float)v0_4 > ((((struct o8C_float *)(((((struct o118_int *)(v0_0))->v))))->v)))) goto L_C08CA94;
    v0_3 = (*(signed char *)((v0_2 + 0x2)));
    v0_4 = *(signed char *)((v0_2 + 0x1));
    v0_5 = *(signed char *)((v0_2 + 0x0));
    v0_1 = *(int *)((((((struct o46C_int *)(v0_1))->v)) + 0x0));
    v0_6 = (((struct o376C_int *)(v0_0))->v);
    FUN_0c15b4fa((*(signed char *)((v0_0 + 0x1))), (v0_6 + 0x64), v0_6, v0_1, (v0_4 - v0_5), 0x52, (v0_2 + 0x4), (v0_2 + 0x10), v0_3);
    L_C08CA8C:;
    (((struct o18_uchar *)(v0_0))->v) = 0x0;
    v0_3 = (0x18);
    goto L_C08CA94;
    L_C08C9B4:;
    v0_5 = *(signed char *)(((((unsigned char)(*(signed char *)((v0_0 + 0x3721))) << 2) + v0_4) + 0x2));
    v0_3 = (v0_5);
    if ((v0_5 == 0)) goto L_C08CA94;
    v0_5 = *(signed char *)(((((unsigned char)(*(signed char *)((v0_0 + 0x3721))) << 2) + v0_4) + 0x2));
    v0_4 = *(signed char *)(((((short)v0_5 * (short)0x1C) + v0_2) + 0x0));
    v0_3 = (0x8C);
    v0_2 = ((((short)v0_5 * (short)0x1C) + v0_2));
    FPUL_ = (v0_4);
    if (((float)v0_4 > ((((struct o8C_float *)(((((struct o118_int *)(v0_0))->v))))->v)))) goto L_C08CA94;
    v0_3 = (*(signed char *)((v0_2 + 0x2)));
    v0_4 = *(signed char *)((v0_2 + 0x1));
    v0_5 = *(signed char *)((v0_2 + 0x0));
    v0_1 = *(int *)((((((struct o46C_int *)(v0_1))->v)) + 0x0));
    v0_6 = (((struct o376C_int *)(v0_0))->v);
    FUN_0c15b4fa((*(signed char *)((v0_0 + 0x1))), (v0_6 + 0x64), v0_6, v0_1, (v0_4 - v0_5), 0x52, (v0_2 + 0x4), (v0_2 + 0x10), v0_3);
    goto L_C08CA8C;
}
