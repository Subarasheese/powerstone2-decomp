/* game/unsorted: functions 0C04FE1C-0C0506E2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
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
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
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
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c04fe1c(void);
int FUN_0c0502ca(int a4);

/* manual: allocs the 12-bar object and starts its 12 sub-objects (a loop: the original wrote the copy out 12 times); 6 cases, 564 of 564 instructions */
int FUN_0c04fe1c(void)
{
    register int t0;
    register int t1;
    register int t2;
    int k;
    int m;

    t0 = FUN_0c03f444(0x8, 0x0, 0xC);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC04F8C4;
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 64.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 64.0f);
        (((struct o30_float *)(t0))->v) = -10.0f;
        (((struct o44_float *)(t0))->v) = 0.015625f;
        (((struct o40_float *)(t0))->v) = 0.015625f;
        (((struct o48_float *)(t0))->v) = 1.56249996e-07f;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + 2.34375f);
        for (k = 0; k < 12; k++) {
            m = (k < 6) ? (k >> 1) : ((k < 9) ? (k - 3) : (k - 4));
            t2 = *(int *)(t0 + 0xC4 + k * 4);
            FUN_0c03744a(t2, 0x0, 0x4, (*(int *)0xC4B410C));
            *(unsigned char *)((t2 + 0x0)) = 0x1;
            *(unsigned short *)((t2 + 0x6)) = 0xF;
            *(float *)(t2 + 0x6C) = (((float *)0xC241398)[m * 3]) + -150.0f;
            *(float *)(t2 + 0x70) = (((float *)0xC241398)[m * 3 + 1]);
            *(float *)(t2 + 0x74) = 40000.0f;
            *(unsigned int *)(t2 + 0x80) = (int)(((float)(((int *)0xC241404)[k]) * 65536.0f) / 360.0f);
        }
        t1 = 0x80;
    }
    return t1;
}

