/* game/unsorted: functions 0C0E6B48-0C0E6BE4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0e6b48(int a4, int a5, int a6, int a7);

int FUN_0c0e6b48(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0E6B58;
    if ((v0_1 == 1)) goto L_C0E6B78;
    L_C0E6BE0:;
    return v0_1;
    L_C0E6B78:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    w0_0 = ((*(float *)0xC0E6C44));
    if ((v0_2 == 0)) goto L_C0E6B94;
    if ((v0_1 == 1)) goto L_C0E6BA8;
    if ((v0_1 == 2)) goto L_C0E6BB6;
    if ((v0_1 == 3)) goto L_C0E6BCA;
    goto L_C0E6BE0;
    L_C0E6BCA:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - w0_0);
    v0_1 = (0xB0);
    if ((((((struct oB0_float *)(v0_0))->v)) > 0.0f)) goto L_C0E6BE0;
    return FUN_0c03f346(v0_0, R5, a6, a7);
    L_C0E6BB6:;
    v0_2 = *(short *)(((*(int *)((v0_0 + 0x10))) + 0x1C));
    v0_1 = (v0_2);
    if (((int)v0_2 > (int)0x28)) goto L_C0E6BE0;
    L_C0E6BC0:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C0E6BE0;
    L_C0E6BA8:;
    v0_2 = *(signed char *)((0x15 + (*(int *)((v0_0 + 0x10)))));
    v0_1 = (v0_2);
    if ((v0_2 != 1)) goto L_C0E6BE0;
    goto L_C0E6BC0;
    L_C0E6B94:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) + w0_0);
    v0_1 = (0xB0);
    if ((!(1.0f > ((((struct oB0_float *)(v0_0))->v))))) goto L_C0E6BC0;
    goto L_C0E6BE0;
    L_C0E6B58:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x0;
    (((struct oB0_float *)(v0_0))->v) = 0.0f;
    goto L_C0E6B78;
}
