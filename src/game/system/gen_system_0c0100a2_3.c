/* game/system: functions 0C0100A2-0C011972, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int FUN_0c010448(void);
int FUN_0c010450(void);
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cd2c(int);
int FUN_0c01e9e4(void);
extern int FUN_0c01fce0();
int FUN_0c01fd10(void);
int FUN_0c01fd34(void);
int FUN_0c02188c(int);
int FUN_0c021928(int);
int FUN_0c02af32(void);
int FUN_0c02c9e8(void);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c0573d8(void);
int FUN_0c05a292(int, int, int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05b052(int, int);
int memset(int, int, int);
void FUN_0c010f8c(int a4, int a5, int a6, int a7);

void FUN_0c010f8c(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t2;
    register int t3;
    register int t22;
    register int t29;
    register int t38;
    register int t40;
    register int t68;
    register int t69;
    register int t70;
    register int t73;
    register int t74;
    register int t75;
    register int t76;
    register int t79;
    register int t93;
    register int t94;
    register int t95;
    register int t96;
    register int t97;
    register int t104;
    register int t107;
    register int t122;
    register int t125;
    register int t136;
    register int t142;
    register int t148;
    register int t32;

    t0 = *(signed char *)0xC30EF68;
    if ((unsigned int)(unsigned char)t0 >= (unsigned int)0xE) {
        return;
    }
    switch (((unsigned char)t0 << 1)) {
        case 0:
        {
            t2 = *(signed char *)0xC30EF69;
            if ((unsigned char)t2 != 0) {
                if ((unsigned char)t2 != 1) {
                } else {
                    t3 = (((struct o4_short *)0xC30EF68)->v);
                    (((struct o4_ushort *)0xC30EF68)->v) = (t3 - 1);
                    if ((int)(short)(t3 - 1) > 0) {
                    } else {
                        (((struct o1_uchar *)0xC30EF68)->v) = 0x0;
                        (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                        *(unsigned char *)0xC30EFA5 = 0x0;
                    }
                }
            } else {
                FUN_0c01e9e4();
                FUN_0c036de8(0x20, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c05a292(0xC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                FUN_0c01fd10();
                memset(0xC30EF7C, 0x0, 0x20);
                FUN_0c05b052(0x1E, 0x0);
                (((struct o1_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF69) + 0x1);
                (((struct o4_ushort *)0xC30EF68)->v) = 0x20;
            }
            return;
        }
        case 2:
        {
            t22 = FUN_0c01fd34();
            if ((unsigned int)((signed char)t22 + 0x10) >= (unsigned int)0x14) {
                return;
            }
            switch ((((signed char)t22 + 0x10) << 1)) {
                case 0:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0x4F);
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x3;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x258;
                    *(unsigned char *)0xC30AF89 = 0x3;
                    return;
                }
                case 2:
                {
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x6;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x0;
                    *(unsigned char *)0xC30AF89 = 0x0;
                    t29 = 0x4B;
                    if ((int)(*(int *)0xC30B6F8) > (int)0x3C) {
                        t29 = 0x36;
                    }
                    (((struct o1_uchar *)0xC30EF68)->v) = t29;
                    return;
                }
                case 4:
                {
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x6;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x0;
                    *(unsigned char *)0xC30AF89 = 0x0;
                    (((struct o1_uchar *)0xC30EF68)->v) = 0x8;
                    return;
                }
                case 6:
                {
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x6;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x0;
                    *(unsigned char *)0xC30AF89 = 0x0;
                    (((struct o1_uchar *)0xC30EF68)->v) = 0x29;
                    return;
                }
                case 8:
                {
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x0;
                    if ((*(signed char *)0xC30AF89) == 3) {
                        (((struct o0_uchar *)0xC30EF68)->v) = 0x9;
                        t32 = 0x4E;
                    } else {
                        *(unsigned char *)0xC30AF89 = 0x0;
                        (((struct o0_uchar *)0xC30EF68)->v) = 0x6;
                        t32 = 0x28;
                    }
                    (((struct o1_uchar *)0xC30EF68)->v) = t32;
                    return;
                }
                case 10:
                {
                    ((int (*)(int, int, int, int))(0xC010458))(0x6, t22, a6, a7);
    return;
                }
                case 12:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0x44);
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x3;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x258;
                    return;
                }
                case 14:
                {
                    t38 = ((int (*)(int, int))(FUN_0c01fce0))(0x6, t22);
                    FUN_0c010448();
    return;
                }
                case 16:
                {
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x6;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x0;
                    *(unsigned char *)0xC30AF89 = 0x0;
                    t40 = 0x4B;
                    if ((int)(*(int *)0xC30B6F8) > (int)0x3C) {
                        t40 = 0x36;
                    }
                    (((struct o1_uchar *)0xC30EF68)->v) = t40;
                    return;
                }
                case 18:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0x7);
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x3;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x258;
                    return;
                }
                case 20:
                {
                    return;
                }
                case 22:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0x25);
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x3;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x258;
                    *(unsigned char *)0xC30AF89 = 0x3;
                    return;
                }
                case 24:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0xA);
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x3;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x258;
                    *(unsigned char *)0xC30AF89 = 0x3;
                    return;
                }
                case 26:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0x49);
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x3;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x258;
                    *(unsigned char *)0xC30AF89 = 0x3;
                    return;
                }
                case 28:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0x8);
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x3;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x258;
                    *(unsigned char *)0xC30AF89 = 0x3;
                    return;
                }
                case 30:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0x25);
                    *(unsigned char *)0xC30AF89 = 0x3;
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x3;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x258;
                    return;
                }
                case 32:
                {
                    return;
                }
                case 34:
                case 36:
                {
                    return;
                }
                default:
                {
                    (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                    return;
                }
            }
        }
        case 4:
        {
            FUN_0c02af32();
            FUN_0c02c9e8();
    return;
        }
        case 6:
        {
            t68 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t68 - 1);
            if ((int)(short)(t68 - 1) > (int)0x21C) {
                return;
            }
            t69 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t69 - 1);
            if ((int)(short)(t69 - 1) >= 0) {
                t70 = FUN_0c01cd2c(0x101);
                if ((short)t70 == 0) {
                    return;
                }
                (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                (((struct o4_ushort *)0xC30EF68)->v) = 0x14;
                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
            }
            (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
            (((struct o4_ushort *)0xC30EF68)->v) = 0x14;
            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
        }
        case 8:
        {
            t73 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t73 - 1);
            if ((int)(short)(t73 - 1) > 0) {
                return;
            }
            t74 = ((int (*)(int, int, int, int))(FUN_0c01fce0))(a4, a5, a6, a7);
            FUN_0c02188c(0x3);
    return;
        }
        case 10:
        {
            t75 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t75 - 1);
            if ((int)(short)(t75 - 1) >= 0) {
                t76 = FUN_0c01cd2c(0x101);
                if ((short)t76 == 0) {
                    return;
                }
                (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                (((struct o4_ushort *)0xC30EF68)->v) = 0x14;
                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
            }
            (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
            (((struct o4_ushort *)0xC30EF68)->v) = 0x14;
            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
        }
        case 12:
        {
            t79 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t79 - 1);
            if ((int)(short)(t79 - 1) > 0) {
            } else {
                FUN_0c01e9e4();
                FUN_0c0573d8();
                FUN_0c01cb7c();
                FUN_0c018e74((*(signed char *)0xC30EF69));
                (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                (((struct o0_ushort *)0xC30540C)->v) = 0x0;
            }
            return;
        }
        case 14:
        {
            (((struct o0_ushort *)0xC30540C)->v) = (((((struct o0_short *)0xC30540C)->v)) + 0x1);
            if ((int)((((struct o0_short *)0xC30540C)->v)) >= (int)0x1E0) {
                (((struct o0_uchar *)0xC30EF68)->v) = 0x8;
                (((struct o4_ushort *)0xC30EF68)->v) = 0x14;
                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
            }
            if ((int)((((struct o0_short *)0xC30540C)->v)) >= (int)0x3C) {
                t93 = FUN_0c01cd2c(0x40);
                if ((short)t93 == 0) {
                    t94 = FUN_0c01cd2c(0x101);
                    if ((short)t94 == 0) {
                        return;
                    }
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x8;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x14;
                    FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
                }
                (((struct o0_uchar *)0xC30EF68)->v) = 0x8;
                (((struct o4_ushort *)0xC30EF68)->v) = 0x14;
                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
            }
            t95 = FUN_0c01cd2c(0x101);
            if ((short)t95 == 0) {
                return;
            }
            (((struct o0_uchar *)0xC30EF68)->v) = 0x8;
            (((struct o4_ushort *)0xC30EF68)->v) = 0x14;
            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
        }
        case 16:
        {
            t96 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t96 - 1);
            if ((int)(short)(t96 - 1) > 0) {
                return;
            }
            FUN_0c010450();
    return;
        }
        case 18:
        {
            t97 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t97 - 1);
            if ((int)(short)(t97 - 1) <= 0) {
                FUN_0c01e9e4();
                FUN_0c0573d8();
                FUN_0c01cb7c();
                (((struct o0_ushort *)0xC30540C)->v) = 0x0;
                (((struct o2_ushort *)0xC30540C)->v) = 0x0;
                FUN_0c018e9c((*(signed char *)0xC30EF69), 0xC30540E);
                (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                t104 = (((struct o0_short *)0xC30540C)->v);
                (((struct o0_ushort *)0xC30540C)->v) = (t104 + 0x1);
                if ((int)(short)(t104 + 0x1) >= (int)0x20) {
                    (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                    FUN_0c01c714(0xC30540E, 0x1, 0x2);
                    t107 = FUN_0c01cd2c(0x101);
                    if ((short)t107 != 0) {
                        FUN_0c05aab6(0x0, 0x3);
                        (((struct o0_ushort *)0xC30540C)->v) = 0x10;
                        (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                    }
                }
            }
            return;
        }
        case 20:
        {
            t122 = (((struct o0_short *)0xC30540C)->v);
            (((struct o0_ushort *)0xC30540C)->v) = (t122 + 0x1);
            if ((int)(short)(t122 + 0x1) >= (int)0x20) {
                (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                FUN_0c01c714(0xC30540E, 0x1, 0x2);
                t125 = FUN_0c01cd2c(0x101);
                if ((short)t125 != 0) {
                    FUN_0c05aab6(0x0, 0x3);
                    (((struct o0_ushort *)0xC30540C)->v) = 0x10;
                    (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                }
            }
            return;
        }
        case 22:
        {
            FUN_0c01c714(0xC30540E, 0x1, 0x2);
            t136 = FUN_0c01cd2c(0x101);
            if ((short)t136 != 0) {
                FUN_0c05aab6(0x0, 0x3);
                (((struct o0_ushort *)0xC30540C)->v) = 0x10;
                (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
            }
            return;
        }
        case 24:
        {
            t142 = (((struct o0_short *)0xC30540C)->v);
            (((struct o0_ushort *)0xC30540C)->v) = (t142 - 1);
            if ((int)(short)(t142 - 1) <= 0) {
                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                (((struct o0_ushort *)0xC30540C)->v) = 0x14;
                (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF68) + 0x1);
            }
            return;
        }
        default:
        {
            t148 = (((struct o0_short *)0xC30540C)->v);
            (((struct o0_ushort *)0xC30540C)->v) = (t148 - 1);
            if ((int)(short)(t148 - 1) <= 0) {
                if (((((struct o2_short *)0xC30540C)->v)) == 0) {
                    FUN_0c021928(0x1);
    return;
                }
                FUN_0c010450();
    return;
            }
            return;
        }
    }
}
