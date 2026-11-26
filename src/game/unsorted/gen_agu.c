/* Straight-line functions with calls and guards (batch gen_agu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int, float);
int FUN_0c0c4b76(int);
int FUN_0c0c4c1c(int);
int FUN_0c0c5024(int);
int FUN_0c0c52c4(int);
int FUN_0c0c8c08(int);
int FUN_0c0c8c36(int);
int FUN_0c0d409c(int);
int FUN_0c0d4122(int, int, int);
int FUN_0c0e0170(int);
int FUN_0c0e01c6(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0e01c6(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC54223C) != 1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o41C_uchar *)(a4))->v) = 0xC3;
        (((struct o424_uchar *)(a4))->v) = 0xC;
        FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))), a7, f4);
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        t1 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2));
        (((struct o160_float *)(a4))->v) = (float)t1;
        (((struct o420_ushort *)(a4))->v) = (int)(float)t1;
        FUN_0c0c212c(a4);
        (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        *(unsigned int *)((a4 + 0x38)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x2;
        (((struct oAA_uchar *)(a4))->v) = 0x1;
        (((struct oAB_uchar *)(a4))->v) = 0x4;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = *(signed char *)((a4 + 0x41D));
        if ((unsigned int)t1 < (unsigned int)0xC) {
            switch ((t1 << 1)) {
                case 0:
                {
                    return FUN_0c0d409c(a4);
                }
                case 2:
                {
                    return FUN_0c0d4122(a4, (a4 + 0x28), (*(int *)((a4 + 0x38))));
                }
                case 4:
                {
                    return FUN_0c0c4b76(a4);
                }
                case 6:
                case 22:
                {
                    return FUN_0c0c2a80(a4);
                }
                case 8:
                {
                    return FUN_0c0c4c1c(a4);
                }
                case 10:
                {
                    return FUN_0c0c5024(a4);
                }
                case 12:
                {
                    return FUN_0c0c52c4(a4);
                }
                case 14:
                {
                    return FUN_0c0c8c08(a4);
                }
                case 16:
                {
                    return FUN_0c0c8c36(a4);
                }
                default:
                {
                    return FUN_0c0e0170(a4);
                }
            }
        }
        return t1;
    } else {
        return t0;
    }
}
