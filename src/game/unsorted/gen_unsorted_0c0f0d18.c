/* game/unsorted: functions 0C0F0D18-0C0F102C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c47b2(int);
int FUN_0c0c480c(int, int, int);
extern int FUN_0c0c4b76();
extern int FUN_0c0c4bcc();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
int FUN_0c0cf440(int, int, int);
int FUN_0c0d409c(int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c0f0d7a(int);
int FUN_0c0f0d18(int a4);
int FUN_0c0f0e08(int a4, int a5, int a6, int a7);

int FUN_0c0f0d18(int a4)
{
    register int t3;
    int t4;
    int t5;

    FUN_0c0e2700((a4 + 0x28), 0x7, (*(signed char *)0xC54223C), 0x1);
    FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
    t3 = *(signed char *)((a4 + 0x2));
    if ((((int)t3 <= (int)0x7) && (t4 = *(signed char *)0xC54223C, (int)t4 > 0)) || (((int)t3 >= (int)0x8) && (((int)t3 <= (int)0x12) && (t5 = *(signed char *)0xC54223C, (int)t5 > (int)0x1)))) {
        return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    }
    return FUN_0c0c47b2(a4);
}

int FUN_0c0f0e08(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if ((unsigned int)t0 < (unsigned int)0xC) {
            switch ((t0 << 1)) {
                case 0:
                {
                    return FUN_0c0d409c(a4);
                }
                case 2:
                {
                    t1 = *(signed char *)((a4 + 0x2));
                    t2 = FUN_0c0c480c(a4, (((t1 << 2) << 2) + 0xC2881F0), (*(int *)(((((t1 << 2) << 2) + 0xC2881F0) + 0xC))));
                    if (t2 != 0) {
                        return FUN_0c0f0d7a(a4);
                    }
                    return t2;
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
                    return ((int (*)(int, int, int, int))(FUN_0c0c8c36))(a4, a5, a6, a7);
                }
                case 18:
                case 20:
                {
                    return FUN_0c0f0d18(a4);
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
    (((struct o41C_uchar *)(a4))->v) = 0xC3;
    (((struct o424_uchar *)(a4))->v) = 0x1;
    FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
    (((struct o420_ushort *)(a4))->v) = (*(short *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x1A)));
    (((struct o160_float *)(a4))->v) = (float)(*(short *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)) + 0x1A)));
    (((struct o422_uchar *)(a4))->v) = 0x0;
    (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
    FUN_0c0f0d7a(a4);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o126_uchar *)(a4))->v) = 0x0;
    (((struct oAA_uchar *)(a4))->v) = 0x1;
    (((struct oAB_uchar *)(a4))->v) = 0x4;
    if ((int)(*(signed char *)0xC54098D) >= (int)0xE) {
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c0d409c(a4);
            }
            case 2:
            {
                t1 = *(signed char *)((a4 + 0x2));
                t2 = FUN_0c0c480c(a4, (((t1 << 2) << 2) + 0xC2881F0), (*(int *)(((((t1 << 2) << 2) + 0xC2881F0) + 0xC))));
                if (t2 != 0) {
                    return FUN_0c0f0d7a(a4);
                }
                return t2;
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
                return ((int (*)(int))(FUN_0c0c8c36))(a4);
            }
            case 18:
            case 20:
            {
                return FUN_0c0f0d18(a4);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}
