/* Straight-line functions with calls and guards (batch gen_ru): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
int FUN_0c0ec3fc(int, int, int);
int nlRand(void);
int FUN_0c0ec438(int a4);

int FUN_0c0ec438(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_1 = a4;
    v0_0 = R13;
    v0_3 = R12;
    v0_4 = R11;
    v0_5 = R10;
    v0_6 = R9;
    v0_2 = *(signed char *)((v0_1 + 0x16));
    v0_3 = (v0_2);
    R10 = (0x0);
    v0_0 = (v0_1);
    if ((v0_2 == 0)) goto L_C0EC45E;
    if ((v0_3 == 1)) goto L_C0EC470;
    if ((v0_3 == 2)) goto L_C0EC522;
    L_C0EC522:;
    return v0_3;
    L_C0EC470:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0EC49C;
    *(unsigned short *)((v0_0 + 0x1C)) = (((int)((int)(nlRand()) % (int)0x3C)) + 0x3C);
    *(unsigned short *)((v0_0 + 0x1E)) = ((int)((int)(nlRand()) % (int)0x14));
    L_C0EC49C:;
    R11 = (0xC1CCC90);
    R12 = (R10);
    R13 = (R10);
    R9 = (0xC);
    L_C0EC4A4:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    FUN_0c0ec3fc((*(int *)((((R11 + ((((v0_1 << 2) << 1) + v0_1) << 2)) + R12) + 0x0))), ((*(int *)((((0xC4 + v0_0) + R13) + 0x0))) + 0x78), 0x3C);
    v0_1 = *(short *)((v0_0 + 0x1E));
    FUN_0c0ec3fc((*(int *)((((R11 + ((((v0_1 << 2) << 1) + v0_1) << 2)) + R12) + 0x4))), ((*(int *)((((0xC4 + v0_0) + R13) + 0x0))) + 0x7C), 0x3C);
    v0_2 = *(int *)((((0xC4 + v0_0) + R13) + 0x0));
    v0_1 = (*(signed char *)((v0_0 + 0x2))) == 0;
    v0_2 = ((v0_2 + 0x80));
    v0_3 = (0x3C);
    if (v0_1) goto L_C0EC500;
    v0_1 = (0xFFFFFFFF);
    L_C0EC502:;
    v0_4 = *(short *)((v0_0 + 0x1E));
    v0_2 = FUN_0c0ec3fc((v0_1 * (*(int *)((((((((v0_4 << 2) << 1) + v0_4) << 2) + R11) + R12) + 0x8)))), v0_2, v0_3);
    v0_1 = (unsigned int)(R13 + 0x4) < (unsigned int)R9;
    v0_3 = (v0_2);
    R12 = ((R12 + 0xC));
    R13 = ((R13 + 0x4));
    if (v0_1) goto L_C0EC4A4;
    goto L_C0EC522;
    L_C0EC500:;
    v0_1 = (0x1);
    goto L_C0EC502;
    L_C0EC45E:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x78;
    *(unsigned short *)((v0_0 + 0x1E)) = R10;
    goto L_C0EC470;
}
