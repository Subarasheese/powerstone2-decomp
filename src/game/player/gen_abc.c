/* Straight-line functions with calls and guards (batch gen_abc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058b06(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c15f9b4(int, int, int, int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int FUN_0c139010(int a4, int a5, int a6, int a7);

int FUN_0c139010(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A1BCC); }
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct o54_float *)(a4))->v) = 60.0f;
        FUN_0c058b06((a4 + 0x4C), (a4 + 0x34), (a4 + 0x4C));
        t0 = nlRand();
        t1 = (t0 % 0x10);
        if (t1 == 0) {
            FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x28);
        }
        t0 = nlRand();
        t1 = (t0 % 0x8);
        *(unsigned short *)((a4 + 0x1E)) = t1;
        t0 = 0xFFFFFFFF;
        if ((*(short *)((a4 + 0x1E))) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((int)((int)(nlRand()) % (int)0x5));
            t0 = ((*(short *)((a4 + 0x1E))) + 0x6);
        }
        *(unsigned short *)((a4 + 0x1E)) = t0;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    if ((*(short *)((a4 + 0x1C))) == (*(short *)((a4 + 0x1E)))) {
        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0xA) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
