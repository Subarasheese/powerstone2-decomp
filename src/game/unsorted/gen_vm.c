/* Straight-line functions with calls and guards (batch gen_vm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
void FUN_0c15dd90(int a4);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };


void FUN_0c15dd90(int a4)
{
    int t12;
    int t27;
    int t41;
    int t0;
    int t23;
    int qa0;
    int t6;
    int s4;
    int s0;
    int t40;
    int t26;
    int t11;
    int t8;
    int R1008;
    int R1004;
    int t31;
    int t24;
    int t22;
    int t1;
    int t38;
    int t9;
    int t2;

    qa0 = 0xC4B4114;
    R1004 = s0;
    R1008 = s4;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)0xC5429A8;
        t2 = *(int *)(((((t0 << 2) + t0) << 2) + 0xC20375C));
        t6 = t2;
        if (t1 != 0) {
            t6 = (t2 + 0x8);
            if (t1 == 1) {
                t6 = (t2 + 0x4);
            }
        }
        t8 = *(int *)qa0;
        t9 = t6;
        if ((int)t6 >= (int)0xA) {
            t9 = (t6 + 0x6);
        }
        t11 = FUN_0c037320(t9, t8);
        t12 = FUN_0c03f444(0x8, 0x0, t11);
        if (t12 != 0) {
            FUN_0c03733c(t12, t9, (*(int *)qa0));
            (((struct oAC_ushort *)(t12))->v) = 0x1F;
            (((struct oA9_uchar *)(t12))->v) = 0x21;
            (((struct o1_uchar *)(t12))->v) = 0xFFFFFFFF;
            (((struct o4_uint *)(t12))->v) = 0xC15DA24;
            (((struct o2_uchar *)(t12))->v) = t0;
            (((struct o20_ushort *)(t12))->v) = a4;
            (((struct o1C_ushort *)(t12))->v) = ((*(short *)((((((t0 << 2) + t0) << 2) + 0xC20375C) + 0x4))) + a4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t12 + 0x28) = *(struct mv3 *)((((((t0 << 2) + t0) << 2) + 0xC20375C) + 0x8)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t12 + 0x40) = *(struct mv3 *)(0xC2037FC); }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t22 = *(signed char *)0xC5421DF;
    t38 = 0;
    if (t22 != 1) {
        if (t22 != 2) {
            t38 = 1;
        } else {
            t23 = 0x0;
            for (;;) {
                R1008 = (((t23 << 2) + t23) << 2);
                t24 = *(int *)((((((t23 << 2) + t23) << 2) + 0xC2037C0) + 0x0));
                R1004 = t24;
                t26 = FUN_0c037320(t24, (*(int *)qa0));
                t27 = FUN_0c03f444(0x8, 0x0, t26);
                if (t27 != 0) {
                    FUN_0c03733c(t27, (R1004), (*(int *)qa0));
                    (((struct oAC_ushort *)(t27))->v) = 0x1F;
                    (((struct oA9_uchar *)(t27))->v) = 0x21;
                    (((struct o1_uchar *)(t27))->v) = 0xFFFFFFFF;
                    (((struct o4_uint *)(t27))->v) = 0xC15DB86;
                    (((struct o2_uchar *)(t27))->v) = (t23 + 0x1);
                    (((struct o20_ushort *)(t27))->v) = a4;
                    t31 = R1008;
                    (((struct o1C_ushort *)(t27))->v) = ((*(short *)(t31 + 0xC2037C4)) + a4);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t27 + 0x28) = *(struct mv3 *)(t31 + 0xC2037C8); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t27 + 0x40) = *(struct mv3 *)(0xC2037FC); }
                }
                t23 = (t23 + 0x1);
                if ((unsigned int)t23 >= (unsigned int)0x3) {
                    break;
                }
            }
        }
    } else {
        t38 = 1;
    }
    if (t38) {
        t40 = FUN_0c037320(0x12, (*(int *)qa0));
        t41 = FUN_0c03f444(0x8, 0x0, t40);
        if (t41 != 0) {
            FUN_0c03733c(t41, 0x12, (*(int *)qa0));
            (((struct oAC_ushort *)(t41))->v) = 0x1F;
            (((struct oA9_uchar *)(t41))->v) = 0x21;
            (((struct o1_uchar *)(t41))->v) = 0xFFFFFFFF;
            (((struct o4_uint *)(t41))->v) = 0xC15DB86;
            (((struct o2_uchar *)(t41))->v) = 0x0;
            (((struct o20_ushort *)(t41))->v) = a4;
            (((struct o1C_ushort *)(t41))->v) = ((*(short *)0xC2037B0) + a4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t41 + 0x28) = *(struct mv3 *)(0xC2037B4); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t41 + 0x40) = *(struct mv3 *)(0xC2037FC); }
        }
    }
}
