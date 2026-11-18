/* game/object: functions 0C0C3A60-0C0C3EB2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o100_int { char p[0x100]; int v; };
struct o10C_int { char p[0x10C]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c187798(void);
int FUN_0c0c3a60(int a4, int a5);
int FUN_0c0c3aac(int a4);
int FUN_0c0c3ae8(int a4, int a5, int a6);

int FUN_0c0c3a60(int a4, int a5)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    (((struct o28_float *)(a4))->v) = ((((struct o4_float *)(((a5 * 0x1C) + 0xC1C72A0)))->v));
    (((struct o2C_float *)(a4))->v) = ((((struct o8_float *)(((a5 * 0x1C) + 0xC1C72A0)))->v));
    (((struct o30_float *)(a4))->v) = ((((struct oC_float *)(((a5 * 0x1C) + 0xC1C72A0)))->v));
    *(unsigned int *)((a4 + 0x34)) = (*(int *)((((a5 * 0x1C) + 0xC1C72A0) + 0x10)));
    *(unsigned int *)((a4 + 0x38)) = (*(int *)((((a5 * 0x1C) + 0xC1C72A0) + 0x14)));
    *(unsigned int *)((a4 + 0x3C)) = (*(int *)((((a5 * 0x1C) + 0xC1C72A0) + 0x18)));
    (((struct oA4_uint *)(a4))->v) = ((*(int *)(((0xC4 + (((short)t0 * (short)0x3938) + 0xC532498)) + ((*(signed char *)((((a5 * 0x1C) + 0xC1C72A0) + 0x0))) << 2)))) + 0x28);
    return 0xA4;
}

int FUN_0c0c3aac(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    (((struct o28_float *)(a4))->v) = (1.0f + 1.0f);
    (((struct o2C_float *)(a4))->v) = ((((struct o0_float *)0xC0C3B84)->v));
    (((struct o30_float *)(a4))->v) = ((((struct o4_float *)0xC0C3B84)->v));
    *(unsigned int *)((a4 + 0x34)) = 0x4600;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2100;
    (((struct oA4_uint *)(a4))->v) = (((((struct oF4_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) + 0x28);
    return 0xA4;
}

