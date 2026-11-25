/* game/unsorted: functions 0C128598-0C128788, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int nlRand(void);
int FUN_0c128598(int a4, int a5);
int FUN_0c12862c(int a4, int a5, int a6, int a7);

int FUN_0c128598(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t14;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t14 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, 0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t3 + 0x4)) = 0xC12862C;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        (((struct o28_float *)(t3))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o2C_float *)(t3))->v) = ((((struct o2C_float *)(a4))->v));
        (((struct o30_float *)(t3))->v) = ((((struct o30_float *)(a4))->v));
        *(unsigned int *)((t3 + 0x3C)) = 0x0;
        *(unsigned int *)((t3 + 0x38)) = 0x0;
        *(unsigned int *)((t3 + 0x34)) = 0x0;
        (((struct o22_ushort *)(t3))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        t14 = 0x22;
    }
    return t14;
}

