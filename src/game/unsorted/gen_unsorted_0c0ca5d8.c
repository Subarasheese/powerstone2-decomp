/* game/unsorted: functions 0C0CA5D8-0C0CA75C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c4770(int);
int FUN_0c0c47a4(int);
int FUN_0c0c4b76(int);
int FUN_0c0c4bcc(int);
int FUN_0c0c4c1c(int);
int FUN_0c0c5024(int);
int FUN_0c0c52c4(int);
int FUN_0c0c8c08(int);
int FUN_0c0c8c36(int);
int FUN_0c187798(void);
int FUN_0c0ca5d8(int a4, int a5, int a6);
int FUN_0c0ca682(int a4, int a5, int a6, int a7, int a8);

int FUN_0c0ca5d8(int a4, int a5, int a6)
{
    register int t1;

    FUN_0c0c3e3a(a4, a5, a6);
    t1 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t1 < (unsigned int)0xC) {
        switch ((t1 << 1)) {
            case 0:
            {
                return FUN_0c0c4770(a4);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4);
            }
            case 4:
            {
                return FUN_0c0c4b76(a4);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4);
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
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t1;
}

int FUN_0c0ca682(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((((a4 * 0x34) + 0xC2738B8) + 0x1));
    t1 = FUN_0c037320((signed char)t0, (*(int *)0xC4B40D8));
    t2 = t0;
    t0 = t1;
    if ((int)t1 < 0) {
        t2 = 0x0;
        t0 = (FUN_0c037320(0x0, (*(int *)0xC4B40D8)));
    }
    t1 = FUN_0c03f444(0x9, 0x0, t0);
    t0 = 0x0;
    if (t1 != 0) {
        FUN_0c03733c(t1, (signed char)t2, (*(int *)0xC4B40D8));
        *(unsigned int *)((t1 + 0x4)) = 0xC0CA5D8;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x40;
        FUN_0c0c25c4(t1);
        (((struct o41D_uchar *)(t1))->v) = 0x0;
        (((struct o41C_uchar *)(t1))->v) = a4;
        (((struct o424_uchar *)(t1))->v) = a5;
        (((struct o1B_uchar *)(t1))->v) = a6;
        FUN_0c0c2ab6(t1, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t1 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
        (((struct o420_ushort *)(t1))->v) = (*(short *)(((0xC2738B8 + (a4 * 0x34)) + 0x1A)));
        FUN_0c0c212c(t1);
        FUN_0c187798();
        FUN_0c0c2aa2(t1, a8);
        t0 = t1;
    }
    return t0;
}
