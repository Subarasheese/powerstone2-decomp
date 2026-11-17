/* game/unsorted: functions 0C131C44-0C131F9A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c03f346(int, int, int, int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c131c44(int a4, int a5, int a6, int a7);

int FUN_0c131c44(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t1;
    register float u4;
    register int t5;
    register int t8;
    register int t9;
    register float u10;
    register int t13;
    register int t24;
    register int t33;
    register int t38;
    register int t40;
    register float t47;
    register int t49;
    register float t52;
    register int t54;
    register int t57;
    register int t63;
    register int t64;
    register int t66;
    register int t71;
    register int t6;
    register int t7;
    register float u11;
    register int t67;
    register int t69;
    register int t72;
    register int t73;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -4.39473677f);
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 7.26315784f);
                u4 = (((struct o74_float *)(t0))->v);
                (((struct o74_float *)(t0))->v) = (u4 + -2.75f);
                t5 = 0xC0300000;
                t8 = 0xC;
                t9 = 0x4;
                u10 = (u4 + -2.75f);
                for (;;) {
                    if ((unsigned int)t9 >= (unsigned int)0x18) {
                        break;
                    }
                    t7 = 0xC2A15B4;
                    t5 = 0xC2A156C;
                    t6 = (*(int *)((((0xC4 + a4) + t9) + 0x0)));
                    t5 = (t5 + t8);
                    t7 = (t7 + t8);
                    *(int *)((int)stk + 0) = (0x78 + t6);
                    *(unsigned int *)(((int)stk + 4)) = t5;
                    t13 = *(short *)((a4 + 0x1C));
                    t6 = t13;
                    u11 = ((*(float *)((t5 + 0x0))) - (*(float *)((t7 + 0x0))));
                    u10 = (math_sin_angle16(((int)(((((float)(((t13 << 1) + t6) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    u11 = (u11 * u10);
                    t5 = (0x78 + t6);
                    u11 = (u11 * 65536.0f);
                    u11 = (u11 / 360.0f);
                    u11 = (u11 + 0.5f);
                    t6 = (int)u11;
                    t6 = (t6 & 0xFFFF);
                    *(unsigned int *)((t5 + 0x0)) = t6;
                    t6 = (*(int *)((((0xC4 + a4) + t9) + 0x0)));
                    *(int *)((int)stk + 0) = (0x7C + t6);
                    t5 = (*(int *)(((int)stk + 4)));
                    t24 = *(short *)((a4 + 0x1C));
                    t6 = t24;
                    u11 = (((((struct o4_float *)(t5))->v)) - ((((struct o4_float *)(t7))->v)));
                    u10 = (math_sin_angle16(((int)(((((float)(((t24 << 1) + t6) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    u11 = (u11 * u10);
                    t5 = (0x7C + t6);
                    u11 = (u11 * 65536.0f);
                    u11 = (u11 / 360.0f);
                    u11 = (u11 + 0.5f);
                    t6 = (int)u11;
                    t6 = (t6 & 0xFFFF);
                    *(unsigned int *)((t5 + 0x0)) = t6;
                    t6 = (*(int *)((((0xC4 + a4) + t9) + 0x0)));
                    *(int *)((int)stk + 0) = (0x80 + t6);
                    t5 = (*(int *)(((int)stk + 4)));
                    t33 = *(short *)((a4 + 0x1C));
                    t6 = t33;
                    u11 = (((((struct o8_float *)(t5))->v)) - ((((struct o8_float *)(t7))->v)));
                    u10 = (math_sin_angle16(((int)(((((float)(((t33 << 1) + t6) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    u11 = (u11 * u10);
                    t5 = (0x80 + t6);
                    t9 = (t9 + 0x4);
                    t8 = (t8 + 0xC);
                    u11 = (u11 * 65536.0f);
                    u11 = (u11 / 360.0f);
                    u11 = (u11 + 0.5f);
                    t6 = (int)u11;
                    t6 = (t6 & 0xFFFF);
                    *(unsigned int *)((t5 + 0x0)) = t6;
                }
                t38 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t38 + 0x1);
                t40 = (short)(t38 + 0x1);
                if ((int)(short)(t38 + 0x1) >= (int)0x78) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t40 = 0x14;
                }
                return t40;
            }
            return FUN_0c03f346(a4, a5, 0x4, a7);
        }
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -1.15909088f);
        t47 = math_sin_angle16(((int)(((((float)((int)((int)(((*(short *)((a4 + 0x1C))) << 2) << 2) % (int)0x168)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        (((struct o70_float *)(t0))->v) = (_builtin_fabsf(t47) * 20.0f);
        (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + -1.2954545f);
        t49 = *(short *)((a4 + 0x1C));
        t52 = math_sin_angle16(((int)(((((float)((int)((int)(((t49 << 2) + t49) << 2) % (int)0x168)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        (((struct o78_uint *)(t0))->v) = ((int)((((_builtin_fabsf(t52) * 3932160.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t54 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t54 + 0x1);
        t57 = (short)(t54 + 0x1);
        if ((int)(short)(t54 + 0x1) < (int)0x2C) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o78_uint *)(t0))->v) = 0x0;
            (((struct o7C_uint *)(t0))->v) = 0xA001;
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
            t57 = 0xD8;
        }
        return t57;
    }
    (((struct o6C_float *)(t0))->v) = 91.0f;
    (((struct o70_float *)(t0))->v) = 10.0f;
    (((struct o74_float *)(t0))->v) = 160.0f;
    (((struct o7C_uint *)(t0))->v) = 0x8FA6;
    t63 = 0x4;
    t64 = 0xC;
    for (;;) {
        if ((unsigned int)t63 >= (unsigned int)0x18) {
            break;
        }
        *(volatile int *)((((0xC4 + a4) + t63) + 0x0));
        t66 = ((int (*)(int, int, int))(FUN_0c187798))(t63, t64, 0xC2A14DC);
        t64 = t67;
        t63 = t69;
        *(volatile int *)((((0xC4 + a4) + t69) + 0x0));
        t71 = ((int (*)(int, int))(FUN_0c187798))(t63, t64);
        t63 = (t72 + 0x4);
        t64 = (t73 + 0xC);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
