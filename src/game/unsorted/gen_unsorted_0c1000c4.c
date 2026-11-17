/* game/unsorted: functions 0C1000C4-0C1002D8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c1000c4(int a4);
int FUN_0c10019c(int a4, int a5, float f4, float f5);

int FUN_0c1000c4(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c037320((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1FB6CC) + 0x0))), (*(int *)0xC4B4118));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)((((((a4 << 2) + a4) << 2) + 0xC1FB6CC) + 0x0))), (*(int *)0xC4B4118));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC100048;
        *(unsigned short *)((t1 + 0x1C)) = a4;
        if ((int)(*(int *)((((((a4 << 2) + a4) << 2) + 0xC1FB6CC) + 0x4))) >= 0) {
            u0 = (((struct o0_float *)0xC10020C)->v);
            t0 = FUN_0c10019c(a4, (*(int *)((((((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1FB6CC) + 0x4))) << 2) << 1) + 0xC1FB6AC) + 0x0))), u0, 1.0f);
            if ((int)(*(int *)((((((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1FB6CC) + 0x4))) << 2) << 1) + 0xC1FB6AC) + 0x4))) >= 0) {
                return FUN_0c10019c(a4, (*(int *)((((((*(int *)((((((a4 << 2) + a4) << 2) + 0xC1FB6CC) + 0x4))) << 2) << 1) + 0xC1FB6AC) + 0x4))), u0, ((((struct o8_float *)0xC10020C)->v)));
            }
            return t0;
        }
        return a4;
    }
    return t1;
}

int FUN_0c10019c(int a4, int a5, float f4, float f5)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t2;
    register int t5;
    register int t27;
    register int t19;
    register int t9;
    register int t10;
    register int t11;
    register int t15;
    register int t18;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(float *)(((int)stk + 8)) = f4;
    *(float *)(((int)stk + 4)) = f5;
    t0 = 0x0;
    t1 = a5;
    for (;;) {
        t2 = (int)((int)t1 % (int)0xA);
        *(unsigned int *)((((t0 << 2) + (((int)stk + 0) + 0xC)) + 0x0)) = t2;
        if (t2 != 0) {
            t1 = ((int)((int)t1 / (int)0xA));
            t0 = (t0 + 0x1);
            continue;
        }
        break;
    }
    t5 = FUN_0c03f444(0x5, 0x0, t0);
    t27 = t5;
    if (t5 != 0) {
        (((struct oA8_uchar *)(t5))->v) = 0x1;
        (((struct oAC_ushort *)(t5))->v) = 0xF;
        (((struct oA9_uchar *)(t5))->v) = 0x80;
        *(unsigned char *)((t5 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t5 + 0x4)) = 0xC100048;
        (((struct o28_float *)(t5))->v) = (*(float *)(((int)stk + 8)));
        (((struct o2C_float *)(t5))->v) = (*(float *)(((int)stk + 4)));
        (((struct o30_float *)(t5))->v) = 5.0f;
        *(unsigned int *)((t5 + 0x3C)) = 0x0;
        *(unsigned int *)((t5 + 0x38)) = 0x0;
        *(unsigned int *)((t5 + 0x34)) = 0x0;
        *(unsigned short *)((t5 + 0x1C)) = (*(int *)(((int)stk + 0)));
        *(unsigned short *)((t5 + 0x1E)) = t1;
        t19 = 0xC1002E8;
        if ((int)t0 > 0) {
            t9 = 0x0;
            for (;;) {
                t10 = *(int *)0xC4B4118;
                t11 = *(int *)((((0xC4 + t5) + (t9 << 2)) + 0x0));
                *(unsigned int *)(((int)stk + 0)) = ((t9 << 2) + (((int)stk + 0) + 0xC));
                FUN_0c03744a(t11, 0x0, ((*(int *)((((t9 << 2) + (((int)stk + 0) + 0xC)) + 0x0))) + 0x20), t10);
                t15 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
                if (((int)t15 >= 0) && ((int)t15 <= (int)0x9)) {
                } else {
                    *(unsigned char *)((t11 + 0x0)) = 0x0;
                }
                t18 = t9;
                t9 = (t9 + 0x1);
                (((struct o6C_float *)(t11))->v) = (-((float)t18 * 20.0f));
                if ((int)t9 >= (int)t0) {
                    break;
                }
            }
            t19 = 0x6C;
        }
        t27 = t19;
    }
    return t27;
}
