/* Straight-line functions with calls and guards (batch gen_zw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
int FUN_0c0ed5e4(int, int, int);
int FUN_0c0ed620(int a4);

int FUN_0c0ed620(int a4)
{

    register int R2;
    register int R3;
    register int R11;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    v0_0 = R13;
    v0_3 = R12;
    v0_4 = R11;
    v0_2 = (*(signed char *)((v0_1 + 0x16))) != 0;
    v0_0 = (v0_1);
    v0_1 = (0x0);
    if (v0_2) goto L_C0ED648;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o17_uchar *)(v0_0))->v) = v0_1;
    (((struct o20_ushort *)(v0_0))->v) = 0x3C;
    L_C0ED648:;
    v0_3 = *(signed char *)((v0_0 + 0x17));
    v0_2 = (v0_3);
    R12 = (0xB4);
    if ((v0_3 == 0)) goto L_C0ED65A;
    if ((v0_2 == 1)) goto L_C0ED66A;
    L_C0ED6AE:;
    return v0_2;
    L_C0ED66A:;
    v0_3 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_3 - 1);
    v0_2 = (0x22);
    R11 = (0x20);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C0ED686;
    *(unsigned short *)((v0_0 + v0_2)) = R12;
    (((struct o18_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x18))) ^ 0x1);
    L_C0ED686:;
    R13 = (v0_1);
    L_C0ED688:;
    v0_2 = *(int *)((((0xC4 + v0_0) + R13) + 0x0));
    v0_1 = (*(signed char *)((v0_0 + 0x18))) == 0;
    v0_2 = ((v0_2 + 0x7C));
    v0_3 = (R12);
    if (v0_1) goto L_C0ED6A2;
    v0_1 = (0xE38);
    L_C0ED6A4:;
    v0_2 = FUN_0c0ed5e4(v0_1, v0_2, v0_3);
    v0_1 = (unsigned int)(R13 + 0x4) < (unsigned int)R11;
    v0_2 = (v0_2);
    R13 = ((R13 + 0x4));
    if (v0_1) goto L_C0ED688;
    goto L_C0ED6AE;
    L_C0ED6A2:;
    v0_1 = (0xFFFFF1C8);
    goto L_C0ED6A4;
    L_C0ED65A:;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    (((struct o22_ushort *)(v0_0))->v) = R12;
    (((struct o18_uchar *)(v0_0))->v) = v0_1;
    goto L_C0ED66A;
}
