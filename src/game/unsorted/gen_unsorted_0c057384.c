/* game/unsorted: functions 0C057384-0C0579BE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int nlSelectMatrixStack(int);
int nlUnitMatrix(void);
int FUN_0c17df90(int, int);
int nlObjPut(int);
int nlObjPutTrnsl(int, float);
int FUN_0c17e740(float, float, float);
extern int FUN_0c18778c();
int FUN_0c187798(void);
int FUN_0c057384(void);
int FUN_0c05738e(int a4, int a5, int a6, int a7);
int FUN_0c0573c0(int a4, int a5, int a6);
int FUN_0c0573cc(int a4, int a5, int a6);
int FUN_0c0573d8(void);
int FUN_0c0573e6(void);
int FUN_0c057402(float f4, float f5);

int FUN_0c057384(void)
{
    return FUN_0c17df90(0xC1BFA20, 0xC1BFB18);
}

int FUN_0c05738e(int a4, int a5, int a6, int a7)
{
    (((struct o4_uint *)0xC54244C)->v) = a4;
    (((struct o0_uchar *)0xC54244C)->v) = a5;
    (((struct o1_uchar *)0xC54244C)->v) = a6;
    (((struct o2_uchar *)0xC54244C)->v) = a7;
    (((struct o3_uchar *)0xC54244C)->v) = a7;
    if ((signed char)a5 != 0) {
        (((struct o3_uchar *)0xC54244C)->v) = ((*(signed char *)0xC54244F) + 0x1);
    }
    if ((*(signed char *)0xC54244E) == 0) {
        (((struct o2_uchar *)0xC54244C)->v) = 0x1;
    }
    return 0x1E;
}

int FUN_0c0573c0(int a4, int a5, int a6)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a6;
    return FUN_0c05738e(a4, a5, 0x0, (*(signed char *)(((int)stk + 0))));
}

int FUN_0c0573cc(int a4, int a5, int a6)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a6;
    return FUN_0c05738e(a4, a5, 0x1, (*(signed char *)(((int)stk + 0))));
}

int FUN_0c0573d8(void)
{
    (((struct o0_uchar *)0xC54244D)->v) = 0x0;
    (((struct o2_uchar *)0xC54244D)->v) = 0x0;
    return 0x1F;
}

int FUN_0c0573e6(void)
{
    int t1;

    if (((*(signed char *)0xC54244D) == 1) && (t1 = *(signed char *)0xC54244F, t1 != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c057402(float f4, float f5)
{
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;
    register float u2;

    nlSelectMatrixStack(0x1);
    nlUnitMatrix();
    t4 = 0x1F;
    if ((*(signed char *)0xC54244F) == 0) {
    } else {
        t5 = *(signed char *)0xC54244E;
        t6 = *(signed char *)0xC54244C;
        if (t6 != 0) {
            if (t6 == 1) {
                if ((*(signed char *)0xC54244D) == 0) {
                    u0 = ((float)(*(signed char *)0xC54244F) / (float)(signed char)t5);
                } else {
                    u1 = ((float)((*(signed char *)0xC54244F) - 1) / (float)(signed char)t5);
                    u1 = -u1;
                    u0 = (u1 + 1.0f);
                }
                (((struct oC_float *)0xC40FA58)->v) = -320.0f;
                (((struct o0_float *)0xC40FA58)->v) = -320.0f;
                (((struct o24_float *)0xC40FA58)->v) = 320.0f;
                (((struct o18_float *)0xC40FA58)->v) = 320.0f;
                (((struct o2C_float *)0xC40FA58)->v) = -100.0f;
                (((struct o20_float *)0xC40FA58)->v) = -100.0f;
                (((struct o14_float *)0xC40FA58)->v) = -100.0f;
                (((struct o8_float *)0xC40FA58)->v) = -100.0f;
                (((struct o0_uint *)0xC40FA58)->v) = (((((struct o0_int *)0xC40FA58)->v)) | 0x1);
                (((struct oC_uint *)0xC40FA58)->v) = (((((struct oC_int *)0xC40FA58)->v)) | 0x1);
                (((struct o18_uint *)0xC40FA58)->v) = (((((struct o18_int *)0xC40FA58)->v)) | 0x1);
                (((struct o24_uint *)0xC40FA58)->v) = (((((struct o24_int *)0xC40FA58)->v)) | 0x1);
                t7 = *(int *)0xC542450;
                u1 = (float)((unsigned int)(t7 & 0xFF0000) >> 16);
                if ((int)((unsigned int)(t7 & 0xFF0000) >> 16) < 0) {
                    u1 = ((float)((unsigned int)(t7 & 0xFF0000) >> 16) + 4.2949673e+09f);
                }
                (((struct o34_float *)0xC40FA58)->v) = (u1 / 255.0f);
                t7 = *(int *)0xC542450;
                u1 = (float)((unsigned int)(t7 & 0xFF00) >> 8);
                if ((int)((unsigned int)(t7 & 0xFF00) >> 8) < 0) {
                    u1 = ((float)((unsigned int)(t7 & 0xFF00) >> 8) + 4.2949673e+09f);
                }
                (((struct o38_float *)0xC40FA58)->v) = (u1 / 255.0f);
                t7 = *(int *)0xC542450;
                u1 = (float)(unsigned char)t7;
                if ((int)(unsigned char)t7 < 0) {
                    u1 = ((float)(unsigned char)t7 + 4.2949673e+09f);
                }
                (((struct o3C_float *)0xC40FA58)->v) = (u1 / 255.0f);
                t7 = ((int (*)(int, int, int, int, float, float, float, float))(FUN_0c18778c))(0xC40FA88, 0xC40FA64, 0xC40FA70, 0xC40FA58, 255.0f, 640.0f, 320.0f, -320.0f);
                (((struct o0_float *)0xC1BFA34)->v) = f5;
                (((struct o20_float *)0xC1BFA34)->v) = f5;
                FUN_0c17e740(1.0f, 1.0f, 1.0f);
                if (0x1 == 0) {
                } else {
                    u1 = -37.5f;
                    for (;;) {
                        u2 = (u0 * 3.125f);
                        (((struct o1C_float *)0xC40FA58)->v) = u1;
                        (((struct o4_float *)0xC40FA58)->v) = u1;
                        (((struct o28_float *)0xC40FA58)->v) = (u2 + u1);
                        (((struct o10_float *)0xC40FA58)->v) = (u2 + u1);
                        t7 = ((int (*)(void))(FUN_0c187798))();
                        t7 = ((int (*)(void))(FUN_0c187798))();
                        t7 = ((int (*)(void))(FUN_0c187798))();
                        t7 = ((int (*)(void))(FUN_0c187798))();
                        nlObjPut(0xC1BFA20);
                        u1 = (u1 + 3.125f);
                        if (!(37.5f > u1)) {
                            break;
                        }
                    }
                }
            } else {
                if (t6 == 2) {
                    *(volatile signed char *)0xC54244D;
                } else {
                    if (t6 == 3) {
                        if ((*(signed char *)0xC54244D) == 0) {
                            u0 = ((float)(*(signed char *)0xC54244F) / (float)(signed char)t5);
                        } else {
                            u1 = ((float)((*(signed char *)0xC54244F) - 1) / (float)(signed char)t5);
                            u1 = -u1;
                            u0 = (u1 + 1.0f);
                        }
                        (((struct o0_float *)0xC40FA58)->v) = (u0 + -0.5f);
                        (((struct o18_float *)0xC40FA58)->v) = -0.5f;
                        (((struct oC_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o24_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o10_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o4_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o28_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o1C_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o2C_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o20_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o14_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o8_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o0_uint *)0xC40FA58)->v) = (((((struct o0_int *)0xC40FA58)->v)) | 0x1);
                        (((struct oC_uint *)0xC40FA58)->v) = (((((struct oC_int *)0xC40FA58)->v)) | 0x1);
                        (((struct o18_uint *)0xC40FA58)->v) = (((((struct o18_int *)0xC40FA58)->v)) | 0x1);
                        (((struct o24_uint *)0xC40FA58)->v) = (((((struct o24_int *)0xC40FA58)->v)) | 0x1);
                        t6 = *(int *)0xC542450;
                        u1 = (float)((unsigned int)(t6 & 0xFF0000) >> 16);
                        if ((int)((unsigned int)(t6 & 0xFF0000) >> 16) < 0) {
                            u1 = ((float)((unsigned int)(t6 & 0xFF0000) >> 16) + 4.2949673e+09f);
                        }
                        (((struct o34_float *)0xC40FA58)->v) = (u1 / 255.0f);
                        t6 = *(int *)0xC542450;
                        u1 = (float)((unsigned int)(t6 & 0xFF00) >> 8);
                        if ((int)((unsigned int)(t6 & 0xFF00) >> 8) < 0) {
                            u1 = ((float)((unsigned int)(t6 & 0xFF00) >> 8) + 4.2949673e+09f);
                        }
                        (((struct o38_float *)0xC40FA58)->v) = (u1 / 255.0f);
                        t6 = *(int *)0xC542450;
                        u1 = (float)(unsigned char)t6;
                        if ((int)(unsigned char)t6 < 0) {
                            u1 = ((float)(unsigned char)t6 + 4.2949673e+09f);
                        }
                        (((struct o3C_float *)0xC40FA58)->v) = (u1 / 255.0f);
                        t6 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c18778c))(0xC40FA88, (signed char)t5, 0xC40FA58, 255.0f, 640.0f, 320.0f, -320.0f);
                        (((struct o0_float *)0xC1BFA34)->v) = f5;
                        (((struct o20_float *)0xC1BFA34)->v) = f5;
                        FUN_0c17e740(1.0f, 1.0f, 1.0f);
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        nlObjPut(0xC1BFA20);
                        (((struct oC_float *)0xC40FA58)->v) = (0.5f - u0);
                        (((struct o24_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o18_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o0_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o4_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o1C_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o10_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o28_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o0_uint *)0xC40FA58)->v) = (((((struct o0_int *)0xC40FA58)->v)) | 0x1);
                        (((struct oC_uint *)0xC40FA58)->v) = (((((struct oC_int *)0xC40FA58)->v)) | 0x1);
                        (((struct o18_uint *)0xC40FA58)->v) = (((((struct o18_int *)0xC40FA58)->v)) | 0x1);
                        (((struct o24_uint *)0xC40FA58)->v) = (((((struct o24_int *)0xC40FA58)->v)) | 0x1);
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        t6 = ((int (*)(void))(FUN_0c187798))();
                        nlObjPut(0xC1BFA20);
                    }
                }
            }
        } else {
            if ((*(signed char *)0xC54244D) == 0) {
                u0 = ((float)(*(signed char *)0xC54244F) / (float)(signed char)t5);
            } else {
                u1 = ((float)((*(signed char *)0xC54244F) - 1) / (float)(signed char)t5);
                u1 = -u1;
                u0 = (u1 + 1.0f);
            }
            (((struct oC_float *)0xC40FA58)->v) = -320.0f;
            (((struct o0_float *)0xC40FA58)->v) = -320.0f;
            (((struct o24_float *)0xC40FA58)->v) = 320.0f;
            (((struct o18_float *)0xC40FA58)->v) = 320.0f;
            (((struct o1C_float *)0xC40FA58)->v) = -240.0f;
            (((struct o4_float *)0xC40FA58)->v) = -240.0f;
            (((struct o28_float *)0xC40FA58)->v) = 240.0f;
            (((struct o10_float *)0xC40FA58)->v) = 240.0f;
            (((struct o2C_float *)0xC40FA58)->v) = -1.0f;
            (((struct o20_float *)0xC40FA58)->v) = -1.0f;
            (((struct o14_float *)0xC40FA58)->v) = -1.0f;
            (((struct o8_float *)0xC40FA58)->v) = -1.0f;
            (((struct o0_uint *)0xC40FA58)->v) = (((((struct o0_int *)0xC40FA58)->v)) | 0x1);
            (((struct oC_uint *)0xC40FA58)->v) = (((((struct oC_int *)0xC40FA58)->v)) | 0x1);
            (((struct o18_uint *)0xC40FA58)->v) = (((((struct o18_int *)0xC40FA58)->v)) | 0x1);
            (((struct o24_uint *)0xC40FA58)->v) = (((((struct o24_int *)0xC40FA58)->v)) | 0x1);
            t5 = ((int (*)(int, int, int))(FUN_0c187798))(0xC40FA88, 0xC40FA58, 0xC40FA70);
            t5 = ((int (*)(void))(FUN_0c187798))();
            t5 = ((int (*)(int, int, int))(FUN_0c187798))(0x0, 0x0, t4);
            t4 = ((int (*)(void))(FUN_0c187798))();
            t4 = *(int *)0xC542450;
            u1 = (float)((unsigned int)(t4 & 0xFF0000) >> 16);
            if ((int)((unsigned int)(t4 & 0xFF0000) >> 16) < 0) {
                u1 = ((float)((unsigned int)(t4 & 0xFF0000) >> 16) + 4.2949673e+09f);
            }
            (((struct o4_float *)(t1))->v) = (u1 / f4);
            t4 = *(int *)0xC542450;
            u1 = (float)((unsigned int)(t4 & 0xFF00) >> 8);
            if ((int)((unsigned int)(t4 & 0xFF00) >> 8) < 0) {
                u1 = ((float)((unsigned int)(t4 & 0xFF00) >> 8) + 4.2949673e+09f);
            }
            (((struct o8_float *)(t1))->v) = (u1 / f4);
            t4 = *(int *)0xC542450;
            u1 = (float)(unsigned char)t4;
            if ((int)(unsigned char)t4 < 0) {
                u1 = ((float)(unsigned char)t4 + 4.2949673e+09f);
            }
            (((struct oC_float *)(t1))->v) = (u1 / f4);
            *(float *)((t1 + 0x0)) = 1.0f;
            t4 = ((int (*)(int, float))(FUN_0c18778c))(t1, f4);
            (((struct o0_float *)0xC1BFA34)->v) = f5;
            (((struct o20_float *)0xC1BFA34)->v) = f5;
            FUN_0c17e740(1.0f, 1.0f, 1.0f);
            nlObjPutTrnsl(0xC1BFA20, u0);
        }
        if (((*(signed char *)0xC54208F) == 0) && ((t2 = *(signed char *)0xC542092, t2 == 0) && (t3 = *(signed char *)0xC478BFC, t3 == 0))) {
            (((struct o0_uchar *)0xC54244F)->v) = ((*(signed char *)0xC54244F) - 1);
        }
        t4 = 0x1F;
        if ((*(signed char *)0xC54244F) == 0) {
            t1 = 0x1D;
            if ((*(signed char *)0xC54244D) != 0) {
                (((struct o0_uchar *)0xC54244F)->v) = 0x1;
                t1 = 0x1F;
            }
            t4 = t1;
        }
    }
    return t4;
}
