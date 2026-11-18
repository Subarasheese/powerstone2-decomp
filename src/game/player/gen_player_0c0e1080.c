/* game/player: functions 0C0E1080-0C0E1EC0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03f346(int);
int FUN_0c04340c(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0cd5c0(int, int, int, int);
int FUN_0c0d01f2(int);
int FUN_0c0d0238(void);
int FUN_0c0e2116(int);
int FUN_0c0e2358(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
int FUN_0c18778c(int, int, int, int, float);
int FUN_0c187798(void);
int FUN_0c0e1080(int a4);
int FUN_0c0e1096(int a4);
int FUN_0c0e10a8(int a4, int a5, int a6, int a7);
float FUN_0c0e1108(int a4, int a5, int a6);
int FUN_0c0e11ee(int a4, int a5, int a6, int a7);
int FUN_0c0e1270(int a4);
float FUN_0c0e12aa(int a4);
int FUN_0c0e1314(int a4);
int FUN_0c0e132a(int a4);
int FUN_0c0e138c(int a4);
int FUN_0c0e1b20(int a4);
int FUN_0c0e1b9a(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0e1080(int a4)
{
    (((struct o132_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0xFFFFFF0F;
    return 0x12C;
}

int FUN_0c0e1096(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0e10a8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)a5 <= (int)a6) {
        t0 = (a5 << 2);
        t1 = a5;
        for (;;) {
            t1 = (t1 + 0x1);
            t2 = *(int *)(((0xC4 + a4) + t0));
            (((struct o80_uint *)(t2))->v) = (((((struct o80_int *)(t2))->v)) - (*(int *)((0xC1CA524 + t0))));
            t0 = (t0 + 0x4);
            if ((int)t1 > (int)a6) {
                break;
            }
        }
    }
    (((struct o1B_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1B))) + 0x1);
    t0 = *(signed char *)((a4 + 0x1B));
    if ((t0 & 31) == 0) {
        return thunk_FUN_0c05abb2(0x55, (a4 + 0x28));
    }
    return t0;
}

float FUN_0c0e1108(int a4, int a5, int a6)
{
    int stk[2];
    register float u0;
    register int t5;
    register int t6;
    register float t8;
    register float u9;
    register float u49;
    register float u40;
    register int t29;
    register int t30;
    register float t32;
    register float u33;
    register float u75;
    register float u66;
    register int t55;
    register int t56;
    register float t58;
    register float u59;
    register float u23;
    register float u15;

    u0 = *(float *)0xC0E1228;
    if (((int)a5 <= 0) && ((int)a6 >= 0)) {
        if ((int)(*(short *)((a4 + 0x1E))) > 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            t5 = (((struct oC4_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 4)) = t5;
            t6 = *(short *)((a4 + 0x1E));
            *(unsigned short *)(((int)stk + 0)) = t6;
            t8 = math_sin_angle16(((*(short *)(((int)stk + 0))) << 13));
            u9 = (((float)t6 / u0) * t8);
            (((struct o70_float *)(t5))->v) = (u9 * u0);
            u15 = t8;
        }
        u23 = u15;
    }
    u49 = u23;
    if (((int)a5 <= (int)0x1) && ((int)a6 >= (int)0x1)) {
        u40 = u23;
        if ((int)((((struct o20_short *)(a4))->v)) > 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            t29 = (((struct oC8_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 4)) = t29;
            t30 = (((struct o20_short *)(a4))->v);
            *(unsigned short *)(((int)stk + 0)) = t30;
            t32 = math_sin_angle16(((*(short *)(((int)stk + 0))) << 13));
            u33 = (((float)t30 / u0) * t32);
            (((struct o70_float *)(t29))->v) = (u33 * u0);
            u40 = t32;
        }
        u49 = u40;
    }
    u75 = u49;
    if (((int)a5 <= (int)0x2) && ((int)a6 >= (int)0x2)) {
        u66 = u49;
        if ((int)((((struct o22_short *)(a4))->v)) > 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            t55 = (((struct oCC_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 4)) = t55;
            t56 = (((struct o22_short *)(a4))->v);
            *(unsigned short *)(((int)stk + 0)) = t56;
            t58 = math_sin_angle16(((*(short *)(((int)stk + 0))) << 13));
            u59 = (((float)t56 / u0) * t58);
            (((struct o70_float *)(t55))->v) = (u59 * u0);
            u66 = t58;
        }
        u75 = u66;
    }
    return u75;
}

int FUN_0c0e11ee(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((((0xC4 + a4) + (a5 << 2)) + 0x0));
    t1 = (((struct o80_int *)(t0))->v);
    t2 = ((unsigned short)t1 - a6);
    if ((int)(unsigned short)t1 >= (int)a6) {
        t2 = (a6 - ((unsigned short)t1 - a6));
    }
    t1 = (t2 + 0x10000);
    if ((int)((int)((int)(t2 + 0x10000) / (int)(*(int *)(((a5 << 2) + 0xC1CA524))))) < (int)0xA) {
        t1 = ((t2 + 0x10000) + 0x10000);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)(t1 + (a7 << 16)) / (int)(*(int *)(((0xC1CA524 + (a5 << 2)) + 0x0)))));
    (((struct o80_uint *)(t0))->v) = (a6 + ((*(short *)((a4 + 0x1C))) * (*(int *)(((0xC1CA524 + (a5 << 2)) + 0x0)))));
    return 0x80;
}

int FUN_0c0e1270(int a4)
{
    register int t0;

    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
    (((struct oBC_float *)(a4))->v) = 1.0f;
    (((struct oB8_float *)(a4))->v) = 1.0f;
    (((struct oB4_float *)(a4))->v) = 1.0f;
    t0 = (((struct oD0_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
    t0 = (((struct oD0_int *)(a4))->v);
    (((struct o20_float *)(t0))->v) = 1.0f;
    (((struct o1C_float *)(t0))->v) = 1.0f;
    (((struct o18_float *)(t0))->v) = 1.0f;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}

float FUN_0c0e12aa(int a4)
{
    register float u0;
    register float u1;
    register float u2;

    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
    u0 = (((struct o0_float *)0xC0E1374)->v);
    u1 = (((struct o4_float *)0xC0E1374)->v);
    u2 = u1;
    u2 = u2 + u0 * (math_cos_angle16((((((struct o22_short *)(a4))->v)) << 13)));
    (((struct oB4_float *)(a4))->v) = u2;
    u2 = u1;
    u2 = u2 + u0 * (math_sin_angle16((((((struct o22_short *)(a4))->v)) << 13)));
    (((struct oB8_float *)(a4))->v) = u2;
    u2 = u1;
    u2 = u2 + u0 * (math_cos_angle16((((((struct o22_short *)(a4))->v)) << 14)));
    (((struct oBC_float *)(a4))->v) = u2;
    return u0;
}

int FUN_0c0e1314(int a4)
{
    register int t1;
    register int t2;

    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
    t1 = (((struct oD0_int *)(a4))->v);
    t2 = *(short *)((t1 + 0x6));
    *(unsigned short *)((t1 + 0x6)) = (t2 & 0xFDFF);
    return (t2 & 0xFDFF);
}

int FUN_0c0e132a(int a4)
{
    register int t0;
    register int t1;

    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    t0 = FUN_0c179ac0();
    t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x3);
    }
    (((struct o18_uchar *)(a4))->v) = t1;
    return t1;
}

int FUN_0c0e138c(int a4)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t4;
    register int t77;
    register int t9;
    register int t10;
    register int t23;
    register int t49;
    register int t51;
    register int t56;
    register int t76;

    t0 = *(signed char *)((a4 + 0x16));
    t1 = *(short *)((a4 + 0x1E));
    t4 = *(int *)(((0xC288000 + ((*(signed char *)(((((t0 << 2) + t0) + 0xC1CA530) + 0x0))) << 2)) + 0x0));
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    t77 = 0x20;
    if ((int)((((struct o20_short *)(a4))->v)) < (int)(*(int *)(((t4 + (((t1 << 1) + t1) << 2)) + 0x0)))) {
    } else {
        *(float *)(((int)stk + 4)) = -1070.0f;
        *(float *)(((int)stk + 8)) = -19230.0f;
        *(float *)(((int)stk + 12)) = ((((struct o4_float *)((t4 + (((t1 << 1) + t1) << 2))))->v));
        t9 = *(signed char *)((a4 + 0x16));
        t10 = *(signed char *)((0xC1CA530 + ((t9 << 2) + t9)));
        switch (t10) {
        case 0:
            if ((int)(*(signed char *)0xC540F9A) > 0) {
                t49 = FUN_0c0d0238();
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                t51 = FUN_0c0c2944(0xC1, t49, (*(int *)(((t4 + (((t1 << 1) + t1) << 2)) + 0x8))), (((int)stk + 0) + 0x4), 0xFFFFFFFF);
                if (t51 == 0) {
                    FUN_0c0d01f2(t49);
                } else {
                    FUN_0c05aae4(0x11, ((int)stk + 4));
                }
            } else {
                t56 = FUN_0c04340c();
                if (t56 != 0) {
                    FUN_0c0cd5c0((*(int *)(((((*(short *)((a4 + 0x1E))) << 2) + (0xC1CA3E4 + ((((*(signed char *)((a4 + 0x18))) << 2) << 2) << 1))) + 0x0))), (*(int *)(((t4 + (((t1 << 1) + t1) << 2)) + 0x8))), ((int)stk + 4), 0x0);
                }
            }
            break;
        case 1:
            FUN_0c0cd5c0((*(int *)(((((*(short *)((a4 + 0x1E))) << 2) + (0xC1CA3E4 + ((((*(signed char *)((a4 + 0x18))) << 2) << 2) << 1))) + 0x0))), (*(int *)(((t4 + (((t1 << 1) + t1) << 2)) + 0x8))), ((int)stk + 4), 0x0);
            break;
        case 2:
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            t23 = *(signed char *)((a4 + 0x18));
            FUN_0c0c2944((*(int *)(((((*(short *)((a4 + 0x1E))) << 2) + (0xC1CA464 + ((((t23 << 1) + t23) << 2) << 1))) + 0x0))), 0x0, (*(int *)(((t4 + (((t1 << 1) + t1) << 2)) + 0x8))), (((int)stk + 0) + 0x4), 0xFFFFFFFF);
            break;
        case 3:
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c0c2944(0xA, 0x0, (*(int *)(((t4 + (((t1 << 1) + t1) << 2)) + 0x8))), (((int)stk + 0) + 0x4), 0xFFFFFFFF);
            break;
        }
        t76 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t76 + 0x1);
        t77 = (t76 + 0x1);
    }
    return t77;
}

int FUN_0c0e1b20(int a4)
{
    int stk[3];
    register float u6;
    register float u7;
    register float u8;
    register float t9;
    register float u12;
    register int t15;

    FUN_0c0e2390(((int)stk + 0), 0xC1CA6E0, (a4 + 0x6C));
    (((struct o8C_float *)(a4))->v) = ((FUN_0c0e2340(((int)stk + 0))) / ((((struct o0_float *)0xC0E1C0C)->v)));
    (((struct o7C_uint *)(a4))->v) = ((math_atan2_angle16((*(float *)(((int)stk + 0))), (*(float *)(((int)stk + 8))))) + 0x8000);
    u6 = *(float *)(((int)stk + 8));
    u7 = *(float *)(((int)stk + 0));
    u8 = (u6 * u6);
    u8 = u8 + u7 * u7;
    t9 = math_signed_sqrt(u8);
    u12 = t9;
    if (t9 == 0.0f) {
        u12 = ((((struct o10_float *)0xC0E1C0C)->v));
    }
    t15 = math_atan_angle16(((*(float *)(((int)stk + 4))) / u12));
    (((struct o78_uint *)(a4))->v) = t15;
    return t15;
}

