/* game/unsorted: functions 0C06F91C-0C070240, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3778_int { char p[0x3778]; int v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07c500(int);
int FUN_0c07dbd8(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0cb266(int, int);
int FUN_0c06f91c(int a4);
int FUN_0c070016(int a4);
int FUN_0c0700b0(int a4);
int FUN_0c070162(int a4, int a5, int a6, int a7);
int FUN_0c0701c2(int a4, int a5, int a6, int a7);
int FUN_0c070212(int a4);

int FUN_0c06f91c(int a4)
{
    int t0;
    register int t1;
    register int t2;

    (((struct o374A_uchar *)(a4))->v) = 0xA;
    (((struct o374B_uchar *)(a4))->v) = 0xA;
    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
    if ((int)(short)(t1 + 0x1) > (int)0x12C) {
        return FUN_0c07c500(a4);
    }
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        t2 = t1;
        if (t1 == 1) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            if (!(((((struct oB0_float *)(a4))->v)) > 0.5f) && (t0 = *(short *)((a4 + 0x1C)), (int)t0 <= (int)0xF0)) {
                t1 = t0;
            } else {
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) * 0.949999988f);
                t1 = 0xB0;
            }
            t2 = t1;
        }
        t0 = t2;
    } else {
        if ((*(short *)((a4 + 0x1C))) == 19) {
            FUN_0c07dbd8(a4, 0x4A);
        }
        t1 = *(short *)((a4 + 0x1C));
        t2 = t1;
        if ((int)t1 >= (int)0x28) {
            (((struct o50_float *)(a4))->v) = 3.0f;
            (((struct oB0_float *)(a4))->v) = 1.0f;
            if ((*(signed char *)0xC542237) == 4) {
                FUN_0c0cb266(a4, 0x0);
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c070016(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct o3778_int *)(a4))->v);
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(t0))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(t0))->v));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(t0))->v)) + -151.0f);
    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - (1.0f / (float)(*(short *)((a4 + 0x1C)))));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o3756_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o3830_ushort *)(a4))->v) = 0x0;
        (((struct o374B_uchar *)(a4))->v) = 0xA;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0700b0(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x10));
    (((struct o3756_uchar *)(a4))->v) = 0x1;
    (((struct o374B_uchar *)(a4))->v) = 0xA;
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(t0))->v)) - ((((struct o28_float *)(a4))->v))) / (float)(*(short *)((a4 + 0x1C)))));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(t0))->v)) - ((((struct o30_float *)(a4))->v))) / (float)(*(short *)((a4 + 0x1C)))));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (((((((struct o2C_float *)(t0))->v)) - ((((struct o2C_float *)(a4))->v))) + -151.0f) / (float)(*(short *)((a4 + 0x1C)))));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 0.0f;
        (((struct o3756_uchar *)(a4))->v) = 0x0;
        (((struct o374B_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c070162(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t10;

    t0 = *(int *)((a4 + 0x10));
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(t0))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(t0))->v));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(t0))->v)) + (*(float *)0xC0701F4));
    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + (1.0f / (float)(*(short *)((a4 + 0x1C)))));
    if (((((struct oB0_float *)(a4))->v)) > 1.0f) {
        (((struct oB0_float *)(a4))->v) = 1.0f;
    }
    t10 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t10 - 1);
    if ((int)(short)(t10 - 1) <= 0) {
        (((struct oB0_float *)(a4))->v) = 1.0f;
        return FUN_0c085d0c(a4, t0, a6, a7);
    }
    return (short)(t10 - 1);
}

int FUN_0c0701c2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        FUN_0c070016(a4);
        break;
    case 1:
        FUN_0c0700b0(a4);
        break;
    case 2:
        FUN_0c070162(a4, a5, a6, a7);
        break;
    }
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x2;
    return 0x374A;
}

int FUN_0c070212(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        return FUN_0c085cac(a4, 0x5, 0x3);
    }
    return (unsigned char)t0;
}
