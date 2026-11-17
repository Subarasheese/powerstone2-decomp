/* game/unsorted: functions 0C0CE8F8-0C0CEC08, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cea46(int a4, int a5, int a6, int a7);

int FUN_0c0cea46(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))), a6, a7);
    }
    t0 = FUN_0c0c2ce4(a4);
    if (t0 != 0) {
        if (t0 == 2) {
            t0 = 0x3;
            t1 = (*(signed char *)((a4 + 0x1)));
        } else {
            (((struct o426_ushort *)(a4))->v) = 0x4AF;
            t0 = 0x2;
            t1 = (*(signed char *)((a4 + 0x1)));
        }
        return FUN_0c0c2d56(a4, t0, t1);
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    return 0x50;
}
