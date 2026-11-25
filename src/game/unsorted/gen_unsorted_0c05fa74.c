/* game/unsorted: functions 0C05FA74-0C05FF78, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int sys_vsync_handler_install(int, int, int, int);
int FUN_0c02d294(void);
int FUN_0c02d4dc(void);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c056e80(void);
int FUN_0c057384(void);
int FUN_0c05b490(void);
int nlFreeCommonTextureAll(void);
int FUN_0c176b90(int);
int FUN_0c178ac0(int, int);
int nlInitPrint(void);
int nlPrnIndentOn(void);
int FUN_0c0dd310(void);
int nlObjPutInit(void);
int FUN_0c05fa74(int a4, int a5, int a6, int a7);
int FUN_0c05fe02(void);
int FUN_0c05fe26(int a4, int a5, int a6, int a7);
int FUN_0c05fe7c(int a4, int a5);
int FUN_0c05fecc(int a4, int a5, int a6, int a7);
int FUN_0c05ff24(void);


int FUN_0c05fe02(void)
{
    FUN_0c05fe7c(0x0, 0x0);
    FUN_0c05fe7c(0x1, 0x0);
    FUN_0c05fe7c(0x2, 0x0);
    FUN_0c05fe7c(0x3, 0x0);
    FUN_0c05fe7c(0x5, 0x1);
    return FUN_0c05ff24();
}

int FUN_0c05fe26(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x1, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    if ((*(signed char *)((a4 + 0x2))) == (unsigned char)(*(signed char *)0xC541F42)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    return 0xA8;
}

int FUN_0c05fe7c(int a4, int a5)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t8;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t8 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x4)) = 0xC05FE26;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        t8 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t3 + 0x2)) = t8;
    }
    return t8;
}

int FUN_0c05fecc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;
    register int t5;
    register int t11;
    register int t12;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, 0x1, a7);
        }
        (((struct o2C_float *)(a4))->v) = (*(float *)((0xC1C48CC + (((((struct o0_short *)0xC541F4E)->v)) << 2))));
        if (((*(signed char *)0xC541F42) == 0) && ((t4 = *(signed char *)0xC541F43, (unsigned char)t4 != 2) || (t5 = (((struct o2_short *)0xC541F4E)->v), (t5 & 6) != 0))) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        return 0xA8;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC1C48CC + (((((struct o0_short *)0xC541F4E)->v)) << 2))));
    if (((*(signed char *)0xC541F42) == 0) && ((t11 = *(signed char *)0xC541F43, (unsigned char)t11 != 2) || (t12 = (((struct o2_short *)0xC541F4E)->v), (t12 & 6) != 0))) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    return 0xA8;
}

int FUN_0c05ff24(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x4, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x4, (*(int *)0xC4B410C));
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC05FECC;
        (((struct o28_float *)(t1))->v) = -215.0f;
        (((struct o30_float *)(t1))->v) = (1.0f + 1.0f);
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t0 = 0xA9;
    }
    return t0;
}
