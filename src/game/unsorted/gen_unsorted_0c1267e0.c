/* game/unsorted: functions 0C1267E0-0C126956, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c14f6a0(int, int, float);
int FUN_0c1267e0(int a4, int a5);
int FUN_0c12688e(int a4, int a5, int a6, int a7, float f4);

int FUN_0c1267e0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t5 = t2;
            t5 = (t5 << 2);
            t5 = (t5 << 1);
            t4 = t2;
            t5 = (t5 + 0xC201B10);
            t4 = (t4 << 2);
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t4) + 0x0))), (*(int *)((t5 + 0x0))), (*(int *)((t5 + 0x4))), (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            t5 = 0xC4;
            t2 = (t2 + 0x1);
            t5 = (t5 + t0);
            t4 = (t4 + t5);
            t5 = ((((struct oF4_int *)(a4))->v));
            t5 = (t5 + 0x28);
            (((struct o68_uint *)((*(int *)((t4 + 0x0)))))->v) = t5;
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12688E;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = a5;
        (((struct o20_ushort *)(t0))->v) = 0x0;
        t1 = 0x20;
    }
    return t1;
}

int FUN_0c12688e(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R11;
    register int R12;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_2 = a4;
    v0_0 = a5;
    w0_0 = f4;
    v0_3 = *(signed char *)((v0_2 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (v0_2);
    if ((v0_3 == 0)) goto L_C1268A6;
    if ((v0_1 == 1)) goto L_C1268AE;
    v0_1 = ((FUN_0c03f346(v0_2, v0_0, a6, a7)));
    L_C12694E:;
    return v0_1;
    L_C1268AE:;
    *(unsigned short *)((v0_2 + 0x1C)) = ((*(short *)((v0_2 + 0x1C))) + 0x1);
    if (((*(short *)((v0_2 + 0x1C))) != (*(short *)(((((((struct o20_short *)(v0_2))->v)) << 1) + 0xC201B18))))) goto L_C1268FC;
    *(float *)(((int)stk + 0)) = -5.0f;
    *(float *)(((int)stk + 4)) = -21.0f;
    *(float *)(((int)stk + 8)) = 18.0f;
    FUN_0c0582de(((int)stk + 0), (((((struct oC4_int *)(v0_2))->v)) + 0x28));
    FUN_0c14f6a0(((int)stk + 0), 0x0, 0.125f);
    (((struct o20_ushort *)(v0_2))->v) = (((((struct o20_short *)(v0_2))->v)) + 0x1);
    L_C1268FC:;
    v0_0 = *(short *)((v0_2 + 0x1E));
    v0_1 = (v0_0);
    if (((int)(*(short *)((v0_2 + 0x1C))) < (int)v0_0)) goto L_C12694E;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C12694E;
    L_C1268A6:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    goto L_C1268AE;
}
