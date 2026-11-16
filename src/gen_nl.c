/* Straight-line functions with calls and guards (batch gen_nl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(int);
int FUN_0c187798(int, int, int);
int FUN_0c1366b0(int a4, int a5, int a6);
int FUN_0c13a686(int a4, int a5, int a6, int a7);

int FUN_0c1366b0(int a4, int a5, int a6)
{
    int stk[29];
    register int t0;
    register int t3;
    register int t6;
    register int t7;
    register int t8;
    register int t12;
    register int t16;
    register int t23;
    register float u21;

    *(unsigned char *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 12)) = a6;
    t0 = *(int *)0xC542260;
    t3 = 0x0;
    if ((*(signed char *)(((int)stk + 12))) != 0) {
        t3 = 0xC;
    }
    t6 = 0x0;
    t7 = ((((((signed char)((t0 & 0x2) << 1) + (signed char)t3) << 1) + ((signed char)((t0 & 0x2) << 1) + (signed char)t3)) << 2) + 0xC201EBC);
    t8 = (((int)stk + 8) + 0xC);
    for (;;) {
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798((signed char)t3, 0x0, a6);
        FUN_0c17c130(t8, t8, t7);
        t6 = (t6 + 0x1);
        t7 = (t7 + 0xC);
        t8 = (t8 + 0xC);
        if ((int)(signed char)t6 >= (int)0x8) {
            break;
        }
    }
    t12 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t12 & 0x7) << 1) + (t12 & 0x7)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = (((((signed char)((t0 & 0x2) << 1) << 1) + (signed char)((t0 & 0x2) << 1)) << 2) + 0xC202E68);
    t16 = FUN_0c1502e8((*(signed char *)(((int)stk + 16))), 0x8, 0x2, (((int)stk + 0) + 0x14), (((((signed char)((t0 & 0x2) << 1) << 1) + (signed char)((t0 & 0x2) << 1)) << 2) + 0xC202E68), (((((t12 & 0x7) << 1) + (t12 & 0x7)) << 2) + 0xC2030D8));
    t23 = t16;
    if (t16 != 0) {
        u21 = 1.0f;
        if ((*(signed char *)(((int)stk + 12))) != 0) {
            u21 = (*(float *)0xC1367D8);
        }
        (((struct o10_float *)((t16 + 0x41C)))->v) = u21;
        t23 = 0x10;
    }
    return t23;
}

int FUN_0c13a686(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        FUN_0c0588bc((a4 + 0x40), 0xC2A1F00, 0xC2A1EF4, (*(short *)((a4 + 0x1C))), 0x18, 0x0);
        FUN_0c058a6e((0xB0 + a4), 0xC2A1F1C, 0xC2A1F0C, (*(short *)((a4 + 0x1C))), 0x18, 0x0);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x18) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x21F;
    FUN_0c18778c(a4);
    return FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
}
