/* game/unsorted: functions 0C011C08-0C011CD2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o44_float { char p[0x44]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c012c34(int);
int FUN_0c01c62a(int);
int FUN_0c011c08(int a4);

int FUN_0c011c08(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = (((struct o41C_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned char *)(((0x41C + a4) + 0x6)) = (*(signed char *)((t1 + 0x8)));
        (((struct o28_float *)(a4))->v) = 140.0f;
        (((struct o2C_float *)(a4))->v) = -190.0f;
        *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
        if ((*(signed char *)(((0x41C + a4) + 0x6))) != 4) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
    }
    if (((*(signed char *)((t1 + 0xA))) == (unsigned char)(*(signed char *)(((0x41C + a4) + 0x7)))) && (t0 = *(signed char *)((t1 + 0x8)), t0 == 4)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((t1 + 0xB));
        if (t0 == 1) {
            if ((*(signed char *)((t1 + 0xB))) != (unsigned char)(*(signed char *)(((0x41C + a4) + 0x8)))) {
                *(unsigned char *)(((0x41C + a4) + 0x8)) = (*(signed char *)((t1 + 0xB)));
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            t2 = FUN_0c01c62a(a4);
            t3 = (signed char)t2;
            if ((signed char)t2 != 0) {
                *(unsigned char *)((t1 + 0xB)) = 0x2;
                *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                (((struct o40_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                t3 = 0x44;
            }
            return t3;
        }
        if (t0 == 0) {
            return FUN_0c012c34(a4);
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}
