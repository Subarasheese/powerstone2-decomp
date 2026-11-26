/* Straight-line functions with calls and guards (batch gen_aao): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
float math_sin_angle16(int);
int FUN_0c0140e0(int a4);

int FUN_0c0140e0(int a4)
{

    register int R2;
    register int R3;
    register float F2;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    (((struct oA8_uchar *)(v0_0))->v) = ((((*(signed char *)((v0_0 + 0x3))) == (unsigned char)(*(signed char *)(((*(int *)0xC304B24) + 0x1))))) ? 1 : 0);
    v0_2 = (int)(unsigned char)(*(signed char *)(((*(int *)0xC304B24) + 0x0))) > (int)0x2;
    v0_1 = (0xA8);
    v0_0 = (v0_0);
    if (v0_2) goto L_C0141D2;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    F15 = (0.5f);
    if ((v0_2 == 0)) goto L_C014120;
    if ((v0_1 == 1)) goto L_C014166;
    if ((v0_1 == 2)) goto L_C0141AA;
    L_C0141AA:;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    w0_0 = F15;
    w0_0 = w0_0 + F15 * (math_sin_angle16(((((*(short *)((v0_0 + 0x1E))) << 8) << 2) << 1)));
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    v0_1 = (0xB4);
    w0_0 = (F15);
    L_C0141D2:;
    return v0_1;
    L_C014166:;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    w0_0 = F15;
    w0_0 = w0_0 + F15 * (math_sin_angle16(((((*(short *)((v0_0 + 0x1E))) << 8) << 2) << 1)));
    (((struct oB0_float *)(v0_0))->v) = w0_0;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    w0_0 = (F15);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0141D2;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) & 0xFBFF);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C0141D2;
    L_C014120:;
    v0_1 = (*(signed char *)((v0_0 + 0x3))) != 0;
    if (v0_1) goto L_C014134;
    (((struct o28_float *)(v0_0))->v) = -120.0f;
    w0_0 = (-94.0f);
    L_C014140:;
    (((struct o2C_float *)(v0_0))->v) = w0_0;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oBC_float *)(v0_0))->v) = F15;
    (((struct oB8_float *)(v0_0))->v) = F15;
    (((struct oB4_float *)(v0_0))->v) = F15;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C014166;
    L_C014134:;
    (((struct o28_float *)(v0_0))->v) = 140.0f;
    w0_0 = (-190.0f);
    goto L_C014140;
}
