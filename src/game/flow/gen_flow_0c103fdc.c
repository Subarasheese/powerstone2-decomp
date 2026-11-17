/* game/flow: functions 0C103FDC-0C1041BC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c103fdc(int a4);
int FUN_0c104044(int a4, int a5, int a6, int a7);
int FUN_0c104146(int a4);

int FUN_0c103fdc(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((*(int *)(((a4 << 2) + 0xC2909E8))), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)(((a4 << 2) + 0xC2909E8))), (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = a4;
        *(unsigned int *)((t1 + 0x4)) = 0xC103E18;
        (((struct o30_float *)(t1))->v) = (*(float *)0xC1040F0);
        (((struct o48_float *)(t1))->v) = 1.0f;
        t0 = 0x48;
    }
    return t0;
}

int FUN_0c104044(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.100000001f);
                if (0.0f > ((((struct oB0_float *)(a4))->v))) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return 0xB0;
            }
            if (((*(signed char *)0xC541F43) == 0) && (t0 = *(signed char *)0xC541F44, t0 == 0)) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                (((struct oB0_float *)(a4))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            } else {
                t1 = *(signed char *)((a4 + 0x2));
                t0 = t1;
                if (t1 != (*(int *)0xC472CF8)) {
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                    (((struct oB0_float *)(a4))->v) = 1.0f;
                    FUN_0c104146((*(int *)0xC472CF8));
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t0 = 0x15;
                }
            }
            return t0;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.100000001f);
    t0 = 0xB0;
    if (((((struct oB0_float *)(a4))->v)) > 1.0f) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c104146(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((*(int *)(((a4 << 2) + 0xC2909F8))), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)(((a4 << 2) + 0xC2909F8))), (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned int *)((t1 + 0x4)) = 0xC104044;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t1 + 0x2)) = a4;
        (((struct o28_float *)(t1))->v) = 136.0f;
        (((struct o2C_float *)(t1))->v) = 50.0f;
        (((struct o30_float *)(t1))->v) = -5.0f;
        t0 = 0x30;
    }
    return t0;
}
