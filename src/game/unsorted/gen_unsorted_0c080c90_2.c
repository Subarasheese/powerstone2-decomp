/* game/unsorted: functions 0C080C90-0C081792, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o3730_uchar { char p[0x3730]; unsigned char v; };
struct o37A8_float { char p[0x37A8]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c081378(int a4);

int FUN_0c081378(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o3730_uchar *)(a4))->v) = 0x4;
    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(signed char *)(((0x371C + a4) + 0x0));
    (((struct o50_float *)(a4))->v) = ((((struct o54_float *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC259E54) + (((((t1 << 1) + t1) << 2) << 2) << 1))))->v));
    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(signed char *)(((0x371C + a4) + 0x0));
    (((struct o5C_float *)(a4))->v) = (((((struct o58_float *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC259E54) + (((((t1 << 1) + t1) << 2) << 2) << 1))))->v)) * ((((struct o37A8_float *)(a4))->v)));
    t0 = FUN_0c07ebd0(a4);
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = FUN_0c07eaf4(a4);
        t2 = *(short *)(((0xC5413E8 + ((short)t0 * (short)0x2F8)) + 0x0));
        t0 = *(signed char *)((a4 + 0x2));
        t3 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((unsigned short)(t2 + t1))) * ((((struct o5C_float *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC259E54) + (((((t3 << 1) + t3) << 2) << 2) << 1))))->v)));
        t0 = *(signed char *)((a4 + 0x2));
        t3 = *(signed char *)((a4 + 0x371C));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((unsigned short)(t2 + t1))) * ((((struct o5C_float *)(((0xC259E54 + (((((t0 << 1) + t0) << 2) << 2) << 2)) + (((((t3 << 1) + t3) << 2) << 2) << 1))))->v)));
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 20.0f);
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && (t0 != 6)) {
        return FUN_0c07e868(a4, 0x6);
    }
    if ((*(signed char *)((a4 + 0x3721))) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        return (FUN_0c07e79c(a4, t0, 0x0, 0x15, (t0), 0x0, 0x15));
    }
    return FUN_0c07e868(a4, 0x6);
}
