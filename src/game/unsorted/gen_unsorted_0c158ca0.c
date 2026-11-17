/* game/unsorted: functions 0C158CA0-0C158D94, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
float math_signed_sqrt(float);
int math_atan2_angle16(float, float);
int FUN_0c0e2390(int, int, int);
int FUN_0c187798(void);
int FUN_0c158ca0(int a4, int a5, int a6);

int FUN_0c158ca0(int a4, int a5, int a6)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t25;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float t18;
    register float t19;
    register float u22;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t1 = FUN_0c037320(0x15, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t25 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x15, (*(int *)0xC4B40CC));
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t2 + 0x4)) = 0xC1589D6;
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) + 200.0f);
        (((struct o40_float *)(t2))->v) = 0.699999988f;
        (((struct o44_float *)(t2))->v) = 0.699999988f;
        (((struct o48_float *)(t2))->v) = 0.699999988f;
        FUN_0c0e2390((((int)stk + 0) + 0xC), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 100.0f);
        u13 = *(float *)(((int)stk + 12));
        u14 = *(float *)(((int)stk + 20));
        u15 = *(float *)(((int)stk + 16));
        u16 = (u14 * u14);
        u16 = u16 + u13 * u13;
        u17 = u16;
        u17 = u17 + u15 * u15;
        t18 = math_signed_sqrt(u16);
        t19 = math_signed_sqrt(u17);
        u22 = *(float *)(((int)stk + 16));
        *(unsigned int *)((t2 + 0x38)) = (math_atan2_angle16(((*(float *)(((int)stk + 12))) / t18), ((*(float *)(((int)stk + 20))) / t18)));
        t25 = math_atan2_angle16((-((u22 / t19) * 1.0f)), (t18 / t19));
        *(unsigned int *)((t2 + 0x34)) = t25;
    }
    return t25;
}
