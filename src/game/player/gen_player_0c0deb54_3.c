/* game/player: functions 0C0DEB54-0C0DF270, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4770();
extern int FUN_0c0c47a4();
extern int FUN_0c0c4b76();
extern int FUN_0c0c4bcc();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0decfc();
int FUN_0c0df09c(int);
int FUN_0c0df0ca(int a4, int a5, int a6, int a7);

int FUN_0c0df0ca(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if ((unsigned int)t0 < (unsigned int)0xC) {
            switch ((t0 << 1)) {
                case 0:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4770))(a4, a5, a6);
                }
                case 2:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c47a4))(a4, a5, a6);
                }
                case 4:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4b76))(a4, a5, a6);
                }
                case 6:
                {
                    return ((int (*)(int, int, int))(FUN_0c0c4bcc))(a4, a5, a6);
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
                    return ((int (*)(int, int, int))(FUN_0c0decfc))(a4, a5, a6);
                }
                case 18:
                {
                    return ((int (*)(int, int, int, int))(0xC0DF050))(a4, a5, a6, a7);
                }
                case 20:
                {
                    return FUN_0c0df09c(a4);
                }
                default:
                {
                    return FUN_0c0c2a80(a4);
                }
            }
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o41C_uchar *)(a4))->v) = 0xC5;
    FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct o28_float *)(a4))->v) = (*(float *)((0xC287F5C + (((*(signed char *)((a4 + 0x2))) << 2) << 2))));
    (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)(((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC287F5C)))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o8_float *)(((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC287F5C)))->v));
    *(unsigned int *)((a4 + 0x38)) = (*(int *)(((0xC287F5C + (((*(signed char *)((a4 + 0x2))) << 2) << 2)) + 0xC)));
    t0 = *(short *)0xC27603A;
    (((struct o160_float *)(a4))->v) = (float)t0;
    (((struct o420_ushort *)(a4))->v) = (int)(float)t0;
    FUN_0c0c212c(a4);
    (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return ((int (*)(int))(FUN_0c0c4770))(a4);
            }
            case 2:
            {
                return ((int (*)(int))(FUN_0c0c47a4))(a4);
            }
            case 4:
            {
                return ((int (*)(int))(FUN_0c0c4b76))(a4);
            }
            case 6:
            {
                return ((int (*)(int))(FUN_0c0c4bcc))(a4);
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
                return ((int (*)(int))(FUN_0c0decfc))(a4);
            }
            case 18:
            {
                return ((int (*)(int, int, int, int))(0xC0DF050))(a4, a5, a6, a7);
            }
            case 20:
            {
                return FUN_0c0df09c(a4);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}
