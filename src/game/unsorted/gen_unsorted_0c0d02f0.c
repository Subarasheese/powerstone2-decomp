/* game/unsorted: functions 0C0D02F0-0C0D0478, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o618_int { char p[0x618]; int v; };
struct o61C_int { char p[0x61C]; int v; };
struct o61C_uint { char p[0x61C]; unsigned int v; };
int FUN_0c179ac0(void);
int FUN_0c0d02f0(int a4, int a5, int a6, int a7);
int FUN_0c0d039e(int a4, int a5);

int FUN_0c0d02f0(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t13;
    register int t1;

    t2 = a4;
    t3 = a5;
    t4 = a6;
    t5 = a7;
    t6 = ((((struct o0_int *)0xC540F90)->v));
    for (;;) {
        if ((int)t6 >= (int)((((struct o4_int *)0xC540F90)->v))) {
            break;
        }
        t1 = 0x61C;
        t1 = (t1 + 0xC540978);
        t1 = (*(int *)((t1 + 0x0)));
        t1 = (t1 - ((((struct o0_int *)0xC540F90)->v)));
        t1 = (t1 - 1);
        t3 = 0x618;
        t2 = 0x5A0;
        t3 = (t3 + 0xC540978);
        t3 = (*(int *)((t3 + 0x0)));
        t2 = (t2 + 0xC540978);
        t3 = (t3 + ((int)((int)(FUN_0c179ac0()) % (int)t1)));
        t4 = t3;
        t4 = (t4 << 2);
        t1 = 0x5A0;
        t13 = ((t6 << 2) + t2);
        t2 = (t2 + t4);
        t5 = (*(int *)((t13 + 0x0)));
        t1 = (t1 + 0xC540978);
        t4 = (t4 + t1);
        t6 = (t6 + 0x1);
        *(unsigned int *)((t13 + 0x0)) = (*(int *)((t2 + 0x0)));
        *(unsigned int *)((t4 + 0x0)) = t5;
    }
    return 0x61C;
}

int FUN_0c0d039e(int a4, int a5)
{

    register int R0;
    register int R1;
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
    register int v0_5;
    v0_1 = a4;
    v0_0 = a5;
    v0_2 = R13;
    v0_3 = R12;
    v0_4 = R11;
    R11 = (0xC0);
    R13 = (0xFFFFFFFF);
    v0_2 = (v0_1);
    v0_3 = (0xC540978);
    v0_4 = (0x0);
    L_C0D046A:;
    if (((int)v0_2 <= (int)v0_0)) goto L_C0D03B2;
    return R0;
    L_C0D03B2:;
    R12 = (v0_4);
    L_C0D0434:;
    v0_1 = (int)R12 < (int)((((struct o61C_int *)(v0_3))->v));
    if (!(v0_1)) goto L_C0D043C;
    v0_5 = (*(int *)((((0x5A0 + v0_3) + (R12 << 2)) + 0x0))) != v0_2;
    v0_1 = ((R12 << 2));
    if (v0_5) goto L_C0D0432;
    v0_5 = (int)R12 >= (int)((((struct o618_int *)(v0_3))->v));
    R0 = (0x618);
    if (v0_5) goto L_C0D040E;
    *(unsigned int *)((v0_3 + R0)) = ((*(int *)((v0_3 + R0))) - 1);
    *(unsigned int *)((((0x5A0 + v0_3) + v0_1) + 0x0)) = (*(int *)(((((((struct o618_int *)(v0_3))->v)) << 2) + (0x5A0 + v0_3))));
    (((struct o61C_uint *)(v0_3))->v) = (((((struct o61C_int *)(v0_3))->v)) - 1);
    *(unsigned int *)(((0x5A0 + v0_3) + (((((struct o618_int *)(v0_3))->v)) << 2))) = (*(int *)((((((((struct o61C_int *)(v0_3))->v)) << 2) + (0x5A0 + v0_3)) + 0x0)));
    goto L_C0D043C;
    L_C0D043C:;
    R12 = (v0_4);
    L_C0D043E:;
    v0_5 = *(signed char *)((((0x62C + v0_3) + R12) + 0x1));
    R0 = (v0_5);
    v0_1 = (((0x62C + v0_3) + R12));
    if ((v0_5 != v0_2)) goto L_C0D0462;
    (((struct o423_uchar *)((*(int *)((v0_1 + 0x4)))))->v) = R13;
    *(unsigned char *)((v0_1 + 0x0)) = v0_4;
    *(unsigned char *)((v0_1 + 0x1)) = R13;
    *(unsigned int *)((v0_1 + 0x4)) = v0_4;
    *(unsigned short *)((v0_1 + 0x8)) = v0_4;
    R0 = (v0_4);
    L_C0D0468:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C0D046A;
    L_C0D0462:;
    v0_1 = (unsigned int)(R12 + 0xC) < (unsigned int)R11;
    R12 = ((R12 + 0xC));
    if (v0_1) goto L_C0D043E;
    goto L_C0D0468;
    L_C0D040E:;
    (((struct o61C_uint *)(v0_3))->v) = (((((struct o61C_int *)(v0_3))->v)) - 1);
    *(unsigned int *)((((0x5A0 + v0_3) + v0_1) + 0x0)) = (*(int *)(((((((struct o61C_int *)(v0_3))->v)) << 2) + (0x5A0 + v0_3))));
    goto L_C0D043C;
    L_C0D0432:;
    R12 = ((R12 + 0x1));
    goto L_C0D0434;
}
