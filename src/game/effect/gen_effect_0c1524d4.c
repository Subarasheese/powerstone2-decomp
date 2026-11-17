/* game/effect: functions 0C1524D4-0C152570, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o168_float { char p[0x168]; float v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_float { char p[0x41C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c03f444(int, int, int);
int FUN_0c1524d4(int a4);

int FUN_0c1524d4(int a4)
{
    register int t0;
    register int t9;
    register float u3;
    register int t6;
    register int t7;

    t0 = FUN_0c03f444(0x5, 0x1, 0xA);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC152A2C;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o30_float *)(t0))->v) = ((((struct o30_float *)(a4))->v));
        u3 = (((struct o168_float *)(a4))->v);
        (((struct o2C_float *)(t0))->v) = u3;
        (((struct o41C_float *)(t0))->v) = u3;
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 500.0f);
        (((struct oB0_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o22_ushort *)(t0))->v) = ((((struct o24_short *)(a4))->v));
        (((struct o1A_uchar *)(t0))->v) = 0x0;
        t6 = 0x0;
        t7 = 0x0;
        for (;;) {
            t7 = (t7 + 0x1);
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t6) + 0x0))) + 0x0)) = 0x0;
            t6 = (t6 + 0x4);
            if ((int)(signed char)t7 >= (int)0xA) {
                break;
            }
        }
        t9 = 0x1A;
    }
    return t9;
}
