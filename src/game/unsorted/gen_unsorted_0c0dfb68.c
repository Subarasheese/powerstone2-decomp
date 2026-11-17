/* game/unsorted: functions 0C0DFB68-0C0DFFB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3770_int { char p[0x3770]; int v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int FUN_0c0dfb68(int a4, int a5, int a6, int a7);

int FUN_0c0dfb68(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t9;
    register int t17;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t56;
    register int t57;
    register int t58;
    register int t61;
    register int t74;
    register int t98;
    register int t18;
    register int t65;
    register int t67;
    float u68;
    register int t69;
    register float u70;
    int t82;
    register int t83;
    int t91;

    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)0x4) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 2);
        *(unsigned int *)(((((int)stk + 0) + 0x10) + t2)) = t1;
        t1 = (t1 + 0x1);
    }
    t4 = t1;
    t5 = a5;
    t6 = a6;
    t7 = a7;
    t9 = 0xA;
    for (;;) {
        if (t9 == 0) {
            break;
        }
        t2 = (FUN_0c179ac0());
        if ((int)t2 >= 0) {
            t2 = (t2 & 0x3);
        } else {
            t2 = (~t2);
            t2 = (t2 + 0x1);
            t2 = (t2 & 0x3);
            t2 = (~t2);
            t2 = (t2 + 0x1);
        }
        t23 = t2;
        t2 = (FUN_0c179ac0());
        if ((int)t2 >= 0) {
            t2 = (t2 & 0x3);
        } else {
            t2 = (~t2);
            t2 = (t2 + 0x1);
            t2 = (t2 & 0x3);
            t2 = (~t2);
            t2 = (t2 + 0x1);
        }
        t6 = t2;
        t5 = t23;
        t6 = (t6 << 2);
        t4 = t2;
        t5 = (t5 << 2);
        t6 = (t6 + (((int)stk + 0) + 0x10));
        t5 = (t5 + (((int)stk + 0) + 0x10));
        t19 = (*(int *)((t6 + 0x0)));
        t7 = (*(int *)((t5 + 0x0)));
        t9 = (t9 - 1);
        *(unsigned int *)((t5 + 0x0)) = t19;
        *(unsigned int *)((t6 + 0x0)) = t7;
    }
    t17 = t2;
    t20 = t4;
    t21 = t7;
    t22 = 0x0;
    t24 = t9;
    t25 = 0xC179AC0;
    for (;;) {
        if ((int)t22 >= (int)0x3) {
            break;
        }
        t20 = t22;
        t20 = (t20 + 0x1);
        t21 = t20;
        t21 = (t21 << 2);
        t25 = t22;
        t21 = (t21 + (((int)stk + 0) + 0x10));
        t25 = (t25 << 2);
        t23 = t21;
        t24 = t21;
        t25 = (t25 + (((int)stk + 0) + 0x10));
        if ((int)t20 < (int)0x4) {
            t26 = 0x3;
            for (;;) {
                t17 = t20;
                t17 = (t17 << 2);
                t18 = 0x371D;
                t17 = (*(int *)(((((int)stk + 0) + 0x10) + t17)));
                t17 = (t17 * 0x3938);
                t17 = (t17 + 0xC532498);
                t17 = (*(signed char *)((t18 + t17)));
                if (t17 == 1) {
                    t17 = (*(int *)((t25 + 0x0)));
                    t26 = 0x371D;
                    t17 = (t17 * 0x3938);
                    t17 = (t17 + 0xC532498);
                    t17 = (*(signed char *)((t26 + t17)));
                    if (t17 != 1) {
                        t26 = (*(int *)((t21 + 0x0)));
                        *(unsigned int *)(((int)stk + 0)) = t26;
                        t19 = (*(int *)((t25 + 0x0)));
                        *(unsigned int *)((t21 + 0x0)) = t19;
                        t26 = (*(int *)(((int)stk + 0)));
                        *(unsigned int *)((t25 + 0x0)) = t26;
                    }
                }
                t17 = (*(int *)((t23 + 0x0)));
                t18 = 0x3715;
                t17 = (t17 * 0x3938);
                t17 = (t17 + 0xC532498);
                t17 = (*(signed char *)((t18 + t17)));
                if (t17 != 34) {
                    t17 = (*(int *)((t25 + 0x0)));
                    t26 = 0x3715;
                    t17 = (t17 * 0x3938);
                    t17 = (t17 + 0xC532498);
                    t17 = (*(signed char *)((t26 + t17)));
                    if (t17 == 34) {
                        t26 = (*(int *)((t24 + 0x0)));
                        *(unsigned int *)(((int)stk + 0)) = t26;
                        t19 = (*(int *)((t25 + 0x0)));
                        *(unsigned int *)((t24 + 0x0)) = t19;
                        t26 = (*(int *)(((int)stk + 0)));
                        *(unsigned int *)((t25 + 0x0)) = t26;
                    }
                }
                t20 = (t20 + 0x1);
                t23 = (t23 + 0x4);
                t24 = (t24 + 0x4);
                t21 = (t21 + 0x4);
                if ((int)t20 >= (int)0x4) {
                    break;
                }
            }
        }
        t22 = (t22 + 0x1);
    }
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t52 = 0x0;
    t53 = 0x3;
    t54 = (((int)stk + 0) + 0x10);
    t55 = (((int)stk + 0) + 0x10);
    t56 = t23;
    t57 = (((int)stk + 0) + 0x10);
    t58 = (((int)stk + 0) + 0x10);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) < (int)0x4) {
            t61 = *(int *)(((((int)stk + 0) + 0x10) + ((*(int *)(((int)stk + 0))) << 2)));
            if (!(((((struct o160_float *)(((t61 * 0x3938) + 0xC532498)))->v)) > 0.0f)) {
                t55 = (t55 + 0x4);
                t57 = (t57 + 0x4);
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                t58 = (t58 + 0x4);
                continue;
            }
            t54 = ((int)stk + 0);
            t53 = ((t61 * 0x3938) + 0xC532498);
            t54 = (t54 + 0x4);
            t53 = (t53 + 0x28);
            t52 = t54;
            FUN_0c187798(t54, 0x3938, 0xC532498);
            if ((((*(signed char *)((t65 + 0x371D))) == 1) && (u68 = (((struct o8_float *)(t67))->v), t54 = t67, -640.0f > u68)) || (u70 = (((struct o8_float *)(t69))->v), t54 = t69, -650.0f > u70)) {
                t74 = *(short *)((a4 + 0x1E));
                t56 = 0xC540978;
                t54 = 0x1;
                if (t74 == 0) {
                    t53 = (*(int *)((t57 + 0x0)));
                    t52 = t54;
                    (((struct o16_uchar *)(a4))->v) = t53;
                    t52 = ((int)t52 << (int)(*(int *)((t57 + 0x0))));
                    (((struct o22_ushort *)(t56))->v) = t52;
                    *(unsigned short *)((a4 + 0x1E)) = t54;
                    t54 = ((int)t54 << (int)(*(int *)((t57 + 0x0))));
                    (((struct o12E_ushort *)(a4))->v) = t54;
                    t54 = 0xC5421F8;
                    if ((*(signed char *)((t54 + 0x17F))) != 0) {
                        break;
                    }
                    t55 = (t55 + 0x4);
                    t57 = (t57 + 0x4);
                    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                    t58 = (t58 + 0x4);
                    continue;
                }
                if ((t74 == 1) && (t82 = *(int *)((t55 + 0x0)), t83 = *(signed char *)((a4 + 0x16)), t53 = t83, t53 != t82)) {
                    t52 = (*(int *)((t58 + 0x0)));
                    t53 = t54;
                    (((struct o17_uchar *)(a4))->v) = t52;
                    t52 = ((((struct o22_short *)(t56))->v));
                    t53 = ((int)t53 << (int)(*(int *)((t58 + 0x0))));
                    t52 = (t52 | t53);
                    t53 = t54;
                    (((struct o22_ushort *)(t56))->v) = t52;
                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                    t52 = ((((struct o12E_short *)(a4))->v));
                    t53 = ((int)t53 << (int)(*(int *)((t58 + 0x0))));
                    t52 = (t52 | t53);
                    (((struct o12E_ushort *)(a4))->v) = t52;
                    (((struct o12A_ushort *)(a4))->v) = ((~(*(short *)(((0x12A + a4) + 0x4)))) & 0xF);
                    if (((*(signed char *)((t65 + 0x371D))) == 1) && (t91 = (((struct o3770_int *)(t65))->v), t53 = t91, t53 != 0)) {
                        t53 = 0x22;
                        t53 = (t53 + t56);
                        t52 = (*(short *)((t53 + 0x0)));
                        t52 = (t52 | ((int)t54 << (int)(*(signed char *)((((((struct o3770_int *)(t65))->v)) + 0x1)))));
                        *(unsigned short *)((t53 + 0x0)) = t52;
                        t54 = ((int)t54 << (int)(*(signed char *)((((((struct o3770_int *)(t65))->v)) + 0x1))));
                        t98 = (((((struct o12E_short *)(a4))->v)) | t54);
                        t54 = 0x12A;
                        (((struct o12E_ushort *)(a4))->v) = t98;
                        t54 = (t54 + a4);
                        *(unsigned short *)((t54 + 0x0)) = ((~(*(short *)((t54 + 0x4)))) & 0xF);
                        return 0x1;
                    }
                    return 0x1;
                }
                t55 = (t55 + 0x4);
                t57 = (t57 + 0x4);
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                t58 = (t58 + 0x4);
                continue;
            }
            t55 = (t55 + 0x4);
            t57 = (t57 + 0x4);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
            t58 = (t58 + 0x4);
            continue;
        }
        return 0x0;
    }
    (((struct o12A_ushort *)(a4))->v) = ((~(*(short *)(((0x12A + a4) + 0x4)))) & 0xF);
    return 0x1;
}
