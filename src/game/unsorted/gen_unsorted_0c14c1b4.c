/* game/unsorted: functions 0C14C1B4-0C14C31A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
float math_signed_sqrt(float);
int math_atan2_angle16(float, float);
int FUN_0c0e2390(int, int, int);
float FUN_0c17c450(int);
int FUN_0c187798(void);
int FUN_0c14c1b4(int a4, int a5, int a6, int a7, int a8);

int FUN_0c14c1b4(int a4, int a5, int a6, int a7, int a8)
{
    int stk[6];
    register int t0;
    register int t30;
    register int t1;
    register int t2;
    register int t6;
    register float u24;
    register float u25;
    register float u26;
    register float t27;
    register int t29;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t30 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t6 = *(int *)((((0xC4 + t0) + t2) + 0x0));
            FUN_0c03744a(t6, 0x0, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            *(unsigned short *)((t6 + 0x6)) = 0x1F;
            t2 = (t2 + 0x4);
            (((struct o8C_float *)(t6))->v) = 1.0f;
            (((struct o84_float *)(t6))->v) = 1.0f;
            (((struct o88_float *)(t6))->v) = 0.0f;
            (((struct o7C_uint *)(t6))->v) = t1;
            t1 = (t1 + 0x4000);
            if ((unsigned int)t2 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC14C374;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = a8;
        *(unsigned short *)((t0 + 0x1E)) = a8;
        (((struct o20_ushort *)(t0))->v) = a8;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = 0x0;
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798();
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - 110.599998f);
        FUN_0c0582de((((int)stk + 0) + 0xC), (*(int *)(((int)stk + 4))));
        FUN_0c187798();
        FUN_0c187798();
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        (((struct o4_float *)((0x41C + t0)))->v) = (((((struct o4_float *)((0x41C + t0)))->v)) + 110.599998f);
        FUN_0c0e2390((((int)stk + 0) + 0xC), (t0 + 0x28), (0x41C + t0));
        (((struct oC_float *)((0x41C + t0)))->v) = (FUN_0c17c450((((int)stk + 0) + 0xC)));
        *(unsigned int *)((t0 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20)))));
        u24 = *(float *)(((int)stk + 12));
        u25 = *(float *)(((int)stk + 20));
        u26 = (u25 * u25);
        u26 = u26 + u24 * u24;
        t27 = math_signed_sqrt(u26);
        t29 = math_atan2_angle16((-(*(float *)(((int)stk + 16)))), t27);
        *(unsigned int *)((t0 + 0x34)) = (t29 + 0x4000);
        t30 = (t29 + 0x4000);
    }
    return t30;
}
