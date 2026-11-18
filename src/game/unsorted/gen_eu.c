/* Straight-line functions with calls and guards (batch gen_eu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c17c450(int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlSubVector3op(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0f8ea8(int a4);
int FUN_0c0d805c(int a4);

int FUN_0c0f8ea8(int a4)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t16;
    register int t18;
    register float u24;
    register int t25;
    register int t29;
    register int t57;
    register int t59;
    register int t74;
    register int t76;
    register int t83;

    t0 = *(signed char *)0xC5421DC;
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t3 = (((struct o22_short *)(a4))->v);
        *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC28E530 + (((t3 << 1) + t3) << 2))));
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    nlSubVector3op(((int)stk + 0), ((0xEC + (((short)t0 * (short)0x2F8) + 0xC5410FC)) + 0xC), ((0xBC + (((short)t0 * (short)0x2F8) + 0xC5410FC)) + 0xC));
    FUN_0c17c450(((int)stk + 0));
    math_vec3_mul_xyz(((int)stk + 0), 640.0f, 640.0f, 640.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC8 + (((short)t0 * (short)0x2F8) + 0xC5410FC))); }
    nlAddVector3op((a4 + 0x28), (a4 + 0x28), ((int)stk + 0));
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    t16 = *(signed char *)((a4 + 0x15));
    if (t16 != 0) {
        if (t16 != 1) {
            t83 = t16;
            if (t16 != 2) {
            } else {
                (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x20))) & 0x1);
                t18 = (((struct o22_short *)(a4))->v);
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - (0.5f / (float)(*(int *)((((((t18 << 1) + t18) << 2) + 0xC28E530) + 0x8)))));
                if (0.0f > ((((struct oBC_float *)(a4))->v))) {
                    (((struct oBC_float *)(a4))->v) = 0.0f;
                }
                u24 = (((struct oBC_float *)(a4))->v);
                (((struct oB8_float *)(a4))->v) = u24;
                (((struct oB4_float *)(a4))->v) = u24;
                t25 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t25 - 1);
                t83 = (short)(t25 - 1);
                if ((int)(short)(t25 - 1) <= 0) {
                    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                    if ((unsigned int)((((struct o22_short *)(a4))->v)) > (unsigned int)0x5) {
                        t83 = (FUN_0c03f346(a4));
                    } else {
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        t29 = (((struct o22_short *)(a4))->v);
                        *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC28E530 + (((t29 << 1) + t29) << 2))));
                        (((struct oBC_float *)(a4))->v) = 0.0f;
                        (((struct oB8_float *)(a4))->v) = 0.0f;
                        (((struct oB4_float *)(a4))->v) = 0.0f;
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                        t83 = 0xA8;
                    }
                }
            }
        } else {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x20))) & 0x1);
            t57 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t57 - 1);
            t83 = (short)(t57 - 1);
            if ((int)(short)(t57 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t59 = (((struct o22_short *)(a4))->v);
                *(unsigned short *)((a4 + 0x1C)) = (*(short *)((((((t59 << 1) + t59) << 2) + 0xC28E530) + 0x8)));
                (((struct oBC_float *)(a4))->v) = 0.5f;
                (((struct oB8_float *)(a4))->v) = 0.5f;
                (((struct oB4_float *)(a4))->v) = 0.5f;
                t83 = 0xB4;
            }
        }
    } else {
        t74 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t74 - 1);
        t83 = (short)(t74 - 1);
        if ((int)(short)(t74 - 1) > 0) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t76 = (((struct o22_short *)(a4))->v);
            *(unsigned short *)((a4 + 0x1C)) = (*(short *)((((((t76 << 1) + t76) << 2) + 0xC28E530) + 0x4)));
            (((struct oBC_float *)(a4))->v) = 0.5f;
            (((struct oB8_float *)(a4))->v) = 0.5f;
            (((struct oB4_float *)(a4))->v) = 0.5f;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t83 = 0xA8;
        }
    }
    return t83;
}

int FUN_0c0d805c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c037320(0x34, (*(int *)0xC4B410C));
        t2 = FUN_0c03f444(0x5, 0x0, t1);
        if (t2 != 0) {
            *(unsigned int *)((t2 + 0x4)) = 0xC0D827E;
            *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t2 + 0x2)) = t0;
            FUN_0c03733c(t2, 0x34, (*(int *)0xC4B410C));
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            u0 = -500.0f;
            u0 = u0 + 90.0f * (float)t0;
            (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) + u0);
            *(unsigned int *)((t2 + 0x38)) = 0x0;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            *(unsigned int *)((t2 + 0x34)) = 0x0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xC) {
            break;
        }
    }
    t0 = 0xC;
    for (;;) {
        t1 = FUN_0c037320(0x35, (*(int *)0xC4B410C));
        t2 = FUN_0c03f444(0x5, 0x0, t1);
        if (t2 != 0) {
            *(unsigned int *)((t2 + 0x4)) = 0xC0D827E;
            *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t2 + 0x2)) = t0;
            FUN_0c03733c(t2, 0x35, (*(int *)0xC4B410C));
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            if ((int)t0 < (int)0xF) {
                u0 = -300.0f;
                u0 = u0 + 300.0f * ((float)(t0 - 12));
                (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) + u0);
                u0 = (((((struct o30_float *)(t2))->v)) + 100.0f);
            } else {
                u1 = -300.0f;
                u1 = u1 + 300.0f * ((float)(t0 - 15));
                (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) + u1);
                u0 = (((((struct o30_float *)(t2))->v)) - 100.0f);
            }
            (((struct o30_float *)(t2))->v) = u0;
            *(unsigned int *)((t2 + 0x38)) = 0x0;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            *(unsigned int *)((t2 + 0x34)) = 0x0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x12) {
            break;
        }
    }
    t0 = 0x12;
    for (;;) {
        t1 = FUN_0c037320(0x36, (*(int *)0xC4B410C));
        t2 = FUN_0c03f444(0x5, 0x0, t1);
        if (t2 != 0) {
            *(unsigned int *)((t2 + 0x4)) = 0xC0D827E;
            *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t2 + 0x2)) = t0;
            FUN_0c03733c(t2, 0x36, (*(int *)0xC4B410C));
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            if ((int)t0 < (int)0x15) {
                u0 = -300.0f;
                u0 = u0 + 300.0f * ((float)(t0 - 18));
                (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) + u0);
                u0 = (((((struct o30_float *)(t2))->v)) + 100.0f);
            } else {
                u1 = -300.0f;
                u1 = u1 + 300.0f * ((float)(t0 - 21));
                (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) + u1);
                u0 = (((((struct o30_float *)(t2))->v)) - 100.0f);
            }
            (((struct o30_float *)(t2))->v) = u0;
            *(unsigned int *)((t2 + 0x38)) = 0x0;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            *(unsigned int *)((t2 + 0x34)) = 0x0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x18) {
            break;
        }
    }
    return thunk_FUN_0c05abb2(0x40, 0x0);
}
