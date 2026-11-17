/* game/unsorted: functions 0C0F4CEC-0C0F4EF6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c212c(int);
extern int FUN_0c0c2ab6();
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int);
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c8c08();
int FUN_0c0d522c(int);
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
extern int FUN_0c0d532c();
int FUN_0c187798(int, int, int);
int FUN_0c0f4cec(int a4, int a5, int a6, int a7);

int FUN_0c0f4cec(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            t4 = *(signed char *)((a4 + 0x15));
            if (t4 != 0) {
                if (t4 != 1) {
                    return t4;
                }
                (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
                t4 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                if ((int)(short)(t4 - 1) <= 0) {
                    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
                }
                return (short)(t4 - 1);
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            t4 = ((int (*)(int, int, int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))), a6, a7);
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
            t4 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
            if ((int)(short)(t4 - 1) <= 0) {
                return ((int (*)(int))(FUN_0c03f346))(a4);
            }
            return (short)(t4 - 1);
        }
        t4 = *(signed char *)((a4 + 0x41D));
        if (t4 != 0) {
            if (t4 != 1) {
                if (t4 != 2) {
                    if (t4 != 4) {
                        if (t4 != 5) {
                            if (t4 != 7) {
                                if ((t4 != 3) && ((t4 != 6) && ((t4 != 9) && ((t4 != 10) && (t4 != 11))))) {
                                    return t4;
                                }
                                return ((int (*)(int, int, int, int))(FUN_0c0d532c))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
                    }
                    return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
                }
                FUN_0c0d5328();
                t4 = *(signed char *)((a4 + 0x2));
                if ((((int)t4 <= (int)0x5) && (t0 = *(signed char *)0xC54098F, (int)t0 > 0)) || (((int)t4 >= (int)0x6) && (((int)t4 <= (int)0x8) && (t1 = *(signed char *)0xC54098F, (int)t1 > (int)0x2)))) {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    return 0x15;
                }
                t0 = FUN_0c0c3e3a(a4);
                if (t0 == 0) {
                    return t0;
                }
                return ((int (*)(int))(FUN_0c03f346))(a4);
            }
            t0 = *(signed char *)((a4 + 0x3));
            return FUN_0c0d52aa(a4, (((t0 << 2) << 2) + 0xC2885CC), (*(int *)(((((t0 << 2) << 2) + 0xC2885CC) + 0xC))));
        }
        return FUN_0c0d522c(a4);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798(a4, a5, a6);
    *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC2885CC) + 0xC)));
    if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
        *(unsigned int *)((a4 + 0x10)) = (*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94)));
    }
    (((struct o41C_uchar *)(a4))->v) = 0xC8;
    (((struct o424_uchar *)(a4))->v) = 0x6;
    FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
    t0 = ((int (*)(int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0c212c(a4);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x41D));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 7) {
                            if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11))))) {
                                return t0;
                            }
                            return ((int (*)(int))(FUN_0c0d532c))(a4);
                        }
                        return ((int (*)(int))(FUN_0c0c8c08))(a4);
                    }
                    return ((int (*)(int))(FUN_0c0c5024))(a4);
                }
                return ((int (*)(int))(FUN_0c0c4c1c))(a4);
            }
            FUN_0c0d5328();
            t0 = *(signed char *)((a4 + 0x2));
            if ((((int)t0 <= (int)0x5) && (t2 = *(signed char *)0xC54098F, (int)t2 > 0)) || (((int)t0 >= (int)0x6) && (((int)t0 <= (int)0x8) && (t3 = *(signed char *)0xC54098F, (int)t3 > (int)0x2)))) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                (((struct o15_uchar *)(a4))->v) = 0x0;
                return 0x15;
            }
            t0 = FUN_0c0c3e3a(a4);
            if (t0 == 0) {
                return t0;
            }
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c0d52aa(a4, (((t0 << 2) << 2) + 0xC2885CC), (*(int *)(((((t0 << 2) << 2) + 0xC2885CC) + 0xC))));
    }
    return FUN_0c0d522c(a4);
}
