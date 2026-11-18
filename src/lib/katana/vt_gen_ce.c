/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_ce): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int check_cache(int);
int check_caps(int);
int gdDecSubcode(int, int, int, int);
int gdFsGetDrvStatG(int, int, int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmSetStrideWidth(int);
int kmiGetITPCurrent(int);
int kmiStartupDMA(void);
int kmiWriteRegister(int, int);
int kmtex_TextureSize(int);
int kmyContinueTA(int);
int kmySetupTA(int, int, int, int);
int kmyiSetScreenSize(int);
int kmytex_FBAllocEntry(void);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int kmytex_FBFreeEntry(int);
int memset(int, int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
float nlInnerProduct(int, int);
float nlPow(float, float);
int nlRand(void);
float nlScalor(int);
int nlkmCreateTextureSurface_stride(int, int, int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndSeqRequest(int);
int set_fat(int, int, int);
int set_vmstime(int, int);
int vecLineCrossXZ(int, ...);
extern int vecMake();
int vmsfs_mediainfo_retry(int, int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int write_dir_all(int);
int write_fat(int);
int write_sys(int);
int cpuDblAimArc(int a4, int a5, int a6, int a7);
int vmsfs_format(int a4, int a5, int a6, int a7, int a8);
int kmtex_CheckTextureFormat(int a4, int a5, int a6, int a7);
int kmiCallbackEndOf(int a4, int a5, int a6);
int kmyInitializeJAMMA15KHz(int a4);
int gdFsGetStatG(int a4, int a5, int a6, int a7);
int kmiLaunchQ(int a4);
int kmytex_ABSalloc(int a4, int a5, int a6, int a7);
int kmSetBackGround(int a4, int a5, int a6, int a7, int a8, float f4);
int kmyInitializeNTSC(int a4);
int nlsndStreamInit(int a4, int a5, int a6);
int nlRenderTextureSet_Sub(int a4, int a5, int a6, int a7, int a8);



int kmiLaunchQ(int a4)
{
    int t0;
    int t9;
    int t16;
    int t40;
    int t90;
    int t114;
    int t115;
    int t100;
    int t75;
    int t65;
    int t55;
    int t50;
    int t45;
    int t95;

    t0 = *(int *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 4) {
            if (t0 == 1) {
                kmySetupTA((*(int *)((a4 + 0x30))), 0xA05F7C10, 0xA05F7C14, 0xA05F7C18);
                *(volatile int *)0xFFA0002C;
                *(unsigned int *)0xFFA0002C = 0x0;
                *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
                *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
                *(unsigned int *)0xFFA0002C = 0x12C1;
                *(unsigned int *)0xFFA00040 = 0x8201;
                *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
                t9 = *(int *)((a4 + 0xC));
                *(unsigned int *)0xA05F6804 = t9;
                *(unsigned int *)0xA05F6808 = 0x1;
                t75 = t9;
            } else {
                if (t0 == 2) {
                    kmyContinueTA((*(int *)((a4 + 0x30))));
                    *(volatile int *)0xFFA0002C;
                    *(unsigned int *)0xFFA0002C = 0x0;
                    *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
                    *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
                    *(unsigned int *)0xFFA0002C = 0x12C1;
                    *(unsigned int *)0xFFA00040 = 0x8201;
                    *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
                    t16 = *(int *)((a4 + 0xC));
                    *(unsigned int *)0xA05F6804 = t16;
                    *(unsigned int *)0xA05F6808 = 0x1;
                    t65 = t16;
                } else {
                    if (t0 == 3) {
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        kmiWriteRegister(0x14C, (*(int *)((a4 + 0x34))));
                        kmiWriteRegister(0x148, (*(int *)((a4 + 0x30))));
                        *(volatile int *)0xFFA0002C;
                        *(unsigned int *)0xFFA0002C = 0x0;
                        *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
                        *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
                        *(unsigned int *)0xFFA0002C = 0x12C1;
                        *(unsigned int *)0xFFA00040 = 0x8201;
                        *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
                        *(unsigned int *)0xA05F6804 = (*(int *)((a4 + 0xC)));
                        *(unsigned int *)0xA05F6808 = 0x1;
                        t55 = 0xA05F6808;
                    } else {
                        if (t0 == 5) {
                            *(unsigned int *)0xA05F7C80 = 0x6702007F;
                            *(unsigned int *)0xA05F7C00 = (*(int *)((a4 + 0x14)));
                            *(unsigned int *)0xA05F7C04 = (*(int *)((a4 + 0x10)));
                            *(unsigned int *)0xA05F7C08 = (*(int *)((a4 + 0xC)));
                            *(unsigned int *)0xA05F7C0C = (*(int *)((a4 + 0x30)));
                            *(unsigned int *)0xA05F7C10 = 0x0;
                            *(unsigned int *)0xA05F7C14 = 0x1;
                            *(unsigned int *)0xA05F7C18 = 0x1;
                            t50 = 0xA05F7C04;
                        } else {
                            if (t0 == 7) {
                                *(unsigned int *)0xA05F7C80 = 0x6702007F;
                                *(unsigned int *)0xA05F7C00 = (*(int *)((a4 + 0x14)));
                                *(unsigned int *)0xA05F7C04 = (*(int *)((a4 + 0x10)));
                                *(unsigned int *)0xA05F7C08 = (*(int *)((a4 + 0xC)));
                                *(unsigned int *)0xA05F7C0C = (*(int *)((a4 + 0x30)));
                                *(unsigned int *)0xA05F7C10 = 0x0;
                                *(unsigned int *)0xA05F7C14 = 0x1;
                                *(unsigned int *)0xA05F7C18 = 0x1;
                                t45 = 0xA05F7C04;
                            } else {
                                t40 = t0;
                                if (t0 == 6) {
                                    *(unsigned int *)0xA05F7C80 = 0x6702007F;
                                    *(unsigned int *)0xA05F7C00 = (*(int *)((a4 + 0x14)));
                                    *(unsigned int *)0xA05F7C04 = (*(int *)((a4 + 0x10)));
                                    *(unsigned int *)0xA05F7C08 = (*(int *)((a4 + 0xC)));
                                    *(unsigned int *)0xA05F7C0C = (*(int *)((a4 + 0x30)));
                                    *(unsigned int *)0xA05F7C10 = 0x0;
                                    *(unsigned int *)0xA05F7C14 = 0x1;
                                    *(unsigned int *)0xA05F7C18 = 0x1;
                                    t40 = 0xA05F7C04;
                                }
                                t45 = t40;
                            }
                            t50 = t45;
                        }
                        t55 = t50;
                    }
                    t65 = t55;
                }
                t75 = t65;
            }
            t100 = t75;
        } else {
            if (((*(int *)((a4 + 0x4))) & 8) != 0) {
                *(volatile int *)0xFFA0002C;
                *(unsigned int *)0xFFA0002C = 0x0;
                *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
                *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
                *(unsigned int *)0xFFA0002C = 0x12C1;
                *(unsigned int *)0xFFA00040 = 0x8201;
                *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
                t90 = *(int *)((a4 + 0xC));
                *(unsigned int *)0xA05F6804 = t90;
                *(unsigned int *)0xA05F6808 = 0x1;
                t95 = t90;
            } else {
                *(unsigned int *)0xA05F7C80 = 0x6702007F;
                *(unsigned int *)0xA05F7C00 = (*(int *)((a4 + 0x14)));
                *(unsigned int *)0xA05F7C04 = (*(int *)((a4 + 0x10)));
                *(unsigned int *)0xA05F7C08 = (*(int *)((a4 + 0xC)));
                *(unsigned int *)0xA05F7C0C = (*(int *)((a4 + 0x3C)));
                *(unsigned int *)0xA05F7C10 = 0x0;
                *(unsigned int *)0xA05F7C14 = 0x1;
                *(unsigned int *)0xA05F7C18 = 0x1;
                t95 = 0xA05F7C04;
            }
            t100 = t95;
        }
        t115 = t100;
    } else {
        *(volatile int *)0xFFA0002C;
        *(unsigned int *)0xFFA0002C = 0x0;
        *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
        *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
        *(unsigned int *)0xFFA0002C = 0x12C1;
        *(unsigned int *)0xFFA00040 = 0x8201;
        *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
        t114 = *(int *)((a4 + 0xC));
        *(unsigned int *)0xA05F6804 = t114;
        *(unsigned int *)0xA05F6808 = 0x1;
        t115 = t114;
    }
    *(unsigned int *)((a4 + 0x24)) = (*(int *)0xFFD8000C);
    *(unsigned int *)((a4 + 0x28)) = 0x3;
    return t115;
}
