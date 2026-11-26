/* Straight-line functions with calls and guards (batch gen_ajf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16D_uchar { char p[0x16D]; unsigned char v; };
struct o56_uchar { char p[0x56]; unsigned char v; };
struct o81_uchar { char p[0x81]; unsigned char v; };
int FUN_0c045f10(void);

int FUN_0c045f10(void)
{

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_2 = *(signed char *)0xC541F43;
    v0_1 = ((unsigned char)v0_2);
    v0_0 = (0xC541F3C);
    if (((unsigned char)v0_2 == 0)) goto L_C045F4C;
    if ((v0_1 == 1)) goto L_C045FB2;
    *(unsigned char *)((v0_0 + 0x5)) = 0x4;
    *(unsigned char *)(((v0_0 + 0x4) + 0x4)) = 0x0;
    *(unsigned char *)(((v0_0 + 0x4) + 0x3)) = 0x0;
    *(unsigned char *)(((v0_0 + 0x4) + 0x2)) = 0x0;
    v0_1 = (0x0);
    L_C045FD6:;
    return v0_1;
    L_C045FB2:;
    v0_2 = *(short *)((v0_0 + 0x14));
    *(unsigned short *)((v0_0 + 0x14)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C045FD6;
    v0_1 = *(signed char *)((v0_0 + 0x7));
    *(unsigned char *)((v0_0 + 0x7)) = (v0_1 + 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C045FD6;
    L_C045F4C:;
    *(unsigned char *)0xC542360 = (*(short *)((v0_0 + 0x12)));
    v0_1 = (0xC5421F8);
    if (((*(signed char *)0xC542361) != 0)) goto L_C045F66;
    (((struct o16D_uchar *)(v0_1))->v) = (*(signed char *)((v0_1 + 0x168)));
    L_C045F66:;
    if (((*(signed char *)((v0_1 + 0x169))) != 0)) goto L_C045FA8;
    v0_2 = (0xC540978);
    v0_3 = (0x3938);
    v0_4 = (0x98);
    v0_5 = (0xC541CDC);
    v0_6 = (0xC532498);
    L_C045F7E:;
    if (((*(signed char *)((v0_6 + 0x3714))) == 0)) goto L_C045FA0;
    (((struct o56_uchar *)(v0_5))->v) = (*(signed char *)((v0_1 + 0x3E)));
    v0_7 = *(signed char *)((v0_5 + 0x56));
    v0_8 = *(signed char *)((v0_1 + 0x168));
    (((struct o81_uchar *)(v0_5))->v) = v0_8;
    *(unsigned char *)(((v0_7 + (0x84 + v0_5)) + 0x0)) = v0_8;
    L_C045FA0:;
    v0_7 = (unsigned int)(v0_6 + v0_3) < (unsigned int)v0_2;
    v0_5 = ((v0_5 + v0_4));
    v0_6 = ((v0_6 + v0_3));
    if (v0_7) goto L_C045F7E;
    L_C045FA8:;
    *(unsigned short *)((v0_0 + 0x14)) = 0x5A;
    *(unsigned char *)((v0_0 + 0x7)) = ((*(signed char *)((v0_0 + 0x7))) + 0x1);
    goto L_C045FB2;
}
