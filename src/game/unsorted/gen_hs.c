/* Straight-line functions with calls and guards (batch gen_hs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c14af80(int a4, int a5, int a6, int a7);

int FUN_0c14af80(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t2, 0x7, 0xE, (*(int *)0xC4B40CC));
        *(unsigned short *)((t2 + 0x6)) = 0x15;
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        (((struct o8C_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o88_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o84_float *)(t2))->v) = (1.0f + 1.0f);
        *(unsigned int *)((t0 + 0x4)) = 0xC14B012;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC202B4C); }
        return FUN_0c0582de((t0 + 0x28), ((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28));
    }
    return t0;
}
