/* Straight-line functions with calls and guards (batch gen_vg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0c2d56(int, int, int, float);
int FUN_0c0d45cc(int a4);

int FUN_0c0d45cc(int a4)
{

    register int R1;
    register int R2;
    register int R6;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_1 = R14;
    v0_2 = (*(signed char *)((v0_0 + 0x132))) == 0;
    v0_1 = (0x132);
    R14 = (v0_0);
    if (v0_2) goto L_C0D4640;
    *(unsigned char *)((R14 + v0_1)) = 0x0;
    w0_0 = (((struct o0_float *)0xC0D46E8)->v);
    v0_1 = *(signed char *)((R14 + 0x41D));
    v0_0 = (v0_1);
    v0_2 = (0x0);
    w0_0 = (w0_0);
    if ((v0_1 == 10)) goto L_C0D4628;
    if ((v0_0 == 0)) goto L_C0D4628;
    if ((v0_0 == 1)) goto L_C0D4628;
    v0_0 = ((((struct o160_float *)(R14))->v)) > 0.0f;
    v0_1 = (0x160);
    if (v0_0) goto L_C0D4620;
    *(float *)((R14 + v0_1)) = w0_0;
    (((struct o420_ushort *)(R14))->v) = v0_2;
    FUN_0c0c2d56(R14, 0xA, (*(signed char *)((R14 + 0x1))), w0_0);
    (((struct oAA_uchar *)(R14))->v) = 0x1;
    v0_1 = (0xAB);
    v0_0 = (0x5);
    L_C0D465A:;
    *(unsigned char *)((R14 + v0_1)) = v0_0;
    L_C0D466C:;
    return v0_1;
    L_C0D4620:;
    (((struct o130_uchar *)(R14))->v) = 0xA;
    L_C0D4640:;
    v0_0 = (*(signed char *)((R14 + 0x130))) == 0;
    if (v0_0) goto L_C0D465E;
    w0_0 = (((struct oC_float *)0xC0D46E8)->v);
    (((struct oBC_float *)(R14))->v) = w0_0;
    (((struct oB8_float *)(R14))->v) = w0_0;
    v0_0 = *(signed char *)((R14 + 0x130));
    v0_1 = (0x130);
    v0_0 = ((v0_0 - 1));
    goto L_C0D465A;
    L_C0D465E:;
    (((struct oBC_float *)(R14))->v) = 1.0f;
    (((struct oB8_float *)(R14))->v) = 1.0f;
    (((struct oB4_float *)(R14))->v) = 1.0f;
    v0_1 = (0xB4);
    goto L_C0D466C;
    L_C0D4628:;
    (((struct o160_float *)(R14))->v) = w0_0;
    (((struct o420_ushort *)(R14))->v) = (*(short *)((((unsigned short)(unsigned char)(*(signed char *)((R14 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2)));
    goto L_C0D4640;
}
