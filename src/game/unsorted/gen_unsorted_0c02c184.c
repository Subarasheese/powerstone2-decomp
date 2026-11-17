/* game/unsorted: functions 0C02C184-0C02C22E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c012c34(int);
int FUN_0c02c184(int a4);

int FUN_0c02c184(int a4)
{
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o1B_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o28_float *)(a4))->v) = (*(float *)((((*(signed char *)0xC30A347) << 2) + 0xC20E8B0)));
        (((struct o2C_float *)(a4))->v) = 50.0f;
    }
    if (((*(signed char *)((((short)(*(signed char *)0xC305416) * (short)0x86) + 0xC309E0C))) != 0) && (t1 = *(signed char *)0xC30985A, t1 == 4)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c012c34(a4);
    t1 = 0xC30EF22;
    if ((*(signed char *)0xC30EF20) != (*(signed char *)0xC30EF22)) {
        (((struct o28_float *)(a4))->v) = (*(float *)((((*(signed char *)0xC30A347) << 2) + 0xC20E8B0)));
        t1 = 0x28;
    }
    if ((*(signed char *)0xC30EF24) != 0) {
        (((struct o1B_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        t1 = 0x44;
    }
    return t1;
}
