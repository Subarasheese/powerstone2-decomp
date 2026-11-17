/* game/unsorted: functions 0C0E2CDC-0C0E33B2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
int thunk_FUN_0c05abb2(int, int);
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
int FUN_0c179ac0(void);
void FUN_0c0e2fe2(void);

void FUN_0c0e2fe2(void)
{
    int stk[5];
    register int t0;
    register int t2;
    register int t10;
    register int t12;
    register int t14;
    register int t36;
    register int t43;
    register int t45;
    int t55;
    register int t57;
    register int t58;
    register int t59;
    int t86;
    register int t93;
    register int t106;
    register int t107;
    register int t108;
    register int t119;
    register int t130;
    register int t132;
    register int t135;
    register int t136;
    register int t145;
    register int t153;
    register int t155;
    register int t157;
    register int t179;
    register int t186;
    register int t188;
    int t198;
    register int t200;
    register int t201;
    register int t202;
    int t229;
    register int t236;
    register int t249;
    register int t250;
    register int t251;
    register int t262;
    register int t273;
    register int t275;
    int t28;
    int t171;

    t0 = *(signed char *)0xC54098C;
    if (t0 != 0) {
        if (t0 != 1) {
            return;
        }
        FUN_0c0e2e9a();
        t2 = *(signed char *)0xC54098D;
        if ((unsigned int)t2 >= (unsigned int)0x18) {
            return;
        }
        switch ((t2 << 1)) {
            case 0:
            {
                FUN_0c0e2dae(0x0);
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
                thunk_FUN_0c05abb2(0x58, 0x0);
                t10 = FUN_0c0e2e64();
                if (t10 == 0) {
                    return;
                }
                (((struct o1_uchar *)0xC54098C)->v) = 0x2;
                FUN_0c0e2dee();
                FUN_0c0e2cdc();
    return;
            }
            case 2:
            {
                t12 = FUN_0c0e2e64();
                if (t12 == 0) {
                    return;
                }
                (((struct o1_uchar *)0xC54098C)->v) = 0x2;
                FUN_0c0e2dee();
                FUN_0c0e2cdc();
    return;
            }
            case 4:
            {
                t14 = FUN_0c042fe0();
                if (t14 == 0) {
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
                if (((int)(*(signed char *)0xC54098E) >= (int)0x6) && (t28 = (((struct o8_short *)0xC54098C)->v), (t28 & 127) == 0)) {
                    thunk_FUN_0c05abb2(0x43, 0x0);
                }
                if ((int)((((struct o8_short *)0xC54098C)->v)) > 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    t36 = *(signed char *)0xC54098D;
                    if ((t36 == 6) || (t36 == 14)) {
                        t43 = *(signed char *)0xC54098E;
                        t45 = *(int *)(((((t43 << 2) << 2) + 0xC288050) + 0x8));
                        if ((*(signed char *)0xC54098F) == t45) {
                            (((struct o2_uchar *)0xC54098C)->v) = (*(int *)(((((t43 << 2) << 2) + 0xC288050) + 0xC)));
                        } else {
                            (((struct o2_uchar *)0xC54098C)->v) = t45;
                        }
                        (((struct o3_uchar *)0xC54098C)->v) = (*(signed char *)0xC54098E);
                    }
                    t55 = *(signed char *)0xC54098D;
                    if ((t55 != 4) && (t55 != 12)) {
                    } else {
                        (((struct o3_uchar *)0xC54098C)->v) = (*(signed char *)0xC54098E);
                        t57 = *(signed char *)0xC54098E;
                        t58 = FUN_0c179ac0();
                        t59 = ((~(((~t58) + 0x1) & 0x1)) + 0x1);
                        if ((int)t58 >= 0) {
                            t59 = (t58 & 0x1);
                        }
                        (((struct o2_uchar *)0xC54098C)->v) = (*(int *)(((((t57 << 2) << 2) + 0xC288050) + ((t59 + 0x2) << 2))));
                        FUN_0c0e2cdc();
                    }
                    if ((*(signed char *)0xC54098D) == 16) {
                        (((struct o3_uchar *)0xC54098C)->v) = (*(signed char *)0xC54098E);
                        (((struct o2_uchar *)0xC54098C)->v) = (*(int *)(((0xC288050 + (((*(signed char *)0xC54098E) << 2) << 2)) + 0xC)));
                    }
                    if ((*(signed char *)0xC54098D) == 17) {
                        FUN_0c0e2dae(0x1);
                    }
                    t86 = *(signed char *)0xC54098D;
                    if ((t86 != 3) && ((t86 != 4) && ((t86 != 7) && ((t86 != 9) && ((t86 != 12) && ((t86 != 15) && (t86 != 16))))))) {
                    } else {
                        FUN_0c0e2cdc();
                    }
                    t93 = *(signed char *)0xC54098D;
                    (((struct o8_ushort *)0xC54098C)->v) = ((*(short *)((0xC1CB0CC + ((t93 - 3) << 1)))) - (*(short *)(((((t93 - 4) << 1) + 0xC1CB0CC) + 0x0))));
                }
                t106 = *(signed char *)0xC54098D;
                if (t106 == 3) {
                    FUN_0c0e2cdc();
    return;
                }
                if (t106 == 8) {
                    FUN_0c0e2cdc();
    return;
                }
                if (t106 != 10) {
                    return;
                }
                FUN_0c0e2cdc();
    return;
            }
            case 34:
            {
                t107 = FUN_0c0e2e64();
                if (t107 == 0) {
                    return;
                }
                (((struct o1_uchar *)0xC54098C)->v) = 0x12;
                t108 = *(signed char *)0xC54098D;
                (((struct o8_ushort *)0xC54098C)->v) = ((*(short *)((0xC1CB0CC + ((t108 - 3) << 1)))) - (*(short *)(((((t108 - 4) << 1) + 0xC1CB0CC) + 0x0))));
                FUN_0c0522be((*(int *)0xC241B78));
    return;
            }
            case 36:
            {
                (((struct o8_ushort *)0xC54098C)->v) = (((((struct o8_short *)0xC54098C)->v)) - 1);
                if (!((float)((((struct o8_short *)0xC54098C)->v)) > (*(float *)0xC0E33B4))) {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    FUN_0c05b052(0x190, 0x0);
                    t119 = FUN_0c042fe0();
                    if (t119 != 0) {
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
                t130 = FUN_0c0e2e64();
                if (t130 != 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = 0x17;
                    FUN_0c0d02a6();
                    FUN_0c0e2cdc();
    return;
                }
                return;
            }
            case 44:
            {
                t132 = FUN_0c0e2e64();
                if (t132 != 0) {
                    (((struct o1_uchar *)0xC54098C)->v) = 0x17;
                    FUN_0c0d02a6();
                    FUN_0c0e2cdc();
    return;
                }
                return;
            }
            default:
            {
                return;
            }
        }
    }
    (((struct o0_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098C) + 0x1);
    (((struct o1_uchar *)0xC54098C)->v) = 0x0;
    t135 = FUN_0c179ac0();
    t136 = ((~(((~t135) + 0x1) & 0x7F)) + 0x1);
    if ((int)t135 >= 0) {
        t136 = (t135 & 0x7F);
    }
    (((struct o2_uchar *)0xC54098C)->v) = (t136 & 0x7);
    if ((int)(*(signed char *)0xC54098E) > (int)0x5) {
        (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) - 0x5);
    }
    (((struct o3_uchar *)0xC54098C)->v) = (*(signed char *)0xC54098E);
    (((struct o8_ushort *)0xC54098C)->v) = (*(short *)0xC1CB0CC);
    (((struct o4_float *)0xC541098)->v) = 0.0f;
    (((struct o0_float *)0xC541098)->v) = -2000.0f;
    FUN_0c0e2e9a();
    t145 = *(signed char *)0xC54098D;
    if ((unsigned int)t145 >= (unsigned int)0x18) {
        return;
    }
    switch ((t145 << 1)) {
        case 0:
        {
            FUN_0c0e2dae(0x0);
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
            thunk_FUN_0c05abb2(0x58, 0x0);
            t153 = FUN_0c0e2e64();
            if (t153 == 0) {
                return;
            }
            (((struct o1_uchar *)0xC54098C)->v) = 0x2;
            FUN_0c0e2dee();
            FUN_0c0e2cdc();
    return;
        }
        case 2:
        {
            t155 = FUN_0c0e2e64();
            if (t155 == 0) {
                return;
            }
            (((struct o1_uchar *)0xC54098C)->v) = 0x2;
            FUN_0c0e2dee();
            FUN_0c0e2cdc();
    return;
        }
        case 4:
        {
            t157 = FUN_0c042fe0();
            if (t157 == 0) {
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
            if (((int)(*(signed char *)0xC54098E) >= (int)0x6) && (t171 = (((struct o8_short *)0xC54098C)->v), (t171 & 127) == 0)) {
                thunk_FUN_0c05abb2(0x43, 0x0);
            }
            if ((int)((((struct o8_short *)0xC54098C)->v)) > 0) {
            } else {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                t179 = *(signed char *)0xC54098D;
                if ((t179 == 6) || (t179 == 14)) {
                    t186 = *(signed char *)0xC54098E;
                    t188 = *(int *)(((((t186 << 2) << 2) + 0xC288050) + 0x8));
                    if ((*(signed char *)0xC54098F) == t188) {
                        (((struct o2_uchar *)0xC54098C)->v) = (*(int *)(((((t186 << 2) << 2) + 0xC288050) + 0xC)));
                    } else {
                        (((struct o2_uchar *)0xC54098C)->v) = t188;
                    }
                    (((struct o3_uchar *)0xC54098C)->v) = (*(signed char *)0xC54098E);
                }
                t198 = *(signed char *)0xC54098D;
                if ((t198 != 4) && (t198 != 12)) {
                } else {
                    (((struct o3_uchar *)0xC54098C)->v) = (*(signed char *)0xC54098E);
                    t200 = *(signed char *)0xC54098E;
                    t201 = FUN_0c179ac0();
                    t202 = ((~(((~t201) + 0x1) & 0x1)) + 0x1);
                    if ((int)t201 >= 0) {
                        t202 = (t201 & 0x1);
                    }
                    (((struct o2_uchar *)0xC54098C)->v) = (*(int *)(((((t200 << 2) << 2) + 0xC288050) + ((t202 + 0x2) << 2))));
                    FUN_0c0e2cdc();
                }
                if ((*(signed char *)0xC54098D) == 16) {
                    (((struct o3_uchar *)0xC54098C)->v) = (*(signed char *)0xC54098E);
                    (((struct o2_uchar *)0xC54098C)->v) = (*(int *)(((0xC288050 + (((*(signed char *)0xC54098E) << 2) << 2)) + 0xC)));
                }
                if ((*(signed char *)0xC54098D) == 17) {
                    FUN_0c0e2dae(0x1);
                }
                t229 = *(signed char *)0xC54098D;
                if ((t229 != 3) && ((t229 != 4) && ((t229 != 7) && ((t229 != 9) && ((t229 != 12) && ((t229 != 15) && (t229 != 16))))))) {
                } else {
                    FUN_0c0e2cdc();
                }
                t236 = *(signed char *)0xC54098D;
                (((struct o8_ushort *)0xC54098C)->v) = ((*(short *)((0xC1CB0CC + ((t236 - 3) << 1)))) - (*(short *)(((((t236 - 4) << 1) + 0xC1CB0CC) + 0x0))));
            }
            t249 = *(signed char *)0xC54098D;
            if (t249 == 3) {
                FUN_0c0e2cdc();
    return;
            }
            if (t249 == 8) {
                FUN_0c0e2cdc();
    return;
            }
            if (t249 != 10) {
                return;
            }
            FUN_0c0e2cdc();
    return;
        }
        case 34:
        {
            t250 = FUN_0c0e2e64();
            if (t250 == 0) {
                return;
            }
            (((struct o1_uchar *)0xC54098C)->v) = 0x12;
            t251 = *(signed char *)0xC54098D;
            (((struct o8_ushort *)0xC54098C)->v) = ((*(short *)((0xC1CB0CC + ((t251 - 3) << 1)))) - (*(short *)(((((t251 - 4) << 1) + 0xC1CB0CC) + 0x0))));
            FUN_0c0522be((*(int *)0xC241B78));
    return;
        }
        case 36:
        {
            (((struct o8_ushort *)0xC54098C)->v) = (((((struct o8_short *)0xC54098C)->v)) - 1);
            if (!((float)((((struct o8_short *)0xC54098C)->v)) > (*(float *)0xC0E33B4))) {
                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                FUN_0c05b052(0x190, 0x0);
                t262 = FUN_0c042fe0();
                if (t262 != 0) {
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
            t273 = FUN_0c0e2e64();
            if (t273 != 0) {
                (((struct o1_uchar *)0xC54098C)->v) = 0x17;
                FUN_0c0d02a6();
                FUN_0c0e2cdc();
    return;
            }
            return;
        }
        case 44:
        {
            t275 = FUN_0c0e2e64();
            if (t275 != 0) {
                (((struct o1_uchar *)0xC54098C)->v) = 0x17;
                FUN_0c0d02a6();
                FUN_0c0e2cdc();
    return;
            }
            return;
        }
        default:
        {
            return;
        }
    }
}
