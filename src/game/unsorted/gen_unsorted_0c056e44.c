/* game/unsorted: functions 0C056E44-0C05735C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o20_float { char p[0x20]; float v; };
int FUN_0c0522be(int);
int nlVtxBufScanInit(void);
int FUN_0c177af0(int);
int FUN_0c178580(void);
int FUN_0c1785a0(void);
int nlSysMetricsCpuPowerStart(void);
int FUN_0c1787c0(void);
int FUN_0c1787e0(void);
int nlObjPutLoadTexture(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c056e44(int a4, int a5, int a6);
void FUN_0c056e78(void);
void FUN_0c056e7c(void);
int FUN_0c056e80(void);
int FUN_0c056eae(int a4);
int FUN_0c056eee(void);
int FUN_0c056f20(void);
int FUN_0c056f40(void);
int FUN_0c056f70(void);
int FUN_0c056f76(void);


void FUN_0c056e78(void)
{
    
}

void FUN_0c056e7c(void)
{
    
}

int FUN_0c056e80(void)
{
    nlObjPutLoadTexture(0xC1BF888, 0xC1BF980);
    (((struct o20_float *)0xC1BF940)->v) = -1.0f;
    (((struct o0_float *)0xC1BF940)->v) = -1.0f;
    (((struct o20_float *)0xC1BF900)->v) = -1.0f;
    (((struct o0_float *)0xC1BF900)->v) = -1.0f;
    *(unsigned int *)0xC40FA30 = 0x0;
    return 0x78;
}

int FUN_0c056eae(int a4)
{
    register int t0;

    t0 = *(int *)0xC40FA30;
    if ((int)t0 < (int)0x20) {
        *(unsigned int *)(((0xC40F8B0 + (((t0 << 1) + t0) << 2)) + 0x0)) = (FUN_0c1787c0());
        t0 = *(int *)0xC40FA30;
        *(unsigned int *)(((0xC40F8B8 + (((t0 << 1) + t0) << 2)) + 0x0)) = a4;
        t0 = a4;
    }
    return t0;
}

int FUN_0c056eee(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC40FA30;
    t1 = FUN_0c1787c0();
    *(unsigned int *)(((0xC40F8B4 + (((t0 << 1) + t0) << 2)) + 0x0)) = t1;
    t0 = t1;
    if ((int)(*(int *)0xC40FA30) < (int)0x20) {
        t1 = *(int *)0xC40FA30;
        *(unsigned int *)0xC40FA30 = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c056f20(void)
{
    *(unsigned int *)0xC40FA38 = (FUN_0c1785a0());
    FUN_0c178580();
    nlSysMetricsCpuPowerStart();
    return nlVtxBufScanInit();
}

int FUN_0c056f40(void)
{
    register int t1;

    *(unsigned int *)0xC40FA34 = (FUN_0c1787c0());
    t1 = FUN_0c1787e0();
    if ((*(int *)0xC241CB0) != 0) {
        return FUN_0c177af0(0xC40FA44);
    }
    *(unsigned int *)0xC241CB0 = ((*(int *)0xC241CB0) + 0x1);
    return t1;
}

int FUN_0c056f70(void)
{
    return (*(int *)0xC40FA38);
}

int FUN_0c056f76(void)
{
    return (*(int *)0xC40FA34);
}


