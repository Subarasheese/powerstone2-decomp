/* Straight-line functions with calls and guards (batch gen_nn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c02cade(void);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05a812(void);
int FUN_0c05b250(void);
int FUN_0c0c2ab6(int, int);
int FUN_0c0e4f8c(int, int, int);
int FUN_0c18778c(int, int, int);
int FUN_0c187798(int, int);
int FUN_0c187b48(int, int, int);
int FUN_0c0e563e(int a4, int a5, int a6);
int FUN_0c05e13a(int a4, int a5);

int FUN_0c0e563e(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x31, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x9, 0x0, t0);
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x31, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned short *)((((((struct oC8_int *)(t1))->v)) + 0x6)) = 0x1F;
        t0 = (((struct oC8_int *)(t1))->v);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((((((struct oCC_int *)(t1))->v)) + 0x6)) = 0x1F;
        t0 = (((struct oCC_int *)(t1))->v);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x4)) = 0xC0E5522;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        FUN_0c187798(t0, 0x1F);
        (((struct o41C_uchar *)(t1))->v) = 0xCC;
        (((struct o424_uchar *)(t1))->v) = 0x0;
        (((struct o1B_uchar *)(t1))->v) = a5;
        (((struct o423_uchar *)(t1))->v) = 0xFFFFFFFF;
        FUN_0c0e4f8c(t1, 0x0, 0xFFFFFFFF);
        FUN_0c0c2ab6(t1, 0x39);
        (((struct o422_uchar *)(t1))->v) = 0x0;
        return t1;
    }
    return 0x0;
}

int FUN_0c05e13a(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;

    t6 = *(signed char *)0xC2579C8;
    if (t6 != 0) {
        if (t6 == 1) {
            if ((*(signed char *)0xC541F5E) == 0) {
                (((struct o1_uchar *)0xC5423C0)->v) = (*(signed char *)0xC5423C0);
                if ((*(signed char *)0xC5423C0) != 0) {
                    (((struct o0_uchar *)0xC5423C0)->v) = 0x0;
                    FUN_0c05b250();
                }
            }
            FUN_0c05a812();
            if (((*(signed char *)0xC54208F) == 0) && (t0 = *(signed char *)0xC542092, t0 == 0)) {
                *(unsigned int *)0xC542098 = ((*(int *)0xC542098) + 0x1);
                t0 = 0x0;
                t6 = 0xA0;
                for (;;) {
                    FUN_0c18778c(t0, t6, 0xC5426C4);
                    t0 = (t1 + 0x28);
                    t6 = t2;
                    if ((unsigned int)t0 >= (unsigned int)t2) {
                        break;
                    }
                }
            }
        }
    } else {
        *(unsigned char *)0xC2579C8 = ((*(signed char *)0xC2579C8) + 0x1);
        (((struct o2E_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o2C_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o2A_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o28_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o6_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o4_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o2_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o0_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o2E_ushort *)0xC542864)->v) = 0x0;
        (((struct o2C_ushort *)0xC542864)->v) = 0x0;
        (((struct o2A_ushort *)0xC542864)->v) = 0x0;
        (((struct o28_ushort *)0xC542864)->v) = 0x0;
        (((struct o6_ushort *)0xC542864)->v) = 0x0;
        (((struct o4_ushort *)0xC542864)->v) = 0x0;
        (((struct o2_ushort *)0xC542864)->v) = 0x0;
        (((struct o0_ushort *)0xC542864)->v) = 0x0;
        FUN_0c187b48(0xC54239C, 0x0, 0x94);
        (((struct o1_uchar *)0xC54208F)->v) = 0x0;
        (((struct o0_uchar *)0xC54208F)->v) = 0x0;
        (((struct o2_uchar *)0xC54208F)->v) = 0x0;
        if ((*(signed char *)0xC541F5E) == 0) {
            (((struct o1_uchar *)0xC5423C0)->v) = (*(signed char *)0xC5423C0);
            if ((*(signed char *)0xC5423C0) != 0) {
                (((struct o0_uchar *)0xC5423C0)->v) = 0x0;
                FUN_0c05b250();
            }
        }
        FUN_0c05a812();
        if (((*(signed char *)0xC54208F) == 0) && (t3 = *(signed char *)0xC542092, t3 == 0)) {
            *(unsigned int *)0xC542098 = ((*(int *)0xC542098) + 0x1);
            t0 = 0x0;
            t1 = 0xA0;
            for (;;) {
                FUN_0c18778c(t0, t1, 0xC5426C4);
                t0 = (t4 + 0x28);
                t1 = t5;
                if ((unsigned int)t0 >= (unsigned int)t5) {
                    break;
                }
            }
        }
    }
    return FUN_0c02cade();
}
