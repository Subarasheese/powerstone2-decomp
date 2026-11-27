/* Straight-line functions with calls and guards (batch gen_lo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
int FUN_0c010458(void);
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
int FUN_0c036de8(int);
int FUN_0c0573cc(int, int, int);
int FUN_0c0573d8(void);
int FUN_0c05a292(int, int, int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05b052(int, int);
int memset(int, int, int);
void FUN_0c010f8c(int a4, int a5, int a6, int a7);

void FUN_0c010f8c(int a4, int a5, int a6, int a7)
{
    int qa0;
    int qa1;
    int stk[9];
    int t103;
    int t22;
    int t61;
    int t84;
    int t0;
    int t68;
    int t35;
    int t110;
    int t105;
    int t85;
    int t83;
    int t29;
    int t107;
    int t104;
    int t100;
    int t94;
    int t87;
    int t86;
    int t69;
    int t67;
    int t66;
    int t63;
    int t3;
    int t2;

    qa1 = 0xC30AF89;
    qa0 = 0xC30EF68;
    t0 = *(signed char *)qa0;
    if ((unsigned int)(unsigned char)t0 >= (unsigned int)0xE) {
        return;
    }
    t103 = 0;
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
                        (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)qa0) + 0x1);
                        *(unsigned char *)0xC30EFA5 = 0x0;
                    }
                }
            } else {
                FUN_0c01e9e4();
                FUN_0c036de8(0x20);
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
            t61 = 0;
            switch ((((signed char)t22 + 0x10) << 1)) {
                case 0:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0x4F);
                }
                    break;
                case 2:
                {
                    t61 = 1;
                }
                    break;
                case 4:
                {
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x6;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x0;
                    *(unsigned char *)qa1 = 0x0;
                    (((struct o1_uchar *)0xC30EF68)->v) = 0x8;
                    return;
                }
                case 6:
                {
                    (((struct o0_uchar *)0xC30EF68)->v) = 0x6;
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x0;
                    *(unsigned char *)qa1 = 0x0;
                    (((struct o1_uchar *)0xC30EF68)->v) = 0x29;
                    return;
                }
                case 8:
                {
                    (((struct o4_ushort *)0xC30EF68)->v) = 0x0;
                    if ((*(signed char *)qa1) == 3) {
                        (((struct o0_uchar *)0xC30EF68)->v) = 0x9;
                        t29 = 0x4E;
                    } else {
                        *(unsigned char *)qa1 = 0x0;
                        (((struct o0_uchar *)0xC30EF68)->v) = 0x6;
                        t29 = 0x28;
                    }
                    (((struct o1_uchar *)0xC30EF68)->v) = t29;
                    return;
                }
                case 10:
                {
                    FUN_0c010458();
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
                    t35 = ((int (*)(int, int))(FUN_0c01fce0))(0x6, t22);
                    FUN_0c010448();
    return;
                }
                case 16:
                {
                    t61 = 1;
                }
                    break;
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
                }
                    break;
                case 24:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0xA);
                }
                    break;
                case 26:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0x49);
                }
                    break;
                case 28:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0x8);
                }
                    break;
                case 30:
                {
                    FUN_0c01e9e4();
                    FUN_0c0573d8();
                    FUN_0c01cb7c();
                    FUN_0c018e74(0x25);
                    *(unsigned char *)qa1 = 0x3;
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
                    (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)qa0) + 0x1);
                    return;
                }
            }
            if (t61) {
                (((struct o0_uchar *)0xC30EF68)->v) = 0x6;
                (((struct o4_ushort *)0xC30EF68)->v) = 0x0;
                *(unsigned char *)qa1 = 0x0;
                t63 = 0x4B;
                if ((int)(*(int *)0xC30B6F8) > (int)0x3C) {
                    t63 = 0x36;
                }
                (((struct o1_uchar *)0xC30EF68)->v) = t63;
                return;
            }
            (((struct o0_uchar *)0xC30EF68)->v) = 0x3;
            (((struct o4_ushort *)0xC30EF68)->v) = 0x258;
            *(unsigned char *)qa1 = 0x3;
            return;
        }
        case 4:
        {
            FUN_0c02af32();
            FUN_0c02c9e8();
    return;
        }
        case 6:
        {
            t66 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t66 - 1);
            if ((int)(short)(t66 - 1) > (int)0x21C) {
                return;
            }
            t103 = 1;
        }
            break;
        case 8:
        {
            t67 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t67 - 1);
            if ((int)(short)(t67 - 1) > 0) {
                return;
            }
            t68 = ((int (*)(int, int, int, int))(FUN_0c01fce0))(a4, a5, a6, a7);
            FUN_0c02188c(0x3);
    return;
        }
        case 10:
        {
            t103 = 1;
        }
            break;
        case 12:
        {
            t69 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t69 - 1);
            if ((int)(short)(t69 - 1) > 0) {
            } else {
                FUN_0c01e9e4();
                FUN_0c0573d8();
                FUN_0c01cb7c();
                FUN_0c018e74((*(signed char *)0xC30EF69));
                (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)qa0) + 0x1);
                (((struct o0_ushort *)0xC30540C)->v) = 0x0;
            }
            return;
        }
        case 14:
        {
            (((struct o0_ushort *)0xC30540C)->v) = (((((struct o0_short *)0xC30540C)->v)) + 0x1);
            if ((int)((((struct o0_short *)0xC30540C)->v)) >= (int)0x1E0) {
            } else {
                t84 = 0;
                if ((int)((((struct o0_short *)0xC30540C)->v)) >= (int)0x3C) {
                    t83 = FUN_0c01cd2c(0x40);
                    if ((short)t83 == 0) {
                        t84 = 1;
                    }
                } else {
                    t84 = 1;
                }
                if (t84) {
                    t85 = FUN_0c01cd2c(0x101);
                    if ((short)t85 == 0) {
                        return;
                    }
                }
            }
            (((struct o0_uchar *)0xC30EF68)->v) = 0x8;
            (((struct o4_ushort *)0xC30EF68)->v) = 0x14;
            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
        }
        case 16:
        {
            t86 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t86 - 1);
            if ((int)(short)(t86 - 1) > 0) {
                return;
            }
            FUN_0c010450();
    return;
        }
        case 18:
        {
            t87 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t87 - 1);
            if ((int)(short)(t87 - 1) <= 0) {
                FUN_0c01e9e4();
                FUN_0c0573d8();
                FUN_0c01cb7c();
                (((struct o0_ushort *)0xC30540C)->v) = 0x0;
                (((struct o2_ushort *)0xC30540C)->v) = 0x0;
                FUN_0c018e9c((*(signed char *)0xC30EF69), 0xC30540E);
                (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)qa0) + 0x1);
                t103 = 2;
            } else {
                return;
            }
        }
            break;
        case 20:
        {
            t103 = 2;
        }
            break;
        case 22:
        {
        }
            break;
        case 24:
        {
            t94 = (((struct o0_short *)0xC30540C)->v);
            (((struct o0_ushort *)0xC30540C)->v) = (t94 - 1);
            if ((int)(short)(t94 - 1) <= 0) {
                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                (((struct o0_ushort *)0xC30540C)->v) = 0x14;
                (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)qa0) + 0x1);
            }
            return;
        }
        default:
        {
            t100 = (((struct o0_short *)0xC30540C)->v);
            (((struct o0_ushort *)0xC30540C)->v) = (t100 - 1);
            if ((int)(short)(t100 - 1) <= 0) {
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
    if (t103 == 1) {
        t104 = (((struct o4_short *)0xC30EF68)->v);
        (((struct o4_ushort *)0xC30EF68)->v) = (t104 - 1);
        if ((int)(short)(t104 - 1) >= 0) {
            t105 = FUN_0c01cd2c(0x101);
            if ((short)t105 == 0) {
                return;
            }
        }
        (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)qa0) + 0x1);
        (((struct o4_ushort *)0xC30EF68)->v) = 0x14;
        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    return;
    }
    if (t103 == 2) {
        t107 = (((struct o0_short *)0xC30540C)->v);
        (((struct o0_ushort *)0xC30540C)->v) = (t107 + 0x1);
        if ((int)(short)(t107 + 0x1) >= (int)0x20) {
            (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)qa0) + 0x1);
        } else {
            return;
        }
    }
    FUN_0c01c714(0xC30540E, 0x1, 0x2);
    t110 = FUN_0c01cd2c(0x101);
    if ((short)t110 != 0) {
        FUN_0c05aab6(0x0, 0x3);
        (((struct o0_ushort *)0xC30540C)->v) = 0x10;
        (((struct o0_uchar *)0xC30EF68)->v) = ((*(signed char *)qa0) + 0x1);
    }
}
