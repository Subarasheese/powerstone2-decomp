/* game/unsorted: functions 0C0497D8-0C04A844, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o166_uchar { char p[0x166]; unsigned char v; };
struct o16B_uchar { char p[0x16B]; unsigned char v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o3719_uchar { char p[0x3719]; unsigned char v; };
struct o3720_uchar { char p[0x3720]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0497d8(void);
int FUN_0c0498d8(void);
int FUN_0c049962(void);
int FUN_0c049a10(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c049de4(void);
int FUN_0c04a060(void);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c0bb244(void);
int FUN_0c187798(void);
int FUN_0c049eac(int a4, int a5, int a6, int a7);
int FUN_0c04a080(int a4, int a5, int a6, int a7);
int FUN_0c04a69a(void);

int FUN_0c049eac(int a4, int a5, int a6, int a7)
{
    int stk[1];
    int t0;

    t0 = *(signed char *)0xC542236;
    if ((t0 != 2) && (t0 != 4)) {
        FUN_0c049de4();
    } else {
        FUN_0c049a10(t0, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    return (unsigned char)(*(signed char *)0xC40F828);
}

int FUN_0c04a080(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t17;
    register int t15;

    if ((*(signed char *)0xC542362) != 0) {
        (((struct o0_uchar *)0xC40F828)->v) = (*(signed char *)0xC3BD447);
    }
    if ((*(signed char *)0xC542377) != 0) {
        t15 = (FUN_0c04a060());
    } else {
        if ((*(signed char *)0xC542361) != 0) {
            t15 = (FUN_0c049962());
        } else {
            t15 = (FUN_0c049eac(0xC5421F8, a5, a6, a7));
        }
    }
    (((struct o4_uint *)0xC40F828)->v) = 0x0;
    t17 = 0x0;
    for (;;) {
        if ((*(signed char *)((((t17 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            (((struct o4_uint *)0xC40F828)->v) = (((((struct o4_int *)0xC40F828)->v)) | ((int)0x1 << (int)t17));
        }
        t17 = (t17 + 0x1);
        if ((int)t17 >= (int)0x4) {
            break;
        }
    }
    FUN_0c06780e(((((struct o4_int *)0xC40F828)->v)));
    FUN_0c036de8(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c06785c();
    FUN_0c06780e(t15);
    FUN_0c0497d8();
    return (FUN_0c187798());
}

int FUN_0c04a69a(void)
{
    int stk[11];

    register int R1;
    register int R3;
    register int R5;
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
    register int v0_9;
    *(unsigned int *)(((int)stk + 0)) = (FUN_0c0bb244());
    v0_0 = (0x4);
    v0_1 = (0x1);
    v0_7 = (0x0);
    v0_3 = (0x0);
    v0_2 = (0xC3BD447);
    L_C04A6BE:;
    if (((((int)v0_1 << (int)v0_7) & (unsigned char)(*(signed char *)((v0_2 + 0x0)))) == 0)) goto L_C04A6EC;
    R5 = (v0_7);
    L_C04A6F2:;
    v0_7 = *(signed char *)0xC542236;
    v0_8 = (v0_7);
    v0_4 = (0xC532498);
    v0_5 = (0xC5421F8);
    v0_6 = (0x3938);
    if ((v0_7 == 0)) goto L_C04A714;
    if ((v0_8 == 1)) goto L_C04A714;
    if ((v0_8 == 3)) goto L_C04A714;
    if ((v0_8 == 2)) goto L_C04A776;
    if ((v0_8 == 4)) goto L_C04A776;
    L_C04A7E2:;
    *(unsigned int *)0xC40F82C = v0_3;
    v0_5 = (0xC40F82C);
    v0_7 = (v0_3);
    L_C04A7E8:;
    if (((*(signed char *)((((v0_7 * v0_6) + v0_4) + 0x3714))) == 0)) goto L_C04A800;
    *(unsigned int *)((v0_5 + 0x0)) = ((*(int *)((v0_5 + 0x0))) | ((int)v0_1 << (int)v0_7));
    L_C04A800:;
    v0_3 = (int)(v0_7 + 0x1) < (int)v0_0;
    v0_7 = ((v0_7 + 0x1));
    if (v0_3) goto L_C04A7E8;
    FUN_0c06780e((*(int *)((v0_5 + 0x0))));
    FUN_0c036de8(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c06785c();
    FUN_0c06780e((unsigned char)(*(signed char *)((v0_2 + 0x0))));
    FUN_0c0497d8();
    return (FUN_0c187798());
    L_C04A776:;
    if (((*(signed char *)((v0_5 + 0x3E))) != 2)) goto L_C04A782;
    v0_7 = (0x1);
    L_C04A784:;
    (((struct o166_uchar *)(v0_5))->v) = v0_7;
    v0_7 = (v0_3);
    L_C04A78A:;
    if (((((int)v0_1 << (int)v0_7) & (unsigned char)(*(signed char *)((v0_2 + 0x0)))) != 0)) goto L_C04A7DC;
    (((struct o3714_uchar *)(((v0_7 * v0_6) + v0_4)))->v) = v0_1;
    R5 = (((v0_7 * v0_6) + v0_4));
    if (((*(signed char *)((v0_5 + 0x3E))) != 2)) goto L_C04A7AC;
    v0_8 = (0xC);
    L_C04A7AE:;
    *(unsigned char *)((R5 + 0x2)) = v0_8;
    (((struct o3720_uchar *)(R5))->v) = v0_1;
    (((struct o3719_uchar *)(R5))->v) = v0_7;
    *(unsigned char *)((R5 + 0x1)) = v0_7;
    (((struct o16B_uchar *)(v0_5))->v) = v0_7;
    goto L_C04A7E2;
    L_C04A7AC:;
    v0_8 = (0xD);
    goto L_C04A7AE;
    L_C04A7DC:;
    v0_8 = (int)(v0_7 + 0x1) < (int)v0_0;
    v0_7 = ((v0_7 + 0x1));
    if (v0_8) goto L_C04A78A;
    goto L_C04A7E2;
    L_C04A782:;
    v0_7 = (0x2);
    goto L_C04A784;
    L_C04A714:;
    *(unsigned int *)(((int)stk + 8)) = (0xC1B7D2C + (((R5 << 1) + R5) << 2));
    *(unsigned char *)(((int)stk + 4)) = ((R5 + 0x1) & 0x3);
    v0_7 = (v0_3);
    v0_8 = (0xFFFFFFFF);
    if (((int)(*(int *)(((int)stk + 0))) <= 0)) goto L_C04A76C;
    L_C04A738:;
    v0_9 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_9 + 0x4);
    v0_9 = *(int *)((((v0_9 + 0x4) - 4) + 0x0));
    (((struct o3714_uchar *)(((v0_9 * v0_6) + v0_4)))->v) = v0_1;
    *(unsigned char *)((((v0_9 * v0_6) + v0_4) + 0x2)) = v0_8;
    (((struct o3720_uchar *)(((v0_9 * v0_6) + v0_4)))->v) = v0_1;
    (((struct o3719_uchar *)(((v0_9 * v0_6) + v0_4)))->v) = (*(signed char *)(((int)stk + 4)));
    *(unsigned char *)((((v0_9 * v0_6) + v0_4) + 0x1)) = v0_9;
    v0_9 = (int)(v0_7 + 0x1) < (int)(*(int *)(((int)stk + 0)));
    v0_7 = ((v0_7 + 0x1));
    if (v0_9) goto L_C04A738;
    L_C04A76C:;
    FUN_0c0498d8();
    (((struct o166_uchar *)(v0_5))->v) = v0_3;
    goto L_C04A7E2;
    L_C04A6EC:;
    v0_4 = (int)(v0_7 + 0x1) < (int)v0_0;
    v0_7 = ((v0_7 + 0x1));
    if (v0_4) goto L_C04A6BE;
    goto L_C04A6F2;
}
