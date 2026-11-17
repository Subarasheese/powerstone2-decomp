/* game/unsorted: functions 0C0F804C-0C0F815E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o74_float { char p[0x74]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c0582de(int, int);
int FUN_0c187798(int, int);
int FUN_0c0f804c(void);
int FUN_0c0f8096(int a4, int a5, int a6);

int FUN_0c0f804c(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x10, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x10, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x20F;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0F7F52;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c0f8096(int a4, int a5, int a6)
{
    int stk[3];
    register int t5;
    register int t10;
    register int t16;
    register int t22;
    register int t11;
    register float u12;
    register int t17;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t5 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    FUN_0c0582de(((int)stk + 0), ((*(int *)((a4 + 0x10))) + 0x64));
    (((struct o28_float *)(a4))->v) = (((*(float *)(((int)stk + 0))) * 650.0f) / 7640.0f);
    (((struct o2C_float *)(a4))->v) = (((*(float *)(((int)stk + 4))) * 650.0f) / 7640.0f);
    (((struct o30_float *)(a4))->v) = -10.0f;
    t10 = 0x0;
    for (;;) {
        if ((int)t10 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t11 = 0xC4;
        t11 = (t11 + a4);
        t11 = (t11 + (t10 << 2));
        t11 = (*(int *)((t11 + 0x0)));
        t16 = ((int (*)(int))(FUN_0c187798))((t10 << 2));
        (((struct o74_float *)(t11))->v) = 0.0f;
        u12 = (*(float *)((0xC1FB2F8 + t17)));
        math_vec3_mul_xyz((t11 + 0x6C), u12, u12, u12);
        t10 = (t10 + 0x1);
    }
    t22 = 0xC0;
    if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0xC) {
        t22 = (FUN_0c03f346(a4));
    }
    return t22;
}
