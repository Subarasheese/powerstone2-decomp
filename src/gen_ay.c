/* Straight-line functions with calls and guards (batch gen_ay): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3770_int { char p[0x3770]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0918ea(int);
int FUN_0c091a44(int);
int FUN_0c091ad0(int);
int FUN_0c187798(int, int, int);
int FUN_0c0dc1bc(int a4, int a5, int a6, int a7);
int FUN_0c070162(int a4, int a5, int a6, int a7);
int FUN_0c091b30(int a4, int a5, int a6, int a7);

int FUN_0c0dc1bc(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798(a4, a5, a6);
        *(unsigned int *)((t0 + 0x38)) = (int)(((float)(*(int *)((0xC287F10 + ((*(signed char *)((t0 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
        (((struct o14_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x14))) + 0x1);
        return 0x14;
    }
    t0 = *(signed char *)0xC54098D;
    if (t0 == 3) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return t0;
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

int FUN_0c091b30(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x16))) < (int)0x2) && (t0 = (((struct o3770_int *)(a4))->v), t0 == 0)) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c091ad0(a4);
        }
        return FUN_0c091a44(a4);
    }
    return FUN_0c0918ea(a4);
}
