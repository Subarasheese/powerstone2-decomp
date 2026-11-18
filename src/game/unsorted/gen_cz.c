/* Straight-line functions with calls and guards (batch gen_cz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o376C_int { char p[0x376C]; int v; };
struct o50_float { char p[0x50]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c089544(int a4, int a5, int a6);
int FUN_0c08871a(int a4, int a5, int a6);
int FUN_0c0767a4(int a4, int a5, int a6);
int FUN_0c0d17e4(int a4, int a5, int a6, int a7);
int FUN_0c0775d8(int a4, int a5, int a6);

int FUN_0c089544(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t1 = FUN_0c085f66(a4);
        if (t1 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        (((struct o50_float *)(a4))->v) = 0.0f;
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c08871a(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t1 = FUN_0c085f66(a4);
        if (t1 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0767a4(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        if (((((struct o160_float *)(a4))->v)) > 0.0f) {
            return FUN_0c085cac(a4, 0xF, 0x0);
        }
        return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
    }
    return (unsigned char)t0;
}

int FUN_0c0d17e4(int a4, int a5, int a6, int a7)
{
    register int t6;

    t6 = *(signed char *)((a4 + 0x15));
    if (t6 != 0) {
        
    } else {
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t6 = 0x15;
    }
    return t6;
}

int FUN_0c0775d8(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085cac(a4, 0x11, (*(signed char *)((a4 + 0x3741))));
    }
    return (unsigned char)t0;
}
