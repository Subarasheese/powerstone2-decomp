/* game/unsorted: functions 0C12BBC0-0C12BE28, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c12bbc0(int a4, int a5);

int FUN_0c12bbc0(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t28;
    register int t8;
    register int t12;
    register float u15;
    register int t26;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t28 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC12BCBE;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        t8 = ((int (*)(void))(FUN_0c187798))();
        if ((*(signed char *)((t3 + 0x2))) == 0) {
            *(unsigned int *)((t3 + 0x34)) = 0x0;
        } else {
            *(unsigned int *)((t3 + 0x34)) = 0x4000;
        }
        t12 = ((int (*)(int))(FUN_0c187798))(0x0);
        u15 = 150.0f;
        if ((*(signed char *)((t3 + 0x2))) == 0) {
            u15 = 100.0f;
        }
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + u15);
        (((struct o48_float *)(t3))->v) = 0.0f;
        (((struct o44_float *)(t3))->v) = 0.0f;
        (((struct o40_float *)(t3))->v) = 0.0f;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        (((struct o6C_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)0xC12BD14);
        (((struct o70_float *)(((((struct oC4_int *)(t3))->v))))->v) = 0.0f;
        (((struct o74_float *)(((((struct oC4_int *)(t3))->v))))->v) = 0.0f;
        (((struct o78_uint *)(((((struct oC4_int *)(t3))->v))))->v) = 0x71C;
        (((struct o7C_uint *)(((((struct oC4_int *)(t3))->v))))->v) = t26;
        (((struct o80_uint *)(((((struct oC4_int *)(t3))->v))))->v) = t26;
        t28 = 0x80;
    }
    return t28;
}
