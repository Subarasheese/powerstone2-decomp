/* Straight-line functions with calls and guards (batch gen_kg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c163358(int a4, int a5, int a6, int a7);

int FUN_0c163358(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (~((int)0x1 << (int)a6));
    if ((int)a6 < 0) {
        t0 = 0xF;
    }
    t1 = 0x5;
    if (a7 != 0) {
        t1 = 0x1;
    }
    t2 = FUN_0c03f444(t1, 0x0, 0x1);
    t1 = t2;
    if (t2 == 0) {
    } else {
        t3 = (((struct oC4_int *)(t2))->v);
        FUN_0c03744a(t3, 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x1)) = a6;
        *(unsigned char *)((t2 + 0x2)) = a7;
        *(unsigned int *)((t2 + 0x4)) = 0xC163514;
        (((struct oAC_ushort *)(t2))->v) = 0x21;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        if (a7 != 0) {
            FUN_0c07e3ae(t2, (*(signed char *)0xC273962));
            FUN_0c064d24(t2, 0x3, 0x9, 0x0, 0x100, (t0), 0x0, 0xFFFFFFF0);
        } else {
            t0 = 0x21;
        }
        FUN_0c187798(t0);
        *(unsigned int *)((t2 + 0x38)) = a5;
        (((struct o54_float *)(t2))->v) = ((math_cos_angle16(a5)) * 30.0f);
        (((struct o4C_float *)(t2))->v) = ((math_sin_angle16(a5)) * 30.0f);
        (((struct o50_float *)(t2))->v) = -1.0f;
        (((struct o58_float *)(t2))->v) = (((((struct o4C_float *)(t2))->v)) / -30.0f);
        (((struct o5C_float *)(t2))->v) = 0.119999997f;
        (((struct o60_float *)(t2))->v) = (((((struct o54_float *)(t2))->v)) / -30.0f);
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        *(unsigned short *)((t3 + 0x6)) = 0x219;
        t0 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
        (((struct o80_uint *)(t3))->v) = (int)(((float)((((t0 << 2) << 1) + t0) << 1) * 65536.0f) / 360.0f);
        (((struct o8C_float *)(t3))->v) = 0.5f;
        (((struct o88_float *)(t3))->v) = 0.5f;
        (((struct o84_float *)(t3))->v) = 0.5f;
        (((struct o18_float *)(t3))->v) = 0.0f;
        (((struct o1C_float *)(t3))->v) = 0.0f;
        (((struct o20_float *)(t3))->v) = 0.0f;
        t1 = 0x20;
    }
    return t1;
}
