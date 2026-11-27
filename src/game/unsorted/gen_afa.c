/* Straight-line functions with calls and guards (batch gen_afa): generated from the code and checked by tests. Calls are
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
int FUN_0c0c212c(int);
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
int FUN_0c0f59c8(int);
int FUN_0c0f5a4e(int);
int FUN_0c0f5a96(int a4, int a5, int a6, int a7, float f4);
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };


int FUN_0c0f5a96(int a4, int a5, int a6, int a7, float f4)
{
    int t1;
    int t0;
    int qe0;
    int t2;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o41C_uchar *)(a4))->v) = 0xC3;
        (((struct o424_uchar *)(a4))->v) = 0xC;
        FUN_0c0c2d56(a4, 0x1, (*(signed char *)(a4 + 0x1)), a7, f4);
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738CA))));
        t1 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x41C)) * (unsigned short)0x34) + 0xC2738D2));
        (((struct o160_float *)(a4))->v) = (float)t1;
        (((struct o420_ushort *)(a4))->v) = (int)(float)t1;
        FUN_0c0c212c(a4);
        (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
        (((struct o3C_uint *)(a4))->v) = 0x0;
        (((struct o38_uint *)(a4))->v) = 0x0;
        (((struct o34_uint *)(a4))->v) = 0x0;
        (((struct o1C_ushort *)(a4))->v) = 0x2;
        (((struct oAA_uchar *)(a4))->v) = 0x1;
        (((struct oAB_uchar *)(a4))->v) = 0x4;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = *(signed char *)(a4 + 0x41D);
        if ((unsigned int)t1 < (unsigned int)0xC) {
            switch ((t1 << 1)) {
                case 0:
                {
                    return FUN_0c0d409c(a4);
                }
                case 2:
                {
                    t2 = *(signed char *)(a4 + 0x2);
                    qe0 = (((t2 << 2) << 2) + 0xC1CE424);
                    return FUN_0c0d4122(a4, qe0, (*(int *)((qe0 + 0xC))));
                }
                case 4:
                {
                    return FUN_0c0c4b76(a4);
                }
                case 6:
                case 22:
                {
                    return FUN_0c0f5a4e(a4);
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
                    return FUN_0c0f59c8(a4);
                }
            }
        }
        return t1;
    } else {
        return t0;
    }
}
