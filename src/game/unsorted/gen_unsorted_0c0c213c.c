/* game/unsorted: functions 0C0C213C-0C0C222E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o420_short { char p[0x420]; short v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
int FUN_0c0c213c(int a4);
int FUN_0c0c216e(int a4);
int FUN_0c0c221e(int a4);

int FUN_0c0c213c(int a4)
{
    register int t2;

    if ((*(signed char *)((0xC2738CF + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)))) == 2) {
        t2 = (((struct o420_short *)(a4))->v);
        (((struct o420_ushort *)(a4))->v) = (t2 - 1);
        if ((int)(short)(t2 - 1) <= 0) {
            (((struct o420_ushort *)(a4))->v) = 0x0;
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0c216e(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x1));
    if ((((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC54223C, t0 == 1)) || (t1 = *(signed char *)0xC542235, (int)t1 < (int)0x2)) {
        return 0x0;
    }
    t0 = *(signed char *)((a4 + 0x41C));
    if (((unsigned char)t0 != 70) && (((unsigned char)t0 != 71) && ((unsigned char)t0 != 72))) {
        if ((*(signed char *)((0x17 + (((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8)))) == 1) {
            t0 = (((struct o420_short *)(a4))->v);
            (((struct o420_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o420_ushort *)(a4))->v) = 0x0;
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    if ((*(signed char *)((0x17 + (((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8)))) == 1) {
        t0 = (((struct o420_short *)(a4))->v);
        (((struct o420_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o420_ushort *)(a4))->v) = 0x0;
            if ((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x3715))) == 7) {
                return 0x0;
            }
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0c221e(int a4)
{
    return ((((*(float *)0xC541098) > ((((struct o2C_float *)(a4))->v)))) ? 1 : 0);
}
