/* Straight-line functions with calls and guards (batch gen_by): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
int FUN_0c02d104(int);
int FUN_0c03f40c(int, int, int, int);
int FUN_0c056c28(int, int, int);
int FUN_0c0871fa(int);
int FUN_0c0874f6(int);
int FUN_0c0fb8b0(int, int, int);
int FUN_0c11ef66(void);
extern int FUN_0c11efc0();
int FUN_0c11f114(int, int);
int FUN_0c11ef48(int a4, int a5, int a6, int a7);
int FUN_0c087512(int a4);
int FUN_0c03df6a(int a4, int a5, int a6, int a7);
void FUN_0c0369f0(void);
int FUN_0c0fb5ca(int a4, int a5, int a6);
int FUN_0c017e58(void);
int FUN_0c017e68(void);
int FUN_0c056c64(int a4, int a5, int a6);

int FUN_0c11ef48(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC4750AD;
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c11f114(a4, a5);
        }
        return ((int (*)(int, int, int, int))(FUN_0c11efc0))(a4, a5, a6, a7);
    }
    FUN_0c11ef66();
    return ((int (*)(void))(FUN_0c11efc0))();
}

int FUN_0c087512(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0874f6(a4);
    }
    return FUN_0c0871fa(a4);
}

int FUN_0c03df6a(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned char *)0xC3DC264 = 0x1;
    t0 = FUN_0c03f40c(0x5, a5, a6, a7);
    *(unsigned char *)0xC3DC264 = 0x0;
    return t0;
}

void FUN_0c0369f0(void)
{
    if ((*(int *)0xC4B41FC) != 0) {
        *(unsigned int *)0xC4B41FC = 0x0;
        FUN_0c02d104(0xC4B41FC);
    return;
    }
}

int FUN_0c0fb5ca(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)0xC472AD8;
    (((struct o23_uchar *)0xC5429A9)->v) = t0;
    (((struct o0_uchar *)0xC5429A9)->v) = t0;
    return FUN_0c0fb8b0((*(signed char *)0xC5429A9), a5, a6);
}

int FUN_0c017e58(void)
{
    register int t0;

    t0 = *(int *)0xCA0001C;
    return ((int (*)(void))(t0))();
}

int FUN_0c017e68(void)
{
    register int t0;

    t0 = *(int *)0xCA00020;
    return ((int (*)(void))(t0))();
}

int FUN_0c056c64(int a4, int a5, int a6)
{
    *(unsigned int *)0xC24166C = (a4 + 0x28);
    return FUN_0c056c28(0xC241660, 0xC241674, a6);
}
