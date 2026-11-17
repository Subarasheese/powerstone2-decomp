/* game/unsorted: functions 0C0E8D48-0C0E8E26, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c064ee4(int, int);
int FUN_0c1512a0(int, int);
int FUN_0c16328c(int, int, int, float);
int FUN_0c17c130(int, int, int);
int FUN_0c0e8d48(int a4, int a5, int a6, int a7);

int FUN_0c0e8d48(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    int t3;
    register int t4;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return t4;
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            if ((*(short *)((a4 + 0x1E))) == 0) {
                (((struct o12E_ushort *)(a4))->v) = 0xF0;
            }
        }
        t4 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
        if ((int)(short)(t4 - 1) > 0) {
            t4 = FUN_0c064ee4(a4, 0x2);
            if (t4 != 0) {
                FUN_0c1512a0(0xA, (a4 + 0x28));
                return ((int (*)(int))(FUN_0c03f346))(a4);
            }
            if (((*(signed char *)((a4 + 0x131))) == 0) && ((t0 = *(signed char *)((a4 + 0x132)), t0 == 0) && (t1 = (((struct o404_int *)(a4))->v), t1 == 0))) {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((((struct o5C_float *)(a4))->v)));
                if (-20.0f > ((((struct o50_float *)(a4))->v))) {
                    (((struct o50_float *)(a4))->v) = -20.0f;
                }
                return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            }
            FUN_0c16328c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x2, 0.200000003f);
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0xF;
    *(unsigned short *)((a4 + 0x1C)) = 0x78;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if ((*(short *)((a4 + 0x1E))) != 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        if ((*(short *)((a4 + 0x1E))) == 0) {
            (((struct o12E_ushort *)(a4))->v) = 0xF0;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
        t0 = FUN_0c064ee4(a4, 0x2);
        if (t0 != 0) {
            FUN_0c1512a0(0xA, (a4 + 0x28));
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && ((t2 = *(signed char *)((a4 + 0x132)), t2 == 0) && (t3 = (((struct o404_int *)(a4))->v), t3 == 0))) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((((struct o5C_float *)(a4))->v)));
            if (-20.0f > ((((struct o50_float *)(a4))->v))) {
                (((struct o50_float *)(a4))->v) = -20.0f;
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
        FUN_0c16328c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x2, 0.200000003f);
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
}
