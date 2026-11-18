/* Straight-line functions with calls and guards (batch gen_g): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c18c9fc(int, ...);
int FUN_0c19114c(int);
int FUN_0c19d1d0(int, int);
int FUN_0c19d208(int, int);
int FUN_0c19d296(int);
int FUN_0c19d2b4(int, int, int, int);
int FUN_0c19d3a0(int);
int FUN_0c19d410(int, int);
int FUN_0c19d41e(int);
int FUN_0c19d444(int);
int FUN_0c19d470(int);
int FUN_0c19d4ee(int);
int FUN_0c1a02aa(int, int);
void FUN_0c19d590(int a4, int a5, int a6, int a7);

void FUN_0c19d590(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t6;
    register int t9;
    register int t11;
    register int t12;
    register int t15;
    register int t18;
    register int t21;
    register int t30;
    register int t41;
    register int t50;
    register int t55;
    register int t64;
    register int t68;
    register int t73;
    register int t80;
    register int t91;
    register int t94;
    register int t103;
    register int t113;
    register int t120;
    register int t131;
    register int t134;
    register int t143;
    register int t150;
    register int t161;
    register int t164;
    register int t173;
    register int t180;
    register int t192;
    register int t195;
    register int t199;
    register int t205;
    register int t207;
    register int t215;
    register int t222;
    register int t224;

    *(unsigned int *)(((int)stk + 16)) = a5;
    FUN_0c19d208(((int)stk + 12), (((int)stk + 12) + 0x4));
    *(unsigned short *)(((int)stk + 14)) = ((*(short *)(((int)stk + 14))) - 4);
    FUN_0c1a02aa((((int)stk + 12) + 0x4), (*(short *)(((int)stk + 14))));
    t6 = (FUN_0c19d4ee((unsigned char)(*(signed char *)((a4 + 0x0)))));
    *(int *)((int)stk + 8) = t6;
    t9 = (FUN_0c19d470((unsigned char)(*(signed char *)(((int)stk + 12)))));
    *(int *)((int)stk + 4) = t9;
    *(int *)((int)stk + 0) = 0xC20AB60;
    FUN_0c18c9fc(0xC20AB60, t9, t6);
    t11 = *(signed char *)(((int)stk + 13));
    t12 = *(signed char *)(((int)stk + 12));
    if ((unsigned int)((unsigned char)t12 - 1) >= (unsigned int)0xC) {
        *(unsigned short *)(((int)stk + 14)) = ((*(short *)(((int)stk + 14))) + 0x4);
        t15 = FUN_0c19d1d0(((int)stk + 12), (*(int *)(((int)stk + 16))));
        *(unsigned int *)(((int)stk + 16)) = t15;
        FUN_0c19d2b4(a4, 0x7, (*(signed char *)(((int)stk + 13))), t15);
        t18 = *(signed char *)((a4 + 0x0));
        if (((unsigned char)t18 == 2) || (((unsigned char)t18 == 3) || (((unsigned char)t18 == 4) || ((unsigned char)t18 == 5)))) {
            *(unsigned char *)((a4 + 0x0)) = 0x1;
        }
    } else {
        switch ((((unsigned char)t12 - 1) << 1)) {
            case 0:
            {
                t21 = *(signed char *)((a4 + 0x0));
                if ((unsigned char)t21 != 5) {
                    if ((unsigned char)t21 != 1) {
                        if (((unsigned char)t21 != 2) && ((unsigned char)t21 != 4)) {
                            if ((unsigned char)t21 != 3) {
                                if ((unsigned char)t21 != 0) {
                                } else {
                                    FUN_0c19d410(a4, t11);
                                }
                            } else {
                                t30 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x2C)))))(a4, ((int)stk + 12), (*(int *)(((int)stk + 16))), a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                                if ((short)t30 != 0) {
                                    FUN_0c19d296(a4);
                                } else {
                                    FUN_0c19d444(a4);
                                }
                            }
                        } else {
                            t41 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x2C)))))(a4, ((int)stk + 12), (*(int *)(((int)stk + 16))), a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                            if ((short)t41 != 0) {
                                *(unsigned char *)((a4 + 0x0)) = 0x2;
                            } else {
                                *(unsigned char *)((a4 + 0x0)) = 0x4;
                            }
                        }
                    } else {
                        t50 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x18)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                        FUN_0c19d3a0(a4);
                        t55 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x2C)))))(a4, ((int)stk + 12), (*(int *)(((int)stk + 16))), a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                        if ((short)t55 != 0) {
                            *(unsigned char *)((a4 + 0x0)) = 0x2;
                        } else {
                            *(unsigned char *)((a4 + 0x0)) = 0x4;
                        }
                    }
                } else {
                    t64 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x20)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                    FUN_0c19d41e(a4);
                    t68 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x18)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                    FUN_0c19d3a0(a4);
                    t73 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x2C)))))(a4, ((int)stk + 12), (*(int *)(((int)stk + 16))), a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                    if ((short)t73 != 0) {
                        *(unsigned char *)((a4 + 0x0)) = 0x2;
                    } else {
                        *(unsigned char *)((a4 + 0x0)) = 0x4;
                    }
                }
            }
                break;
            case 2:
            {
                t80 = *(signed char *)((a4 + 0x0));
                if ((unsigned char)t80 != 2) {
                    if ((unsigned char)t80 != 4) {
                        if ((unsigned char)t80 != 5) {
                            if ((unsigned char)t80 != 3) {
                                if (((unsigned char)t80 != 0) && ((unsigned char)t80 != 1)) {
                                } else {
                                    FUN_0c19d410(a4, t11);
                                }
                            } else {
                                FUN_0c19d3a0(a4);
                                *(unsigned char *)((a4 + 0x0)) = 0x2;
                            }
                        } else {
                            t91 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x20)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                            t94 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x18)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                            FUN_0c19d41e(a4);
                            FUN_0c19d3a0(a4);
                            *(unsigned char *)((a4 + 0x0)) = 0x2;
                        }
                    } else {
                        t103 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x30)))))(a4, ((int)stk + 12), (*(int *)(((int)stk + 16))), a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                        if ((short)t103 != 0) {
                        } else {
                            FUN_0c19d444(a4);
                        }
                    }
                } else {
                    t113 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x30)))))(a4, ((int)stk + 12), (*(int *)(((int)stk + 16))), a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                    if ((short)t113 != 0) {
                    } else {
                        *(unsigned char *)((a4 + 0x0)) = 0x3;
                    }
                }
            }
                break;
            case 4:
            {
                t120 = *(signed char *)((a4 + 0x0));
                if (((unsigned char)t120 != 2) && ((unsigned char)t120 != 4)) {
                    if ((unsigned char)t120 != 5) {
                        if ((unsigned char)t120 != 3) {
                            if (((unsigned char)t120 != 0) && ((unsigned char)t120 != 1)) {
                            } else {
                                FUN_0c19d410(a4, t11);
                            }
                        } else {
                            FUN_0c19d3a0(a4);
                            *(unsigned char *)((a4 + 0x0)) = 0x2;
                        }
                    } else {
                        t131 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x20)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                        t134 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x18)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                        FUN_0c19d41e(a4);
                        FUN_0c19d3a0(a4);
                        *(unsigned char *)((a4 + 0x0)) = 0x2;
                    }
                } else {
                    t143 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x34)))))(a4, ((int)stk + 12), (*(int *)(((int)stk + 16))), a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                    if ((short)t143 != 0) {
                    } else {
                        FUN_0c19d3a0(a4);
                    }
                }
            }
                break;
            case 6:
            {
                t150 = *(signed char *)((a4 + 0x0));
                if (((unsigned char)t150 != 2) && ((unsigned char)t150 != 4)) {
                    if ((unsigned char)t150 != 5) {
                        if ((unsigned char)t150 != 3) {
                            if (((unsigned char)t150 != 0) && ((unsigned char)t150 != 1)) {
                            } else {
                                FUN_0c19d410(a4, t11);
                            }
                        } else {
                            FUN_0c19d3a0(a4);
                            *(unsigned char *)((a4 + 0x0)) = 0x2;
                        }
                    } else {
                        t161 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x20)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                        t164 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x18)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                        FUN_0c19d41e(a4);
                        FUN_0c19d3a0(a4);
                        *(unsigned char *)((a4 + 0x0)) = 0x2;
                    }
                } else {
                    t173 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x38)))))(a4, ((int)stk + 12), (*(int *)(((int)stk + 16))), a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                    if ((short)t173 != 0) {
                    } else {
                        FUN_0c19d3a0(a4);
                    }
                }
            }
                break;
            case 8:
            {
                t180 = *(signed char *)((a4 + 0x0));
                if ((unsigned char)t180 != 5) {
                    if (((unsigned char)t180 != 3) && ((unsigned char)t180 != 4)) {
                        if (((unsigned char)t180 != 2) && (((unsigned char)t180 != 6) && (((unsigned char)t180 != 0) && ((unsigned char)t180 != 1)))) {
                        } else {
                            FUN_0c19d410(a4, (*(signed char *)(((int)stk + 13))));
                        }
                    } else {
                        *(unsigned char *)((a4 + 0x0)) = 0x2;
                        FUN_0c19d410(a4, (*(signed char *)(((int)stk + 13))));
                    }
                } else {
                    FUN_0c19d410(a4, t11);
                    t192 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x20)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                    t195 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x24)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                    FUN_0c19d41e(a4);
                }
            }
                break;
            case 10:
            {
                t199 = *(signed char *)((a4 + 0x0));
                if ((unsigned char)t199 != 6) {
                    if ((unsigned char)t199 != 5) {
                        if (((unsigned char)t199 != 4) && ((unsigned char)t199 != 3)) {
                        } else {
                            *(unsigned char *)((a4 + 0x0)) = 0x2;
                        }
                    } else {
                        t205 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x20)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                        FUN_0c19d41e(a4);
                        t207 = FUN_0c19d3a0(a4);
                        if ((short)t207 == 0) {
                            *(unsigned char *)((a4 + 0x0)) = 0x2;
                        }
                    }
                } else {
                    FUN_0c19114c((a4 + 0x10));
                    t215 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x24)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                    FUN_0c19d41e(a4);
                }
            }
                break;
            case 12:
            {
                t222 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x2C))) + 0x24)))))(a4, a5, a6, a7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
                FUN_0c19d41e(a4);
            }
                break;
            case 14:
            {
            }
                break;
            case 16:
            {
                t224 = *(signed char *)((a4 + 0x0));
                if ((unsigned char)t224 != 5) {
                    if (((unsigned char)t224 != 0) && ((unsigned char)t224 != 1)) {
                    } else {
                        FUN_0c19d410(a4, t11);
                    }
                } else {
                    FUN_0c19d2b4(a4, 0xA, t11, (*(int *)(((int)stk + 16))));
                }
            }
                break;
            case 18:
            {
            }
                break;
            case 20:
            {
            }
                break;
            default:
            {
            }
                break;
        }
    }
}
