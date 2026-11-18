/* game/player: functions 0C0DF294-0C0DF780, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int math_mat_get_translate(int, int);
int FUN_0c150160(int, int, float, float, float, float);
int FUN_0c15d386(int, int, int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c0df294(int a4);
int FUN_0c0df2f0(int a4);
int FUN_0c0df30a(int a4);

int FUN_0c0df294(int a4)
{
    register int t0;

    t0 = (((struct o22_short *)(a4))->v);
    (((struct o14_float *)0xC287FE0)->v) = ((((struct o4_float *)((((t0 << 2) << 2) + 0xC1CA2DC)))->v));
    (((struct o0_uint *)0xC287FE0)->v) = (*(int *)((((((*(int *)(((((t0 << 2) << 2) + 0xC1CA2DC) + 0x8))) << 2) << 1) + 0xC1CA2BC) + 0x0)));
    (((struct oC_uint *)0xC287FE0)->v) = (*(int *)(((0xC1CA2BC + (((*(int *)(((((t0 << 2) << 2) + 0xC1CA2DC) + 0x8))) << 2) << 1)) + 0x4)));
    FUN_0c15d386(0x1, 0xC287FF4, 0xC287FDC, 0xC287FE8, ((*(int *)(((((t0 << 2) << 2) + 0xC1CA2DC) + 0xC)))));
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
    return 0x22;
}

int FUN_0c0df2f0(int a4)
{
    if ((*(float *)(((((((((struct o22_short *)(a4))->v)) << 2) << 2) + 0xC1CA2DC) + 0x0))) > ((((struct o28_float *)(a4))->v))) {
        return 0x28;
    }
    return FUN_0c0df294(a4);
}

