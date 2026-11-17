/* game/effect: functions 0C12FF1C-0C13035A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_int { char p[0x8C]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c15b478(int, int, int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c13009a(int a4, int a5, int a6);

int FUN_0c13009a(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t37;
    register float u14;
    register int t21;
    register int t31;
    register float u18;

    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned char *)(((int)stk + 32)) = a6;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t37 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x7;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o14_uchar *)(t0))->v) = 0x0;
        (((struct o15_uchar *)(t0))->v) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t0))->v) = 0x1D;
        *(unsigned int *)((t0 + 0x4)) = 0xC12FF1C;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((a4 + 0x10)));
        FUN_0c187798();
        FUN_0c187798();
        *(unsigned int *)((t0 + 0x38)) = (*(int *)(((int)stk + 36)));
        FUN_0c187798();
        (((struct o4C_float *)(t0))->v) = ((math_sin_angle16((*(int *)((t0 + 0x38))))) * 37.0f);
        (((struct o54_float *)(t0))->v) = ((math_cos_angle16((*(int *)((t0 + 0x38))))) * 37.0f);
        if ((*(signed char *)((0x375A + (*(int *)((a4 + 0x10)))))) == 4) {
            u14 = ((float)((*(signed char *)(((int)stk + 32))) + 0x1) * 10.0f);
            u14 = -u14;
            u18 = u14;
        } else {
            u18 = ((float)(*(signed char *)(((int)stk + 32))) * 10.0f);
        }
        (((struct o50_float *)(t0))->v) = u18;
        *(int *)((int)stk + 28) = 0xF0;
        *(int *)((int)stk + 24) = 0x0;
        t21 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 20) = (~((int)0x1 << (int)t21));
        *(int *)((int)stk + 16) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x14, 0x0, 0x100, (~((int)0x1 << (int)t21)), 0x0, 0xF0);
        FUN_0c07e2f4(t0, 0x63);
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xB;
        (((struct o80_uint *)(((((struct oC4_int *)(t0))->v))))->v) = 0x4000;
        *(int *)((int)stk + 12) = 0xC2A1394;
        *(int *)((int)stk + 8) = 0xC2A1388;
        *(int *)((int)stk + 4) = 0x6F;
        *(int *)((int)stk + 0) = 0x384;
        t31 = *(signed char *)((t0 + 0x1));
        (((struct o20_uchar *)(((int)stk + 0)))->v) = t31;
        t37 = (FUN_0c15b478((*(signed char *)(((int)stk + 32))), (t0 + 0x64), t0, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t31 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x384, 0x6F, 0xC2A1388, 0xC2A1394));
    }
    return t37;
}
