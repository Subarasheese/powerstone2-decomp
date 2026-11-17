/* game/unsorted: functions 0C0CC8B0-0C0CCFB4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o428_uchar { char p[0x428]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05aaf6(int);
int FUN_0c0c212c(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
extern int FUN_0c187798();
int FUN_0c0cc8b0(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int FUN_0c0cc8b0(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t2;
    register int t14;
    register int t19;
    int t24;
    register int t29;
    register int t31;
    register int t36;
    register int t38;
    register int t39;
    register int t43;
    register int t47;
    register int t52;
    register int t55;
    register int t59;
    register int t63;
    register int t69;
    register int t71;
    register int t72;
    register int t76;
    register int t80;
    register int t85;
    register int t88;
    register int t92;
    register int t96;
    register int t100;
    register int t101;
    register int t106;
    register int t110;
    register int t114;
    register int t119;
    register int t122;
    register int t126;
    register int t130;
    register int t164;
    register int t199;
    register int t165;
    register int t198;
    register int t177;
    register int t182;
    register int t183;
    register int t184;
    register int t187;
    register int t201;
    register int t189;
    register int t190;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = *(int *)0xC4B40CC;
    if (a7 != 0) {
        t1 = FUN_0c037320(0x46, t0);
        t201 = 0x0;
        if ((int)t1 < 0) {
        } else {
            t2 = FUN_0c03f444(0x9, 0x0, (t1 + 0x2));
            t201 = 0x0;
            if (t2 == 0) {
            } else {
                FUN_0c03733c(t2, 0x46, (*(int *)0xC4B40CC));
                *(unsigned char *)((t2 + 0x1)) = a10;
                *(unsigned int *)((t2 + 0x4)) = 0xC0CC7A8;
                (((struct oAC_ushort *)(t2))->v) = 0xF;
                (((struct oA9_uchar *)(t2))->v) = 0x40;
                (((struct oA8_uchar *)(t2))->v) = 0x1;
                FUN_0c0c25c4(t2);
                (((struct o41D_uchar *)(t2))->v) = 0x0;
                (((struct o41C_uchar *)(t2))->v) = 0xC2;
                (((struct o424_uchar *)(t2))->v) = (*(int *)(((int)stk + 4)));
                (((struct o1B_uchar *)(t2))->v) = (*(int *)(((int)stk + 12)));
                *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 8)));
                (((struct o1A_uchar *)(t2))->v) = 0x0;
                (((struct oAA_uchar *)(t2))->v) = 0x1;
                (((struct oAB_uchar *)(t2))->v) = 0x1;
                (((struct o160_float *)(t2))->v) = 60.0f;
                t14 = 0x45;
                if ((*(signed char *)((t2 + 0x2))) == 0) {
                    t14 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t2 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12)));
                }
                FUN_0c0c2ab6(t2, t14);
                (((struct o12E_ushort *)(t2))->v) = 0x0;
                (((struct o12C_ushort *)(t2))->v) = 0x0;
                (((struct o420_ushort *)(t2))->v) = (*(short *)0xC27603A);
                FUN_0c0c212c(t2);
                t19 = ((int (*)(void))(FUN_0c187798))();
                *(unsigned int *)((t2 + 0x38)) = (*(int *)0xC5413E8);
                (((struct o428_uchar *)(t2))->v) = (*(int *)(((int)stk + 0)));
                *(unsigned short *)(((0x428 + t2) + 0x4)) = 0x4B0;
                *(unsigned char *)(((0x428 + t2) + 0x1)) = 0x0;
                *(unsigned char *)(((0x428 + t2) + 0x2)) = 0x0;
                FUN_0c0c2aa2(t2, a9);
                if ((*(signed char *)((t2 + 0x1A))) != 0) {
                    t24 = *(signed char *)((t2 + 0x1));
                    if ((t24 != 0) && (t24 != 1)) {
                        if ((t24 == 2) || (t24 == 3)) {
                            *(unsigned int *)(((int)stk + 0)) = 0x2;
                            *(unsigned int *)(((int)stk + 8)) = 0x3;
                        }
                    } else {
                        *(unsigned int *)(((int)stk + 0)) = 0x0;
                        *(unsigned int *)(((int)stk + 8)) = 0x1;
                    }
                    t29 = (((struct oCC_int *)(t2))->v);
                    *(unsigned char *)((t29 + 0x0)) = 0x1;
                    *(unsigned short *)((t29 + 0x6)) = 0x21;
                    (((struct o6C_float *)(t29))->v) = -45.0f;
                    (((struct o74_float *)(t29))->v) = 0.0f;
                    (((struct o70_float *)(t29))->v) = 130.0f;
                    t31 = (((struct oD0_int *)(t2))->v);
                    FUN_0c037498(t31, 0x2, 0x46, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t31 + 0x0)) = 0x1;
                    *(unsigned short *)((t31 + 0x6)) = 0x25;
                    (((struct o6C_float *)(t31))->v) = 90.0f;
                    (((struct o74_float *)(t31))->v) = 0.0f;
                    (((struct o70_float *)(t31))->v) = 0.0f;
                    (((struct o7C_uint *)(t31))->v) = 0x8000;
                    (((struct o68_uint *)(t31))->v) = (((((struct oCC_int *)(t2))->v)) + 0x28);
                    t36 = (((struct oD4_int *)(t2))->v);
                    FUN_0c037498(t36, (*(int *)(((int)stk + 0))), 0x48, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t36 + 0x0)) = 0x1;
                    *(unsigned short *)((t36 + 0x6)) = 0x231;
                    t38 = *(int *)(((int)stk + 0));
                    *(unsigned int *)(((int)stk + 4)) = ((t38 * 0x3938) + 0xC532498);
                    t39 = *(signed char *)((((t38 * 0x3938) + 0xC532498) + 0x3719));
                    (((struct o18_float *)(t36))->v) = (*(float *)((((((t39 << 1) + t39) << 2) + 0xC2737A0) + 0x0)));
                    t43 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3719));
                    (((struct o1C_float *)(t36))->v) = ((((struct o4_float *)(((((t43 << 1) + t43) << 2) + 0xC2737A0)))->v));
                    t47 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3719));
                    (((struct o20_float *)(t36))->v) = ((((struct o8_float *)(((((t47 << 1) + t47) << 2) + 0xC2737A0)))->v));
                    (((struct o8C_float *)(t36))->v) = 0.280000001f;
                    (((struct o88_float *)(t36))->v) = 0.280000001f;
                    (((struct o84_float *)(t36))->v) = 0.280000001f;
                    (((struct o70_float *)(t36))->v) = 0.0f;
                    (((struct o6C_float *)(t36))->v) = 0.0f;
                    (((struct o74_float *)(t36))->v) = 1.0f;
                    (((struct o68_uint *)(t36))->v) = (((((struct oCC_int *)(t2))->v)) + 0x28);
                    t52 = (((struct oD8_int *)(t2))->v);
                    FUN_0c037498(t52, 0x5, 0x48, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t52 + 0x0)) = 0x1;
                    *(unsigned short *)((t52 + 0x6)) = 0x231;
                    t55 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3719));
                    (((struct o18_float *)(t52))->v) = (*(float *)((((((t55 << 1) + t55) << 2) + 0xC2737A0) + 0x0)));
                    t59 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3719));
                    (((struct o1C_float *)(t52))->v) = ((((struct o4_float *)(((((t59 << 1) + t59) << 2) + 0xC2737A0)))->v));
                    t63 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3719));
                    (((struct o20_float *)(t52))->v) = ((((struct o8_float *)(((((t63 << 1) + t63) << 2) + 0xC2737A0)))->v));
                    (((struct o8C_float *)(t52))->v) = 0.280000001f;
                    (((struct o88_float *)(t52))->v) = 0.280000001f;
                    (((struct o84_float *)(t52))->v) = 0.280000001f;
                    (((struct o70_float *)(t52))->v) = 0.0f;
                    (((struct o6C_float *)(t52))->v) = 0.0f;
                    (((struct o74_float *)(t52))->v) = 1.0f;
                    (((struct o68_uint *)(t52))->v) = (((((struct oCC_int *)(t2))->v)) + 0x28);
                    t69 = (((struct oDC_int *)(t2))->v);
                    FUN_0c037498(t69, (*(int *)(((int)stk + 8))), 0x48, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t69 + 0x0)) = 0x1;
                    *(unsigned short *)((t69 + 0x6)) = 0x231;
                    t71 = *(int *)(((int)stk + 8));
                    *(unsigned int *)(((int)stk + 0)) = ((t71 * 0x3938) + 0xC532498);
                    t72 = *(signed char *)((((t71 * 0x3938) + 0xC532498) + 0x3719));
                    (((struct o18_float *)(t69))->v) = (*(float *)((((((t72 << 1) + t72) << 2) + 0xC2737A0) + 0x0)));
                    t76 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x3719));
                    (((struct o1C_float *)(t69))->v) = ((((struct o4_float *)(((((t76 << 1) + t76) << 2) + 0xC2737A0)))->v));
                    t80 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x3719));
                    (((struct o20_float *)(t69))->v) = ((((struct o8_float *)(((((t80 << 1) + t80) << 2) + 0xC2737A0)))->v));
                    (((struct o8C_float *)(t69))->v) = 0.280000001f;
                    (((struct o88_float *)(t69))->v) = 0.280000001f;
                    (((struct o84_float *)(t69))->v) = 0.280000001f;
                    (((struct o70_float *)(t69))->v) = 0.0f;
                    (((struct o6C_float *)(t69))->v) = 0.0f;
                    (((struct o74_float *)(t69))->v) = 1.0f;
                    (((struct o68_uint *)(t69))->v) = (((((struct oD0_int *)(t2))->v)) + 0x28);
                    t85 = (((struct oE0_int *)(t2))->v);
                    FUN_0c037498(t85, 0x5, 0x48, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t85 + 0x0)) = 0x1;
                    *(unsigned short *)((t85 + 0x6)) = 0x231;
                    t88 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x3719));
                    (((struct o18_float *)(t85))->v) = (*(float *)((((((t88 << 1) + t88) << 2) + 0xC2737A0) + 0x0)));
                    t92 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x3719));
                    (((struct o1C_float *)(t85))->v) = ((((struct o4_float *)(((((t92 << 1) + t92) << 2) + 0xC2737A0)))->v));
                    t96 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x3719));
                    (((struct o20_float *)(t85))->v) = ((((struct o8_float *)((0xC2737A0 + (((t96 << 1) + t96) << 2))))->v));
                    (((struct o8C_float *)(t85))->v) = 0.280000001f;
                    (((struct o88_float *)(t85))->v) = 0.280000001f;
                    (((struct o84_float *)(t85))->v) = 0.280000001f;
                    (((struct o70_float *)(t85))->v) = 0.0f;
                    (((struct o6C_float *)(t85))->v) = 0.0f;
                    (((struct o74_float *)(t85))->v) = 1.0f;
                    (((struct o68_uint *)(t85))->v) = (((((struct oD0_int *)(t2))->v)) + 0x28);
                } else {
                    t100 = (((struct oCC_int *)(t2))->v);
                    *(unsigned char *)((t100 + 0x0)) = 0x1;
                    *(unsigned short *)((t100 + 0x6)) = 0x21;
                    (((struct o6C_float *)(t100))->v) = -45.0f;
                    (((struct o74_float *)(t100))->v) = 0.0f;
                    (((struct o70_float *)(t100))->v) = 130.0f;
                    t101 = (((struct oD0_int *)(t2))->v);
                    FUN_0c037498(t101, (*(signed char *)((t2 + 0x1))), 0x48, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t101 + 0x0)) = 0x1;
                    *(unsigned short *)((t101 + 0x6)) = 0x231;
                    t106 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938) + 0xC532498)));
                    (((struct o18_float *)(t101))->v) = (*(float *)((((((t106 << 1) + t106) << 2) + 0xC2737A0) + 0x0)));
                    t110 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938) + 0xC532498)));
                    (((struct o1C_float *)(t101))->v) = ((((struct o4_float *)(((((t110 << 1) + t110) << 2) + 0xC2737A0)))->v));
                    t114 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938) + 0xC532498)));
                    (((struct o20_float *)(t101))->v) = ((((struct o8_float *)(((((t114 << 1) + t114) << 2) + 0xC2737A0)))->v));
                    (((struct o8C_float *)(t101))->v) = 0.280000001f;
                    (((struct o88_float *)(t101))->v) = 0.280000001f;
                    (((struct o84_float *)(t101))->v) = 0.280000001f;
                    (((struct o70_float *)(t101))->v) = 0.0f;
                    (((struct o6C_float *)(t101))->v) = 0.0f;
                    (((struct o74_float *)(t101))->v) = 1.0f;
                    (((struct o68_uint *)(t101))->v) = (((((struct oCC_int *)(t2))->v)) + 0x28);
                    t119 = (((struct oD4_int *)(t2))->v);
                    FUN_0c037498(t119, 0x5, 0x48, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t119 + 0x0)) = 0x1;
                    *(unsigned short *)((t119 + 0x6)) = 0x231;
                    t122 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938) + 0xC532498)));
                    (((struct o18_float *)(t119))->v) = (*(float *)((((((t122 << 1) + t122) << 2) + 0xC2737A0) + 0x0)));
                    t126 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938) + 0xC532498)));
                    (((struct o1C_float *)(t119))->v) = ((((struct o4_float *)(((((t126 << 1) + t126) << 2) + 0xC2737A0)))->v));
                    t130 = *(signed char *)(((0xC532498 + ((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938)) + 0x3719));
                    (((struct o20_float *)(t119))->v) = ((((struct o8_float *)((0xC2737A0 + (((t130 << 1) + t130) << 2))))->v));
                    (((struct o8C_float *)(t119))->v) = 0.280000001f;
                    (((struct o88_float *)(t119))->v) = 0.280000001f;
                    (((struct o84_float *)(t119))->v) = 0.280000001f;
                    (((struct o70_float *)(t119))->v) = 0.0f;
                    (((struct o6C_float *)(t119))->v) = 0.0f;
                    (((struct o74_float *)(t119))->v) = 1.0f;
                    (((struct o68_uint *)(t119))->v) = (((((struct oCC_int *)(t2))->v)) + 0x28);
                }
                FUN_0c05aaf6(0x8E);
                t201 = t2;
            }
        }
    } else {
        t164 = FUN_0c037320(0xA, t0);
        t199 = 0x0;
        if ((int)t164 >= 0) {
            t165 = FUN_0c03f444(0x9, 0x0, t164);
            t198 = 0x0;
            if (t165 != 0) {
                FUN_0c03733c(t165, 0xA, (*(int *)0xC4B40CC));
                *(unsigned char *)((t165 + 0x1)) = a10;
                *(unsigned int *)((t165 + 0x4)) = 0xC0CC7A8;
                (((struct oAC_ushort *)(t165))->v) = 0xF;
                (((struct oA9_uchar *)(t165))->v) = 0x40;
                (((struct oA8_uchar *)(t165))->v) = 0x1;
                FUN_0c0c25c4(t165);
                (((struct o41D_uchar *)(t165))->v) = 0x0;
                (((struct o41C_uchar *)(t165))->v) = 0xC2;
                (((struct o424_uchar *)(t165))->v) = (*(int *)(((int)stk + 4)));
                (((struct o1B_uchar *)(t165))->v) = (*(int *)(((int)stk + 12)));
                *(unsigned char *)((t165 + 0x2)) = (*(signed char *)(((int)stk + 8)));
                (((struct o1A_uchar *)(t165))->v) = 0x0;
                t177 = 0x45;
                if ((*(signed char *)((t165 + 0x2))) == 0) {
                    t177 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t165 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12)));
                }
                FUN_0c0c2ab6(t165, t177);
                (((struct o12E_ushort *)(t165))->v) = 0x0;
                (((struct o12C_ushort *)(t165))->v) = 0x0;
                (((struct o420_ushort *)(t165))->v) = (*(short *)0xC27603A);
                FUN_0c0c212c(t165);
                t182 = ((int (*)(void))(FUN_0c187798))();
                if ((int)t164 > 0) {
                    t183 = 0x0;
                    t184 = 0xC273740;
                    for (;;) {
                        if (t183 != 4) {
                            *(volatile int *)((((t183 << 2) + (0xC4 + t165)) + 0x0));
                            t187 = ((int (*)(int, int))(FUN_0c187798))(t183, t184);
                        } else {
                            t189 = t183;
                            t190 = t184;
                        }
                        t183 = (t189 + 0x1);
                        t184 = t190;
                        if ((int)t183 >= (int)t164) {
                            break;
                        }
                    }
                }
                *(unsigned int *)((t165 + 0x38)) = (unsigned short)((*(short *)0xC5413E8) + 0x8000);
                (((struct o428_uchar *)(t165))->v) = (*(int *)(((int)stk + 0)));
                *(unsigned short *)(((0x428 + t165) + 0x4)) = 0x12C;
                FUN_0c0c2aa2(t165, a9);
                t198 = t165;
            }
            t199 = t198;
        }
        t201 = t199;
    }
    return t201;
}
