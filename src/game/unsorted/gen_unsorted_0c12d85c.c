/* game/unsorted: functions 0C12D85C-0C12DB42, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f02(int);
int FUN_0c07e2f4(int, int);
int FUN_0c12d4cc(int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c12d85c(int a4, int a5);
int FUN_0c12da56(int a4, int a5, int a6, int a7);


int FUN_0c12da56(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if (!(((((struct o2C_float *)(a4))->v)) > ((((struct o58_float *)(a4))->v)))) {
            (((struct o12E_ushort *)(a4))->v) = 0xF0;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = 0x1;
            return 0x14;
        }
        if ((*(signed char *)((a4 + 0x131))) == 0) {
            t1 = FUN_0c064f02(a4);
            if (t1 != 0) {
                FUN_0c12d4cc(a4);
                t2 = FUN_0c179ac0();
                t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
                if ((int)t2 >= 0) {
                    t3 = (t2 & 0x1);
                }
                if (t3 == 0) {
                    FUN_0c059e60(t0, 0x22);
                }
                return ((int (*)(int))(FUN_0c03f346))(a4);
            }
            return t1;
        }
        FUN_0c12d4cc(a4);
        t1 = FUN_0c179ac0();
        t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x1);
        }
        if (t2 == 0) {
            FUN_0c059e60(t0, 0x22);
        }
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
}
