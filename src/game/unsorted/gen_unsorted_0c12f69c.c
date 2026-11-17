/* game/unsorted: functions 0C12F69C-0C12F7F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c12f69c(int a4, int a5);

int FUN_0c12f69c(int a4, int a5)
{
    int stk[1];
    register int t1;
    register int t38;
    register int t3;
    register int t15;
    register int t2;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t1 = FUN_0c03f444(0x5, 0x0, (*(int *)0xC201E68));
    t38 = t1;
    if (t1 == 0) {
    } else {
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)((((struct oC0_int *)(t1))->v))) {
                break;
            }
            t4 = 0xC4;
            t2 = t3;
            t2 = (t2 << 2);
            t4 = (t4 + t1);
            t4 = (t4 + t2);
            t4 = (*(int *)((t4 + 0x0)));
            FUN_0c03744a(t4, (*(int *)((t2 + 0xC201E64))), 0x0, (*(int *)((((*(signed char *)(((0x1 + a4) + 0x0))) << 2) + 0xC4B40FC))));
            *(unsigned short *)((t4 + 0x6)) = 0x41F;
            t3 = (t3 + 0x1);
            (((struct o14_float *)(t4))->v) = 1.0f;
        }
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x4)) = 0xC12F828;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o54_float *)(t1))->v) = 0.0f;
        (((struct o50_float *)(t1))->v) = 0.0f;
        (((struct o4C_float *)(t1))->v) = 0.0f;
        (((struct o48_float *)(t1))->v) = 0.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        (((struct o40_float *)(t1))->v) = 0.0f;
        *(unsigned short *)((t1 + 0x1C)) = 0x14;
        *(unsigned short *)((t1 + 0x1E)) = 0x32;
        (((struct o20_ushort *)(t1))->v) = 0x40;
        (((struct o15_uchar *)(t1))->v) = (*(signed char *)(((int)stk + 0)));
        t15 = *(signed char *)(((int)stk + 0));
        if (t15 != 0) {
            t38 = t15;
            if (t15 != 10) {
            } else {
                (((struct o14_uchar *)(t1))->v) = 0xA;
                (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) + 0.0f);
                (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 100.0f);
                (((struct o30_float *)(t1))->v) = (((((struct o30_float *)(t1))->v)) + 0.0f);
                *(unsigned int *)((t1 + 0x34)) = ((*(int *)((t1 + 0x34))) - 0x4000);
                *(unsigned int *)((t1 + 0x38)) = ((*(int *)((t1 + 0x38))) + 0x4000);
                t38 = 0x30;
            }
        } else {
            (((struct o14_uchar *)(t1))->v) = 0xA;
            (((struct oA4_uint *)(t1))->v) = (((((struct oF4_int *)(a4))->v)) + 0x28);
            (((struct o28_float *)(t1))->v) = -20.0f;
            (((struct o2C_float *)(t1))->v) = 0.0f;
            (((struct o30_float *)(t1))->v) = 0.0f;
            *(unsigned int *)((t1 + 0x34)) = ((*(int *)((t1 + 0x34))) + 0x4000);
            *(unsigned int *)((t1 + 0x3C)) = ((*(int *)((t1 + 0x3C))) + 0x38E);
            t38 = 0x30;
        }
    }
    return t38;
}
