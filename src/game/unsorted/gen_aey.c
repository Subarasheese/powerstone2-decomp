/* Straight-line functions with calls and guards (batch gen_aey): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0d7d0c(int a4, int a5, int a6, int a7);

int FUN_0c0d7d0c(int a4, int a5, int a6, int a7)
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
    register int v0_5;
    register float w0_0;
    v0_0 = a4;
    v0_2 = a6;
    v0_4 = a7;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_3 = (v0_5);
    v0_1 = (0x1);
    if ((v0_5 == 0)) goto L_C0D7D24;
    if ((v0_3 == 1)) goto L_C0D7D88;
    if ((v0_3 == 2)) goto L_C0D7D9A;
    v0_5 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_5 - 1);
    v0_3 = ((short)(v0_5 - 1));
    if (((short)(v0_5 - 1) != 0)) goto L_C0D7DF8;
    return FUN_0c03f346(v0_0, v0_1, v0_2, v0_4);
    L_C0D7DF8:;
    return v0_3;
    L_C0D7D9A:;
    v0_2 = (0xC5421F8);
    if (((int)(*(signed char *)0xC54223C) <= 0)) goto L_C0D7DBE;
    if (((int)(*(signed char *)((v0_0 + 0x2))) < 0)) goto L_C0D7DBE;
    if (((int)(*(signed char *)((v0_0 + 0x2))) >= (int)0x2)) goto L_C0D7DBE;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x384;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C0D7DBE:;
    v0_3 = (0x44);
    if (((int)(*(signed char *)((v0_2 + 0x44))) <= (int)v0_1)) goto L_C0D7DF8;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_3 = (v0_2);
    if (((int)v0_2 < (int)0x2)) goto L_C0D7DF8;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_3 = (v0_2);
    if (((int)v0_2 >= (int)0x8)) goto L_C0D7DF8;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    L_C0D7DDC:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_3 = (0x14);
    goto L_C0D7DF8;
    L_C0D7D88:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_3 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C0D7DF8;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    goto L_C0D7DDC;
    L_C0D7D24:;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)((0xC2875EC + (((v0_2 << 1) + v0_2) << 2))); }
    v0_3 = *(int *)((0xC28764C + ((*(signed char *)((v0_0 + 0x2))) << 2)));
    *(unsigned int *)((v0_0 + 0x38)) = (int)(((float)v0_3 * 65536.0f) / 360.0f);
    (((struct o126_uchar *)(v0_0))->v) = 0x2;
    (((struct oA8_uchar *)(v0_0))->v) = 0x0;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_2 = (v0_4);
    w0_0 = (360.0f);
    FPUL_ = ((int)(((float)v0_3 * 65536.0f) / 360.0f));
    if (((int)v0_4 < (int)0x2)) goto L_C0D7D7A;
    if (((int)v0_2 >= (int)0x8)) goto L_C0D7D7A;
    v0_3 = (0x708);
    L_C0D7D7E:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_3;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0D7D88;
    L_C0D7D7A:;
    v0_3 = (v0_1);
    goto L_C0D7D7E;
}
