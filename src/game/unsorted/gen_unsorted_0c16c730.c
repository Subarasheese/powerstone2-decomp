/* game/unsorted: functions 0C16C730-0C16C89E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c16c730(void);

int FUN_0c16c730(void)
{
    register int t0;
    register int t4;
    register int t35;
    register float u1;

    t0 = 0x0;
    for (;;) {
        FUN_0c037320(0x4A, ((((struct oC_int *)0xC4B40CC)->v)));
        t4 = FUN_0c03f444(0x6, 0x0, 0x3);
        t35 = t4;
        if (t4 != 0) {
            *(unsigned int *)((t4 + 0x4)) = 0xC16C8E8;
            *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t4 + 0x2)) = t0;
            (((struct oA8_uchar *)(t4))->v) = 0x0;
            (((struct oAC_ushort *)(t4))->v) = 0x1F;
            (((struct oA9_uchar *)(t4))->v) = 0x21;
            FUN_0c03744a(((((struct oC4_int *)(t4))->v)), 0x0, 0x4A, ((((struct oC_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oC4_int *)(t4))->v)) + 0x6)) = 0xF;
            FUN_0c03744a(((((struct oC8_int *)(t4))->v)), 0x0, 0x54, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oC8_int *)(t4))->v)) + 0x6)) = 0x20F;
            (((struct o68_uint *)((*(int *)(((0xC4 + t4) + 0x4)))))->v) = (((((struct oC4_int *)(t4))->v)) + 0x28);
            FUN_0c03744a(((((struct oCC_int *)(t4))->v)), 0x1, 0x54, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oCC_int *)(t4))->v)) + 0x6)) = 0xF;
            (((struct o68_uint *)((*(int *)(((0xC4 + t4) + 0x8)))))->v) = (((((struct oC4_int *)(t4))->v)) + 0x28);
            (((struct o48_float *)(t4))->v) = (1.0f + 1.0f);
            (((struct o44_float *)(t4))->v) = (1.0f + 1.0f);
            (((struct o40_float *)(t4))->v) = (1.0f + 1.0f);
            (((struct o2C_float *)(t4))->v) = ((*(float *)0xC54109C) + 4000.0f);
            u1 = ((*(float *)(((((*(signed char *)0xC542237) << 2) << 1) + 0xC203CC8))) + (*(float *)(((((t0 << 2) << 1) + 0xC203BC8) + 0x0))));
            u1 = (u1 + (float)((int)((int)(FUN_0c179ac0()) % (int)0xC9)));
            u1 = (u1 + -100.0f);
            (((struct o28_float *)(t4))->v) = u1;
            u1 = ((*(float *)(((((*(signed char *)0xC542237) << 2) << 1) + 0xC203CCC))) + ((((struct o4_float *)((((t0 << 2) << 1) + 0xC203BC8)))->v)));
            u1 = (u1 + (float)((int)((int)(FUN_0c179ac0()) % (int)0xC9)));
            u1 = (u1 + -100.0f);
            (((struct o30_float *)(t4))->v) = u1;
            t35 = 0x30;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 < (int)0x20) continue;
        break;
    }
    return t35;
}
