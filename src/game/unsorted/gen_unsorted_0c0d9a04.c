/* game/unsorted: functions 0C0D9A04-0C0D9AC2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0d9a04(int a4, int a5, int a6, int a7);

int FUN_0c0d9a04(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    u0 = *(float *)0xC54109C;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return FUN_0c03f346(a4, 0x0, a6, a7);
                }
                u1 = (((struct o2C_float *)(a4))->v);
                if (u1 > (u0 + -1000.0f)) {
                    t0 = 0xC0D9ADC;
                    if (!((u0 + 1000.0f) > u1)) {
                        (((struct o14_uchar *)(a4))->v) = 0x0;
                        t0 = 0x14;
                    }
                    t1 = t0;
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x0;
                    t1 = 0x14;
                }
                return t1;
            }
            u1 = (((struct o2C_float *)(a4))->v);
            t0 = 0x2C;
            if (u1 > (u0 + -1000.0f)) {
                t1 = 0xC0D9ADC;
                if ((u0 + 1000.0f) > u1) {
                    (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
                    (((struct o12C_ushort *)(a4))->v) = 0x0;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                t0 = t1;
            }
            return t0;
        }
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x0;
        (((struct oA9_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o2C_float *)(a4))->v) = -10.0f;
        (((struct o30_float *)(a4))->v) = 0.0f;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
