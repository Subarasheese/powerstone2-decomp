/* game/unsorted: functions 0C0C7A9C-0C0C7F20, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o414_int { char p[0x414]; int v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
int FUN_0c07e328(int, int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c7c46(int a4, int a5, int a6, int a7);

int FUN_0c0c7c46(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    (((struct o420_ushort *)(a4))->v) = (*(short *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x1A)));
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            if (((((struct o414_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) == 0) {
                FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
            }
        }
    } else {
        t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x134));
        if ((t1 != 0) && ((signed char)t1 != 1)) {
            FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
            if ((*(signed char *)((a4 + 0x41F))) == 0) {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
            } else {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
            }
            FUN_0c07e328(a4, t1);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
    }
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 7) {
        return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
    }
    (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}
