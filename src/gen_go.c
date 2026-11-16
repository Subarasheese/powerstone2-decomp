/* Straight-line functions with calls and guards (batch gen_go): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c1507f4(int a4, int a5, int a6, int a7);

int FUN_0c1507f4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t1 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t1;
        }
        t1 = a4;
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t4 = t3;
            t4 = (t4 << 2);
            t4 = (t4 + (0xC4 + a4));
            t4 = (*(int *)((t4 + 0x0)));
            t5 = (*(signed char *)((t4 + 0x0)));
            if (t5 != 0) {
                t2 = (t2 + 0x1);
                t1 = 0x90;
                t1 = (t1 + t4);
                FUN_0c17c130(t1, (0x90 + t4), (0x9C + t4));
                t1 = t4;
                t1 = (t1 + 0x6C);
                FUN_0c17c130(t1, (t4 + 0x6C), (0x90 + t4));
                t5 = (*(signed char *)(((((0x41C + a4) + 0x8) + t3) + 0x0)));
                t5 = (t5 - 1);
                *(unsigned char *)(((((0x41C + a4) + 0x8) + t3) + 0x0)) = t5;
                t5 = (signed char)t5;
                if (t5 == 0) {
                    t6 = (0x41C + a4);
                    t6 = (t6 + 0x8);
                    t5 = 0xC4B40CC;
                    t6 = (t6 + t3);
                    *(unsigned char *)((t6 + 0x0)) = 0x4;
                    t1 = t4;
                    FUN_0c037498(t1, (*(signed char *)((((0x41C + a4) + t3) + 0x0))), 0x7, (*(int *)((t5 + 0x0))));
                    t5 = (0x41C + a4);
                    t5 = (t5 + t3);
                    t7 = *(signed char *)((t5 + 0x0));
                    *(unsigned char *)((t5 + 0x0)) = (t7 + 0x1);
                    t5 = 0xA;
                    if ((int)(signed char)(t7 + 0x1) >= (int)t5) {
                        *(unsigned char *)((t4 + 0x0)) = 0x0;
                    }
                }
                t5 = (0x41C + a4);
                t5 = (t5 + t3);
                t7 = *(signed char *)((t5 + 0x0));
                t5 = 0x5;
                if ((int)t7 >= (int)t5) {
                    t6 = (0x41C + a4);
                    t6 = (t6 + t3);
                    u0 = (float)(*(signed char *)((t6 + 0x0)));
                    u1 = (float)(*(signed char *)(((((0x41C + a4) + 0x8) + t3) + 0x0)));
                    u0 = (-u0);
                    u0 = (u0 + 15.0f);
                    u2 = u1;
                    u2 = u2 + 4.0f * u0;
                    u1 = u2;
                    u0 = (*(float *)0xC150A4C);
                    u1 = (u1 / u0);
                    (((struct o14_float *)(t4))->v) = u1;
                    t5 = t6;
                    u2 = u1;
                    u3 = u0;
                }
                u1 = u2;
                u0 = u3;
                t6 = t5;
                u2 = ((((struct o10_float *)((0x41C + a4)))->v));
                u0 = (float)(*(signed char *)((((0x41C + a4) + t3) + 0x0)));
                u1 = (float)(*(signed char *)(((((0x41C + a4) + 0x8) + t3) + 0x0)));
                u0 = (u0 * 4.0f);
                u0 = (u0 - u1);
                u0 = (u0 + 4.0f);
                u0 = (u0 / 64.0f);
                u2 = (u2 + u0);
                u2 = (u2 * 0.800000012f);
                (((struct o8C_float *)(t4))->v) = u2;
                (((struct o88_float *)(t4))->v) = u2;
                (((struct o84_float *)(t4))->v) = u2;
            } else {
                t4 = t1;
            }
            t3 = (t3 + 0x1);
            t1 = t4;
        }
        t1 = 0xC0;
        if (t2 == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)0xC542237;
    *(volatile signed char *)((((((((t1 << 1) + t1) << 2) << 1) + 0xC203288) + (((*(signed char *)0xC54223C) << 2) << 1)) + (*(short *)((a4 + 0x1C)))));
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        *(unsigned char *)((((0x41C + a4) + t1) + 0x0)) = 0x1;
        *(unsigned char *)(((((0x41C + a4) + 0x8) + t1) + 0x0)) = 0x1;
        t2 = *(int *)((((t1 << 2) + (0xC4 + a4)) + 0x0));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        (((struct o14_float *)(t2))->v) = 1.0f;
        FUN_0c187798(0x1, t1, t2);
        t1 = (t0 + 0x1);
    }
    return 0xC0;
}
