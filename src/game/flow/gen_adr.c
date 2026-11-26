/* Straight-line functions with calls and guards (batch gen_adr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c0cff96(int, int, float);
int FUN_0c10302a(int a4, float f4);

int FUN_0c10302a(int a4, float f4)
{

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_0 = (v0_2);
    v0_1 = (0x0);
    if (((*(signed char *)((v0_2 + 0x14))) != 0)) goto L_C10305C;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    v0_3 = *(signed char *)((v0_0 + 0x2));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C10306A;
    if ((v0_2 != 1)) goto L_C10305C;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + 10.0f);
    FPUL_ = (0x41200000);
    L_C10305C:;
    v0_3 = *(signed char *)((v0_0 + 0x2));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C10306A;
    if (!((v0_2 == 1))) goto L_C10309E;
    v0_2 = (0xC541F40);
    if (((*(signed char *)0xC541F43) != 0)) goto L_C10309A;
    if (((*(signed char *)((v0_2 + 0x4))) != 0)) goto L_C10309A;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    v0_2 = (0xA8);
    goto L_C10309E;
    L_C10309E:;
    return v0_2;
    L_C10309A:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    v0_2 = (0xA8);
    goto L_C10309E;
    L_C10306A:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) + 0x5B);
    return FUN_0c0cff96((*(int *)((((((struct oC4_int *)(v0_0))->v)) + 0x8))), 0xC1FC604, f4);
}
