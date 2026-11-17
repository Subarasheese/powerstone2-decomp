/* game/unsorted: functions 0C131954-0C131C24, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c03f346(int, int, int, int);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c131954(int a4, int a5, int a6, int a7);

int FUN_0c131954(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u9;
    register float u11;
    register float t13;
    register float u14;
    register int t16;
    register float u18;
    register float u19;
    register int t20;
    register float t23;
    register float u24;
    register int t26;
    register float u28;
    register float u29;
    register int t30;
    register float t33;
    register float u34;
    register int t37;
    register int t39;
    register int t42;
    register float t45;
    register int t47;
    register int t50;
    register int t56;
    register int t57;
    register int t64;
    register int t60;
    register int t61;
    register int t62;
    register int t65;
    register int t66;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 5.0f);
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 5.69620275f);
                (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.493670881f);
                t5 = 0xC;
                t6 = 0x4;
                for (;;) {
                    t7 = *(int *)((((0xC4 + a4) + t6) + 0x0));
                    *(int *)((int)stk + 0) = (0x78 + t7);
                    *(unsigned int *)(((int)stk + 4)) = (0xC2A156C + t5);
                    t8 = *(short *)((a4 + 0x1C));
                    u9 = *(float *)(((0xC2A15B4 + t5) + 0x0));
                    u11 = *(float *)(((0xC2A156C + t5) + 0x0));
                    t13 = math_sin_angle16(((int)(((((float)(((t8 << 1) + t8) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    u14 = ((u11 - u9) * t13);
                    (((struct o78_uint *)(t7))->v) = ((int)((((u14 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t16 = *(int *)((((0xC4 + a4) + t6) + 0x0));
                    *(int *)((int)stk + 0) = (0x7C + t16);
                    u18 = (((struct o4_float *)((0xC2A15B4 + t5)))->v);
                    u19 = (((struct o4_float *)((*(int *)(((int)stk + 4)))))->v);
                    t20 = *(short *)((a4 + 0x1C));
                    t23 = math_sin_angle16(((int)(((((float)(((t20 << 1) + t20) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    u24 = ((u19 - u18) * t23);
                    (((struct o7C_uint *)(t16))->v) = ((int)((((u24 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t26 = *(int *)((((0xC4 + a4) + t6) + 0x0));
                    *(int *)((int)stk + 0) = (0x80 + t26);
                    u28 = (((struct o8_float *)((0xC2A15B4 + t5)))->v);
                    u29 = (((struct o8_float *)((*(int *)(((int)stk + 4)))))->v);
                    t30 = *(short *)((a4 + 0x1C));
                    t33 = math_sin_angle16(((int)(((((float)(((t30 << 1) + t30) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    t6 = (t6 + 0x4);
                    u34 = ((u29 - u28) * t33);
                    (((struct o80_uint *)(t26))->v) = ((int)((((u34 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t5 = (t5 + 0xC);
                    if ((unsigned int)t6 >= (unsigned int)0x18) {
                        break;
                    }
                }
                t37 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t37 + 0x1);
                t39 = (short)(t37 + 0x1);
                if ((int)(short)(t37 + 0x1) >= (int)0x78) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t39 = 0x14;
                }
                return t39;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t42 = *(short *)((a4 + 0x1C));
        t45 = math_sin_angle16(((int)(((((float)((int)((int)(((t42 << 2) + t42) << 2) % (int)0x168)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        (((struct o78_uint *)(t0))->v) = ((int)((((_builtin_fabsf(t45) * 3932160.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t47 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t47 + 0x1);
        t50 = (short)(t47 + 0x1);
        if ((int)(short)(t47 + 0x1) < (int)0x29) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o78_uint *)(t0))->v) = 0x0;
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
            t50 = 0xD8;
        }
        return t50;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o6C_float *)(t0))->v) = -35.0f;
    (((struct o70_float *)(t0))->v) = 10.0f;
    (((struct o74_float *)(t0))->v) = 57.0f;
    (((struct o7C_uint *)(t0))->v) = 0x31C7;
    t56 = 0x4;
    t57 = 0xC;
    for (;;) {
        *(volatile int *)((((0xC4 + a4) + t56) + 0x0));
        FUN_0c187798(t56, t57, 0xC2A1524);
        t57 = t60;
        t56 = t62;
        *(volatile int *)((((0xC4 + a4) + t62) + 0x0));
        t64 = FUN_0c187798(t56, t57, t61);
        t56 = (t65 + 0x4);
        t57 = (t66 + 0xC);
        if ((unsigned int)t56 >= (unsigned int)0x18) {
            break;
        }
    }
    return t64;
}
