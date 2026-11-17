/* game/effect: functions 0C12FA44-0C12FEC2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c12fa44(int, int, int, int, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c12fcf4(int a4, int a5, int a6);

int FUN_0c12fcf4(int a4, int a5, int a6)
{
    int stk[6];
    register int t2;
    register int t3;
    register int t42;
    register float u14;
    register float u21;
    register int t26;
    register int t31;
    int t29;

    *(unsigned char *)(((int)stk + 16)) = a5;
    *(unsigned char *)(((int)stk + 20)) = a6;
    t2 = FUN_0c037320(0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t42 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x5;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        (((struct o14_uchar *)(t3))->v) = 0x0;
        (((struct o15_uchar *)(t3))->v) = 0x0;
        *(unsigned short *)((t3 + 0x1C)) = 0x0;
        *(unsigned short *)((t3 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t3))->v) = 0x12C;
        *(unsigned int *)((t3 + 0x4)) = 0xC12FB0A;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c187798();
        *(int *)((int)stk + 12) = (t3 + 0x28);
        u14 = ((((struct o28_float *)(t3))->v));
        u14 = u14 + (math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o0_float *)0xC2A1338)->v));
        (((struct o28_float *)(t3))->v) = u14;
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + ((((struct o4_float *)0xC2A1338)->v)));
        *(int *)((int)stk + 12) = (t3 + 0x30);
        u21 = ((((struct o30_float *)(t3))->v));
        u21 = u21 + (math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o8_float *)0xC2A1338)->v));
        (((struct o30_float *)(t3))->v) = u21;
        FUN_0c187798();
        FUN_0c187798();
        FUN_0c12fa44((t3 + 0x4C), (a4 + 0x28), (0x380C + a4), (*(int *)((a4 + 0x38))), 30.0f);
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t26 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t26));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x32, 0x0, 0x100, (~((int)0x1 << (int)t26)), 0x0, 0xF0);
        t31 = 0x61;
        if (((*(signed char *)(((int)stk + 20))) == 1) && (t29 = *(signed char *)(((int)stk + 16)), t29 == 2)) {
            t31 = 0x60;
        }
        FUN_0c07e2f4(t3, t31);
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xB;
        (((struct o80_uint *)(((((struct oC4_int *)(t3))->v))))->v) = 0x4000;
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x21B;
        (((struct o18_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.5f;
        (((struct o1C_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.5f;
        (((struct o20_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.5f;
        (((struct o80_uint *)(((((struct oC8_int *)(t3))->v))))->v) = 0x4000;
        t42 = 0x80;
    }
    return t42;
}
