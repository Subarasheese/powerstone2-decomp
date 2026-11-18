/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_af): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int buIsFormat(int);
int direntry(int, int);
int gdFsGetLE4(int);
int gdFsGetTokenSize(int, int, int);
int gdFsMemcpy(int, int, int);
int gdFsReadWG(int, int, int);
int gdFsStrncmpi(int, int, int);
int get_vmstime(int, int);
int kmiFLWCTRLRotateReadyQueue(int);
int kmyGetDisplayRegionSize(int, int, int, int);
int kmyRequestCallback(int);
int kmyRequestDMA(int);
int kmySetDMACallback(int, int);
int kmySetDMAValue(int, int);
int kmySetTADMA(int, int, int, int, int, int);
int kmyZeroMemory(int, int);
int kmyiCheckNativeHandle(int);
int nlObjPutLoadTexture(int, int);
int nlSetCommonTextureOffset(int);
int set_file_info(int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int stageTexLoad(void);
int kmiFLWCTRLLaunchPacket(int a4, int a5, int a6, int a7);
int nlsndStreamGetParam(int a4, int a5, int a6, int a7);
int kmyGetDisplayParametersInfo(int a4, int a5, int a6);
int kmyGetDMAHANDLE(int a4);
int kmySetVirticalFilterMode(int a4, int a5);
int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8);
int vmsfs_findfirst_ex(int a4, int a5, int a6);
int nlPushMatrix(int a4);
int nlSetIntrPriority(int a4, int a5);
void nlLoadMatrix33on44(int a4);
int mwlRnaStartCopy(int a4, int a5, int a6, int a7, int a8);



int kmySetVirticalFilterMode(int a4, int a5)
{
    int t0;
    int t2;
    int t5;
    int t3;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t2 = *(int *)((a4 + 0x88));
    t5 = 0x400;
    if ((unsigned int)a5 < (unsigned int)0x23) {
        switch ((a5 << 1)) {
            case 0:
            {
                t3 = 0x400;
            }
                break;
            case 2:
            {
                t3 = 0x401;
            }
                break;
            case 4:
            case 8:
            {
                t3 = 0x800;
            }
                break;
            case 6:
            {
                t3 = 0x472;
            }
                break;
            case 10:
            case 12:
            case 14:
            case 16:
            case 18:
            case 22:
            case 24:
            case 26:
            case 28:
            case 30:
            case 32:
            case 34:
            case 36:
            case 38:
            case 50:
            case 52:
            case 54:
            case 56:
            case 58:
            {
                t3 = 0x400;
            }
                break;
            case 20:
            {
                t3 = 0x8E3;
            }
                break;
            case 40:
            {
                t3 = 0x3DE;
            }
                break;
            case 42:
            {
                t3 = 0x3BF;
            }
                break;
            case 44:
            {
                t3 = 0x3A2;
            }
                break;
            case 46:
            {
                t3 = 0x387;
            }
                break;
            case 48:
            {
                t3 = 0x36D;
            }
                break;
            case 60:
            {
                t3 = 0x7BD;
            }
                break;
            case 62:
            {
                t3 = 0x780;
            }
                break;
            case 64:
            {
                t3 = 0x745;
            }
                break;
            case 66:
            {
                t3 = 0x70F;
            }
                break;
            default:
            {
                t3 = 0x6DB;
            }
                break;
        }
        t5 = t3;
    }
    *(unsigned int *)((t2 + 0x24)) = (((*(int *)((t2 + 0x24))) & 0xFFFF0000) | t5);
    return 0x0;
}






int mwlRnaStartCopy(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t3;

    if ((int)a8 <= 0) {
        return 0x0;
    }
    t0 = *(int *)((a4 + 0x38));
    t3 = ((int (*)(int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x4C)))))(t0, a5, a6, a7, a8);
    *(unsigned int *)((a4 + 0x5C)) = 0x1;
    return a8;
}
