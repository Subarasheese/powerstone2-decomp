/* Straight-line functions with calls and guards (batch gen_zs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
extern int FUN_0c0c2ab6();
int FUN_0c0c2d56(int, int, int);
int FUN_0c0d4894(int a4, int a5, int a6);

int FUN_0c0d4894(int a4, int a5, int a6)
{

    register int R1;
    register int R3;
    register int R5;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_0 = a6;
    v0_3 = R13;
    v0_4 = R12;
    v0_1 = *(signed char *)((v0_2 + 0x15));
    v0_3 = (v0_1);
    R12 = (0x0);
    R13 = (0x1);
    v0_2 = (v0_2);
    if ((v0_1 == 0)) goto L_C0D48B2;
    if ((v0_3 == 1)) goto L_C0D48DE;
    L_C0D4946:;
    return v0_3;
    L_C0D48DE:;
    v0_0 = *(short *)((v0_2 + 0x1C));
    *(unsigned short *)((v0_2 + 0x1C)) = (v0_0 - 1);
    if (((int)(short)(v0_0 - 1) > 0)) goto L_C0D4934;
    FUN_0c0c2d56(v0_2, 0x2, (*(signed char *)((v0_2 + 0x1))));
    (((struct oAA_uchar *)(v0_2))->v) = R13;
    (((struct oAB_uchar *)(v0_2))->v) = 0x5;
    v0_0 = ((int (*)(int, int))(FUN_0c0c2ab6))(v0_2, 0x38);
    (((struct o12E_ushort *)(v0_2))->v) = (((((struct o12E_short *)(v0_2))->v)) | 0xFF);
    (((struct o126_uchar *)(v0_2))->v) = 0x3;
    (((struct o19_uchar *)(v0_2))->v) = R12;
    *(unsigned short *)((v0_2 + 0x1E)) = R12;
    (((struct o50_float *)(v0_2))->v) = 0.0f;
    (((struct o5C_float *)(v0_2))->v) = -2.0f;
    v0_3 = (0x5C);
    goto L_C0D4946;
    L_C0D4934:;
    (((struct o30_float *)(v0_2))->v) = (((((struct o30_float *)(v0_2))->v)) + 5.0f);
    (((struct o19_uchar *)(v0_2))->v) = R13;
    v0_3 = (0x19);
    FPUL_ = (0x40A00000);
    goto L_C0D4946;
    L_C0D48B2:;
    v0_0 = ((int (*)(int, int))(FUN_0c0c2ab6))(v0_2, 0x38);
    (((struct o126_uchar *)(v0_2))->v) = R13;
    (((struct o12E_ushort *)(v0_2))->v) = (((((struct o12E_short *)(v0_2))->v)) | 0xFF);
    *(unsigned short *)((v0_2 + 0x1C)) = 0xB4;
    (((struct o19_uchar *)(v0_2))->v) = R12;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    (((struct oA8_uchar *)(v0_2))->v) = R13;
    goto L_C0D48DE;
}
