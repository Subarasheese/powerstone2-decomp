/* Straight-line functions with calls and guards (batch gen_mp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int);
int FUN_0c064f80(int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d5838(int);
int FUN_0c0e2700(int, int, int, int);
int math_mat_get_translate(int, int);
int math_vec3_accumulate(int, int);
int nlAddVector3op(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0d59a8(int a4);

int FUN_0c0d59a8(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1C8180 + (((t0 << 1) + t0) << 2))); }
        (((struct oAA_uchar *)(a4))->v) = 0x0;
        (((struct oAB_uchar *)(a4))->v) = 0x0;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t1 = t0;
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
            t0 = (t0 + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                    t1 = FUN_0c064f80(a4);
                    if (t1 != 0) {
                    } else {
                        if ((*(float *)0xC541098) > ((((struct o2C_float *)(a4))->v))) {
                            return FUN_0c03f346(a4);
                        }
                        return 0x2C;
                    }
                } else {
                    return t0;
                }
            } else {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                u0 = (((struct o5C_float *)(a4))->v);
                u1 = (((struct o50_float *)(a4))->v);
                (((struct o50_float *)(a4))->v) = (u1 + u0);
                if (0.0f > (u1 + u0)) {
                    t0 = *(signed char *)((a4 + 0x2));
                    nlAddVector3op((a4 + 0x4C), (a4 + 0x4C), (0xC1C81BC + (((t0 << 1) + t0) << 2)));
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                if ((*(short *)((a4 + 0x1E))) != 0) {
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        (((struct o12A_ushort *)(a4))->v) = 0xF;
                        (((struct o12E_ushort *)(a4))->v) = 0xF0;
                    }
                }
                t0 = FUN_0c064f80(a4);
                if (t0 == 0) {
                    return t0;
                }
            }
            FUN_0c0e2700((a4 + 0x28), 0x6, 0xFFFFFFFF, 0x1);
            thunk_FUN_0c05abb2(0x4F, (a4 + 0x28));
            FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
            return FUN_0c03f346(a4);
        }
        t0 = *(signed char *)((0x15 + (*(int *)((a4 + 0x10)))));
        t1 = t0;
        if (t0 != 2) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
            (((struct oA4_uint *)(a4))->v) = 0x0;
            (((struct oAA_uchar *)(a4))->v) = 0x1;
            (((struct oAB_uchar *)(a4))->v) = 0x1;
            FUN_0c0d5838(a4);
            (((struct o5C_float *)(a4))->v) = -1.0f;
            *(unsigned short *)((a4 + 0x1E)) = 0xA;
            t1 = 0xA;
        }
        return t1;
    }
    if (((*(short *)((a4 + 0x1C))) & 4) != 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t1 = 0xA8;
    }
    return t1;
}
