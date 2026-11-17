/* game/unsorted: functions 0C0E8614-0C0E86E6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c0d04c4(int, int);
int FUN_0c179ac0(void);
int FUN_0c0e8614(int a4, int a5, int a6, int a7);

int FUN_0c0e8614(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + -5.0f);
        if (!(((((struct o30_float *)(a4))->v)) > -7200.0f)) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        return 0x30;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t0 = FUN_0c179ac0();
    t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0xF);
    }
    (((struct o28_float *)(a4))->v) = (((-(((float)t1 / 16.0f) * 2000.0f))) + -2000.0f);
    (((struct o30_float *)(a4))->v) = 3000.0f;
    t0 = FUN_0c042fe0();
    if (t0 != 0) {
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t1 = t0;
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
            t0 = (t0 + 0x1);
        }
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + -5.0f);
        if (!(((((struct o30_float *)(a4))->v)) > -7200.0f)) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        return 0x30;
    }
    return ((int (*)(int))(FUN_0c03f346))(a4);
}
