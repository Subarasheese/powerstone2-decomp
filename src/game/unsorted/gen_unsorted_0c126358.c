/* game/unsorted: functions 0C126358-0C126618, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c126358(int a4, int a5);
int FUN_0c126406(int a4, int a5, int a6, int a7);

int FUN_0c126358(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = FUN_0c037320(0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t1))->v))) {
                break;
            }
            t0 = 0xC4;
            t0 = (t0 + t1);
            t4 = (*(int *)((((t2 << 2) + t0) + 0x0)));
            t0 = *(short *)((0xC201AFC + (t2 << 1)));
            t2 = (t2 + 0x1);
            *(unsigned short *)((t4 + 0x6)) = t0;
        }
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t1))->v) = 0x20F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC126406;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned short *)((t1 + 0x1E)) = a5;
        *(unsigned short *)((t1 + 0x1C)) = a5;
        t2 = *(short *)((t1 + 0x1E));
        t0 = t2;
        if (t2 == 0) {
            *(unsigned short *)((t1 + 0x1E)) = 0x1;
            t0 = 0x1;
        }
    }
    return t0;
}

int FUN_0c126406(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R8;
    register int R10;
    register int R12;
    register int R13;
    register float F3;
    register float F4;
    register float F14;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_1 = a4;
    v0_0 = R8;
    v0_3 = *(signed char *)(((((short)(*(signed char *)((v0_1 + 0x1))) * (short)0x3938) + 0xC532498) + 0x15));
    v0_0 = (v0_1);
    v0_1 = (0xC532498);
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C12642E;
    if ((v0_2 != 2)) goto L_C126450;
    L_C12642E:;
    v0_3 = (*(signed char *)((0x15 + (((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_1)))) == 2;
    v0_4 = (0x3938);
    if (v0_3) goto L_C126466;
    v0_1 = (*(signed char *)((0x3715 + (((short)(*(signed char *)((v0_0 + 0x1))) * (short)v0_4) + v0_1)))) == 26;
    if (v0_1) goto L_C126466;
    L_C126450:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x0;
    return FUN_0c03f346(v0_0, v0_2, a6, a7);
    L_C126466:;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C1264A4;
    if ((v0_1 == 1)) goto L_C1264AC;
    return FUN_0c03f346(v0_0, v0_2, a6, a7);
    L_C1264AC:;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (v0_0 + 0x28));
    *(volatile int *)((v0_0 + 0x10));
    FUN_0c187798();
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x4000);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + 0x1555);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) + 0xE38);
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    F14 = (0.100000001f);
    if ((v0_2 == 0)) goto L_C126510;
    if ((v0_1 == 1)) goto L_C12651A;
    if ((v0_1 == 2)) goto L_C12652A;
    if ((v0_1 == 3)) goto L_C12659A;
    L_C12660C:;
    return v0_1;
    L_C12659A:;
    (((struct oB4_float *)(v0_0))->v) = (((((struct oB4_float *)(v0_0))->v)) - F14);
    v0_2 = !(0.0f > ((((struct oB4_float *)(v0_0))->v)));
    v0_1 = (0xB4);
    w0_0 = (0.0f);
    if (v0_2) goto L_C1265AC;
    *(float *)((v0_0 + v0_1)) = w0_0;
    L_C1265AC:;
    w0_0 = *(float *)((v0_0 + v0_1));
    *(float *)((v0_0 + (v0_1 + 0x8))) = w0_0;
    *(float *)((v0_0 + ((v0_1 + 0x8) - 4))) = w0_0;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C12660C;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C12660C;
    L_C12652A:;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_1 = *(short *)((v0_0 + 0x1E));
    (((struct o8C_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = (((float)((short)v0_1 - (*(short *)((v0_0 + 0x1C)))) / (float)(short)v0_1) * 0.5f);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = 0.5f;
    w0_0 = w0_0 + F14 * (math_sin_angle16(((*(short *)((v0_0 + 0x1C))) << 14)));
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + w0_0);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = (((struct o8C_float *)(v0_1))->v);
    (((struct o88_float *)(v0_1))->v) = w0_0;
    (((struct o84_float *)(v0_1))->v) = w0_0;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    w0_0 = (F14);
    if ((v0_2 != 0)) goto L_C12660C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0xA;
    v0_1 = (0xA);
    goto L_C12660C;
    L_C12651A:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C12652A;
    L_C126510:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C12660C;
    L_C1264A4:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C1264AC;
}
