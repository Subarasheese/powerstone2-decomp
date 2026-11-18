/* game/unsorted: functions 0C13052C-0C130A02, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3760_int { char p[0x3760]; int v; };
struct o404_int { char p[0x404]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c130e70(int, int, int);
int FUN_0c131556(int, int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
extern int FUN_0c187798();
extern float _builtin_sqrtf(float);
int FUN_0c13052c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c130640(int a4, int a5, int a6, int a7);
int FUN_0c130890(int a4, int a5);


int FUN_0c130640(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    int t2;
    register int t3;
    register int t4;
    register float u0;

    t3 = *(signed char *)((a4 + 0x14));
    t4 = *(int *)((a4 + 0x10));
    if (t3 != 0) {
        if (t3 == 1) {
            t3 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
            if (((int)(short)(t3 - 1) > 0) && ((t0 = *(signed char *)((t4 + 0x3715)), t0 == 26) && (t1 = *(signed char *)((t4 + 0x371C)), t1 != 0))) {
                t0 = (((struct oC8_int *)(a4))->v);
                (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
                if (0.0f > ((((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                    (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                }
                t0 = (((struct oC8_int *)(a4))->v);
                u0 = (((struct o18_float *)(t0))->v);
                (((struct o20_float *)(t0))->v) = u0;
                (((struct o1C_float *)(t0))->v) = u0;
                return 0x1C;
            }
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            if (0x0 == 0) {
                FUN_0c131556((a4 + 0x28), (*(signed char *)((a4 + 0x1))));
            }
            FUN_0c130e70(a4, (a4 + 0x28), 0x4);
            FUN_0c064d24(a4, 0x1, 0x35, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))), 0x0, 0x0);
            return FUN_0c07e2f4(a4, 0x65);
        }
        t0 = *(short *)((a4 + 0x1C));
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        (((struct oA8_uchar *)(a4))->v) = t1;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0xA) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 + 0x1);
    }
    if ((((((struct o404_int *)(a4))->v)) == 0) && (t2 = *(signed char *)((a4 + 0x131)), t2 == 0)) {
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            (((struct o14_uchar *)(a4))->v) = 0x2;
            return 0x14;
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0700000003f);
        if (((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 1.5f) {
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.5f;
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.150000006f);
        if (((((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 1.0f) {
            (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
        }
        t0 = (((struct oC8_int *)(a4))->v);
        u0 = (((struct o18_float *)(t0))->v);
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o1C_float *)(t0))->v) = u0;
        return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12E_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    return FUN_0c130e70(a4, (a4 + 0x28), 0x3);
}

