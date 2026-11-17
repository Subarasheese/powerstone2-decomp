/* game/unsorted: functions 0C131798-0C131860, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c131798(int a4, int a5, int a6, int a7);

int FUN_0c131798(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x2;
            return 0x14;
        }
        (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)0xC542260) & 0x1);
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 0xB6);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        return 0x50;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x4B) {
        (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct o5C_float *)(a4))->v) = -0.25f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (a4 + 0x28));
        (((struct oA4_uint *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x38)) = (*(int *)(((*(int *)((a4 + 0x10))) + 0x38)));
        *(unsigned int *)((a4 + 0x34)) = 0xC000;
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    t0 = *(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))));
    if (t0 == 19) {
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = 0x2;
    return 0x14;
}
