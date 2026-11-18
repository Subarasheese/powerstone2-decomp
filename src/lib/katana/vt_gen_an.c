/* Library code: C that behaves like this game's own bytes. */
typedef struct { int w[4]; } Stk4;
/* Straight-line functions with calls and guards (batch gen_an): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXRNA_GetTime(int, int, int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetTotalNumSmpl(int);
int adxb_DecodeInfoAuSub(int, int, int, int, int, int, int);
int check_cache(int);
int nlChangeDisplayMode(int, int);
int nlExp(float);
int nlInitPrint(void);
float nlLog(float);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPrintSetZ(float);
int nlPrnIndentOn(void);
int nlPushMatrix(int);
int nlSetPalExtMode(int);
int nlTranslate(float, float, float);
int nlsndG2WriteN(int, int, int);
int nlsndSeqRequest(int);
int rankDrawGlyph(int, int, int, int, Stk3, float, float);
int sprInitRectF(int, int, int, int, int, int);
int vmsfs_c_progress(int, int, int, int);
void ballBoyPropPut(int a4);
int ADX_DecodeInfoAu(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
void sysSetVideoMode(int a4);
int nlSearchPalette(int a4, int a5);
int nlLineCalcFogA(int a4);
int ndbPack(int a4, int a5, int a6);
int syIntAdrChk_putchar(int a4, int a5);
int scoreBoardSync(void);
int kmiConvertUVnum(int a4);
int ADXT_GetTime(int a4, int a5, int a6);
int hudFlagInit(void);
int rankDrawString(int a4, int a5, int a6, int a7, Stk4 p);
void nlPow(float f4, float f5);
int nlsndFxControl(int a4, int a5, int a6);
float cpuStickNudge(int a4, float f4);
int nlsndStreamSetHdInfo(int a4, int a5);
int kmyUseAnotherList(int a4, int a5);
int nlSpriteGetNextSpriteIndex(void);
int vmsfs_mount2(int a4);
int kmtex_GetTextureLevel(int a4, int a5);
int nlArcTan(float f4);
int nlsndStreamOpen(int a4);
int kmyiSetScreenSize(int a4);
void perfPrint(void);
void dbgMenuDrawTitles(void);
int padDirOn(int a4, int a5);
int nlLocate(int a4, int a5);


int ADX_DecodeInfoAu(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    int t2;
    int t3;
    int t10;
    int t11;
    int t12;
    int stk[12];

    *(unsigned int *)(((int)stk + 36)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a6;
    *(unsigned int *)(((int)stk + 40)) = a7;
    if ((int)a5 < (int)0x8) {
        *(unsigned short *)(((*(int *)(((int)stk + 32))) + 0x0)) = 0x0;
        return 0xFFFFFFFF;
    }
    t2 = adxb_DecodeInfoAuSub((*(int *)(((int)stk + 36))), a5, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10), (((int)stk + 8) + 0x10), (((int)stk + 12) + 0x10), a14);
    if (t2 != 0) {
        t3 = *(int *)(((int)stk + 36));
        *(unsigned short *)(((*(int *)(((int)stk + 32))) + 0x0)) = (t2 - t3);
        if ((int)(short)(t2 - t3) <= 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned int *)((a11 + 0x0)) = (*(int *)(((int)stk + 16)));
        *(unsigned char *)((a10 + 0x0)) = (*(int *)(((int)stk + 20)));
        *(unsigned char *)((a8 + 0x0)) = (*(int *)(((int)stk + 24)));
        *(unsigned int *)((a12 + 0x0)) = (*(int *)(((int)stk + 28)));
        *(unsigned char *)(((*(int *)(((int)stk + 40))) + 0x0)) = 0xFFFFFFFF;
        t10 = *(signed char *)((a10 + 0x0));
        t11 = *(signed char *)((a8 + 0x0));
        t12 = ((short)t10 * (short)t11);
        if ((int)((short)t10 * (short)t11) < 0) {
            t12 = (((short)t10 * (short)t11) + 0x7);
        }
        *(unsigned char *)((a9 + 0x0)) = (((t12 >> 1) >> 1) >> 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        return 0x0;
    }
    return 0xFFFFFFFF;
}


int kmyUseAnotherList(int a4, int a5)
{
    int t0;
    int t43;
    int t44;
    int t26;
    int t27;
    int t9;
    int t10;
    int t3;
    int t4;
    int t14;
    int t15;
    int t31;
    int t32;
    int t37;
    int t38;
    int t20;
    int t21;

    t0 = *(int *)((a4 + 0x0));
    t43 = 0xEEEE;
    t44 = t0;
    if (a5 != 0) {
        if (a5 != 1) {
            t26 = 0xEEEE;
            t27 = t0;
            if (a5 != 2) {
                if (a5 != 3) {
                    t9 = 0xEEEE;
                    t10 = t0;
                    if (a5 != 4) {
                    } else {
                        t3 = 0xEEEE;
                        t4 = t0;
                        if ((0x300 & t0) != 0) {
                            t3 = 0x0;
                            t4 = ((t0 & 0xFFFCFFFF) | 0x40000);
                        }
                        t9 = t3;
                        t10 = t4;
                    }
                    t20 = t9;
                    t21 = t10;
                } else {
                    t14 = 0xEEEE;
                    t15 = t0;
                    if ((0x30 & t0) != 0) {
                        t14 = 0x0;
                        t15 = ((t0 & 0xFFFF4FFF) | 0x4000);
                    }
                    t20 = t14;
                    t21 = t15;
                }
                t26 = t20;
                t27 = t21;
            }
            t37 = t26;
            t38 = t27;
        } else {
            t31 = 0xEEEE;
            t32 = t0;
            if ((0x3000 & t0) != 0) {
                t31 = 0x0;
                t32 = ((t0 & 0xFFFFFF4F) | 0x40);
            }
            t37 = t31;
            t38 = t32;
        }
        t43 = t37;
        t44 = t38;
    }
    *(unsigned int *)((a4 + 0x0)) = t44;
    return t43;
}


int kmtex_GetTextureLevel(int a4, int a5)
{
    int t0;

    t0 = a4;
    if ((int)a4 >= (int)a5) {
        t0 = a5;
    }
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 4) {
                if (t0 != 8) {
                    if (t0 != 16) {
                        if (t0 != 32) {
                            if (t0 != 64) {
                                if (t0 != 0x80) {
                                    if (t0 != 0x100) {
                                        if (t0 != 0x200) {
                                            if (t0 != 0x400) {
                                                return 0x3;
                                            }
                                            return 0xA;
                                        }
                                        return 0x9;
                                    }
                                    return 0x8;
                                }
                                return 0x7;
                            }
                            return 0x6;
                        }
                        return 0x5;
                    }
                    return 0x4;
                }
                return 0x3;
            }
            return 0x2;
        }
        return 0x1;
    }
    return 0x0;
}
