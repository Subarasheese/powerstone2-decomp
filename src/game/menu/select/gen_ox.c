/* Straight-line functions with calls and guards (batch gen_ox): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int FUN_0c11a518(int a4, int a5, int a6, int a7);

int FUN_0c11a518(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t6 = *(signed char *)((a4 + 0x14));
    if (t6 != 0) {
        if (t6 == 1) {
        } else {
            if (t6 == 99) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t6;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x24, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x24, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x2, 0x24, (*(int *)0xC4B410C));
        t6 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t6 + 0x6)) = ((*(short *)((t6 + 0x6))) | 0x200);
        t6 = (((struct oC8_int *)(a4))->v);
        *(unsigned short *)((t6 + 0x6)) = ((*(short *)((t6 + 0x6))) | 0x200);
        t6 = (((struct oCC_int *)(a4))->v);
        *(unsigned short *)((t6 + 0x6)) = ((*(short *)((t6 + 0x6))) | 0x200);
        u0 = (((struct o3C_float *)0xC291EA0)->v);
        t6 = (int)((int)(nlRand()) % (int)((((struct o34_int *)0xC291EA0)->v)));
        t7 = (((struct o34_int *)0xC291EA0)->v);
        u1 = (((float)((int)((int)(nlRand()) % (int)((((struct o34_int *)0xC291EA0)->v)))) * 360.0f) / (float)((((struct o34_int *)0xC291EA0)->v)));
        u2 = ((u1 * 65536.0f) / 360.0f);
        u1 = ((u0 * (float)t6) / (float)t7);
        u3 = ((((struct o28_float *)(a4))->v));
        u3 = u3 + u1 * (math_cos_angle16(((int)(u2 + 0.5f) & 0xFFFF)));
        (((struct o28_float *)(a4))->v) = u3;
        u1 = ((u0 * (float)t6) / (float)t7);
        u0 = ((((struct o2C_float *)(a4))->v));
        u0 = u0 + u1 * (math_sin_angle16(((int)(u2 + 0.5f) & 0xFFFF)));
        (((struct o2C_float *)(a4))->v) = u0;
        u0 = (((float)((int)((int)(nlRand()) % (int)((((struct o34_int *)0xC291EA0)->v)))) * 360.0f) / (float)((((struct o34_int *)0xC291EA0)->v)));
        u1 = math_sin_angle16((0xFFFF & (int)((((u0 * 65536.0f) / 360.0f)) + 0.5f)));
        u0 = 100.0f;
        u0 = u0 + 20.0f * u1;
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + u0);
        nlAddVector3op((a4 + 0x28), (a4 + 0x28), 0xC291EE0);
    }
    t6 = *(short *)((a4 + 0x1C));
    if (((int)t6 >= (int)((((struct o0_int *)0xC291EA0)->v))) && (t0 = (((struct o4_int *)0xC291EA0)->v), (int)t6 <= (int)t0)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o4_int *)0xC291EA0)->v))), (((((struct o0_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o8_int *)0xC291EA0)->v))) && (t1 = (((struct oC_int *)0xC291EA0)->v), (int)t0 <= (int)t1)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC291EA0)->v))), (((((struct o8_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o10_int *)0xC291EA0)->v))) && (t2 = (((struct o14_int *)0xC291EA0)->v), (int)t0 <= (int)t2)) {
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC291EA0)->v))), (((((struct o10_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o18_int *)0xC291EA0)->v))) && (t3 = (((struct o1C_int *)0xC291EA0)->v), (int)t0 <= (int)t3)) {
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o1C_int *)0xC291EA0)->v))), (((((struct o18_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o20_int *)0xC291EA0)->v))) && (t4 = (((struct o24_int *)0xC291EA0)->v), (int)t0 <= (int)t4)) {
        FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o24_int *)0xC291EA0)->v))), (((((struct o20_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o28_int *)0xC291EA0)->v))) && (t5 = (((struct o2C_int *)0xC291EA0)->v), (int)t0 <= (int)t5)) {
        FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o2C_int *)0xC291EA0)->v))), (((((struct o28_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o30_int *)0xC291EA0)->v))) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}
