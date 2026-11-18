/* game/unsorted: functions 0C15D494-0C15D9E4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
extern int FUN_0c187798();
int FUN_0c15d494(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_0c15d5b4(int a4, int a5, int a6, int a7);
int FUN_0c15d61c(int a4, int a5, int a6);
int FUN_0c15d92e(int a4);


int FUN_0c15d5b4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c15d61c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t3;
    register float u0;
    register float u1;

    FUN_0c037320(0x2D, (*(int *)0xC4B40CC));
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned int *)((t0 + 0x4)) = 0xC15D5B4;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned char *)((t0 + 0x2)) = a6;
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x1, 0x2D, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x34)) = (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) * 65536.0f) / 360.0f);
        *(unsigned int *)((t0 + 0x38)) = (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) * 65536.0f) / 360.0f);
        *(unsigned int *)((t0 + 0x3C)) = (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) * 65536.0f) / 360.0f);
        u0 = 0.699999988f;
        u0 = u0 + 0.0700000003f * (float)((int)((int)(FUN_0c179ac0()) % (int)0xA));
        u1 = (((struct o40_float *)(a4))->v);
        (((struct o48_float *)(t0))->v) = (u1 * u0);
        (((struct o44_float *)(t0))->v) = (u1 * u0);
        (((struct o40_float *)(t0))->v) = (u1 * u0);
        math_mat_get_translate(((*(int *)((((a5 << 2) + (0xC53255C + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t0 + 0x28));
        t1 = *(signed char *)((t0 + 0x2));
        if (t1 != 0) {
            t3 = t1;
            if (t1 != 1) {
            } else {
                FUN_0c179ac0();
                (((struct o4C_float *)(t0))->v) = 0.0f;
                (((struct o50_float *)(t0))->v) = 0.0f;
                (((struct o54_float *)(t0))->v) = 0.0f;
                (((struct o58_float *)(t0))->v) = 0.0f;
                (((struct o5C_float *)(t0))->v) = -0.5f;
                (((struct o60_float *)(t0))->v) = 0.0f;
                t1 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
                *(unsigned short *)((t0 + 0x1C)) = (t1 + 0xA);
                t3 = (t1 + 0xA);
            }
            t1 = t3;
        } else {
            t3 = (int)((int)(FUN_0c179ac0()) % (int)0x168);
            u0 = math_sin_angle16((int)(((float)t3 * 65536.0f) / 360.0f));
            (((struct o4C_float *)(t0))->v) = (u0 * (1.0f + 1.0f));
            u0 = ((((struct o0_float *)0xC15D8C0)->v));
            u0 = u0 + ((((struct o4_float *)0xC15D8C0)->v)) * (float)((int)((int)(FUN_0c179ac0()) % (int)0xA));
            (((struct o50_float *)(t0))->v) = u0;
            u0 = math_sin_angle16((int)(((float)t3 * 65536.0f) / 360.0f));
            (((struct o54_float *)(t0))->v) = (u0 * (1.0f + 1.0f));
            (((struct o58_float *)(t0))->v) = 0.0f;
            (((struct o5C_float *)(t0))->v) = -0.5f;
            (((struct o60_float *)(t0))->v) = 0.0f;
            t3 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
            *(unsigned short *)((t0 + 0x1C)) = (t3 + 0x1E);
            t1 = (t3 + 0x1E);
        }
    }
    return t1;
}

