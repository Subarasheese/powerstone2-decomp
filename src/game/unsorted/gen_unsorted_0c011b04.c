/* game/unsorted: functions 0C011B04-0C011C08, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
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
int FUN_0c011b04(int a4);

int FUN_0c011b04(int a4)
{
    register int t1;
    register int t16;
    register int t31;
    register int t39;
    register int t40;

    t1 = (((struct o41C_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned char *)(((0x41C + a4) + 0x6)) = (*(signed char *)((t1 + 0x8)));
        (((struct o28_float *)(a4))->v) = -120.0f;
        (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20BAD4 + ((*(signed char *)(((0x41C + a4) + 0x6))) << 2))));
        *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
    }
    if ((*(signed char *)((t1 + 0xA))) == (unsigned char)(*(signed char *)(((0x41C + a4) + 0x7)))) {
        if ((*(signed char *)((t1 + 0x8))) == 4) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        }
        t16 = *(signed char *)((a4 + 0xA8));
        if (t16 == 1) {
            if ((*(signed char *)(((0x41C + a4) + 0x6))) != (*(signed char *)((t1 + 0x8)))) {
                *(unsigned char *)(((0x41C + a4) + 0x6)) = (*(signed char *)((t1 + 0x8)));
                if ((*(signed char *)(((0x41C + a4) + 0x6))) != 4) {
                    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20BAD4 + ((*(signed char *)(((0x41C + a4) + 0x6))) << 2))));
                }
            }
            t31 = *(signed char *)((t1 + 0xB));
            if (t31 == 1) {
                if ((*(signed char *)((t1 + 0xB))) != (unsigned char)(*(signed char *)(((0x41C + a4) + 0x8)))) {
                    *(unsigned char *)(((0x41C + a4) + 0x8)) = (*(signed char *)((t1 + 0xB)));
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                }
                t39 = FUN_0c01c62a(a4);
                t40 = (signed char)t39;
                if ((signed char)t39 != 0) {
                    *(unsigned char *)((t1 + 0xB)) = 0x2;
                    *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o40_float *)(a4))->v) = 1.0f;
                    (((struct o44_float *)(a4))->v) = 1.0f;
                    t40 = 0x44;
                }
                return t40;
            }
            if (t31 == 0) {
                return FUN_0c012c34(a4);
            }
            return t31;
        }
        return t16;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}
