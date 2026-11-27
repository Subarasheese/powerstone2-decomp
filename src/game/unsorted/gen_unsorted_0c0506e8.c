/* game/unsorted: functions 0C0506E8-0C050C16, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_float { char p[0x88]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0506e8(void);

/* manual: 12 object slots at +0xC4 set up in a loop; see cases */
int FUN_0c0506e8(void)
{
    register int t0;
    register int t1;
    register int t2;
    int i;
    int a;
    static const unsigned char tab[12] = {0, 0, 0xC, 0xC, 0x18, 0x18, 0x24, 0x30, 0x3C, 0x3C, 0x48, 0x54};

    t0 = FUN_0c03f444(0x8, 0x0, 0xC);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned int *)((t0 + 0x4)) = 0xC0502CA;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 64.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 64.0f);
        (((struct o30_float *)(t0))->v) = -10.0f;
        (((struct o44_float *)(t0))->v) = 0.015625f;
        (((struct o40_float *)(t0))->v) = 0.015625f;
        (((struct o48_float *)(t0))->v) = 1.56249996e-07f;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 2.34375f);
        for (i = 0; i < 12; i++) {
            t2 = *(int *)(t0 + 0xC4 + i * 4);
            FUN_0c03744a(t2, 0x0, 0x5, (*(int *)0xC4B410C));
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned short *)((t2 + 0x6)) = 0x1F;
            a = (int)0xC241398 + tab[i];
            (((struct o6C_float *)(t2))->v) = (*(float *)a) + -150.0f;
            (((struct o70_float *)(t2))->v) = *(float *)(a + 4);
            (((struct o74_float *)(t2))->v) = 30000.0f;
            (((struct o80_uint *)(t2))->v) = (int)(((float)(*(int *)(0xC241398 + 0x6C + i * 4)) * 65536.0f) / 360.0f);
            (((struct o88_float *)(t2))->v) = *(float *)(0xC241398 + 0x9C + i * 4);
        }
        t1 = 0x88;
    }
    return t1;
}
