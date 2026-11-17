/* game/demo: functions 0C04F0C4-0C04F148, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c04f0c4(int a4, int a5, int a6, int a7);

int FUN_0c04f0c4(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    v0_2 = *(signed char *)((v0_1 + 0x14));
    v0_0 = (v0_2);
    if ((v0_2 == 0)) goto L_C04F0D4;
    if ((v0_0 == 1)) goto L_C04F0E2;
    return FUN_0c03f346(v0_1, R5, a6, a7);
    L_C04F0E2:;
    (((struct o30_float *)(v0_1))->v) = (((((struct o30_float *)(v0_1))->v)) + 80.0f);
    v0_2 = *(signed char *)((v0_1 + 0x2));
    v0_0 = ((v0_2 & 0x3));
    R5 = (0x16C);
    FPUL_ = (0x42A00000);
    if (((v0_2 & 0x3) == 0)) goto L_C04F10A;
    if ((v0_0 == 1)) goto L_C04F11A;
    if ((v0_0 == 2)) goto L_C04F122;
    if (!((v0_0 == 3))) goto L_C04F144;
    v0_2 = (((struct oC4_int *)(v0_1))->v);
    v0_0 = (0x80);
    v0_1 = (v0_2);
    v0_2 = ((((((struct o80_int *)(v0_2))->v)) + R5));
    goto L_C04F138;
    L_C04F144:;
    return v0_0;
    L_C04F138:;
    *(unsigned int *)((v0_1 + v0_0)) = v0_2;
    goto L_C04F144;
    L_C04F122:;
    v0_0 = (0x80);
    v0_1 = (((((struct oC4_int *)(v0_1))->v)));
    L_C04F128:;
    v0_2 = (((*(int *)((v0_1 + v0_0))) - R5));
    goto L_C04F138;
    L_C04F11A:;
    v0_0 = (0x80);
    v0_1 = (((((struct oC4_int *)(v0_1))->v)));
    goto L_C04F128;
    L_C04F10A:;
    v0_0 = (((struct oC4_int *)(v0_1))->v);
    (((struct o80_uint *)(v0_0))->v) = (((((struct o80_int *)(v0_0))->v)) + R5);
    v0_0 = (0x80);
    goto L_C04F144;
    L_C04F0D4:;
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    goto L_C04F0E2;
}
