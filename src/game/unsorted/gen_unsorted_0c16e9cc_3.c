/* game/unsorted: functions 0C16E9CC-0C16EE8A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c064f80(int);
int FUN_0c16eb2c(int, int, int, int, int, int, int, int, int);
int FUN_0c16ece6(int);
int FUN_0c16ed88(int a4, int a5, int a6, int a7);

int FUN_0c16ed88(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register float u2;
    register int t3;
    register int t5;
    register int t9;
    register int t17;
    register int t22;
    register int t26;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.899999976f);
            u2 = (((struct oB4_float *)(a4))->v);
            (((struct oBC_float *)(a4))->v) = u2;
            (((struct oB8_float *)(a4))->v) = u2;
            t3 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
            t5 = (short)(t3 - 1);
            if ((int)(short)(t3 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t5 = 0x14;
            }
            return t5;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 50.0f);
        t9 = FUN_0c064f80(a4);
        t17 = t9;
        if (t9 != 0) {
            FUN_0c16ece6(a4);
            FUN_0c16eb2c(a4, (*(int *)((a4 + 0x38))), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
            FUN_0c16eb2c(a4, ((*(int *)((a4 + 0x38))) + 0x5555), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
            (((struct oBC_float *)(a4))->v) = 1.0f;
            (((struct oB8_float *)(a4))->v) = 1.0f;
            (((struct oB4_float *)(a4))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0xC;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t17 = 0x14;
        }
        return t17;
    }
    t22 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t22 - 1);
    t26 = (short)(t22 - 1);
    if ((int)(short)(t22 - 1) <= 0) {
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x5A);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t26 = 0x14;
    }
    return t26;
}
