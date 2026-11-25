/* Straight-line functions with calls and guards (batch gen_yp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c10caec(int);
int FUN_0c1171f0(int);
void FUN_0c10d458(int a4, int a5, int a6, int a7);

void FUN_0c10d458(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t5;
    register int t17;
    register int t18;
    register int t35;
    register int t39;
    register int t40;
    register int t43;
    register int t38;
    register int t26;
    register int t27;
    register int t28;
    register int t52;
    register int R1004;
    register int R1008;
    register int R1012;
    register int R1016;
    register int R1020;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);
    R1020 = *(int *)((int)stk + 16);

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 5) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t5 = *(signed char *)((a4 + 0x14));
    if (t5 != 0) {
        if (t5 == 1) {
            t38 = a4;
        } else {
            if (t5 == 99) {
                FUN_0c03f346(a4, a5, a6, a7);
    return;
            }
            return;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC290EB8); }
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x9, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x9, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x2, 0x9, (*(int *)0xC4B410C));
        R1020 = 0xC290E88;
        R1016 = 0xC290EA0;
        t17 = 0x0;
        for (;;) {
            t18 = *(int *)0xC4B410C;
            if ((int)t17 < (int)0x4) {
                R1012 = (t17 << 2);
                FUN_0c03744a((*(int *)((((t17 << 2) + (0xC4 + a4)) + 0xC))), 0x9, 0x9, t18);
                R1008 = 0x0;
                R1004 = 0x3;
                t26 = 0xC290E94;
                t27 = (R1020);
                t28 = t17;
            } else {
                R1012 = (t17 << 2);
                FUN_0c03744a((*(int *)((((t17 << 2) + (0xC4 + a4)) + 0xC))), 0xA, 0x9, t18);
                R1008 = 0x0;
                R1004 = 0x3;
                t26 = 0xC290EAC;
                t27 = (R1016);
                t28 = (t17 - 4);
            }
            FUN_0c0588bc(((*(int *)((((0xC4 + a4) + (R1012)) + 0xC))) + 0x6C), t26, t27, t28, 0x3, 0x0);
            *(unsigned short *)(((*(int *)((((0xC4 + a4) + (t17 << 2)) + 0xC))) + 0x6)) = 0x21F;
            { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)((((0xC4 + a4) + (t17 << 2)) + 0xC))) + 0x14)) = *(struct mv4 *)((((t17 << 2) << 2) + 0xC290D70)); }
            t35 = (t17 << 2);
            t17 = (t17 + 0x1);
            if ((int)t17 >= (int)0x8) {
                break;
            }
        }
        t38 = t35;
    }
    t39 = t38;
    t40 = 0x0;
    for (;;) {
        if ((*(int *)0xC473978) == t40) {
            t39 = (*(int *)((a4 + 0x10)));
            t43 = FUN_0c10caec(t39);
            if (t43 != 0) {
                { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)((((0xC4 + a4) + (t40 << 2)) + 0xC))) + 0x14)) = *(struct mv4 *)(((((t40 << 2) << 2) + 0xC290D70) + 0x80)); }
            } else {
                { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)((((0xC4 + a4) + (t40 << 2)) + 0xC))) + 0x14)) = *(struct mv4 *)((((t40 << 2) << 2) + 0xC290D70)); }
            }
        } else {
            { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)((((0xC4 + a4) + (t40 << 2)) + 0xC))) + 0x14)) = *(struct mv4 *)((((t40 << 2) << 2) + 0xC290D70)); }
            t52 = t39;
        }
        t40 = (t40 + 0x1);
        t39 = t52;
        if ((int)t40 >= (int)0x8) {
            break;
        }
    }
}
