/* Straight-line functions with calls and guards (batch gen_ahs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c085cac(int, int, int);
void FUN_0c04b23c(int a4, int a5);

void FUN_0c04b23c(int a4, int a5)
{

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = R11;
    v0_3 = R10;
    v0_4 = R9;
    v0_5 = R8;
    R10 = (0x0);
    R11 = (0x0);
    v0_0 = (((((v0_0 << 1) << 1) + (v0_0 << 1)) << 2));
    v0_1 = (0x0);
    R8 = (v0_2);
    L_C04B260:;
    v0_4 = (*(signed char *)((((v0_1 * 0x3938) + 0xC532498) + 0x3714))) == 0;
    v0_3 = (0x3714);
    v0_2 = (((v0_1 * 0x3938) + 0xC532498));
    if (v0_4) goto L_C04B340;
    v0_4 = v0_1 == (*(signed char *)0xC542363);
    v0_3 = (0x16B);
    if (v0_4) goto L_C04B340;
    v0_3 = (R10);
    R9 = (0xC1B7E04);
    if ((R10 == 0)) goto L_C04B28E;
    if ((v0_3 == 1)) goto L_C04B2D0;
    (((struct oA8_uchar *)(v0_2))->v) = R11;
    v0_3 = (0xA8);
    L_C04B340:;
    v0_2 = (int)(v0_1 + 0x1) < (int)0x4;
    v0_1 = ((v0_1 + 0x1));
    if (v0_2) goto L_C04B260;
    return;
    L_C04B2D0:;
    v0_3 = (*(signed char *)((v0_2 + 0x3715))) != 23;
    if (v0_3) goto L_C04B2E0;
    v0_3 = (*(signed char *)((v0_2 + 0x15))) == 10;
    if (v0_3) goto L_C04B2EA;
    L_C04B2E0:;
    FUN_0c085cac(v0_2, 0x17, 0xA);
    L_C04B2EA:;
    (((struct oA4_uint *)(v0_2))->v) = (R8 + 0x64);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x28)) = *(struct mv3 *)((0xC1B7DE0 + v0_0)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x34)) = *(struct mv3 *)(((v0_0 + R9) + 0xC)); }
    L_C04B310:;
    R10 = ((R10 + 0x1));
    goto L_C04B340;
    L_C04B28E:;
    v0_3 = (*(signed char *)((v0_2 + 0x3715))) != 23;
    if (v0_3) goto L_C04B29E;
    v0_3 = (*(signed char *)((v0_2 + 0x15))) == 9;
    if (v0_3) goto L_C04B2A8;
    L_C04B29E:;
    FUN_0c085cac(v0_2, 0x17, 0x9);
    L_C04B2A8:;
    (((struct oA4_uint *)(v0_2))->v) = (R8 + 0x64);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x28)) = *(struct mv3 *)((0xC1B7DD4 + v0_0)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x34)) = *(struct mv3 *)((v0_0 + R9)); }
    goto L_C04B310;
}
