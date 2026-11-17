/* game/unsorted: functions 0C15EDA8-0C15EF70, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c15eda8(int a4, int a5);

int FUN_0c15eda8(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t34;
    register int t6;
    register int t9;
    register int t14;
    register int t18;
    register int t22;
    register int t27;
    register int t31;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x6);
    t34 = 0x0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC15EF70;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x40F;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        (((struct oB0_float *)(t0))->v) = 1.0f;
        t6 = 0x77;
        if ((*(int *)(((int)stk + 4))) == 74) {
            t6 = 0x49;
        }
        t9 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t9, 0x0, t6, (*(int *)0xC4B40D8));
        *(unsigned char *)((t9 + 0x0)) = 0x1;
        *(unsigned short *)((t9 + 0x6)) = 0xF;
        (((struct o7C_uint *)(t9))->v) = 0xFFFFEAAB;
        (((struct o6C_float *)(t9))->v) = 0.0f;
        (((struct o70_float *)(t9))->v) = 35.0f;
        (((struct o74_float *)(t9))->v) = -8.0f;
        (((struct o78_uint *)(t9))->v) = 0x0;
        (((struct o7C_uint *)(t9))->v) = 0x1E00;
        (((struct o80_uint *)(t9))->v) = 0x0;
        (((struct o68_uint *)(t9))->v) = (((((struct oC4_int *)((*(int *)(((int)stk + 0)))))->v)) + 0x28);
        t14 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t14, 0x1, t6, (*(int *)0xC4B40D8));
        *(unsigned char *)((t14 + 0x0)) = 0x1;
        *(unsigned short *)((t14 + 0x6)) = 0xF;
        (((struct o68_uint *)(t14))->v) = (((((struct oC4_int *)(t0))->v)) + 0x28);
        t18 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t18, 0x2, t6, (*(int *)0xC4B40D8));
        *(unsigned char *)((t18 + 0x0)) = 0x1;
        *(unsigned short *)((t18 + 0x6)) = 0xF;
        (((struct o68_uint *)(t18))->v) = (((((struct oC8_int *)(t0))->v)) + 0x28);
        t22 = (((struct oD0_int *)(t0))->v);
        FUN_0c03744a(t22, 0x0, t6, (*(int *)0xC4B40D8));
        *(unsigned char *)((t22 + 0x0)) = 0x1;
        *(unsigned short *)((t22 + 0x6)) = 0xF;
        (((struct o7C_uint *)(t22))->v) = 0x1555;
        (((struct o6C_float *)(t22))->v) = 0.0f;
        (((struct o70_float *)(t22))->v) = 35.0f;
        (((struct o74_float *)(t22))->v) = -8.0f;
        (((struct o78_uint *)(t22))->v) = 0x0;
        (((struct o7C_uint *)(t22))->v) = 0x6200;
        (((struct o80_uint *)(t22))->v) = 0x0;
        (((struct o68_uint *)(t22))->v) = (((((struct oC4_int *)((*(int *)(((int)stk + 0)))))->v)) + 0x28);
        t27 = (((struct oD4_int *)(t0))->v);
        FUN_0c03744a(t27, 0x1, t6, (*(int *)0xC4B40D8));
        *(unsigned char *)((t27 + 0x0)) = 0x1;
        *(unsigned short *)((t27 + 0x6)) = 0xF;
        (((struct o68_uint *)(t27))->v) = (((((struct oD0_int *)(t0))->v)) + 0x28);
        t31 = (((struct oD8_int *)(t0))->v);
        FUN_0c03744a(t31, 0x2, t6, (*(int *)0xC4B40D8));
        *(unsigned char *)((t31 + 0x0)) = 0x1;
        *(unsigned short *)((t31 + 0x6)) = 0xF;
        (((struct o68_uint *)(t31))->v) = (((((struct oD4_int *)(t0))->v)) + 0x28);
        t34 = t0;
    }
    return t34;
}
