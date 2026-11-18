/* game/unsorted: functions 0C0FFCF8-0C0FFFF0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
float math_cos_angle16(int);
int FUN_0c18778c(int, int);
int FUN_0c0ffcf8(int a4);
int FUN_0c0ffdae(int a4);
int FUN_0c0ffebc(void);
int FUN_0c0fff14(int a4);

int FUN_0c0ffcf8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = FUN_0c037320((*(int *)((((((a4 << 1) + a4) << 2) + 0xC1FBB64) + 0x0))), (*(int *)(((*(int *)((((((a4 << 1) + a4) << 2) + 0xC1FBB64) + 0x8))) + 0x0))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)((((((a4 << 1) + a4) << 2) + 0xC1FBB64) + 0x0))), (*(int *)(((*(int *)((((((a4 << 1) + a4) << 2) + 0xC1FBB64) + 0x8))) + 0x0))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = ((*(short *)((((((a4 << 1) + a4) << 2) + 0xC1FBB64) + 0x4))) | 0xF);
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        (((struct oB0_float *)(t1))->v) = 1.0f;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0FFBBC;
        *(unsigned char *)((t1 + 0x2)) = a4;
        t2 = a4;
        if (a4 == 1) {
            t3 = 0x0;
            for (;;) {
                if ((int)t3 >= (int)((((struct oC0_int *)(t1))->v))) {
                    break;
                }
                t4 = 0xC4;
                t4 = (t4 + t1);
                t5 = *(int *)((((t3 << 2) + t4) + 0x0));
                t3 = (t3 + 0x1);
                *(unsigned short *)((t5 + 0x6)) = ((*(short *)((t5 + 0x6))) | 0x200);
            }
            t2 = 0xC0;
        }
        t0 = t2;
    }
    return t0;
}


int FUN_0c0ffebc(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x19, (*(int *)0xC4B4118));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x19, (*(int *)0xC4B4118));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x20F;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0FFDAE;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c0fff14(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    t0 = *(int *)0xC472B9C;
    if ((*(short *)((a4 + 0x1C))) != t0) {
        *(unsigned short *)((a4 + 0x1C)) = t0;
        if ((int)(*(short *)((a4 + 0x1C))) >= 0) {
            FUN_0c03733c(a4, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + 0xC1FBC28))), (*(int *)0xC4B4118));
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
    }
    if ((*(short *)((a4 + 0x1C))) == 5) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        u0 = *(float *)0xC10009C;
        u1 = u0;
        u1 = u1 + u0 * (math_cos_angle16((((*(short *)((a4 + 0x1E))) << 8) << 2)));
        (((struct oB0_float *)(a4))->v) = u1;
        t0 = ((*(short *)((a4 + 0x1E))) + 0x1);
    } else {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1E)) = t0;
    return t0;
}
