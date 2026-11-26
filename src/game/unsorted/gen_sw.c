/* Straight-line functions with calls and guards (batch gen_sw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int, float);
int FUN_0c0c4770(int, int, int);
int FUN_0c0c47a4(int, int, int);
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int);
int FUN_0c0c5024(int, int);
int FUN_0c0c52c4(int, int, int);
int FUN_0c0c8c08(int, int);
int FUN_0c0c8c36(int, int, int, int);
int FUN_0c0db6a0(int, int);
int FUN_0c0dbad4(int, int);
int FUN_0c0db3f4(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0db3f4(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x41D));
            if ((unsigned int)t0 < (unsigned int)0xC) {
                switch ((t0 << 1)) {
                    case 0:
                    {
                        return FUN_0c0c4770(a4, 0x1F, a6);
                    }
                    case 2:
                    {
                        return FUN_0c0c47a4(a4, 0x1F, a6);
                    }
                    case 4:
                    {
                        return FUN_0c0c4b76(a4, 0x1F, a6);
                    }
                    case 6:
                    {
                        return FUN_0c0c4bcc(a4, 0x1F, a6);
                    }
                    case 8:
                    {
                        if ((0x1F & (*(int *)0xC542260)) == 0) {
                            FUN_0c0db6a0(a4, 0x0);
                        } else {
                            t1 = 0x1F;
                        }
                        return FUN_0c0c4c1c(a4, t1);
                    }
                    case 10:
                    {
                        if ((0x1F & (*(int *)0xC542260)) == 0) {
                            FUN_0c0db6a0(a4, 0x0);
                        } else {
                            t1 = 0x1F;
                        }
                        return FUN_0c0c5024(a4, t1);
                    }
                    case 12:
                    {
                        return FUN_0c0c52c4(a4, 0x1F, a6);
                    }
                    case 14:
                    {
                        if ((0x1F & (*(int *)0xC542260)) == 0) {
                            FUN_0c0db6a0(a4, 0x0);
                        } else {
                            t1 = 0x1F;
                        }
                        return FUN_0c0c8c08(a4, t1);
                    }
                    case 16:
                    {
                        return FUN_0c0c8c36(a4, 0x1F, a6, a7);
                    }
                    case 18:
                    case 20:
                    {
                        return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))), a7, f4);
                    }
                    default:
                    {
                        FUN_0c0dbad4(a4, 0x1);
                        return FUN_0c0c2a80(a4);
                    }
                }
            }
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 == 0) {
        (((struct o41C_uchar *)(a4))->v) = 0xCF;
        (((struct o424_uchar *)(a4))->v) = 0x0;
        (((struct o160_float *)(a4))->v) = (float)(*(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2)));
        (((struct o420_ushort *)(a4))->v) = (int)((((struct o160_float *)(a4))->v));
        (((struct o422_uchar *)(a4))->v) = 0x0;
        (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
        (((struct o126_uchar *)(a4))->v) = 0x0;
        FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))), a7, f4);
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o50_float *)(a4))->v) = 16.25f;
        (((struct o5C_float *)(a4))->v) = -0.5f;
        *(unsigned short *)((a4 + 0x1C)) = 0x41;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t1 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xCCC);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
            (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t1 = 0x15;
        }
    }
    return t1;
}
