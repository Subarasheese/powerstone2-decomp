/* game/unsorted: functions 0C0DFB68-0C0DFFB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c07c19c(int);
int FUN_0c07e420(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0dfb68(int);
int FUN_0c0dfdec(int a4, int a5, int a6, int a7);

int FUN_0c0dfdec(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC54223C) != 1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0xFFFFFFFF;
        (((struct o16_uchar *)(a4))->v) = 0xFFFFFFFF;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 750.0f);
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        FUN_0c07e420(a4, 0x9);
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t0 = t1;
            t0 = (t0 << 2);
            t0 = (t0 + (0xC4 + a4));
            t0 = (*(int *)((t0 + 0x0)));
            FUN_0c0d04c4((t0 + 0x6), (t0 + 0x78));
            t1 = (t1 + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 75.0f);
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    t0 = *(short *)((a4 + 0x1C));
                    t1 = t0;
                    if ((int)t0 <= 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    }
                }
                return t1;
            }
            t0 = FUN_0c0dfb68(a4);
            if (t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = 0x3;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                thunk_FUN_0c05abb2(0x47, (a4 + 0x28));
                return FUN_0c07c19c(0xF);
            }
            return t0;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 8.33333302f);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = FUN_0c0dfb68(a4);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x3;
            *(unsigned short *)((a4 + 0x1C)) = (int)(((float)((-(*(short *)((a4 + 0x1C)))) + 0x5A) / 90.0f) * 10.0f);
            thunk_FUN_0c05abb2(0x47, (a4 + 0x28));
            return FUN_0c07c19c(0xF);
        }
        return t0;
    }
    if (!(3600.0f > ((((struct o28_float *)((*(int *)0xC540D94)))->v)))) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x5A;
        return thunk_FUN_0c05abb2(0x46, (a4 + 0x28));
    }
    return 0x28;
}
