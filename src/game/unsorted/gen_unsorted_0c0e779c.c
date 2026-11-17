/* game/unsorted: functions 0C0E779C-0C0E79D6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4b76();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
int FUN_0c0d4122(int, int, int);
int FUN_0c187798(void);
int FUN_0c0e779c(int a4, int a5, int a6, int a7);

int FUN_0c0e779c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if ((unsigned int)t0 >= (unsigned int)0xC) {
            return t0;
        }
        switch ((t0 << 1)) {
            case 0:
            {
                return ((int (*)(int, int, int, int))(0xC0E7500))(a4, a5, a6, a7);
            }
            case 2:
            {
                t0 = *(signed char *)((a4 + 0x2));
                return FUN_0c0d4122(a4, ((0xC1CC0A4 + (((t0 << 2) + t0) << 2)) + 0x4), (*(int *)(((0xC1CC0A4 + (((t0 << 2) + t0) << 2)) + 0x10))));
            }
            case 4:
            {
                return ((int (*)(int, int, int))(FUN_0c0c4b76))(a4, a5, a6);
            }
            case 6:
            {
                return ((int (*)(int, int, int, int))(0xC0E76D6))(a4, a5, a6, a7);
            }
            case 8:
            {
                return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
            }
            case 10:
            {
                return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
            }
            case 12:
            {
                return ((int (*)(int, int, int))(FUN_0c0c52c4))(a4, a5, a6);
            }
            case 14:
            {
                return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
            }
            case 16:
            {
                return ((int (*)(int, int, int, int))(FUN_0c0c8c36))(a4, a5, a6, a7);
            }
            case 18:
            case 20:
            {
                return ((int (*)(int, int, int, int))(0xC0E7638))(a4, a5, a6, a7);
            }
            default:
            {
                return ((int (*)(int, int, int, int))(0xC0E772A))(a4, a5, a6, a7);
            }
        }
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o41C_uchar *)(a4))->v) = 0xC3;
                (((struct o424_uchar *)(a4))->v) = 0x0;
                FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
                *(unsigned short *)((a4 + 0x1C)) = 0x2;
                FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
                FUN_0c0c212c(a4);
                u0 = *(float *)0xC286EB0;
                (((struct o160_float *)(a4))->v) = u0;
                (((struct o420_ushort *)(a4))->v) = (int)u0;
                (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
                *(volatile signed char *)((a4 + 0x2));
                FUN_0c187798();
                t0 = *(signed char *)((a4 + 0x2));
                *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1CC0A4) + 0x10)));
                t0 = *(signed char *)((a4 + 0x2));
                (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(int *)((0xC1CC0A4 + (((t0 << 2) + t0) << 2)))) << 2) + 0xC540D94))) + 0x64);
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o126_uchar *)(a4))->v) = 0x0;
                (((struct oAA_uchar *)(a4))->v) = 0x1;
                (((struct oAB_uchar *)(a4))->v) = 0x4;
            }
            t0 = *(signed char *)((a4 + 0x41D));
            if ((unsigned int)t0 >= (unsigned int)0xC) {
                return t0;
            }
            switch ((t0 << 1)) {
                case 0:
                {
                    return ((int (*)(int, int, int, int))(0xC0E7500))(a4, a5, a6, a7);
                }
                case 2:
                {
                    t0 = *(signed char *)((a4 + 0x2));
                    return FUN_0c0d4122(a4, ((0xC1CC0A4 + (((t0 << 2) + t0) << 2)) + 0x4), (*(int *)(((0xC1CC0A4 + (((t0 << 2) + t0) << 2)) + 0x10))));
                }
                case 4:
                {
                    return ((int (*)(int))(FUN_0c0c4b76))(a4);
                }
                case 6:
                {
                    return ((int (*)(int, int, int, int))(0xC0E76D6))(a4, a5, a6, a7);
                }
                case 8:
                {
                    return ((int (*)(int))(FUN_0c0c4c1c))(a4);
                }
                case 10:
                {
                    return ((int (*)(int))(FUN_0c0c5024))(a4);
                }
                case 12:
                {
                    return ((int (*)(int))(FUN_0c0c52c4))(a4);
                }
                case 14:
                {
                    return ((int (*)(int))(FUN_0c0c8c08))(a4);
                }
                case 16:
                {
                    return ((int (*)(int))(FUN_0c0c8c36))(a4);
                }
                case 18:
                case 20:
                {
                    return ((int (*)(int, int, int, int))(0xC0E7638))(a4, a5, a6, a7);
                }
                default:
                {
                    return ((int (*)(int, int, int, int))(0xC0E772A))(a4, a5, a6, a7);
                }
            }
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    t0 = *(signed char *)0xC54098D;
    t1 = t0;
    if (t0 != 18) {
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
