/* game/unsorted: functions 0C141358-0C1415C2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c141358(int a4, int a5);
int FUN_0c14143a(int a4, int a5, int a6, int a7);

int FUN_0c141358(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t16;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC14143A;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        FUN_0c03733c(t3, 0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 16))) << 2) + 0xC2A2318))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        FUN_0c187798();
        (((struct o2C_float *)(t3))->v) = ((((struct o2C_float *)(a4))->v));
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t16 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t16));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t16)), 0x0, 0xF0);
        return FUN_0c07e2f4(t3, 0x63);
    }
    return t3;
}

int FUN_0c14143a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.100000001f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        t0 = *(signed char *)((a4 + 0x2));
        u0 = -20.0f;
        u1 = (float)(t0 - 3);
        if ((int)t0 < (int)0x3) {
            u0 = -10.0f;
            u1 = (float)(*(signed char *)((a4 + 0x2)));
        }
        u2 = u0;
        u2 = u2 + 15.0f * u1;
        *(unsigned int *)((a4 + 0x38)) = ((int)((u2 * 65536.0f) / 360.0f) + (*(int *)((a4 + 0x38))));
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u1 = (u0 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o4C_float *)(a4))->v) = (u1 * 50.0f);
        (((struct o50_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 50.0f);
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u1 * 50.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
