/* game/unsorted: functions 0C0E8790-0C0E8D2E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4b76();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
extern int FUN_0c0e8790();
extern int FUN_0c0e88b8();
int FUN_0c0e89dc(int);
int FUN_0c0e8a40(int);
int FUN_0c0e8a98(int);
int FUN_0c187798(void);
int FUN_0c0e8ae4(int a4, int a5, int a6, int a7);

int FUN_0c0e8ae4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)((a4 + 0x41D));
            if ((unsigned int)t1 < (unsigned int)0xC) {
                switch ((t1 << 1)) {
                    case 0:
                    {
                        return ((int (*)(int, int, int, int))(FUN_0c0e8790))(a4, a5, a6, a7);
                    }
                    case 2:
                    {
                        return ((int (*)(int, int, int))(FUN_0c0e88b8))(a4, a5, a6);
                    }
                    case 4:
                    {
                        return ((int (*)(int, int, int))(FUN_0c0c4b76))(a4, a5, a6);
                    }
                    case 6:
                    {
                        return FUN_0c0e8a40(a4);
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
                        return FUN_0c0e89dc(a4);
                    }
                    default:
                    {
                        return FUN_0c0e8a98(a4);
                    }
                }
            }
            return t1;
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            (((struct o41C_uchar *)(a4))->v) = 0xC3;
            (((struct o424_uchar *)(a4))->v) = 0xB;
            t0 = *(signed char *)((a4 + 0x2));
            if ((*(signed char *)(((*(int *)((((*(int *)((0xC1CC14C + (((t0 << 2) + t0) << 2)))) << 2) + 0xC540D94))) + 0x15))) == 0) {
                t0 = 0x1;
                t1 = (*(signed char *)((a4 + 0x1)));
            } else {
                t0 = 0x0;
                t1 = (*(signed char *)((a4 + 0x1)));
            }
            FUN_0c0c2d56(a4, t0, t1);
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            FUN_0c0c212c(a4);
            t0 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2));
            (((struct o160_float *)(a4))->v) = (float)t0;
            (((struct o420_ushort *)(a4))->v) = (int)(float)t0;
            (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
            *(volatile signed char *)((a4 + 0x2));
            FUN_0c187798();
            t0 = *(signed char *)((a4 + 0x2));
            *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((t0 << 2) + t0) << 2) + 0xC1CC14C) + 0x10)));
            t0 = *(signed char *)((a4 + 0x2));
            (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(int *)(((0xC1CC14C + (((t0 << 2) + t0) << 2)) + 0x0))) << 2) + 0xC540D94))) + 0x64);
            *(unsigned short *)((a4 + 0x1C)) = 0x2;
            (((struct o48_float *)(a4))->v) = 1.0f;
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o40_float *)(a4))->v) = 1.0f;
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o126_uchar *)(a4))->v) = 0x0;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return ((int (*)(int))(FUN_0c0e8790))(a4);
            }
            case 2:
            {
                return ((int (*)(int))(FUN_0c0e88b8))(a4);
            }
            case 4:
            {
                return ((int (*)(int))(FUN_0c0c4b76))(a4);
            }
            case 6:
            {
                return FUN_0c0e8a40(a4);
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
                return FUN_0c0e89dc(a4);
            }
            default:
            {
                return FUN_0c0e8a98(a4);
            }
        }
    }
    return t0;
}
