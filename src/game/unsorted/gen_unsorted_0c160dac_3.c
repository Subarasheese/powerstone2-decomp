/* game/unsorted: functions 0C160DAC-0C161102, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c152d18(int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c160dac(int a4, int a5, int a6, int a7);

int FUN_0c160dac(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t25;
    register float u34;
    register int t49;
    register float u63;
    int t21;
    register int t22;
    register int t79;

    *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x10)));
    if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x5)) == 0) {
        FUN_0c187798(a4, a5, a6);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (float)((int)((int)(FUN_0c179ac0()) % (int)0x64)));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0xA0)) - 80));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0xA0)) - 80));
        FUN_0c152d18((((int)stk + 0) + 0x4));
    }
    if (((*(signed char *)0xC540F98) == 0) && (t21 = *(int *)(((int)stk + 0)), t22 = *(signed char *)((0x3715 + t21)), t22 != 23)) {
        t25 = *(signed char *)((a4 + 0x14));
        if (t25 != 0) {
            if (t25 != 1) {
                if (t25 != 2) {
                    t79 = t25;
                    if (t25 != 3) {
                    } else {
                        t79 = (FUN_0c03f346(a4, a5, a6, a7));
                    }
                } else {
                    u34 = (((struct o40_float *)(a4))->v);
                    (((struct o40_float *)(a4))->v) = (u34 - 0.100000001f);
                    (((struct o48_float *)(a4))->v) = (u34 - 0.100000001f);
                    t79 = 0x40;
                    if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                        (((struct o48_float *)(a4))->v) = 0.0f;
                        (((struct o40_float *)(a4))->v) = 0.0f;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t79 = 0x14;
                    }
                }
            } else {
                t49 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t49 - 1);
                t79 = (short)(t49 - 1);
                if ((int)(short)(t49 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t79 = 0x14;
                }
            }
        } else {
            u63 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u63 + 0.100000001f);
            (((struct o48_float *)(a4))->v) = (u63 + 0.100000001f);
            t79 = 0x40;
            if (!(1.0f > ((((struct o40_float *)(a4))->v)))) {
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t79 = 0x14;
            }
        }
    } else {
        t79 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t79;
}
