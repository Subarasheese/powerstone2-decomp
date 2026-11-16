/* Straight-line functions with calls and guards (batch gen_as): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c07e328(int, int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0c8c90(int a4, int a5, int a6, int a7);
int FUN_0c0d7ed0(int a4, int a5, int a6, int a7);

int FUN_0c0c8c90(int a4, int a5, int a6, int a7)
{
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))), a6, a7);
    FUN_0c07e328(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C6))));
    (((struct o12A_ushort *)(a4))->v) = 0xF;
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    (((struct o426_ushort *)(a4))->v) = 0x0;
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 1.0f;
    (((struct o40_float *)(a4))->v) = 1.0f;
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC0C8DC0);
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0d7ed0(int a4, int a5, int a6, int a7)
{
    register int t11;
    register int t8;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, 0x1, a6, a7);
    }
    t11 = *(signed char *)((a4 + 0x14));
    if (t11 != 0) {
        
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798(a4, 0x1, a6);
        *(unsigned int *)((t8 + 0x38)) = (int)(((float)(*(int *)((0xC2876A4 + ((*(signed char *)((t8 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        (((struct o126_uchar *)(t8))->v) = 0x2;
        t11 = 0x126;
    }
    return t11;
}
