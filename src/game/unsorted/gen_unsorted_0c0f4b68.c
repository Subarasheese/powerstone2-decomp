/* game/unsorted: functions 0C0F4B68-0C0F4C96, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c14fb3c(int, float, float, float, float, float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c0f4b68(int a4, int a5);

int FUN_0c0f4b68(int a4, int a5)
{
    int stk[6];
    register float u4;
    register float u5;
    register int t7;
    register int t9;
    register int t12;
    register int t26;
    register int t13;
    register int t14;
    register int t15;
    register int t23;

    *(unsigned int *)(((int)stk + 8)) = a4;
    thunk_FUN_0c05abb2(0x29, a5);
    FUN_0c187798();
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - 100.0f);
    FUN_0c14fb3c((((int)stk + 0) + 0xC), 0.899999976f, 0.829999983f, 0.629999995f, 4.0f, (1.0f + 1.0f));
    u4 = (((struct o0_float *)0xC1CE2F8)->v);
    u5 = (((struct o4_float *)0xC1CE2F8)->v);
    t7 = (int)((int)(FUN_0c179ac0()) % (int)0x28);
    t9 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = ((t9 << 2) << 1);
    *(unsigned int *)(((int)stk + 0)) = ((((t9 << 2) << 1) + 0xC4B40DC) + 0x4);
    t12 = FUN_0c037320(0x8, (*(int *)((((((t9 << 2) << 1) + 0xC4B40DC) + 0x4) + 0x0))));
    t26 = t12;
    if ((int)t12 > 0) {
        t13 = 0x0;
        t14 = (int)(((float)(((t7 << 2) << 1) + t7) * 65536.0f) / 360.0f);
        for (;;) {
            t15 = FUN_0c03f444(0x5, 0x0, 0x1);
            t23 = t15;
            if (t15 != 0) {
                FUN_0c03744a(((((struct oC4_int *)(t15))->v)), t13, 0x8, (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
                *(unsigned int *)((t15 + 0x4)) = 0xC0F4AAC;
                *(unsigned char *)((t15 + 0x1)) = 0xFFFFFFFF;
                (((struct oAC_ushort *)(t15))->v) = 0xF;
                (((struct oA9_uchar *)(t15))->v) = 0x21;
                FUN_0c187798();
                (((struct o54_float *)(t15))->v) = (u4 * (math_cos_angle16(t14)));
                (((struct o4C_float *)(t15))->v) = (u4 * (math_sin_angle16(t14)));
                (((struct o50_float *)(t15))->v) = u5;
                *(unsigned int *)((t15 + 0x38)) = t14;
                t23 = 0x50;
            }
            t13 = (t13 + 0x1);
            t14 = (t14 + 0x2000);
            if ((int)t13 >= (int)t12) {
                break;
            }
        }
        t26 = t23;
    }
    return t26;
}
