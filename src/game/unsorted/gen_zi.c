/* Straight-line functions with calls and guards (batch gen_zi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0eb8ca(int a4, float f4);

int FUN_0c0eb8ca(int a4, float f4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    w0_0 = f4;
    v0_2 = R13;
    v0_1 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_1);
    R13 = (0x0);
    v0_0 = (v0_0);
    if ((v0_1 == 0)) goto L_C0EB8E8;
    if ((v0_2 == 1)) goto L_C0EB914;
    if ((v0_2 == 2)) goto L_C0EB99A;
    (((struct o41D_uchar *)(v0_0))->v) = 0x5;
    (((struct o15_uchar *)(v0_0))->v) = R13;
    (((struct o16_uchar *)(v0_0))->v) = R13;
    v0_2 = (0x16);
    L_C0EB99A:;
    return v0_2;
    L_C0EB914:;
    v0_1 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0EB930;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o20_ushort *)(v0_0))->v) = 0x78;
    L_C0EB930:;
    w0_0 = *(float *)0xC0EB9C8;
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o18_float *)(v0_1))->v) = (((((struct o18_float *)(v0_1))->v)) + ((((((struct o0_float *)0xC1CCC64)->v)) - ((((struct o18_float *)(v0_1))->v))) / w0_0));
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o1C_float *)(v0_1))->v) = (((((struct o1C_float *)(v0_1))->v)) + ((((((struct o4_float *)0xC1CCC64)->v)) - ((((struct o1C_float *)(v0_1))->v))) / w0_0));
    v0_0 = (((struct oCC_int *)(v0_0))->v);
    (((struct o20_float *)(v0_0))->v) = (((((struct o20_float *)(v0_0))->v)) + ((((((struct o8_float *)0xC1CCC64)->v)) - ((((struct o20_float *)(v0_0))->v))) / w0_0));
    v0_2 = (0x20);
    goto L_C0EB99A;
    L_C0EB8E8:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_0))->v) = R13;
    v0_1 = R13;
    v0_2 = R13;
    FUN_0c064d24(v0_0, 0x2, 0x5, 0x1, 0x400, v0_2, v0_1, 0x5F);
    (((struct o20_ushort *)(v0_0))->v) = 0x14;
    goto L_C0EB914;
}
