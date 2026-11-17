/* game/player: functions 0C0C86D8-0C0C8BE8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o125_uchar { char p[0x125]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
int FUN_0c07e328(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c89f0(int a4, int a5, int a6, int a7);

int FUN_0c0c89f0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)((a4 + 0x41F))) != 0) {
        t3 = *(signed char *)((a4 + 0x15));
        if (t3 != 0) {
            if (t3 != 1) {
            } else {
                if ((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x134))) == 0) {
                    (((struct o125_uchar *)(a4))->v) = 0x0;
                }
            }
        } else {
            t3 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x134));
            if ((t3 != 0) && ((signed char)t3 != 1)) {
                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                FUN_0c07e328(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C7))));
                FUN_0c0c213c(a4);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
    } else {
        t3 = *(signed char *)((a4 + 0x15));
        switch (t3) {
        case 0:
            t0 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x134));
            if ((t0 != 0) && (((signed char)t0 != 1) && (t1 = *(signed char *)((a4 + 0x16)), t1 == 0))) {
                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                FUN_0c07e328(a4, 0x82);
                FUN_0c0c213c(a4);
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            if ((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x17))) != 1) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 1:
            t3 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x134));
            if ((t3 != 0) && (((signed char)t3 != 1) && (t0 = *(signed char *)((a4 + 0x16)), t0 == 1))) {
                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                FUN_0c07e328(a4, 0xA2);
                FUN_0c0c213c(a4);
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            if ((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x17))) == 2) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 2:
            t3 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x134));
            if ((t3 != 0) && ((signed char)t3 != 1)) {
                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                FUN_0c07e328(a4, 0xA3);
                FUN_0c0c213c(a4);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 3:
            if ((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x134))) != 0) {
            } else {
                (((struct o125_uchar *)(a4))->v) = 0x0;
            }
            break;
        }
    }
    if ((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x3715))) != 8) {
        return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
    }
    t0 = FUN_0c0c283a(a4);
    if (t0 != 0) {
        return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
    }
    (((struct o376C_uint *)((((short)t2 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}
