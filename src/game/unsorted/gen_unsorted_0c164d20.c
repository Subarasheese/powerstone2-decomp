/* game/unsorted: functions 0C164D20-0C164F76, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c164d20(int a4, int a5);
int FUN_0c164e18(int a4, int a5, int a6, int a7);

int FUN_0c164d20(int a4, int a5)
{
    int stk[10];
    register int t0;
    register int t25;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register float t12;
    register float u15;
    register float u22;

    *(unsigned char *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2);
    t25 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 20)));
        *(unsigned int *)((t0 + 0x4)) = 0xC164A28;
        *(unsigned char *)((t0 + 0x2)) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(volatile int *)(((int)stk + 16));
        FUN_0c187798();
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0xC);
        t4 = FUN_0c179ac0();
        t5 = ((~(((~t4) + 0x1) & 0xF)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x0)) = (((t5 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 20)) = (((int)stk + 16) + 0x10);
        t7 = FUN_0c179ac0();
        t8 = ((~(((~t7) + 0x1) & 0xF)) + 0x1);
        if ((int)t7 >= 0) {
            t8 = (t7 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x0)) = (((t8 << 8) << 2) << 2);
        *(int *)((int)stk + 12) = (t0 + 0x28);
        t12 = math_cos_angle16((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
        *(unsigned int *)(((int)stk + 24)) = 0xC2A32F4;
        u15 = ((((struct o28_float *)(t0))->v));
        u15 = u15 + (*(float *)0xC2A32F4) * t12;
        (((struct o28_float *)(t0))->v) = u15;
        *(int *)((int)stk + 12) = (t0 + 0x2C);
        u22 = ((((struct o2C_float *)(t0))->v));
        u22 = u22 + (*(float *)(((*(int *)(((int)stk + 24))) + 0x0))) * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 20))) + 0x0)))));
        (((struct o2C_float *)(t0))->v) = u22;
        FUN_0c07e3ae(t0, 0x74);
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0xFFFFFFFF;
        *(int *)((int)stk + 0) = 0x100;
        t25 = (FUN_0c064d24(t0, 0x3, 0x6, 0x0, 0x100, 0xFFFFFFFF, 0x0, 0x0));
    }
    return t25;
}

int FUN_0c164e18(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    int t4;

    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC540F98, t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x800);
        if (((*(signed char *)((a4 + 0x131))) == 0) && ((t1 = *(signed char *)((a4 + 0x132)), t1 == 0) && (t2 = (((struct o404_int *)(a4))->v), t2 == 0))) {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3268, 0xC2A325C, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)(*(short *)((a4 + 0x1E)))) {
                FUN_0c164d20((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
                return ((int (*)(int))(FUN_0c03f346))(a4);
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x32, (*(int *)0xC4B40CC));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x32, (*(int *)0xC4B40CC));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x2F;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
        *(volatile int *)((a4 + 0xC8));
        t0 = ((int (*)(void))(FUN_0c187798))();
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x800);
        if (((*(signed char *)((a4 + 0x131))) == 0) && ((t3 = *(signed char *)((a4 + 0x132)), t3 == 0) && (t4 = (((struct o404_int *)(a4))->v), t4 == 0))) {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3268, 0xC2A325C, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)(*(short *)((a4 + 0x1E)))) {
                FUN_0c164d20((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
                return ((int (*)(int))(FUN_0c03f346))(a4);
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return FUN_0c164d20((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
}
