/* game/unsorted: functions 0C1689EC-0C168ADC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
extern int FUN_0c150010();
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c1689ec(int a4, int a5, int a6, int a7);

int FUN_0c1689ec(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                return t2;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            FUN_0c0588bc((a4 + 0x40), 0xC2A3798, 0xC2A378C, (*(short *)((a4 + 0x1C))), 0x3C, 0x0);
            FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t2 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x3C) {
                (((struct o14_uchar *)(a4))->v) = 0x2;
                t2 = 0x14;
            }
            t0 = t2;
        } else {
            t2 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), a5, a6, 1.0f, 1.0f, 1.0f, 1.0f);
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t0 = 0x14;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c187798(a4, a5, a6);
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x31, (*(int *)0xC4B40CC));
    if (((*(signed char *)((a4 + 0x131))) == 0) && (t1 = (((struct o404_int *)(a4))->v), t1 == 0)) {
        FUN_0c0588bc((a4 + 0x40), 0xC2A3798, 0xC2A378C, (*(short *)((a4 + 0x1C))), 0x3C, 0x0);
        FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x3C) {
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t1 = 0x14;
        }
        t0 = t1;
    } else {
        t1 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
        (((struct o14_uchar *)(a4))->v) = 0x2;
        t0 = 0x14;
    }
    return t0;
}
