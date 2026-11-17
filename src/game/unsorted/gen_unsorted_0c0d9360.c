/* game/unsorted: functions 0C0D9360-0C0D952A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0cff96(int, int);
int FUN_0c0d9360(int a4, int a5, int a6, int a7);

int FUN_0c0d9360(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(signed char *)0xC54223C) == 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x2));
            if (t0 != 0) {
                if (t0 != 1) {
                } else {
                    t0 = ((((struct oC4_int *)(a4))->v));
                }
                t2 = t0;
            } else {
                t2 = ((((struct oD0_int *)(a4))->v));
            }
            t0 = *(signed char *)((a4 + 0x2));
            t3 = *(int *)((0xC472AB0 + (t0 << 2)));
            *(unsigned int *)((0xC472AB0 + (t0 << 2))) = (t3 - 1);
            t4 = (t0 << 2);
            if ((t3 - 1) == 0) {
                *(unsigned int *)((0xC472AB0 + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x1;
                t0 = *(int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2)));
                t3 = t0;
                if ((unsigned int)t0 >= (unsigned int)0x10) {
                } else {
                    switch ((t0 << 1)) {
                        case 0:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x1;
                            t0 = 0xC287970;
                        }
                            break;
                        case 2:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x2;
                            t0 = 0xC287988;
                        }
                            break;
                        case 4:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x3;
                            t0 = 0xC2879A0;
                        }
                            break;
                        case 6:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x4;
                            t0 = 0xC2879B8;
                        }
                            break;
                        case 8:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x5;
                            t0 = 0xC2879D0;
                        }
                            break;
                        case 10:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x6;
                            t0 = 0xC2879E8;
                        }
                            break;
                        case 12:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x7;
                            t0 = 0xC287A00;
                        }
                            break;
                        case 14:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x8;
                            t0 = 0xC287A18;
                        }
                            break;
                        case 16:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x9;
                            t0 = 0xC287A30;
                        }
                            break;
                        case 18:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0xA;
                            t0 = 0xC287A48;
                        }
                            break;
                        case 20:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0xB;
                            t0 = 0xC287A60;
                        }
                            break;
                        case 22:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0xC;
                            t0 = 0xC287A78;
                        }
                            break;
                        case 24:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0xD;
                            t0 = 0xC287A90;
                        }
                            break;
                        case 26:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0xE;
                            t0 = 0xC287AA8;
                        }
                            break;
                        case 28:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0xF;
                            t0 = 0xC287AC0;
                        }
                            break;
                        default:
                        {
                            *(unsigned int *)((0xC472ABC + ((*(signed char *)((a4 + 0x2))) << 2))) = 0x0;
                            t0 = 0xC287AD8;
                        }
                            break;
                    }
                    t3 = (FUN_0c0cff96((*(int *)((t2 + 0x8))), t0));
                }
                t4 = t3;
            }
            t1 = t4;
        }
        t0 = t1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}
