/* Library code: C that behaves like this game's own bytes. */




void ADXSJD_SetMaxDecSmpl(char *a4, int a5)
{
    *(unsigned int *)(a4 + 56) = a5;
}



void ADXSTM_EntryEosFunc(char *a4, int a5, int a6)
{
    *(unsigned int *)(a4 + 56) = a5;
    *(unsigned int *)(a4 + 60) = a6;
}



void ADXAMP_SetSfreq(char *a4, int a5)
{
    *(unsigned int *)(a4 + 32) = a5;
}



void ADXSJD_SetTrapCnt(char *a4, int a5)
{
    *(unsigned int *)(a4 + 64) = a5;
}



void ADXSJD_SetTrapDtLen(char *a4, int a5)
{
    *(unsigned int *)(a4 + 68) = a5;
}



void SJMEM_EntryErrFunc(char *a4, int a5, int a6)
{
    *(unsigned int *)(a4 + 28) = a5;
    *(unsigned int *)(a4 + 32) = a6;
}
