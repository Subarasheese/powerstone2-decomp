/* game/unsorted: functions 0C16C484-0C16C730, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c05aae4(int, int);
int FUN_0c05aaf6(int);
int FUN_0c179ac0(void);
int FUN_0c16c484(int a4, int a5, int a6, int a7);

int FUN_0c16c484(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC540F98, t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = 0x4;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0500000007f);
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0500000007f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0500000007f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                return FUN_0c03f346(a4, 0x3, 0x4, a7);
            }
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.00999999978f);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.00999999978f);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00999999978f);
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x3;
                t0 = (((struct o20_short *)(a4))->v);
                switch (t0) {
                case 1:
                    (((struct o20_ushort *)(a4))->v) = 0x2;
                    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x54, (*(int *)0xC4B40CC));
                    break;
                case 2:
                    (((struct o20_ushort *)(a4))->v) = 0x3;
                    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x54, (*(int *)0xC4B40CC));
                    break;
                case 3:
                    (((struct o20_ushort *)(a4))->v) = 0x4;
                    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x54, (*(int *)0xC4B40CC));
                    break;
                case 4:
                    (((struct o20_ushort *)(a4))->v) = 0x1;
                    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x54, (*(int *)0xC4B40CC));
                    break;
                }
            }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                t0 = (((struct oC4_int *)(a4))->v);
                u0 = (((struct o28_float *)(a4))->v);
                u1 = (((struct o2C_float *)(a4))->v);
                u2 = (((struct o30_float *)(a4))->v);
                FUN_0c037498(t0, 0x0, 0x20, (*(int *)0xC4B40CC));
                (((struct o28_float *)(a4))->v) = u0;
                (((struct o2C_float *)(a4))->v) = u1;
                (((struct o30_float *)(a4))->v) = u2;
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct o44_float *)(a4))->v) = 0.0f;
                (((struct o48_float *)(a4))->v) = 0.0f;
                FUN_0c05aaf6(0xD1);
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) != 0) {
            return (short)(t0 - 1);
        }
        (((struct o50_float *)(a4))->v) = -20.0f;
        (((struct o54_float *)(a4))->v) = 10.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x64;
        *(unsigned short *)((a4 + 0x1E)) = 0x3;
        (((struct o20_ushort *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return FUN_0c05aae4(0x65, (a4 + 0x28));
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 2000.0f);
    t0 = (int)((int)(FUN_0c179ac0()) % (int)0xC8);
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((float)(((t0 << 2) + t0) << 1) + -2000.0f));
    t0 = *(signed char *)((a4 + 0x2));
    *(unsigned short *)((a4 + 0x1C)) = ((((int)((int)(FUN_0c179ac0()) % (int)0x14)) + (((t0 << 2) + t0) << 2)) + 0x1);
    (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0xFFFFEAAB;
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o18_float *)(t0))->v) = 0.0f;
    (((struct o1C_float *)(t0))->v) = 0.0f;
    (((struct o20_float *)(t0))->v) = 0.0f;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
