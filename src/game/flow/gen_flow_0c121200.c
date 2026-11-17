/* game/flow: functions 0C121200-0C121334, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03fd58(int, int, float);
int FUN_0c0cf7de(int, int, int, int, int);
int FUN_0c121200(int a4, float f4);
int FUN_0c121316(void);

int FUN_0c121200(int a4, float f4)
{
    int stk[6];

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
    register int v0_4;
    v0_0 = a4;
    v0_0 = *(signed char *)0xC5429B4;
    v0_1 = (v0_0);
    if ((v0_0 == 2)) goto L_C121210;
    L_C12130E:;
    return v0_1;
    L_C121210:;
    FUN_0c03fd58(0x32, (((int)stk + 4) + 0x8), f4);
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 500.0f);
    v0_0 = ((*(int *)0xC475200));
    v0_1 = (0x1518);
    v0_2 = (0x2328);
    v0_3 = (0x19C8);
    if (((*(signed char *)0xC54235E) != 0)) goto L_C121262;
    if (((unsigned int)v0_0 < (unsigned int)0xBB8)) goto L_C121266;
    if (((unsigned int)v0_0 < (unsigned int)0xE10)) goto L_C12126E;
    if (((unsigned int)v0_0 < (unsigned int)v0_1)) goto L_C121278;
    if (((unsigned int)v0_0 < (unsigned int)v0_3)) goto L_C121280;
    if (((unsigned int)v0_0 < (unsigned int)0x1E78)) goto L_C12128A;
    if (((unsigned int)v0_0 < (unsigned int)v0_2)) goto L_C121294;
    if (((unsigned int)v0_0 < (unsigned int)0x27D8)) goto L_C12129E;
    L_C1212C8:;
    v0_0 = (0x0);
    L_C1212CA:;
    v0_3 = *(signed char *)0xC5429AD;
    v0_4 = *(signed char *)0xC542236;
    *(unsigned int *)(((int)stk + 4)) = ((((short)v0_3 * (short)0x6E) + 0xC1C6E70) + ((short)v0_4 * (short)0x16));
    v0_1 = *(signed char *)(((((((short)v0_3 * (short)0x6E) + 0xC1C6E70) + ((short)v0_4 * (short)0x16)) + 0x3) + 0x0));
    v0_2 = *(signed char *)(((((((((short)v0_3 * (short)0x6E) + 0xC1C6E70) + ((short)v0_4 * (short)0x16)) + 0x3) + 0x1) + v0_0) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = ((((((short)v0_3 * (short)0x6E) + 0xC1C6E70) + ((short)v0_4 * (short)0x16)) + 0x3) + 0x9);
    v0_3 = *(signed char *)((((((((short)v0_3 * (short)0x6E) + 0xC1C6E70) + ((short)v0_4 * (short)0x16)) + 0x3) + 0x9) + 0x0));
    v0_0 = (*(signed char *)(((v0_0 + ((*(int *)(((int)stk + 8))) + 0x1)) + 0x0)));
    *(int *)((int)stk + 0) = v0_0;
    v0_1 = ((FUN_0c0cf7de((((int)stk + 0) + 0xC), v0_1, v0_2, v0_3, v0_0)));
    goto L_C12130E;
    L_C12129E:;
    v0_0 = (0x1);
    goto L_C1212CA;
    L_C121294:;
    v0_0 = (0x2);
    goto L_C1212CA;
    L_C12128A:;
    v0_0 = (0x3);
    goto L_C1212CA;
    L_C121280:;
    v0_0 = (0x4);
    goto L_C1212CA;
    L_C121278:;
    v0_0 = (0x5);
    goto L_C1212CA;
    L_C12126E:;
    v0_0 = (0x6);
    goto L_C1212CA;
    L_C121266:;
    v0_0 = (0x7);
    goto L_C1212CA;
    L_C121262:;
    if (((unsigned int)v0_0 >= (unsigned int)v0_1)) goto L_C12126A;
    goto L_C121266;
    L_C12126A:;
    if (((unsigned int)v0_0 >= (unsigned int)v0_3)) goto L_C121272;
    goto L_C12126E;
    L_C121272:;
    if (((unsigned int)v0_0 >= (unsigned int)0x1E78)) goto L_C12127C;
    goto L_C121278;
    L_C12127C:;
    if (((unsigned int)v0_0 >= (unsigned int)v0_2)) goto L_C121284;
    goto L_C121280;
    L_C121284:;
    if (((unsigned int)v0_0 >= (unsigned int)0x27D8)) goto L_C12128E;
    goto L_C12128A;
    L_C12128E:;
    if (((unsigned int)v0_0 >= (unsigned int)0x2C88)) goto L_C121298;
    goto L_C121294;
    L_C121298:;
    if (((unsigned int)v0_0 >= (unsigned int)0x3138)) goto L_C1212C8;
    goto L_C12129E;
}

int FUN_0c121316(void)
{
    register int t0;

    t0 = 0xC532498;
    for (;;) {
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        t0 = (t0 + 0x3938);
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return 0xA8;
}
