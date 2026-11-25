/* Straight-line functions with calls and guards (batch gen_rd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int nlRand(void);
int FUN_0c157a36(int a4, int a5, int a6, int a7);

int FUN_0c157a36(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    register int t5;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x23F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A28A0); }
        t4 = nlRand();
        t5 = (t4 % 0x8);
        (((struct o58_float *)(a4))->v) = (((((struct o0_float *)0xC2A28AC)->v)) * ((float)t5 / 8.0f));
        (((struct o5C_float *)(a4))->v) = (((((struct o4_float *)0xC2A28AC)->v)) * ((float)t5 / 8.0f));
        (((struct o60_float *)(a4))->v) = (((((struct o8_float *)0xC2A28AC)->v)) * ((float)t5 / 8.0f));
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x14, (*(int *)0xC4B40CC));
    }
    t4 = *(short *)((a4 + 0x1C));
    if (((int)t4 >= (int)((((struct o4_int *)0xC2A2844)->v))) && (t0 = (((struct o8_int *)0xC2A2844)->v), (int)t4 <= (int)t0)) {
        FUN_0c0588bc((a4 + 0x40), (a4 + 0x58), 0xC2A28A0, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A2844)->v))), (((((struct o4_int *)0xC2A2844)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct oC_int *)0xC2A2844)->v))) && (t1 = (((struct o10_int *)0xC2A2844)->v), (int)t0 <= (int)t1)) {
        FUN_0c0588bc((a4 + 0x40), (a4 + 0x58), 0xC2A28A0, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A2844)->v))), (((((struct oC_int *)0xC2A2844)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o14_int *)0xC2A2844)->v))) && (t2 = (((struct o18_int *)0xC2A2844)->v), (int)t0 <= (int)t2)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A2880, 0xC2A2870, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A2844)->v))), (((((struct o14_int *)0xC2A2844)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o1C_int *)0xC2A2844)->v))) && (t3 = (((struct o20_int *)0xC2A2844)->v), (int)t0 <= (int)t3)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A2890, 0xC2A2880, (*(short *)((a4 + 0x1C))), (((((struct o20_int *)0xC2A2844)->v))), (((((struct o1C_int *)0xC2A2844)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A2844)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
