/* game/unsorted: functions 0C13A044-0C13A332, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c03f444(int, int, int);
int FUN_0c13a044(int a4);

int FUN_0c13a044(int a4)
{
    register int t0;
    register int t1;

    (((struct o0_uint *)0xC2A1CD8)->v) = ((int)(((((float)(-(((((struct o0_int *)0xC2A1E44)->v)) << 1)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o4_uint *)0xC2A1CD8)->v) = ((int)(((((float)(-((((struct o0_int *)0xC2A1E44)->v))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o8_uint *)0xC2A1CD8)->v) = 0x0;
    (((struct oC_uint *)0xC2A1CD8)->v) = ((int)(((((float)((((struct o0_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o10_uint *)0xC2A1CD8)->v) = ((int)(((((float)(((((struct o0_int *)0xC2A1E44)->v)) << 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct o4_int *)0xC2A1E44)->v);
    (((struct o14_uint *)0xC2A1CD8)->v) = ((int)(((((float)((((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1) - (t0 << 1)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct o4_int *)0xC2A1E44)->v);
    (((struct o18_uint *)0xC2A1CD8)->v) = ((int)(((((float)((((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1) - t0) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct o4_int *)0xC2A1E44)->v);
    (((struct o1C_uint *)0xC2A1CD8)->v) = ((int)(((((float)(t0 - (((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct o4_int *)0xC2A1E44)->v);
    (((struct o20_uint *)0xC2A1CD8)->v) = ((int)(((((float)((t0 << 1) - (((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o24_uint *)0xC2A1CD8)->v) = ((int)(((((float)(-((((struct o8_int *)0xC2A1E44)->v))) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o28_uint *)0xC2A1CD8)->v) = 0x0;
    (((struct o2C_uint *)0xC2A1CD8)->v) = ((int)(((((float)((((struct o8_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o0_uint *)0xC2A1D98)->v) = ((int)(((((float)((((struct oC_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o4_uint *)0xC2A1D98)->v) = ((int)(((((float)((((struct oC_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o8_uint *)0xC2A1D98)->v) = ((int)(((((float)((((struct oC_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct oC_uint *)0xC2A1D98)->v) = ((int)(((((float)((((struct oC_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o10_uint *)0xC2A1D98)->v) = ((int)(((((float)((((struct oC_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o14_uint *)0xC2A1D98)->v) = ((int)(((((float)((((struct o10_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o18_uint *)0xC2A1D98)->v) = ((int)(((((float)((((struct o10_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o1C_uint *)0xC2A1D98)->v) = ((int)(((((float)((((struct o10_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o20_uint *)0xC2A1D98)->v) = ((int)(((((float)((((struct o10_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o24_uint *)0xC2A1D98)->v) = ((int)(((((float)((((struct o14_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o28_uint *)0xC2A1D98)->v) = ((int)(((((float)((((struct o14_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o2C_uint *)0xC2A1D98)->v) = ((int)(((((float)((((struct o14_int *)0xC2A1E44)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    (((struct o30_float *)0xC2A1CD8)->v) = ((((struct o18_float *)0xC2A1E44)->v));
    (((struct o34_float *)0xC2A1CD8)->v) = ((((struct o18_float *)0xC2A1E44)->v));
    (((struct o38_float *)0xC2A1CD8)->v) = ((((struct o18_float *)0xC2A1E44)->v));
    (((struct o3C_float *)0xC2A1CD8)->v) = ((((struct o18_float *)0xC2A1E44)->v));
    (((struct o0_float *)0xC2A1D18)->v) = ((((struct o18_float *)0xC2A1E44)->v));
    (((struct o4_float *)0xC2A1D18)->v) = ((((struct o1C_float *)0xC2A1E44)->v));
    (((struct o8_float *)0xC2A1D18)->v) = ((((struct o1C_float *)0xC2A1E44)->v));
    (((struct oC_float *)0xC2A1D18)->v) = ((((struct o1C_float *)0xC2A1E44)->v));
    (((struct o10_float *)0xC2A1D18)->v) = ((((struct o1C_float *)0xC2A1E44)->v));
    (((struct o14_float *)0xC2A1D18)->v) = ((((struct o20_float *)0xC2A1E44)->v));
    (((struct o18_float *)0xC2A1D18)->v) = ((((struct o20_float *)0xC2A1E44)->v));
    (((struct o1C_float *)0xC2A1D18)->v) = ((((struct o20_float *)0xC2A1E44)->v));
    (((struct o20_float *)0xC2A1D18)->v) = ((((struct o24_float *)0xC2A1E44)->v));
    (((struct o24_float *)0xC2A1D18)->v) = ((((struct o24_float *)0xC2A1E44)->v));
    (((struct o28_float *)0xC2A1D18)->v) = ((((struct o24_float *)0xC2A1E44)->v));
    (((struct o2C_float *)0xC2A1D18)->v) = ((((struct o24_float *)0xC2A1E44)->v));
    (((struct o30_float *)0xC2A1D18)->v) = ((((struct o24_float *)0xC2A1E44)->v));
    (((struct o34_float *)0xC2A1D18)->v) = ((((struct o28_float *)0xC2A1E44)->v));
    (((struct o38_float *)0xC2A1D18)->v) = ((((struct o28_float *)0xC2A1E44)->v));
    (((struct o3C_float *)0xC2A1D18)->v) = ((((struct o28_float *)0xC2A1E44)->v));
    (((struct o0_float *)0xC2A1D58)->v) = ((((struct o28_float *)0xC2A1E44)->v));
    (((struct o4_float *)0xC2A1D58)->v) = ((((struct o2C_float *)0xC2A1E44)->v));
    (((struct o8_float *)0xC2A1D58)->v) = ((((struct o2C_float *)0xC2A1E44)->v));
    (((struct oC_float *)0xC2A1D58)->v) = ((((struct o2C_float *)0xC2A1E44)->v));
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        t1 = *(signed char *)((a4 + 0x1));
        *(unsigned char *)((t0 + 0x1)) = t1;
        *(unsigned int *)((t0 + 0x4)) = 0xC139D98;
    }
    return t1;
}
