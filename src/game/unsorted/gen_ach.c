/* Straight-line functions with calls and guards (batch gen_ach): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int, float);
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c52c4(int, int, int);
int FUN_0c0c8c08(int, int, int, int);
int FUN_0c0c8c36(int, int, int, int);
int FUN_0c0da95c(int, int, int, int, float);
int FUN_0c0da9dc(int, int, int, int);
int FUN_0c0dad48(int, int, int, int);
int FUN_0c0daa94(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0daa94(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x41D));
            if ((unsigned int)t0 >= (unsigned int)0xC) {
                return t0;
            }
            switch ((t0 << 1)) {
                case 0:
                {
                    return FUN_0c0da95c(a4, a5, a6, a7, f4);
                }
                case 2:
                {
                    t0 = *(signed char *)((a4 + 0x2));
                    return FUN_0c0da9dc(a4, ((((t0 << 1) + t0) << 2) + 0xC287C98), (int)(((float)(*(int *)(((t0 << 2) + 0xC287CBC))) * 65536.0f) / 360.0f), a7);
                }
                case 4:
                {
                    FUN_0c0c4b76(a4, a5, a6);
                    t0 = *(signed char *)0xC54223C;
                    t1 = t0;
                    if (t0 != 2) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                case 6:
                {
                    return FUN_0c0c4bcc(a4, a5, a6);
                }
                case 8:
                {
                    return FUN_0c0c4c1c(a4, a5, a6);
                }
                case 10:
                {
                    return FUN_0c0c5024(a4, a5, a6);
                }
                case 12:
                {
                    return FUN_0c0c52c4(a4, a5, a6);
                }
                case 14:
                {
                    return FUN_0c0c8c08(a4, a5, a6, a7);
                }
                case 16:
                {
                    return FUN_0c0c8c36(a4, a5, a6, a7);
                }
                case 18:
                case 20:
                {
                    return FUN_0c0dad48(a4, a5, a6, a7);
                }
                default:
                {
                    return FUN_0c0c2a80(a4);
                }
            }
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 == 0) {
        (((struct o41C_uchar *)(a4))->v) = 0xC3;
        (((struct o424_uchar *)(a4))->v) = 0x10;
        t1 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2));
        (((struct o160_float *)(a4))->v) = (float)t1;
        (((struct o420_ushort *)(a4))->v) = (int)(float)t1;
        (((struct o422_uchar *)(a4))->v) = 0x0;
        (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
        (((struct o126_uchar *)(a4))->v) = 0x0;
        FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))), a7, f4);
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        t1 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC287C98 + (((t1 << 1) + t1) << 2))); }
        *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC287CBC + ((*(signed char *)((a4 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t1 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t1 = 0x15;
        }
    }
    return t1;
}
