/* Straight-line functions with calls and guards (batch gen_zn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_float { char p[0x41C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c147164(int a4, int a5, int a6, int a7);

int FUN_0c147164(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t20;
    register int t28;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A264C); }
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * ((((struct o41C_float *)(a4))->v)));
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * ((((struct o41C_float *)(a4))->v)));
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * ((((struct o41C_float *)(a4))->v)));
    }
    if ((t0 == 0) || (t0 == 1)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(0xC2A2640); }
        FUN_0c058adc(((int)stk + 8), ((int)stk + 8), (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532E38));
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x10;
        FUN_0c0588bc((a4 + 0x28), (((((struct oD0_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x84), (((int)stk + 0) + 0x8), (*(short *)((a4 + 0x1C))), 0x10, 0x0);
        t20 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t20 + 0x1);
        t28 = (short)(t20 + 0x1);
        if ((int)(short)(t20 + 0x1) > (int)0x1E) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t28 = 0x14;
        }
    } else {
        t28 = t0;
        if (t0 != 99) {
        } else {
            t28 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    }
    return t28;
}
