/* game/unsorted: functions 0C0C57E0-0C0C6A94, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c07e328(int, int);
int FUN_0c0c2ab6(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(int);
float FUN_0c0c5c60(int a4, int a5, int a6, int a7);

float FUN_0c0c5c60(int a4, int a5, int a6, int a7)
{
    register float u20;
    register float t24;

    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x2;
    (((struct o22_ushort *)(a4))->v) = 0x78;
    *(unsigned short *)((a4 + 0x1E)) = 0x5;
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))), a6, a7);
    FUN_0c07e328(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C7))));
    (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
    (((struct o12A_ushort *)(a4))->v) = (((((struct o12A_short *)(a4))->v)) & 0xFFFFFFBF);
    if ((*(signed char *)((a4 + 0x41F))) == 2) {
        *(volatile signed char *)((a4 + 0x1));
        FUN_0c187798(0xC532498);
    } else {
        *(volatile signed char *)((a4 + 0x1));
        FUN_0c187798(0xC532498);
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
    }
    u20 = (((struct o0_float *)0xC0C5DA4)->v);
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u20);
    (((struct o50_float *)(a4))->v) = 0.0f;
    t24 = math_cos_angle16((*(int *)((a4 + 0x38))));
    (((struct o54_float *)(a4))->v) = (t24 * u20);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = ((((struct oC_float *)0xC0C5DA4)->v));
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return (t24 * u20);
}
