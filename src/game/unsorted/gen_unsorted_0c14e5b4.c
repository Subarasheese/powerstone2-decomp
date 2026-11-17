/* game/unsorted: functions 0C14E5B4-0C14E6F8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c187798(void);
int FUN_0c14e5b4(int a4, int a5);

int FUN_0c14e5b4(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t17;
    register int t24;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    if (t2 == 0) {
        return t2;
    }
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 != 0) {
        FUN_0c03733c(t3, 0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x4)) = 0xC14E224;
        FUN_0c187798();
        if ((*(signed char *)(((int)stk + 16))) != 0) {
            *(unsigned int *)((t3 + 0x34)) = 0x1C00;
        }
        (((struct o48_float *)(t3))->v) = 0.0f;
        (((struct o44_float *)(t3))->v) = 0.0f;
        (((struct o40_float *)(t3))->v) = 0.0f;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (t3 + 0x28));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0x1F;
        t17 = (((struct oC4_int *)(t3))->v);
        (((struct o8C_float *)(t17))->v) = 1.0f;
        (((struct o88_float *)(t17))->v) = 1.0f;
        (((struct o84_float *)(t17))->v) = 1.0f;
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x1F;
        (((struct o84_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.0f;
        (((struct o88_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.0f;
        (((struct o8C_float *)(((((struct oC8_int *)(t3))->v))))->v) = 1.0f;
        (((struct o74_float *)(((((struct oC8_int *)(t3))->v))))->v) = 450.0f;
        *(unsigned int *)((t3 + 0x10)) = a4;
        (((struct o4C_float *)(t3))->v) = 0.0f;
        *(unsigned short *)((t3 + 0x1C)) = 0xB4;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t24 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t24));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x3B, 0x0, 0x100, (~((int)0x1 << (int)t24)), 0x0, 0x0);
        return FUN_0c07e2f4(t3, 0x65);
    }
    return t3;
}
