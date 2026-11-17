/* game/unsorted: functions 0C15BFF8-0C15C308, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
extern int FUN_0c03f346();
int thunk_FUN_0c058310(int, int);
int FUN_0c17c4d0(int);
int FUN_0c187798(void);
int FUN_0c15bff8(int a4);

int FUN_0c15bff8(int a4)
{
    int stk[3];
    register int t1;
    register float u19;
    register float u24;
    register float u28;
    register int t31;
    register int t32;
    register int t42;
    register float u54;
    register int t63;
    register float u77;
    int t2;
    register int t91;

    t1 = *(int *)((a4 + 0x10));
    if (((*(signed char *)((a4 + 0x2))) == 12) && (t2 = (((struct o20_short *)(a4))->v), t2 != 0)) {
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        t91 = 0x20;
    } else {
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
        *(volatile signed char *)((t1 + 0x1));
        FUN_0c187798();
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - ((((struct o28_float *)(t1))->v)));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o2C_float *)(t1))->v)));
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o30_float *)(t1))->v)));
        FUN_0c17c4d0(((int)stk + 0));
        u19 = ((*(float *)(((int)stk + 0))) * ((((struct o378C_float *)(t1))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((u19 * 200.0f)));
        u24 = (((((struct o8_float *)(((int)stk + 0)))->v)) * ((((struct o378C_float *)(t1))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((u24 * 200.0f)));
        u28 = (((((struct o4_float *)(((int)stk + 0)))->v)) * ((((struct o378C_float *)(t1))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((u28 * 200.0f)));
        t31 = (((struct oC4_int *)(a4))->v);
        t32 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t32 + 0x1);
        if ((int)(short)(t32 + 0x1) >= (int)0x8) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
        }
        FUN_0c037498(t31, (*(int *)((((((*(signed char *)((a4 + 0x2))) - 11) << 2) + (0xC2A2B14 + (((*(short *)((a4 + 0x1C))) << 2) << 1))) + 0x0))), 0x12, (*(int *)0xC4B40CC));
        (((struct o80_uint *)(t31))->v) = (((((struct o80_int *)(t31))->v)) - 0x2D8);
        t42 = *(signed char *)((a4 + 0x14));
        if (t42 != 0) {
            if (t42 != 1) {
                if (t42 != 2) {
                    t91 = t42;
                    if (t42 != 3) {
                    } else {
                        t91 = (FUN_0c03f346(a4));
                    }
                } else {
                    (((struct o84_float *)(t31))->v) = (((((struct o84_float *)(t31))->v)) - 0.0799999982f);
                    if (!(((((struct o84_float *)(t31))->v)) > 0.0f)) {
                        (((struct o84_float *)(t31))->v) = 0.0f;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    }
                    u54 = (((struct o84_float *)(t31))->v);
                    (((struct o8C_float *)(t31))->v) = u54;
                    (((struct o88_float *)(t31))->v) = u54;
                    t91 = 0x88;
                }
            } else {
                t63 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t63 - 1);
                t91 = (short)(t63 - 1);
                if ((int)(short)(t63 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t91 = 0x14;
                }
            }
        } else {
            (((struct o84_float *)(t31))->v) = (((((struct o84_float *)(t31))->v)) + 0.0599999987f);
            u77 = (((struct o84_float *)(t31))->v);
            (((struct o8C_float *)(t31))->v) = u77;
            (((struct o88_float *)(t31))->v) = u77;
            t91 = 0x84;
            if (((((struct o84_float *)(t31))->v)) > 1.0f) {
                *(unsigned short *)((a4 + 0x1E)) = 0x6;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t91 = 0x14;
            }
        }
    }
    return t91;
}
