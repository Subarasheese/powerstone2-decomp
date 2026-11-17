/* game/unsorted: functions 0C16166C-0C1617FE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c0dc2d0(int, int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c16166c(int a4);
int FUN_0c1616e4(int a4, int a5);

int FUN_0c16166c(int a4)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715))) == 17) && (t0 = (((struct o3818_short *)((((short)t1 * (short)0x3938) + 0xC532498)))->v), (unsigned short)t0 == 0x447)) {
        return 0x3818;
    }
    t0 = *(signed char *)0xC542237;
    if (t0 != 1) {
        if (t0 != 6) {
        } else {
            math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
            FUN_0c0e2700((a4 + 0x28), 0xE, 0xFFFFFFFF, 0x2);
        }
    } else {
        math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
        FUN_0c0dc2d0(a4, 0x30);
    }
    return FUN_0c03f346(a4);
}

int FUN_0c1616e4(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    v0_0 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    v0_1 = *(signed char *)0xC542237;
    v0_0 = (v0_1);
    if ((v0_1 == 1)) goto L_C161702;
    if ((v0_0 == 6)) goto L_C16172C;
    L_C1617F2:;
    return v0_0;
    L_C16172C:;
    v0_2 = (0x19);
    L_C16172E:;
    v0_3 = FUN_0c037320(v0_2, (*(int *)0xC4B410C));
    v0_0 = (v0_3);
    v0_1 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C1617F2;
    v0_3 = FUN_0c03f444(0x5, 0x0, 0x1);
    v0_0 = (v0_3);
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C1617F2;
    *(unsigned char *)((v0_1 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
    *(unsigned char *)((v0_1 + 0x2)) = (*(signed char *)(((int)stk + 4)));
    *(unsigned int *)((v0_1 + 0x4)) = 0xC16166C;
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    (((struct oAC_ushort *)(v0_1))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    (((struct o48_float *)(v0_1))->v) = 1.0f;
    (((struct o44_float *)(v0_1))->v) = 1.0f;
    (((struct o40_float *)(v0_1))->v) = 1.0f;
    (((struct o28_float *)(v0_1))->v) = 0.0f;
    v0_3 = *(signed char *)0xC542237;
    v0_0 = (v0_3);
    w0_0 = (1.0f);
    w0_1 = (0.0f);
    if ((v0_3 == 1)) goto L_C161792;
    if (!((v0_0 == 6))) goto L_C1617AA;
    v0_0 = (0x2C);
    w0_2 = (45.0f);
    goto L_C1617A8;
    L_C1617AA:;
    (((struct o30_float *)(v0_1))->v) = w0_1;
    *(unsigned int *)((v0_1 + 0x38)) = 0x0;
    *(unsigned int *)((v0_1 + 0x34)) = 0x0;
    *(unsigned int *)((v0_1 + 0x3C)) = 0x8000;
    (((struct oA4_uint *)(v0_1))->v) = ((*(int *)((0xC53256C + ((short)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1))) * (short)0x3938)))) + 0x28);
    v0_1 = (((struct oC4_int *)(v0_1))->v);
    FUN_0c03744a(v0_1, 0x0, v0_2, (*(int *)0xC4B410C));
    *(unsigned char *)((v0_1 + 0x0)) = 0x1;
    *(unsigned short *)((v0_1 + 0x6)) = 0xF;
    (((struct o8C_float *)(v0_1))->v) = w0_0;
    (((struct o88_float *)(v0_1))->v) = w0_0;
    (((struct o84_float *)(v0_1))->v) = w0_0;
    v0_0 = (0x84);
    v0_1 = (v0_1);
    goto L_C1617F2;
    L_C1617A8:;
    *(float *)((v0_1 + v0_0)) = w0_2;
    goto L_C1617AA;
    L_C161792:;
    (((struct o2C_float *)(v0_1))->v) = 55.0f;
    v0_0 = (0x44);
    w0_2 = (0.699999988f);
    goto L_C1617A8;
    L_C161702:;
    v0_2 = (0x96);
    goto L_C16172E;
}
