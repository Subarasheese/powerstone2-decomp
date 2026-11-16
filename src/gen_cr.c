/* Straight-line functions with calls and guards (batch gen_cr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
int buDeleteFile(int);
int thunk_FUN_0c2bde1c(int);
int FUN_0c03d090(int a4);
int FUN_0c03ac3a(void);
int FUN_0c0433f0(void);
int FUN_0c052370(int a4);
int FUN_0c0528c6(int a4);
int FUN_0c0845d2(int a4);
int FUN_0c0ae748(int a4);
void FUN_0c0bc154(void);

int FUN_0c03d090(int a4)
{
    return buDeleteFile(a4);
}

int FUN_0c03ac3a(void)
{
    return thunk_FUN_0c2bde1c(0xC03A7BC);
}

int FUN_0c0433f0(void)
{
    return ((*(signed char *)0xC542239) & 0xF);
}

int FUN_0c052370(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3));
    *(unsigned char *)((a4 + 0x3)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c0528c6(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    *(unsigned char *)((a4 + 0xA)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c0845d2(int a4)
{
    (((struct o3715_uchar *)(a4))->v) = 0x18;
    return 0x3715;
}

int FUN_0c0ae748(int a4)
{
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}

void FUN_0c0bc154(void)
{
    *(unsigned int *)0xC472664 = 0x0;
}
