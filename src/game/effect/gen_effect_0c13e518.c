/* game/effect: functions 0C13E518-0C13E600, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c13e518(int a4, int a5, int a6, int a7);

int FUN_0c13e518(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_3);
    v0_1 = ((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532498));
    if ((v0_3 == 0)) goto L_C13E536;
    if ((v0_2 == 1)) goto L_C13E546;
    return FUN_0c03f346(v0_0, v0_1, a6, a7);
    L_C13E546:;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x71C);
    if (((*(signed char *)((v0_1 + 0x3715))) != 26)) goto L_C13E562;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C13E56A;
    L_C13E562:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C13E56A:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_3);
    w0_0 = (0.00999999978f);
    w0_1 = (0.800000012f);
    w0_2 = (1.20000005f);
    if ((v0_3 == 0)) goto L_C13E586;
    if (!((v0_2 == 1))) goto L_C13E5E2;
    w0_3 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_3 - w0_0);
    v0_2 = (0x40);
    if (((w0_3 - w0_0) > w0_1)) goto L_C13E5CC;
    *(float *)((v0_0 + v0_2)) = w0_1;
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    goto L_C13E5CC;
    L_C13E5E2:;
    *(volatile int *)((v0_0 + 0x10));
    v0_2 = ((FUN_0c187798(v0_0, v0_1, a6)));
    return v0_2;
    L_C13E5CC:;
    (((struct o48_float *)(v0_0))->v) = ((((struct o40_float *)(v0_0))->v));
    v0_2 = (0x44);
    if ((((((struct o44_float *)(v0_0))->v)) > w0_2)) goto L_C13E5E2;
    *(float *)((v0_0 + v0_2)) = ((*(float *)((v0_0 + v0_2))) + w0_0);
    goto L_C13E5E2;
    L_C13E586:;
    w0_3 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_3 + w0_0);
    v0_2 = (0x40);
    if ((w0_2 > (w0_3 + w0_0))) goto L_C13E59E;
    *(float *)((v0_0 + v0_2)) = w0_2;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C13E59E:;
    (((struct o48_float *)(v0_0))->v) = ((((struct o40_float *)(v0_0))->v));
    v0_2 = (0x44);
    if ((w0_1 > ((((struct o44_float *)(v0_0))->v)))) goto L_C13E5E2;
    *(float *)((v0_0 + v0_2)) = ((*(float *)((v0_0 + v0_2))) - w0_0);
    goto L_C13E5E2;
    L_C13E536:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0xB4;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x3C;
    goto L_C13E546;
}
