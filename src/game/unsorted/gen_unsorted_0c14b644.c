/* game/unsorted: functions 0C14B644-0C14B720, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o20_float { char p[0x20]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c0582de(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c179ac0(void);
int FUN_0c0e2390(int, int, int);
int FUN_0c187798(void);
int FUN_0c14b644(int a4);

int FUN_0c14b644(int a4)
{
    int stk[3];
    register int t0;
    register int t23;
    register int t1;
    register int t2;
    register float u20;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t23 = t0;
    if (t0 != 0) {
        t1 = FUN_0c179ac0();
        t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x1);
        }
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), (t2 + 0x2), 0x9, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC14B720;
        *(float *)(((int)stk + 0)) = ((((struct o0_float *)0xC14B78C)->v));
        *(float *)(((int)stk + 4)) = ((((struct o4_float *)0xC14B78C)->v));
        *(float *)(((int)stk + 8)) = ((((struct o8_float *)0xC14B78C)->v));
        FUN_0c0582de(((int)stk + 0), (((((struct oF4_int *)(a4))->v)) + 0x28));
        FUN_0c187798();
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), ((int)stk + 0));
        FUN_0c0e2390(((int)stk + 0), ((int)stk + 0), (t0 + 0x28));
        u20 = (((struct o20_float *)0xC14B78C)->v);
        math_vec3_mul_xyz(((int)stk + 0), u20, u20, u20);
        FUN_0c187798();
        *(unsigned short *)((t0 + 0x1C)) = 0xA;
        t23 = 0xA;
    }
    return t23;
}
