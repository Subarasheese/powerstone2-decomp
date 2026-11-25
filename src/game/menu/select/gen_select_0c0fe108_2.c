/* game/menu/select: functions 0C0FE108-0C0FFCDA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03add8(void);
int FUN_0c03b6ac(int);
int FUN_0c03b9d0(int);
int FUN_0c03c018(int);
int FUN_0c03c210(int);
int FUN_0c03c358(int);
int FUN_0c03c5c0(int);
int FUN_0c03c7ec(int);
int FUN_0c03cacc(int);
int FUN_0c03ceb6(int);
int FUN_0c03d0bc(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05f80a(void);
int FUN_0c0fe116(void);
int FUN_0c0fe154(int);
int FUN_0c0fe178(int);
int FUN_0c0fe17e(void);
int FUN_0c0fe23a(void);
int FUN_0c0fe328(void);
int FUN_0c0fe3a0(void);
int FUN_0c0fe3d0(void);
int FUN_0c0fe496(void);
int FUN_0c0ffaa2(void);
int FUN_0c0ffcf8(int);
int FUN_0c0ffebc(void);
int FUN_0c0ffff0(void);
int FUN_0c1000c4(int);
int FUN_0c16f7ba(void);
void FUN_0c0fe530(void);

/* FUN_0c0fe530, by hand from the original (4,996 bytes; the generated C was 27,826).
   The select-screen task: runs once per frame on the block at 0xC472B24 (state B28: 0 and 1 the first menus, 2 the item screen;
   in state 2 the sub-step B2C goes 0 -> 1 -> 2 -> 3 and each step does its own work, then falls into the next; step 3 acts on the
   kind of the selected item (the 20-byte entry at 0xC1FB6D4 + 20 * BA0), whose own sub-step B30 does the same).
   The generated C wrote the step 1-3 tail four times, once per step it falls through. */

#define G(a) (*(int *)(a))
#define ST   G(0xC472B28)
#define SUB  G(0xC472B2C)
#define STEP G(0xC472B30)
#define B4C  G(0xC472B4C)
#define B50  G(0xC472B50)
#define B54  G(0xC472B54)
#define B58  G(0xC472B58)
#define B5C  G(0xC472B5C)
#define B60  G(0xC472B60)
#define B64  G(0xC472B64)
#define B68  G(0xC472B68)
#define B6C  G(0xC472B6C)
#define B70  G(0xC472B70)
#define B74  G(0xC472B74)
#define B78  G(0xC472B78)
#define B7C  G(0xC472B7C)
#define B80  G(0xC472B80)
#define B84  G(0xC472B84)
#define B88  G(0xC472B88)
#define B8C  G(0xC472B8C)
#define B94  G(0xC472B94)
#define B98  G(0xC472B98)
#define B9C  G(0xC472B9C)
#define SEL  G(0xC472BA0)
#define BIT(m) (((1 << B8C) & (m)) != 0)
#define F4   (*(int *)((((SEL << 2) + SEL) << 2) + 0xC1FB6D8))
#define F8   (*(int *)((((SEL << 2) + SEL) << 2) + 0xC1FB6DC))
#define GOBACK() if (B54 != 0) { ST = 1; SUB = 0; B9C = 5; } else { ST = 0; SUB = 0; }
#define EXIT8() { SEL = F8; SUB = 2; }
#define PICK(r) { if ((r) == 0) { SEL = F4; } else { SEL = F8; } SUB = 2; }

/* manual: written by hand, 2026-11-23/24 (build/manual/notes_FUN_0c0fe530.txt) */
void FUN_0c0fe530(void)
{
    int stk[4];
    int s4;
    int s8;
    int r;
    int kind;

    if (G(0xC472B24) == 0) {
        G(0xC472B24) = G(0xC472B24) + 1;
        FUN_0c03eff6();
        FUN_0c0527e6();
        FUN_0c036de8(0x1B, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        G(0xC542448) = 0xFF000000;
        G(0xC542444) = 0xFF000000;
        G(0xC542440) = 0xFF000000;
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        FUN_0c16f7ba();
        FUN_0c05f80a();
        ST = 0;
        FUN_0c0ffaa2();
        FUN_0c0ffcf8(0x0);
        FUN_0c0ffcf8(0x1);
        FUN_0c0ffebc();
        FUN_0c0ffff0();
        FUN_0c0fe178(0x28);
        switch (B50) {
        case 0:
            ST = 0; B54 = 0; B58 = 0;
            break;
        case 1:
            ST = 2; B54 = 1; B98 = 0; B9C = 0xFFFFFFFF; SUB = 1; SEL = 7; B58 = 0;
            break;
        case 2:
        case 3:
            ST = 2; B54 = 1; B98 = 0; B9C = 0xFFFFFFFF; SUB = 1; SEL = 6; B58 = 0;
            break;
        case 4:
            ST = 1; B54 = 1; B98 = 0; B9C = 5; SUB = 0; B58 = 0;
            break;
        case 5:
            ST = 1; B54 = 1; B98 = 0; B9C = 5; SUB = 1; SEL = 0x1F; B58 = 1;
            break;
        case 6:
            ST = 1; B54 = 1; B98 = 0; B9C = 5; SUB = 1; SEL = 0x19; B58 = 2;
            break;
        case 7:
            ST = 2; B54 = 1; B98 = 0; B9C = 6; SUB = 1; SEL = 7; B58 = 0;
            break;
        }
        s4 = FUN_0c03add8();
        if (s4 != -1) {
            B5C = FUN_0c0fe116();
            B60 = s4;
            FUN_0c0fe3d0();
        }
    }
    if (B4C > 0) {
        B4C = B4C - 1;
    }
    switch (ST) {
    case 0:
        s4 = FUN_0c03add8();
        if (s4 != -1) {
            B5C = FUN_0c0fe116();
            B60 = s4;
            FUN_0c0fe17e();
            B9C = B98;
            FUN_0c0fe3d0();
            if (s4 != 0 && (s8 = FUN_0c0fe154(0x101)) != 0 && B98 != 4) {
                FUN_0c0fe178(0x14);
                ST = 2;
                SUB = 0;
                B9C = 0xFFFFFFFF;
                B8C = B94;
                FUN_0c05aab6(s8 - 1, 0x3);
            } else {
                s8 = FUN_0c0fe154(0x40);
                if (s8 != 0) {
                    FUN_0c0fe178(0x14);
                    if (B98 != 4) {
                        B98 = 4;
                        FUN_0c05aab6(s8 - 1, 0x6);
                    } else {
                        FUN_0c05aab6(s8 - 1, 0x4);
                        FUN_0c0fe496();
                    }
                } else {
                    s8 = FUN_0c0fe154(0x101);
                    if (s8 != 0 && B98 == 4) {
                        FUN_0c0fe178(0x14);
                        FUN_0c05aab6(s8 - 1, 0x3);
                        FUN_0c0fe496();
                    }
                }
            }
        }
        break;
    case 1:
        s4 = FUN_0c03add8();
        if (s4 != -1) {
            B5C = FUN_0c0fe116();
            B60 = s4;
            if (B98 != 4) {
                B98 = 0;
            }
            FUN_0c0fe23a();
            if (B98 == 0) {
                B9C = 5;
            } else {
                B9C = 4;
            }
            FUN_0c0fe3d0();
            if (s4 != 0 && (s8 = FUN_0c0fe154(0x101)) != 0 && B98 != 4) {
                FUN_0c0fe178(0x14);
                ST = 2;
                SUB = 0;
                B9C = 0xFFFFFFFF;
                B8C = B94;
                FUN_0c05aab6(s8 - 1, 0x3);
                if (B58 == 1) {
                    B98 = 6;
                } else if (B58 == 2) {
                    B98 = 5;
                }
            }
            s8 = FUN_0c0fe154(0x40);
            if (s8 != 0) {
                FUN_0c0fe178(0x14);
                if (B98 != 4) {
                    B98 = 4;
                    FUN_0c05aab6(s8 - 1, 0x6);
                } else {
                    FUN_0c05aab6(s8 - 1, 0x4);
                    FUN_0c0fe496();
                }
            } else {
                s8 = FUN_0c0fe154(0x101);
                if (s8 != 0 && B98 == 4) {
                    FUN_0c0fe178(0x14);
                    FUN_0c05aab6(s8 - 1, 0x3);
                    FUN_0c0fe496();
                }
            }
        }
        break;
    case 2:
        switch (SUB) {
        case 0:
            s4 = FUN_0c03add8();
            if (s4 == -1) {
                FUN_0c0fe3a0();
            } else {
                FUN_0c0fe328();
            }
            switch (B98) {
            case 0:
                if (B68 >= 0 && BIT(B68)) {
                    SEL = 2;
                } else if (B64 < 0) {
                    SEL = 5;
                } else {
                    SEL = BIT(B64) ? 1 : 0;
                }
                break;
            case 1:
                SEL = (B68 >= 0 && BIT(B68)) ? 0x10 : 0xF;
                break;
            case 2:
                if (B74 >= 0 && BIT(B74)) {
                    SEL = 9;
                } else if (B70 < 0) {
                    SEL = 0xE;
                } else if (BIT(B70)) {
                    SEL = 0xB;
                } else {
                    SEL = (B6C >= 0 && BIT(B6C)) ? 0xB : 8;
                }
                break;
            case 3:
                if (B68 >= 0 && BIT(B78)) {
                    SEL = 0x24;
                } else {
                    SEL = 0x29;
                }
                break;
            case 5:
                s4 = FUN_0c03add8();
                if (s4 == -1) {
                    FUN_0c0fe3a0();
                } else {
                    FUN_0c0fe328();
                }
                if (B7C < 0) {
                    SEL = 0x1D;
                } else if (BIT(B7C)) {
                    SEL = 0x1A;
                } else if (B84 < 0) {
                    SEL = 0x1D;
                } else {
                    SEL = BIT(B84) ? 0x19 : 0x18;
                }
                break;
            case 6:
                s4 = FUN_0c03add8();
                if (s4 == -1) {
                    FUN_0c0fe3a0();
                } else {
                    FUN_0c0fe328();
                }
                if (B80 < 0) {
                    SEL = 0x23;
                } else if (BIT(B80)) {
                    SEL = 0x20;
                } else if (B88 < 0) {
                    SEL = 0x23;
                } else {
                    SEL = BIT(B88) ? 0x1F : 0x1E;
                }
                break;
            }
            SUB = SUB + 1;
        case 1:
            FUN_0c0ffcf8(0x2);
            SUB = SUB + 1;
        case 2:
            FUN_0c1000c4(SEL);
            SUB = SUB + 1;
            STEP = 0;
        case 3:
            s4 = FUN_0c03add8();
            kind = *(int *)(((SEL << 2) + SEL) * 4 + 0xC1FB6D4);
            switch (kind) {
            case 0:
                s8 = FUN_0c0fe154(0x83CF);
                if (s8 != 0) {
                    FUN_0c0fe178(0x14);
                    GOBACK();
                    FUN_0c05aab6(s8 - 1, 0x4);
                }
                break;
            case 1:
                s8 = FUN_0c0fe154(0x83CF);
                if (s8 != 0) {
                    FUN_0c0fe178(0x14);
                    FUN_0c05aab6(s8 - 1, 0x3);
                    if (B50 != 0) {
                        FUN_0c0fe496();
                    } else {
                        GOBACK();
                    }
                }
                break;
            case 2:
                s8 = FUN_0c0fe154(0x83CF);
                if (s8 != 0) {
                    FUN_0c0fe178(0x14);
                    SEL = F4;
                    SUB = 2;
                    FUN_0c05aab6(s8 - 1, 0x3);
                }
                break;
            case 16:
                s8 = FUN_0c0fe154(0x40);
                if (s8 != 0) {
                    FUN_0c0fe178(0x14);
                    GOBACK();
                    FUN_0c05aab6(s8 - 1, 0x4);
                } else {
                    s8 = FUN_0c0fe154(0x101);
                    if (s8 != 0) {
                        FUN_0c0fe178(0x14);
                        SUB = 2;
                        SEL = F4;
                        FUN_0c05aab6(s8 - 1, 0x3);
                    }
                }
                break;
            case 17:
                s8 = FUN_0c0fe154(0x40);
                if (s8 != 0) {
                    FUN_0c0fe178(0x14);
                    FUN_0c0fe496();
                    FUN_0c05aab6(s8 - 1, 0x4);
                } else {
                    s8 = FUN_0c0fe154(0x101);
                    if (s8 != 0) {
                        FUN_0c0fe178(0x14);
                        ST = 1;
                        SUB = 0;
                        B9C = 5;
                        FUN_0c05aab6(s8 - 1, 0x3);
                    }
                }
                break;
            case 18:
                s8 = FUN_0c0fe154(0x40);
                if (s8 != 0) {
                    FUN_0c0fe178(0x14);
                    GOBACK();
                    FUN_0c05aab6(s8 - 1, 0x4);
                } else {
                    s8 = FUN_0c0fe154(0x101);
                    if (s8 != 0) {
                        FUN_0c0fe178(0x14);
                        FUN_0c05aab6(s8 - 1, 0x3);
                        SUB = 2;
                        s4 = FUN_0c03add8();
                        if (s4 == -1) {
                            FUN_0c0fe3a0();
                        } else {
                            FUN_0c0fe328();
                        }
                        if (B64 < 0) {
                            SEL = 5;
                        } else if (!BIT(B64)) {
                            SEL = 0;
                        } else if (B70 < 0) {
                            SEL = 0xE;
                        } else if (!BIT(B70) && !(B6C >= 0 && BIT(B6C))) {
                            SEL = 8;
                        } else if (B68 < 0) {
                            SEL = 5;
                        } else {
                            SEL = BIT(B68) ? 0x15 : 0x16;
                        }
                    }
                }
                break;
            case 19:
                s8 = FUN_0c0fe154(0x40);
                if (s8 != 0) {
                    FUN_0c0fe178(0x14);
                    GOBACK();
                    FUN_0c05aab6(s8 - 1, 0x4);
                } else {
                    s8 = FUN_0c0fe154(0x101);
                    if (s8 != 0) {
                        FUN_0c0fe178(0x14);
                        FUN_0c05aab6(s8 - 1, 0x3);
                        SUB = 2;
                        s4 = FUN_0c03add8();
                        if (s4 == -1) {
                            FUN_0c0fe3a0();
                        } else {
                            FUN_0c0fe328();
                        }
                        if (B64 < 0) {
                            SEL = 5;
                        } else if (!BIT(B64)) {
                            SEL = 0;
                        } else if (B68 < 0) {
                            SEL = 5;
                        } else {
                            SEL = BIT(B68) ? 2 : 3;
                        }
                    }
                }
                break;
            case 32:
                switch (STEP) {
                case 0:
                    STEP = STEP + 1;
                    if (s4 == -1 || !BIT(s4)) {
                        EXIT8();
                        break;
                    }
                case 1:
                    r = FUN_0c03b9d0(B8C);
                    if (r != -1) {
                        if (r != 0) {
                            EXIT8();
                        } else if (BIT(B6C)) {
                            STEP = STEP + 1;
                        } else {
                            SEL = F4;
                            SUB = 2;
                        }
                    }
                    break;
                case 2:
                    STEP = STEP + 1;
                    if (s4 == -1 || !BIT(s4)) {
                        EXIT8();
                        break;
                    }
                case 3:
                    r = FUN_0c03c210(B8C);
                    if (r != -1) {
                        PICK(r);
                    }
                    break;
                }
                break;
            case 33:
                switch (STEP) {
                case 0:
                    STEP = STEP + 1;
                    if (s4 == -1 || !BIT(s4)) {
                        EXIT8();
                        break;
                    }
                case 1:
                    r = FUN_0c03b6ac(B8C);
                    if (r != -1) {
                        if (r != 0) {
                            EXIT8();
                        } else if (B6C >= 0 && BIT(B6C)) {
                            STEP = STEP + 1;
                        } else {
                            SEL = F4;
                            SUB = 2;
                        }
                    }
                    break;
                case 2:
                    STEP = STEP + 1;
                    if (s4 == -1) {
                        EXIT8();
                        break;
                    }
                    FUN_0c0fe328();
                    if (!BIT(s4)) {
                        EXIT8();
                        break;
                    }
                case 3:
                    r = FUN_0c03c358(B8C);
                    if (r != -1) {
                        PICK(r);
                    }
                    break;
                }
                break;
            case 34:
                switch (STEP) {
                case 0:
                    STEP = STEP + 1;
                    if (s4 == -1 || !BIT(s4)) {
                        EXIT8();
                        break;
                    }
                case 1:
                    r = FUN_0c03b6ac(B8C);
                    if (r != -1) {
                        if (r != 0) {
                            EXIT8();
                        } else {
                            SEL = F4;
                            SUB = 2;
                            s4 = FUN_0c03add8();
                            if (s4 == -1) {
                                FUN_0c0fe3a0();
                            } else {
                                FUN_0c0fe328();
                            }
                            if (B70 < 0) {
                                SEL = 0xE;
                            } else if (!BIT(B70)) {
                                SEL = (B6C >= 0 && BIT(B6C)) ? 0xC : 8;
                            } else {
                                SEL = (B74 >= 0 && BIT(B74)) ? 9 : 0xC;
                            }
                        }
                    }
                    break;
                }
                break;
            case 35:
                switch (STEP) {
                case 0:
                    STEP = STEP + 1;
                    if (s4 == -1) {
                        EXIT8();
                        break;
                    }
                    FUN_0c0fe328();
                    if (!BIT(s4)) {
                        EXIT8();
                        break;
                    }
                    if (B6C >= 0 && BIT(B6C)) {
                        STEP = 2;
                    }
                    if (STEP == 1) {
                        r = FUN_0c03c018(B8C);
                    } else {
                        r = FUN_0c03c358(B8C);
                    }
                    if (r != -1) {
                        PICK(r);
                    }
                    break;
                case 1:
                case 2:
                    if (STEP == 1) {
                        r = FUN_0c03c018(B8C);
                    } else {
                        r = FUN_0c03c358(B8C);
                    }
                    if (r != -1) {
                        PICK(r);
                    }
                    break;
                }
                break;
            case 36:
                switch (STEP) {
                case 0:
                    STEP = STEP + 1;
                    if (s4 == -1 || !BIT(s4)) {
                        EXIT8();
                        break;
                    }
                case 1:
                    r = FUN_0c03ceb6(B8C);
                    if (r != -1) {
                        if (r == 0) {
                            STEP = STEP + 1;
                        } else {
                            EXIT8();
                        }
                    }
                    break;
                case 2:
                    r = FUN_0c03d0bc(B8C);
                    if (r != -1) {
                        PICK(r);
                    }
                    break;
                }
                break;
            case 37:
                switch (STEP) {
                case 0:
                    STEP = STEP + 1;
                    if (s4 == -1 || !BIT(s4)) {
                        EXIT8();
                        break;
                    }
                case 1:
                    r = FUN_0c03c5c0(B8C);
                    if (r != -1) {
                        PICK(r);
                    }
                    break;
                }
                break;
            case 38:
                switch (STEP) {
                case 0:
                    STEP = STEP + 1;
                    if (s4 == -1 || !BIT(s4)) {
                        EXIT8();
                        break;
                    }
                case 1:
                    r = FUN_0c03c7ec(B8C);
                    if (r != -1) {
                        PICK(r);
                    }
                    break;
                }
                break;
            case 39:
                switch (STEP) {
                case 0:
                    STEP = STEP + 1;
                    if (s4 == -1 || !BIT(s4)) {
                        EXIT8();
                        break;
                    }
                case 1:
                    r = FUN_0c03cacc(B8C);
                    if (r != -1) {
                        PICK(r);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    FUN_0c038e88(0x8);
}
#undef G
#undef ST
#undef SUB
#undef STEP
#undef B4C
#undef B50
#undef B54
#undef B58
#undef B5C
#undef B60
#undef B64
#undef B68
#undef B6C
#undef B70
#undef B74
#undef B78
#undef B7C
#undef B80
#undef B84
#undef B88
#undef B8C
#undef B94
#undef B98
#undef B9C
#undef SEL
#undef BIT
#undef F4
#undef F8
#undef GOBACK
#undef EXIT8
#undef PICK
