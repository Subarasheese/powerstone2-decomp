/* game/unsorted: functions 0C104650-0C10486A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c104650(void);
int FUN_0c1046e6(int a4, int a5, int a6, int a7);
int FUN_0c1047ea(void);

int FUN_0c104650(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t10;

    t1 = FUN_0c037320(0x84, (*(int *)0xC4B410C));
    t2 = 0xC1FC6E4;
    t3 = 0xC1FC6D4;
    for (;;) {
        t4 = FUN_0c03f444(0x5, 0x0, t1);
        t10 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, 0x84, (*(int *)0xC4B410C));
            (((struct oA8_uchar *)(t4))->v) = 0x1;
            (((struct oAC_ushort *)(t4))->v) = 0x1F;
            (((struct oA9_uchar *)(t4))->v) = 0x80;
            *(unsigned int *)((t4 + 0x4)) = 0xC104520;
            *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
            (((struct o28_float *)(t4))->v) = (*(float *)((t3 + 0x0)));
            (((struct o2C_float *)(t4))->v) = ((((struct o4_float *)(t3))->v));
            *(unsigned int *)((t4 + 0x3C)) = (*(int *)((t2 + 0x0)));
            t10 = 0x2C;
        }
        t3 = (t3 + 0x8);
        t2 = (t2 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)0xC1FC6E4) {
            break;
        }
    }
    return t10;
}

int FUN_0c1046e6(int a4, int a5, int a6, int a7)
{
    register int t10;
    register int t11;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    if ((*(signed char *)0xC541F43) != 0) {
        return FUN_0c03f346(a4, 0xC541F3C, a6, a7);
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F45) < (int)0x2) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t10 = (int)((int)(*(int *)0xC472D0C) / (int)0x3C);
    t11 = (int)((int)t10 / (int)0xA);
    if ((int)t11 > 0) {
        FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x0, (0x90 + t11), (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    } else {
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (0x90 + ((int)((int)t10 % (int)0xA))), (*(int *)0xC4B410C));
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    return 0xC4;
}

int FUN_0c1047ea(void)
{
    register int t0;
    register int t8;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t8 = t0;
    if (t0 != 0) {
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct o6C_float *)(((((struct oC4_int *)(t0))->v))))->v) = -190.0f;
        (((struct o6C_float *)(((((struct oC8_int *)(t0))->v))))->v) = -230.0f;
        t3 = (((struct oC4_int *)(t0))->v);
        (((struct o70_float *)((*(int *)(((0xC4 + t0) + 0x4)))))->v) = 180.0f;
        (((struct o70_float *)(t3))->v) = 180.0f;
        FUN_0c037498(((((struct oCC_int *)(t0))->v)), 0x0, 0x89, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned int *)((t0 + 0x4)) = 0xC1046E6;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = 0.0f;
        (((struct o30_float *)(t0))->v) = 15.0f;
        t8 = 0x30;
    }
    return t8;
}
