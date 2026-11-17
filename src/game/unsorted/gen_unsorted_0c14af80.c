/* game/unsorted: functions 0C14AF80-0C14B39C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c0582de(int, int);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c187798(int);
int FUN_0c14af80(int a4);
int FUN_0c14b20c(int a4);

int FUN_0c14af80(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t2, 0x7, 0xE, (*(int *)0xC4B40CC));
        *(unsigned short *)((t2 + 0x6)) = 0x15;
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        (((struct o8C_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o88_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o84_float *)(t2))->v) = (1.0f + 1.0f);
        *(unsigned int *)((t0 + 0x4)) = 0xC14B012;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c187798(0x1);
        return FUN_0c0582de((t0 + 0x28), ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28));
    }
    return t0;
}

int FUN_0c14b20c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    if (t0 == 0) {
        return t0;
    }
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((((0xC4 + t0) + t1) + 0x0));
        FUN_0c03744a(t2, 0x8, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        t1 = (t1 + 0x4);
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        if ((unsigned int)t1 >= (unsigned int)0x8) {
            break;
        }
    }
    *(unsigned int *)((t0 + 0x4)) = 0xC14B39C;
    *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    (((struct oA8_uchar *)(t0))->v) = 0x1;
    (((struct oAC_ushort *)(t0))->v) = 0x21;
    (((struct oA9_uchar *)(t0))->v) = 0x21;
    *(unsigned int *)((t0 + 0x10)) = a4;
    FUN_0c187798(0x21);
    t1 = FUN_0c179ac0();
    t2 = ((~(((~t1) + 0x1) & 0x1F)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1F);
    }
    (((struct o4C_float *)(t0))->v) = ((((float)t2 / 32.0f) + -0.5f) * 80.0f);
    t1 = FUN_0c179ac0();
    t2 = ((~(((~t1) + 0x1) & 0x1F)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1F);
    }
    (((struct o50_float *)(t0))->v) = ((((float)t2 / 32.0f) + -0.5f) * 80.0f);
    t1 = FUN_0c179ac0();
    t2 = ((~(((~t1) + 0x1) & 0x1F)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1F);
    }
    (((struct o54_float *)(t0))->v) = ((((float)t2 / 32.0f) + -0.5f) * 80.0f);
    FUN_0c17c130((t0 + 0x28), (t0 + 0x28), (t0 + 0x4C));
    FUN_0c0e2390((t0 + 0x4C), (t0 + 0x4C), (a4 + 0x4C));
    return math_vec3_mul_xyz((t0 + 0x4C), 0.100000001f, 0.100000001f, 0.100000001f);
}
