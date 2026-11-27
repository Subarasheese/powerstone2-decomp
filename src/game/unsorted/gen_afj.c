/* Straight-line functions with calls and guards (batch gen_afj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0d7714(int a4, int a5, int a6, int a7);

int FUN_0c0d7714(int a4, int a5, int a6, int a7)
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
    register int v0_4;
    register float w0_0;
    v0_0 = a4;
    v0_2 = a6;
    v0_4 = *(signed char *)((v0_0 + 0x14));
    v0_3 = (v0_4);
    v0_1 = (0x1);
    if ((v0_4 == 0)) goto L_C0D772C;
    if ((v0_3 == 1)) goto L_C0D778C;
    if ((v0_3 == 2)) goto L_C0D779E;
    v0_4 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_4 - 1);
    v0_3 = ((short)(v0_4 - 1));
    if (((short)(v0_4 - 1) != 0)) goto L_C0D77EE;
    return FUN_0c03f346(v0_0, v0_1, v0_2, a7);
    L_C0D77EE:;
    return v0_3;
    L_C0D779E:;
    v0_2 = (0xC5421F8);
    if (((int)(*(signed char *)0xC54223C) <= 0)) goto L_C0D77BC;
    if (((int)(*(signed char *)((v0_0 + 0x2))) >= (int)0x3)) goto L_C0D77BC;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x384;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C0D77BC:;
    v0_3 = (0x44);
    if (((int)(*(signed char *)((v0_2 + 0x44))) <= (int)v0_1)) goto L_C0D77EE;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_3 = (v0_2);
    if (((int)v0_2 >= (int)0xF)) goto L_C0D77EE;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    L_C0D77D2:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_3 = (0x14);
    goto L_C0D77EE;
    L_C0D778C:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_3 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C0D77EE;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    goto L_C0D77D2;
    L_C0D772C:;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)((0xC28734C + (((v0_2 << 1) + v0_2) << 2))); }
    v0_3 = *(int *)((0xC287430 + ((*(signed char *)((v0_0 + 0x2))) << 2)));
    *(unsigned int *)((v0_0 + 0x38)) = (int)(((float)v0_3 * 65536.0f) / 360.0f);
    (((struct o126_uchar *)(v0_0))->v) = 0x2;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_2 = (v0_4);
    w0_0 = (360.0f);
    FPUL_ = ((int)(((float)v0_3 * 65536.0f) / 360.0f));
    if (((int)v0_4 < (int)0x7)) goto L_C0D777E;
    if (((int)v0_2 >= (int)0xF)) goto L_C0D777E;
    v0_3 = (0x708);
    L_C0D7782:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_3;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0D778C;
    L_C0D777E:;
    v0_3 = (v0_1);
    goto L_C0D7782;
}
