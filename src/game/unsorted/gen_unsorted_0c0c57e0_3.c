/* game/unsorted: functions 0C0C57E0-0C0C6A94, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c5ade(int, int, int);
int FUN_0c0c5bd0(int);
int FUN_0c0c5c60(int, int, int, int);
int FUN_0c0c5d4c(int, int, int, int, float);
int FUN_0c160d32(int, int, int);
int FUN_0c162f8a(int, int, int, int);
int FUN_0c163116(int, int, int);
int FUN_0c16498c(int, int, int, int);
int FUN_0c166190(int, int, int);
int FUN_0c16757a(int, int, int);
int FUN_0c16844c(int, int, int);
int FUN_0c168978(int, int, int);
int FUN_0c16b9ec(int, int, int, int);
int FUN_0c16c150(int, int, int, int);
int FUN_0c16c1bc(int, int, int, int);
int FUN_0c16d2b4(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c0c5e8c(int a4, int a5, int a6, int a7, float f4);
float FUN_0c0c5f44(int a4);

int FUN_0c0c5e8c(int a4, int a5, int a6, int a7, float f4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x41F));
    if ((t0 != 0) && (t0 != 1)) {
        if ((t0 != 2) && (t0 != 3)) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            return FUN_0c0c5d4c(a4, a5, a6, a7, f4);
        }
        return FUN_0c0c5c60(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c0c5bd0(a4);
        }
    } else {
        FUN_0c0c5ade(a4, a5, a6);
    }
    t0 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    }
    return 0x22;
}

