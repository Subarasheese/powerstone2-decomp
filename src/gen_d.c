/* Straight-line functions with calls and guards (batch gen_d): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c16af78(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int);
int FUN_0c152570(int a4);
int FUN_0c16b2cc(int a4, int a5);

int FUN_0c152570(int a4)
{
    register int t0;
    register int t7;
    register int t2;
    register int t3;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x1, 0xA);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC152AD4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c187798(0x1);
        *(unsigned int *)((t0 + 0x10)) = a4;
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            t5 = *(int *)((((0xC4 + t0) + t3) + 0x0));
            FUN_0c03744a(t5, 0x2, 0x23, (*(int *)0xC4B40CC));
            *(unsigned char *)((t5 + 0x0)) = 0x0;
            *(unsigned short *)((t5 + 0x6)) = 0x11;
            (((struct o18_float *)(t5))->v) = 1.0f;
            (((struct o1C_float *)(t5))->v) = 1.0f;
            t2 = (t2 + 0x1);
            (((struct o20_float *)(t5))->v) = 1.0f;
            (((struct o24_float *)(t5))->v) = (1.0f + 1.0f);
            t3 = (t3 + 0x4);
            if ((int)(signed char)t2 >= (int)0xA) {
                break;
            }
        }
        t7 = 0x24;
    }
    return t7;
}

int FUN_0c16b2cc(int a4, int a5)
{
    register int t0;
    register int t16;
    register float u9;
    register int t14;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t16 = t0;
    if (t0 != 0) {
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC16B224;
        *(unsigned char *)((t0 + 0x2)) = a5;
        FUN_0c187798(0x21);
        FUN_0c16af78(t0, 0x4, 0x3);
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((0x41C + t0) + 0x1))), 0x43, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        u9 = *(float *)0xC16B3FC;
        (((struct o4C_float *)(t0))->v) = (-(((((struct o4C_float *)(a4))->v)) * u9));
        (((struct o54_float *)(t0))->v) = (-(((((struct o54_float *)(a4))->v)) * u9));
        (((struct o50_float *)(t0))->v) = (-(((((struct o50_float *)(a4))->v)) * u9));
        t14 = (int)((int)(FUN_0c179ac0()) % (int)0x33);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + (float)((-t14) + 0x32));
        t16 = ((-t14) + 0x32);
    }
    return t16;
}
