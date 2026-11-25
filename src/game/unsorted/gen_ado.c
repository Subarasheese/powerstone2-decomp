/* Straight-line functions with calls and guards (batch gen_ado): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o420_short { char p[0x420]; short v; };
struct o50_float { char p[0x50]; float v; };
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0c51d4(int a4);

int FUN_0c0c51d4(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_1 = a4;
    v0_0 = (v0_1);
    if ((!(0.0f > ((((struct o50_float *)(v0_1))->v))))) goto L_C0C5244;
    v0_1 = FUN_0c0c2ce4(v0_0);
    if ((v0_1 == 0)) goto L_C0C5244;
    if ((((((struct o420_short *)(v0_0))->v)) == 0)) goto L_C0C5210;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    if (((short)(v0_1 + 0x1) != 2)) goto L_C0C5236;
    if (((int)(*(signed char *)((v0_0 + 0x425))) <= (int)0x3)) goto L_C0C5224;
    L_C0C5210:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x0;
    return 0x0;
    L_C0C5224:;
    return FUN_0c0c2d56(v0_0, 0x2, (*(signed char *)((v0_0 + 0x1))));
    L_C0C5236:;
    w0_0 = ((((struct o50_float *)(v0_0))->v));
    w0_0 *= -0.5f;
    (((struct o50_float *)(v0_0))->v) = w0_0;
    FPUL_ = (0xBF000000);
    L_C0C5244:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    v0_1 = *(signed char *)((v0_0 + 0x41C));
    v0_2 = ((unsigned char)v0_1);
    if (((unsigned char)v0_1 == 69)) goto L_C0C527E;
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) + 0xB6);
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x16C);
    v0_1 = *(int *)((v0_0 + 0x3C));
    *(unsigned int *)((v0_0 + 0x3C)) = (v0_1 + 0x222);
    v0_2 = ((v0_1 + 0x222));
    L_C0C527E:;
    return v0_2;
}
