/* game/player: functions 0C085A80-0C085C2C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3724_uchar { char p[0x3724]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c085a80(int a4, int a5, int a6, int a7);
int FUN_0c085b8a(int a4);

int FUN_0c085a80(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t3;
    register int t35;
    register int t36;
    register int t37;
    register int t38;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x28;
    FUN_0c081dfc(a4, a5, a6, a7);
    (((struct o371D_uchar *)(a4))->v) = 0x0;
    (((struct o3724_uchar *)(a4))->v) = 0x0;
    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t3 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x5, a4);
        if (t3 != 0) {
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(((((struct o3768_int *)(a4))->v))))->v)) + (*(float *)0xC085BC8));
            *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((struct o3768_int *)(a4))->v)) + 0x38)));
        }
    }
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)(((int)stk + 12))) == 0) {
        *(int *)((int)stk + 8) = 0x4;
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x4, 0xFFFFFFFF, 0x2, 0x4);
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
        FUN_0c059e60(a4, 0x0);
    } else {
        *(int *)((int)stk + 8) = 0x5;
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x5, 0xFFFFFFFF, 0x2, 0x5);
        (((struct o16_uchar *)(a4))->v) = 0x1;
    }
    t35 = *(int *)(((0x118 + a4) + 0x4));
    t36 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t35))->v) = 1.0f;
    (((struct o9C_float *)(t35))->v) = 1.0f;
    (((struct oA0_float *)(t36))->v) = 1.0f;
    (((struct o9C_float *)(t36))->v) = 1.0f;
    t37 = *(int *)(((0x118 + a4) + 0x4));
    t38 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t37))->v) = 1.0f;
    (((struct o98_float *)(t38))->v) = 1.0f;
    (((struct o94_float *)(t37))->v) = 1.0f;
    (((struct o94_float *)(t38))->v) = 1.0f;
    return 0x94;
}

int FUN_0c085b8a(int a4)
{
    register int t5;
    register int t1;

    (((struct o3715_uchar *)(a4))->v) = 0x29;
    t5 = 0x9D;
    if ((*(signed char *)((a4 + 0x372C))) == 0) {
        t1 = 0x9C;
        t5 = 0x9C;
    } else {
        t1 = 0x9D;
    }
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, t5, 0xFFFFFFFF, 0x4, t1);
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o3830_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0xA;
    (((struct o374B_uchar *)(a4))->v) = 0xA;
    return 0x374B;
}
