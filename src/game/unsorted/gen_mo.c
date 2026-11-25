/* Straight-line functions with calls and guards (batch gen_mo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
int FUN_0c042fe0(void);
int FUN_0c0522be(int);
int FUN_0c059c16(int, int);
int FUN_0c059c7a(int, int);
int FUN_0c05af9a(int, int, int);
int FUN_0c05b052(int, int);
int FUN_0c0d02a6(void);
int FUN_0c0e2cdc(void);
int FUN_0c0e2dae(int);
int FUN_0c0e2dee(void);
int FUN_0c0e2e60(void);
int FUN_0c0e2e64(void);
int FUN_0c0e2e9a(void);
int FUN_0c0e8718(void);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
void FUN_0c0e2fe2(void);

void FUN_0c0e2fe2(void)
{
    int stk[5];
    register int t0;
    register int t2;
    register int t3;
    register int t12;
    register int t136;
    register int t20;
    register int t42;
    register int t49;
    register int t51;
    int t61;
    register int t63;
    register int t64;
    register int t65;
    int t92;
    register int t99;
    register int t112;
    register int t113;
    register int t114;
    register int t125;
    register int t137;
    register int t139;
    int t34;

    t0 = *(signed char *)0xC54098C;
    if (t0 != 0) {
        if (t0 != 1) {
            return;
        }
    } else {
        (((struct o0_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098C) + 0x1);
        (((struct o1_uchar *)0xC54098C)->v) = 0x0;
        t2 = nlRand();
        t3 = (t2 % 0x80);
        (((struct o2_uchar *)0xC54098C)->v) = (t3 & 0x7);
        if ((int)(*(signed char *)0xC54098E) > (int)0x5) {
            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) - 0x5);
        }
        (((struct o3_uchar *)0xC54098C)->v) = (*(signed char *)0xC54098E);
        (((struct o8_ushort *)0xC54098C)->v) = (*(short *)0xC1CB0CC);
        (((struct o4_float *)0xC541098)->v) = 0.0f;
        (((struct o0_float *)0xC541098)->v) = -2000.0f;
    }
    FUN_0c0e2e9a();
    t12 = *(signed char *)0xC54098D;
    if ((unsigned int)t12 >= (unsigned int)0x18) {
        return;
    }
    t136 = 0;
    switch ((t12 << 1)) {
        case 0:
        {
            FUN_0c0e2dae(0x0);
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
            thunk_FUN_0c05abb2(0x58, 0x0);
            t136 = 1;
        }
            break;
        case 2:
        {
            t136 = 1;
        }
            break;
        case 4:
        {
            t20 = FUN_0c042fe0();
            if (t20 == 0) {
            } else {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                FUN_0c0e2e60();
                FUN_0c05af9a(0x58, 0x40, 0x78);
            }
            return;
        }
        case 6:
        case 8:
        case 10:
        case 12:
        case 14:
        case 16:
        case 18:
        case 20:
        case 22:
        case 24:
        case 26:
        case 28:
        case 30:
        case 32:
        {
            (((struct o8_ushort *)0xC54098C)->v) = (((((struct o8_short *)0xC54098C)->v)) - 1);
            if ((unsigned char)((((struct o8_short *)0xC54098C)->v)) == 0) {
                FUN_0c0e8718();
            }
            if (((int)(*(signed char *)0xC54098E) >= (int)0x6) && (t34 = (((struct o8_short *)0xC54098C)->v), (t34 & 127) == 0)) {
                thunk_FUN_0c05abb2(0x43, 0x0);
            }
            if ((int)((((struct o8_short *)0xC54098C)->v)) > 0) {
            } else {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                t42 = *(signed char *)0xC54098D;
                if ((t42 == 6) || (t42 == 14)) {
                    t49 = *(signed char *)0xC54098E;
                    t51 = *(int *)(((((t49 << 2) << 2) + 0xC288050) + 0x8));
                    if ((*(signed char *)0xC54098F) == t51) {
                        (((struct o2_uchar *)0xC54098C)->v) = (*(int *)(((((t49 << 2) << 2) + 0xC288050) + 0xC)));
                    } else {
                        (((struct o2_uchar *)0xC54098C)->v) = t51;
                    }
                    (((struct o3_uchar *)0xC54098C)->v) = (*(signed char *)0xC54098E);
                }
                t61 = *(signed char *)0xC54098D;
                if ((t61 != 4) && (t61 != 12)) {
                } else {
                    (((struct o3_uchar *)0xC54098C)->v) = (*(signed char *)0xC54098E);
                    t63 = *(signed char *)0xC54098E;
                    t64 = nlRand();
                    t65 = (t64 % 0x2);
                    (((struct o2_uchar *)0xC54098C)->v) = (*(int *)(((((t63 << 2) << 2) + 0xC288050) + ((t65 + 0x2) << 2))));
                    FUN_0c0e2cdc();
                }
                if ((*(signed char *)0xC54098D) == 16) {
                    (((struct o3_uchar *)0xC54098C)->v) = (*(signed char *)0xC54098E);
                    (((struct o2_uchar *)0xC54098C)->v) = (*(int *)(((0xC288050 + (((*(signed char *)0xC54098E) << 2) << 2)) + 0xC)));
                }
                if ((*(signed char *)0xC54098D) == 17) {
                    FUN_0c0e2dae(0x1);
                }
                t92 = *(signed char *)0xC54098D;
                if ((t92 != 3) && ((t92 != 4) && ((t92 != 7) && ((t92 != 9) && ((t92 != 12) && ((t92 != 15) && (t92 != 16))))))) {
                } else {
                    FUN_0c0e2cdc();
                }
                t99 = *(signed char *)0xC54098D;
                (((struct o8_ushort *)0xC54098C)->v) = ((*(short *)((0xC1CB0CC + ((t99 - 3) << 1)))) - (*(short *)(((((t99 - 4) << 1) + 0xC1CB0CC) + 0x0))));
            }
            t112 = *(signed char *)0xC54098D;
            if (t112 == 3) {
                FUN_0c0e2cdc();
    return;
            }
            if (t112 == 8) {
                FUN_0c0e2cdc();
    return;
            }
            if (t112 != 10) {
                return;
            }
            FUN_0c0e2cdc();
    return;
        }
        case 34:
        {
            t113 = FUN_0c0e2e64();
            if (t113 == 0) {
                return;
            }
            (((struct o1_uchar *)0xC54098C)->v) = 0x12;
            t114 = *(signed char *)0xC54098D;
            (((struct o8_ushort *)0xC54098C)->v) = ((*(short *)((0xC1CB0CC + ((t114 - 3) << 1)))) - (*(short *)(((((t114 - 4) << 1) + 0xC1CB0CC) + 0x0))));
            FUN_0c0522be((*(int *)0xC241B78));
    return;
        }
        case 36:
        {
            (((struct o8_ushort *)0xC54098C)->v) = (((((struct o8_short *)0xC54098C)->v)) - 1);
            if (!((float)((((struct o8_short *)0xC54098C)->v)) > (*(float *)0xC0E33B4))) {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                FUN_0c05b052(0x190, 0x0);
                t125 = FUN_0c042fe0();
                if (t125 != 0) {
                    FUN_0c059c7a(0xB, 0x0);
    return;
                }
                return;
            }
            return;
        }
        case 38:
        {
            (((struct o8_ushort *)0xC54098C)->v) = (((((struct o8_short *)0xC54098C)->v)) - 1);
            if ((int)((((struct o8_short *)0xC54098C)->v)) <= 0) {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                FUN_0c0e2e60();
                FUN_0c05af9a(0x58, 0x0, 0x1);
                FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
                FUN_0c0e2cdc();
    return;
            }
            return;
        }
        case 40:
        {
            return;
        }
        case 42:
        {
            FUN_0c0e2dae(0x2);
            (((struct o1_uchar *)0xC54098C)->v) = 0x16;
            FUN_0c05af9a(0x58, 0x0, 0x1);
        }
            break;
        case 44:
        {
        }
            break;
        default:
        {
            return;
        }
    }
    if (t136) {
        t137 = FUN_0c0e2e64();
        if (t137 == 0) {
            return;
        }
        (((struct o1_uchar *)0xC54098C)->v) = 0x2;
        FUN_0c0e2dee();
        FUN_0c0e2cdc();
    return;
    }
    t139 = FUN_0c0e2e64();
    if (t139 != 0) {
        (((struct o1_uchar *)0xC54098C)->v) = 0x17;
        FUN_0c0d02a6();
        FUN_0c0e2cdc();
    return;
    }
}
