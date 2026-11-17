/* game/unsorted: functions 0C16F454-0C16F60A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c0c2ab6(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c16f454(int a4, int a5, int a6);

int FUN_0c16f454(int a4, int a5, int a6)
{
    int stk[4];
    register int t1;
    register int t31;
    register int t2;
    register int t5;
    register int t29;
    register int t13;
    register int t15;
    register float t16;
    register int t24;
    register int t25;
    register int t3;
    register float u4;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t1 = FUN_0c037320(0x1D, (*(int *)0xC4B40D8));
    t31 = t1;
    if ((int)t1 < 0) {
    } else {
        t2 = 0x4;
        for (;;) {
            t5 = FUN_0c03f444(0x1, 0x0, 0x1);
            t29 = t5;
            if (t5 == 0) {
            } else {
                *(unsigned char *)((t5 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x1)));
                *(unsigned char *)((t5 + 0x2)) = (*(signed char *)(((int)stk + 8)));
                *(unsigned int *)((t5 + 0x4)) = 0xC16F354;
                (((struct oA8_uchar *)(t5))->v) = 0x1;
                (((struct oAC_ushort *)(t5))->v) = 0x1F;
                (((struct oA9_uchar *)(t5))->v) = 0x21;
                (((struct o48_float *)(t5))->v) = 1.0f;
                (((struct o44_float *)(t5))->v) = 1.0f;
                (((struct o40_float *)(t5))->v) = 1.0f;
                *(volatile int *)(((int)stk + 12));
                FUN_0c187798();
                t13 = (*(int *)(((*(int *)(((int)stk + 4))) + 0x38)));
                *(int *)((int)stk + 0) = t13;
                t15 = (int)((int)(FUN_0c179ac0()) % (int)0x41);
                *(unsigned int *)((t5 + 0x38)) = ((int)(((float)t15 * 65536.0f) / 360.0f) + t13);
                u4 = 4.4000001f;
                t16 = math_sin_angle16(((int)(((float)t15 * 65536.0f) / 360.0f) + t13));
                (((struct o4C_float *)(t5))->v) = (t16 * u4);
                (((struct o54_float *)(t5))->v) = ((math_cos_angle16((*(int *)((t5 + 0x38))))) * u4);
                (((struct o60_float *)(t5))->v) = 0.0f;
                (((struct o58_float *)(t5))->v) = 0.0f;
                (((struct o50_float *)(t5))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xF)) + 10.0f);
                (((struct o5C_float *)(t5))->v) = -1.0f;
                *(unsigned short *)((t5 + 0x1C)) = 0x0;
                t3 = ((((struct oC4_int *)(t5))->v));
                FUN_0c03744a(t3, 0x1, 0x1D, (*(int *)0xC4B40D8));
                *(unsigned char *)((t3 + 0x0)) = 0x1;
                *(unsigned short *)((t3 + 0x6)) = 0x1F;
                t24 = FUN_0c179ac0();
                t25 = ((~(((~t24) + 0x1) & 0x3)) + 0x1);
                if ((int)t24 >= 0) {
                    t25 = (t24 & 0x3);
                }
                (((struct o8C_float *)(t3))->v) = (((float)t25 / 10.0f) + 0.699999988f);
                (((struct o88_float *)(t3))->v) = (((float)t25 / 10.0f) + 0.699999988f);
                (((struct o84_float *)(t3))->v) = (((float)t25 / 10.0f) + 0.699999988f);
                FUN_0c07e3ae(t5, 0xA7);
                t29 = (FUN_0c0c2ab6(t5, 0x3E));
            }
            t2 = (t2 - 0x1);
            if (t2 != 0) continue;
            break;
        }
        t31 = t29;
    }
    return t31;
}
