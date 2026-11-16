/* Straight-line functions with calls and guards (batch gen_pp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037bf6(int, int);
int FUN_0c03f346(int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c14b560(int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c09b7ec(int a4, int a5);
int FUN_0c14b584(int a4);

int FUN_0c09b7ec(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = a5;
    if ((int)(short)(t0 - 1) <= (int)0x10) {
        t0 = *(int *)((a4 + 0x38));
        t2 = FUN_0c07d774(a4);
        t3 = (unsigned short)(t0 - t2);
        if ((0x8000 & (unsigned short)(t0 - t2)) != 0) {
            t3 = ((unsigned short)(t0 - t2) | 0xFFFF0000);
        }
        if (((int)t3 <= (int)0xFFFFF8E4) || ((int)t3 >= (int)0x71C)) {
            if ((int)t3 < 0) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
            } else {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x71C);
            }
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) & 0xFFFF);
            t0 = 0x71C;
        }
        t1 = t0;
    }
    t0 = FUN_0c037bf6(a4, t1);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x0, 0x0, (t0), 0x0, 0x0);
        t0 = (((struct o118_int *)(a4))->v);
        t2 = *(short *)((a4 + 0x1C));
        (((struct o98_float *)(t0))->v) = (float)(signed char)t2;
        (((struct o94_float *)(t0))->v) = (float)(signed char)t2;
        t0 = (((struct o11C_int *)(a4))->v);
        t2 = *(short *)((a4 + 0x1C));
        (((struct o98_float *)(t0))->v) = (float)(signed char)t2;
        (((struct o94_float *)(t0))->v) = (float)(signed char)t2;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c14b584(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x23;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x3;
    }
    t0 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o22_ushort *)(a4))->v) = 0x3;
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        if ((int)((((struct o20_short *)(a4))->v)) > (int)0x3) {
            (((struct o20_ushort *)(a4))->v) = 0x0;
        }
        FUN_0c14b560((*(signed char *)((a4 + 0x1))), ((((struct oC4_int *)(a4))->v)), 0xA, ((((struct o20_short *)(a4))->v)));
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c03f346(a4);
    }
    return (short)(t0 - 1);
}
