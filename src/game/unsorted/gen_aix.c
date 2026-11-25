/* Straight-line functions with calls and guards (batch gen_aix): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
int FUN_0c0ef162(int a4);

int FUN_0c0ef162(int a4)
{

    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x16));
    v0_2 = (v0_3);
    v0_1 = (0x0);
    if ((v0_3 == 0)) goto L_C0EF176;
    if ((v0_2 == 1)) goto L_C0EF1B2;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) - 1);
    (((struct o16_uchar *)(v0_0))->v) = v0_1;
    v0_2 = (0x16);
    L_C0EF1D4:;
    return v0_2;
    L_C0EF1B2:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0EF1D4;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_2 = (0x16);
    goto L_C0EF1D4;
    L_C0EF176:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0xB4;
    *(unsigned int *)((v0_0 + 0x3C)) = v0_1;
    *(unsigned int *)((v0_0 + 0x34)) = v0_1;
    (((struct o50_float *)(v0_0))->v) = (*(float *)0xC0EF1F8);
    (((struct o5C_float *)(v0_0))->v) = -1.0f;
    (((struct o12A_ushort *)(v0_0))->v) = v0_1;
    v0_2 = *(int *)(((0xC4 + v0_0) + 0x4));
    v0_3 = *(int *)(((0xC4 + v0_0) + 0x8));
    (((struct o7C_uint *)(v0_3))->v) = v0_1;
    (((struct o7C_uint *)(v0_2))->v) = v0_1;
    (((struct o78_uint *)(v0_3))->v) = v0_1;
    (((struct o78_uint *)(v0_2))->v) = v0_1;
    goto L_C0EF1B2;
}
