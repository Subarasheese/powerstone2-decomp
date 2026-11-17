/* game/unsorted: functions 0C12F304-0C12F454, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059e60(int, int);
int FUN_0c187798(void);
int FUN_0c12f304(int a4, int a5);

int FUN_0c12f304(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u6;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t1 = FUN_0c03f444(0x5, 0x0, (*(int *)0xC201E60));
    if (t1 == 0) {
        return t1;
    }
    *(unsigned int *)(((int)stk + 4)) = 0xC201E58;
    t2 = *(signed char *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = 0xC2A1290;
    t3 = 0xC201E58;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)((((struct oC0_int *)(t1))->v))) {
            break;
        }
        t5 = t4;
        t5 = (t5 << 2);
        t5 = (t5 + (0xC4 + t1));
        t5 = (*(int *)((t5 + 0x0)));
        FUN_0c03744a(t5, (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), 0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned short *)((t5 + 0x6)) = 0x21F;
        (((struct o14_float *)(t5))->v) = 1.0f;
        t3 = ((((struct oC4_int *)(a4))->v));
        t3 = (t3 + 0x28);
        (((struct o68_uint *)(t5))->v) = t3;
        u6 = (*(float *)(((t2 << 2) + (((t4 << 2) << 1) + 0xC2A1290))));
        t4 = (t4 + 0x1);
        (((struct o84_float *)(t5))->v) = u6;
        u6 = (*(float *)(((t2 << 2) + (*(int *)(((int)stk + 0))))));
        (((struct o8C_float *)(t5))->v) = u6;
        (((struct o88_float *)(t5))->v) = u6;
        (((struct o20_float *)(t5))->v) = 0.0f;
        (((struct o1C_float *)(t5))->v) = 0.0f;
        (((struct o18_float *)(t5))->v) = 0.0f;
    }
    (((struct oA8_uchar *)(t1))->v) = 0x1;
    (((struct oAC_ushort *)(t1))->v) = 0x1F;
    (((struct oA9_uchar *)(t1))->v) = 0x21;
    *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    *(unsigned int *)((t1 + 0x4)) = 0xC12F490;
    *(unsigned int *)((t1 + 0x10)) = a4;
    FUN_0c187798();
    FUN_0c187798();
    (((struct o54_float *)(t1))->v) = 0.0f;
    (((struct o50_float *)(t1))->v) = 0.0f;
    (((struct o4C_float *)(t1))->v) = 0.0f;
    (((struct o48_float *)(t1))->v) = 1.0f;
    (((struct o44_float *)(t1))->v) = 1.0f;
    (((struct o40_float *)(t1))->v) = 1.0f;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (t1 + 0x28));
    *(unsigned short *)((t1 + 0x1C)) = 0x0;
    return FUN_0c059e60(a4, 0x20);
}
