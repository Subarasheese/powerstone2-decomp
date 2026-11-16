/* Straight-line functions with calls and guards (batch gen_bn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c158f5a(int, int, int, int);
int FUN_0c187798(int);
int FUN_0c187b48(int, int, int);
int FUN_0c136886(int a4, int a5, int a6, int a7);
int FUN_0c15877c(int a4, int a5);
int FUN_0c15b4c0(int a4, int a5, int a6, int a7);
int FUN_0c03fbcc(int a4);
int FUN_0c03fcfc(int a4);
int FUN_0c137a9a(int a4, int a5);
int FUN_0c137c7c(int a4, int a5);
int FUN_0c1396c4(int a4, int a5);
int FUN_0c146fa2(int a4, int a5);
int FUN_0c1582e8(int a4, int a5);
int FUN_0c15ab94(int a4);
int FUN_0c163f66(int a4, int a5);
int FUN_0c171698(int a4, int a5, int a6, int a7);

int FUN_0c136886(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) == 26) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0xFA) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            t0 = t1;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        return t0;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}

int FUN_0c15877c(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t5;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1585F6;
        *(volatile int *)((t0 + 0xC4));
        *(volatile int *)(((int)stk + 0));
        t5 = (FUN_0c187798(t0));
    }
    return t5;
}

int FUN_0c15b4c0(int a4, int a5, int a6, int a7)
{
    register int t4;

    if ((unsigned short)((((struct o24_short *)((*(int *)((a4 + 0x10)))))->v)) != ((((struct o41C_int *)(a4))->v))) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t4 = *(signed char *)((a4 + 0x17));
    if (t4 != 0) {
        if (t4 != 1) {
            return t4;
        }
        return FUN_0c158f5a(a4, a5, a6, a7);
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c03fbcc(int a4)
{
    register int t1;

    FUN_0c187b48(a4, 0x0, 0xAC);
    t1 = *(int *)0xC40D6C4;
    *(unsigned int *)0xC40D6C4 = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC40D644)) = a4;
    FUN_0c187798(0xC40D6C4);
    (((struct o64_ushort *)(a4))->v) = (*(short *)0xC1B7A30);
    return 0x64;
}

int FUN_0c03fcfc(int a4)
{
    register int t1;

    FUN_0c187b48(a4, 0x0, 0xAC);
    t1 = *(int *)0xC40DC48;
    *(unsigned int *)0xC40DC48 = (t1 + 0x1);
    *(unsigned int *)(((((t1 + 0x1) - 1) << 2) + 0xC40DC28)) = a4;
    FUN_0c187798(0xC40DC48);
    (((struct o64_ushort *)(a4))->v) = (*(short *)0xC1B7A30);
    return 0x64;
}

int FUN_0c137a9a(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1377FE;
        *(volatile int *)(((int)stk + 0));
        t4 = (FUN_0c187798(t0));
    }
    return t4;
}

int FUN_0c137c7c(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC137AD2;
        *(volatile int *)(((int)stk + 0));
        t4 = (FUN_0c187798(t0));
    }
    return t4;
}

int FUN_0c1396c4(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13954C;
        *(volatile int *)(((int)stk + 0));
        t4 = (FUN_0c187798(t0));
    }
    return t4;
}

int FUN_0c146fa2(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC146B78;
        *(volatile int *)(((int)stk + 0));
        t4 = (FUN_0c187798(t0));
    }
    return t4;
}

int FUN_0c1582e8(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC158014;
        *(volatile int *)(((int)stk + 0));
        t4 = (FUN_0c187798(t0));
    }
    return t4;
}

int FUN_0c15ab94(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15A8BC;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (FUN_0c187798(t0));
    }
    return t2;
}

int FUN_0c163f66(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t4;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC163D06;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(volatile int *)(((int)stk + 0));
        t4 = (FUN_0c187798(t0));
    }
    return t4;
}

int FUN_0c171698(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 1.0f;
    (((struct o40_float *)(a4))->v) = 1.0f;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    return 0xA8;
}
