/* game/unsorted: functions 0C0D6FCC-0C0D7468, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c52c4(int, int, int);
int FUN_0c0c8c08(int, int, int, int);
int FUN_0c0c8c36(int, int, int, int);
int FUN_0c0d704c(int, int, int);
int FUN_0c0dc2d0(int, int);
extern int FUN_0c187798();
int FUN_0c0d6fcc(int a4);
int FUN_0c0d7104(int a4, int a5, int a6, int a7);
int FUN_0c0d7390(int a4);
int FUN_0c0d7404(int a4);

int FUN_0c0d6fcc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                t2 = 0x40;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            (((struct o48_float *)(a4))->v) = 1.0f;
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o40_float *)(a4))->v) = 1.0f;
            t2 = 0x40;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0d7104(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t0 = *(signed char *)((a4 + 0x41D));
            if ((unsigned int)t0 < (unsigned int)0xC) {
                switch ((t0 << 1)) {
                    case 0:
                    {
                        FUN_0c0d6fcc(a4);
                    }
                        break;
                    case 2:
                    {
                        t0 = *(signed char *)((a4 + 0x2));
                        FUN_0c0d704c(a4, ((((t0 << 1) + t0) << 2) + 0xC28711C), (int)(((float)(*(int *)(((t0 << 2) + 0xC2871E8))) * 65536.0f) / 360.0f));
                    }
                        break;
                    case 4:
                    {
                        FUN_0c0c4b76(a4, a5, a6);
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                    }
                        break;
                    case 6:
                    {
                        FUN_0c0c4bcc(a4, a5, a6);
                    }
                        break;
                    case 8:
                    {
                        FUN_0c0c4c1c(a4, a5, a6);
                    }
                        break;
                    case 10:
                    {
                        FUN_0c0c5024(a4, a5, a6);
                    }
                        break;
                    case 12:
                    {
                        FUN_0c0c52c4(a4, a5, a6);
                    }
                        break;
                    case 14:
                    {
                        FUN_0c0c8c08(a4, a5, a6, a7);
                    }
                        break;
                    case 16:
                    {
                        FUN_0c0c8c36(a4, a5, a6, a7);
                    }
                        break;
                    case 18:
                    case 20:
                    {
                        FUN_0c0d7390(a4);
                    }
                        break;
                    default:
                    {
                        FUN_0c0d7404(a4);
                    }
                        break;
                }
            }
            t0 = *(signed char *)0xC54223C;
            t1 = t0;
            if (t0 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t2 = 0x15;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o41C_uchar *)(a4))->v) = 0xC3;
        (((struct o424_uchar *)(a4))->v) = 0x4;
        (((struct o160_float *)(a4))->v) = (float)(*(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2)));
        (((struct o420_ushort *)(a4))->v) = (int)((((struct o160_float *)(a4))->v));
        (((struct o422_uchar *)(a4))->v) = 0x0;
        (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
        (((struct o126_uchar *)(a4))->v) = 0x0;
        FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798((0x12A + a4));
        *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC2871E8 + ((*(signed char *)((a4 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        t1 = *(signed char *)((a4 + 0x2));
        t2 = 0x1;
        if (((int)t1 >= (int)0xB) && ((int)t1 <= (int)0x10)) {
            t2 = 0x708;
        }
        *(unsigned short *)((a4 + 0x1C)) = t2;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) != 0) {
        } else {
            (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0d7390(int a4)
{
    register int t0;
    register int t1;

    FUN_0c0dc2d0(a4, 0x1A);
    thunk_FUN_0c05abb2(0x30, 0x0);
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    t0 = 0xA8;
    if ((int)(*(signed char *)0xC54223C) > 0) {
        t1 = *(signed char *)((a4 + 0x2));
        t0 = t1;
        if ((int)t1 >= 0) {
            t1 = *(signed char *)((a4 + 0x2));
            t0 = t1;
            if ((int)t1 <= (int)0xA) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
        }
    }
    return t0;
}

int FUN_0c0d7404(int a4)
{
    register int t0;
    register int t1;

    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    t0 = 0xA8;
    if ((int)(*(signed char *)0xC54223C) > 0) {
        t1 = *(signed char *)((a4 + 0x2));
        t0 = t1;
        if ((int)t1 >= 0) {
            t1 = *(signed char *)((a4 + 0x2));
            t0 = t1;
            if ((int)t1 <= (int)0xA) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
        }
    }
    return t0;
}
