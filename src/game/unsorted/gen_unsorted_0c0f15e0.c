/* game/unsorted: functions 0C0F15E0-0C0F18AC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4b76();
extern int FUN_0c0c4bcc();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
int FUN_0c0cf440(int, int, int);
int FUN_0c0d409c(int);
int FUN_0c0d4122(int, int, int);
int FUN_0c0e2700(int, int, int, int);
extern int FUN_0c187798();
int FUN_0c0f15e0(int a4);
int FUN_0c0f1640(int a4);
int FUN_0c0f1688(int a4, int a5, int a6, int a7);

int FUN_0c0f15e0(int a4)
{
    FUN_0c0e2700((a4 + 0x28), 0x5, 0xFFFFFFFF, 0x1);
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
}

int FUN_0c0f1640(int a4)
{
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}

int FUN_0c0f1688(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if ((unsigned int)t0 >= (unsigned int)0xC) {
            return t0;
        }
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c0d409c(a4);
            }
            case 2:
            {
                t0 = *(signed char *)((a4 + 0x2));
                return FUN_0c0d4122(a4, (((t0 << 2) << 2) + 0xC1CD624), (*(int *)(((((t0 << 2) << 2) + 0xC1CD624) + 0xC))));
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
                return FUN_0c0f15e0(a4);
            }
            default:
            {
                return FUN_0c0f1640(a4);
            }
        }
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o41C_uchar *)(a4))->v) = 0xC3;
    (((struct o424_uchar *)(a4))->v) = 0x4;
    FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
    FUN_0c0c212c(a4);
    (((struct o420_ushort *)(a4))->v) = (*(short *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x1A)));
    (((struct o160_float *)(a4))->v) = (float)(*(short *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)) + 0x1A)));
    (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798();
    *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC1CD624) + 0xC)));
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o126_uchar *)(a4))->v) = 0x0;
    (((struct oAA_uchar *)(a4))->v) = 0x1;
    (((struct oAB_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 >= (unsigned int)0xC) {
        return t0;
    }
    switch ((t0 << 1)) {
        case 0:
        {
            return FUN_0c0d409c(a4);
        }
        case 2:
        {
            t0 = *(signed char *)((a4 + 0x2));
            return FUN_0c0d4122(a4, (((t0 << 2) << 2) + 0xC1CD624), (*(int *)(((((t0 << 2) << 2) + 0xC1CD624) + 0xC))));
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
            return FUN_0c0f15e0(a4);
        }
        default:
        {
            return FUN_0c0f1640(a4);
        }
    }
}
