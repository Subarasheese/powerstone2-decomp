/* game/unsorted: functions 0C0DB188-0C0DB352, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0dade0(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int FUN_0c0db21c(int a4, int a5, int a6);

int FUN_0c0db21c(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R10;
    register int R12;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_1 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = *(signed char *)((v0_1 + 0x14));
    v0_2 = (v0_5);
    v0_0 = (v0_1);
    if ((v0_5 == 0)) goto L_C0DB254;
    if ((v0_2 == 1)) goto L_C0DB27A;
    if ((v0_2 == 2)) goto L_C0DB286;
    return FUN_0c03f346(v0_0, v0_3, v0_4, R7);
    L_C0DB286:;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) + ((((struct o58_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + ((((struct o60_float *)(v0_0))->v)));
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) + ((((struct o0_int *)0xC287DA0)->v)));
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + ((((struct o4_int *)0xC287DA0)->v)));
    *(unsigned int *)((v0_0 + 0x3C)) = ((*(int *)((v0_0 + 0x3C))) + ((((struct o8_int *)0xC287DA0)->v)));
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    v0_1 = (0xC287DA0);
    if (((short)(v0_3 - 1) != 0)) goto L_C0DB34C;
    FUN_0c0dade0(v0_0, 0x0);
    thunk_FUN_0c05abb2(0x50, 0x0);
    v0_1 = *(int *)((0xC287DAC + (((int)((int)(FUN_0c179ac0()) % (int)0x5)) << 2)));
    FUN_0c0c2944(v0_1, 0x0, 0x0, (v0_0 + 0x28), 0xFFFFFFFF);
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    L_C0DB34C:;
    return v0_2;
    L_C0DB27A:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0DB286;
    L_C0DB254:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    v0_1 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_3, v0_4);
    v0_1 = ((int (*)(void))(FUN_0c187798))();
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0DB27A;
}
