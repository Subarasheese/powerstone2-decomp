/* Straight-line functions with calls and guards (batch gen_qh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
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
int FUN_0c11c0b0(int a4, int a5, int a6, int a7);

int FUN_0c11c0b0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(signed char *)((a4 + 0x2))), 0x16, (*(int *)0xC4B410C));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2921F4); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A0CA0); }
        t3 = (((struct oC4_int *)(a4))->v);
        t4 = nlRand();
        t5 = (t4 % 0x8);
        u0 = (((float)t5 * 360.0f) / 8.0f);
        (((struct o7C_uint *)(t3))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    }
    t3 = *(short *)((a4 + 0x1C));
    if (((int)t3 >= (int)((((struct o4_int *)0xC292224)->v))) && (t0 = (((struct o8_int *)0xC292224)->v), (int)t3 <= (int)t0)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC292200, 0xC2921F4, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC292224)->v))), (((((struct o4_int *)0xC292224)->v))));
    }
    if ((*(short *)((a4 + 0x1E))) != 0) {
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct o1C_int *)0xC292224)->v)));
    } else {
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - ((((struct o1C_int *)0xC292224)->v)));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct oC_int *)0xC292224)->v))) && (t1 = (((struct o10_int *)0xC292224)->v), (int)t0 <= (int)t1)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC292224)->v))), (((((struct oC_int *)0xC292224)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o14_int *)0xC292224)->v))) && (t2 = (((struct o18_int *)0xC292224)->v), (int)t0 <= (int)t2)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC292224)->v))), (((((struct o14_int *)0xC292224)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC292224)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
