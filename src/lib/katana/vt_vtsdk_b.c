/* Library code: C that behaves like this game's own bytes. */
/* Small SDK functions (batch b): nl fraction, sound wait/pan, backup-unit file wrappers, ADX/mw error
   checks, GD filesystem accessors, FAT helpers, mpdrv, kmy/kmi helpers. */

extern char strAdxfPartitionIdRangeError[];
extern char strAdxfFileIdRangeError[];
extern char strMwRnaNullHandleError[];
extern char gMwRnaErrorCallback[];
extern char gMwRnaErrorCallbackArgument[];
extern int gMapleDriverVersionWord0;
extern int gMapleDriverVersionWord1;
extern int *gAdxfPartitionInfoTable[];
extern char gVmsVolumeStates[];
extern int (**gVmsIoInterface)(int a, int b);
extern int gRenderPacketVBlankWaitPending;
extern char gRenderPacketQueues[];
extern char *gMapleDriver;
extern char gMwRnaErrorMessageBuffer[];

extern int nlsndG2Write(int v, int addr);
extern int nlsndG2Read(int addr);
extern int vmsfs_c_getstate(int a);
extern int vmsfs_findnext(int a, int b);
extern int vmsfs_fgetsize(int a, int b);
extern int ADXERR_CallErrFunc(char *fmt);
extern int mwRnaErrCallFunc(int a, ...);
extern int SearchUsed(int a, int *out);
extern int FBfree(int a, int b);
extern void kmWaitVBlank(void);
extern int kmiWriteRegister(int reg, int val);
extern void ADXB_ExecOneWav4(char *o);
extern void ADXB_ExecOneWav8(char *o);
extern void ADXB_ExecOneWav16(char *o);
extern void *memset(void *dst, int val, unsigned int n);


int nlsnd_PL_WaitAica2andGo(void)
{
    int i;

    nlsndG2Write(1, 0xa08000b0);
    for (i = 0; i < 0x400000; ) {
        if (nlsndG2Read(0xa08000b4) == 0) {
            nlsndG2Write(0, 0xa08000b0);
            return 0;
        }
        i++;
    }
    return -256;
}


void nlsndStreamSetHdPan(char *streamHeader, short channelIndex, char pan)
{
    streamHeader[50 + channelIndex * 4] = pan;
}


int adxf_ChkPrmGfr(int partitionId, int fileId)
{
    char *partitionInfo;

    if (partitionId < 0 || partitionId >= 256) {
        ADXERR_CallErrFunc(strAdxfPartitionIdRangeError);
        return -3;
    }
    partitionInfo = (char *)gAdxfPartitionInfoTable[partitionId];
    if (fileId < 0 || fileId >= *(int *)(partitionInfo + 12)) {
        ADXERR_CallErrFunc(strAdxfFileIdRangeError);
        return -3;
    }
    return 0;
}


int kmyFreeArea(int a)
{
    int buf[2];
    int r;

    buf[1] = a;
    r = SearchUsed(a, buf);
    if (r == 0)
        return 7;
    return FBfree(*(short *)buf, r);
}


void set_fat(int a, int b)
{
    char *e;

    e = gVmsVolumeStates + a * 328;
    if (b > **(int **)(e + 28))
        return;
    gVmsIoInterface[4](*(int *)(e + 36), b << 1);
}


char *direntry(int a, int b)
{
    return *(char **)(gVmsVolumeStates + a * 328 + 40) + b * 32;
}



int kmiQueryFinishAllPacket(void)
{
    unsigned int queueOffset;

    if (gRenderPacketVBlankWaitPending) {
        kmWaitVBlank();
        gRenderPacketVBlankWaitPending = 0;
    }
    for (queueOffset = 0; queueOffset < 3616; queueOffset += 452) {
        if (*(int *)(gRenderPacketQueues + queueOffset))
            return 0xeeee;
    }
    return 0;
}


void mwRnaErrEntryFunc(int callback, int callbackArgument)
{
    if (callback == 0) {
        *(int *)gMwRnaErrorCallback = 0;
        *(int *)gMwRnaErrorCallbackArgument = 0;
    } else {
        *(int *)gMwRnaErrorCallback = callback;
        *(int *)gMwRnaErrorCallbackArgument = callbackArgument;
    }
    memset(gMwRnaErrorMessageBuffer, 0, 256);
}


void kmyResetTA(void)
{
    kmiWriteRegister(8, 1);
    kmiWriteRegister(8, 0);
}


void ADXB_ExecOneWav(char *o)
{
    if (*(short *)(o + 170) == 2)
        ADXB_ExecOneWav4(o);
    else if (*(short *)(o + 170) == 1)
        ADXB_ExecOneWav8(o);
    else if (*(short *)(o + 170) == 0)
        ADXB_ExecOneWav16(o);
}


void ADXPD_Destroy(int *p)
{
    if (p) {
        *p = 0;
        memset(p, 0, 52);
    }
}
