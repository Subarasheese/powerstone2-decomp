/* game/unsorted: functions 0C0F3398-0C0F3AEC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o125_uchar { char p[0x125]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c059df2(int, int);
int FUN_0c07e328(int, int);
int FUN_0c0c2ab6(int, int, int, int);
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
int FUN_0c16d2b4(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
float FUN_0c0f3398(int a4, int a5, int a6);
int FUN_0c0f3a4e(int a4, int a5, int a6, int a7);


int FUN_0c0f3a4e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        t2 = t0;
        if (t0 != 1) {
        } else {
            t0 = 0x134;
            if ((*(signed char *)((t1 + 0x134))) == 0) {
                (((struct o125_uchar *)(a4))->v) = 0x0;
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t0 = 0x16;
            }
            t2 = t0;
        }
        t0 = t2;
    } else {
        t2 = *(signed char *)((t1 + 0x134));
        t1 = 0x134;
        if (t2 != 0) {
            t1 = (signed char)t2;
            if ((signed char)t2 != 1) {
                FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))), a6, a7);
                (((struct o12A_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
                FUN_0c07e328(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C6))));
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t1 = 0x16;
            }
        }
        t0 = t1;
    }
    return t0;
}
