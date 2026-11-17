/* game/unsorted: functions 0C1564B0-0C156924, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o104_int { char p[0x104]; int v; };
struct o108_int { char p[0x108]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c1564b0(int a4, int a5);

int FUN_0c1564b0(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t91;
    register int t5;
    register int t7;
    register int t10;
    register float u12;
    register int t14;
    register float u16;
    register int t19;
    register int t24;
    register int t27;
    register int t31;
    register int t35;
    register int t39;
    register int t43;
    register float u45;
    register int t47;
    register int t51;
    register int t55;
    register int t59;
    register int t63;
    register int t67;
    register int t70;
    register int t74;
    register int t77;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = FUN_0c03f444(0x8, 0x0, 0x12);
    t91 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned int *)((t0 + 0x4)) = 0xC155B7C;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 320.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 320.0f);
        (((struct o30_float *)(t0))->v) = -2.0f;
        (((struct o44_float *)(t0))->v) = 0.00312500005f;
        (((struct o40_float *)(t0))->v) = 0.00312500005f;
        (((struct o48_float *)(t0))->v) = 1.56250002e-09f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t5 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t5, 0x0, 0x11, (*(int *)0xC4B40D4));
        *(unsigned char *)((t5 + 0x0)) = 0x0;
        *(unsigned short *)((t5 + 0x6)) = 0x1F;
        t7 = *(int *)(((int)stk + 8));
        (((struct o6C_float *)(t5))->v) = ((((float)t7 * 159.0f)) + -175.0f);
        (((struct o70_float *)(t5))->v) = -156.0f;
        t10 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t10, 0x3, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t10 + 0x0)) = 0x1;
        *(unsigned short *)((t10 + 0x6)) = 0x1F;
        u12 = ((float)t7 * 159.0f);
        *(float *)(((int)stk + 16)) = (u12 + -235.0f);
        (((struct o6C_float *)(t10))->v) = (u12 + -235.0f);
        (((struct o70_float *)(t10))->v) = -210.0f;
        *(float *)(((int)stk + 0)) = 10000.0f;
        (((struct o74_float *)(t10))->v) = 10000.0f;
        t14 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t14, 0x4, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t14 + 0x0)) = 0x1;
        *(unsigned short *)((t14 + 0x6)) = 0x1F;
        u16 = ((float)t7 * 159.0f);
        (((struct o6C_float *)(t14))->v) = (u16 + -211.0f);
        (((struct o70_float *)(t14))->v) = -210.0f;
        (((struct o74_float *)(t14))->v) = (*(float *)(((int)stk + 0)));
        t19 = (((struct oD0_int *)(t0))->v);
        FUN_0c03744a(t19, 0x5, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t19 + 0x0)) = 0x1;
        *(unsigned short *)((t19 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t19))->v) = ((((float)t7 * 159.0f)) + -187.0f);
        (((struct o70_float *)(t19))->v) = -210.0f;
        (((struct o74_float *)(t19))->v) = (*(float *)(((int)stk + 0)));
        t24 = (((struct oD4_int *)(t0))->v);
        FUN_0c03744a(t24, 0x0, 0x15, (*(int *)0xC4B40D4));
        *(unsigned char *)((t24 + 0x0)) = 0x1;
        *(unsigned short *)((t24 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t24))->v) = (u16 + -211.0f);
        (((struct o70_float *)(t24))->v) = -210.0f;
        (((struct o74_float *)(t24))->v) = 20000.0f;
        t27 = (((struct oD8_int *)(t0))->v);
        FUN_0c03744a(t27, 0x1, 0x15, (*(int *)0xC4B40D4));
        *(unsigned char *)((t27 + 0x0)) = 0x1;
        *(unsigned short *)((t27 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t27))->v) = ((((float)t7 * 159.0f)) + -246.0f);
        (((struct o70_float *)(t27))->v) = -210.0f;
        (((struct o74_float *)(t27))->v) = -20000.0f;
        t31 = (((struct oDC_int *)(t0))->v);
        FUN_0c03744a(t31, 0x1, 0x11, (*(int *)0xC4B40D4));
        *(unsigned char *)((t31 + 0x0)) = 0x0;
        *(unsigned short *)((t31 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t31))->v) = ((((float)t7 * 159.0f)) + -239.0f);
        (((struct o70_float *)(t31))->v) = -156.0f;
        t35 = (((struct oE0_int *)(t0))->v);
        FUN_0c03744a(t35, 0x1, 0x11, (*(int *)0xC4B40D4));
        *(unsigned char *)((t35 + 0x0)) = 0x0;
        *(unsigned short *)((t35 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t35))->v) = ((((float)t7 * 159.0f)) + -231.0f);
        (((struct o70_float *)(t35))->v) = -156.0f;
        t39 = (((struct oE4_int *)(t0))->v);
        FUN_0c03744a(t39, 0x1, 0x11, (*(int *)0xC4B40D4));
        *(unsigned char *)((t39 + 0x0)) = 0x0;
        *(unsigned short *)((t39 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t39))->v) = ((((float)t7 * 159.0f)) + -223.0f);
        (((struct o70_float *)(t39))->v) = -156.0f;
        t43 = (((struct oE8_int *)(t0))->v);
        FUN_0c03744a(t43, 0x1, 0x11, (*(int *)0xC4B40D4));
        *(unsigned char *)((t43 + 0x0)) = 0x0;
        *(unsigned short *)((t43 + 0x6)) = 0x1F;
        u45 = ((float)t7 * 159.0f);
        *(float *)(((int)stk + 12)) = (u45 + -215.0f);
        (((struct o6C_float *)(t43))->v) = (u45 + -215.0f);
        (((struct o70_float *)(t43))->v) = -156.0f;
        t47 = (((struct oEC_int *)(t0))->v);
        FUN_0c03744a(t47, 0x1, 0x11, (*(int *)0xC4B40D4));
        *(unsigned char *)((t47 + 0x0)) = 0x0;
        *(unsigned short *)((t47 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t47))->v) = ((((float)t7 * 159.0f)) + -207.0f);
        (((struct o70_float *)(t47))->v) = -156.0f;
        t51 = (((struct oF0_int *)(t0))->v);
        FUN_0c03744a(t51, 0x1, 0x11, (*(int *)0xC4B40D4));
        *(unsigned char *)((t51 + 0x0)) = 0x0;
        *(unsigned short *)((t51 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t51))->v) = ((((float)t7 * 159.0f)) + -199.0f);
        (((struct o70_float *)(t51))->v) = -156.0f;
        t55 = (((struct oF4_int *)(t0))->v);
        FUN_0c03744a(t55, 0x1, 0x11, (*(int *)0xC4B40D4));
        *(unsigned char *)((t55 + 0x0)) = 0x0;
        *(unsigned short *)((t55 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t55))->v) = ((((float)t7 * 159.0f)) + -191.0f);
        (((struct o70_float *)(t55))->v) = -156.0f;
        t59 = (((struct oF8_int *)(t0))->v);
        FUN_0c03744a(t59, 0x1, 0x11, (*(int *)0xC4B40D4));
        *(unsigned char *)((t59 + 0x0)) = 0x0;
        *(unsigned short *)((t59 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t59))->v) = ((((float)t7 * 159.0f)) + -183.0f);
        (((struct o70_float *)(t59))->v) = -156.0f;
        t63 = (((struct oFC_int *)(t0))->v);
        FUN_0c03744a(t63, 0x5, 0x15, (*(int *)0xC4B40D4));
        *(unsigned char *)((t63 + 0x0)) = 0x0;
        *(unsigned short *)((t63 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t63))->v) = (*(float *)(((int)stk + 16)));
        (((struct o70_float *)(t63))->v) = -210.0f;
        t67 = (((struct o100_int *)(t0))->v);
        FUN_0c03744a(t67, 0x5, 0x15, (*(int *)0xC4B40D4));
        *(unsigned char *)((t67 + 0x0)) = 0x0;
        *(unsigned short *)((t67 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t67))->v) = (u16 + -211.0f);
        (((struct o70_float *)(t67))->v) = -210.0f;
        t70 = (((struct o104_int *)(t0))->v);
        FUN_0c03744a(t70, 0x4, 0x15, (*(int *)0xC4B40D4));
        *(unsigned char *)((t70 + 0x0)) = 0x0;
        *(unsigned short *)((t70 + 0x6)) = 0x21F;
        (((struct o6C_float *)(t70))->v) = (*(float *)(((int)stk + 12)));
        (((struct o70_float *)(t70))->v) = -210.0f;
        t74 = (((struct o108_int *)(t0))->v);
        FUN_0c03744a(t74, 0x2, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t74 + 0x0)) = 0x1;
        *(unsigned short *)((t74 + 0x6)) = 0x21F;
        (((struct o6C_float *)(t74))->v) = (u16 + -211.0f);
        (((struct o70_float *)(t74))->v) = -210.0f;
        (((struct o74_float *)(t74))->v) = -10000.0f;
        t77 = *(signed char *)((0xC535BB1 + ((*(int *)(((int)stk + 4))) * 0x3938)));
        if (t77 != 0) {
            if (t77 != 1) {
                if (t77 != 2) {
                    t91 = t77;
                    if (t77 != 3) {
                    } else {
                        (((struct o18_float *)(t74))->v) = 0.0f;
                        (((struct o1C_float *)(t74))->v) = (*(float *)0xC156A14);
                        (((struct o20_float *)(t74))->v) = 0.25f;
                        t91 = 0x20;
                    }
                } else {
                    (((struct o18_float *)(t74))->v) = 0.0f;
                    (((struct o1C_float *)(t74))->v) = 0.25f;
                    (((struct o20_float *)(t74))->v) = 0.899999976f;
                    t91 = 0x20;
                }
            } else {
                (((struct o18_float *)(t74))->v) = 1.0f;
                (((struct o1C_float *)(t74))->v) = 0.800000012f;
                (((struct o20_float *)(t74))->v) = 0.0f;
                t91 = 0x20;
            }
        } else {
            (((struct o18_float *)(t74))->v) = 0.800000012f;
            (((struct o1C_float *)(t74))->v) = 0.0f;
            (((struct o20_float *)(t74))->v) = 0.0500000007f;
            t91 = 0x20;
        }
    }
    return t91;
}
