/* Straight-line functions with calls and guards (batch gen_ln): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c187798(int);
int FUN_0c16c328(int a4);

int FUN_0c16c328(int a4)
{
    register int t0;
    register int t3;
    register int t24;

    t0 = 0x0;
    for (;;) {
        FUN_0c037320(0x4A, ((((struct oC_int *)0xC4B40CC)->v)));
        t3 = FUN_0c03f444(0x1, 0x0, 0x3);
        t24 = t3;
        if (t3 != 0) {
            *(unsigned int *)((t3 + 0x4)) = 0xC16C484;
            *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t3 + 0x2)) = t0;
            (((struct oA8_uchar *)(t3))->v) = 0x1;
            (((struct oAC_ushort *)(t3))->v) = 0x1F;
            (((struct oA9_uchar *)(t3))->v) = 0x21;
            FUN_0c03744a(((((struct oC4_int *)(t3))->v)), 0x0, 0x4A, ((((struct oC_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
            FUN_0c03744a(((((struct oC8_int *)(t3))->v)), 0x0, 0x54, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x20F;
            (((struct o68_uint *)((*(int *)(((0xC4 + t3) + 0x4)))))->v) = (((((struct oC4_int *)(t3))->v)) + 0x28);
            FUN_0c03744a(((((struct oCC_int *)(t3))->v)), 0x1, 0x54, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oCC_int *)(t3))->v)) + 0x6)) = 0xF;
            (((struct o68_uint *)((*(int *)(((0xC4 + t3) + 0x8)))))->v) = (((((struct oC4_int *)(t3))->v)) + 0x28);
            (((struct o48_float *)(t3))->v) = 0.699999988f;
            (((struct o44_float *)(t3))->v) = 0.699999988f;
            (((struct o40_float *)(t3))->v) = 0.699999988f;
            FUN_0c187798((0xC4 + t3));
            FUN_0c07e3ae(t3, (*(signed char *)0xC274803));
            t24 = (FUN_0c064d24(t3, 0x3, 0x6, 0x0, 0x100, 0xF, 0xF, 0xFFFFFFF0));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t24;
}
