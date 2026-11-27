/* Straight-line functions with calls and guards (batch gen_dt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
extern int FUN_0c03f346();
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int);
extern int FUN_0c0c4b76();
extern int FUN_0c0c4bcc();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
extern int FUN_0c0d409c();
int FUN_0c0d4122(int, int, int);
int FUN_0c0d4278(int);
extern int FUN_0c0d42d8();
int FUN_0c0d4344(int a4, int a5, int a6, int a7);
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o38_uint { char p[0x38]; unsigned int v; };


int FUN_0c0d4344(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        if ((*(signed char *)0xC54223C) == 1) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        t0 = *(signed char *)(a4 + 0x41D);
        if ((unsigned int)t0 < (unsigned int)0xC) {
            switch ((t0 << 1)) {
                case 0:
                {
                    return ((int (*)(int, int, int, int))(FUN_0c0d409c))(a4, a5, a6, a7);
                }
                case 2:
                {
                    t1 = *(signed char *)(a4 + 0x2);
                    return FUN_0c0d4122(a4, (((t1 << 2) << 2) + 0xC1C7F64), (*(int *)(((((t1 << 2) << 2) + 0xC1C7F64) + 0xC))));
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
                    return FUN_0c0d4278(a4);
                }
                default:
                {
                    return ((int (*)(int, int, int, int))(FUN_0c0d42d8))(a4, a5, a6, a7);
                }
            }
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o41C_uchar *)(a4))->v) = 0xC3;
    (((struct o424_uchar *)(a4))->v) = 0x3;
    FUN_0c0c2d56(a4, 0x0, (*(signed char *)(a4 + 0x1)), a7);
    (((struct o1C_ushort *)(a4))->v) = 0x0;
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738CA))));
    t0 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738D2));
    (((struct o160_float *)(a4))->v) = (float)t0;
    (((struct o420_ushort *)(a4))->v) = (int)(float)t0;
    FUN_0c0c212c(a4);
    (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)(((((*(signed char *)(a4 + 0x2)) << 2) << 2) + 0xC1C7F64)); }
    (((struct o38_uint *)(a4))->v) = (*(int *)((((((*(signed char *)(a4 + 0x2)) << 2) << 2) + 0xC1C7F64) + 0xC)));
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
    (((struct o126_uchar *)(a4))->v) = 0x0;
    (((struct oAA_uchar *)(a4))->v) = 0x1;
    (((struct oAB_uchar *)(a4))->v) = 0x4;
    if ((*(signed char *)0xC54223C) == 1) {
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    t0 = *(signed char *)(a4 + 0x41D);
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return ((int (*)(int))(FUN_0c0d409c))(a4);
            }
            case 2:
            {
                t1 = *(signed char *)(a4 + 0x2);
                return FUN_0c0d4122(a4, (((t1 << 2) << 2) + 0xC1C7F64), (*(int *)(((((t1 << 2) << 2) + 0xC1C7F64) + 0xC))));
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
                return FUN_0c0d4278(a4);
            }
            default:
            {
                return ((int (*)(int))(FUN_0c0d42d8))(a4);
            }
        }
    }
    return t0;
}
