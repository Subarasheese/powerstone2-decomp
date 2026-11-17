/* game/demo: functions 0C0D409C-0C0D4536, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
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
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
extern int FUN_0c03f346();
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
int FUN_0c0d4122(int, int, int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c187798(void);
int FUN_0c0d409c(int a4);
int FUN_0c0d4278(int a4);
int FUN_0c0d42d8(int a4);
int FUN_0c0d4344(int a4, int a5, int a6, int a7);

int FUN_0c0d409c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_3 = *(signed char *)((v0_2 + 0x15));
    v0_0 = (v0_3);
    v0_1 = (v0_2);
    if ((v0_3 == 0)) goto L_C0D40B2;
    if ((v0_0 == 1)) goto L_C0D40CC;
    L_C0D411C:;
    return v0_0;
    L_C0D40CC:;
    (((struct oA8_uchar *)(v0_1))->v) = ((((*(short *)((v0_1 + 0x1C))) & 0x4) >> 1) >> 1);
    v0_2 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_2 - 1);
    v0_0 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0D411C;
    FUN_0c0c2d56(v0_1, 0x2, (*(signed char *)((v0_1 + 0x1))));
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    FUN_0c0c2ab6(v0_1, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    (((struct o48_float *)(v0_1))->v) = 1.0f;
    (((struct o44_float *)(v0_1))->v) = 1.0f;
    (((struct o40_float *)(v0_1))->v) = 1.0f;
    v0_0 = (0x40);
    goto L_C0D411C;
    L_C0D40B2:;
    *(unsigned short *)(((0x12A + v0_1) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(v0_1))->v) = 0x0;
    (((struct o12C_ushort *)(v0_1))->v) = 0x0;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    v0_2 = ((0x12A + v0_1));
    goto L_C0D40CC;
}

int FUN_0c0d4278(int a4)
{
    FUN_0c0e2700((a4 + 0x28), 0x3, 0x0, 0x2);
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
}

int FUN_0c0d42d8(int a4)
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

int FUN_0c0d4344(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        if ((*(signed char *)0xC54223C) == 1) {
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
                    return FUN_0c0d42d8(a4);
                }
            }
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o41C_uchar *)(a4))->v) = 0xC3;
    (((struct o424_uchar *)(a4))->v) = 0x3;
    FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    t0 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2));
    (((struct o160_float *)(a4))->v) = (float)t0;
    (((struct o420_ushort *)(a4))->v) = (int)(float)t0;
    FUN_0c0c212c(a4);
    (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798();
    *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC1C7F64) + 0xC)));
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o126_uchar *)(a4))->v) = 0x0;
    (((struct oAA_uchar *)(a4))->v) = 0x1;
    (((struct oAB_uchar *)(a4))->v) = 0x4;
    if ((*(signed char *)0xC54223C) == 1) {
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
                return FUN_0c0d42d8(a4);
            }
        }
    }
    return t0;
}
