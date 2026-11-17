/* game/unsorted: functions 0C14E7D8-0C14E8A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c187798(void);
int FUN_0c14e7d8(int a4, int a5);

int FUN_0c14e7d8(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t17;
    register int t15;
    register int t16;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t17 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC14E730;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798();
        if ((*(signed char *)(((int)stk + 0))) != 0) {
            *(unsigned int *)((t0 + 0x34)) = 0x1C00;
        }
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (t0 + 0x28));
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x21F;
        t15 = (((struct oC4_int *)(t0))->v);
        (((struct o20_float *)(t15))->v) = 1.0f;
        (((struct o1C_float *)(t15))->v) = 1.0f;
        (((struct o18_float *)(t15))->v) = 1.0f;
        t16 = (((struct oC4_int *)(t0))->v);
        (((struct o8C_float *)(t16))->v) = 0.100000001f;
        (((struct o88_float *)(t16))->v) = 0.100000001f;
        (((struct o84_float *)(t16))->v) = 0.100000001f;
        t17 = 0x84;
    }
    return t17;
}
