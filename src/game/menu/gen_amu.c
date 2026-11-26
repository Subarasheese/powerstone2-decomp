/* Straight-line functions with calls and guards (batch gen_amu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o3749_uchar { char p[0x3749]; unsigned char v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382C_ushort { char p[0x382C]; unsigned short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
int ADXSTM_Tell(int);
int FUN_0c05cf04(void);
int FUN_0c05d608(int, int);
int FUN_0c05d648(int);
int FUN_0c05d6a6(int, int);
int FUN_0c079a78(int);
int FUN_0c079b4e(int);
int FUN_0c079b94(int);
int FUN_0c07d2c4(int, int);
int FUN_0c085d0c(int);
int FUN_0c187cac(int, int, int, int, int, int, int, int, int);
int FUN_0c2c30aa(int, int, int, int, int);
int FUN_0c2c6728(void);
int FUN_0c2c6740(int, int);
int FUN_0c2d28e8(int, int, int);
int FUN_0c2d30a8(void);
int FUN_0c2d33c8(void);
int FUN_0c2d3534(void);
int FUN_0c2d3606(void);
int FUN_0c2d3614(void);
int FUN_0c2d392c(int, int);
int FUN_0c2d3af2(int);
int FUN_0c2d3b8c(void);
int FUN_0c2d3c22(int);
int FUN_0c2d3d08(void);
int FUN_0c2d3d64(void);
int FUN_0c2d3e96(void);
int FUN_0c2d589e(int);
int FUN_0c2d6446(int);
int FUN_0c2d69fc(void);
int FUN_0c2d7800(int);
int FUN_0c2e5800(void);
int FUN_0c2e5ea0(int);
int FUN_0c2e6310(void);
int FUN_0c2e638e(void);
int FUN_0c2e7200(int);
int FUN_0c2e7248(int, int);
int FUN_0c2e732c(void);
int FUN_0c2e7350(int);
int FUN_0c2e737c(int);
int FUN_0c2e76c8(int, int, int, int);
int FUN_0c2e7e3e(void);
int FUN_0c2e7f3c(void);
int FUN_0c2e8238(void);
int FUN_0c2e8268(void);
int FUN_0c2e83ae(void);
int FUN_0c2e89f4(int);
int FUN_0c2e8a12(int);
int FUN_0c2e8afc(int);
int FUN_0c2ebc72(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2ee56c(void);
int FUN_0c2ee63c(void);
int FUN_0c2eec44(void);
int FUN_0c2eedc0(int);
int FUN_0c2f294e(int);
int FUN_0c2f94d4(int);
int FUN_0c2f9614(void);
int FUN_0c2f99fc(void);
int FUN_0c2fc6c8(void);
int FUN_0c2fc6e2(void);
int SJ_SplitChunk(int, int, int, int);
extern void _builtin_prefetch(void *);
int adxstm_sj_internal_error(void);
int gdFsGetStat(int);
int gdFsReqRd32(int, int, int);
int kmQueryFinishLastTextureDMA(void);
int kmiFLWCTRLStartPass(int, int, int, int);
int kmyEnableASyncCopy(int);
int kmyGetPassInfo(int, int, int);
int kmySeparatePassInfo(int, int, int, int, int, int);
int FUN_0c2fc074(int a4, int a5);
int FUN_0c2e5952(int a4);
int kmBeginPass(int a4);
int adxstmf_stat_exec(int a4, int a5, int a6, int a7);
int FUN_0c2e60ba(void);
int FUN_0c05d800(int a4, int a5);
int SJUNI_GetChunk(int a4, int a5, int a6, int a7);
int FUN_0c079c44(int a4);

int FUN_0c2fc074(int a4, int a5)
{
    int stk[13];
    register int t400;
    register int t9;
    register int t81;
    register int t217;
    register int t255;
    register int t336;
    register int t248;
    register int t30;
    register int t82;
    register int t53;
    register int t91;
    register int t102;
    register int t152;
    register int t166;
    register int t179;
    register int t180;
    register int t198;
    register int t218;
    register int t311;
    register int t326;
    register int t330;
    register int t333;
    register int t335;
    register int t31;
    register int t51;
    register int t84;
    register int t147;
    int t46;
    int t148;
    register int t176;

    if ((int)(unsigned char)(*(signed char *)0xC8D65A0) > (int)0x3) {
    } else {
        t9 = *(signed char *)0xC8D6593;
        if ((unsigned char)t9 != 0) {
            if ((unsigned char)t9 != 1) {
                if ((unsigned char)t9 != 2) {
                    if ((unsigned char)t9 != 3) {
                        if ((unsigned char)t9 == 4) {
                            t30 = *(signed char *)0xC8D6594;
                            if ((unsigned char)t30 != 0) {
                                t400 = (unsigned char)t30;
                                if ((unsigned char)t30 != 1) {
                                } else {
                                    t31 = FUN_0c2d3af2(0xC8D6598);
                                    if ((signed char)t31 != 0) {
                                        (((struct o0_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D677B) | 0x8);
                                        (((struct o0_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D677B) | 0x40);
                                        FUN_0c2d7800(0x0);
                                        *(unsigned int *)0xC8D6618 = (((((struct o0_int *)0xC8D67BC)->v)) + 0x19);
                                        FUN_0c2eedc0(0x1);
                                        if ((unsigned char)(*(signed char *)0xC8D6450) == 64) {
                                            (((struct o0_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D677B) | 0x20);
                                            FUN_0c2d3d64();
                                        }
                                        *(unsigned int *)0xC8D6494 = (((unsigned short)(unsigned char)(*(signed char *)0xC8D6452) * (unsigned short)0x64) + ((((struct o0_int *)0xC8D67BC)->v)));
                                        FUN_0c2f9614();
                                        if ((((unsigned char)(*(signed char *)0xC8D645B) & 3) == 0) && (t46 = *(signed char *)0xC8D6464, ((unsigned char)t46 & 12) != 0)) {
                                            FUN_0c2eedc0(0x0);
                                        }
                                        t400 = FUN_0c2f99fc();
                                        (((struct o0_uchar *)0xC8D6593)->v) = 0x3;
                                    } else {
                                        t51 = FUN_0c2ec430((*(int *)0xC8D659C));
                                        if ((signed char)t51 == 0) {
                                            t53 = *(signed char *)0xC8D677F;
                                            t400 = (unsigned char)t53;
                                            if (((unsigned char)t53 & 8) == 0) {
                                            } else {
                                                return (FUN_0c2fc6c8());
                                            }
                                        } else {
                                            return (FUN_0c2fc6c8());
                                        }
                                    }
                                }
                            } else {
                                (((struct o4_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D677F) & 0xF7);
                                (((struct o0_uchar *)0xC8D644E)->v) = ((*(signed char *)0xC8D644E) | 0x80);
                                (((struct o6_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D6781) | 0x80);
                                (((struct o3_uchar *)0xC8D677B)->v) = (((*(signed char *)0xC8D677E) & 0xF8) | 0x9);
                                FUN_0c2d392c(0xC8D677E, 0xC8D6778);
                                t400 = FUN_0c2ec410(0xC8D659C, 0x7D0);
                                (((struct o1_uchar *)0xC8D6593)->v) = 0x1;
                            }
                        } else {
                            if ((unsigned char)t9 == 5) {
                                t81 = *(signed char *)0xC8D6595;
                                t82 = *(int *)0xC8D659C;
                                if ((unsigned char)t81 != 0) {
                                    if ((unsigned char)t81 != 1) {
                                        if ((unsigned char)t81 != 2) {
                                            if ((unsigned char)t81 != 3) {
                                                if ((unsigned char)t81 != 4) {
                                                    if ((unsigned char)t81 == 5) {
                                                        t84 = FUN_0c2d3c22(0xC8D6598);
                                                        if ((unsigned char)t84 != 0) {
                                                            FUN_0c2ee56c();
                                                            (((struct o0_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D677B) | 0x80);
                                                            (((struct o0_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D677B) | 0x8);
                                                            FUN_0c2d7800(0x0);
                                                            (((struct oD_uchar *)0xC8D6593)->v) = 0x0;
                                                            t400 = FUN_0c2ec410(0xC8D659C, 0x64);
                                                            (((struct o2_uchar *)0xC8D6593)->v) = 0x6;
                                                        } else {
                                                            t91 = FUN_0c2ec430((*(int *)0xC8D659C));
                                                            t400 = (signed char)t91;
                                                            if ((signed char)t91 == 0) {
                                                            } else {
                                                                FUN_0c2ee56c();
                                                                FUN_0c2fc6e2();
                                                                FUN_0c2e7248(0x4, 0x0);
                                                                (((struct o3_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D677E) & 0xBF);
                                                                return (FUN_0c2e8268());
                                                            }
                                                        }
                                                    } else {
                                                        t400 = (unsigned char)t81;
                                                        if ((unsigned char)t81 == 6) {
                                                            t102 = FUN_0c2ec430(t82);
                                                            t400 = (signed char)t102;
                                                            if ((signed char)t102 == 0) {
                                                            } else {
                                                                *(unsigned int *)0xC8D6494 = (((unsigned short)(unsigned char)(*(signed char *)0xC8D6452) * (unsigned short)0x64) + ((((struct o0_int *)0xC8D67BC)->v)));
                                                                if ((unsigned char)(*(signed char *)0xC8D6450) == 32) {
                                                                    (((struct o0_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D677B) | 0x20);
                                                                    FUN_0c2d3d64();
                                                                }
                                                                FUN_0c2e7e3e();
                                                                t400 = FUN_0c2eedc0(0x0);
                                                                (((struct o0_uchar *)0xC8D6593)->v) = 0x3;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    FUN_0c2eedc0(0x1);
                                                    (((struct o0_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D677B) & 0x17);
                                                    (((struct o9_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D6784) & 0xDE);
                                                    FUN_0c2d3b8c();
                                                    FUN_0c2ec410(0xC8D6618, 0x190);
                                                    t400 = FUN_0c2ec410(0xC8D659C, 0x190);
                                                    (((struct o2_uchar *)0xC8D6593)->v) = 0x5;
                                                }
                                            } else {
                                                t147 = FUN_0c2ec430((*(int *)0xC8D659C));
                                                if (((signed char)t147 == 0) && (t148 = *(signed char *)0xC8D6790, ((unsigned char)t148 & 192) == 0)) {
                                                    return (unsigned char)t148;
                                                } else {
                                                    t152 = 0x61;
                                                    if (((unsigned char)(*(signed char *)0xC8D6790) & 128) != 0) {
                                                        t152 = 0x62;
                                                    }
                                                    FUN_0c2e7248(t152, 0x0);
                                                    FUN_0c2fc6e2();
                                                    FUN_0c2e7248(0x0, 0x0);
                                                    return (FUN_0c2e8268());
                                                }
                                            }
                                        } else {
                                            t166 = FUN_0c2ec430(t82);
                                            if ((signed char)t166 == 0) {
                                            } else {
                                                (((struct o2_uchar *)0xC8D6593)->v) = 0x4;
                                            }
                                            return (signed char)t166;
                                        }
                                    } else {
                                        t176 = FUN_0c2ec430(t82);
                                        if ((signed char)t176 != 0) {
                                            return (FUN_0c2fc6c8());
                                        } else {
                                            t179 = *(signed char *)0xC8D6795;
                                            t400 = (unsigned char)t179;
                                            if (((unsigned char)t179 & 32) != 0) {
                                            } else {
                                                t180 = FUN_0c2eec44();
                                                t400 = (signed char)t180;
                                                if ((signed char)t180 == 0) {
                                                } else {
                                                    t400 = FUN_0c2ec410(0xC8D659C, 0xA);
                                                    (((struct o2_uchar *)0xC8D6593)->v) = 0x2;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t198 = *(signed char *)0xC8D6793;
                                    if (((unsigned char)t198 & 128) != 0) {
                                        FUN_0c2d7800(0x0);
                                        (((struct o15_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D6790) & 0x3F);
                                        (((struct o18_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D6793) | 0x4);
                                        t400 = FUN_0c2ec410(0xC8D659C, 0x190);
                                        (((struct o2_uchar *)0xC8D6593)->v) = 0x3;
                                    } else {
                                        (((struct o2_uchar *)0xC8D6593)->v) = 0x4;
                                        return (unsigned char)t198;
                                    }
                                }
                            } else {
                                t400 = (unsigned char)t9;
                                if ((unsigned char)t9 == 6) {
                                    t217 = *(signed char *)0xC8D6596;
                                    t255 = 0;
                                    if ((unsigned char)t217 != 0) {
                                        if ((unsigned char)t217 != 1) {
                                            t248 = (unsigned char)t217;
                                            if ((unsigned char)t217 == 2) {
                                                t218 = FUN_0c2d3c22(((int)stk + 0));
                                                t248 = (unsigned char)t218;
                                                if ((unsigned char)t218 == 0) {
                                                    FUN_0c2ee56c();
                                                    t248 = FUN_0c2d69fc();
                                                    (((struct o3_uchar *)0xC8D6593)->v) = 0x1;
                                                }
                                            }
                                        } else {
                                            t255 = 1;
                                        }
                                    } else {
                                        FUN_0c2e83ae();
                                        if (((unsigned char)(*(signed char *)0xC8D6784) & 32) != 0) {
                                            FUN_0c2e732c();
                                        }
                                        if (((unsigned char)(*(signed char *)0xC8D677B) & 64) != 0) {
                                            FUN_0c2d3af2(0xC8D6598);
                                            *(unsigned int *)(((int)stk + 8)) = 0xC8D677B;
                                            *(unsigned char *)(((int)stk + 4)) = (*(signed char *)0xC8D677B);
                                            FUN_0c2e7f3c();
                                            *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x0)) = (*(signed char *)(((int)stk + 4)));
                                            (((struct o17_uchar *)0xC8D67BC)->v) = 0x2;
                                            FUN_0c2ebc72();
                                            t255 = 1;
                                        } else {
                                            *(unsigned int *)0xC8D6618 = (((((struct o0_int *)0xC8D67BC)->v)) + 0x64);
                                            FUN_0c2eedc0(0x1);
                                            (((struct oD_uchar *)0xC8D6593)->v) = 0x0;
                                            if (((unsigned char)(*(signed char *)0xC8D677B) & 128) != 0) {
                                                FUN_0c2d3c22(0xC8D6598);
                                                t248 = FUN_0c2d3d08();
                                                (((struct o3_uchar *)0xC8D6593)->v) = 0x2;
                                            } else {
                                                FUN_0c2d6446(0x0);
                                                t255 = 1;
                                            }
                                        }
                                    }
                                    if (t255) {
                                        if (((unsigned char)(*(signed char *)0xC8D677B) & 32) != 0) {
                                            FUN_0c2e732c();
                                            FUN_0c2e732c();
                                            if ((int)(unsigned short)(*(short *)0xC8D6598) > (int)0xFF) {
                                                *(unsigned short *)0xC8D6598 = 0xFF;
                                            }
                                            FUN_0c2e76c8((unsigned short)(*(short *)0xC8D6598), 0xA, 0x3, (((int)stk + 0) + 0xC));
                                            FUN_0c2e7200((((int)stk + 0) + 0xC));
                                        }
                                        FUN_0c2fc6e2();
                                        FUN_0c2e7248(0x0, 0x0);
                                        (((struct o3_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D677E) & 0xBF);
                                        return (FUN_0c2e8268());
                                    } else {
                                        return t248;
                                    }
                                }
                            }
                        }
                    } else {
                        t400 = (unsigned char)t9;
                        if ((*(signed char *)0xC8D6452) == 0) {
                        } else {
                            t400 = 0xC8D67BC;
                            if ((unsigned int)(*(int *)0xC8D6494) >= (unsigned int)((((struct o0_int *)0xC8D67BC)->v))) {
                            } else {
                                (((struct o9_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D6784) | 0x20);
                                t400 = FUN_0c2e8238();
                                (((struct o0_uchar *)0xC8D6593)->v) = 0x6;
                            }
                        }
                    }
                } else {
                    t311 = FUN_0c2d3e96();
                    t400 = (unsigned char)t311;
                    if ((unsigned char)t311 != 0) {
                    } else {
                        *(unsigned int *)0xC8D6618 = (((((struct o0_int *)0xC8D67BC)->v)) + 0x64);
                        FUN_0c2eedc0(0x1);
                        FUN_0c2d6446(0x0);
                        (((struct oD_uchar *)0xC8D6593)->v) = 0x0;
                        FUN_0c2ee56c();
                        FUN_0c2ee63c();
                        return (FUN_0c2fc6e2());
                    }
                }
            } else {
                t326 = *(signed char *)0xC8D677E;
                t400 = (unsigned char)t326;
                if (((unsigned char)t326 & 6) == 0) {
                } else {
                    t330 = *(signed char *)0xC8D6457;
                    t400 = (unsigned char)t330;
                    if (((unsigned char)t330 & 1) == 0) {
                    } else {
                        t333 = *(signed char *)0xC8D6795;
                        t400 = (unsigned char)t333;
                        if (((unsigned char)t333 & 32) != 0) {
                        } else {
                            t335 = *(signed char *)0xC8D6793;
                            t400 = (unsigned char)t335;
                            if (((unsigned char)t335 & 128) != 0) {
                            } else {
                                t336 = FUN_0c2d3e96();
                                *(unsigned short *)(((int)stk + 0)) = (unsigned char)t336;
                                t400 = (unsigned char)t336;
                                if ((unsigned short)(unsigned char)t336 == 0) {
                                } else {
                                    if ((unsigned short)(unsigned char)t336 == 1) {
                                        *(unsigned int *)0xC8D6618 = (((((struct o0_int *)0xC8D67BC)->v)) + 0xA);
                                        FUN_0c2eedc0(0x1);
                                        return (FUN_0c2ee56c());
                                    } else {
                                        (((struct o2_uchar *)0xC8D644E)->v) = 0x8;
                                        FUN_0c2d6446(0x1);
                                        (((struct o9_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D6784) | 0x1);
                                        (((struct o0_uchar *)0xC8D677B)->v) = ((*(signed char *)0xC8D677B) | 0x8);
                                        t400 = FUN_0c2d7800(0x0);
                                        (((struct o0_uchar *)0xC8D6593)->v) = 0x2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            return (FUN_0c2fc6e2());
        }
    }
    return t400;
}

int FUN_0c2e5952(int a4)
{
    int stk[17];
    register int t54;
    register int t171;
    register int t55;
    register int t244;
    register int t5;
    register int t123;
    register int t130;
    register int t153;
    register int t167;
    register int t178;
    register int t251;
    register int t275;
    register int t283;
    register int t242;
    register int t11;
    register int t15;
    register int t19;
    register int t23;
    register int t25;
    register int t46;
    register int t176;
    register int t187;
    register int t198;
    register int t208;
    register int t214;
    register int t220;
    register int t288;
    register int t203;
    int t120;
    register int t204;
    register int t205;
    register int t301;
    int t206;
    int t245;
    int t249;

    if ((unsigned char)a4 == 9) {
        t5 = *(signed char *)(((*(int *)0xC304178) + 0x0));
        if ((unsigned char)t5 == 89) {
            return (FUN_0c2e5800());
        } else {
            if ((unsigned char)t5 != 88) {
                *(unsigned char *)0xC8D6498 = 0x2;
                return (unsigned char)t5;
            } else {
                FUN_0c2e732c();
                FUN_0c2e638e();
                t11 = FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))));
                FUN_0c2e638e();
                t15 = FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))));
                FUN_0c2e638e();
                t19 = FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))));
                FUN_0c2e638e();
                t23 = FUN_0c2e5ea0((*(signed char *)(((*(int *)0xC304178) + 0x0))));
                FUN_0c2e638e();
                t25 = FUN_0c2d589e((((((((unsigned char)t11 << 8) << 2) << 2) + ((unsigned char)t15 << 8)) + (((unsigned char)t19 << 2) << 2)) + (unsigned char)t23));
                FUN_0c2e76c8(t25, 0x10, 0x8, (((int)stk + 8) + 0x18));
                return (FUN_0c2e7200((((int)stk + 8) + 0x18)));
            }
        }
    } else {
        t244 = 0;
        if (((unsigned char)(*(signed char *)0xC8D677E) & 8) == 0) {
            t244 = 1;
        } else {
            if ((unsigned char)a4 == 0) {
                FUN_0c2e732c();
                t46 = FUN_0c2d30a8();
                FUN_0c2e76c8((unsigned short)t46, 0xA, 0x3, (((int)stk + 8) + 0x18));
                FUN_0c2e7200((((int)stk + 8) + 0x18));
                t242 = (FUN_0c2e732c());
            } else {
                if (((unsigned char)(*(signed char *)0xC8D677E) & 8) == 0) {
                    t244 = 1;
                } else if ((unsigned char)a4 != 1) {
                    t244 = 1;
                } else {
                    FUN_0c2e732c();
                    FUN_0c2d28e8(((int)stk + 8), (((int)stk + 8) + 0x8), (((int)stk + 8) + 0x4));
                    FUN_0c2e7200(0xC3011D0);
                    t54 = *(signed char *)(((int)stk + 12));
                    t55 = *(int *)(((int)stk + 8));
                    if ((t55 & 0xFF7FFFFF) != 1) {
                        if ((t55 & 0xFF7FFFFF) != 2) {
                            if ((t55 & 0xFF7FFFFF) != 4) {
                                if ((t55 & 0xFF7FFFFF) != 8) {
                                    if ((t55 & 0xFF7FFFFF) != 16) {
                                        if ((t55 & 0xFF7FFFFF) != 32) {
                                            if ((t55 & 0xFF7FFFFF) != 64) {
                                                if ((t55 & 0xFF7FFFFF) == 0x80) {
                                                    FUN_0c2e7200(0xC3012F0);
                                                    t171 = 0x1;
                                                } else {
                                                    if ((t55 & 0xFF7FFFFF) == 0x100) {
                                                        FUN_0c2e7200(0xC3012F8);
                                                        t171 = 0x1;
                                                    } else {
                                                        if ((t55 & 0xFF7FFFFF) == 0x200) {
                                                            FUN_0c2e7200(0xC301300);
                                                            t171 = 0x1;
                                                        } else {
                                                            FUN_0c2e7200(0xC301308);
                                                            t171 = 0x0;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if ((unsigned char)t54 == 6) {
                                                    FUN_0c2e7200(0xC30128C);
                                                } else {
                                                    if ((unsigned char)t54 == 7) {
                                                        FUN_0c2e7200(0xC301298);
                                                    } else {
                                                        if ((unsigned char)t54 == 8) {
                                                            FUN_0c2e7200(0xC3012A4);
                                                        } else {
                                                            if ((unsigned char)t54 == 11) {
                                                                FUN_0c2e7200(0xC3012B0);
                                                            } else {
                                                                if ((unsigned char)t54 == 12) {
                                                                    FUN_0c2e7200(0xC3012C0);
                                                                } else {
                                                                    if ((unsigned char)t54 == 13) {
                                                                        FUN_0c2e7200(0xC3012D0);
                                                                    } else {
                                                                        if ((unsigned char)t54 == 14) {
                                                                            FUN_0c2e7200(0xC3012E0);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                t171 = 0x0;
                                            }
                                        } else {
                                            if ((unsigned char)t54 == 6) {
                                                FUN_0c2e7200(0xC301250);
                                            } else {
                                                t123 = 0xC301278;
                                                if (((unsigned char)t54 == 8) && (t120 = *(int *)(((int)stk + 8)), (t120 & 0x800000) != 0)) {
                                                    t123 = 0xC30125C;
                                                }
                                                FUN_0c2e7200(t123);
                                            }
                                            t171 = 0x0;
                                        }
                                    } else {
                                        t130 = 0xC301244;
                                        if ((unsigned char)t54 == 4) {
                                            t130 = 0xC301238;
                                        }
                                        FUN_0c2e7200(t130);
                                        t171 = 0x0;
                                    }
                                } else {
                                    if ((unsigned char)t54 == 4) {
                                        FUN_0c2e7200(0xC301224);
                                    } else {
                                        if ((unsigned char)t54 != 3) {
                                        } else {
                                            FUN_0c2e7200(0xC301230);
                                        }
                                    }
                                    t171 = 0x0;
                                }
                            } else {
                                t153 = 0xC301214;
                                if ((unsigned char)(*(signed char *)(((int)stk + 16))) == 2) {
                                    t153 = 0xC301204;
                                }
                                FUN_0c2e7200(t153);
                                t171 = 0x0;
                            }
                        } else {
                            FUN_0c2e7200(0xC3011FC);
                            t171 = 0x0;
                        }
                    } else {
                        t167 = 0xC3011F0;
                        if ((unsigned char)t54 == 2) {
                            t167 = 0xC3011E4;
                        }
                        FUN_0c2e7200(t167);
                        t171 = 0x0;
                    }
                    if ((signed char)t171 == 1) {
                        t176 = FUN_0c2f94d4((*(signed char *)(((int)stk + 12))));
                        t178 = (FUN_0c2e737c(t176));
                        *(int *)((int)stk + 4) = t178;
                        *(int *)((int)stk + 0) = 0xC30131C;
                        FUN_0c187cac((((int)stk + 0) + 0x14), 0x0, 0x0, 0x0, 0xC30131C, t178, *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
                        FUN_0c2e7200((((int)stk + 8) + 0xC));
                    }
                    FUN_0c2e732c();
                    FUN_0c2e7200(0xC301320);
                    t187 = FUN_0c2d30a8();
                    FUN_0c2e76c8((unsigned short)t187, 0xA, 0x3, (((int)stk + 8) + 0x18));
                    FUN_0c2e7200((((int)stk + 8) + 0x18));
                    FUN_0c2e732c();
                    if ((*(int *)(((int)stk + 8))) != 2) {
                        if ((*(int *)(((int)stk + 8))) != 4) {
                            if ((*(int *)(((int)stk + 8))) != 1) {
                                FUN_0c2e7200(0xC301334);
                                t198 = FUN_0c2d33c8();
                                FUN_0c2e76c8((unsigned short)t198, 0x10, 0x4, (((int)stk + 8) + 0x18));
                                FUN_0c2e7200((((int)stk + 8) + 0x18));
                                FUN_0c2e732c();
                                if (((*(int *)(((int)stk + 8))) != 32) && ((t203 = *(int *)(((int)stk + 8)), t203 != 64) && ((t204 = *(int *)(((int)stk + 8)), t204 != 0x80) && ((t205 = *(int *)(((int)stk + 8)), t205 != 0x100) && (t206 = *(int *)(((int)stk + 8)), t206 != 0x200))))) {
                                } else {
                                    FUN_0c2e7200(0xC301358);
                                    t208 = FUN_0c2d3534();
                                    FUN_0c2e76c8((unsigned short)t208, 0xA, 0x4, (((int)stk + 8) + 0x18));
                                    FUN_0c2e7200((((int)stk + 8) + 0x18));
                                    FUN_0c2e7200(0xC30136C);
                                    FUN_0c2e732c();
                                    FUN_0c2e7200(0xC301370);
                                    t214 = FUN_0c2d3606();
                                    FUN_0c2e76c8((unsigned short)t214, 0xA, 0x3, (((int)stk + 8) + 0x18));
                                    FUN_0c2e7200((((int)stk + 8) + 0x18));
                                    FUN_0c2e7200(0xC301384);
                                    FUN_0c2e732c();
                                    FUN_0c2e7200(0xC30138C);
                                    t220 = FUN_0c2d3614();
                                    FUN_0c2e76c8((unsigned short)t220, 0xA, 0x3, (((int)stk + 8) + 0x18));
                                    FUN_0c2e7200((((int)stk + 8) + 0x18));
                                    FUN_0c2e7200(0xC301384);
                                    FUN_0c2e732c();
                                }
                            }
                        }
                    }
                    t242 = FUN_0c2e732c();
                }
            }
        }
        if (t244) {
            if (((unsigned char)a4 == 2) && (t245 = *(signed char *)0xC8D65E8, t245 == 0)) {
                FUN_0c2e732c();
                FUN_0c2e7200(0xC3013A0);
                t251 = 0xC3013C0;
                if (((unsigned char)(*(signed char *)0xC8D646D) != 1) && (t249 = *(signed char *)0xC8D677E, ((unsigned char)t249 & 8) == 0)) {
                    t251 = 0xC3013D0;
                }
                FUN_0c2e7200(t251);
                FUN_0c2e732c();
                FUN_0c2e7200(0xC3013E0);
                FUN_0c2e7350((*(signed char *)0xC8D65EB));
                FUN_0c2e732c();
                FUN_0c2e7200(0xC301400);
                FUN_0c2e7350((*(signed char *)0xC8D65E9));
                FUN_0c2e732c();
                FUN_0c2e7200(0xC301420);
                FUN_0c2e7350((*(signed char *)0xC8D65EC));
                FUN_0c2e732c();
                FUN_0c2e7200(0xC301440);
                FUN_0c2e7350((*(signed char *)0xC8D65EA));
                FUN_0c2e732c();
                FUN_0c2e7200(0xC301460);
                if (((unsigned char)(*(signed char *)0xC8D67D1) & 128) != 0) {
                    FUN_0c2e7200(0xC301480);
                } else {
                    t275 = 0xC30148C;
                    if (((unsigned char)(*(signed char *)0xC8D67D2) & 32) != 0) {
                        t275 = 0xC301488;
                    }
                    FUN_0c2e7200(t275);
                }
                FUN_0c2e732c();
                FUN_0c2e7200(0xC301494);
                t283 = 0xC30148C;
                if (((unsigned char)(*(signed char *)0xC8D67D2) & 128) != 0) {
                    t283 = 0xC3014B4;
                }
                FUN_0c2e7200(t283);
                FUN_0c2e732c();
                FUN_0c2e7200(0xC3014BC);
                t288 = FUN_0c2d33c8();
                FUN_0c2e76c8(((unsigned int)(unsigned short)t288 >> 8), 0xA, 0x3, (((int)stk + 8) + 0x18));
                FUN_0c2e7200((((int)stk + 8) + 0x18));
                return (FUN_0c2e732c());
            } else {
                *(unsigned char *)0xC8D6498 = 0x2;
                return (unsigned char)a4;
            }
        } else {
            return t242;
        }
    }
    return t301;
}

int kmBeginPass(int a4)
{
    int stk[10];
    register int t29;
    register int t1;
    register int t11;
    register int t32;
    int t25;
    register int t33;
    register int t30;
    register int t31;
    register int t26;
    register int t12;
    register int t4;
    register int t28;

    t1 = *(int *)(((*(int *)((a4 + 0x8))) + 0x10));
    *(unsigned int *)((a4 + 0x0)) = (0xC8BE858 + (((t1 << 2) + t1) << 2));
    if (((*(int *)(((*(int *)((a4 + 0x8))) + 0x18))) & 4) != 0) {
        for (;;) {
            t4 = kmQueryFinishLastTextureDMA();
            if (t4 == 0) {
                break;
            }
        }
        kmyEnableASyncCopy(0x0);
    }
    t11 = 0x0;
    for (;;) {
        t12 = *(int *)0xC8BE7E8;
        *(unsigned int *)((t11 + (0xC8BE858 + (((t1 << 2) + t1) << 2)))) = (*(int *)((((((((((t12 << 2) + t12) << 2) << 2) << 1) + 0xC8BE918) + (((t1 << 2) + t1) << 2)) + t11) + 0x0)));
        t11 = (t11 + 0x4);
        if ((unsigned int)t11 >= (unsigned int)0x14) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 12)) = (kmiFLWCTRLStartPass(a4, 0x14, 0x0, 0x0));
    kmyGetPassInfo((*(int *)0xC8BEF80), (*(int *)(((*(int *)((a4 + 0x8))) + 0x10))), ((int)stk + 8));
    *(int *)((int)stk + 4) = ((((int)stk + 8) + 0xC) + 0x10);
    *(int *)((int)stk + 0) = ((((int)stk + 8) + 0xC) + 0xC);
    *(unsigned int *)(((int)stk + 16)) = (((int)stk + 8) + 0xC);
    t31 = *(int *)((a4 + 0x0));
    t32 = *(int *)(((int)stk + 16));
    t25 = (kmySeparatePassInfo((*(int *)(((int)stk + 8))), (((int)stk + 8) + 0xC), ((((int)stk + 8) + 0xC) + 0x4), ((((int)stk + 8) + 0xC) + 0x8), ((((int)stk + 8) + 0xC) + 0xC), ((((int)stk + 8) + 0xC) + 0x10)));
    t29 = t28;
    t30 = 0x0;
    t33 = (((int)stk + 8) + 0xC);
    for (;;) {
        if ((unsigned int)t32 >= (unsigned int)((((int)stk + 8) + 0xC) + 0x14)) {
            break;
        }
        t26 = (*(int *)((t32 + 0x0)));
        if (t26 != 0) {
            t33 = t31;
            t29 = 0x3FFFFFF;
            t25 = (*(int *)((t33 + 0x0)));
            t26 = 0xFF00003C;
            t29 = (t29 & t25);
            t25 = ((unsigned int)t25 >> 16);
            t25 = ((unsigned int)t25 >> 8);
            *(unsigned int *)((t26 + 0x0)) = t25;
            t29 = (t29 | 0xE0000000);
            *(unsigned int *)(((0xFF000038) + 0x0)) = t25;
            t25 = t30;
            t25 = (t25 | 0x808C0002);
            *(unsigned int *)((t29 + 0x0)) = t25;
            t29 = (t29 + 0x4);
            t25 = 0x80000000;
            *(unsigned int *)((t29 + 0x0)) = t25;
            t29 = (t29 + 0x4);
            *(unsigned int *)((t29 + 0x0)) = 0x20800000;
            t29 = (t29 + 0x4);
            _builtin_prefetch((void *)t29);
            t25 = (*(int *)((t33 + 0x0)));
            t25 = (t25 + 0x20);
            *(unsigned int *)((t33 + 0x0)) = t25;
        }
        t32 = (t32 + 0x4);
        t31 = (t31 + 0x4);
        t30 = (t30 + 0x1000000);
    }
    return (*(int *)(((int)stk + 12)));
}

int adxstmf_stat_exec(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t1;
    register int t3;
    register int t23;
    register int t58;
    register int t59;
    register int t66;
    register int t68;
    register int t4;
    register int t25;
    register int t47;
    register int t97;
    register int t52;
    register int t63;
    register int t64;
    register int t65;
    register int t72;
    register int t13;
    register int t22;
    register int t9;
    register int t12;
    register int t18;
    register int t57;
    int t15;
    int t49;

    t1 = *(int *)((a4 + 0x4));
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t3 = gdFsGetStat((*(int *)((a4 + 0x8))));
        if (t3 == 1) {
            t4 = *(int *)((a4 + 0x20));
            SJ_SplitChunk((a4 + 0x24), (((t4 << 8) << 2) << 1), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x4));
            t9 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x1, (((int)stk + 4) + 0xC), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t12 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (((int)stk + 4) + 0x4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t13 = ADXSTM_Tell(a4);
            if ((t13 == (*(int *)((a4 + 0x30)))) && (t15 = *(int *)((a4 + 0x38)), t15 != 0)) {
                t18 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((a4 + 0x38)))))((*(int *)((a4 + 0x3C))), a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            }
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (((t4 << 8) << 2) << 1));
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            t22 = ADXSTM_Tell(a4);
            t23 = *(int *)((a4 + 0x14));
            t25 = (t23 + 0x7FF);
            if ((int)(t23 + 0x7FF) < 0) {
                t25 = ((t23 + 0x7FF) + 0x7FF);
            }
            if ((int)t22 >= (int)((int)t25 >> 11)) {
                *(unsigned char *)((a4 + 0x1)) = 0x3;
            }
        } else {
            if (t3 == 5) {
                *(int *)((int)stk + 0) = 0xC2FFD94;
                FUN_0c2c30aa(t3, 0x0, 0x0, 0x0, 0xC2FFD94);
                *(unsigned char *)((a4 + 0x1)) = 0x4;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
            }
        }
    }
    t47 = *(signed char *)((a4 + 0x2));
    t97 = t47;
    if (t47 == 0) {
        if ((t1 != 0) && (t49 = *(int *)((t1 + 0x0)), t49 != 0)) {
            t52 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t97 = t52;
            if ((int)t52 < (int)(*(int *)((a4 + 0x1C)))) {
                t57 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x0, (*(int *)((a4 + 0x18))), (a4 + 0x24), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                t58 = *(int *)((a4 + 0x28));
                t59 = t58;
                if ((int)t58 < 0) {
                    t59 = (t58 + 0x7FF);
                }
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x30)));
                t63 = ADXSTM_Tell(a4);
                t64 = *(int *)(((int)stk + 4));
                t65 = *(int *)((a4 + 0x2C));
                t66 = (t64 - t63);
                if ((int)((int)t59 >> 11) < (int)(t64 - t63)) {
                    t66 = ((int)t59 >> 11);
                }
                t68 = t65;
                if ((int)t66 < (int)t65) {
                    t68 = t66;
                }
                if (t68 != 0) {
                    t72 = gdFsReqRd32((*(int *)((a4 + 0x8))), t68, (*(int *)((a4 + 0x24))));
                    *(unsigned int *)((a4 + 0x20)) = t72;
                    if ((int)t72 <= 0) {
                        return (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
                    } else {
                        *(unsigned char *)((a4 + 0x2)) = 0x1;
                        return 0x1;
                    }
                } else {
                    return (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
                }
            }
        } else {
            return (adxstm_sj_internal_error());
        }
    }
    return t97;
}

int FUN_0c2e60ba(void)
{
    int stk[4];
    register int t25;
    register int t27;
    register int t62;
    register int t4;
    register int t9;
    register int t19;
    register int t20;
    register int t26;
    register int t45;
    register int t71;

    FUN_0c2e638e();
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)(((*(int *)0xC304178) + 0x0)));
    FUN_0c2e638e();
    t4 = FUN_0c2e6310();
    if ((unsigned char)(*(signed char *)(((int)stk + 0))) != 67) {
        (((struct o20_uchar *)0xC8D6478)->v) = 0x2;
        return 0x2;
    } else {
        t9 = *(int *)0xC304178;
        if ((unsigned char)(*(signed char *)((t9 + 0x0))) == 63) {
            FUN_0c2e638e();
            FUN_0c2e732c();
            FUN_0c2e76c8((unsigned char)(*(signed char *)0xC8D6478), 0xA, 0x1, (((int)stk + 0) + 0x4));
            FUN_0c2e7200((((int)stk + 0) + 0x4));
            t62 = (FUN_0c2e732c());
        } else {
            if ((unsigned char)(*(signed char *)((t9 + 0x0))) == 61) {
                t19 = *(int *)0xC304178;
                *(unsigned int *)0xC304178 = (t19 + 0x1);
                t20 = *(signed char *)(((t19 + 0x1) + 0x0));
                if ((unsigned char)t20 == 63) {
                    FUN_0c2e638e();
                    FUN_0c2e83ae();
                    FUN_0c2e732c();
                    t25 = (FUN_0c2e7200(0xC301508));
                    t26 = 0x1;
                    t27 = 0x0;
                    for (;;) {
                        if ((int)(unsigned short)t27 >= (int)0xFF) {
                            break;
                        }
                        t25 = (FUN_0c2e8a12(t27));
                        t25 = (signed char)t25;
                        if (t25 != 0) {
                            if ((signed char)t26 != 0) {
                                t26 = 0x0;
                            } else {
                                t25 = (FUN_0c2e7200(0xC30150C));
                            }
                            t25 = (FUN_0c2e76c8((unsigned short)t27, 0xA, 0x1, (((int)stk + 0) + 0x4)));
                            t25 = (FUN_0c2e7200((((int)stk + 0) + 0x4)));
                        }
                        t27 = (t27 + 0x1);
                    }
                    FUN_0c2e7200(0xC301510);
                    t62 = (FUN_0c2e732c());
                } else {
                    (((struct o20_uchar *)0xC8D6478)->v) = 0x2;
                    t62 = (unsigned char)t20;
                }
            } else {
                t45 = FUN_0c2e8a12(t4);
                if ((signed char)t45 != 0) {
                    FUN_0c2f294e(t4);
                    FUN_0c2e89f4(t4);
                    t62 = FUN_0c2e8afc(0xC8D6440);
                    (((struct o0_uchar *)0xC8D6478)->v) = t4;
                } else {
                    (((struct o20_uchar *)0xC8D6478)->v) = 0x2;
                    t62 = (signed char)t45;
                }
            }
        }
        return t62;
    }
    return t71;
}

int FUN_0c05d800(int a4, int a5)
{
    register int t1;
    register int t0;

    if ((*(signed char *)0xC542254) != 0) {
        return 0x5C;
    }
    if ((*(signed char *)0xC542255) == 0) {
        t0 = *(int *)0xC542260;
        if ((t0 & 16) != 0) {
            if ((*(signed char *)0xC541F65) != 0) {
                return FUN_0c05d608(a4, 0x0);
            }
            t1 = *(int *)((0xC5423D0 + (((unsigned char)a4 << 2) << 2)));
            if (t1 != 0) {
                if (t1 != 1) {
                    if (t1 != 2) {
                        return t1;
                    }
                    return FUN_0c05d608(a4, 0x3);
                }
                t1 = FUN_0c05cf04();
                if ((unsigned int)t1 > (unsigned int)0x1) {
                    if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) >= (unsigned int)0x55) {
                    } else {
                        return FUN_0c05d608(a4, 0x2);
                    }
                } else {
                    if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) < (unsigned int)0x7F) {
                        return FUN_0c05d608(a4, 0x2);
                    }
                    return FUN_0c05d6a6(a4, a5);
                }
            } else {
                t1 = FUN_0c05cf04();
                if ((unsigned int)t1 > (unsigned int)0x1) {
                    if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) >= (unsigned int)0x55) {
                    } else {
                        return FUN_0c05d608(a4, 0x1);
                    }
                } else {
                    if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) < (unsigned int)0x7F) {
                        return FUN_0c05d608(a4, 0x1);
                    }
                    return FUN_0c05d6a6(a4, a5);
                }
            }
            if ((unsigned int)(unsigned char)(*(signed char *)0xC542260) < (unsigned int)0xAA) {
                return FUN_0c05d648(a4);
            }
            return FUN_0c05d6a6(a4, a5);
        }
        return t0;
    }
    return 0x5D;
}

int SJUNI_GetChunk(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t3;
    register int t39;

    *(unsigned int *)(((int)stk + 0)) = a6;
    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        *(unsigned int *)(((int)stk + 4)) = (FUN_0c2c6728());
        t3 = *(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0));
        if (t3 != 0) {
            { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 0) + 0x10)) = *(struct mv2 *)((t3 + 0x8)); }
            if ((int)(*(int *)(((int)stk + 20))) <= (int)(*(int *)(((int)stk + 0)))) {
                { struct mv2 { int w[2]; }; *(struct mv2 *)(a7) = *(struct mv2 *)((((int)stk + 0) + 0x10)); }
                *(unsigned int *)((((a5 << 2) + (a4 + 0x18)) + 0x0)) = (*(int *)((t3 + 0x0)));
                *(unsigned int *)((t3 + 0x0)) = (*(int *)((a4 + 0x14)));
                *(unsigned int *)((a4 + 0x14)) = t3;
            } else {
                if ((*(signed char *)((a4 + 0x5))) == 1) {
                    SJ_SplitChunk((((int)stk + 0) + 0x10), (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x8));
                    { struct mv2 { int w[2]; }; *(struct mv2 *)(a7) = *(struct mv2 *)((((int)stk + 0) + 0x10)); }
                    { struct mv2 { int w[2]; }; *(struct mv2 *)((t3 + 0x8)) = *(struct mv2 *)((((int)stk + 0) + 0x8)); }
                } else {
                    *(unsigned int *)((a7 + 0x0)) = 0x0;
                    *(unsigned int *)((a7 + 0x4)) = 0x0;
                }
            }
        } else {
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            *(unsigned int *)((a7 + 0x4)) = 0x0;
        }
        return (FUN_0c2c6740(a4, (*(int *)(((int)stk + 4)))));
    } else {
        if ((*(int *)((a4 + 0x28))) != 0) {
            t39 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        }
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a7 + 0x4)) = 0x0;
    }
    return t39;
}

int FUN_0c079c44(int a4)
{
    int t0;

    (((struct o382C_ushort *)(a4))->v) = 0x0;
    (((struct o3749_uchar *)(a4))->v) = 0x2;
    if (((int)(*(signed char *)((a4 + 0x16))) > 0) && (t0 = *(signed char *)((a4 + 0x130)), t0 != 0)) {
        return 0x130;
    }
    if ((*(signed char *)((a4 + 0x16))) != 0) {
        t0 = FUN_0c07d2c4(a4, ((0x3744 + a4) + 0x2));
        if (t0 == 0) {
            (((struct o382A_ushort *)(a4))->v) = 0x0;
            return FUN_0c085d0c(a4);
        }
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c079b94(a4);
        }
        return FUN_0c079b4e(a4);
    }
    return FUN_0c079a78(a4);
}
