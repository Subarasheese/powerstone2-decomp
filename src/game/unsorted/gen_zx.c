/* Straight-line functions with calls and guards (batch gen_zx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c03f346(int, int, int, int);
extern int FUN_0c03f444();
int FUN_0c11e964(int);
int FUN_0c11ea4e(int);
int FUN_0c11990c(int a4);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };


int FUN_0c11990c(int a4)
{
    int t0;
    int t1;

    t0 = (((struct o20_int *)0xC474714)->v);
    (((struct o41C_uint *)(a4))->v) = t0;
    t1 = FUN_0c11ea4e(t0);
    (((struct o0_uint *)0xC474714)->v) = t1;
    if (((((((struct o41C_int *)(a4))->v)) & 0x100) != 0) && (t1 == 0)) {
    } else {
        FUN_0c11e964(((((struct o41C_int *)(a4))->v)));
    }
    if ((int)((((struct o0_int *)0xC474404)->v)) < 0) {
        (((struct o0_uint *)0xC474404)->v) = 0x0;
        (((struct o8_uint *)0xC474404)->v) = 0x0;
    }
    t0 = (((struct o0_int *)0xC474714)->v);
    if ((int)((((struct o0_int *)0xC474404)->v)) >= (int)t0) {
        (((struct o0_uint *)0xC474404)->v) = (t0 - 1);
        (((struct o8_uint *)0xC474404)->v) = (t0 - 1);
        if ((int)(t0 - 1) >= (int)0x5) {
            (((struct o8_uint *)0xC474404)->v) = 0x4;
        }
        (((struct o4_uint *)0xC474404)->v) = ((((struct o0_int *)0xC474404)->v));
    }
    t0 = (((struct o4_int *)0xC474404)->v);
    t1 = (((struct o0_int *)0xC474404)->v);
    if ((int)t1 < (int)t0) {
        if ((int)t1 <= (int)(t0 - 5)) {
            (((struct o8_uint *)0xC474404)->v) = 0x0;
        } else {
            (((struct o8_uint *)0xC474404)->v) = (((((struct o8_int *)0xC474404)->v)) - 1);
        }
    }
    t0 = (((struct o4_int *)0xC474404)->v);
    t1 = (((struct o0_int *)0xC474404)->v);
    if ((int)t1 > (int)t0) {
        if ((int)t1 >= (int)(t0 + 0x5)) {
            (((struct o8_uint *)0xC474404)->v) = 0x4;
        } else {
            (((struct o8_uint *)0xC474404)->v) = (((((struct o8_int *)0xC474404)->v)) + 0x1);
        }
    }
    if (((((struct o0_int *)0xC474404)->v)) == 0) {
        (((struct o8_uint *)0xC474404)->v) = 0x0;
    }
    if ((int)((((struct o8_int *)0xC474404)->v)) < 0) {
        (((struct o8_uint *)0xC474404)->v) = 0x0;
    }
    if ((int)((((struct o8_int *)0xC474404)->v)) > (int)0x4) {
        (((struct o8_uint *)0xC474404)->v) = 0x4;
    }
    (((struct o4_uint *)0xC474404)->v) = ((((struct o0_int *)0xC474404)->v));
    if (((((struct o0_int *)0xC474714)->v)) != 0) {
        *(unsigned short *)(((0x41C + a4) + 0x8)) = ((((struct o0_int *)0xC474404)->v));
        *(unsigned short *)(((0x41C + a4) + 0xA)) = ((((struct o4_int *)0xC474404)->v));
        *(unsigned short *)(((0x41C + a4) + 0xC)) = ((((struct o8_int *)0xC474404)->v));
        *(unsigned short *)(((0x41C + a4) + 0xE)) = ((((struct o0_int *)0xC474714)->v));
    } else {
        (((struct o0_uint *)0xC474404)->v) = 0x0;
        (((struct o4_uint *)0xC474404)->v) = 0x0;
        (((struct o8_uint *)0xC474404)->v) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0xA)) = ((((struct o4_int *)0xC474404)->v));
        *(unsigned short *)(((0x41C + a4) + 0xC)) = ((((struct o8_int *)0xC474404)->v));
    }
    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                return t0;
            }
            if (t0 != 10) {
                if (t0 == 11) {
                } else {
                    if (t0 == 80) {
                        return FUN_0c03f346(a4, 0xC474404, 0xC474408, 0x4);
                    }
                    t1 = t0;
                    if (t0 == 99) {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                        t1 = 0x14;
                    }
                    return t1;
                }
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                (((struct o4C_float *)(a4))->v) = -25.0f;
            }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            t0 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x10) {
                (((struct o14_uchar *)(a4))->v) = 0x50;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        t0 = ((int (*)(int, int, int, int))(FUN_0c03f444))(0x8, 0x0, 0x1, 0x4);
        if (t0 != 0) {
            (((struct o1_uchar *)(t0))->v) = 0xFFFFFFFF;
            (((struct o4_uint *)(t0))->v) = 0xC11929C;
            (((struct o10_uint *)(t0))->v) = a4;
        }
        t0 = ((int (*)(int, int, int))(FUN_0c03f444))(0x8, 0x1, 0x1);
        if (t0 != 0) {
            (((struct o1_uchar *)(t0))->v) = 0xFFFFFFFF;
            (((struct o4_uint *)(t0))->v) = 0xC1193C8;
            (((struct o10_uint *)(t0))->v) = a4;
        }
        t0 = ((int (*)(int, int, int))(FUN_0c03f444))(0x8, 0x1, 0x1);
        if (t0 != 0) {
            (((struct o1_uchar *)(t0))->v) = 0xFFFFFFFF;
            (((struct o4_uint *)(t0))->v) = 0xC1194D0;
            (((struct o10_uint *)(t0))->v) = a4;
        }
        t0 = ((int (*)(int, int, int))(FUN_0c03f444))(0x8, 0x2, 0xA);
        if (t0 != 0) {
            (((struct o1_uchar *)(t0))->v) = 0xFFFFFFFF;
            (((struct o4_uint *)(t0))->v) = 0xC1195D4;
            (((struct o10_uint *)(t0))->v) = a4;
        }
        if ((*(signed char *)(((0x41C + a4) + 0x4))) == 3) {
            t0 = ((int (*)(int, int, int))(FUN_0c03f444))(0x8, 0x1, 0xA);
            if (t0 != 0) {
                (((struct o1_uchar *)(t0))->v) = 0xFFFFFFFF;
                (((struct o4_uint *)(t0))->v) = 0xC11978C;
                (((struct o10_uint *)(t0))->v) = a4;
            }
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 400.0f);
        (((struct o4C_float *)(a4))->v) = 25.0f;
    }
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    t0 = (((struct o1C_short *)(a4))->v);
    (((struct o1C_ushort *)(a4))->v) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}
