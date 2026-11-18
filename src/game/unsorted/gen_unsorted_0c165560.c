/* game/unsorted: functions 0C165560-0C16619E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07d1fc(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c14f824(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c165560(int a4, int a5, int a6, int a7, float f4);
int FUN_0c165ed0(int a4, int a5, int a6);
int FUN_0c165fec(int a4, int a5, int a6);
int FUN_0c1660d4(int a4, int a5);
int FUN_0c166190(int a4, int a5, int a6);




int FUN_0c1660d4(int a4, int a5)
{
    int stk[2];
    register int t2;
    register int t10;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    FUN_0c037320(0x38, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, 0x6);
    t10 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x38, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(t2))->v) = 0x0;
        (((struct oAC_ushort *)(t2))->v) = 0x3F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x4)) = 0xC165B50;
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned int *)((t2 + 0x10)) = (*(int *)(((*(int *)(((int)stk + 0))) + 0x10)));
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t2 + 0x3C)) = 0x0;
        *(unsigned int *)((t2 + 0x38)) = 0x0;
        *(unsigned int *)((t2 + 0x34)) = 0x0;
        (((struct o48_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o44_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(t2))->v) = (1.0f + 1.0f);
        t10 = 0x40;
    }
    return t10;
}

int FUN_0c166190(int a4, int a5, int a6)
{
    if ((*(int *)((a4 + 0x10))) == 0) {
        return FUN_0c165ed0(a4, a5, a6);
    }
    return FUN_0c165fec(a4, a5, a6);
}
