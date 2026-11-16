/* Straight-line functions with calls and guards (batch gen_ha): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c145d1c(int, int);
int FUN_0c179ac0(void);
int FUN_0c18778c(void);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c1464ce(int a4, int a5, int a6, int a7);

int FUN_0c1464ce(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= 0) && ((int)t0 <= (int)0x1)) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A23A0, 0xC2A2394, (*(short *)((a4 + 0x1C))), 0x1, 0x0);
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)0xA) && ((int)t0 <= (int)0x14)) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1000);
            FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x14) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    t0 = (*(int *)((0xC4B40E0 + (((*(signed char *)((a4 + 0x2))) << 2) << 1))));
    t1 = FUN_0c179ac0();
    t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1);
    }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (t2 + 0x3), 0xB, t0);
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x23F;
    *(volatile int *)((a4 + 0xC4));
    FUN_0c187798();
    *(volatile int *)((a4 + 0xC4));
    FUN_0c18778c();
    t0 = FUN_0c179ac0();
    t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0xF);
    }
    FUN_0c179ac0();
    u0 = (((float)t1 * 360.0f) / 16.0f);
    u1 = ((u0 * 65536.0f) / 360.0f);
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF))) * 10.0f);
    (((struct o50_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xA)) + 14.0f);
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF))) * 10.0f);
    (((struct o5C_float *)(a4))->v) = -1.0f;
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= 0) && ((int)t0 <= (int)0x1)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A23A0, 0xC2A2394, (*(short *)((a4 + 0x1C))), 0x1, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0xA) && ((int)t0 <= (int)0x14)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), 0x14, 0xA);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = (((struct oC4_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1000);
    FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x14) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
